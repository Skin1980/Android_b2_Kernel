/* linux/drivers/media/video/exynos/jpeg/regs-jpeg_v2_x.h
 *
 * Copyright (c) 2012~2013 Samsung Electronics Co., Ltd.
 * http://www.samsung.com/
 *
 * Register definition file for Samsung JPEG v.2 Encoder/Decoder
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARM_REGS_S5P_JPEG_H
#define __ASM_ARM_REGS_S5P_JPEG_H

/* JPEG Registers part */

/* JPEG Codec Control Registers */
#define S5P_JPEG_CNTL_REG		0x00
#define S5P_JPEG_INT_EN_REG		0x04
#define S5P_JPEG_INT_TIMER_COUNT_REG		0x08
#define S5P_JPEG_INT_STATUS_REG		0x0c
#define S5P_JPEG_OUT_MEM_BASE_REG		0x10
#define S5P_JPEG_IMG_SIZE_REG		0x14
#define S5P_JPEG_IMG_BA_PLANE_1_REG		0x18
#define S5P_JPEG_IMG_SO_PLANE_1_REG		0x1c
#define S5P_JPEG_IMG_PO_PLANE_1_REG		0x20
#define S5P_JPEG_IMG_BA_PLANE_2_REG		0x24
#define S5P_JPEG_IMG_SO_PLANE_2_REG		0x28
#define S5P_JPEG_IMG_PO_PLANE_2_REG		0x2c
#define S5P_JPEG_IMG_BA_PLANE_3_REG		0x30
#define S5P_JPEG_IMG_SO_PLANE_3_REG		0x34
#define S5P_JPEG_IMG_PO_PLANE_3_REG		0x38

#define S5P_JPEG_TBL_SEL_REG		0x3c

#define S5P_JPEG_IMG_FMT_REG		0x40

#define S5P_JPEG_BITSTREAM_SIZE_REG		0x44
#define S5P_JPEG_PADDING_REG		0x48
#define S5P_JPEG_HUFF_CNT_REG		0x4c
#define S5P_JPEG_FIFO_STATUS_REG		0x50
#define S5P_JPEG_DECODE_XY_SIZE_REG		0x54
#define S5P_JPEG_DECODE_IMG_FMT_REG		0x58

#define S5P_JPEG_QUAN_TBL_ENTRY_REG		0x100
#define S5P_JPEG_HUFF_TBL_ENTRY_REG		0x200


/****************************************************************/
/* Bit definition part												*/
/****************************************************************/

/* JPEG CNTL Register bit */
#define S5P_JPEG_ENC_DEC_MODE_MASK			(0xfffffffc << 0)
#define S5P_JPEG_DEC_MODE			(1 << 0)
#define S5P_JPEG_ENC_MODE			(1 << 1)
#define S5P_JPEG_AUTO_RST_MARKER		(1 << 2)
#define S5P_JPEG_RST_INTERVAL_SHIFT		3
#define S5P_JPEG_RST_INTERVAL(x)		(((x) & 0xffff) << S5P_JPEG_RST_INTERVAL_SHIFT)
#define S5P_JPEG_HUF_TBL_EN			(1 << 19)
#define S5P_JPEG_HOR_SCALING_SHIFT		20
#define S5P_JPEG_HOR_SCALING_MASK		(3 << S5P_JPEG_HOR_SCALING_SHIFT)
#define S5P_JPEG_HOR_SCALING(x)			(((x) & 0x3) << S5P_JPEG_HOR_SCALING_SHIFT)
#define S5P_JPEG_VER_SCALING_SHIFT		22
#define S5P_JPEG_VER_SCALING_MASK		(3 << S5P_JPEG_VER_SCALING_SHIFT)
#define S5P_JPEG_VER_SCALING(x)			(((x) & 0x3) << S5P_JPEG_VER_SCALING_SHIFT)
#define S5P_JPEG_PADDING			(1 << 27)
#define S5P_JPEG_SYS_INT_EN			(1 << 28)
#define S5P_JPEG_SOFT_RESET_HI			(1 << 29)

/* JPEG INT Register bit */
#define S5P_JPEG_INT_EN_MASK			(0x1ff << 0)
#define S5P_JPEG_INT_EN_ALL			(0x1ff << 0)

#define S5P_JPEG_PROT_ERR_INT_EN			(1 << 0)
#define S5P_JPEG_IMG_COMPLETION_INT_EN			(1 << 1)
#define S5P_JPEG_DEC_INVALID_FORMAT_EN			(1 << 2)
#define S5P_JPEG_MULTI_SCAN_ERROR_EN			(1 << 3)
#define S5P_JPEG_FRAME_ERR_EN			(1 << 4)
#define S5P_JPEG_TIMER_INT_EN			(1 << 5)
#define S5P_JPEG_DEC_UPSAMPLING_ERR_EN		(1 << 6)
#define S5P_JPEG_ENC_WRONG_CONFIG_ERR_EN		(1 << 7)
#define S5P_JPEG_WRONG_IP_CONFIG_ERR_EN			(1 << 8)

#define S5P_JPEG_MOD_REG_PROC_ENC			(0 << 3)
#define S5P_JPEG_MOD_REG_PROC_DEC			(1 << 3)

#define S5P_JPEG_MOD_REG_SUBSAMPLE_444			(0 << 0)
#define S5P_JPEG_MOD_REG_SUBSAMPLE_422			(1 << 0)
#define S5P_JPEG_MOD_REG_SUBSAMPLE_420			(2 << 0)
#define S5P_JPEG_MOD_REG_SUBSAMPLE_GRAY			(3 << 0)


/* JPEG IMAGE SIZE Register bit */
#define S5P_JPEG_X_SIZE_SHIFT		0
#define S5P_JPEG_X_SIZE_MASK		(0xffff << S5P_JPEG_X_SIZE_SHIFT)
#define S5P_JPEG_X_SIZE(x)			(((x) & 0xffff) << S5P_JPEG_X_SIZE_SHIFT)
#define S5P_JPEG_Y_SIZE_SHIFT		16
#define S5P_JPEG_Y_SIZE_MASK		(0xffff << S5P_JPEG_Y_SIZE_SHIFT)
#define S5P_JPEG_Y_SIZE(x)			(((x) & 0xffff) << S5P_JPEG_Y_SIZE_SHIFT)

/* JPEG IMAGE FORMAT Register bit */
#define S5P_JPEG_ENC_IN_FMT_MASK		0xffff0000
#define S5P_JPEG_ENC_GRAY_IMG		(0 << 0)
#define S5P_JPEG_ENC_RGB_IMG		(1 << 0)
#define S5P_JPEG_ENC_YUV_444_IMG		(2 << 0)
#define S5P_JPEG_ENC_YUV_422_IMG		(3 << 0)
#define S5P_JPEG_ENC_YUV_440_IMG		(4 << 0)

#define S5P_JPEG_DEC_GRAY_IMG		(0 << 0)
#define S5P_JPEG_DEC_RGB_IMG		(1 << 0)
#define S5P_JPEG_DEC_YUV_444_IMG		(2 << 0)
#define S5P_JPEG_DEC_YUV_422_IMG		(3 << 0)
#define S5P_JPEG_DEC_YUV_420_IMG		(4 << 0)

#define S5P_JPEG_GRAY_IMG_IP_SHIFT		3
#define S5P_JPEG_GRAY_IMG_IP_MASK		(7 << S5P_JPEG_GRAY_IMG_IP_SHIFT)
#define S5P_JPEG_GRAY_IMG_IP			(4 << S5P_JPEG_GRAY_IMG_IP_SHIFT)

#define S5P_JPEG_RGB_IP_SHIFT		6
#define S5P_JPEG_RGB_IP_MASK		(7 << S5P_JPEG_RGB_IP_SHIFT)
#define S5P_JPEG_RGB_IP_RGB_16BIT_IMG		(4 << S5P_JPEG_RGB_IP_SHIFT)
#define S5P_JPEG_RGB_IP_RGB_32BIT_IMG		(5 << S5P_JPEG_RGB_IP_SHIFT)

#define S5P_JPEG_YUV_444_IP_SHIFT		9
#define S5P_JPEG_YUV_444_IP_MASK		(7 << S5P_JPEG_YUV_444_IP_SHIFT)
#define S5P_JPEG_YUV_444_IP_YUV_444_2P_IMG		(4 << S5P_JPEG_YUV_444_IP_SHIFT)
#define S5P_JPEG_YUV_444_IP_YUV_444_3P_IMG		(5 << S5P_JPEG_YUV_444_IP_SHIFT)

#define S5P_JPEG_YUV_422_IP_SHIFT		12
#define S5P_JPEG_YUV_422_IP_MASK		(7 << S5P_JPEG_YUV_422_IP_SHIFT)
#define S5P_JPEG_YUV_422_IP_YUV_422_1P_IMG		(4 << S5P_JPEG_YUV_422_IP_SHIFT)
#define S5P_JPEG_YUV_422_IP_YUV_422_2P_IMG		(5 << S5P_JPEG_YUV_422_IP_SHIFT)
#define S5P_JPEG_YUV_422_IP_YUV_422_3P_IMG		(6 << S5P_JPEG_YUV_422_IP_SHIFT)

#define S5P_JPEG_YUV_420_IP_SHIFT		15
#define S5P_JPEG_YUV_420_IP_MASK		(7 << S5P_JPEG_YUV_420_IP_SHIFT)
#define S5P_JPEG_YUV_420_IP_YUV_420_2P_IMG		(4 << S5P_JPEG_YUV_420_IP_SHIFT)
#define S5P_JPEG_YUV_420_IP_YUV_420_3P_IMG		(5 << S5P_JPEG_YUV_420_IP_SHIFT)

#define S5P_JPEG_ENC_FMT_SHIFT		24
#define S5P_JPEG_ENC_FMT_MASK		(3 << S5P_JPEG_ENC_FMT_SHIFT)
#define S5P_JPEG_ENC_FMT_GRAY		(0 << S5P_JPEG_ENC_FMT_SHIFT)
#define S5P_JPEG_ENC_FMT_YUV_444		(1 << S5P_JPEG_ENC_FMT_SHIFT)
#define S5P_JPEG_ENC_FMT_YUV_422		(2 << S5P_JPEG_ENC_FMT_SHIFT)
#define S5P_JPEG_ENC_FMT_YUV_420		(3 << S5P_JPEG_ENC_FMT_SHIFT)

#define S5P_JPEG_SWAP_CHROMA_CrCb		(1 << 26)
#define S5P_JPEG_SWAP_CHROMA_CbCr		(0 << 26)

#define S5P_JPEG_SWAP_RGB_SHIFT		29
#define S5P_JPEG_SWAP_RGB_MASK		(1 << S5P_JPEG_SWAP_RGB_SHIFT)
#define S5P_JPEG_ENC_FMT_BGR		(1 << S5P_JPEG_SWAP_RGB_SHIFT)
#define S5P_JPEG_ENC_FMT_RGB		(0 << S5P_JPEG_SWAP_RGB_SHIFT)

#define S5P_JPEG_RE_ORDER_YUV_422_1P_SHIFT		27
#define S5P_JPEG_RE_ORDER_YUV_422_1P_MASK		(3 << S5P_JPEG_RE_ORDER_YUV_422_1P_SHIFT)
#define S5P_JPEG_ENC_FMT_YUYV		(0 << S5P_JPEG_RE_ORDER_YUV_422_1P_SHIFT)
#define S5P_JPEG_ENC_FMT_YVYU		(1 << S5P_JPEG_RE_ORDER_YUV_422_1P_SHIFT)
#define S5P_JPEG_ENC_FMT_UYVY		(2 << S5P_JPEG_RE_ORDER_YUV_422_1P_SHIFT)
#define S5P_JPEG_ENC_FMT_VYUY		(3 << S5P_JPEG_RE_ORDER_YUV_422_1P_SHIFT)

/* JPEG HUFF count Register bit */
#define S5P_JPEG_HUFF_COUNT_MASK		0xffff

/* JPEG Decoded_img_x_y_size Register bit */
#define S5P_JPEG_DECODED_SIZE_MASK		0x0000ffff

/* JPEG Decoded image format Register bit */
#define S5P_JPEG_DECODED_IMG_FMT_MASK		0x3

/* JPEG TBL SEL Register bit */
#define S5P_JPEG_Q_TBL_COMP1_SHIFT	0
#define S5P_JPEG_Q_TBL_COMP1_0		(0 << S5P_JPEG_Q_TBL_COMP1_SHIFT)
#define S5P_JPEG_Q_TBL_COMP1_1		(1 << S5P_JPEG_Q_TBL_COMP1_SHIFT)
#define S5P_JPEG_Q_TBL_COMP1_2		(2 << S5P_JPEG_Q_TBL_COMP1_SHIFT)
#define S5P_JPEG_Q_TBL_COMP1_3		(3 << S5P_JPEG_Q_TBL_COMP1_SHIFT)

#define S5P_JPEG_Q_TBL_COMP2_SHIFT	2
#define S5P_JPEG_Q_TBL_COMP2_0		(0 << S5P_JPEG_Q_TBL_COMP2_SHIFT)
#define S5P_JPEG_Q_TBL_COMP2_1		(1 << S5P_JPEG_Q_TBL_COMP2_SHIFT)
#define S5P_JPEG_Q_TBL_COMP2_2		(2 << S5P_JPEG_Q_TBL_COMP2_SHIFT)
#define S5P_JPEG_Q_TBL_COMP2_3		(3 << S5P_JPEG_Q_TBL_COMP2_SHIFT)

#define S5P_JPEG_Q_TBL_COMP3_SHIFT	4
#define S5P_JPEG_Q_TBL_COMP3_0		\
		(0 << S5P_JPEG_Q_TBL_COMP3_SHIFT)
#define S5P_JPEG_Q_TBL_COMP3_1		\
		(1 << S5P_JPEG_Q_TBL_COMP3_SHIFT)
#define S5P_JPEG_Q_TBL_COMP3_2		\
		(2 << S5P_JPEG_Q_TBL_COMP3_SHIFT)
#define S5P_JPEG_Q_TBL_COMP3_3		\
		(3 << S5P_JPEG_Q_TBL_COMP3_SHIFT)

#define S5P_JPEG_HUFF_TBL_COMP1_SHIFT			6
#define S5P_JPEG_HUFF_TBL_COMP1_AC_0_DC_0		(0 << S5P_JPEG_HUFF_TBL_COMP1_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP1_AC_0_DC_1		(1 << S5P_JPEG_HUFF_TBL_COMP1_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP1_AC_1_DC_0		(2 << S5P_JPEG_HUFF_TBL_COMP1_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP1_AC_1_DC_1		(3 << S5P_JPEG_HUFF_TBL_COMP1_SHIFT)

#define S5P_JPEG_HUFF_TBL_COMP2_SHIFT			8
#define S5P_JPEG_HUFF_TBL_COMP2_AC_0_DC_0		(0 << S5P_JPEG_HUFF_TBL_COMP2_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP2_AC_0_DC_1		(1 << S5P_JPEG_HUFF_TBL_COMP2_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP2_AC_1_DC_0		(2 << S5P_JPEG_HUFF_TBL_COMP2_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP2_AC_1_DC_1		(3 << S5P_JPEG_HUFF_TBL_COMP2_SHIFT)

#define S5P_JPEG_HUFF_TBL_COMP3_SHIFT			10
#define S5P_JPEG_HUFF_TBL_COMP3_AC_0_DC_0		(0 << S5P_JPEG_HUFF_TBL_COMP3_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP3_AC_0_DC_1		(1 << S5P_JPEG_HUFF_TBL_COMP3_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP3_AC_1_DC_0		(2 << S5P_JPEG_HUFF_TBL_COMP3_SHIFT)
#define S5P_JPEG_HUFF_TBL_COMP3_AC_1_DC_1		(3 << S5P_JPEG_HUFF_TBL_COMP3_SHIFT)

#endif /* __ASM_ARM_REGS_S5P_JPEG_H */

