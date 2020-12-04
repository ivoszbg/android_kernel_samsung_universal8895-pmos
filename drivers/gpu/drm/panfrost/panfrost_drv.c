// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright 2018 Panfrost Team
 * Copyright 2020 Ivaylo Ivanov <ivo.ivanov@null.net>
 */

#include <linux/module.h>
#include <linux/of_platform.h>

static int panfrost_pdev_probe(struct platform_device *pdev)
{
	return 0;
}

static int panfrost_pdev_remove(struct platform_device *pdev)
{
	return 0;
}

static const struct of_device_id dt_match[] = {
	{ .compatible = "arm,mali-t760" },
	{}
};
MODULE_DEVICE_TABLE(of, dt_match);

static struct platform_driver panfrost_platform_driver = {
	.probe		= panfrost_pdev_probe,
	.remove		= panfrost_pdev_remove,
	.driver		= {
		.name	= "panfrost",
		.of_match_table = dt_match,
	},
};

static int __init panfrost_init(void)
{
	int ret;

	ret = platform_device_register(&panfrost_platform_driver);

	return ret;
}
module_init(panfrost_init);

static void __exit panfrost_exit(void)
{
	platform_device_unregister(&panfrost_platform_driver);
}
module_exit(panfrost_exit);

MODULE_AUTHOR("Panfrost Project Developers");
MODULE_AUTHOR("Ivaylo Ivanov <ivo.ivanov@null.net>");
MODULE_DESCRIPTION("Panfrost DRM Driver");
MODULE_LICENSE("GPL v2");
