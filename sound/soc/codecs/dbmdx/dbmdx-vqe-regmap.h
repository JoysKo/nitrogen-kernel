/*
 * dbmdx-vqe-regmap.h  --  DBMDX VQE register mapping
 *
 * Copyright (C) 2014 DSP Group
 * Copyright (C) 2020 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DBMDX_VQE_REGMAP_H
#define _DBMDX_VQE_REGMAP_H

#define DBMDX_VQE_SET_CMD_OFFSET				(0x00010000)

#define DBMDX_VQE_SET_RESET_CMD					(0x00010000)
#define DBMDX_VQE_SET_PING_CMD					(0x00030000)
#define DBMDX_VQE_GET_POWER_STATE_CMD				(0x00040000)
#define DBMDX_VQE_SET_POWER_STATE_CMD				(0x00050000)
#define DBMDX_VQE_GET_SYSTEM_CONFIG_CMD				(0x00060000)
#define DBMDX_VQE_SET_SYSTEM_CONFIG_CMD				(0x00070000)
#define DBMDX_VQE_GET_USE_CASE_CMD				(0x00080000)
#define DBMDX_VQE_SET_USE_CASE_CMD				(0x00090000)
#define DBMDX_VQE_GET_HW_TDM_BYPASS_CMD				(0x000A0000)
#define DBMDX_VQE_SET_HW_TDM_BYPASS_CMD				(0x000B0000)
#define DBMDX_VQE_SET_FADE_IN_OUT_CMD				(0x000D0000)
#define DBMDX_VQE_GET_SPK_VOL_LVL_CMD				(0x000E0000)
#define DBMDX_VQE_SET_SPK_VOL_LVL_CMD				(0x000F0000)
#define DBMDX_VQE_SET_SWITCH_TO_BOOT_CMD			(0x00110000)

#define DBMDX_VQE_SET_ALE_GAIN_MAX_CMD				(0x08010000)
#define DBMDX_VQE_SET_ALE_FRM_SNR_MAX_CMD			(0x08030000)

#define DBMDX_VQE_GET_HOST_STATUS_CMD				(0x10000000)
#define DBMDX_VQE_SET_HOST_STATUS_CMD				(0x10010000)
#define DBMDX_VQE_GET_HIBERNATE_ENABLE_CMD			(0x10060000)
#define DBMDX_VQE_SET_HIBERNATE_ENABLE_CMD			(0x10070000)
#define DBMDX_VQE_SET_LOG_VERSION_INFO_CMD			(0x10090000)

#define DBMDX_VQE_SET_MSG_WORD_SET_IND_CMD			(0x18010000)
#define DBMDX_VQE_GET_MSG_WORD_DATA_CMD				(0x18020000)
#define DBMDX_VQE_SET_MSG_WORD_DATA_CMD				(0x18030000)

#define DBMDX_VQE_SET_INDIRECT_REG_ADDR_ACCESS_CMD		(0x18150000)
#define DBMDX_VQE_GET_INDIRECT_REG_DATA_ACCESS_CMD		(0x18160000)
#define DBMDX_VQE_SET_INDIRECT_REG_DATA_ACCESS_CMD		(0x18170000)

#define DBMDX_VQE_GET_APB_READ_ACCESS_CMD			(0x181A0000)
#define DBMDX_VQE_SET_APB_READ_ACCESS_CMD			(0x181B0000)
#define DBMDX_VQE_GET_AHB_READ_ACCESS_CMD			(0x181C0000)
#define DBMDX_VQE_SET_AHB_READ_ACCESS_CMD			(0x181D0000)

#define DBMDX_VQE_HOST_STATUS_CMD_PRODUCT_MAJOR_VER		(0x3400)
#define DBMDX_VQE_HOST_STATUS_CMD_PRODUCT_MINOR_VER		(0x3401)
#define DBMDX_VQE_HOST_STATUS_CMD_FW_VER			(0x3402)
#define DBMDX_VQE_HOST_STATUS_CMD_PATCH_VER			(0x3403)
#define DBMDX_VQE_HOST_STATUS_CMD_DEBUG_VER			(0x3404)
#define DBMDX_VQE_HOST_STATUS_CMD_TUNING_VER			(0x3405)


#define DBMDX_VQE_SET_USE_CASE_CMD_IDLE				(0x0000)
#define DBMDX_VQE_SET_USE_CASE_DE_ACT_MASK			(0xff00)
#define DBMDX_VQE_SET_USE_CASE_ACT_MASK				(0x00ff)


#define DBMDX_VQE_SET_SYSTEM_CONFIG_PRIMARY_CFG			(0x0000)
#define DBMDX_VQE_SET_SYSTEM_CONFIG_SECONDARY_CFG		(0x0001)
#define DBMDX_VQE_SET_SYSTEM_CONFIG_DIAGNOSTICS_CFG		(0x0002)

#define DBMDX_VQE_SET_POWER_STATE_HIBERNATE			(0x0001)

#define DBMDX_VQE_SET_FADE_IN_OUT_FADE_IN_EN			(0x0001)
#define DBMDX_VQE_SET_FADE_IN_OUT_FADE_OUT_EN			(0x0002)

#define DBMDX_VQE_SET_HW_TDM_BYPASS_FIRST_PAIR_EN		(0x0001)
#define DBMDX_VQE_SET_HW_TDM_BYPASS_SECOND_PAIR_EN		(0x0002)
#define DBMDX_VQE_SET_HW_TDM_BYPASS_MODE_0			(0x0000)
#define DBMDX_VQE_SET_HW_TDM_BYPASS_MODE_1			(0x0004)

#endif
