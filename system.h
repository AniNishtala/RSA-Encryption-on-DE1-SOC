/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'niosII' in SOPC Builder design 'HW1'
 * SOPC Builder design path: ../../HW1.sopcinfo
 *
 * Generated: Wed Aug 06 12:21:51 PDT 2025
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00041820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "niosII"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00041820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __PWM
#define __RSA32BIT


/*
 * HEX0 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX0 altera_avalon_pio
#define HEX0_BASE 0x42110
#define HEX0_BIT_CLEARING_EDGE_REGISTER 0
#define HEX0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX0_CAPTURE 0
#define HEX0_DATA_WIDTH 7
#define HEX0_DO_TEST_BENCH_WIRING 0
#define HEX0_DRIVEN_SIM_VALUE 0
#define HEX0_EDGE_TYPE "NONE"
#define HEX0_FREQ 100000000
#define HEX0_HAS_IN 0
#define HEX0_HAS_OUT 1
#define HEX0_HAS_TRI 0
#define HEX0_IRQ -1
#define HEX0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX0_IRQ_TYPE "NONE"
#define HEX0_NAME "/dev/HEX0"
#define HEX0_RESET_VALUE 0
#define HEX0_SPAN 16
#define HEX0_TYPE "altera_avalon_pio"


/*
 * HEX1 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX1 altera_avalon_pio
#define HEX1_BASE 0x42100
#define HEX1_BIT_CLEARING_EDGE_REGISTER 0
#define HEX1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX1_CAPTURE 0
#define HEX1_DATA_WIDTH 7
#define HEX1_DO_TEST_BENCH_WIRING 0
#define HEX1_DRIVEN_SIM_VALUE 0
#define HEX1_EDGE_TYPE "NONE"
#define HEX1_FREQ 100000000
#define HEX1_HAS_IN 0
#define HEX1_HAS_OUT 1
#define HEX1_HAS_TRI 0
#define HEX1_IRQ -1
#define HEX1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX1_IRQ_TYPE "NONE"
#define HEX1_NAME "/dev/HEX1"
#define HEX1_RESET_VALUE 0
#define HEX1_SPAN 16
#define HEX1_TYPE "altera_avalon_pio"


/*
 * HEX2 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX2 altera_avalon_pio
#define HEX2_BASE 0x420f0
#define HEX2_BIT_CLEARING_EDGE_REGISTER 0
#define HEX2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX2_CAPTURE 0
#define HEX2_DATA_WIDTH 7
#define HEX2_DO_TEST_BENCH_WIRING 0
#define HEX2_DRIVEN_SIM_VALUE 0
#define HEX2_EDGE_TYPE "NONE"
#define HEX2_FREQ 100000000
#define HEX2_HAS_IN 0
#define HEX2_HAS_OUT 1
#define HEX2_HAS_TRI 0
#define HEX2_IRQ -1
#define HEX2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX2_IRQ_TYPE "NONE"
#define HEX2_NAME "/dev/HEX2"
#define HEX2_RESET_VALUE 0
#define HEX2_SPAN 16
#define HEX2_TYPE "altera_avalon_pio"


/*
 * HEX3 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX3 altera_avalon_pio
#define HEX3_BASE 0x420e0
#define HEX3_BIT_CLEARING_EDGE_REGISTER 0
#define HEX3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX3_CAPTURE 0
#define HEX3_DATA_WIDTH 7
#define HEX3_DO_TEST_BENCH_WIRING 0
#define HEX3_DRIVEN_SIM_VALUE 0
#define HEX3_EDGE_TYPE "NONE"
#define HEX3_FREQ 100000000
#define HEX3_HAS_IN 0
#define HEX3_HAS_OUT 1
#define HEX3_HAS_TRI 0
#define HEX3_IRQ -1
#define HEX3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX3_IRQ_TYPE "NONE"
#define HEX3_NAME "/dev/HEX3"
#define HEX3_RESET_VALUE 0
#define HEX3_SPAN 16
#define HEX3_TYPE "altera_avalon_pio"


/*
 * HEX4 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX4 altera_avalon_pio
#define HEX4_BASE 0x420d0
#define HEX4_BIT_CLEARING_EDGE_REGISTER 0
#define HEX4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX4_CAPTURE 0
#define HEX4_DATA_WIDTH 7
#define HEX4_DO_TEST_BENCH_WIRING 0
#define HEX4_DRIVEN_SIM_VALUE 0
#define HEX4_EDGE_TYPE "NONE"
#define HEX4_FREQ 100000000
#define HEX4_HAS_IN 0
#define HEX4_HAS_OUT 1
#define HEX4_HAS_TRI 0
#define HEX4_IRQ -1
#define HEX4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX4_IRQ_TYPE "NONE"
#define HEX4_NAME "/dev/HEX4"
#define HEX4_RESET_VALUE 0
#define HEX4_SPAN 16
#define HEX4_TYPE "altera_avalon_pio"


/*
 * HEX5 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX5 altera_avalon_pio
#define HEX5_BASE 0x420c0
#define HEX5_BIT_CLEARING_EDGE_REGISTER 0
#define HEX5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX5_CAPTURE 0
#define HEX5_DATA_WIDTH 7
#define HEX5_DO_TEST_BENCH_WIRING 0
#define HEX5_DRIVEN_SIM_VALUE 0
#define HEX5_EDGE_TYPE "NONE"
#define HEX5_FREQ 100000000
#define HEX5_HAS_IN 0
#define HEX5_HAS_OUT 1
#define HEX5_HAS_TRI 0
#define HEX5_IRQ -1
#define HEX5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX5_IRQ_TYPE "NONE"
#define HEX5_NAME "/dev/HEX5"
#define HEX5_RESET_VALUE 0
#define HEX5_SPAN 16
#define HEX5_TYPE "altera_avalon_pio"


/*
 * High_resolution_timer configuration
 *
 */

#define ALT_MODULE_CLASS_High_resolution_timer altera_avalon_timer
#define HIGH_RESOLUTION_TIMER_ALWAYS_RUN 0
#define HIGH_RESOLUTION_TIMER_BASE 0x42080
#define HIGH_RESOLUTION_TIMER_COUNTER_SIZE 32
#define HIGH_RESOLUTION_TIMER_FIXED_PERIOD 0
#define HIGH_RESOLUTION_TIMER_FREQ 100000000
#define HIGH_RESOLUTION_TIMER_IRQ 1
#define HIGH_RESOLUTION_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define HIGH_RESOLUTION_TIMER_LOAD_VALUE 99
#define HIGH_RESOLUTION_TIMER_MULT 1.0E-6
#define HIGH_RESOLUTION_TIMER_NAME "/dev/High_resolution_timer"
#define HIGH_RESOLUTION_TIMER_PERIOD 1
#define HIGH_RESOLUTION_TIMER_PERIOD_UNITS "us"
#define HIGH_RESOLUTION_TIMER_RESET_OUTPUT 0
#define HIGH_RESOLUTION_TIMER_SNAPSHOT 1
#define HIGH_RESOLUTION_TIMER_SPAN 32
#define HIGH_RESOLUTION_TIMER_TICKS_PER_SEC 1000000
#define HIGH_RESOLUTION_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define HIGH_RESOLUTION_TIMER_TYPE "altera_avalon_timer"


/*
 * PWM configuration
 *
 */

#define ALT_MODULE_CLASS_PWM PWM
#define PWM_BASE 0x42150
#define PWM_IRQ -1
#define PWM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_NAME "/dev/PWM"
#define PWM_SPAN 16
#define PWM_TYPE "PWM"


/*
 * RSA32Bit_0 configuration
 *
 */

#define ALT_MODULE_CLASS_RSA32Bit_0 RSA32Bit
#define RSA32BIT_0_BASE 0x42000
#define RSA32BIT_0_IRQ -1
#define RSA32BIT_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RSA32BIT_0_NAME "/dev/RSA32Bit_0"
#define RSA32BIT_0_SPAN 128
#define RSA32BIT_0_TYPE "RSA32Bit"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x42168
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x42168
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x42168
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "HW1"


/*
 * TCM configuration
 *
 */

#define ALT_MODULE_CLASS_TCM altera_avalon_onchip_memory2
#define TCM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define TCM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define TCM_BASE 0x40000
#define TCM_CONTENTS_INFO ""
#define TCM_DUAL_PORT 1
#define TCM_GUI_RAM_BLOCK_TYPE "AUTO"
#define TCM_INIT_CONTENTS_FILE "HW1_TCM"
#define TCM_INIT_MEM_CONTENT 1
#define TCM_INSTANCE_ID "NONE"
#define TCM_IRQ -1
#define TCM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TCM_NAME "/dev/TCM"
#define TCM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define TCM_RAM_BLOCK_TYPE "AUTO"
#define TCM_READ_DURING_WRITE_MODE "DONT_CARE"
#define TCM_SINGLE_CLOCK_OP 0
#define TCM_SIZE_MULTIPLE 1
#define TCM_SIZE_VALUE 4096
#define TCM_SPAN 4096
#define TCM_TYPE "altera_avalon_onchip_memory2"
#define TCM_WRITABLE 1


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYSTEM_TIMER
#define ALT_TIMESTAMP_CLK HIGH_RESOLUTION_TIMER


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x42168
#define JTAG_UART_IRQ 2
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * keys configuration
 *
 */

#define ALT_MODULE_CLASS_keys altera_avalon_pio
#define KEYS_BASE 0x42120
#define KEYS_BIT_CLEARING_EDGE_REGISTER 0
#define KEYS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYS_CAPTURE 1
#define KEYS_DATA_WIDTH 4
#define KEYS_DO_TEST_BENCH_WIRING 0
#define KEYS_DRIVEN_SIM_VALUE 0
#define KEYS_EDGE_TYPE "FALLING"
#define KEYS_FREQ 100000000
#define KEYS_HAS_IN 1
#define KEYS_HAS_OUT 0
#define KEYS_HAS_TRI 0
#define KEYS_IRQ 4
#define KEYS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEYS_IRQ_TYPE "EDGE"
#define KEYS_NAME "/dev/keys"
#define KEYS_RESET_VALUE 0
#define KEYS_SPAN 16
#define KEYS_TYPE "altera_avalon_pio"


/*
 * onchip configuration
 *
 */

#define ALT_MODULE_CLASS_onchip altera_avalon_onchip_memory2
#define ONCHIP_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_BASE 0x20000
#define ONCHIP_CONTENTS_INFO ""
#define ONCHIP_DUAL_PORT 0
#define ONCHIP_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_INIT_CONTENTS_FILE "HW1_onchip"
#define ONCHIP_INIT_MEM_CONTENT 1
#define ONCHIP_INSTANCE_ID "NONE"
#define ONCHIP_IRQ -1
#define ONCHIP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_NAME "/dev/onchip"
#define ONCHIP_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_SINGLE_CLOCK_OP 0
#define ONCHIP_SIZE_MULTIPLE 1
#define ONCHIP_SIZE_VALUE 131072
#define ONCHIP_SPAN 131072
#define ONCHIP_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_WRITABLE 1


/*
 * red_leds configuration
 *
 */

#define ALT_MODULE_CLASS_red_leds altera_avalon_pio
#define RED_LEDS_BASE 0x42130
#define RED_LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define RED_LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RED_LEDS_CAPTURE 0
#define RED_LEDS_DATA_WIDTH 10
#define RED_LEDS_DO_TEST_BENCH_WIRING 0
#define RED_LEDS_DRIVEN_SIM_VALUE 0
#define RED_LEDS_EDGE_TYPE "NONE"
#define RED_LEDS_FREQ 100000000
#define RED_LEDS_HAS_IN 0
#define RED_LEDS_HAS_OUT 1
#define RED_LEDS_HAS_TRI 0
#define RED_LEDS_IRQ -1
#define RED_LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RED_LEDS_IRQ_TYPE "NONE"
#define RED_LEDS_NAME "/dev/red_leds"
#define RED_LEDS_RESET_VALUE 0
#define RED_LEDS_SPAN 16
#define RED_LEDS_TYPE "altera_avalon_pio"


/*
 * sdram configuration
 *
 */

#define ALT_MODULE_CLASS_sdram altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x8000000
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/sdram"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 1
#define SDRAM_SPAN 67108864
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * switches configuration
 *
 */

#define ALT_MODULE_CLASS_switches altera_avalon_pio
#define SWITCHES_BASE 0x42140
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 1
#define SWITCHES_DATA_WIDTH 10
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE "RISING"
#define SWITCHES_FREQ 100000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ 3
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SWITCHES_IRQ_TYPE "EDGE"
#define SWITCHES_NAME "/dev/switches"
#define SWITCHES_RESET_VALUE 0
#define SWITCHES_SPAN 16
#define SWITCHES_TYPE "altera_avalon_pio"


/*
 * sys_id configuration
 *
 */

#define ALT_MODULE_CLASS_sys_id altera_avalon_sysid_qsys
#define SYS_ID_BASE 0x42160
#define SYS_ID_ID 16843008
#define SYS_ID_IRQ -1
#define SYS_ID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYS_ID_NAME "/dev/sys_id"
#define SYS_ID_SPAN 8
#define SYS_ID_TIMESTAMP 1754366309
#define SYS_ID_TYPE "altera_avalon_sysid_qsys"


/*
 * system_timer configuration
 *
 */

#define ALT_MODULE_CLASS_system_timer altera_avalon_timer
#define SYSTEM_TIMER_ALWAYS_RUN 0
#define SYSTEM_TIMER_BASE 0x420a0
#define SYSTEM_TIMER_COUNTER_SIZE 32
#define SYSTEM_TIMER_FIXED_PERIOD 0
#define SYSTEM_TIMER_FREQ 100000000
#define SYSTEM_TIMER_IRQ 0
#define SYSTEM_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYSTEM_TIMER_LOAD_VALUE 99999
#define SYSTEM_TIMER_MULT 0.001
#define SYSTEM_TIMER_NAME "/dev/system_timer"
#define SYSTEM_TIMER_PERIOD 1
#define SYSTEM_TIMER_PERIOD_UNITS "ms"
#define SYSTEM_TIMER_RESET_OUTPUT 0
#define SYSTEM_TIMER_SNAPSHOT 1
#define SYSTEM_TIMER_SPAN 32
#define SYSTEM_TIMER_TICKS_PER_SEC 1000
#define SYSTEM_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYSTEM_TIMER_TYPE "altera_avalon_timer"


/*
 * ucosii configuration
 *
 */

#define OS_ARG_CHK_EN 1
#define OS_CPU_HOOKS_EN 1
#define OS_DEBUG_EN 1
#define OS_EVENT_NAME_SIZE 32
#define OS_FLAGS_NBITS 16
#define OS_FLAG_ACCEPT_EN 1
#define OS_FLAG_DEL_EN 1
#define OS_FLAG_EN 1
#define OS_FLAG_NAME_SIZE 32
#define OS_FLAG_QUERY_EN 1
#define OS_FLAG_WAIT_CLR_EN 1
#define OS_LOWEST_PRIO 20
#define OS_MAX_EVENTS 60
#define OS_MAX_FLAGS 20
#define OS_MAX_MEM_PART 60
#define OS_MAX_QS 20
#define OS_MAX_TASKS 10
#define OS_MBOX_ACCEPT_EN 1
#define OS_MBOX_DEL_EN 1
#define OS_MBOX_EN 1
#define OS_MBOX_POST_EN 1
#define OS_MBOX_POST_OPT_EN 1
#define OS_MBOX_QUERY_EN 1
#define OS_MEM_EN 1
#define OS_MEM_NAME_SIZE 32
#define OS_MEM_QUERY_EN 1
#define OS_MUTEX_ACCEPT_EN 1
#define OS_MUTEX_DEL_EN 1
#define OS_MUTEX_EN 1
#define OS_MUTEX_QUERY_EN 1
#define OS_Q_ACCEPT_EN 1
#define OS_Q_DEL_EN 1
#define OS_Q_EN 1
#define OS_Q_FLUSH_EN 1
#define OS_Q_POST_EN 1
#define OS_Q_POST_FRONT_EN 1
#define OS_Q_POST_OPT_EN 1
#define OS_Q_QUERY_EN 1
#define OS_SCHED_LOCK_EN 1
#define OS_SEM_ACCEPT_EN 1
#define OS_SEM_DEL_EN 1
#define OS_SEM_EN 1
#define OS_SEM_QUERY_EN 1
#define OS_SEM_SET_EN 1
#define OS_TASK_CHANGE_PRIO_EN 1
#define OS_TASK_CREATE_EN 1
#define OS_TASK_CREATE_EXT_EN 1
#define OS_TASK_DEL_EN 1
#define OS_TASK_IDLE_STK_SIZE 512
#define OS_TASK_NAME_SIZE 32
#define OS_TASK_PROFILE_EN 1
#define OS_TASK_QUERY_EN 1
#define OS_TASK_STAT_EN 1
#define OS_TASK_STAT_STK_CHK_EN 1
#define OS_TASK_STAT_STK_SIZE 512
#define OS_TASK_SUSPEND_EN 1
#define OS_TASK_SW_HOOK_EN 1
#define OS_TASK_TMR_PRIO 0
#define OS_TASK_TMR_STK_SIZE 512
#define OS_THREAD_SAFE_NEWLIB 1
#define OS_TICKS_PER_SEC SYSTEM_TIMER_TICKS_PER_SEC
#define OS_TICK_STEP_EN 1
#define OS_TIME_DLY_HMSM_EN 1
#define OS_TIME_DLY_RESUME_EN 1
#define OS_TIME_GET_SET_EN 1
#define OS_TIME_TICK_HOOK_EN 1
#define OS_TMR_CFG_MAX 16
#define OS_TMR_CFG_NAME_SIZE 16
#define OS_TMR_CFG_TICKS_PER_SEC 10
#define OS_TMR_CFG_WHEEL_SIZE 2
#define OS_TMR_EN 0

#endif /* __SYSTEM_H_ */
