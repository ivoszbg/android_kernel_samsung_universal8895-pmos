// SPDX-License-Identifier: GPL-2.0
/* Copyright 2018 Panfrost Team */

#include "panfrost_device.h"

int panfrost_device_init(struct panfrost_device *pfdev)
{
	pfdev->id = panfrost_gpu_malit760;

	return 0;
}

void panfrost_device_fini(struct panfrost_device *pfdev)
{

}
