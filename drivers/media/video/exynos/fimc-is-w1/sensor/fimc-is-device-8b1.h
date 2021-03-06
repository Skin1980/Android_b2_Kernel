/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_DEVICE_8B1_H
#define FIMC_IS_DEVICE_8B1_H

#define SENSOR_S5K8B1_INSTANCE	0
#define SENSOR_S5K8B1_NAME	SENSOR_NAME_S5K8B1
#if defined(CONFIG_SOC_EXYNOS5430)
#define SENSOR_S5K8B1_DRIVING
#endif

struct fimc_is_module_8b1 {
	u16		vis_duration;
	u16		frame_length_line;
	u32		line_length_pck;
	u32		system_clock;
};

int sensor_8b1_probe(struct i2c_client *client,
	const struct i2c_device_id *id);

#endif
