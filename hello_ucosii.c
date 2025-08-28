/*************************************************************************
* Copyright (c) 2004 Altera Corporation, San Jose, California, USA.      *
* All rights reserved. All use of this software and documentation is     *
* subject to the License Agreement located at the end of this file below.*
**************************************************************************
* Description:                                                           *
* The following is a simple hello world program running MicroC/OS-II.The * 
* purpose of the design is to be a very simple application that just     *
* demonstrates MicroC/OS-II running on NIOS II.The design doesn't account*
* for issues such as checking system call return codes. etc.             *
*                                                                        *
* Requirements:                                                          *
*   -Supported Example Hardware Platforms                                *
*     Standard                                                           *
*     Full Featured                                                      *
*     Low Cost                                                           *
*   -Supported Development Boards                                        *
*     Nios II Development Board, Stratix II Edition                      *
*     Nios Development Board, Stratix Professional Edition               *
*     Nios Development Board, Stratix Edition                            *
*     Nios Development Board, Cyclone Edition                            *
*   -System Library Settings                                             *
*     RTOS Type - MicroC/OS-II                                           *
*     Periodic System Timer                                              *
*   -Know Issues                                                         *
*     If this design is run on the ISS, terminal output will take several*
*     minutes per iteration.                                             *
**************************************************************************/


#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "system.h"
#include "io.h"
#include "includes.h"
#include <altera_avalon_pio_regs.h>
/* Definition of Task Stacks */
#define   TASK_STACKSIZE       2048
OS_STK    task1_stk[TASK_STACKSIZE];
OS_STK    task2_stk[TASK_STACKSIZE];

/* Definition of Task Priorities */

#define TASK1_PRIORITY      1
#define TASK2_PRIORITY      2
#define RSA_BASE 0x00042000
/* Prints "Hello World" and sleeps for three seconds */
void task1(void* pdata)
{
  while (1)
  { 
	  printf("Starting RSA keygen/encrypt/decrypt test (p=3, q=5, message=5)...\n");

	      // Step 1: Trigger the RSA FSM
	      IOWR(RSA_BASE, 0x00, 1);  // Write 1 to 'start' register

	      // Step 2: Wait for 'done' flag to go high (bit 0 of address 0x06)
	      while ((IORD(RSA_BASE, 0x06) & 0x1) == 0) {
	          usleep(1000); // wait 1ms
	      }

	      // Step 3: Read the results
	      uint32_t e         = IORD(RSA_BASE, 0x01);
	      uint32_t d         = IORD(RSA_BASE, 0x02);
	      uint32_t n         = IORD(RSA_BASE, 0x03);
	      uint32_t cipher    = IORD(RSA_BASE, 0x04);
	      uint32_t decrypted = IORD(RSA_BASE, 0x05);

	      // Step 4: Display the results
	      printf("RSA Operation Complete!\n");
	      printf("Public key  (e, n) = (%u, %u)\n", e, n);
	      printf("Private key (d, n) = (%u, %u)\n", d, n);
	      printf("Ciphertext         = %u\n", cipher);
	      printf("Decrypted message  = %u\n", decrypted);

	      if (decrypted == 5) {
	          printf("SUCCESS: Decrypted message matches expected value.\n");
	      } else {
	          printf("ERROR: Decrypted value does not match expected.\n");
	      }
    OSTimeDlyHMSM(0, 0, 20, 0);
  }
}
/* Prints "Hello World" and sleeps for three seconds */
void task2(void* pdata)
{
  while (1)
  { 
    printf("178/278 is fun \n");
    IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 0x000000CF); // i
    IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 0x00000092); // s
    IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 0x000000CF); // i
    IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 0x00000086); // e
    IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 0x00000088); // a
    IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 0x000000AF); // r

    OSTimeDlyHMSM(0, 0, 3, 0);
  }
}
/* The main function creates two task and starts multi-tasking */
int main(void)
{

  printf("MicroC/OS-II Licensing Terms\n");
  printf("============================\n");
  printf("Micrium\'s uC/OS-II is a real-time operating system (RTOS) available in source code.\n");
  printf("This is not open-source software.\n");
  printf("This RTOS can be used free of charge only for non-commercial purposes and academic projects,\n");
  printf("any other use of the code is subject to the terms of an end-user license agreement\n");
  printf("for more information please see the license files included in the BSP project or contact Micrium.\n");
  printf("Anyone planning to use a Micrium RTOS in a commercial product must purchase a commercial license\n");
  printf("from the owner of the software, Silicon Laboratories Inc.\n");
  printf("Licensing information is available at:\n");
  printf("Phone: +1 954-217-2036\n");
  printf("Email: sales@micrium.com\n");
  printf("URL: www.micrium.com\n\n\n");  

  OSTaskCreateExt(task1,
                  NULL,
                  (void *)&task1_stk[TASK_STACKSIZE-1],
                  TASK1_PRIORITY,
                  TASK1_PRIORITY,
                  task1_stk,
                  TASK_STACKSIZE,
                  NULL,
                  0);
              
               
  OSTaskCreateExt(task2,
                  NULL,
                  (void *)&task2_stk[TASK_STACKSIZE-1],
                  TASK2_PRIORITY,
                  TASK2_PRIORITY,
                  task2_stk,
                  TASK_STACKSIZE,
                  NULL,
                  0);
  OSStart();
  return 0;
}

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2004 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
* Altera does not recommend, suggest or require that this reference design    *
* file be used in conjunction or combination with any other product.          *
******************************************************************************/
