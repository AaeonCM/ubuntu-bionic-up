/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/* Copyright(c) 2018-2019  Realtek Corporation
 */

#ifndef __RTW8723D_H__
#define __RTW8723D_H__

struct rtw8723de_efuse {
	u8 mac_addr[ETH_ALEN];		/* 0xd0 */
	u8 vender_id[2];
	u8 device_id[2];
	u8 sub_vender_id[2];
	u8 sub_device_id[2];
};

struct rtw8723d_efuse {
	__le16 rtl_id;
	u8 rsvd[2];
	u8 afe;
	u8 rsvd1[11];

	/* power index for four RF paths */
	struct rtw_txpwr_idx txpwr_idx_table[4];

	u8 channel_plan;		/* 0xb8 */
	u8 xtal_k;
	u8 thermal_meter;
	u8 iqk_lck;
	u8 pa_type;			/* 0xbc */
	u8 lna_type_2g[2];		/* 0xbd */
	u8 lna_type_5g[2];
	u8 rf_board_option;
	u8 rf_feature_option;
	u8 rf_bt_setting;
	u8 eeprom_version;
	u8 eeprom_customer_id;
	u8 tx_bb_swing_setting_2g;
	u8 res_c7;
	u8 tx_pwr_calibrate_rate;
	u8 rf_antenna_option;		/* 0xc9 */
	u8 rfe_option;
	u8 country_code[2];
	u8 res[3];
	struct rtw8723de_efuse e;
};

#define REG_OFDM0_XAAGC1	0x0c50
#define REG_OFDM0_XBAGC1	0x0c58

#endif
