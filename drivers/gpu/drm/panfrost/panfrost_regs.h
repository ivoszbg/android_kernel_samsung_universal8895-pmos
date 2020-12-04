// SPDX-License-Identifier:	GPL-2.0
/* Copyright 2011-2016 ARM Limited. All rights reserved.
 * Copyright 2018 Panfrost Team
 */

#ifndef __PANFROST_REGS_H__
#define __PANFROST_REGS_H__

/* This file's register definition is collected from the
 * official ARM Mali Midgard GPU kernel driver source code
 */

/* GPU regs */
#define PAN_GPU_VERSION				0x00
#define PAN_GPU_INT_RAWSTAT			0x20
#define PAN_GPU_INT_CLEAR			0x24
#define PAN_GPU_INT_MASK			0x28
#define PAN_GPU_INT_STAT			0x2c
#define   PAN_GPU_IRQ_FAULT			BIT(0)
#define   PAN_GPU_IRQ_MULTIPLE_FAULT		BIT(7)
#define   PAN_GPU_IRQ_RESET_COMPLETED		BIT(8)
#define   PAN_GPU_IRQ_POWER_CHANGED		BIT(9)
#define   PAN_GPU_IRQ_POWER_CHANGED_ALL		BIT(10)
#define   PAN_GPU_IRQ_PERFCNT_SAMPLE_COMPLETED	BIT(16)
#define   PAN_GPU_IRQ_CLEAN_CACHES_COMPLETED	BIT(17)
#define   PAN_GPU_IRQ_MASK_ALL			 \
	  (					 \
	   PAN_GPU_IRQ_FAULT			|\
	   PAN_GPU_IRQ_MULTIPLE_FAULT		|\
	   PAN_GPU_IRQ_RESET_COMPLETED		|\
	   PAN_GPU_IRQ_POWER_CHANGED		|\
	   PAN_GPU_IRQ_POWER_CHANGED_ALL	|\
	   PAN_GPU_IRQ_PERFCNT_SAMPLE_COMPLETED	|\
	   PAN_GPU_IRQ_CLEAN_CACHES_COMPLETED )
#define PAN_GPU_IRQ_MASK_ERROR	   \
	(				   \
	 PAN_GPU_IRQ_FAULT		 | \
	 PAN_GPU_IRQ_MULTIPLE_FAULT)
#define PAN_GPU_CMD				0x30
#define   PAN_GPU_CMD_SOFT_RESET		0x01
#define PAN_GPU_STATUS				0x34
#endif
