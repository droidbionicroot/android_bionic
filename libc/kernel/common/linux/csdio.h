/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef CSDIO_H
#define CSDIO_H

#include <linux/ioctl.h>

#define CSDIO_IOC_MAGIC 'm'

#define CSDIO_IOC_ENABLE_HIGHSPEED_MODE _IO(CSDIO_IOC_MAGIC, 0)
#define CSDIO_IOC_SET_DATA_TRANSFER_CLOCKS _IO(CSDIO_IOC_MAGIC, 1)
#define CSDIO_IOC_SET_OP_CODE _IO(CSDIO_IOC_MAGIC, 2)
#define CSDIO_IOC_FUNCTION_SET_BLOCK_SIZE _IO(CSDIO_IOC_MAGIC, 3)
#define CSDIO_IOC_SET_BLOCK_MODE _IO(CSDIO_IOC_MAGIC, 4)
#define CSDIO_IOC_CONNECT_ISR _IO(CSDIO_IOC_MAGIC, 5)
#define CSDIO_IOC_DISCONNECT_ISR _IO(CSDIO_IOC_MAGIC, 6)
#define CSDIO_IOC_CMD52 _IO(CSDIO_IOC_MAGIC, 7)
#define CSDIO_IOC_CMD53 _IO(CSDIO_IOC_MAGIC, 8)
#define CSDIO_IOC_ENABLE_ISR _IO(CSDIO_IOC_MAGIC, 9)
#define CSDIO_IOC_DISABLE_ISR _IO(CSDIO_IOC_MAGIC, 10)

#define CSDIO_IOC_MAXNR 10

struct csdio_cmd53_ctrl_t {
 uint32_t m_block_mode;
 uint32_t m_op_code;
 uint32_t m_address;
} __attribute__ ((packed));

struct csdio_cmd52_ctrl_t {
 uint32_t m_write;
 uint32_t m_address;
 uint32_t m_data;
 uint32_t m_ret;
} __attribute__ ((packed));

#endif

