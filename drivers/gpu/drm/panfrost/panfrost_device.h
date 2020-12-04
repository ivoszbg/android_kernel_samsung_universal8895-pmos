// SPDX-License-Identifier:	GPL-2.0
/* Copyright 2018 Panfrost Team */

#ifndef __PANFROST_DEVICE_H__
#define __PANFROST_DEVICE_H__

#include <drm/drmP.h>

enum panfrost_gpu_id {
	panfrost_gpu_malit760 = 0,
	panfrost_gpu_num,
};

struct panfrost_device {
	struct device *dev;
	struct drm_device *ddev;
	struct platform_device *pdev;

	enum panfrost_gpu_id id;
};

int panfrost_device_init(struct panfrost_device *pfdev);
void panfrost_device_fini(struct panfrost_device *pfdev);

#endif
