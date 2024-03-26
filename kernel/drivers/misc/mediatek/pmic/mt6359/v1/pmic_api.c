/*
 * Copyright (C) 2018 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <linux/kernel.h>
#include <linux/module.h>

#include <mach/upmu_sw.h>
#include <mach/upmu_hw.h>
#include <mt-plat/upmu_common.h>

unsigned int mt6359_upmu_get_top0_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_ID),
		(&val),
		(PMIC_TOP0_ANA_ID_MASK),
		(PMIC_TOP0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_ID),
		(&val),
		(PMIC_TOP0_DIG_ID_MASK),
		(PMIC_TOP0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_REV0),
		(&val),
		(PMIC_TOP0_ANA_MINOR_REV_MASK),
		(PMIC_TOP0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_REV0),
		(&val),
		(PMIC_TOP0_ANA_MAJOR_REV_MASK),
		(PMIC_TOP0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_REV0),
		(&val),
		(PMIC_TOP0_DIG_MINOR_REV_MASK),
		(PMIC_TOP0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_REV0),
		(&val),
		(PMIC_TOP0_DIG_MAJOR_REV_MASK),
		(PMIC_TOP0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_DSN_DBI),
		(&val),
		(PMIC_TOP0_DSN_CBS_MASK),
		(PMIC_TOP0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_DSN_DBI),
		(&val),
		(PMIC_TOP0_DSN_BIX_MASK),
		(PMIC_TOP0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_DSN_DBI),
		(&val),
		(PMIC_TOP0_DSN_ESP_MASK),
		(PMIC_TOP0_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top0_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP0_DSN_DXI),
		(&val),
		(PMIC_TOP0_DSN_FPI_MASK),
		(PMIC_TOP0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hwcid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HWCID),
		(&val),
		(PMIC_HWCID_MASK),
		(PMIC_HWCID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_swcid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SWCID),
		(&val),
		(PMIC_SWCID_MASK),
		(PMIC_SWCID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_pwrkey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PONSTS),
		(&val),
		(PMIC_STS_PWRKEY_MASK),
		(PMIC_STS_PWRKEY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_rtca(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PONSTS),
		(&val),
		(PMIC_STS_RTCA_MASK),
		(PMIC_STS_RTCA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_chrin(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PONSTS),
		(&val),
		(PMIC_STS_CHRIN_MASK),
		(PMIC_STS_CHRIN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_spar(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PONSTS),
		(&val),
		(PMIC_STS_SPAR_MASK),
		(PMIC_STS_SPAR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_rboot(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PONSTS),
		(&val),
		(PMIC_STS_RBOOT_MASK),
		(PMIC_STS_RBOOT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_uvlo(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_UVLO_MASK),
		(PMIC_STS_UVLO_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_pgfail(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_PGFAIL_MASK),
		(PMIC_STS_PGFAIL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_psoc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_PSOC_MASK),
		(PMIC_STS_PSOC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_thrdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_THRDN_MASK),
		(PMIC_STS_THRDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_wrst(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_WRST_MASK),
		(PMIC_STS_WRST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_crst(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_CRST_MASK),
		(PMIC_STS_CRST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_pkeylp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_PKEYLP_MASK),
		(PMIC_STS_PKEYLP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_normoff(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_NORMOFF_MASK),
		(PMIC_STS_NORMOFF_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_bwdt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_BWDT_MASK),
		(PMIC_STS_BWDT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_ddlo(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_DDLO_MASK),
		(PMIC_STS_DDLO_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_wdt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_WDT_MASK),
		(PMIC_STS_WDT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_pupsrc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_PUPSRC_MASK),
		(PMIC_STS_PUPSRC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_keypwr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_KEYPWR_MASK),
		(PMIC_STS_KEYPWR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_pksp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_PKSP_MASK),
		(PMIC_STS_PKSP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sts_ovlo(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_POFFSTS),
		(&val),
		(PMIC_STS_OVLO_MASK),
		(PMIC_STS_OVLO_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_poffsts_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSTSCTL),
		(val),
		(PMIC_RG_POFFSTS_CLR_MASK),
		(PMIC_RG_POFFSTS_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ponsts_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSTSCTL),
		(val),
		(PMIC_RG_PONSTS_CLR_MASK),
		(PMIC_RG_PONSTS_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_vm18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VM18_PG_DEB_MASK),
		(PMIC_VM18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vio18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VIO18_PG_DEB_MASK),
		(PMIC_VIO18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vufs_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VUFS_PG_DEB_MASK),
		(PMIC_VUFS_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vbbck_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VBBCK_PG_DEB_MASK),
		(PMIC_VBBCK_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vrfck_1_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VRFCK_1_PG_DEB_MASK),
		(PMIC_VRFCK_1_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vs1_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VS1_PG_DEB_MASK),
		(PMIC_VS1_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_va12_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VA12_PG_DEB_MASK),
		(PMIC_VA12_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_va09_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VA09_PG_DEB_MASK),
		(PMIC_VA09_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vs2_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VS2_PG_DEB_MASK),
		(PMIC_VS2_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vmodem_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VMODEM_PG_DEB_MASK),
		(PMIC_VMODEM_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vpu_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VPU_PG_DEB_MASK),
		(PMIC_VPU_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vgpu12_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VGPU12_PG_DEB_MASK),
		(PMIC_VGPU12_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vgpu11_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VGPU11_PG_DEB_MASK),
		(PMIC_VGPU11_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vcore_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VCORE_PG_DEB_MASK),
		(PMIC_VCORE_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vaux18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VAUX18_PG_DEB_MASK),
		(PMIC_VAUX18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vxo22_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS0),
		(&val),
		(PMIC_VXO22_PG_DEB_MASK),
		(PMIC_VXO22_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vrf18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VRF18_PG_DEB_MASK),
		(PMIC_VRF18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vusb_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VUSB_PG_DEB_MASK),
		(PMIC_VUSB_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vaud18_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VAUD18_PG_DEB_MASK),
		(PMIC_VAUD18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vsram_proc1_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VSRAM_PROC1_PG_DEB_MASK),
		(PMIC_VSRAM_PROC1_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vproc1_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VPROC1_PG_DEB_MASK),
		(PMIC_VPROC1_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vsram_proc2_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VSRAM_PROC2_PG_DEB_MASK),
		(PMIC_VSRAM_PROC2_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vproc2_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VPROC2_PG_DEB_MASK),
		(PMIC_VPROC2_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vsram_md_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VSRAM_MD_PG_DEB_MASK),
		(PMIC_VSRAM_MD_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vsram_others_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VSRAM_OTHERS_PG_DEB_MASK),
		(PMIC_VSRAM_OTHERS_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_vemc_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_VEMC_PG_DEB_MASK),
		(PMIC_VEMC_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_ext_pmic_pg_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_DEB_STS1),
		(&val),
		(PMIC_EXT_PMIC_PG_DEB_MASK),
		(PMIC_EXT_PMIC_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vm18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VM18_PG_STATUS_MASK),
		(PMIC_STRUP_VM18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vio18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VIO18_PG_STATUS_MASK),
		(PMIC_STRUP_VIO18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vufs_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VUFS_PG_STATUS_MASK),
		(PMIC_STRUP_VUFS_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vbbck_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VBBCK_PG_STATUS_MASK),
		(PMIC_STRUP_VBBCK_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vrfck_1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VRFCK_1_PG_STATUS_MASK),
		(PMIC_STRUP_VRFCK_1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vs1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VS1_PG_STATUS_MASK),
		(PMIC_STRUP_VS1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_va12_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VA12_PG_STATUS_MASK),
		(PMIC_STRUP_VA12_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_va09_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VA09_PG_STATUS_MASK),
		(PMIC_STRUP_VA09_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vs2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VS2_PG_STATUS_MASK),
		(PMIC_STRUP_VS2_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vmodem_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VMODEM_PG_STATUS_MASK),
		(PMIC_STRUP_VMODEM_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vpu_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VPU_PG_STATUS_MASK),
		(PMIC_STRUP_VPU_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vgpu12_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VGPU12_PG_STATUS_MASK),
		(PMIC_STRUP_VGPU12_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vgpu11_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VGPU11_PG_STATUS_MASK),
		(PMIC_STRUP_VGPU11_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vcore_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VCORE_PG_STATUS_MASK),
		(PMIC_STRUP_VCORE_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vaux18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VAUX18_PG_STATUS_MASK),
		(PMIC_STRUP_VAUX18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vxo22_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VXO22_PG_STATUS_MASK),
		(PMIC_STRUP_VXO22_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vrf18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VRF18_PG_STATUS_MASK),
		(PMIC_STRUP_VRF18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vusb_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VUSB_PG_STATUS_MASK),
		(PMIC_STRUP_VUSB_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vaud18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VAUD18_PG_STATUS_MASK),
		(PMIC_STRUP_VAUD18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_proc1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_PROC1_PG_STATUS_MASK),
		(PMIC_STRUP_VSRAM_PROC1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vproc1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VPROC1_PG_STATUS_MASK),
		(PMIC_STRUP_VPROC1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_proc2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_PROC2_PG_STATUS_MASK),
		(PMIC_STRUP_VSRAM_PROC2_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vproc2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VPROC2_PG_STATUS_MASK),
		(PMIC_STRUP_VPROC2_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_md_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_MD_PG_STATUS_MASK),
		(PMIC_STRUP_VSRAM_MD_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_others_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_OTHERS_PG_STATUS_MASK),
		(PMIC_STRUP_VSRAM_OTHERS_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vemc_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_VEMC_PG_STATUS_MASK),
		(PMIC_STRUP_VEMC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_ext_pmic_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PG_SDN_STS1),
		(&val),
		(PMIC_STRUP_EXT_PMIC_PG_STATUS_MASK),
		(PMIC_STRUP_EXT_PMIC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vm18_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VM18_OC_STATUS_MASK),
		(PMIC_STRUP_VM18_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vio18_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VIO18_OC_STATUS_MASK),
		(PMIC_STRUP_VIO18_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vufs_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VUFS_OC_STATUS_MASK),
		(PMIC_STRUP_VUFS_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vbbck_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VBBCK_OC_STATUS_MASK),
		(PMIC_STRUP_VBBCK_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vrfck_1_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VRFCK_1_OC_STATUS_MASK),
		(PMIC_STRUP_VRFCK_1_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vs1_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VS1_OC_STATUS_MASK),
		(PMIC_STRUP_VS1_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_va12_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VA12_OC_STATUS_MASK),
		(PMIC_STRUP_VA12_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_va09_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VA09_OC_STATUS_MASK),
		(PMIC_STRUP_VA09_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vs2_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VS2_OC_STATUS_MASK),
		(PMIC_STRUP_VS2_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vmodem_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VMODEM_OC_STATUS_MASK),
		(PMIC_STRUP_VMODEM_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vpu_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VPU_OC_STATUS_MASK),
		(PMIC_STRUP_VPU_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vgpu12_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VGPU12_OC_STATUS_MASK),
		(PMIC_STRUP_VGPU12_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vgpu11_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VGPU11_OC_STATUS_MASK),
		(PMIC_STRUP_VGPU11_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vcore_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VCORE_OC_STATUS_MASK),
		(PMIC_STRUP_VCORE_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vaux18_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VAUX18_OC_STATUS_MASK),
		(PMIC_STRUP_VAUX18_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vxo22_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VXO22_OC_STATUS_MASK),
		(PMIC_STRUP_VXO22_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vrf18_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VRF18_OC_STATUS_MASK),
		(PMIC_STRUP_VRF18_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vusb_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VUSB_OC_STATUS_MASK),
		(PMIC_STRUP_VUSB_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vaud18_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VAUD18_OC_STATUS_MASK),
		(PMIC_STRUP_VAUD18_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_proc1_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_PROC1_OC_STATUS_MASK),
		(PMIC_STRUP_VSRAM_PROC1_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vproc1_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VPROC1_OC_STATUS_MASK),
		(PMIC_STRUP_VPROC1_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_proc2_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_PROC2_OC_STATUS_MASK),
		(PMIC_STRUP_VSRAM_PROC2_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vproc2_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VPROC2_OC_STATUS_MASK),
		(PMIC_STRUP_VPROC2_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_md_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_MD_OC_STATUS_MASK),
		(PMIC_STRUP_VSRAM_MD_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vsram_others_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VSRAM_OTHERS_OC_STATUS_MASK),
		(PMIC_STRUP_VSRAM_OTHERS_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_vemc_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OC_SDN_STS1),
		(&val),
		(PMIC_STRUP_VEMC_OC_STATUS_MASK),
		(PMIC_STRUP_VEMC_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pmu_thermal_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_THERMALSTATUS),
		(&val),
		(PMIC_PMU_THERMAL_DEB_MASK),
		(PMIC_PMU_THERMAL_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_thermal_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_THERMALSTATUS),
		(&val),
		(PMIC_STRUP_THERMAL_STATUS_MASK),
		(PMIC_STRUP_THERMAL_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in0_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN0_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in0_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN0_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in0_hw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN0_HW_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN0_HW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in0_hw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN0_HW_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN0_HW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in1_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN1_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN1_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in1_hw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN1_HW_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN1_HW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in1_hw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN1_HW_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN1_HW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in_sync_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in_sync_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_osc_en_auto_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CON),
		(val),
		(PMIC_RG_OSC_EN_AUTO_OFF_MASK),
		(PMIC_RG_OSC_EN_AUTO_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_osc_en_auto_off(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CON),
		(&val),
		(PMIC_RG_OSC_EN_AUTO_OFF_MASK),
		(PMIC_RG_OSC_EN_AUTO_OFF_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_test_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TEST_OUT),
		(&val),
		(PMIC_TEST_OUT_MASK),
		(PMIC_TEST_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TEST_CON0),
		(val),
		(PMIC_RG_MON_FLAG_SEL_MASK),
		(PMIC_RG_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_mon_grp_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TEST_CON0),
		(val),
		(PMIC_RG_MON_GRP_SEL_MASK),
		(PMIC_RG_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_nandtree_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TEST_CON1),
		(val),
		(PMIC_RG_NANDTREE_MODE_MASK),
		(PMIC_RG_NANDTREE_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_nandtree_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TEST_CON1),
		(&val),
		(PMIC_RG_NANDTREE_MODE_MASK),
		(PMIC_RG_NANDTREE_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_test_auxadc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TEST_CON1),
		(val),
		(PMIC_RG_TEST_AUXADC_MASK),
		(PMIC_RG_TEST_AUXADC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_efuse_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TEST_CON1),
		(val),
		(PMIC_RG_EFUSE_MODE_MASK),
		(PMIC_RG_EFUSE_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_efuse_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TEST_CON1),
		(&val),
		(PMIC_RG_EFUSE_MODE_MASK),
		(PMIC_RG_EFUSE_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_test_strup(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TEST_CON1),
		(val),
		(PMIC_RG_TEST_STRUP_MASK),
		(PMIC_RG_TEST_STRUP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_testmode_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TESTMODE_SW),
		(val),
		(PMIC_TESTMODE_SW_MASK),
		(PMIC_TESTMODE_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_pmu_test_mode_scan(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOPSTATUS),
		(&val),
		(PMIC_PMU_TEST_MODE_SCAN_MASK),
		(PMIC_PMU_TEST_MODE_SCAN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pwrkey_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOPSTATUS),
		(&val),
		(PMIC_PWRKEY_DEB_MASK),
		(PMIC_PWRKEY_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOPSTATUS),
		(&val),
		(PMIC_CHRDET_DEB_MASK),
		(PMIC_CHRDET_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_homekey_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOPSTATUS),
		(&val),
		(PMIC_HOMEKEY_DEB_MASK),
		(PMIC_HOMEKEY_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pmu_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TDSEL_CON),
		(val),
		(PMIC_RG_PMU_TDSEL_MASK),
		(PMIC_RG_PMU_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TDSEL_CON),
		(val),
		(PMIC_RG_SPI_TDSEL_MASK),
		(PMIC_RG_SPI_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TDSEL_CON),
		(val),
		(PMIC_RG_AUD_TDSEL_MASK),
		(PMIC_RG_AUD_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_e32cal_tdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TDSEL_CON),
		(val),
		(PMIC_RG_E32CAL_TDSEL_MASK),
		(PMIC_RG_E32CAL_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pmu_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RDSEL_CON),
		(val),
		(PMIC_RG_PMU_RDSEL_MASK),
		(PMIC_RG_PMU_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RDSEL_CON),
		(val),
		(PMIC_RG_SPI_RDSEL_MASK),
		(PMIC_RG_SPI_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RDSEL_CON),
		(val),
		(PMIC_RG_AUD_RDSEL_MASK),
		(PMIC_RG_AUD_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_e32cal_rdsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RDSEL_CON),
		(val),
		(PMIC_RG_E32CAL_RDSEL_MASK),
		(PMIC_RG_E32CAL_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_wdtrstb_in(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_WDTRSTB_IN_MASK),
		(PMIC_RG_SMT_WDTRSTB_IN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_srclken_in0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_SRCLKEN_IN0_MASK),
		(PMIC_RG_SMT_SRCLKEN_IN0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_srclken_in1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_SRCLKEN_IN1_MASK),
		(PMIC_RG_SMT_SRCLKEN_IN1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_rtc_32k1v8_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_RTC_32K1V8_0_MASK),
		(PMIC_RG_SMT_RTC_32K1V8_0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_rtc_32k1v8_1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_RTC_32K1V8_1_MASK),
		(PMIC_RG_SMT_RTC_32K1V8_1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_HOMEKEY_MASK),
		(PMIC_RG_SMT_HOMEKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_scp_vreq_vao(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON0),
		(val),
		(PMIC_RG_SMT_SCP_VREQ_VAO_MASK),
		(PMIC_RG_SMT_SCP_VREQ_VAO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_spi_clk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_CLK_MASK),
		(PMIC_RG_SMT_SPI_CLK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_spi_csn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_CSN_MASK),
		(PMIC_RG_SMT_SPI_CSN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_spi_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_MOSI_MASK),
		(PMIC_RG_SMT_SPI_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_spi_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_MISO_MASK),
		(PMIC_RG_SMT_SPI_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_clk_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_CLK_MOSI_MASK),
		(PMIC_RG_SMT_AUD_CLK_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_dat_mosi0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MOSI0_MASK),
		(PMIC_RG_SMT_AUD_DAT_MOSI0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_dat_mosi1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MOSI1_MASK),
		(PMIC_RG_SMT_AUD_DAT_MOSI1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_dat_mosi2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MOSI2_MASK),
		(PMIC_RG_SMT_AUD_DAT_MOSI2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_sync_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_SYNC_MOSI_MASK),
		(PMIC_RG_SMT_AUD_SYNC_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_nle_mosi0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_NLE_MOSI0_MASK),
		(PMIC_RG_SMT_AUD_NLE_MOSI0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_nle_mosi1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_NLE_MOSI1_MASK),
		(PMIC_RG_SMT_AUD_NLE_MOSI1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_dat_miso0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MISO0_MASK),
		(PMIC_RG_SMT_AUD_DAT_MISO0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_dat_miso1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MISO1_MASK),
		(PMIC_RG_SMT_AUD_DAT_MISO1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smt_aud_dat_miso2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MISO2_MASK),
		(PMIC_RG_SMT_AUD_DAT_MISO2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_top_rsv0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RSV0),
		(&val),
		(PMIC_RG_TOP_RSV0_MASK),
		(PMIC_RG_TOP_RSV0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_top_rsv1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RSV1),
		(&val),
		(PMIC_RG_TOP_RSV1_MASK),
		(PMIC_RG_TOP_RSV1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_octl_srclken_in0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_SRCLKEN_IN0_MASK),
		(PMIC_RG_OCTL_SRCLKEN_IN0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_srclken_in1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_SRCLKEN_IN1_MASK),
		(PMIC_RG_OCTL_SRCLKEN_IN1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_rtc_32k1v8_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_RTC_32K1V8_0_MASK),
		(PMIC_RG_OCTL_RTC_32K1V8_0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_rtc_32k1v8_1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_RTC_32K1V8_1_MASK),
		(PMIC_RG_OCTL_RTC_32K1V8_1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_spi_clk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_CLK_MASK),
		(PMIC_RG_OCTL_SPI_CLK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_spi_csn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_CSN_MASK),
		(PMIC_RG_OCTL_SPI_CSN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_spi_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_MOSI_MASK),
		(PMIC_RG_OCTL_SPI_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_spi_miso(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_MISO_MASK),
		(PMIC_RG_OCTL_SPI_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_clk_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_CLK_MOSI_MASK),
		(PMIC_RG_OCTL_AUD_CLK_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_dat_mosi0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MOSI0_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MOSI0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_dat_mosi1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MOSI1_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MOSI1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_dat_mosi2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MOSI2_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MOSI2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_sync_mosi(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_SYNC_MOSI_MASK),
		(PMIC_RG_OCTL_AUD_SYNC_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_nle_mosi0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_NLE_MOSI0_MASK),
		(PMIC_RG_OCTL_AUD_NLE_MOSI0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_nle_mosi1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_NLE_MOSI1_MASK),
		(PMIC_RG_OCTL_AUD_NLE_MOSI1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_dat_miso0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MISO0_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MISO0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_dat_miso1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON4),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MISO1_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MISO1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_aud_dat_miso2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON4),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MISO2_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MISO2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON4),
		(val),
		(PMIC_RG_OCTL_HOMEKEY_MASK),
		(PMIC_RG_OCTL_HOMEKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_octl_scp_vreq_vao(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DRV_CON4),
		(val),
		(PMIC_RG_OCTL_SCP_VREQ_VAO_MASK),
		(PMIC_RG_OCTL_SCP_VREQ_VAO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_srclken_in0_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in1_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_rtc32k_1v8_0_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rtc32k_1v8_0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_rtc32k_1v8_1_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rtc32k_1v8_1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_spi_clk_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_CLK_FILTER_EN_MASK),
		(PMIC_RG_SPI_CLK_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_spi_clk_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_CLK_FILTER_EN_MASK),
		(PMIC_RG_SPI_CLK_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_spi_csn_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_CSN_FILTER_EN_MASK),
		(PMIC_RG_SPI_CSN_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_spi_csn_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_CSN_FILTER_EN_MASK),
		(PMIC_RG_SPI_CSN_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_spi_mosi_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_MOSI_FILTER_EN_MASK),
		(PMIC_RG_SPI_MOSI_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_spi_mosi_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_MOSI_FILTER_EN_MASK),
		(PMIC_RG_SPI_MOSI_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_spi_miso_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_MISO_FILTER_EN_MASK),
		(PMIC_RG_SPI_MISO_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_spi_miso_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_MISO_FILTER_EN_MASK),
		(PMIC_RG_SPI_MISO_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_clk_mosi_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_clk_mosi_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_dat_mosi0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_dat_mosi0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_dat_mosi1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_dat_mosi1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_dat_mosi2_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MOSI2_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI2_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_dat_mosi2_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MOSI2_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI2_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_sync_mosi_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_sync_mosi_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_dat_miso0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_dat_miso0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_dat_miso1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_dat_miso1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_dat_miso2_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MISO2_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO2_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_dat_miso2_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MISO2_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO2_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_wdtrstb_in_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON1),
		(val),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_MASK),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_wdtrstb_in_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON1),
		(&val),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_MASK),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_homekey_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON1),
		(val),
		(PMIC_RG_HOMEKEY_FILTER_EN_MASK),
		(PMIC_RG_HOMEKEY_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_homekey_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON1),
		(&val),
		(PMIC_RG_HOMEKEY_FILTER_EN_MASK),
		(PMIC_RG_HOMEKEY_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_scp_vreq_vao_filter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON1),
		(val),
		(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_MASK),
		(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_scp_vreq_vao_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON1),
		(&val),
		(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_MASK),
		(PMIC_RG_SCP_VREQ_VAO_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_nle_mosi0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON1),
		(val),
		(PMIC_RG_AUD_NLE_MOSI0_FILTER_EN_MASK),
		(PMIC_RG_AUD_NLE_MOSI0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_nle_mosi0_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON1),
		(&val),
		(PMIC_RG_AUD_NLE_MOSI0_FILTER_EN_MASK),
		(PMIC_RG_AUD_NLE_MOSI0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aud_nle_mosi1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON1),
		(val),
		(PMIC_RG_AUD_NLE_MOSI1_FILTER_EN_MASK),
		(PMIC_RG_AUD_NLE_MOSI1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_aud_nle_mosi1_filter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FILTER_CON1),
		(&val),
		(PMIC_RG_AUD_NLE_MOSI1_FILTER_EN_MASK),
		(PMIC_RG_AUD_NLE_MOSI1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_SRCLKEN_IN0_RCSEL_MASK),
		(PMIC_RG_SRCLKEN_IN0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_srclken_in1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_SRCLKEN_IN1_RCSEL_MASK),
		(PMIC_RG_SRCLKEN_IN1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc32k_1v8_0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_RTC32K_1V8_0_RCSEL_MASK),
		(PMIC_RG_RTC32K_1V8_0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc32k_1v8_1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_RTC32K_1V8_1_RCSEL_MASK),
		(PMIC_RG_RTC32K_1V8_1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_clk_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_CLK_RCSEL_MASK),
		(PMIC_RG_SPI_CLK_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_csn_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_CSN_RCSEL_MASK),
		(PMIC_RG_SPI_CSN_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_mosi_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_MOSI_RCSEL_MASK),
		(PMIC_RG_SPI_MOSI_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_miso_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_MISO_RCSEL_MASK),
		(PMIC_RG_SPI_MISO_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_clk_mosi_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_CLK_MOSI_RCSEL_MASK),
		(PMIC_RG_AUD_CLK_MOSI_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_dat_mosi0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MOSI0_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MOSI0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_dat_mosi1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MOSI1_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MOSI1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_dat_mosi2_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MOSI2_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MOSI2_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_sync_mosi_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_SYNC_MOSI_RCSEL_MASK),
		(PMIC_RG_AUD_SYNC_MOSI_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_dat_miso0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MISO0_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MISO0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_dat_miso1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MISO1_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MISO1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_dat_miso2_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MISO2_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MISO2_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wdtrstb_in_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON3),
		(val),
		(PMIC_RG_WDTRSTB_IN_RCSEL_MASK),
		(PMIC_RG_WDTRSTB_IN_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_homekey_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON3),
		(val),
		(PMIC_RG_HOMEKEY_RCSEL_MASK),
		(PMIC_RG_HOMEKEY_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_scp_vreq_vao_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON3),
		(val),
		(PMIC_RG_SCP_VREQ_VAO_RCSEL_MASK),
		(PMIC_RG_SCP_VREQ_VAO_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_nle_mosi0_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON3),
		(val),
		(PMIC_RG_AUD_NLE_MOSI0_RCSEL_MASK),
		(PMIC_RG_AUD_NLE_MOSI0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_aud_nle_mosi1_rcsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FILTER_CON3),
		(val),
		(PMIC_RG_AUD_NLE_MOSI1_RCSEL_MASK),
		(PMIC_RG_AUD_NLE_MOSI1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_STATUS),
		(val),
		(PMIC_TOP_STATUS_MASK),
		(PMIC_TOP_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_vm_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_TRAP),
		(&val),
		(PMIC_VM_MODE_MASK),
		(PMIC_VM_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_ID),
		(&val),
		(PMIC_TOP1_ANA_ID_MASK),
		(PMIC_TOP1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_ID),
		(&val),
		(PMIC_TOP1_DIG_ID_MASK),
		(PMIC_TOP1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_REV0),
		(&val),
		(PMIC_TOP1_ANA_MINOR_REV_MASK),
		(PMIC_TOP1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_REV0),
		(&val),
		(PMIC_TOP1_ANA_MAJOR_REV_MASK),
		(PMIC_TOP1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_REV0),
		(&val),
		(PMIC_TOP1_DIG_MINOR_REV_MASK),
		(PMIC_TOP1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_REV0),
		(&val),
		(PMIC_TOP1_DIG_MAJOR_REV_MASK),
		(PMIC_TOP1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_DSN_DBI),
		(&val),
		(PMIC_TOP1_DSN_CBS_MASK),
		(PMIC_TOP1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_DSN_DBI),
		(&val),
		(PMIC_TOP1_DSN_BIX_MASK),
		(PMIC_TOP1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_DSN_DBI),
		(&val),
		(PMIC_TOP1_DSN_ESP_MASK),
		(PMIC_TOP1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top1_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP1_DSN_DXI),
		(&val),
		(PMIC_TOP1_DSN_FPI_MASK),
		(PMIC_TOP1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_gpio_dir0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_DIR0),
		(val),
		(PMIC_GPIO_DIR0_MASK),
		(PMIC_GPIO_DIR0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_dir1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_DIR1),
		(val),
		(PMIC_GPIO_DIR1_MASK),
		(PMIC_GPIO_DIR1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_pullen0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_PULLEN0),
		(val),
		(PMIC_GPIO_PULLEN0_MASK),
		(PMIC_GPIO_PULLEN0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_pullen1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_PULLEN1),
		(val),
		(PMIC_GPIO_PULLEN1_MASK),
		(PMIC_GPIO_PULLEN1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_pullsel0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_PULLSEL0),
		(val),
		(PMIC_GPIO_PULLSEL0_MASK),
		(PMIC_GPIO_PULLSEL0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_pullsel1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_PULLSEL1),
		(val),
		(PMIC_GPIO_PULLSEL1_MASK),
		(PMIC_GPIO_PULLSEL1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_dinv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_DINV0),
		(val),
		(PMIC_GPIO_DINV0_MASK),
		(PMIC_GPIO_DINV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_dinv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_DINV1),
		(val),
		(PMIC_GPIO_DINV1_MASK),
		(PMIC_GPIO_DINV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_dout0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_DOUT0),
		(val),
		(PMIC_GPIO_DOUT0_MASK),
		(PMIC_GPIO_DOUT0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_dout1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_DOUT1),
		(val),
		(PMIC_GPIO_DOUT1_MASK),
		(PMIC_GPIO_DOUT1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_gpio_pi0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_GPIO_PI0),
		(&val),
		(PMIC_GPIO_PI0_MASK),
		(PMIC_GPIO_PI0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_gpio_pi1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_GPIO_PI1),
		(&val),
		(PMIC_GPIO_PI1_MASK),
		(PMIC_GPIO_PI1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_gpio_poe0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_GPIO_POE0),
		(&val),
		(PMIC_GPIO_POE0_MASK),
		(PMIC_GPIO_POE0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_gpio_poe1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_GPIO_POE1),
		(&val),
		(PMIC_GPIO_POE1_MASK),
		(PMIC_GPIO_POE1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_gpio0_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE0),
		(val),
		(PMIC_GPIO0_MODE_MASK),
		(PMIC_GPIO0_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio1_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE0),
		(val),
		(PMIC_GPIO1_MODE_MASK),
		(PMIC_GPIO1_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio2_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE0),
		(val),
		(PMIC_GPIO2_MODE_MASK),
		(PMIC_GPIO2_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio3_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE0),
		(val),
		(PMIC_GPIO3_MODE_MASK),
		(PMIC_GPIO3_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio4_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE1),
		(val),
		(PMIC_GPIO4_MODE_MASK),
		(PMIC_GPIO4_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio5_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE1),
		(val),
		(PMIC_GPIO5_MODE_MASK),
		(PMIC_GPIO5_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio6_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE1),
		(val),
		(PMIC_GPIO6_MODE_MASK),
		(PMIC_GPIO6_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio7_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE1),
		(val),
		(PMIC_GPIO7_MODE_MASK),
		(PMIC_GPIO7_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio8_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE2),
		(val),
		(PMIC_GPIO8_MODE_MASK),
		(PMIC_GPIO8_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio9_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE2),
		(val),
		(PMIC_GPIO9_MODE_MASK),
		(PMIC_GPIO9_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio10_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE2),
		(val),
		(PMIC_GPIO10_MODE_MASK),
		(PMIC_GPIO10_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio11_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE2),
		(val),
		(PMIC_GPIO11_MODE_MASK),
		(PMIC_GPIO11_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio12_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE3),
		(val),
		(PMIC_GPIO12_MODE_MASK),
		(PMIC_GPIO12_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio13_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE3),
		(val),
		(PMIC_GPIO13_MODE_MASK),
		(PMIC_GPIO13_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio14_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE3),
		(val),
		(PMIC_GPIO14_MODE_MASK),
		(PMIC_GPIO14_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio15_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE3),
		(val),
		(PMIC_GPIO15_MODE_MASK),
		(PMIC_GPIO15_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio16_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE4),
		(val),
		(PMIC_GPIO16_MODE_MASK),
		(PMIC_GPIO16_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio17_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE4),
		(val),
		(PMIC_GPIO17_MODE_MASK),
		(PMIC_GPIO17_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio18_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE4),
		(val),
		(PMIC_GPIO18_MODE_MASK),
		(PMIC_GPIO18_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio19_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_MODE4),
		(val),
		(PMIC_GPIO19_MODE_MASK),
		(PMIC_GPIO19_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpio_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_GPIO_RSV),
		(val),
		(PMIC_GPIO_RSV_MASK),
		(PMIC_GPIO_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_top2_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_ID),
		(&val),
		(PMIC_TOP2_ANA_ID_MASK),
		(PMIC_TOP2_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_ID),
		(&val),
		(PMIC_TOP2_DIG_ID_MASK),
		(PMIC_TOP2_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_REV0),
		(&val),
		(PMIC_TOP2_ANA_MINOR_REV_MASK),
		(PMIC_TOP2_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_REV0),
		(&val),
		(PMIC_TOP2_ANA_MAJOR_REV_MASK),
		(PMIC_TOP2_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_REV0),
		(&val),
		(PMIC_TOP2_DIG_MINOR_REV_MASK),
		(PMIC_TOP2_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_REV0),
		(&val),
		(PMIC_TOP2_DIG_MAJOR_REV_MASK),
		(PMIC_TOP2_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_DSN_DBI),
		(&val),
		(PMIC_TOP2_DSN_CBS_MASK),
		(PMIC_TOP2_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_DSN_DBI),
		(&val),
		(PMIC_TOP2_DSN_BIX_MASK),
		(PMIC_TOP2_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top2_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP2_DSN_DXI),
		(&val),
		(PMIC_TOP2_DSN_FPI_MASK),
		(PMIC_TOP2_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_sck32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_SCK32K_CK_PDN_MASK),
		(PMIC_RG_SCK32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_intrp_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_INTRP_CK_PDN_MASK),
		(PMIC_RG_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_efuse_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_EFUSE_CK_PDN_MASK),
		(PMIC_RG_EFUSE_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ck_pdn_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_CK_PDN_RSV0_MASK),
		(PMIC_RG_CK_PDN_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ck_pdn_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_CK_PDN_RSV1_MASK),
		(PMIC_RG_CK_PDN_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_SPI_CK_PDN_MASK),
		(PMIC_RG_SPI_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ck_pdn_rsv2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_CK_PDN_RSV2_MASK),
		(PMIC_RG_CK_PDN_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pmu32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_PMU32K_CK_PDN_MASK),
		(PMIC_RG_PMU32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fqmtr_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FQMTR_32K_CK_PDN_MASK),
		(PMIC_RG_FQMTR_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fqmtr_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FQMTR_CK_PDN_MASK),
		(PMIC_RG_FQMTR_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pmu128k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_PMU128K_CK_PDN_MASK),
		(PMIC_RG_PMU128K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc26m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC26M_CK_PDN_MASK),
		(PMIC_RG_RTC26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC32K_CK_PDN_MASK),
		(PMIC_RG_RTC32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc32k_1v8_0_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_RTC32K_1V8_0_PDN_MASK),
		(PMIC_RG_RTC32K_1V8_0_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc32k_1v8_1_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_RTC32K_1V8_1_PDN_MASK),
		(PMIC_RG_RTC32K_1V8_1_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_trim_128k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_TRIM_128K_CK_PDN_MASK),
		(PMIC_RG_TRIM_128K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_test_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_BGR_TEST_CK_PDN_MASK),
		(PMIC_RG_BGR_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pchr_test_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_PCHR_TEST_CK_PDN_MASK),
		(PMIC_RG_PCHR_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fqmtr_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_FQMTR_CK_CKSEL_MASK),
		(PMIC_RG_FQMTR_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_32k1v8_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_RTC_32K1V8_SEL_MASK),
		(PMIC_RG_RTC_32K1V8_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pmu32k_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_PMU32K_CK_CKSEL_MASK),
		(PMIC_RG_PMU32K_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_top_cksel_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_TOP_CKSEL_CON0_RSV_MASK),
		(PMIC_RG_TOP_CKSEL_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_srcvolten_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_SRCVOLTEN_SW_MASK),
		(PMIC_RG_SRCVOLTEN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vowen_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_VOWEN_SW_MASK),
		(PMIC_RG_VOWEN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_srcvolten_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_SRCVOLTEN_MODE_MASK),
		(PMIC_RG_SRCVOLTEN_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srcvolten_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CKSEL_CON1),
		(&val),
		(PMIC_RG_SRCVOLTEN_MODE_MASK),
		(PMIC_RG_SRCVOLTEN_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vowen_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_VOWEN_MODE_MASK),
		(PMIC_RG_VOWEN_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vowen_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CKSEL_CON1),
		(&val),
		(PMIC_RG_VOWEN_MODE_MASK),
		(PMIC_RG_VOWEN_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_top_cksel_con2_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_TOP_CKSEL_CON2_RSV_MASK),
		(PMIC_RG_TOP_CKSEL_CON2_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_reg_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKDIVSEL_CON0),
		(val),
		(PMIC_RG_REG_CK_DIVSEL_MASK),
		(PMIC_RG_REG_CK_DIVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_ckdivsel_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKDIVSEL_CON0),
		(val),
		(PMIC_TOP_CKDIVSEL_CON0_RSV_MASK),
		(PMIC_TOP_CKDIVSEL_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_efuse_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_EFUSE_CK_PDN_HWEN_MASK),
		(PMIC_RG_EFUSE_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_eint_32k_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_EINT_32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_EINT_32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc26m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_ckhwen_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKHWEN_CON0),
		(val),
		(PMIC_TOP_CKHWEN_CON0_RSV_MASK),
		(PMIC_TOP_CKHWEN_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pmu128k_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_PMU128K_CK_TST_DIS_MASK),
		(PMIC_RG_PMU128K_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo_1m_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_DCXO_1M_CK_TST_DIS_MASK),
		(PMIC_RG_DCXO_1M_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo_26m_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_DCXO_26M_CK_TST_DIS_MASK),
		(PMIC_RG_DCXO_26M_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_clk_26m_dig_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_XO_CLK_26M_DIG_TST_DIS_MASK),
		(PMIC_RG_XO_CLK_26M_DIG_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_26m_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_RTC_26M_CK_TST_DIS_MASK),
		(PMIC_RG_RTC_26M_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_32k_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_RTC_32K_CK_TST_DIS_MASK),
		(PMIC_RG_RTC_32K_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_sck_32k_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_SCK_32K_CK_TST_DIS_MASK),
		(PMIC_RG_SCK_32K_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_cktst_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON0),
		(val),
		(PMIC_TOP_CKTST_CON0_RSV_MASK),
		(PMIC_TOP_CKTST_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pmu128k_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_PMU128K_CK_TSTSEL_MASK),
		(PMIC_RG_PMU128K_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo_1m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_DCXO_1M_CK_TSTSEL_MASK),
		(PMIC_RG_DCXO_1M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo_26m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_DCXO_26M_CK_TSTSEL_MASK),
		(PMIC_RG_DCXO_26M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_clk_26m_dig_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_XO_CLK_26M_DIG_TSTSEL_MASK),
		(PMIC_RG_XO_CLK_26M_DIG_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_26m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_RTC_26M_CK_TSTSEL_MASK),
		(PMIC_RG_RTC_26M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_32k_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_RTC_32K_CK_TSTSEL_MASK),
		(PMIC_RG_RTC_32K_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_sck_32k_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_SCK_32K_CK_TSTSEL_MASK),
		(PMIC_RG_SCK_32K_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_efuse_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_EFUSE_CK_TSTSEL_MASK),
		(PMIC_RG_EFUSE_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_test_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_BGR_TEST_CK_TSTSEL_MASK),
		(PMIC_RG_BGR_TEST_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pchr_test_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_PCHR_TEST_CK_TSTSEL_MASK),
		(PMIC_RG_PCHR_TEST_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fqmtr_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_FQMTR_CK_TSTSEL_MASK),
		(PMIC_RG_FQMTR_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_tstck_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_DCXO1M_TSTCK_SEL_MASK),
		(PMIC_RG_DCXO1M_TSTCK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_buck_sw_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_BUCK_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_BUCK_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_buck_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_BUCK_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_BUCK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_bm_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_BM_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_BM_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_bm_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_BM_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_BM_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_hk_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_HK_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_HK_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_hk_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_HK_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_HK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_ldo_sw_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_LDO_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_LDO_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_ldo_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_LDO_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_LDO_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_sck_sw_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_SCK_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_SCK_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_sck_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_SCK_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_SCK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_mdb_sw_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_MDB_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_MDB_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_mdb_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_CKEN_MDB_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_MDB_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_buck_sw_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON1),
		(val),
		(PMIC_RG_DCXO1M_CKEN_BUCK_SW_SEL_MASK),
		(PMIC_RG_DCXO1M_CKEN_BUCK_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_buck_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON1),
		(val),
		(PMIC_RG_DCXO1M_CKEN_BUCK_SW_MASK),
		(PMIC_RG_DCXO1M_CKEN_BUCK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_ldo_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON1),
		(val),
		(PMIC_RG_DCXO1M_CKEN_LDO_SW_SEL_MASK),
		(PMIC_RG_DCXO1M_CKEN_LDO_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_ldo_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON1),
		(val),
		(PMIC_RG_DCXO1M_CKEN_LDO_SW_MASK),
		(PMIC_RG_DCXO1M_CKEN_LDO_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_hk_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON1),
		(val),
		(PMIC_RG_DCXO1M_CKEN_HK_SW_SEL_MASK),
		(PMIC_RG_DCXO1M_CKEN_HK_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_hk_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_CON1),
		(val),
		(PMIC_RG_DCXO1M_CKEN_HK_SW_MASK),
		(PMIC_RG_DCXO1M_CKEN_HK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_top_mdb_dcm_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_TOP_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_TOP_MDB_DCM_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_top_mdb_dcm_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_TOP_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_TOP_MDB_DCM_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_top_mdb_dcm_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_TOP_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_TOP_MDB_DCM_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_top_mdb_dcm_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_TOP_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_TOP_MDB_DCM_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_sck_mdb_dcm_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_SCK_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_SCK_MDB_DCM_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_sck_mdb_dcm_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_SCK_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_SCK_MDB_DCM_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_sck_mdb_dcm_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_SCK_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_SCK_MDB_DCM_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_sck_mdb_dcm_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_SCK_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_SCK_MDB_DCM_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_ldo_mdb_dcm_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_LDO_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_LDO_MDB_DCM_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ldo_mdb_dcm_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_LDO_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_LDO_MDB_DCM_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_ldo_mdb_dcm_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_LDO_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_LDO_MDB_DCM_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ldo_mdb_dcm_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_LDO_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_LDO_MDB_DCM_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_mdb_dcm_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_BUCK_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_BUCK_MDB_DCM_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_mdb_dcm_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_BUCK_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_BUCK_MDB_DCM_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_mdb_dcm_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_BUCK_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_BUCK_MDB_DCM_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_mdb_dcm_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_BUCK_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_BUCK_MDB_DCM_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_mdb_dcxo26m_dcm_lp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_DCM0),
		(val),
		(PMIC_RG_MDB_DCXO26M_DCM_LP_EN_MASK),
		(PMIC_RG_MDB_DCXO26M_DCM_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_mdb_dcxo26m_dcm_lp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_DCM0),
		(&val),
		(PMIC_RG_MDB_DCXO26M_DCM_LP_EN_MASK),
		(PMIC_RG_MDB_DCXO26M_DCM_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_efuse_man_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_EFUSE_MAN_RST_MASK),
		(PMIC_RG_EFUSE_MAN_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_driver_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_DRIVER_RST_MASK),
		(PMIC_RG_DRIVER_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fqmtr_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_FQMTR_RST_MASK),
		(PMIC_RG_FQMTR_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_RTC_RST_MASK),
		(PMIC_RG_RTC_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_type_c_cc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_TYPE_C_CC_RST_MASK),
		(PMIC_RG_TYPE_C_CC_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_clk_trim_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_CLK_TRIM_RST_MASK),
		(PMIC_RG_CLK_TRIM_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_srclken_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON0),
		(val),
		(PMIC_RG_BUCK_SRCLKEN_RST_MASK),
		(PMIC_RG_BUCK_SRCLKEN_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_prot_pmpp_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON1),
		(val),
		(PMIC_RG_BUCK_PROT_PMPP_RST_MASK),
		(PMIC_RG_BUCK_PROT_PMPP_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spk_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON1),
		(val),
		(PMIC_RG_SPK_RST_MASK),
		(PMIC_RG_SPK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ft_vr_sysrstb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON1),
		(val),
		(PMIC_RG_FT_VR_SYSRSTB_MASK),
		(PMIC_RG_FT_VR_SYSRSTB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ldo_cali_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON1),
		(val),
		(PMIC_RG_LDO_CALI_RST_MASK),
		(PMIC_RG_LDO_CALI_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_rst_con1_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON1),
		(val),
		(PMIC_TOP_RST_CON1_RSV_MASK),
		(PMIC_TOP_RST_CON1_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_chr_ldo_det_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHR_LDO_DET_MODE_MASK),
		(PMIC_RG_CHR_LDO_DET_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_chr_ldo_det_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_CON2),
		(&val),
		(PMIC_RG_CHR_LDO_DET_MODE_MASK),
		(PMIC_RG_CHR_LDO_DET_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_chr_ldo_det_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHR_LDO_DET_SW_MASK),
		(PMIC_RG_CHR_LDO_DET_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_chrwdt_flag_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHRWDT_FLAG_MODE_MASK),
		(PMIC_RG_CHRWDT_FLAG_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_chrwdt_flag_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_CON2),
		(&val),
		(PMIC_RG_CHRWDT_FLAG_MODE_MASK),
		(PMIC_RG_CHRWDT_FLAG_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_chrwdt_flag_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHRWDT_FLAG_SW_MASK),
		(PMIC_RG_CHRWDT_FLAG_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_rst_con2_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON2),
		(val),
		(PMIC_TOP_RST_CON2_RSV_MASK),
		(PMIC_TOP_RST_CON2_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_gpio_rst_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_CON3),
		(val),
		(PMIC_RG_GPIO_RST_SEL_MASK),
		(PMIC_RG_GPIO_RST_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wdtrstb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_EN_MASK),
		(PMIC_RG_WDTRSTB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_wdtrstb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_MISC),
		(&val),
		(PMIC_RG_WDTRSTB_EN_MASK),
		(PMIC_RG_WDTRSTB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_wdtrstb_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_MODE_MASK),
		(PMIC_RG_WDTRSTB_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_wdtrstb_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_MISC),
		(&val),
		(PMIC_RG_WDTRSTB_MODE_MASK),
		(PMIC_RG_WDTRSTB_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_wdtrstb_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_MISC),
		(&val),
		(PMIC_WDTRSTB_STATUS_MASK),
		(PMIC_WDTRSTB_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_wdtrstb_status_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_WDTRSTB_STATUS_CLR_MASK),
		(PMIC_WDTRSTB_STATUS_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wdtrstb_fb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_FB_EN_MASK),
		(PMIC_RG_WDTRSTB_FB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_wdtrstb_fb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_MISC),
		(&val),
		(PMIC_RG_WDTRSTB_FB_EN_MASK),
		(PMIC_RG_WDTRSTB_FB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_wdtrstb_deb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_DEB_MASK),
		(PMIC_RG_WDTRSTB_DEB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pwrkey_key_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRKEY_KEY_MODE_MASK),
		(PMIC_RG_PWRKEY_KEY_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pwrkey_key_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_MISC),
		(&val),
		(PMIC_RG_PWRKEY_KEY_MODE_MASK),
		(PMIC_RG_PWRKEY_KEY_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pwrkey_rst_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRKEY_RST_EN_MASK),
		(PMIC_RG_PWRKEY_RST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pwrkey_rst_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_RST_MISC),
		(&val),
		(PMIC_RG_PWRKEY_RST_EN_MASK),
		(PMIC_RG_PWRKEY_RST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pwrrst_tmr_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRRST_TMR_DIS_MASK),
		(PMIC_RG_PWRRST_TMR_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pwrkey_rst_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRKEY_RST_TD_MASK),
		(PMIC_RG_PWRKEY_RST_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_rst_misc_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_MISC),
		(val),
		(PMIC_TOP_RST_MISC_RSV_MASK),
		(PMIC_TOP_RST_MISC_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_vpwrin_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_VPWRIN_RSTB_STATUS_MASK),
		(PMIC_VPWRIN_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_ddlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_DDLO_RSTB_STATUS_MASK),
		(PMIC_DDLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_uvlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_UVLO_RSTB_STATUS_MASK),
		(PMIC_UVLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_ddlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_RTC_DDLO_RSTB_STATUS_MASK),
		(PMIC_RTC_DDLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_chrwdt_reg_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_CHRWDT_REG_RSTB_STATUS_MASK),
		(PMIC_CHRWDT_REG_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_chrdet_reg_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_CHRDET_REG_RSTB_STATUS_MASK),
		(PMIC_CHRDET_REG_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bwdt_ddlo_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_BWDT_DDLO_RSTB_STATUS_MASK),
		(PMIC_BWDT_DDLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_rst_status_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_RST_STATUS),
		(val),
		(PMIC_TOP_RST_STATUS_RSV_MASK),
		(PMIC_TOP_RST_STATUS_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_top2_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP2_ELR0),
		(val),
		(PMIC_RG_TOP2_RSV0_MASK),
		(PMIC_RG_TOP2_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_top2_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP2_ELR1),
		(val),
		(PMIC_RG_TOP2_RSV1_MASK),
		(PMIC_RG_TOP2_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_top3_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_ID),
		(&val),
		(PMIC_TOP3_ANA_ID_MASK),
		(PMIC_TOP3_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_ID),
		(&val),
		(PMIC_TOP3_DIG_ID_MASK),
		(PMIC_TOP3_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_REV0),
		(&val),
		(PMIC_TOP3_ANA_MINOR_REV_MASK),
		(PMIC_TOP3_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_REV0),
		(&val),
		(PMIC_TOP3_ANA_MAJOR_REV_MASK),
		(PMIC_TOP3_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_REV0),
		(&val),
		(PMIC_TOP3_DIG_MINOR_REV_MASK),
		(PMIC_TOP3_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_REV0),
		(&val),
		(PMIC_TOP3_DIG_MAJOR_REV_MASK),
		(PMIC_TOP3_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_DSN_DBI),
		(&val),
		(PMIC_TOP3_DSN_CBS_MASK),
		(PMIC_TOP3_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_DSN_DBI),
		(&val),
		(PMIC_TOP3_DSN_BIX_MASK),
		(PMIC_TOP3_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_DSN_DBI),
		(&val),
		(PMIC_TOP3_DSN_ESP_MASK),
		(PMIC_TOP3_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_top3_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP3_DSN_DXI),
		(&val),
		(PMIC_TOP3_DSN_FPI_MASK),
		(PMIC_TOP3_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_spi_cmd_alert(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_MISC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_spi_cmd_alert(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_MISC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_spi_cmd_alert(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_MISC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_MASK_SPI_CMD_ALERT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_spi_cmd_alert(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_MISC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_RAW_STATUS_SPI_CMD_ALERT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_buck_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BUCK_TOP_MASK),
		(PMIC_RG_INT_MASK_BUCK_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_ldo_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_LDO_TOP_MASK),
		(PMIC_RG_INT_MASK_LDO_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_psc_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_PSC_TOP_MASK),
		(PMIC_RG_INT_MASK_PSC_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_sck_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_SCK_TOP_MASK),
		(PMIC_RG_INT_MASK_SCK_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bm_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BM_TOP_MASK),
		(PMIC_RG_INT_MASK_BM_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_hk_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_HK_TOP_MASK),
		(PMIC_RG_INT_MASK_HK_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_xpp_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_XPP_TOP_MASK),
		(PMIC_RG_INT_MASK_XPP_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_aud_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_AUD_TOP_MASK),
		(PMIC_RG_INT_MASK_AUD_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_misc_top(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_MISC_TOP_MASK),
		(PMIC_RG_INT_MASK_MISC_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_int_status_buck_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_BUCK_TOP_MASK),
		(PMIC_INT_STATUS_BUCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_ldo_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_LDO_TOP_MASK),
		(PMIC_INT_STATUS_LDO_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_psc_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_PSC_TOP_MASK),
		(PMIC_INT_STATUS_PSC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_sck_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_SCK_TOP_MASK),
		(PMIC_INT_STATUS_SCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_bm_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_BM_TOP_MASK),
		(PMIC_INT_STATUS_BM_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_hk_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_HK_TOP_MASK),
		(PMIC_INT_STATUS_HK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_xpp_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_XPP_TOP_MASK),
		(PMIC_INT_STATUS_XPP_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_aud_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_AUD_TOP_MASK),
		(PMIC_INT_STATUS_AUD_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_misc_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_MISC_TOP_MASK),
		(PMIC_INT_STATUS_MISC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_status_top_rsv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_TOP_RSV_MASK),
		(PMIC_INT_STATUS_TOP_RSV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_buck_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_BUCK_TOP_MASK),
		(PMIC_INT_RAW_STATUS_BUCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_ldo_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_LDO_TOP_MASK),
		(PMIC_INT_RAW_STATUS_LDO_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_psc_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_PSC_TOP_MASK),
		(PMIC_INT_RAW_STATUS_PSC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_sck_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_SCK_TOP_MASK),
		(PMIC_INT_RAW_STATUS_SCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_bm_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_BM_TOP_MASK),
		(PMIC_INT_RAW_STATUS_BM_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_hk_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_HK_TOP_MASK),
		(PMIC_INT_RAW_STATUS_HK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_xpp_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_XPP_TOP_MASK),
		(PMIC_INT_RAW_STATUS_XPP_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_aud_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_AUD_TOP_MASK),
		(PMIC_INT_RAW_STATUS_AUD_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_misc_top(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_MISC_TOP_MASK),
		(PMIC_INT_RAW_STATUS_MISC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_int_raw_status_top_rsv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_TOP_RSV_MASK),
		(PMIC_INT_RAW_STATUS_TOP_RSV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_polarity(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_POLARITY_MASK),
		(PMIC_RG_INT_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_DCXO_CKEN_SW),
		(val),
		(PMIC_RG_DCXO26M_CKEN_SW_SEL_MASK),
		(PMIC_RG_DCXO26M_CKEN_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo26m_cken_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_DCXO_CKEN_SW),
		(val),
		(PMIC_RG_DCXO26M_CKEN_SW_MASK),
		(PMIC_RG_DCXO26M_CKEN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_DCXO_CKEN_SW),
		(val),
		(PMIC_RG_DCXO1M_CKEN_SW_SEL_MASK),
		(PMIC_RG_DCXO1M_CKEN_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo1m_cken_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_DCXO_CKEN_SW),
		(val),
		(PMIC_RG_DCXO1M_CKEN_SW_MASK),
		(PMIC_RG_DCXO1M_CKEN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_pmrc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON0),
		(val),
		(PMIC_PMRC_EN_MASK),
		(PMIC_PMRC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_pmrc_en_set(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON0_SET),
		(val),
		(PMIC_PMRC_EN_SET_MASK),
		(PMIC_PMRC_EN_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_pmrc_en_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON0_CLR),
		(val),
		(PMIC_PMRC_EN_CLR_MASK),
		(PMIC_PMRC_EN_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vr_spm_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON1),
		(val),
		(PMIC_RG_VR_SPM_MODE_MASK),
		(PMIC_RG_VR_SPM_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vr_spm_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PMRC_CON1),
		(&val),
		(PMIC_RG_VR_SPM_MODE_MASK),
		(PMIC_RG_VR_SPM_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vr_md_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON1),
		(val),
		(PMIC_RG_VR_MD_MODE_MASK),
		(PMIC_RG_VR_MD_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vr_md_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PMRC_CON1),
		(&val),
		(PMIC_RG_VR_MD_MODE_MASK),
		(PMIC_RG_VR_MD_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vr_sshub_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON1),
		(val),
		(PMIC_RG_VR_SSHUB_MODE_MASK),
		(PMIC_RG_VR_SSHUB_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vr_sshub_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PMRC_CON1),
		(&val),
		(PMIC_RG_VR_SSHUB_MODE_MASK),
		(PMIC_RG_VR_SSHUB_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_pmrc_con1_set(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON1_SET),
		(val),
		(PMIC_PMRC_CON1_SET_MASK),
		(PMIC_PMRC_CON1_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_pmrc_con1_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON1_CLR),
		(val),
		(PMIC_PMRC_CON1_CLR_MASK),
		(PMIC_PMRC_CON1_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_srclken2_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON2),
		(val),
		(PMIC_RG_SRCLKEN2_MODE_MASK),
		(PMIC_RG_SRCLKEN2_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken2_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PMRC_CON2),
		(&val),
		(PMIC_RG_SRCLKEN2_MODE_MASK),
		(PMIC_RG_SRCLKEN2_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken3_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PMRC_CON2),
		(val),
		(PMIC_RG_SRCLKEN3_MODE_MASK),
		(PMIC_RG_SRCLKEN3_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken3_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PMRC_CON2),
		(&val),
		(PMIC_RG_SRCLKEN3_MODE_MASK),
		(PMIC_RG_SRCLKEN3_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_ID),
		(&val),
		(PMIC_PLT0_ANA_ID_MASK),
		(PMIC_PLT0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_ID),
		(&val),
		(PMIC_PLT0_DIG_ID_MASK),
		(PMIC_PLT0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_REV0),
		(&val),
		(PMIC_PLT0_ANA_MINOR_REV_MASK),
		(PMIC_PLT0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_REV0),
		(&val),
		(PMIC_PLT0_ANA_MAJOR_REV_MASK),
		(PMIC_PLT0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_REV0),
		(&val),
		(PMIC_PLT0_DIG_MINOR_REV_MASK),
		(PMIC_PLT0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_REV0),
		(&val),
		(PMIC_PLT0_DIG_MAJOR_REV_MASK),
		(PMIC_PLT0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_REV1),
		(&val),
		(PMIC_PLT0_DSN_CBS_MASK),
		(PMIC_PLT0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_REV1),
		(&val),
		(PMIC_PLT0_DSN_BIX_MASK),
		(PMIC_PLT0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_plt0_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PLT0_DSN_DXI),
		(&val),
		(PMIC_PLT0_DSN_FPI_MASK),
		(PMIC_PLT0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_osc_128k_trim_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_TRIM),
		(val),
		(PMIC_RG_OSC_128K_TRIM_EN_MASK),
		(PMIC_RG_OSC_128K_TRIM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_osc_128k_trim_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_TRIM),
		(&val),
		(PMIC_RG_OSC_128K_TRIM_EN_MASK),
		(PMIC_RG_OSC_128K_TRIM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_osc_128k_trim_rate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_CLK_TRIM),
		(val),
		(PMIC_RG_OSC_128K_TRIM_RATE_MASK),
		(PMIC_RG_OSC_128K_TRIM_RATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_da_osc_128k_trim(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_CLK_TRIM),
		(&val),
		(PMIC_DA_OSC_128K_TRIM_MASK),
		(PMIC_DA_OSC_128K_TRIM_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_otp_pa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON0),
		(val),
		(PMIC_RG_OTP_PA_MASK),
		(PMIC_RG_OTP_PA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_pdin(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON1),
		(val),
		(PMIC_RG_OTP_PDIN_MASK),
		(PMIC_RG_OTP_PDIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_ptm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON2),
		(val),
		(PMIC_RG_OTP_PTM_MASK),
		(PMIC_RG_OTP_PTM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_pwe(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON3),
		(val),
		(PMIC_RG_OTP_PWE_MASK),
		(PMIC_RG_OTP_PWE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_pprog(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON4),
		(val),
		(PMIC_RG_OTP_PPROG_MASK),
		(PMIC_RG_OTP_PPROG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_pwe_src(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON5),
		(val),
		(PMIC_RG_OTP_PWE_SRC_MASK),
		(PMIC_RG_OTP_PWE_SRC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_prog_pkey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON6),
		(val),
		(PMIC_RG_OTP_PROG_PKEY_MASK),
		(PMIC_RG_OTP_PROG_PKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_rd_pkey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON7),
		(val),
		(PMIC_RG_OTP_RD_PKEY_MASK),
		(PMIC_RG_OTP_RD_PKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_rd_trig(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON8),
		(val),
		(PMIC_RG_OTP_RD_TRIG_MASK),
		(PMIC_RG_OTP_RD_TRIG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rd_rdy_bypass(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON9),
		(val),
		(PMIC_RG_RD_RDY_BYPASS_MASK),
		(PMIC_RG_RD_RDY_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_skip_otp_out(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON10),
		(val),
		(PMIC_RG_SKIP_OTP_OUT_MASK),
		(PMIC_RG_SKIP_OTP_OUT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_rd_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_OTP_CON11),
		(val),
		(PMIC_RG_OTP_RD_SW_MASK),
		(PMIC_RG_OTP_RD_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_otp_dout_sw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OTP_CON12),
		(&val),
		(PMIC_RG_OTP_DOUT_SW_MASK),
		(PMIC_RG_OTP_DOUT_SW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_otp_rd_busy(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OTP_CON13),
		(&val),
		(PMIC_RG_OTP_RD_BUSY_MASK),
		(PMIC_RG_OTP_RD_BUSY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_otp_rd_ack(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OTP_CON13),
		(&val),
		(PMIC_RG_OTP_RD_ACK_MASK),
		(PMIC_RG_OTP_RD_ACK_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_otp_pa_sw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_OTP_CON14),
		(&val),
		(PMIC_RG_OTP_PA_SW_MASK),
		(PMIC_RG_OTP_PA_SW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_tma_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_TMA_KEY),
		(val),
		(PMIC_TMA_KEY_MASK),
		(PMIC_TMA_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_mdb_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF0),
		(val),
		(PMIC_TOP_MDB_RSV0_MASK),
		(PMIC_TOP_MDB_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_top_mdb_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF1),
		(val),
		(PMIC_TOP_MDB_RSV1_MASK),
		(PMIC_TOP_MDB_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_mdb_dm1_ds_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF2),
		(val),
		(PMIC_RG_MDB_DM1_DS_EN_MASK),
		(PMIC_RG_MDB_DM1_DS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_mdb_dm1_ds_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_MDB_CONF2),
		(&val),
		(PMIC_RG_MDB_DM1_DS_EN_MASK),
		(PMIC_RG_MDB_DM1_DS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_auto_load_force(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF2),
		(val),
		(PMIC_RG_AUTO_LOAD_FORCE_MASK),
		(PMIC_RG_AUTO_LOAD_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_otp_write_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF2),
		(val),
		(PMIC_RG_OTP_WRITE_SEL_MASK),
		(PMIC_RG_OTP_WRITE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_top_mdb_bridge_bypass_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF3),
		(val),
		(PMIC_RG_TOP_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_TOP_MDB_BRIDGE_BYPASS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_top_mdb_bridge_bypass_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_MDB_CONF3),
		(&val),
		(PMIC_RG_TOP_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_TOP_MDB_BRIDGE_BYPASS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_sck_mdb_bridge_bypass_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF3),
		(val),
		(PMIC_RG_SCK_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_SCK_MDB_BRIDGE_BYPASS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_sck_mdb_bridge_bypass_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_MDB_CONF3),
		(&val),
		(PMIC_RG_SCK_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_SCK_MDB_BRIDGE_BYPASS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_ldo_mdb_bridge_bypass_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF3),
		(val),
		(PMIC_RG_LDO_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_LDO_MDB_BRIDGE_BYPASS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ldo_mdb_bridge_bypass_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_MDB_CONF3),
		(&val),
		(PMIC_RG_LDO_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_LDO_MDB_BRIDGE_BYPASS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_mdb_bridge_bypass_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF3),
		(val),
		(PMIC_RG_BUCK_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_BUCK_MDB_BRIDGE_BYPASS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_mdb_bridge_bypass_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_MDB_CONF3),
		(&val),
		(PMIC_RG_BUCK_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_BUCK_MDB_BRIDGE_BYPASS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_mdb_brdg_acs_suspend(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF3),
		(val),
		(PMIC_RG_MDB_BRDG_ACS_SUSPEND_MASK),
		(PMIC_RG_MDB_BRDG_ACS_SUSPEND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_mdb_brdg_acs_deepidle(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_MDB_CONF3),
		(val),
		(PMIC_RG_MDB_BRDG_ACS_DEEPIDLE_MASK),
		(PMIC_RG_MDB_BRDG_ACS_DEEPIDLE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_osc_128k_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PLT0_ELR0),
		(val),
		(PMIC_RG_OSC_128K_TRIM_MASK),
		(PMIC_RG_OSC_128K_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_spislv_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_ID),
		(&val),
		(PMIC_SPISLV_ANA_ID_MASK),
		(PMIC_SPISLV_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_ID),
		(&val),
		(PMIC_SPISLV_DIG_ID_MASK),
		(PMIC_SPISLV_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_ANA_MINOR_REV_MASK),
		(PMIC_SPISLV_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_ANA_MAJOR_REV_MASK),
		(PMIC_SPISLV_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_DIG_MINOR_REV_MASK),
		(PMIC_SPISLV_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_DIG_MAJOR_REV_MASK),
		(PMIC_SPISLV_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV1),
		(&val),
		(PMIC_SPISLV_DSN_CBS_MASK),
		(PMIC_SPISLV_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV1),
		(&val),
		(PMIC_SPISLV_DSN_BIX_MASK),
		(PMIC_SPISLV_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_REV1),
		(&val),
		(PMIC_SPISLV_DSN_ESP_MASK),
		(PMIC_SPISLV_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_spislv_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SPISLV_DSN_DXI),
		(&val),
		(PMIC_SPISLV_DSN_FPI_MASK),
		(PMIC_SPISLV_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_spi_miso_mode_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON0),
		(val),
		(PMIC_RG_SPI_MISO_MODE_SEL_MASK),
		(PMIC_RG_SPI_MISO_MODE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_spi_miso_mode_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RG_SPI_CON0),
		(&val),
		(PMIC_RG_SPI_MISO_MODE_SEL_MASK),
		(PMIC_RG_SPI_MISO_MODE_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_en_record(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_RECORD0),
		(val),
		(PMIC_RG_EN_RECORD_MASK),
		(PMIC_RG_EN_RECORD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rd_record_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_RECORD0),
		(val),
		(PMIC_RG_RD_RECORD_EN_MASK),
		(PMIC_RG_RD_RECORD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rd_record_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RG_SPI_RECORD0),
		(&val),
		(PMIC_RG_RD_RECORD_EN_MASK),
		(PMIC_RG_RD_RECORD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_spi_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_RECORD0),
		(val),
		(PMIC_RG_SPI_RSV_MASK),
		(PMIC_RG_SPI_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_dio_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_DIO_EN),
		(val),
		(PMIC_DEW_DIO_EN_MASK),
		(PMIC_DEW_DIO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_dew_read_test(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DEW_READ_TEST),
		(&val),
		(PMIC_DEW_READ_TEST_MASK),
		(PMIC_DEW_READ_TEST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_dew_write_test(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_WRITE_TEST),
		(val),
		(PMIC_DEW_WRITE_TEST_MASK),
		(PMIC_DEW_WRITE_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_crc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CRC_SWRST),
		(val),
		(PMIC_DEW_CRC_SWRST_MASK),
		(PMIC_DEW_CRC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_crc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CRC_EN),
		(val),
		(PMIC_DEW_CRC_EN_MASK),
		(PMIC_DEW_CRC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_dew_crc_val(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DEW_CRC_VAL),
		(&val),
		(PMIC_DEW_CRC_VAL_MASK),
		(PMIC_DEW_CRC_VAL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_dew_cipher_key_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CIPHER_KEY_SEL),
		(val),
		(PMIC_DEW_CIPHER_KEY_SEL_MASK),
		(PMIC_DEW_CIPHER_KEY_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_cipher_iv_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CIPHER_IV_SEL),
		(val),
		(PMIC_DEW_CIPHER_IV_SEL_MASK),
		(PMIC_DEW_CIPHER_IV_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_cipher_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CIPHER_EN),
		(val),
		(PMIC_DEW_CIPHER_EN_MASK),
		(PMIC_DEW_CIPHER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_dew_cipher_rdy(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DEW_CIPHER_RDY),
		(&val),
		(PMIC_DEW_CIPHER_RDY_MASK),
		(PMIC_DEW_CIPHER_RDY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_dew_cipher_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CIPHER_MODE),
		(val),
		(PMIC_DEW_CIPHER_MODE_MASK),
		(PMIC_DEW_CIPHER_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_cipher_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_CIPHER_SWRST),
		(val),
		(PMIC_DEW_CIPHER_SWRST_MASK),
		(PMIC_DEW_CIPHER_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dew_rddmy_no(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DEW_RDDMY_NO),
		(val),
		(PMIC_DEW_RDDMY_NO_MASK),
		(PMIC_DEW_RDDMY_NO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_dly_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON2),
		(val),
		(PMIC_RG_SPI_DLY_SEL_MASK),
		(PMIC_RG_SPI_DLY_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_record_cmd0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_CMD0),
		(&val),
		(PMIC_RECORD_CMD0_MASK),
		(PMIC_RECORD_CMD0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_cmd1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_CMD1),
		(&val),
		(PMIC_RECORD_CMD1_MASK),
		(PMIC_RECORD_CMD1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_cmd2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_CMD2),
		(&val),
		(PMIC_RECORD_CMD2_MASK),
		(PMIC_RECORD_CMD2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_cmd3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_CMD3),
		(&val),
		(PMIC_RECORD_CMD3_MASK),
		(PMIC_RECORD_CMD3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_cmd4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_CMD4),
		(&val),
		(PMIC_RECORD_CMD4_MASK),
		(PMIC_RECORD_CMD4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_cmd5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_CMD5),
		(&val),
		(PMIC_RECORD_CMD5_MASK),
		(PMIC_RECORD_CMD5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_wdata0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_WDATA0),
		(&val),
		(PMIC_RECORD_WDATA0_MASK),
		(PMIC_RECORD_WDATA0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_wdata1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_WDATA1),
		(&val),
		(PMIC_RECORD_WDATA1_MASK),
		(PMIC_RECORD_WDATA1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_wdata2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_WDATA2),
		(&val),
		(PMIC_RECORD_WDATA2_MASK),
		(PMIC_RECORD_WDATA2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_wdata3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_WDATA3),
		(&val),
		(PMIC_RECORD_WDATA3_MASK),
		(PMIC_RECORD_WDATA3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_wdata4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_WDATA4),
		(&val),
		(PMIC_RECORD_WDATA4_MASK),
		(PMIC_RECORD_WDATA4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_record_wdata5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RECORD_WDATA5),
		(&val),
		(PMIC_RECORD_WDATA5_MASK),
		(PMIC_RECORD_WDATA5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_addr_target(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON9),
		(val),
		(PMIC_RG_ADDR_TARGET_MASK),
		(PMIC_RG_ADDR_TARGET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_addr_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON10),
		(val),
		(PMIC_RG_ADDR_MASK_MASK),
		(PMIC_RG_ADDR_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wdata_target(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON11),
		(val),
		(PMIC_RG_WDATA_TARGET_MASK),
		(PMIC_RG_WDATA_TARGET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wdata_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON12),
		(val),
		(PMIC_RG_WDATA_MASK_MASK),
		(PMIC_RG_WDATA_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spi_record_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON13),
		(val),
		(PMIC_RG_SPI_RECORD_CLR_MASK),
		(PMIC_RG_SPI_RECORD_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_cmd_alert_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON13),
		(val),
		(PMIC_RG_CMD_ALERT_CLR_MASK),
		(PMIC_RG_CMD_ALERT_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_spislv_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SPISLV_KEY),
		(val),
		(PMIC_SPISLV_KEY_MASK),
		(PMIC_SPISLV_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_int_type_con0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_INT_TYPE_CON0),
		(val),
		(PMIC_INT_TYPE_CON0_MASK),
		(PMIC_INT_TYPE_CON0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_cpu_int_sta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_INT_STA),
		(&val),
		(PMIC_CPU_INT_STA_MASK),
		(PMIC_CPU_INT_STA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_md32_int_sta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_INT_STA),
		(&val),
		(PMIC_MD32_INT_STA_MASK),
		(PMIC_MD32_INT_STA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in3_smps_clk_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN3_SMPS_CLK_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN3_SMPS_CLK_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in3_smps_clk_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RG_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN3_SMPS_CLK_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN3_SMPS_CLK_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in3_en_smps_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in3_en_smps_test(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RG_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in2_smps_clk_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN2_SMPS_CLK_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN2_SMPS_CLK_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in2_smps_clk_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RG_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN2_SMPS_CLK_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN2_SMPS_CLK_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in2_en_smps_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in2_en_smps_test(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RG_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_SPI_CON0),
		(val),
		(PMIC_RG_SRCLKEN_IN2_EN_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_SPI_CON0),
		(&val),
		(PMIC_RG_SRCLKEN_IN2_EN_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_srclken_in3_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_TOP_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN3_EN_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_srclken_in3_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_TOP_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN3_EN_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DSN_ID),
		(&val),
		(PMIC_SCK_TOP_ANA_ID_MASK),
		(PMIC_SCK_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DSN_ID),
		(&val),
		(PMIC_SCK_TOP_DIG_ID_MASK),
		(PMIC_SCK_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_ANA_MINOR_REV_MASK),
		(PMIC_SCK_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_SCK_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_DIG_MINOR_REV_MASK),
		(PMIC_SCK_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_SCK_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DBI),
		(&val),
		(PMIC_SCK_TOP_CBS_MASK),
		(PMIC_SCK_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_DBI),
		(&val),
		(PMIC_SCK_TOP_BIX_MASK),
		(PMIC_SCK_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_sck_top_xtal_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CON0),
		(val),
		(PMIC_SCK_TOP_XTAL_SEL_MASK),
		(PMIC_SCK_TOP_XTAL_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_sck_top_reserved(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CON0),
		(val),
		(PMIC_SCK_TOP_RESERVED_MASK),
		(PMIC_SCK_TOP_RESERVED_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_xosc32_enb_det(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_CON1),
		(&val),
		(PMIC_XOSC32_ENB_DET_MASK),
		(PMIC_XOSC32_ENB_DET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_sck_top_test_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_TEST_OUT),
		(&val),
		(PMIC_SCK_TOP_TEST_OUT_MASK),
		(PMIC_SCK_TOP_TEST_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_sck_top_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_TEST_CON0),
		(val),
		(PMIC_SCK_TOP_MON_FLAG_SEL_MASK),
		(PMIC_SCK_TOP_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_sck_top_mon_grp_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_TEST_CON0),
		(val),
		(PMIC_SCK_TOP_MON_GRP_SEL_MASK),
		(PMIC_SCK_TOP_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_sec_mclk_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_MCLK_PDN_MASK),
		(PMIC_RG_RTC_SEC_MCLK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_eosc_cali_test_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_EOSC_CALI_TEST_CK_PDN_MASK),
		(PMIC_RG_EOSC_CALI_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_eosc32_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_EOSC32_CK_PDN_MASK),
		(PMIC_RG_RTC_EOSC32_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_sec_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_MASK),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_mclk_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_MCLK_PDN_MASK),
		(PMIC_RG_RTC_MCLK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_32K_CK_PDN_MASK),
		(PMIC_RG_RTC_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_26m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_26M_CK_PDN_MASK),
		(PMIC_RG_RTC_26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_2sec_off_det_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_2SEC_OFF_DET_PDN_MASK),
		(PMIC_RG_RTC_2SEC_OFF_DET_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_intrp_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_INTRP_CK_PDN_MASK),
		(PMIC_RG_RTC_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_26m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_mclk_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_MCLK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_MCLK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_sec_32k_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_sec_mclk_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_MCLK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_SEC_MCLK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_intrp_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_INTRP_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_INTRP_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_clk_pdn_hwen_rsv_1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_1_MASK),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_clk_pdn_hwen_rsv_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_0_MASK),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_ck_tstsel_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_RTC_CK_TSTSEL_RSV_MASK),
		(PMIC_RG_RTC_CK_TSTSEL_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtcdet_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_RTCDET_CK_TSTSEL_MASK),
		(PMIC_RG_RTCDET_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_eosc_cali_test_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_MASK),
		(PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_eosc32_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_RTC_EOSC32_CK_TSTSEL_MASK),
		(PMIC_RG_RTC_EOSC32_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_RTC_SWRST_MASK),
		(PMIC_RG_RTC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_sec_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_RTC_SEC_SWRST_MASK),
		(PMIC_RG_RTC_SEC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_rtc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_RTC_SWRST_MASK),
		(PMIC_RG_BANK_RTC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_rtc_sec_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_RTC_SEC_SWRST_MASK),
		(PMIC_RG_BANK_RTC_SEC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_eosc_cali_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_EOSC_CALI_SWRST_MASK),
		(PMIC_RG_BANK_EOSC_CALI_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_sck_top_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_SCK_TOP_SWRST_MASK),
		(PMIC_RG_BANK_SCK_TOP_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_fqmtr_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FQMTR_RST_MASK),
		(PMIC_RG_BANK_FQMTR_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_en_rtc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_RTC_MASK),
		(PMIC_RG_INT_EN_RTC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_rtc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_RTC_MASK),
		(PMIC_RG_INT_EN_RTC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_rtc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_RTC_MASK),
		(PMIC_RG_INT_MASK_RTC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_rtc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_SCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_RTC_MASK),
		(PMIC_RG_INT_RAW_STATUS_RTC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_sck_top_polarity(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SCK_TOP_INT_MISC_CON),
		(val),
		(PMIC_SCK_TOP_POLARITY_MASK),
		(PMIC_SCK_TOP_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_eosc_cali_start(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_EOSC_CALI_CON0),
		(val),
		(PMIC_EOSC_CALI_START_MASK),
		(PMIC_EOSC_CALI_START_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_eosc_cali_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_EOSC_CALI_CON0),
		(val),
		(PMIC_EOSC_CALI_TD_MASK),
		(PMIC_EOSC_CALI_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_eosc_cali_test(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_EOSC_CALI_CON0),
		(val),
		(PMIC_EOSC_CALI_TEST_MASK),
		(PMIC_EOSC_CALI_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_eosc_cali_dcxo_rdy_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_EOSC_CALI_CON1),
		(val),
		(PMIC_EOSC_CALI_DCXO_RDY_TD_MASK),
		(PMIC_EOSC_CALI_DCXO_RDY_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_frc_vtcxo0_on(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_EOSC_CALI_CON1),
		(val),
		(PMIC_FRC_VTCXO0_ON_MASK),
		(PMIC_FRC_VTCXO0_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_eosc_cali_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_EOSC_CALI_CON1),
		(val),
		(PMIC_EOSC_CALI_RSV_MASK),
		(PMIC_EOSC_CALI_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_mix_eosc32_stp_lpdtb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_MIX_CON0),
		(&val),
		(PMIC_MIX_EOSC32_STP_LPDTB_MASK),
		(PMIC_MIX_EOSC32_STP_LPDTB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_mix_eosc32_stp_lpden(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_EOSC32_STP_LPDEN_MASK),
		(PMIC_MIX_EOSC32_STP_LPDEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_xosc32_stp_pwdb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_PWDB_MASK),
		(PMIC_MIX_XOSC32_STP_PWDB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_mix_xosc32_stp_lpdtb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_MIX_CON0),
		(&val),
		(PMIC_MIX_XOSC32_STP_LPDTB_MASK),
		(PMIC_MIX_XOSC32_STP_LPDTB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_mix_xosc32_stp_lpden(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_LPDEN_MASK),
		(PMIC_MIX_XOSC32_STP_LPDEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_xosc32_stp_lpdrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_LPDRST_MASK),
		(PMIC_MIX_XOSC32_STP_LPDRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_xosc32_stp_cali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_CALI_MASK),
		(PMIC_MIX_XOSC32_STP_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_stmp_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON0),
		(val),
		(PMIC_STMP_MODE_MASK),
		(PMIC_STMP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_eosc32_stp_chop_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_STP_CHOP_EN_MASK),
		(PMIC_MIX_EOSC32_STP_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_dcxo_stp_lvsh_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_DCXO_STP_LVSH_EN_MASK),
		(PMIC_MIX_DCXO_STP_LVSH_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_pmu_stp_ddlo_vrtc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_MASK),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_pmu_stp_ddlo_vrtc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_EN_MASK),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_stp_xosc32_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_STP_XOSC32_ENB_MASK),
		(PMIC_MIX_RTC_STP_XOSC32_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_dcxo_stp_test_deglitch_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_MASK),
		(PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_eosc32_stp_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_STP_RSV_MASK),
		(PMIC_MIX_EOSC32_STP_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_eosc32_vct_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_VCT_EN_MASK),
		(PMIC_MIX_EOSC32_VCT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_eosc32_opt(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_OPT_MASK),
		(PMIC_MIX_EOSC32_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_dcxo_stp_lvsh_en_int(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_DCXO_STP_LVSH_EN_INT_MASK),
		(PMIC_MIX_DCXO_STP_LVSH_EN_INT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_gpio_coredetb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_COREDETB_MASK),
		(PMIC_MIX_RTC_GPIO_COREDETB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_gpio_f32kob(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_F32KOB_MASK),
		(PMIC_MIX_RTC_GPIO_F32KOB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_gpio_gpo(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_GPO_MASK),
		(PMIC_MIX_RTC_GPIO_GPO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_gpio_oe(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_OE_MASK),
		(PMIC_MIX_RTC_GPIO_OE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_mix_rtc_stp_debug_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_MIX_CON2),
		(&val),
		(PMIC_MIX_RTC_STP_DEBUG_OUT_MASK),
		(PMIC_MIX_RTC_STP_DEBUG_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_mix_rtc_stp_debug_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_RTC_STP_DEBUG_SEL_MASK),
		(PMIC_MIX_RTC_STP_DEBUG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_stp_k_eosc32_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_RTC_STP_K_EOSC32_EN_MASK),
		(PMIC_MIX_RTC_STP_K_EOSC32_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_rtc_stp_embck_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_RTC_STP_EMBCK_SEL_MASK),
		(PMIC_MIX_RTC_STP_EMBCK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mix_stp_bbwakeup(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_STP_BBWAKEUP_MASK),
		(PMIC_MIX_STP_BBWAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_mix_stp_rtc_ddlo(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_MIX_CON2),
		(&val),
		(PMIC_MIX_STP_RTC_DDLO_MASK),
		(PMIC_MIX_STP_RTC_DDLO_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_mix_rtc_xosc32_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_MIX_CON2),
		(&val),
		(PMIC_MIX_RTC_XOSC32_ENB_MASK),
		(PMIC_MIX_RTC_XOSC32_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_mix_efuse_xosc32_enb_opt(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_EFUSE_XOSC32_ENB_OPT_MASK),
		(PMIC_MIX_EFUSE_XOSC32_ENB_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rtc_test_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_DIG_CON0),
		(&val),
		(PMIC_RG_RTC_TEST_OUT_MASK),
		(PMIC_RG_RTC_TEST_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_rtc_dig_test_in(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_DIG_CON0),
		(val),
		(PMIC_RG_RTC_DIG_TEST_IN_MASK),
		(PMIC_RG_RTC_DIG_TEST_IN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_dig_test_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_DIG_CON0),
		(val),
		(PMIC_RG_RTC_DIG_TEST_MODE_MASK),
		(PMIC_RG_RTC_DIG_TEST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rtc_dig_test_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_DIG_CON0),
		(&val),
		(PMIC_RG_RTC_DIG_TEST_MODE_MASK),
		(PMIC_RG_RTC_DIG_TEST_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fqmtr_tcksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FQMTR_CON0),
		(val),
		(PMIC_FQMTR_TCKSEL_MASK),
		(PMIC_FQMTR_TCKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fqmtr_busy(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FQMTR_CON0),
		(&val),
		(PMIC_FQMTR_BUSY_MASK),
		(PMIC_FQMTR_BUSY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fqmtr_dcxo26m_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FQMTR_CON0),
		(val),
		(PMIC_FQMTR_DCXO26M_EN_MASK),
		(PMIC_FQMTR_DCXO26M_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fqmtr_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FQMTR_CON0),
		(val),
		(PMIC_FQMTR_EN_MASK),
		(PMIC_FQMTR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fqmtr_winset(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FQMTR_CON1),
		(val),
		(PMIC_FQMTR_WINSET_MASK),
		(PMIC_FQMTR_WINSET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fqmtr_data(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FQMTR_CON2),
		(&val),
		(PMIC_FQMTR_DATA_MASK),
		(PMIC_FQMTR_DATA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_xo_soc_vote(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_BUF_CTL0),
		(val),
		(PMIC_XO_SOC_VOTE_MASK),
		(PMIC_XO_SOC_VOTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_wcn_vote(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_BUF_CTL1),
		(val),
		(PMIC_XO_WCN_VOTE_MASK),
		(PMIC_XO_WCN_VOTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_nfc_vote(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_BUF_CTL2),
		(val),
		(PMIC_XO_NFC_VOTE_MASK),
		(PMIC_XO_NFC_VOTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cel_vote(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_BUF_CTL3),
		(val),
		(PMIC_XO_CEL_VOTE_MASK),
		(PMIC_XO_CEL_VOTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_ext_vote(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_BUF_CTL4),
		(val),
		(PMIC_XO_EXT_VOTE_MASK),
		(PMIC_XO_EXT_VOTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_mode_conn_bt_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_CONN_BT0),
		(val),
		(PMIC_XO_MODE_CONN_BT_MASK_MASK),
		(PMIC_XO_MODE_CONN_BT_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_buf_conn_bt_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_XO_CONN_BT0),
		(val),
		(PMIC_XO_BUF_CONN_BT_MASK_MASK),
		(PMIC_XO_BUF_CONN_BT_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bbpu(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_BBPU),
		(val),
		(PMIC_BBPU_MASK),
		(PMIC_BBPU_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_cbusy(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_BBPU),
		(&val),
		(PMIC_CBUSY_MASK),
		(PMIC_CBUSY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_alarm_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_BBPU),
		(&val),
		(PMIC_ALARM_STATUS_MASK),
		(PMIC_ALARM_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_alsta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_IRQ_STA),
		(&val),
		(PMIC_ALSTA_MASK),
		(PMIC_ALSTA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_tcsta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_IRQ_STA),
		(&val),
		(PMIC_TCSTA_MASK),
		(PMIC_TCSTA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_lpsta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_IRQ_STA),
		(&val),
		(PMIC_LPSTA_MASK),
		(PMIC_LPSTA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_al_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_IRQ_EN),
		(val),
		(PMIC_AL_EN_MASK),
		(PMIC_AL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_IRQ_EN),
		(val),
		(PMIC_TC_EN_MASK),
		(PMIC_TC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_oneshot(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_IRQ_EN),
		(val),
		(PMIC_ONESHOT_MASK),
		(PMIC_ONESHOT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_lp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_IRQ_EN),
		(val),
		(PMIC_LP_EN_MASK),
		(PMIC_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_seccii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_SECCII_MASK),
		(PMIC_SECCII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mincii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_MINCII_MASK),
		(PMIC_MINCII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_houcii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_HOUCII_MASK),
		(PMIC_HOUCII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_domcii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_DOMCII_MASK),
		(PMIC_DOMCII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dowcii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_DOWCII_MASK),
		(PMIC_DOWCII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mthcii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_MTHCII_MASK),
		(PMIC_MTHCII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_yeacii(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_YEACII_MASK),
		(PMIC_YEACII_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_seccii_1_2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_SECCII_1_2_MASK),
		(PMIC_SECCII_1_2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_seccii_1_4(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_SECCII_1_4_MASK),
		(PMIC_SECCII_1_4_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_seccii_1_8(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CII_EN),
		(val),
		(PMIC_SECCII_1_8_MASK),
		(PMIC_SECCII_1_8_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_sec_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_SEC_MSK_MASK),
		(PMIC_SEC_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_min_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_MIN_MSK_MASK),
		(PMIC_MIN_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_hou_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_HOU_MSK_MASK),
		(PMIC_HOU_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dom_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_DOM_MSK_MASK),
		(PMIC_DOM_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_dow_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_DOW_MSK_MASK),
		(PMIC_DOW_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_mth_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_MTH_MSK_MASK),
		(PMIC_MTH_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_yea_msk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MASK),
		(val),
		(PMIC_YEA_MSK_MASK),
		(PMIC_YEA_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_second(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_SEC),
		(val),
		(PMIC_TC_SECOND_MASK),
		(PMIC_TC_SECOND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_minute(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_MIN),
		(val),
		(PMIC_TC_MINUTE_MASK),
		(PMIC_TC_MINUTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_hour(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_HOU),
		(val),
		(PMIC_TC_HOUR_MASK),
		(PMIC_TC_HOUR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_dom(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_DOM),
		(val),
		(PMIC_TC_DOM_MASK),
		(PMIC_TC_DOM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_dow(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_DOW),
		(val),
		(PMIC_TC_DOW_MASK),
		(PMIC_TC_DOW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_month(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_MTH),
		(val),
		(PMIC_TC_MONTH_MASK),
		(PMIC_TC_MONTH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rtc_macro_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_TC_MTH),
		(&val),
		(PMIC_RTC_MACRO_ID_MASK),
		(PMIC_RTC_MACRO_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_tc_year(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_YEA),
		(val),
		(PMIC_TC_YEAR_MASK),
		(PMIC_TC_YEAR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_second(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_AL_SECOND_MASK),
		(PMIC_AL_SECOND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bbpu_auto_pdn_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_AUTO_PDN_SEL_MASK),
		(PMIC_BBPU_AUTO_PDN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bbpu_2sec_ck_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_2SEC_CK_SEL_MASK),
		(PMIC_BBPU_2SEC_CK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bbpu_2sec_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_2SEC_EN_MASK),
		(PMIC_BBPU_2SEC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bbpu_2sec_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_2SEC_MODE_MASK),
		(PMIC_BBPU_2SEC_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_bbpu_2sec_stat_sta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_AL_SEC),
		(&val),
		(PMIC_BBPU_2SEC_STAT_STA_MASK),
		(PMIC_BBPU_2SEC_STAT_STA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rtc_lpd_opt(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_RTC_LPD_OPT_MASK),
		(PMIC_RTC_LPD_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_k_eosc32_vtcxo_on_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_SEC),
		(val),
		(PMIC_K_EOSC32_VTCXO_ON_SEL_MASK),
		(PMIC_K_EOSC32_VTCXO_ON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_minute(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MIN),
		(val),
		(PMIC_AL_MINUTE_MASK),
		(PMIC_AL_MINUTE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_hour(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_HOU),
		(val),
		(PMIC_AL_HOUR_MASK),
		(PMIC_AL_HOUR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_new_spare0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_HOU),
		(val),
		(PMIC_NEW_SPARE0_MASK),
		(PMIC_NEW_SPARE0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_dom(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_DOM),
		(val),
		(PMIC_AL_DOM_MASK),
		(PMIC_AL_DOM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_new_spare1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_DOM),
		(val),
		(PMIC_NEW_SPARE1_MASK),
		(PMIC_NEW_SPARE1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_dow(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_DOW),
		(val),
		(PMIC_AL_DOW_MASK),
		(PMIC_AL_DOW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_eosc_cali_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_DOW),
		(val),
		(PMIC_RG_EOSC_CALI_TD_MASK),
		(PMIC_RG_EOSC_CALI_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_new_spare2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_DOW),
		(val),
		(PMIC_NEW_SPARE2_MASK),
		(PMIC_NEW_SPARE2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_month(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MTH),
		(val),
		(PMIC_AL_MONTH_MASK),
		(PMIC_AL_MONTH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_new_spare3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_MTH),
		(val),
		(PMIC_NEW_SPARE3_MASK),
		(PMIC_NEW_SPARE3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_al_year(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_YEA),
		(val),
		(PMIC_AL_YEAR_MASK),
		(PMIC_AL_YEAR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_k_eosc_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_AL_YEA),
		(val),
		(PMIC_RTC_K_EOSC_RSV_MASK),
		(PMIC_RTC_K_EOSC_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xosccali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_XOSCCALI_MASK),
		(PMIC_XOSCCALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rtc_xosc32_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_OSC32CON),
		(&val),
		(PMIC_RTC_XOSC32_ENB_MASK),
		(PMIC_RTC_XOSC32_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rtc_embck_sel_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EMBCK_SEL_MODE_MASK),
		(PMIC_RTC_EMBCK_SEL_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_embck_src_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EMBCK_SRC_SEL_MASK),
		(PMIC_RTC_EMBCK_SRC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_embck_sel_option(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EMBCK_SEL_OPTION_MASK),
		(PMIC_RTC_EMBCK_SEL_OPTION_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_gps_ckout_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_GPS_CKOUT_EN_MASK),
		(PMIC_RTC_GPS_CKOUT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_eosc32_vct_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EOSC32_VCT_EN_MASK),
		(PMIC_RTC_EOSC32_VCT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_eosc32_chop_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EOSC32_CHOP_EN_MASK),
		(PMIC_RTC_EOSC32_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_gp_osc32_con(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_GP_OSC32_CON_MASK),
		(PMIC_RTC_GP_OSC32_CON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_reg_xosc32_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_OSC32CON),
		(val),
		(PMIC_RTC_REG_XOSC32_ENB_MASK),
		(PMIC_RTC_REG_XOSC32_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_powerkey1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_POWERKEY1),
		(val),
		(PMIC_RTC_POWERKEY1_MASK),
		(PMIC_RTC_POWERKEY1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_powerkey2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_POWERKEY2),
		(val),
		(PMIC_RTC_POWERKEY2_MASK),
		(PMIC_RTC_POWERKEY2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_pdn1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_PDN1),
		(val),
		(PMIC_RTC_PDN1_MASK),
		(PMIC_RTC_PDN1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_pdn2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_PDN2),
		(val),
		(PMIC_RTC_PDN2_MASK),
		(PMIC_RTC_PDN2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_spar0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_SPAR0),
		(val),
		(PMIC_RTC_SPAR0_MASK),
		(PMIC_RTC_SPAR0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_spar1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_SPAR1),
		(val),
		(PMIC_RTC_SPAR1_MASK),
		(PMIC_RTC_SPAR1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_prot(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_PROT),
		(val),
		(PMIC_RTC_PROT_MASK),
		(PMIC_RTC_PROT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_diff(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_DIFF),
		(val),
		(PMIC_RTC_DIFF_MASK),
		(PMIC_RTC_DIFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_power_detected(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_DIFF),
		(&val),
		(PMIC_POWER_DETECTED_MASK),
		(PMIC_POWER_DETECTED_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_k_eosc32_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_DIFF),
		(val),
		(PMIC_K_EOSC32_RSV_MASK),
		(PMIC_K_EOSC32_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_cali_rd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_DIFF),
		(val),
		(PMIC_CALI_RD_SEL_MASK),
		(PMIC_CALI_RD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_cali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CALI),
		(val),
		(PMIC_RTC_CALI_MASK),
		(PMIC_RTC_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_cali_wr_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CALI),
		(val),
		(PMIC_CALI_WR_SEL_MASK),
		(PMIC_CALI_WR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_k_eosc32_overflow(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CALI),
		(val),
		(PMIC_K_EOSC32_OVERFLOW_MASK),
		(PMIC_K_EOSC32_OVERFLOW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_vbat_lpsta_raw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_VBAT_LPSTA_RAW_MASK),
		(PMIC_VBAT_LPSTA_RAW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_eosc32_lpen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_EOSC32_LPEN_MASK),
		(PMIC_EOSC32_LPEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xosc32_lpen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_XOSC32_LPEN_MASK),
		(PMIC_XOSC32_LPEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_lprst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_LPRST_MASK),
		(PMIC_LPRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_cdbo(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_CDBO_MASK),
		(PMIC_CDBO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_f32kob(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_F32KOB_MASK),
		(PMIC_F32KOB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpo(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GPO_MASK),
		(PMIC_GPO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_goe(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GOE_MASK),
		(PMIC_GOE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gsr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GSR_MASK),
		(PMIC_GSR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gsmt(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GSMT_MASK),
		(PMIC_GSMT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GPEN_MASK),
		(PMIC_GPEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_gpu(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GPU_MASK),
		(PMIC_GPU_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_ge4(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GE4_MASK),
		(PMIC_GE4_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_ge8(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_CON),
		(val),
		(PMIC_GE8_MASK),
		(PMIC_GE8_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_gpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_CON),
		(&val),
		(PMIC_GPI_MASK),
		(PMIC_GPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_lpsta_raw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_CON),
		(&val),
		(PMIC_LPSTA_RAW_MASK),
		(PMIC_LPSTA_RAW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rtc_int_cnt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_RTC_INT_CNT),
		(&val),
		(PMIC_RTC_INT_CNT_MASK),
		(PMIC_RTC_INT_CNT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rtc_sec_dat0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_SEC_DAT0),
		(val),
		(PMIC_RTC_SEC_DAT0_MASK),
		(PMIC_RTC_SEC_DAT0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_sec_dat1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_SEC_DAT1),
		(val),
		(PMIC_RTC_SEC_DAT1_MASK),
		(PMIC_RTC_SEC_DAT1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_sec_dat2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_SEC_DAT2),
		(val),
		(PMIC_RTC_SEC_DAT2_MASK),
		(PMIC_RTC_SEC_DAT2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_second_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_SEC_SEC),
		(val),
		(PMIC_TC_SECOND_SEC_MASK),
		(PMIC_TC_SECOND_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_minute_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_MIN_SEC),
		(val),
		(PMIC_TC_MINUTE_SEC_MASK),
		(PMIC_TC_MINUTE_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_hour_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_HOU_SEC),
		(val),
		(PMIC_TC_HOUR_SEC_MASK),
		(PMIC_TC_HOUR_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_dom_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_DOM_SEC),
		(val),
		(PMIC_TC_DOM_SEC_MASK),
		(PMIC_TC_DOM_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_dow_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_DOW_SEC),
		(val),
		(PMIC_TC_DOW_SEC_MASK),
		(PMIC_TC_DOW_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_month_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_MTH_SEC),
		(val),
		(PMIC_TC_MONTH_SEC_MASK),
		(PMIC_TC_MONTH_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_tc_year_sec(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_TC_YEA_SEC),
		(val),
		(PMIC_TC_YEAR_SEC_MASK),
		(PMIC_TC_YEAR_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rtc_sec_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_RTC_SEC_CK_PDN),
		(val),
		(PMIC_RTC_SEC_CK_PDN_MASK),
		(PMIC_RTC_SEC_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_dcxo_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_DSN_DBI),
		(&val),
		(PMIC_DCXO_DSN_CBS_MASK),
		(PMIC_DCXO_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dcxo_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_DSN_DBI),
		(&val),
		(PMIC_DCXO_DSN_BIX_MASK),
		(PMIC_DCXO_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dcxo_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_DSN_DBI),
		(&val),
		(PMIC_DCXO_DSN_ESP_MASK),
		(PMIC_DCXO_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dcxo_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_DSN_DXI),
		(&val),
		(PMIC_DCXO_DSN_FPI_MASK),
		(PMIC_DCXO_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_xo_extbuf1_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF1_MODE_MASK),
		(PMIC_XO_EXTBUF1_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf1_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF1_EN_M_MASK),
		(PMIC_XO_EXTBUF1_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf2_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF2_MODE_MASK),
		(PMIC_XO_EXTBUF2_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf2_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF2_EN_M_MASK),
		(PMIC_XO_EXTBUF2_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf3_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF3_MODE_MASK),
		(PMIC_XO_EXTBUF3_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf3_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF3_EN_M_MASK),
		(PMIC_XO_EXTBUF3_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf4_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF4_MODE_MASK),
		(PMIC_XO_EXTBUF4_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf4_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF4_EN_M_MASK),
		(PMIC_XO_EXTBUF4_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_bb_lpm_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_BB_LPM_EN_M_MASK),
		(PMIC_XO_BB_LPM_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_enbb_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_ENBB_MAN_MASK),
		(PMIC_XO_ENBB_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_enbb_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_ENBB_EN_M_MASK),
		(PMIC_XO_ENBB_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_clksel_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW00),
		(val),
		(PMIC_XO_CLKSEL_MAN_MASK),
		(PMIC_XO_CLKSEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_clksel_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_CLKSEL_EN_M_MASK),
		(PMIC_XO_CLKSEL_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf1_ckg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF1_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF1_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf1_ckg_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF1_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF1_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf2_ckg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF2_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF2_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf2_ckg_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF2_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF2_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf3_ckg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF3_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF3_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf3_ckg_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF3_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF3_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf4_ckg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF4_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF4_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf4_ckg_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF4_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF4_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_hv_pbuf_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_HV_PBUF_MAN_MASK),
		(PMIC_XO_HV_PBUF_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_hv_pbuf_en_sync_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_HV_PBUF_EN_SYNC_M_MASK),
		(PMIC_XO_HV_PBUF_EN_SYNC_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_hv_pbufbias_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_HV_PBUFBIAS_EN_M_MASK),
		(PMIC_XO_HV_PBUFBIAS_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_lv_pbuf_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_LV_PBUF_MAN_MASK),
		(PMIC_XO_LV_PBUF_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_lv_pbufbias_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_LV_PBUFBIAS_EN_M_MASK),
		(PMIC_XO_LV_PBUFBIAS_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_lv_pbuf_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_LV_PBUF_EN_M_MASK),
		(PMIC_XO_LV_PBUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_bblpm_cksel_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW01),
		(val),
		(PMIC_XO_BBLPM_CKSEL_M_MASK),
		(PMIC_XO_BBLPM_CKSEL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_en32k_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_EN32K_MAN_MASK),
		(PMIC_XO_EN32K_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_en32k_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_EN32K_M_MASK),
		(PMIC_XO_EN32K_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_cbank_pol(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_RG_XO_CBANK_POL_MASK),
		(PMIC_RG_XO_CBANK_POL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_xmode_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_XMODE_M_MASK),
		(PMIC_XO_XMODE_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_strup_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_STRUP_MODE_MASK),
		(PMIC_XO_STRUP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_ccomp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_RG_XO_PCTAT_CCOMP_MASK),
		(PMIC_RG_XO_PCTAT_CCOMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_vtest_sel_mux(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_RG_XO_VTEST_SEL_MUX_MASK),
		(PMIC_RG_XO_VTEST_SEL_MUX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_SWRST_MASK),
		(PMIC_XO_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cbank_sync_dyn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_CBANK_SYNC_DYN_MASK),
		(PMIC_XO_CBANK_SYNC_DYN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_pctat_en_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_PCTAT_EN_MAN_MASK),
		(PMIC_XO_PCTAT_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_pctat_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW02),
		(val),
		(PMIC_XO_PCTAT_EN_M_MASK),
		(PMIC_XO_PCTAT_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_pmu_cken_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_PMU_CKEN_M_MASK),
		(PMIC_XO_PMU_CKEN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_pmu_cken_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_PMU_CKEN_MAN_MASK),
		(PMIC_XO_PMU_CKEN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf6_ckg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF6_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF6_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf6_ckg_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF6_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF6_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf7_ckg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF7_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF7_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf7_ckg_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF7_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF7_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_core_lpm_isel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_RG_XO_CORE_LPM_ISEL_MASK),
		(PMIC_RG_XO_CORE_LPM_ISEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_core_lpm_isel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW03),
		(&val),
		(PMIC_RG_XO_CORE_LPM_ISEL_MASK),
		(PMIC_RG_XO_CORE_LPM_ISEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_xo_fpm_isel_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW03),
		(val),
		(PMIC_XO_FPM_ISEL_M_MASK),
		(PMIC_XO_FPM_ISEL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cdac_fpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW04),
		(val),
		(PMIC_XO_CDAC_FPM_MASK),
		(PMIC_XO_CDAC_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cdac_lpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW04),
		(val),
		(PMIC_XO_CDAC_LPM_MASK),
		(PMIC_XO_CDAC_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_32kdiv_nfrac_fpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW05),
		(val),
		(PMIC_XO_32KDIV_NFRAC_FPM_MASK),
		(PMIC_XO_32KDIV_NFRAC_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cofst_fpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW05),
		(val),
		(PMIC_XO_COFST_FPM_MASK),
		(PMIC_XO_COFST_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_32kdiv_nfrac_lpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW06),
		(val),
		(PMIC_XO_32KDIV_NFRAC_LPM_MASK),
		(PMIC_XO_32KDIV_NFRAC_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cofst_lpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW06),
		(val),
		(PMIC_XO_COFST_LPM_MASK),
		(PMIC_XO_COFST_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_MAN_MASK),
		(PMIC_XO_CORE_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_EN_M_MASK),
		(PMIC_XO_CORE_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_turbo_en_sync_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_TURBO_EN_SYNC_M_MASK),
		(PMIC_XO_CORE_TURBO_EN_SYNC_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_is_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_RG_XO_PCTAT_IS_EN_MASK),
		(PMIC_RG_XO_PCTAT_IS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_pctat_is_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW07),
		(&val),
		(PMIC_RG_XO_PCTAT_IS_EN_MASK),
		(PMIC_RG_XO_PCTAT_IS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_xo_startup_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_STARTUP_EN_M_MASK),
		(PMIC_XO_STARTUP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_cmp_gsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_RG_XO_CMP_GSEL_MASK),
		(PMIC_RG_XO_CMP_GSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_vbsel_sync_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_VBSEL_SYNC_M_MASK),
		(PMIC_XO_CORE_VBSEL_SYNC_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_fpmbias_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_FPMBIAS_EN_M_MASK),
		(PMIC_XO_CORE_FPMBIAS_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_lpmcf_sync_fpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_LPMCF_SYNC_FPM_MASK),
		(PMIC_XO_CORE_LPMCF_SYNC_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_lpmcf_sync_lpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_LPMCF_SYNC_LPM_MASK),
		(PMIC_XO_CORE_LPMCF_SYNC_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_core_lpm_isel_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_RG_XO_CORE_LPM_ISEL_MAN_MASK),
		(PMIC_RG_XO_CORE_LPM_ISEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_core_lpm_isel_man(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW07),
		(&val),
		(PMIC_RG_XO_CORE_LPM_ISEL_MAN_MASK),
		(PMIC_RG_XO_CORE_LPM_ISEL_MAN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_core_lpm_idac(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW07),
		(val),
		(PMIC_RG_XO_CORE_LPM_IDAC_MASK),
		(PMIC_RG_XO_CORE_LPM_IDAC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_core_lpm_idac(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW07),
		(&val),
		(PMIC_RG_XO_CORE_LPM_IDAC_MASK),
		(PMIC_RG_XO_CORE_LPM_IDAC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_xo_aac_cmp_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_CMP_MAN_MASK),
		(PMIC_XO_AAC_CMP_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_aac_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_EN_M_MASK),
		(PMIC_XO_AAC_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_pmic_top_dig_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_PMIC_TOP_DIG_SW_MASK),
		(PMIC_XO_PMIC_TOP_DIG_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cmp_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_CMP_EN_M_MASK),
		(PMIC_XO_CMP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_aac_vsel_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_VSEL_M_MASK),
		(PMIC_XO_AAC_VSEL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_aac_x1en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_RG_XO_AAC_X1EN_MASK),
		(PMIC_RG_XO_AAC_X1EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_lvbuf_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_RG_XO_LVBUF_CKSEL_MASK),
		(PMIC_RG_XO_LVBUF_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_rfck_extbuf_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_RG_XO_RFCK_EXTBUF_LP_MASK),
		(PMIC_RG_XO_RFCK_EXTBUF_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_rfck_extbuf_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW08),
		(&val),
		(PMIC_RG_XO_RFCK_EXTBUF_LP_MASK),
		(PMIC_RG_XO_RFCK_EXTBUF_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_bbck_extbuf_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_RG_XO_BBCK_EXTBUF_LP_MASK),
		(PMIC_RG_XO_BBCK_EXTBUF_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_bbck_extbuf_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW08),
		(&val),
		(PMIC_RG_XO_BBCK_EXTBUF_LP_MASK),
		(PMIC_RG_XO_BBCK_EXTBUF_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_xo_aac_fpm_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_FPM_TIME_MASK),
		(PMIC_XO_AAC_FPM_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_aac_isel_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_ISEL_MAN_MASK),
		(PMIC_XO_AAC_ISEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_aac_fpm_swen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_FPM_SWEN_MASK),
		(PMIC_XO_AAC_FPM_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_32kdiv_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_32KDIV_SWRST_MASK),
		(PMIC_XO_32KDIV_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_32kdiv_ratio_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_32KDIV_RATIO_MAN_MASK),
		(PMIC_XO_32KDIV_RATIO_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_32kdiv_test_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_32KDIV_TEST_EN_MASK),
		(PMIC_XO_32KDIV_TEST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_ctl_sync_buf_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_CTL_SYNC_BUF_MAN_MASK),
		(PMIC_XO_CTL_SYNC_BUF_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_ctl_sync_buf_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_CTL_SYNC_BUF_EN_M_MASK),
		(PMIC_XO_CTL_SYNC_BUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_hv_pbuf_vset(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_RG_XO_HV_PBUF_VSET_MASK),
		(PMIC_RG_XO_HV_PBUF_VSET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf6_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_EXTBUF6_MODE_MASK),
		(PMIC_XO_EXTBUF6_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf6_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_EXTBUF6_EN_M_MASK),
		(PMIC_XO_EXTBUF6_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf7_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_EXTBUF7_MODE_MASK),
		(PMIC_XO_EXTBUF7_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf7_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW09),
		(val),
		(PMIC_XO_EXTBUF7_EN_M_MASK),
		(PMIC_XO_EXTBUF7_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_mdb_tbo_en_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_XO_MDB_TBO_EN_SEL_MASK),
		(PMIC_XO_MDB_TBO_EN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf4_clksel_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_XO_EXTBUF4_CLKSEL_MAN_MASK),
		(PMIC_XO_EXTBUF4_CLKSEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_vio18pg_bufen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_XO_VIO18PG_BUFEN_MASK),
		(PMIC_XO_VIO18PG_BUFEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cal_en_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_XO_CAL_EN_MAN_MASK),
		(PMIC_XO_CAL_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_cal_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_XO_CAL_EN_M_MASK),
		(PMIC_XO_CAL_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_core_osctd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_CORE_OSCTD_MASK),
		(PMIC_RG_XO_CORE_OSCTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_thadc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_XO_THADC_EN_MASK),
		(PMIC_XO_THADC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_sync_ckpol(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_SYNC_CKPOL_MASK),
		(PMIC_RG_XO_SYNC_CKPOL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_core_fpm_idac(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_CORE_FPM_IDAC_MASK),
		(PMIC_RG_XO_CORE_FPM_IDAC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_ctl_pol(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_CTL_POL_MASK),
		(PMIC_RG_XO_CTL_POL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_ctl_sync_byp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_CTL_SYNC_BYP_MASK),
		(PMIC_RG_XO_CTL_SYNC_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_vxo22pg_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_VXO22PG_MAN_MASK),
		(PMIC_RG_XO_VXO22PG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_hv_pbuf_byp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_HV_PBUF_BYP_MASK),
		(PMIC_RG_XO_HV_PBUF_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_hv_pbuf_encl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW10),
		(val),
		(PMIC_RG_XO_HV_PBUF_ENCL_MASK),
		(PMIC_RG_XO_HV_PBUF_ENCL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_hv_pbuf_encl(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW10),
		(&val),
		(PMIC_RG_XO_HV_PBUF_ENCL_MASK),
		(PMIC_RG_XO_HV_PBUF_ENCL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_core_vgbias_vset(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_CORE_VGBIAS_VSET_MASK),
		(PMIC_RG_XO_CORE_VGBIAS_VSET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_core_turbo_en_sync_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_XO_CORE_TURBO_EN_SYNC_MAN_MASK),
		(PMIC_XO_CORE_TURBO_EN_SYNC_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_hv_pbuf_iset(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_HV_PBUF_ISET_MASK),
		(PMIC_RG_XO_HV_PBUF_ISET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_heater_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_HEATER_SEL_MASK),
		(PMIC_RG_XO_HEATER_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_reserved6(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_RESERVED6_MASK),
		(PMIC_RG_XO_RESERVED6_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_vow_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_VOW_EN_MASK),
		(PMIC_RG_XO_VOW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_vow_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW11),
		(&val),
		(PMIC_RG_XO_VOW_EN_MASK),
		(PMIC_RG_XO_VOW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_lv_pbuf_iset(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_LV_PBUF_ISET_MASK),
		(PMIC_RG_XO_LV_PBUF_ISET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_lv_pbuf_fpmiset(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW11),
		(val),
		(PMIC_RG_XO_LV_PBUF_FPMISET_MASK),
		(PMIC_RG_XO_LV_PBUF_FPMISET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_bb_lpm_en_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_BB_LPM_EN_SEL_MASK),
		(PMIC_XO_BB_LPM_EN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf1_bblpm_en_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF1_BBLPM_EN_MASK_MASK),
		(PMIC_XO_EXTBUF1_BBLPM_EN_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf2_bblpm_en_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF2_BBLPM_EN_MASK_MASK),
		(PMIC_XO_EXTBUF2_BBLPM_EN_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf3_bblpm_en_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF3_BBLPM_EN_MASK_MASK),
		(PMIC_XO_EXTBUF3_BBLPM_EN_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf4_bblpm_en_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF4_BBLPM_EN_MASK_MASK),
		(PMIC_XO_EXTBUF4_BBLPM_EN_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf6_bblpm_en_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF6_BBLPM_EN_MASK_MASK),
		(PMIC_XO_EXTBUF6_BBLPM_EN_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf7_bblpm_en_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF7_BBLPM_EN_MASK_MASK),
		(PMIC_XO_EXTBUF7_BBLPM_EN_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_dig26m_div4_32kdiv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_RG_XO_DIG26M_DIV4_32KDIV_MASK),
		(PMIC_RG_XO_DIG26M_DIV4_32KDIV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_bblpm_freq_fpm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_RG_XO_BBLPM_FREQ_FPM_MASK),
		(PMIC_RG_XO_BBLPM_FREQ_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf2_inv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_RG_XO_EXTBUF2_INV_MASK),
		(PMIC_RG_XO_EXTBUF2_INV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf3_inv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_RG_XO_EXTBUF3_INV_MASK),
		(PMIC_RG_XO_EXTBUF3_INV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_thadc_en_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_THADC_EN_MAN_MASK),
		(PMIC_XO_THADC_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_extbuf2_clksel_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF2_CLKSEL_MAN_MASK),
		(PMIC_XO_EXTBUF2_CLKSEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_audio_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_RG_XO_AUDIO_EN_MASK),
		(PMIC_RG_XO_AUDIO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_audio_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW12),
		(&val),
		(PMIC_RG_XO_AUDIO_EN_MASK),
		(PMIC_RG_XO_AUDIO_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_audio_atten(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW12),
		(val),
		(PMIC_RG_XO_AUDIO_ATTEN_MASK),
		(PMIC_RG_XO_AUDIO_ATTEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf2_srsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_EXTBUF2_SRSEL_MASK),
		(PMIC_RG_XO_EXTBUF2_SRSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_dig26m_deglitch(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_DIG26M_DEGLITCH_MASK),
		(PMIC_RG_XO_DIG26M_DEGLITCH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf4_srsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_EXTBUF4_SRSEL_MASK),
		(PMIC_RG_XO_EXTBUF4_SRSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_dig26m_div2_sw_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_DIG26M_DIV2_SW_MAN_MASK),
		(PMIC_RG_XO_DIG26M_DIV2_SW_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf1_hd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_EXTBUF1_HD_MASK),
		(PMIC_RG_XO_EXTBUF1_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf3_hd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_EXTBUF3_HD_MASK),
		(PMIC_RG_XO_EXTBUF3_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf6_hd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_EXTBUF6_HD_MASK),
		(PMIC_RG_XO_EXTBUF6_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf7_hd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW13),
		(val),
		(PMIC_RG_XO_EXTBUF7_HD_MASK),
		(PMIC_RG_XO_EXTBUF7_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_sta_ctl_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_STA_CTL_MAN_MASK),
		(PMIC_XO_STA_CTL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_sta_ctl_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_STA_CTL_M_MASK),
		(PMIC_XO_STA_CTL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_vbbck_en_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_VBBCK_EN_MAN_MASK),
		(PMIC_XO_VBBCK_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_vbbck_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_VBBCK_EN_M_MASK),
		(PMIC_XO_VBBCK_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_vrfck_en_man(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_VRFCK_EN_MAN_MASK),
		(PMIC_XO_VRFCK_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_vrfck_en_m(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_VRFCK_EN_M_MASK),
		(PMIC_XO_VRFCK_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_reserved2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW14),
		(val),
		(PMIC_XO_RESERVED2_MASK),
		(PMIC_XO_RESERVED2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_reserved1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW15),
		(val),
		(PMIC_RG_XO_RESERVED1_MASK),
		(PMIC_RG_XO_RESERVED1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_reserved2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW15),
		(val),
		(PMIC_RG_XO_RESERVED2_MASK),
		(PMIC_RG_XO_RESERVED2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_static_auxout_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW16),
		(val),
		(PMIC_XO_STATIC_AUXOUT_SEL_MASK),
		(PMIC_XO_STATIC_AUXOUT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_auxout_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW16),
		(val),
		(PMIC_XO_AUXOUT_SEL_MASK),
		(PMIC_XO_AUXOUT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_xo_static_auxout(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW17),
		(&val),
		(PMIC_XO_STATIC_AUXOUT_MASK),
		(PMIC_XO_STATIC_AUXOUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_bg_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_BG_EN_MASK),
		(PMIC_RG_XO_PCTAT_BG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_pctat_bg_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW18),
		(&val),
		(PMIC_RG_XO_PCTAT_BG_EN_MASK),
		(PMIC_RG_XO_PCTAT_BG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_rptat_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_RPTAT_SEL_MASK),
		(PMIC_RG_XO_PCTAT_RPTAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_iptat_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_IPTAT_SEL_MASK),
		(PMIC_RG_XO_PCTAT_IPTAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_rctat_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_RCTAT_SEL_MASK),
		(PMIC_RG_XO_PCTAT_RCTAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_ictat_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_ICTAT_SEL_MASK),
		(PMIC_RG_XO_PCTAT_ICTAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_cbank_sync_byp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_CBANK_SYNC_BYP_MASK),
		(PMIC_RG_XO_CBANK_SYNC_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_vctat_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_VCTAT_SEL_MASK),
		(PMIC_RG_XO_PCTAT_VCTAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_pctat_vtemp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW18),
		(val),
		(PMIC_RG_XO_PCTAT_VTEMP_MASK),
		(PMIC_RG_XO_PCTAT_VTEMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_core_lpm_pmicbias(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW19),
		(val),
		(PMIC_RG_XO_CORE_LPM_PMICBIAS_MASK),
		(PMIC_RG_XO_CORE_LPM_PMICBIAS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_xo_core_lpm_pmicbias(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_CW19),
		(&val),
		(PMIC_RG_XO_CORE_LPM_PMICBIAS_MASK),
		(PMIC_RG_XO_CORE_LPM_PMICBIAS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf1_rsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW19),
		(val),
		(PMIC_RG_XO_EXTBUF1_RSEL_MASK),
		(PMIC_RG_XO_EXTBUF1_RSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf2_rsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW19),
		(val),
		(PMIC_RG_XO_EXTBUF2_RSEL_MASK),
		(PMIC_RG_XO_EXTBUF2_RSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf3_rsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW19),
		(val),
		(PMIC_RG_XO_EXTBUF3_RSEL_MASK),
		(PMIC_RG_XO_EXTBUF3_RSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf4_rsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW19),
		(val),
		(PMIC_RG_XO_EXTBUF4_RSEL_MASK),
		(PMIC_RG_XO_EXTBUF4_RSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_xo_extbuf7_rsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_CW19),
		(val),
		(PMIC_RG_XO_EXTBUF7_RSEL_MASK),
		(PMIC_RG_XO_EXTBUF7_RSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_dcxo_elr_len(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_DCXO_ELR_NUM),
		(&val),
		(PMIC_DCXO_ELR_LEN_MASK),
		(PMIC_DCXO_ELR_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_xo_dig26m_div2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_ELR0),
		(val),
		(PMIC_RG_XO_DIG26M_DIV2_MASK),
		(PMIC_RG_XO_DIG26M_DIV2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_pwrkey_rstb_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_ELR0),
		(val),
		(PMIC_XO_PWRKEY_RSTB_SEL_MASK),
		(PMIC_XO_PWRKEY_RSTB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_xo_elr_reserved(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_DCXO_ELR0),
		(val),
		(PMIC_XO_ELR_RESERVED_MASK),
		(PMIC_XO_ELR_RESERVED_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_psc_top_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_ID),
		(&val),
		(PMIC_PSC_TOP_ANA_ID_MASK),
		(PMIC_PSC_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_ID),
		(&val),
		(PMIC_PSC_TOP_DIG_ID_MASK),
		(PMIC_PSC_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_ANA_MINOR_REV_MASK),
		(PMIC_PSC_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_PSC_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_DIG_MINOR_REV_MASK),
		(PMIC_PSC_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_PSC_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_DBI),
		(&val),
		(PMIC_PSC_TOP_CBS_MASK),
		(PMIC_PSC_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_DBI),
		(&val),
		(PMIC_PSC_TOP_BIX_MASK),
		(PMIC_PSC_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_DBI),
		(&val),
		(PMIC_PSC_TOP_ESP_MASK),
		(PMIC_PSC_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_DXI),
		(&val),
		(PMIC_PSC_TOP_FPI_MASK),
		(PMIC_PSC_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_clk_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TPM0),
		(&val),
		(PMIC_PSC_TOP_CLK_OFFSET_MASK),
		(PMIC_PSC_TOP_CLK_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_rst_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TPM0),
		(&val),
		(PMIC_PSC_TOP_RST_OFFSET_MASK),
		(PMIC_PSC_TOP_RST_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_int_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TPM1),
		(&val),
		(PMIC_PSC_TOP_INT_OFFSET_MASK),
		(PMIC_PSC_TOP_INT_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_psc_top_int_len(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TPM1),
		(&val),
		(PMIC_PSC_TOP_INT_LEN_MASK),
		(PMIC_PSC_TOP_INT_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_chrdet_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_CLKCTL_0),
		(val),
		(PMIC_RG_CHRDET_32K_CK_PDN_MASK),
		(PMIC_RG_CHRDET_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_RST_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_pwrmsk_rst_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_RG_PSEQ_PWRMSK_RST_SEL_MASK),
		(PMIC_RG_PSEQ_PWRMSK_RST_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_strup_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_STRUP_SWRST_MASK),
		(PMIC_BANK_STRUP_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_pseq_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_PSEQ_SWRST_MASK),
		(PMIC_BANK_PSEQ_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_chrdet_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_CHRDET_SWRST_MASK),
		(PMIC_BANK_CHRDET_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_chrdet_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_RG_CHRDET_RST_MASK),
		(PMIC_RG_CHRDET_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_en_pwrkey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_PWRKEY_MASK),
		(PMIC_RG_INT_EN_PWRKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_pwrkey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_PWRKEY_MASK),
		(PMIC_RG_INT_EN_PWRKEY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_HOMEKEY_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_homekey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_HOMEKEY_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_pwrkey_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_PWRKEY_R_MASK),
		(PMIC_RG_INT_EN_PWRKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_pwrkey_r(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_PWRKEY_R_MASK),
		(PMIC_RG_INT_EN_PWRKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_homekey_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_HOMEKEY_R_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_homekey_r(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_HOMEKEY_R_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_ni_lbat_int(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_ni_lbat_int(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_chrdet_edge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_EN_CHRDET_EDGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_chrdet_edge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_EN_CHRDET_EDGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_pwrkey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_PWRKEY_MASK),
		(PMIC_RG_INT_MASK_PWRKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_homekey(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_HOMEKEY_MASK),
		(PMIC_RG_INT_MASK_HOMEKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_pwrkey_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_PWRKEY_R_MASK),
		(PMIC_RG_INT_MASK_PWRKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_homekey_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_HOMEKEY_R_MASK),
		(PMIC_RG_INT_MASK_HOMEKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_ni_lbat_int(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_MASK_NI_LBAT_INT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_chrdet_edge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_MASK_CHRDET_EDGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_pwrkey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_MASK),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_homekey(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_MASK),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_pwrkey_r(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_R_MASK),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_homekey_r(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_R_MASK),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_ni_lbat_int(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_RAW_STATUS_NI_LBAT_INT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_chrdet_edge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_RAW_STATUS_CHRDET_EDGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_psc_int_polarity(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_PSC_INT_POLARITY_MASK),
		(PMIC_RG_PSC_INT_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_homekey_int_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_HOMEKEY_INT_SEL_MASK),
		(PMIC_RG_HOMEKEY_INT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pwrkey_int_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_PWRKEY_INT_SEL_MASK),
		(PMIC_RG_PWRKEY_INT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_psc_mon_grp_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSC_TOP_MON_CTL),
		(val),
		(PMIC_RG_PSC_MON_GRP_SEL_MASK),
		(PMIC_RG_PSC_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_strup_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ID),
		(&val),
		(PMIC_STRUP_ANA_ID_MASK),
		(PMIC_STRUP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ID),
		(&val),
		(PMIC_STRUP_DIG_ID_MASK),
		(PMIC_STRUP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_REV0),
		(&val),
		(PMIC_STRUP_ANA_MINOR_REV_MASK),
		(PMIC_STRUP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_REV0),
		(&val),
		(PMIC_STRUP_ANA_MAJOR_REV_MASK),
		(PMIC_STRUP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_REV0),
		(&val),
		(PMIC_STRUP_DIG_MINOR_REV_MASK),
		(PMIC_STRUP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_REV0),
		(&val),
		(PMIC_STRUP_DIG_MAJOR_REV_MASK),
		(PMIC_STRUP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_DBI),
		(&val),
		(PMIC_STRUP_CBS_MASK),
		(PMIC_STRUP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_strup_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_DBI),
		(&val),
		(PMIC_STRUP_BIX_MASK),
		(PMIC_STRUP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_tm_out(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_TM_OUT_MASK),
		(PMIC_RG_TM_OUT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_thrdet_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_THRDET_SEL_MASK),
		(PMIC_RG_THRDET_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_thr_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_STRUP_THR_SEL_MASK),
		(PMIC_RG_STRUP_THR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_thr_tmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_THR_TMODE_MASK),
		(PMIC_RG_THR_TMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vref_bg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_VREF_BG_MASK),
		(PMIC_RG_VREF_BG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rgs_ana_chip_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON1),
		(&val),
		(PMIC_RGS_ANA_CHIP_ID_MASK),
		(PMIC_RGS_ANA_CHIP_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pmu_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_PMU_RSV_MASK),
		(PMIC_RG_PMU_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rst_drvsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_RST_DRVSEL_MASK),
		(PMIC_RG_RST_DRVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_en1_drvsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_EN1_DRVSEL_MASK),
		(PMIC_RG_EN1_DRVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_en2_drvsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_EN2_DRVSEL_MASK),
		(PMIC_RG_EN2_DRVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rgs_vusb_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VUSB_PG_STATUS_MASK),
		(PMIC_RGS_VUSB_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vaux18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VAUX18_PG_STATUS_MASK),
		(PMIC_RGS_VAUX18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vaud18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VAUD18_PG_STATUS_MASK),
		(PMIC_RGS_VAUD18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vxo22_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VXO22_PG_STATUS_MASK),
		(PMIC_RGS_VXO22_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vemc_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VEMC_PG_STATUS_MASK),
		(PMIC_RGS_VEMC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vio18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VIO18_PG_STATUS_MASK),
		(PMIC_RGS_VIO18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vufs_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VUFS_PG_STATUS_MASK),
		(PMIC_RGS_VUFS_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vsram_md_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VSRAM_MD_PG_STATUS_MASK),
		(PMIC_RGS_VSRAM_MD_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vsram_others_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VSRAM_OTHERS_PG_STATUS_MASK),
		(PMIC_RGS_VSRAM_OTHERS_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vsram_proc1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VSRAM_PROC1_PG_STATUS_MASK),
		(PMIC_RGS_VSRAM_PROC1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vsram_proc2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VSRAM_PROC2_PG_STATUS_MASK),
		(PMIC_RGS_VSRAM_PROC2_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_va12_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VA12_PG_STATUS_MASK),
		(PMIC_RGS_VA12_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_va09_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VA09_PG_STATUS_MASK),
		(PMIC_RGS_VA09_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vm18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VM18_PG_STATUS_MASK),
		(PMIC_RGS_VM18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vrfck_1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VRFCK_1_PG_STATUS_MASK),
		(PMIC_RGS_VRFCK_1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vrfck_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON2),
		(&val),
		(PMIC_RGS_VRFCK_PG_STATUS_MASK),
		(PMIC_RGS_VRFCK_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vbbck_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VBBCK_PG_STATUS_MASK),
		(PMIC_RGS_VBBCK_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vrf18_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VRF18_PG_STATUS_MASK),
		(PMIC_RGS_VRF18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vs1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VS1_PG_STATUS_MASK),
		(PMIC_RGS_VS1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vmodem_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VMODEM_PG_STATUS_MASK),
		(PMIC_RGS_VMODEM_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vproc1_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VPROC1_PG_STATUS_MASK),
		(PMIC_RGS_VPROC1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vproc2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VPROC2_PG_STATUS_MASK),
		(PMIC_RGS_VPROC2_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vcore_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VCORE_PG_STATUS_MASK),
		(PMIC_RGS_VCORE_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vpu_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VPU_PG_STATUS_MASK),
		(PMIC_RGS_VPU_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vgpu11_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VGPU11_PG_STATUS_MASK),
		(PMIC_RGS_VGPU11_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vgpu12_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VGPU12_PG_STATUS_MASK),
		(PMIC_RGS_VGPU12_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vs2_pg_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_ANA_CON3),
		(&val),
		(PMIC_RGS_VS2_PG_STATUS_MASK),
		(PMIC_RGS_VS2_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_iref_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ELR_0),
		(val),
		(PMIC_RG_STRUP_IREF_TRIM_MASK),
		(PMIC_RG_STRUP_IREF_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_thr_loc_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_ELR_0),
		(val),
		(PMIC_RG_THR_LOC_SEL_MASK),
		(PMIC_RG_THR_LOC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_pseq_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ID),
		(&val),
		(PMIC_PSEQ_ANA_ID_MASK),
		(PMIC_PSEQ_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ID),
		(&val),
		(PMIC_PSEQ_DIG_ID_MASK),
		(PMIC_PSEQ_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_REV0),
		(&val),
		(PMIC_PSEQ_ANA_MINOR_REV_MASK),
		(PMIC_PSEQ_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_REV0),
		(&val),
		(PMIC_PSEQ_ANA_MAJOR_REV_MASK),
		(PMIC_PSEQ_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_REV0),
		(&val),
		(PMIC_PSEQ_DIG_MAJOR_REV_MASK),
		(PMIC_PSEQ_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_DBI),
		(&val),
		(PMIC_PSEQ_CBS_MASK),
		(PMIC_PSEQ_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_DBI),
		(&val),
		(PMIC_PSEQ_BIX_MASK),
		(PMIC_PSEQ_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pseq_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_DXI),
		(&val),
		(PMIC_PSEQ_FPI_MASK),
		(PMIC_PSEQ_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pwrhold(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL0),
		(val),
		(PMIC_RG_PWRHOLD_MASK),
		(PMIC_RG_PWRHOLD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_usbdl_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL0),
		(val),
		(PMIC_RG_USBDL_MODE_MASK),
		(PMIC_RG_USBDL_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_usbdl_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PPCCTL0),
		(&val),
		(PMIC_RG_USBDL_MODE_MASK),
		(PMIC_RG_USBDL_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_wdtrst_act(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL0),
		(val),
		(PMIC_RG_WDTRST_ACT_MASK),
		(PMIC_RG_WDTRST_ACT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_crst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL1),
		(val),
		(PMIC_RG_CRST_MASK),
		(PMIC_RG_CRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL1),
		(val),
		(PMIC_RG_WRST_MASK),
		(PMIC_RG_WRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_crst_intv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL1),
		(val),
		(PMIC_RG_CRST_INTV_MASK),
		(PMIC_RG_CRST_INTV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wrst_intv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL1),
		(val),
		(PMIC_RG_WRST_INTV_MASK),
		(PMIC_RG_WRST_INTV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_wdtrst_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCFG0),
		(val),
		(PMIC_RG_WDTRST_EN_MASK),
		(PMIC_RG_WDTRST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_wdtrst_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PPCCFG0),
		(&val),
		(PMIC_RG_WDTRST_EN_MASK),
		(PMIC_RG_WDTRST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_keypwr_vcore_opt(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCFG0),
		(val),
		(PMIC_RG_KEYPWR_VCORE_OPT_MASK),
		(PMIC_RG_KEYPWR_VCORE_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rsv_swreg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON9),
		(val),
		(PMIC_RG_RSV_SWREG_MASK),
		(PMIC_RG_RSV_SWREG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_thr_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON11),
		(val),
		(PMIC_RG_STRUP_THR_CLR_MASK),
		(PMIC_RG_STRUP_THR_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_TD_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_long_press_ext_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON12),
		(&val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_chr_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_pwrkey_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKEY_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKEY_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_spar_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SPAR_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SPAR_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_ext_rtca_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_RTCA_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_RTCA_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smart_rst_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_SMART_RST_SDN_EN_MASK),
		(PMIC_RG_SMART_RST_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_smart_rst_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON12),
		(&val),
		(PMIC_RG_SMART_RST_SDN_EN_MASK),
		(PMIC_RG_SMART_RST_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_smart_rst_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_SMART_RST_MODE_MASK),
		(PMIC_RG_SMART_RST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_smart_rst_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON12),
		(&val),
		(PMIC_RG_SMART_RST_MODE_MASK),
		(PMIC_RG_SMART_RST_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_uvlo_dec_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON12),
		(val),
		(PMIC_RG_UVLO_DEC_EN_MASK),
		(PMIC_RG_UVLO_DEC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_uvlo_dec_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON12),
		(&val),
		(PMIC_RG_UVLO_DEC_EN_MASK),
		(PMIC_RG_UVLO_DEC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_pwrkey_count_reset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON13),
		(val),
		(PMIC_RG_STRUP_PWRKEY_COUNT_RESET_MASK),
		(PMIC_RG_STRUP_PWRKEY_COUNT_RESET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_pup_pkey_release(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PWRKEY_PRESS_STS),
		(&val),
		(PMIC_PUP_PKEY_RELEASE_MASK),
		(PMIC_PUP_PKEY_RELEASE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pwrkey_long_press_count(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PWRKEY_PRESS_STS),
		(&val),
		(PMIC_PWRKEY_LONG_PRESS_COUNT_MASK),
		(PMIC_PWRKEY_LONG_PRESS_COUNT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_por_flag(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PORFLAG),
		(val),
		(PMIC_RG_POR_FLAG_MASK),
		(PMIC_RG_POR_FLAG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_usbdl(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON4),
		(&val),
		(PMIC_USBDL_MASK),
		(PMIC_USBDL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_just_smart_rst(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON4),
		(&val),
		(PMIC_JUST_SMART_RST_MASK),
		(PMIC_JUST_SMART_RST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_just_pwrkey_rst(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON4),
		(&val),
		(PMIC_JUST_PWRKEY_RST_MASK),
		(PMIC_JUST_PWRKEY_RST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_clr_just_smart_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON4),
		(val),
		(PMIC_RG_CLR_JUST_SMART_RST_MASK),
		(PMIC_RG_CLR_JUST_SMART_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_clr_just_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON4),
		(val),
		(PMIC_CLR_JUST_RST_MASK),
		(PMIC_CLR_JUST_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_ther_deb_rtd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON1),
		(val),
		(PMIC_RG_STRUP_THER_DEB_RTD_MASK),
		(PMIC_RG_STRUP_THER_DEB_RTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_ther_deb_ftd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON2),
		(val),
		(PMIC_RG_STRUP_THER_DEB_FTD_MASK),
		(PMIC_RG_STRUP_THER_DEB_FTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_ext_pmic_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON5),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_ext_pmic_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON5),
		(&val),
		(PMIC_RG_STRUP_EXT_PMIC_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_ext_pmic_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON5),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_SEL_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rgs_ext_pmic_pg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON5),
		(&val),
		(PMIC_RGS_EXT_PMIC_PG_MASK),
		(PMIC_RGS_EXT_PMIC_PG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_ext_pmic_en1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON5),
		(&val),
		(PMIC_DA_EXT_PMIC_EN1_MASK),
		(PMIC_DA_EXT_PMIC_EN1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_ext_pmic_en2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON5),
		(&val),
		(PMIC_DA_EXT_PMIC_EN2_MASK),
		(PMIC_DA_EXT_PMIC_EN2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_ext_pmic_pg_debtd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON5),
		(val),
		(PMIC_RG_EXT_PMIC_PG_DEBTD_MASK),
		(PMIC_RG_EXT_PMIC_PG_DEBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_rtc_spar_deb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON19),
		(val),
		(PMIC_RG_RTC_SPAR_DEB_EN_MASK),
		(PMIC_RG_RTC_SPAR_DEB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rtc_spar_deb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON19),
		(&val),
		(PMIC_RG_RTC_SPAR_DEB_EN_MASK),
		(PMIC_RG_RTC_SPAR_DEB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_rtc_alarm_deb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON19),
		(val),
		(PMIC_RG_RTC_ALARM_DEB_EN_MASK),
		(PMIC_RG_RTC_ALARM_DEB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_rtc_alarm_deb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON19),
		(&val),
		(PMIC_RG_RTC_ALARM_DEB_EN_MASK),
		(PMIC_RG_RTC_ALARM_DEB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_ext_pmic_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_ext_pmic_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vm18_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VM18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VM18_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vm18_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VM18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VM18_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vio18_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VIO18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VIO18_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vio18_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VIO18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VIO18_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vufs_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VUFS_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VUFS_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vufs_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VUFS_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VUFS_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vbbck_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VBBCK_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VBBCK_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vbbck_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VBBCK_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VBBCK_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vrfck_1_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VRFCK_1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VRFCK_1_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vrfck_1_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VRFCK_1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VRFCK_1_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vs1_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vs1_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_va12_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VA12_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VA12_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_va12_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VA12_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VA12_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_va09_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VA09_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VA09_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_va09_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VA09_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VA09_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vs2_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VS2_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VS2_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vs2_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VS2_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VS2_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vmodem_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vmodem_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vpu_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VPU_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPU_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vpu_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VPU_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPU_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vgpu12_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VGPU12_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VGPU12_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vgpu12_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VGPU12_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VGPU12_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vgpu11_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VGPU11_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VGPU11_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vgpu11_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VGPU11_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VGPU11_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vcore_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vcore_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vaux18_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB0),
		(val),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vaux18_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB0),
		(&val),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vrf18_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VRF18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VRF18_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vrf18_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VRF18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VRF18_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vusb_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VUSB_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VUSB_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vusb_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VUSB_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VUSB_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vaud18_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VAUD18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUD18_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vaud18_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VAUD18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUD18_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_proc1_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_proc1_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vproc1_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VPROC1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPROC1_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vproc1_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VPROC1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPROC1_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_proc2_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_proc2_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vproc2_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VPROC2_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPROC2_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vproc2_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VPROC2_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPROC2_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_md_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_md_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_others_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_others_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vemc_pg_h2l_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGDEB1),
		(val),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vemc_pg_h2l_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGDEB1),
		(&val),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vm18_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VM18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VM18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vm18_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VM18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VM18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vio18_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VIO18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VIO18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vio18_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VIO18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VIO18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vufs_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VUFS_PG_ENB_MASK),
		(PMIC_RG_STRUP_VUFS_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vufs_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VUFS_PG_ENB_MASK),
		(PMIC_RG_STRUP_VUFS_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vbbck_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VBBCK_PG_ENB_MASK),
		(PMIC_RG_STRUP_VBBCK_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vbbck_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VBBCK_PG_ENB_MASK),
		(PMIC_RG_STRUP_VBBCK_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vrfck_1_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VRFCK_1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VRFCK_1_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vrfck_1_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VRFCK_1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VRFCK_1_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vs1_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VS1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VS1_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vs1_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VS1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VS1_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_va12_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VA12_PG_ENB_MASK),
		(PMIC_RG_STRUP_VA12_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_va12_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VA12_PG_ENB_MASK),
		(PMIC_RG_STRUP_VA12_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_va09_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VA09_PG_ENB_MASK),
		(PMIC_RG_STRUP_VA09_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_va09_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VA09_PG_ENB_MASK),
		(PMIC_RG_STRUP_VA09_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vs2_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VS2_PG_ENB_MASK),
		(PMIC_RG_STRUP_VS2_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vs2_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VS2_PG_ENB_MASK),
		(PMIC_RG_STRUP_VS2_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vmodem_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vmodem_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vpu_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VPU_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPU_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vpu_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VPU_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPU_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vgpu12_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VGPU12_PG_ENB_MASK),
		(PMIC_RG_STRUP_VGPU12_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vgpu12_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VGPU12_PG_ENB_MASK),
		(PMIC_RG_STRUP_VGPU12_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vgpu11_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VGPU11_PG_ENB_MASK),
		(PMIC_RG_STRUP_VGPU11_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vgpu11_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VGPU11_PG_ENB_MASK),
		(PMIC_RG_STRUP_VGPU11_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vcore_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VCORE_PG_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vcore_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VCORE_PG_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vaux18_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vaux18_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vxo22_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB0),
		(val),
		(PMIC_RG_STRUP_VXO22_PG_ENB_MASK),
		(PMIC_RG_STRUP_VXO22_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vxo22_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB0),
		(&val),
		(PMIC_RG_STRUP_VXO22_PG_ENB_MASK),
		(PMIC_RG_STRUP_VXO22_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vrf18_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VRF18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VRF18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vrf18_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VRF18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VRF18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vusb_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VUSB_PG_ENB_MASK),
		(PMIC_RG_STRUP_VUSB_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vusb_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VUSB_PG_ENB_MASK),
		(PMIC_RG_STRUP_VUSB_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vaud18_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VAUD18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUD18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vaud18_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VAUD18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUD18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_proc1_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_proc1_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC1_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vproc1_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VPROC1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPROC1_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vproc1_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VPROC1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPROC1_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_proc2_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_proc2_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC2_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vproc2_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VPROC2_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPROC2_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vproc2_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VPROC2_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPROC2_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_md_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_MD_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_MD_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_md_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_MD_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_MD_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_others_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_others_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vemc_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_PGENB1),
		(val),
		(PMIC_RG_STRUP_VEMC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VEMC_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vemc_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_PGENB1),
		(&val),
		(PMIC_RG_STRUP_VEMC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VEMC_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vm18_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VM18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VM18_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vm18_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VM18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VM18_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vio18_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VIO18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VIO18_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vio18_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VIO18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VIO18_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vufs_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VUFS_OC_ENB_MASK),
		(PMIC_RG_STRUP_VUFS_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vufs_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VUFS_OC_ENB_MASK),
		(PMIC_RG_STRUP_VUFS_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vbbck_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VBBCK_OC_ENB_MASK),
		(PMIC_RG_STRUP_VBBCK_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vbbck_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VBBCK_OC_ENB_MASK),
		(PMIC_RG_STRUP_VBBCK_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vrfck_1_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VRFCK_1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VRFCK_1_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vrfck_1_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VRFCK_1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VRFCK_1_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vs1_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VS1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VS1_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vs1_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VS1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VS1_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_va12_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VA12_OC_ENB_MASK),
		(PMIC_RG_STRUP_VA12_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_va12_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VA12_OC_ENB_MASK),
		(PMIC_RG_STRUP_VA12_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_va09_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VA09_OC_ENB_MASK),
		(PMIC_RG_STRUP_VA09_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_va09_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VA09_OC_ENB_MASK),
		(PMIC_RG_STRUP_VA09_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vs2_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VS2_OC_ENB_MASK),
		(PMIC_RG_STRUP_VS2_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vs2_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VS2_OC_ENB_MASK),
		(PMIC_RG_STRUP_VS2_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vmodem_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vmodem_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vpu_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VPU_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPU_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vpu_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VPU_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPU_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vgpu12_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VGPU12_OC_ENB_MASK),
		(PMIC_RG_STRUP_VGPU12_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vgpu12_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VGPU12_OC_ENB_MASK),
		(PMIC_RG_STRUP_VGPU12_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vgpu11_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VGPU11_OC_ENB_MASK),
		(PMIC_RG_STRUP_VGPU11_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vgpu11_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VGPU11_OC_ENB_MASK),
		(PMIC_RG_STRUP_VGPU11_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vcore_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VCORE_OC_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vcore_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VCORE_OC_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vaux18_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VAUX18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VAUX18_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vaux18_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VAUX18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VAUX18_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vxo22_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB0),
		(val),
		(PMIC_RG_STRUP_VXO22_OC_ENB_MASK),
		(PMIC_RG_STRUP_VXO22_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vxo22_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB0),
		(&val),
		(PMIC_RG_STRUP_VXO22_OC_ENB_MASK),
		(PMIC_RG_STRUP_VXO22_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vrf18_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VRF18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VRF18_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vrf18_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VRF18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VRF18_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vusb_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VUSB_OC_ENB_MASK),
		(PMIC_RG_STRUP_VUSB_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vusb_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VUSB_OC_ENB_MASK),
		(PMIC_RG_STRUP_VUSB_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vaud18_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VAUD18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VAUD18_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vaud18_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VAUD18_OC_ENB_MASK),
		(PMIC_RG_STRUP_VAUD18_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_proc1_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC1_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_proc1_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC1_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vproc1_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VPROC1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPROC1_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vproc1_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VPROC1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPROC1_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_proc2_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC2_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC2_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_proc2_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC2_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC2_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vproc2_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VPROC2_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPROC2_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vproc2_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VPROC2_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPROC2_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_md_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_MD_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_MD_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_md_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_MD_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_MD_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vsram_others_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vsram_others_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_OC_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_vemc_oc_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_OCENB1),
		(val),
		(PMIC_RG_STRUP_VEMC_OC_ENB_MASK),
		(PMIC_RG_STRUP_VEMC_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_vemc_oc_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_OCENB1),
		(&val),
		(PMIC_RG_STRUP_VEMC_OC_ENB_MASK),
		(PMIC_RG_STRUP_VEMC_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pseq_force_on(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_FORCE_ON_MASK),
		(PMIC_RG_PSEQ_FORCE_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_force_test_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_FORCE_TEST_EN_MASK),
		(PMIC_RG_PSEQ_FORCE_TEST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pseq_force_test_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PPCTST0),
		(&val),
		(PMIC_RG_PSEQ_FORCE_TEST_EN_MASK),
		(PMIC_RG_PSEQ_FORCE_TEST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pseq_bypass_deb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_BYPASS_DEB_MASK),
		(PMIC_RG_PSEQ_BYPASS_DEB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_bypass_seq(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_BYPASS_SEQ_MASK),
		(PMIC_RG_PSEQ_BYPASS_SEQ_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_lpbwdt_acc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_LPBWDT_ACC_MASK),
		(PMIC_RG_PSEQ_LPBWDT_ACC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pseq_lpbwdt_acc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PPCTST0),
		(&val),
		(PMIC_RG_PSEQ_LPBWDT_ACC_MASK),
		(PMIC_RG_PSEQ_LPBWDT_ACC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pseq_force_all_doff(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_FORCE_ALL_DOFF_MASK),
		(PMIC_RG_PSEQ_FORCE_ALL_DOFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_pg_ck_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL2),
		(val),
		(PMIC_RG_PSEQ_PG_CK_SEL_MASK),
		(PMIC_RG_PSEQ_PG_CK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_spar_xcpt_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL2),
		(val),
		(PMIC_RG_PSEQ_SPAR_XCPT_MASK_MASK),
		(PMIC_RG_PSEQ_SPAR_XCPT_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_rtca_xcpt_mask(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL2),
		(val),
		(PMIC_RG_PSEQ_RTCA_XCPT_MASK_MASK),
		(PMIC_RG_PSEQ_RTCA_XCPT_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_thm_shdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PPCCTL2),
		(val),
		(PMIC_RG_THM_SHDN_EN_MASK),
		(PMIC_RG_THM_SHDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_thm_shdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PPCCTL2),
		(&val),
		(PMIC_RG_THM_SHDN_EN_MASK),
		(PMIC_RG_THM_SHDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_uvlo_u1u2_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_MASK),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_uvlo_u1u2_sel_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_SWCTRL_MASK),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ovlo_rdb_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_OVLO_RDB_TD_MASK),
		(PMIC_RG_OVLO_RDB_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ovlo_rdb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_OVLO_RDB_EN_MASK),
		(PMIC_RG_OVLO_RDB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ovlo_rdb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON10),
		(&val),
		(PMIC_RG_OVLO_RDB_EN_MASK),
		(PMIC_RG_OVLO_RDB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_thr_test(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_THR_TEST_MASK),
		(PMIC_RG_THR_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_envtem(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_STRUP_ENVTEM_MASK),
		(PMIC_RG_STRUP_ENVTEM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_envtem(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON10),
		(&val),
		(PMIC_RG_STRUP_ENVTEM_MASK),
		(PMIC_RG_STRUP_ENVTEM_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_envtem_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON10),
		(val),
		(PMIC_RG_STRUP_ENVTEM_CTRL_MASK),
		(PMIC_RG_STRUP_ENVTEM_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_envtem_ctrl(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON10),
		(&val),
		(PMIC_RG_STRUP_ENVTEM_CTRL_MASK),
		(PMIC_RG_STRUP_ENVTEM_CTRL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_dduvlo_deb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_DDUVLO_DEB_EN_MASK),
		(PMIC_DDUVLO_DEB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_ft_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_FT_CTRL_MASK),
		(PMIC_RG_STRUP_FT_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_biasgen_force(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_BIASGEN_FORCE_MASK),
		(PMIC_RG_BIASGEN_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_pwron(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_PWRON_MASK),
		(PMIC_RG_STRUP_PWRON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_pwron_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_PWRON_SEL_MASK),
		(PMIC_RG_STRUP_PWRON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_biasgen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_BIASGEN_MASK),
		(PMIC_RG_BIASGEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_biasgen_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_BIASGEN_SEL_MASK),
		(PMIC_RG_BIASGEN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo_pmu_cken(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_DCXO_PMU_CKEN_MASK),
		(PMIC_RG_DCXO_PMU_CKEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dcxo_pmu_cken_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_RG_DCXO_PMU_CKEN_SEL_MASK),
		(PMIC_RG_DCXO_PMU_CKEN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_strup_dig_io_pg_force(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON3),
		(val),
		(PMIC_STRUP_DIG_IO_PG_FORCE_MASK),
		(PMIC_STRUP_DIG_IO_PG_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_atst_pg_chk(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON6),
		(val),
		(PMIC_RG_ATST_PG_CHK_MASK),
		(PMIC_RG_ATST_PG_CHK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_pg_deb_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON6),
		(val),
		(PMIC_RG_STRUP_PG_DEB_MODE_MASK),
		(PMIC_RG_STRUP_PG_DEB_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_pg_deb_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_STRUP_CON6),
		(&val),
		(PMIC_RG_STRUP_PG_DEB_MODE_MASK),
		(PMIC_RG_STRUP_PG_DEB_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_ovlo_fcmpl_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON6),
		(val),
		(PMIC_RG_OVLO_FCMPL_SW_SEL_MASK),
		(PMIC_RG_OVLO_FCMPL_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ovlo_fcmpl_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON6),
		(val),
		(PMIC_RG_OVLO_FCMPL_SW_MASK),
		(PMIC_RG_OVLO_FCMPL_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_uvlo_vsys_vth_sw_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON6),
		(val),
		(PMIC_RG_UVLO_VSYS_VTH_SW_SEL_MASK),
		(PMIC_RG_UVLO_VSYS_VTH_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_uvlo_vsys_vth_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_STRUP_CON6),
		(val),
		(PMIC_RG_UVLO_VSYS_VTH_SW_MASK),
		(PMIC_RG_UVLO_VSYS_VTH_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_cps_w_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSWKEY),
		(val),
		(PMIC_RG_CPS_W_KEY_MASK),
		(PMIC_RG_CPS_W_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_slot_intv_down(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSCFG0),
		(val),
		(PMIC_RG_SLOT_INTV_DOWN_MASK),
		(PMIC_RG_SLOT_INTV_DOWN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_dseq_len(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSCFG0),
		(val),
		(PMIC_RG_DSEQ_LEN_MASK),
		(PMIC_RG_DSEQ_LEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vxo22_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA0),
		(val),
		(PMIC_RG_VXO22_DSA_MASK),
		(PMIC_RG_VXO22_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaux18_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA0),
		(val),
		(PMIC_RG_VAUX18_DSA_MASK),
		(PMIC_RG_VAUX18_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA0),
		(val),
		(PMIC_RG_VCORE_DSA_MASK),
		(PMIC_RG_VCORE_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA1),
		(val),
		(PMIC_RG_VGPU11_DSA_MASK),
		(PMIC_RG_VGPU11_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA1),
		(val),
		(PMIC_RG_VGPU12_DSA_MASK),
		(PMIC_RG_VGPU12_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vpu_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA1),
		(val),
		(PMIC_RG_VPU_DSA_MASK),
		(PMIC_RG_VPU_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ext_pmic_en2_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA2),
		(val),
		(PMIC_RG_EXT_PMIC_EN2_DSA_MASK),
		(PMIC_RG_EXT_PMIC_EN2_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ext_pmic_en2_dsa(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CPSDSA2),
		(&val),
		(PMIC_RG_EXT_PMIC_EN2_DSA_MASK),
		(PMIC_RG_EXT_PMIC_EN2_DSA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vmodem_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA2),
		(val),
		(PMIC_RG_VMODEM_DSA_MASK),
		(PMIC_RG_VMODEM_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vs2_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA2),
		(val),
		(PMIC_RG_VS2_DSA_MASK),
		(PMIC_RG_VS2_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_va09_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA3),
		(val),
		(PMIC_RG_VA09_DSA_MASK),
		(PMIC_RG_VA09_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_va12_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA3),
		(val),
		(PMIC_RG_VA12_DSA_MASK),
		(PMIC_RG_VA12_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vs1_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA3),
		(val),
		(PMIC_RG_VS1_DSA_MASK),
		(PMIC_RG_VS1_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vrfck_1_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA4),
		(val),
		(PMIC_RG_VRFCK_1_DSA_MASK),
		(PMIC_RG_VRFCK_1_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbbck_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA4),
		(val),
		(PMIC_RG_VBBCK_DSA_MASK),
		(PMIC_RG_VBBCK_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vufs_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA4),
		(val),
		(PMIC_RG_VUFS_DSA_MASK),
		(PMIC_RG_VUFS_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vio18_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA5),
		(val),
		(PMIC_RG_VIO18_DSA_MASK),
		(PMIC_RG_VIO18_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vm18_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA5),
		(val),
		(PMIC_RG_VM18_DSA_MASK),
		(PMIC_RG_VM18_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ext_pmic_en1_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA5),
		(val),
		(PMIC_RG_EXT_PMIC_EN1_DSA_MASK),
		(PMIC_RG_EXT_PMIC_EN1_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ext_pmic_en1_dsa(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CPSDSA5),
		(&val),
		(PMIC_RG_EXT_PMIC_EN1_DSA_MASK),
		(PMIC_RG_EXT_PMIC_EN1_DSA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vemc_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA6),
		(val),
		(PMIC_RG_VEMC_DSA_MASK),
		(PMIC_RG_VEMC_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_others_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA6),
		(val),
		(PMIC_RG_VSRAM_OTHERS_DSA_MASK),
		(PMIC_RG_VSRAM_OTHERS_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_md_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA6),
		(val),
		(PMIC_RG_VSRAM_MD_DSA_MASK),
		(PMIC_RG_VSRAM_MD_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vproc2_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA7),
		(val),
		(PMIC_RG_VPROC2_DSA_MASK),
		(PMIC_RG_VPROC2_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_proc2_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA7),
		(val),
		(PMIC_RG_VSRAM_PROC2_DSA_MASK),
		(PMIC_RG_VSRAM_PROC2_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vproc1_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA7),
		(val),
		(PMIC_RG_VPROC1_DSA_MASK),
		(PMIC_RG_VPROC1_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_proc1_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA8),
		(val),
		(PMIC_RG_VSRAM_PROC1_DSA_MASK),
		(PMIC_RG_VSRAM_PROC1_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaud18_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA8),
		(val),
		(PMIC_RG_VAUD18_DSA_MASK),
		(PMIC_RG_VAUD18_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vusb_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA8),
		(val),
		(PMIC_RG_VUSB_DSA_MASK),
		(PMIC_RG_VUSB_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vrf18_dsa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSDSA9),
		(val),
		(PMIC_RG_VRF18_DSA_MASK),
		(PMIC_RG_VRF18_DSA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bwdt_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_BWDT_EN_MASK),
		(PMIC_RG_BWDT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_bwdt_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR0),
		(&val),
		(PMIC_RG_BWDT_EN_MASK),
		(PMIC_RG_BWDT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_bwdt_tsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_BWDT_TSEL_MASK),
		(PMIC_RG_BWDT_TSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bwdt_csel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_BWDT_CSEL_MASK),
		(PMIC_RG_BWDT_CSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bwdt_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_BWDT_TD_MASK),
		(PMIC_RG_BWDT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bwdt_chrtd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_BWDT_CHRTD_MASK),
		(PMIC_RG_BWDT_CHRTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bwdt_ddlo_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_BWDT_DDLO_TD_MASK),
		(PMIC_RG_BWDT_DDLO_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_slot_intv_up(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_SLOT_INTV_UP_MASK),
		(PMIC_RG_SLOT_INTV_UP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_seq_len(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_SEQ_LEN_MASK),
		(PMIC_RG_SEQ_LEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_elr_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR0),
		(val),
		(PMIC_RG_PSEQ_ELR_RSV0_MASK),
		(PMIC_RG_PSEQ_ELR_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pspg_shdn_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_PSPG_SHDN_ENB_MASK),
		(PMIC_RG_PSPG_SHDN_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pspg_shdn_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_PSPG_SHDN_ENB_MASK),
		(PMIC_RG_PSPG_SHDN_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pseq_f32k_force(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_PSEQ_F32K_FORCE_MASK),
		(PMIC_RG_PSEQ_F32K_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pseq_1ms_tk_ext(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_PSEQ_1MS_TK_EXT_MASK),
		(PMIC_RG_PSEQ_1MS_TK_EXT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smps_ivgen_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_SMPS_IVGEN_SEL_MASK),
		(PMIC_RG_SMPS_IVGEN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_strup_long_press_reset_extend(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_RESET_EXTEND_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_RESET_EXTEND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_cps_s0ext_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_CPS_S0EXT_ENB_MASK),
		(PMIC_RG_CPS_S0EXT_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_cps_s0ext_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_CPS_S0EXT_ENB_MASK),
		(PMIC_RG_CPS_S0EXT_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_cps_s0ext_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_CPS_S0EXT_TD_MASK),
		(PMIC_RG_CPS_S0EXT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_sdn_dly_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_SDN_DLY_ENB_MASK),
		(PMIC_RG_SDN_DLY_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_sdn_dly_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_SDN_DLY_ENB_MASK),
		(PMIC_RG_SDN_DLY_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_chrdet_deb_td(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_CHRDET_DEB_TD_MASK),
		(PMIC_RG_CHRDET_DEB_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pwrkey_event_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_PWRKEY_EVENT_MODE_MASK),
		(PMIC_RG_PWRKEY_EVENT_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pwrkey_event_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_PWRKEY_EVENT_MODE_MASK),
		(PMIC_RG_PWRKEY_EVENT_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_pwrkey_event_mode_hw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_PWRKEY_EVENT_MODE_HW_MASK),
		(PMIC_RG_PWRKEY_EVENT_MODE_HW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_pwrkey_event_mode_hw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_PWRKEY_EVENT_MODE_HW_MASK),
		(PMIC_RG_PWRKEY_EVENT_MODE_HW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_ldo_pg_stb_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_LDO_PG_STB_MODE_MASK),
		(PMIC_RG_LDO_PG_STB_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ldo_pg_stb_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_LDO_PG_STB_MODE_MASK),
		(PMIC_RG_LDO_PG_STB_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_strup_ext_pmic_pg_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR1),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_strup_ext_pmic_pg_enb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PSEQ_ELR1),
		(&val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_psc_elr_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR2),
		(val),
		(PMIC_RG_PSC_ELR_RSV0_MASK),
		(PMIC_RG_PSC_ELR_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_psc_elr_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PSEQ_ELR3),
		(val),
		(PMIC_RG_PSC_ELR_RSV1_MASK),
		(PMIC_RG_PSC_ELR_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vxo22_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR0),
		(val),
		(PMIC_RG_VXO22_USA_MASK),
		(PMIC_RG_VXO22_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaux18_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR0),
		(val),
		(PMIC_RG_VAUX18_USA_MASK),
		(PMIC_RG_VAUX18_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR0),
		(val),
		(PMIC_RG_VCORE_USA_MASK),
		(PMIC_RG_VCORE_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR1),
		(val),
		(PMIC_RG_VGPU11_USA_MASK),
		(PMIC_RG_VGPU11_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR1),
		(val),
		(PMIC_RG_VGPU12_USA_MASK),
		(PMIC_RG_VGPU12_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vpu_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR1),
		(val),
		(PMIC_RG_VPU_USA_MASK),
		(PMIC_RG_VPU_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ext_pmic_en2_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR2),
		(val),
		(PMIC_RG_EXT_PMIC_EN2_USA_MASK),
		(PMIC_RG_EXT_PMIC_EN2_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ext_pmic_en2_usa(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CPSUSA_ELR2),
		(&val),
		(PMIC_RG_EXT_PMIC_EN2_USA_MASK),
		(PMIC_RG_EXT_PMIC_EN2_USA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vmodem_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR2),
		(val),
		(PMIC_RG_VMODEM_USA_MASK),
		(PMIC_RG_VMODEM_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vs2_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR2),
		(val),
		(PMIC_RG_VS2_USA_MASK),
		(PMIC_RG_VS2_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_va09_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR3),
		(val),
		(PMIC_RG_VA09_USA_MASK),
		(PMIC_RG_VA09_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_va12_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR3),
		(val),
		(PMIC_RG_VA12_USA_MASK),
		(PMIC_RG_VA12_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vs1_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR3),
		(val),
		(PMIC_RG_VS1_USA_MASK),
		(PMIC_RG_VS1_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vrfck_1_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR4),
		(val),
		(PMIC_RG_VRFCK_1_USA_MASK),
		(PMIC_RG_VRFCK_1_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbbck_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR4),
		(val),
		(PMIC_RG_VBBCK_USA_MASK),
		(PMIC_RG_VBBCK_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vufs_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR4),
		(val),
		(PMIC_RG_VUFS_USA_MASK),
		(PMIC_RG_VUFS_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vio18_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR5),
		(val),
		(PMIC_RG_VIO18_USA_MASK),
		(PMIC_RG_VIO18_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vm18_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR5),
		(val),
		(PMIC_RG_VM18_USA_MASK),
		(PMIC_RG_VM18_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ext_pmic_en1_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR5),
		(val),
		(PMIC_RG_EXT_PMIC_EN1_USA_MASK),
		(PMIC_RG_EXT_PMIC_EN1_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ext_pmic_en1_usa(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CPSUSA_ELR5),
		(&val),
		(PMIC_RG_EXT_PMIC_EN1_USA_MASK),
		(PMIC_RG_EXT_PMIC_EN1_USA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vemc_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR6),
		(val),
		(PMIC_RG_VEMC_USA_MASK),
		(PMIC_RG_VEMC_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_others_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR6),
		(val),
		(PMIC_RG_VSRAM_OTHERS_USA_MASK),
		(PMIC_RG_VSRAM_OTHERS_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_md_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR6),
		(val),
		(PMIC_RG_VSRAM_MD_USA_MASK),
		(PMIC_RG_VSRAM_MD_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vproc2_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR7),
		(val),
		(PMIC_RG_VPROC2_USA_MASK),
		(PMIC_RG_VPROC2_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_proc2_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR7),
		(val),
		(PMIC_RG_VSRAM_PROC2_USA_MASK),
		(PMIC_RG_VSRAM_PROC2_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vproc1_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR7),
		(val),
		(PMIC_RG_VPROC1_USA_MASK),
		(PMIC_RG_VPROC1_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vsram_proc1_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR8),
		(val),
		(PMIC_RG_VSRAM_PROC1_USA_MASK),
		(PMIC_RG_VSRAM_PROC1_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaud18_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR8),
		(val),
		(PMIC_RG_VAUD18_USA_MASK),
		(PMIC_RG_VAUD18_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vusb_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR8),
		(val),
		(PMIC_RG_VUSB_USA_MASK),
		(PMIC_RG_VUSB_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vrf18_usa(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CPSUSA_ELR9),
		(val),
		(PMIC_RG_VRF18_USA_MASK),
		(PMIC_RG_VRF18_USA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_chrdet_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_ID),
		(&val),
		(PMIC_CHRDET_ANA_ID_MASK),
		(PMIC_CHRDET_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_ID),
		(&val),
		(PMIC_CHRDET_DIG_ID_MASK),
		(PMIC_CHRDET_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_REV0),
		(&val),
		(PMIC_CHRDET_ANA_MINOR_REV_MASK),
		(PMIC_CHRDET_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_REV0),
		(&val),
		(PMIC_CHRDET_ANA_MAJOR_REV_MASK),
		(PMIC_CHRDET_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_REV0),
		(&val),
		(PMIC_CHRDET_DIG_MINOR_REV_MASK),
		(PMIC_CHRDET_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_REV0),
		(&val),
		(PMIC_CHRDET_DIG_MAJOR_REV_MASK),
		(PMIC_CHRDET_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_DBI),
		(&val),
		(PMIC_CHRDET_CBS_MASK),
		(PMIC_CHRDET_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_DBI),
		(&val),
		(PMIC_CHRDET_BIX_MASK),
		(PMIC_CHRDET_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_chrdet_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHRDET_DXI),
		(&val),
		(PMIC_CHRDET_FPI_MASK),
		(PMIC_CHRDET_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_chrdet(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHR_CON0),
		(&val),
		(PMIC_RGS_CHRDET_MASK),
		(PMIC_RGS_CHRDET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_ad_chrdetb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHR_CON0),
		(&val),
		(PMIC_AD_CHRDETB_MASK),
		(PMIC_AD_CHRDETB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_chrdet_deb_bypass(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CHR_CON1),
		(val),
		(PMIC_RG_CHRDET_DEB_BYPASS_MASK),
		(PMIC_RG_CHRDET_DEB_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_envtem_d(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CHR_CON2),
		(val),
		(PMIC_RG_ENVTEM_D_MASK),
		(PMIC_RG_ENVTEM_D_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_envtem_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_CHR_CON2),
		(val),
		(PMIC_RG_ENVTEM_EN_MASK),
		(PMIC_RG_ENVTEM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_envtem_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_CHR_CON2),
		(&val),
		(PMIC_RG_ENVTEM_EN_MASK),
		(PMIC_RG_ENVTEM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_da_qi_bgr_ext_buf_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_DA0),
		(val),
		(PMIC_DA_QI_BGR_EXT_BUF_EN_MASK),
		(PMIC_DA_QI_BGR_EXT_BUF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_test_rstb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON0),
		(val),
		(PMIC_RG_BGR_TEST_RSTB_MASK),
		(PMIC_RG_BGR_TEST_RSTB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_test_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON0),
		(val),
		(PMIC_RG_BGR_TEST_EN_MASK),
		(PMIC_RG_BGR_TEST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_bgr_test_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PCHR_VREF_ANA_CON0),
		(&val),
		(PMIC_RG_BGR_TEST_EN_MASK),
		(PMIC_RG_BGR_TEST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_bgr_unchop(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON1),
		(val),
		(PMIC_RG_BGR_UNCHOP_MASK),
		(PMIC_RG_BGR_UNCHOP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_unchop_ph(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON1),
		(val),
		(PMIC_RG_BGR_UNCHOP_PH_MASK),
		(PMIC_RG_BGR_UNCHOP_PH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_uvlo_vthl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON1),
		(val),
		(PMIC_RG_UVLO_VTHL_MASK),
		(PMIC_RG_UVLO_VTHL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_lbat_int_vth(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON2),
		(val),
		(PMIC_RG_LBAT_INT_VTH_MASK),
		(PMIC_RG_LBAT_INT_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ovlo_vth_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON3),
		(val),
		(PMIC_RG_OVLO_VTH_SEL_MASK),
		(PMIC_RG_OVLO_VTH_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_pchr_rv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ANA_CON4),
		(val),
		(PMIC_RG_PCHR_RV_MASK),
		(PMIC_RG_PCHR_RV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_pcas_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_PCAS_EN_MASK),
		(PMIC_RG_FGD_BGR_PCAS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_fgd_bgr_pcas_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(&val),
		(PMIC_RG_FGD_BGR_PCAS_EN_MASK),
		(PMIC_RG_FGD_BGR_PCAS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_ncas_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_NCAS_EN_MASK),
		(PMIC_RG_FGD_BGR_NCAS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_fgd_bgr_ncas_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(&val),
		(PMIC_RG_FGD_BGR_NCAS_EN_MASK),
		(PMIC_RG_FGD_BGR_NCAS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_EN_MASK),
		(PMIC_RG_FGD_BGR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_fgd_bgr_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(&val),
		(PMIC_RG_FGD_BGR_EN_MASK),
		(PMIC_RG_FGD_BGR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_bias_select(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_BIAS_SELECT_MASK),
		(PMIC_RG_FGD_BGR_BIAS_SELECT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_size_select(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_SIZE_SELECT_MASK),
		(PMIC_RG_FGD_BGR_SIZE_SELECT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_RSV_MASK),
		(PMIC_RG_FGD_BGR_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgd_bgr_current_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGD_BGR_ANA_CON0),
		(val),
		(PMIC_RG_FGD_BGR_CURRENT_TRIM_MASK),
		(PMIC_RG_FGD_BGR_CURRENT_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ELR_0),
		(val),
		(PMIC_RG_BGR_TRIM_MASK),
		(PMIC_RG_BGR_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bgr_trim_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ELR_0),
		(val),
		(PMIC_RG_BGR_TRIM_EN_MASK),
		(PMIC_RG_BGR_TRIM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_bgr_trim_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PCHR_VREF_ELR_0),
		(&val),
		(PMIC_RG_BGR_TRIM_EN_MASK),
		(PMIC_RG_BGR_TRIM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_bgr_rsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ELR_0),
		(val),
		(PMIC_RG_BGR_RSEL_MASK),
		(PMIC_RG_BGR_RSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_ovlo_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_PCHR_VREF_ELR_0),
		(val),
		(PMIC_RG_OVLO_EN_MASK),
		(PMIC_RG_OVLO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_ovlo_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_PCHR_VREF_ELR_0),
		(&val),
		(PMIC_RG_OVLO_EN_MASK),
		(PMIC_RG_OVLO_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_baton_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BATON_32K_CK_PDN_MASK),
		(PMIC_RG_BATON_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_ft_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FGADC_FT_CK_PDN_MASK),
		(PMIC_RG_FGADC_FT_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_dig_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FGADC_DIG_CK_PDN_MASK),
		(PMIC_RG_FGADC_DIG_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_ana_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FGADC_ANA_CK_PDN_MASK),
		(PMIC_RG_FGADC_ANA_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_g_bif_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_G_BIF_1M_CK_PDN_MASK),
		(PMIC_RG_G_BIF_1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_x1_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BIF_X1_CK_PDN_MASK),
		(PMIC_RG_BIF_X1_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_x4_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BIF_X4_CK_PDN_MASK),
		(PMIC_RG_BIF_X4_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_x104_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BIF_X104_CK_PDN_MASK),
		(PMIC_RG_BIF_X104_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bm_intrp_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BM_INTRP_CK_PDN_MASK),
		(PMIC_RG_BM_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bm_top_ckpdn_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BM_TOP_CKPDN_CON0_RSV_MASK),
		(PMIC_RG_BM_TOP_CKPDN_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_ana_ck_cksel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_FGADC_ANA_CK_CKSEL_MASK),
		(PMIC_RG_FGADC_ANA_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_x4_ck_divsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKDIVSEL_CON0),
		(val),
		(PMIC_RG_BIF_X4_CK_DIVSEL_MASK),
		(PMIC_RG_BIF_X4_CK_DIVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bm_top_ckdivsel_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKDIVSEL_CON0),
		(val),
		(PMIC_BM_TOP_CKDIVSEL_CON0_RSV_MASK),
		(PMIC_BM_TOP_CKDIVSEL_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_x4_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_BIF_X4_CK_PDN_HWEN_MASK),
		(PMIC_RG_BIF_X4_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_x104_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_BIF_X104_CK_PDN_HWEN_MASK),
		(PMIC_RG_BIF_X104_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bm_top_ckhwen_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKHWEN_CON0),
		(val),
		(PMIC_BM_TOP_CKHWEN_CON0_RSV_MASK),
		(PMIC_BM_TOP_CKHWEN_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fg_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_FG_CK_TSTSEL_MASK),
		(PMIC_RG_FG_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_ana_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_FGADC_ANA_CK_TSTSEL_MASK),
		(PMIC_RG_FGADC_ANA_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fg_ck_tst_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_FG_CK_TST_DIS_MASK),
		(PMIC_RG_FG_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_FGADC_SWRST_MASK),
		(PMIC_RG_FGADC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BATON_SWRST_MASK),
		(PMIC_RG_BATON_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bif_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BIF_SWRST_MASK),
		(PMIC_RG_BIF_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_batdeb_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BATON_BATDEB_SWRST_MASK),
		(PMIC_RG_BATON_BATDEB_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_fgadc_ana_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FGADC_ANA_SWRST_MASK),
		(PMIC_RG_BANK_FGADC_ANA_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_fgadc0_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FGADC0_SWRST_MASK),
		(PMIC_RG_BANK_FGADC0_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_fgadc1_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FGADC1_SWRST_MASK),
		(PMIC_RG_BANK_FGADC1_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_baton_ana_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_BATON_ANA_SWRST_MASK),
		(PMIC_RG_BANK_BATON_ANA_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_baton_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_BATON_SWRST_MASK),
		(PMIC_RG_BANK_BATON_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bank_bif_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_BIF_SWRST_MASK),
		(PMIC_RG_BANK_BIF_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgadc_rst_src_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON1),
		(val),
		(PMIC_RG_FGADC_RST_SRC_SEL_MASK),
		(PMIC_RG_FGADC_RST_SRC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bm_top_rst_con1_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RST_CON1),
		(val),
		(PMIC_BM_TOP_RST_CON1_RSV_MASK),
		(PMIC_BM_TOP_RST_CON1_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_bat_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_BAT_H_MASK),
		(PMIC_RG_INT_EN_FG_BAT_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_bat_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_BAT_H_MASK),
		(PMIC_RG_INT_EN_FG_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_bat_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_BAT_L_MASK),
		(PMIC_RG_INT_EN_FG_BAT_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_bat_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_BAT_L_MASK),
		(PMIC_RG_INT_EN_FG_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_cur_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_CUR_H_MASK),
		(PMIC_RG_INT_EN_FG_CUR_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_cur_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_CUR_H_MASK),
		(PMIC_RG_INT_EN_FG_CUR_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_cur_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_CUR_L_MASK),
		(PMIC_RG_INT_EN_FG_CUR_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_cur_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_CUR_L_MASK),
		(PMIC_RG_INT_EN_FG_CUR_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_zcv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_ZCV_MASK),
		(PMIC_RG_INT_EN_FG_ZCV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_zcv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_ZCV_MASK),
		(PMIC_RG_INT_EN_FG_ZCV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_n_charge_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_N_CHARGE_L_MASK),
		(PMIC_RG_INT_EN_FG_N_CHARGE_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_n_charge_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_N_CHARGE_L_MASK),
		(PMIC_RG_INT_EN_FG_N_CHARGE_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_iavg_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_IAVG_H_MASK),
		(PMIC_RG_INT_EN_FG_IAVG_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_iavg_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_IAVG_H_MASK),
		(PMIC_RG_INT_EN_FG_IAVG_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_iavg_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_IAVG_L_MASK),
		(PMIC_RG_INT_EN_FG_IAVG_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_iavg_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_IAVG_L_MASK),
		(PMIC_RG_INT_EN_FG_IAVG_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_discharge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_DISCHARGE_MASK),
		(PMIC_RG_INT_EN_FG_DISCHARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_DISCHARGE_MASK),
		(PMIC_RG_INT_EN_FG_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_fg_charge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_CHARGE_MASK),
		(PMIC_RG_INT_EN_FG_CHARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_fg_charge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_CHARGE_MASK),
		(PMIC_RG_INT_EN_FG_CHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_bm_int_en_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_BM_INT_EN_CON0_RSV_MASK),
		(PMIC_RG_BM_INT_EN_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_bm_int_en_con0_rsv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_BM_INT_EN_CON0_RSV_MASK),
		(PMIC_RG_BM_INT_EN_CON0_RSV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_baton_lv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_BATON_LV_MASK),
		(PMIC_RG_INT_EN_BATON_LV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_baton_lv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_BATON_LV_MASK),
		(PMIC_RG_INT_EN_BATON_LV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_baton_bat_in(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_BATON_BAT_IN_MASK),
		(PMIC_RG_INT_EN_BATON_BAT_IN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_baton_bat_in(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_BATON_BAT_IN_MASK),
		(PMIC_RG_INT_EN_BATON_BAT_IN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_baton_bat_out(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_BATON_BAT_OUT_MASK),
		(PMIC_RG_INT_EN_BATON_BAT_OUT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_baton_bat_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_BATON_BAT_OUT_MASK),
		(PMIC_RG_INT_EN_BATON_BAT_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_bif(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_BIF_MASK),
		(PMIC_RG_INT_EN_BIF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bif(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_BIF_MASK),
		(PMIC_RG_INT_EN_BIF_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_bat_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_BAT_H_MASK),
		(PMIC_RG_INT_MASK_FG_BAT_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_bat_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_BAT_L_MASK),
		(PMIC_RG_INT_MASK_FG_BAT_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_cur_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_CUR_H_MASK),
		(PMIC_RG_INT_MASK_FG_CUR_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_cur_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_CUR_L_MASK),
		(PMIC_RG_INT_MASK_FG_CUR_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_zcv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_ZCV_MASK),
		(PMIC_RG_INT_MASK_FG_ZCV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_n_charge_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_N_CHARGE_L_MASK),
		(PMIC_RG_INT_MASK_FG_N_CHARGE_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_iavg_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_IAVG_H_MASK),
		(PMIC_RG_INT_MASK_FG_IAVG_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_iavg_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_IAVG_L_MASK),
		(PMIC_RG_INT_MASK_FG_IAVG_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_discharge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_DISCHARGE_MASK),
		(PMIC_RG_INT_MASK_FG_DISCHARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_fg_charge(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_CHARGE_MASK),
		(PMIC_RG_INT_MASK_FG_CHARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bm_int_mask_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_BM_INT_MASK_CON0_RSV_MASK),
		(PMIC_RG_BM_INT_MASK_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_baton_lv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_BATON_LV_MASK),
		(PMIC_RG_INT_MASK_BATON_LV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_baton_bat_in(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_BATON_BAT_IN_MASK),
		(PMIC_RG_INT_MASK_BATON_BAT_IN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_baton_bat_out(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_BATON_BAT_OUT_MASK),
		(PMIC_RG_INT_MASK_BATON_BAT_OUT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bif(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_BIF_MASK),
		(PMIC_RG_INT_MASK_BIF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_bat_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_bat_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_cur_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_cur_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_zcv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_ZCV_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_ZCV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_n_charge_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_N_CHARGE_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_N_CHARGE_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_iavg_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_IAVG_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_IAVG_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_iavg_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_IAVG_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_IAVG_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_DISCHARGE_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_fg_charge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_CHARGE_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_CHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_bm_int_raw_status_rsv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_BM_INT_RAW_STATUS_RSV_MASK),
		(PMIC_RG_BM_INT_RAW_STATUS_RSV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_baton_lv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BATON_LV_MASK),
		(PMIC_RG_INT_RAW_STATUS_BATON_LV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_baton_bat_in(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BATON_BAT_IN_MASK),
		(PMIC_RG_INT_RAW_STATUS_BATON_BAT_IN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_baton_bat_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BATON_BAT_OUT_MASK),
		(PMIC_RG_INT_RAW_STATUS_BATON_BAT_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bif(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BM_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BIF_MASK),
		(PMIC_RG_INT_RAW_STATUS_BIF_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_polarity(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_INT_MISC_CON),
		(val),
		(PMIC_POLARITY_MASK),
		(PMIC_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bm_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_DBG_CON),
		(val),
		(PMIC_RG_BM_MON_FLAG_SEL_MASK),
		(PMIC_RG_BM_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bm_mon_grp_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_DBG_CON),
		(val),
		(PMIC_RG_BM_MON_GRP_SEL_MASK),
		(PMIC_RG_BM_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_bm_top_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_TOP_RSV0),
		(val),
		(PMIC_RG_BM_TOP_RSV0_MASK),
		(PMIC_RG_BM_TOP_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bm_fgadc_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_WKEY0),
		(val),
		(PMIC_BM_FGADC_KEY_MASK),
		(PMIC_BM_FGADC_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bm_baton_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_WKEY1),
		(val),
		(PMIC_BM_BATON_KEY_MASK),
		(PMIC_BM_BATON_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bm_bif_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BM_WKEY2),
		(val),
		(PMIC_BM_BIF_KEY_MASK),
		(PMIC_BM_BIF_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fganalogtest(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_FGANALOGTEST_MASK),
		(PMIC_RG_FGANALOGTEST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fgintmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_FGINTMODE_MASK),
		(PMIC_RG_FGINTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_spare(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_SPARE_MASK),
		(PMIC_RG_SPARE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_chop_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_CHOP_EN_MASK),
		(PMIC_RG_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_chop_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_CON0),
		(&val),
		(PMIC_RG_CHOP_EN_MASK),
		(PMIC_RG_CHOP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_rng_bit_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_RNG_BIT_MODE_MASK),
		(PMIC_FG_RNG_BIT_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_rng_bit_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_RNG_BIT_SW_MASK),
		(PMIC_FG_RNG_BIT_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_rng_en_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_RNG_EN_MODE_MASK),
		(PMIC_FG_RNG_EN_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_rng_en_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_RNG_EN_SW_MASK),
		(PMIC_FG_RNG_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_da_fg_rng_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_FG_RNG_EN_MASK),
		(PMIC_DA_FG_RNG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_fg_rng_bit(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_FG_RNG_BIT_MASK),
		(PMIC_DA_FG_RNG_BIT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_fgcal_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_FGCAL_EN_MASK),
		(PMIC_DA_FGCAL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_fgadc_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_FGADC_EN_MASK),
		(PMIC_DA_FGADC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_dwa_t0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_T0_MASK),
		(PMIC_FG_DWA_T0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_dwa_t1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_T1_MASK),
		(PMIC_FG_DWA_T1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_dwa_rst_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_RST_MODE_MASK),
		(PMIC_FG_DWA_RST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_dwa_rst_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_RST_SW_MASK),
		(PMIC_FG_DWA_RST_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_da_dwa_rst(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_DWA_RST_MASK),
		(PMIC_DA_DWA_RST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_fg_rst(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_FG_RST_MASK),
		(PMIC_DA_FG_RST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_fgadc_gainerr_cal(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_ELR0),
		(val),
		(PMIC_RG_FGADC_GAINERR_CAL_MASK),
		(PMIC_RG_FGADC_GAINERR_CAL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_fg_offset_swap(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ANA_ELR0),
		(val),
		(PMIC_RG_FG_OFFSET_SWAP_MASK),
		(PMIC_RG_FG_OFFSET_SWAP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_on(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_ON_MASK),
		(PMIC_FG_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_cal(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_CAL_MASK),
		(PMIC_FG_CAL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_autocalrate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_AUTOCALRATE_MASK),
		(PMIC_FG_AUTOCALRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_slp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_SON_SLP_EN_MASK),
		(PMIC_FG_SON_SLP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_soff_slp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_SOFF_SLP_EN_MASK),
		(PMIC_FG_SOFF_SLP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_zcv_det_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_ZCV_DET_EN_MASK),
		(PMIC_FG_ZCV_DET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_auxadc_r(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_AUXADC_R_MASK),
		(PMIC_FG_AUXADC_R_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_iavg_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON0),
		(val),
		(PMIC_FG_IAVG_MODE_MASK),
		(PMIC_FG_IAVG_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_sw_read_pre(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SW_READ_PRE_MASK),
		(PMIC_FG_SW_READ_PRE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_sw_rstclr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SW_RSTCLR_MASK),
		(PMIC_FG_SW_RSTCLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_sw_cr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SW_CR_MASK),
		(PMIC_FG_SW_CR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_sw_clear(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SW_CLEAR_MASK),
		(PMIC_FG_SW_CLEAR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_fp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SON_FP_EN_MASK),
		(PMIC_FG_SON_FP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_slp_hs(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SON_SLP_HS_MASK),
		(PMIC_FG_SON_SLP_HS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_offset_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_OFFSET_RST_MASK),
		(PMIC_FG_OFFSET_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_time_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_TIME_RST_MASK),
		(PMIC_FG_TIME_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_charge_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_CHARGE_RST_MASK),
		(PMIC_FG_CHARGE_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_n_charge_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_N_CHARGE_RST_MASK),
		(PMIC_FG_N_CHARGE_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_soff_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_SOFF_RST_MASK),
		(PMIC_FG_SOFF_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_va_err_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON1),
		(val),
		(PMIC_FG_VA_ERR_RST_MASK),
		(PMIC_FG_VA_ERR_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_latchdata_st(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON1),
		(&val),
		(PMIC_FG_LATCHDATA_ST_MASK),
		(PMIC_FG_LATCHDATA_ST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_bat_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_BAT_H_MASK),
		(PMIC_EVENT_FG_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_bat_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_BAT_L_MASK),
		(PMIC_EVENT_FG_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_cur_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_CUR_H_MASK),
		(PMIC_EVENT_FG_CUR_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_cur_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_CUR_L_MASK),
		(PMIC_EVENT_FG_CUR_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_zcv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_ZCV_MASK),
		(PMIC_EVENT_FG_ZCV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_n_charge_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_N_CHARGE_L_MASK),
		(PMIC_EVENT_FG_N_CHARGE_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_iavg_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_IAVG_H_MASK),
		(PMIC_EVENT_FG_IAVG_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_iavg_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_IAVG_L_MASK),
		(PMIC_EVENT_FG_IAVG_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_DISCHARGE_MASK),
		(PMIC_EVENT_FG_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_event_fg_charge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_CHARGE_MASK),
		(PMIC_EVENT_FG_CHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_osr1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON3),
		(val),
		(PMIC_FG_OSR1_MASK),
		(PMIC_FG_OSR1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_osr2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON3),
		(val),
		(PMIC_FG_OSR2_MASK),
		(PMIC_FG_OSR2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_fp_recal_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_FP_RECAL_EN_MASK),
		(PMIC_FG_FP_RECAL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_cur_ov_mult(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON4),
		(&val),
		(PMIC_FG_CUR_OV_MULT_MASK),
		(PMIC_FG_CUR_OV_MULT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_adj_offset_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_ADJ_OFFSET_EN_MASK),
		(PMIC_FG_ADJ_OFFSET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_adc_autorst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_ADC_AUTORST_MASK),
		(PMIC_FG_ADC_AUTORST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_adc_rstdetect(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON4),
		(&val),
		(PMIC_FG_ADC_RSTDETECT_MASK),
		(PMIC_FG_ADC_RSTDETECT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_va_err(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON4),
		(&val),
		(PMIC_FG_VA_ERR_MASK),
		(PMIC_FG_VA_ERR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_va_aon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_VA_AON_MASK),
		(PMIC_FG_VA_AON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_va_aoff(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_VA_AOFF_MASK),
		(PMIC_FG_VA_AOFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_SON_SW_MASK),
		(PMIC_FG_SON_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_SON_SW_MODE_MASK),
		(PMIC_FG_SON_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_pwr_fg_va_ack(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON4),
		(&val),
		(PMIC_PWR_FG_VA_ACK_MASK),
		(PMIC_PWR_FG_VA_ACK_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pwr_fg_va_req(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CON4),
		(&val),
		(PMIC_PWR_FG_VA_REQ_MASK),
		(PMIC_PWR_FG_VA_REQ_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_va_ack_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_VA_ACK_SW_MASK),
		(PMIC_FG_VA_ACK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_va_ack_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_VA_ACK_SW_MODE_MASK),
		(PMIC_FG_VA_ACK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_va_req_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_VA_REQ_SW_MASK),
		(PMIC_FG_VA_REQ_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_va_req_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON4),
		(val),
		(PMIC_FG_VA_REQ_SW_MODE_MASK),
		(PMIC_FG_VA_REQ_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fgadc_con5_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CON5),
		(val),
		(PMIC_FGADC_CON5_RSV_MASK),
		(PMIC_FGADC_CON5_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_rstb_status(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_RST_CON0),
		(val),
		(PMIC_FG_RSTB_STATUS_MASK),
		(PMIC_FG_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_car_15_00(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CAR_CON0),
		(&val),
		(PMIC_FG_CAR_15_00_MASK),
		(PMIC_FG_CAR_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_car_31_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CAR_CON1),
		(&val),
		(PMIC_FG_CAR_31_16_MASK),
		(PMIC_FG_CAR_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_bat_lth_15_00(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CARTH_CON0),
		(val),
		(PMIC_FG_BAT_LTH_15_00_MASK),
		(PMIC_FG_BAT_LTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_bat_lth_31_16(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CARTH_CON1),
		(val),
		(PMIC_FG_BAT_LTH_31_16_MASK),
		(PMIC_FG_BAT_LTH_31_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_bat_hth_15_00(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CARTH_CON2),
		(val),
		(PMIC_FG_BAT_HTH_15_00_MASK),
		(PMIC_FG_BAT_HTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_bat_hth_31_16(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CARTH_CON3),
		(val),
		(PMIC_FG_BAT_HTH_31_16_MASK),
		(PMIC_FG_BAT_HTH_31_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_ncar_15_00(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_NCAR_CON0),
		(&val),
		(PMIC_FG_NCAR_15_00_MASK),
		(PMIC_FG_NCAR_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_ncar_31_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_NCAR_CON1),
		(&val),
		(PMIC_FG_NCAR_31_16_MASK),
		(PMIC_FG_NCAR_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_n_charge_lth_15_00(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_NCAR_CON2),
		(val),
		(PMIC_FG_N_CHARGE_LTH_15_00_MASK),
		(PMIC_FG_N_CHARGE_LTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_n_charge_lth_31_16(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_NCAR_CON3),
		(val),
		(PMIC_FG_N_CHARGE_LTH_31_16_MASK),
		(PMIC_FG_N_CHARGE_LTH_31_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_iavg_15_00(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_IAVG_CON0),
		(&val),
		(PMIC_FG_IAVG_15_00_MASK),
		(PMIC_FG_IAVG_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_iavg_27_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_IAVG_CON1),
		(&val),
		(PMIC_FG_IAVG_27_16_MASK),
		(PMIC_FG_IAVG_27_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_iavg_vld(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_IAVG_CON1),
		(&val),
		(PMIC_FG_IAVG_VLD_MASK),
		(PMIC_FG_IAVG_VLD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_iavg_lth_15_00(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_IAVG_CON2),
		(val),
		(PMIC_FG_IAVG_LTH_15_00_MASK),
		(PMIC_FG_IAVG_LTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_iavg_lth_28_16(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_IAVG_CON3),
		(val),
		(PMIC_FG_IAVG_LTH_28_16_MASK),
		(PMIC_FG_IAVG_LTH_28_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_iavg_hth_15_00(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_IAVG_CON4),
		(val),
		(PMIC_FG_IAVG_HTH_15_00_MASK),
		(PMIC_FG_IAVG_HTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_iavg_hth_28_16(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_IAVG_CON5),
		(val),
		(PMIC_FG_IAVG_HTH_28_16_MASK),
		(PMIC_FG_IAVG_HTH_28_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_nter_15_00(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_NTER_CON0),
		(&val),
		(PMIC_FG_NTER_15_00_MASK),
		(PMIC_FG_NTER_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_nter_29_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_NTER_CON1),
		(&val),
		(PMIC_FG_NTER_29_16_MASK),
		(PMIC_FG_NTER_29_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_son_slp_cur_th(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_SON_CON0),
		(val),
		(PMIC_FG_SON_SLP_CUR_TH_MASK),
		(PMIC_FG_SON_SLP_CUR_TH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_slp_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_SON_CON1),
		(val),
		(PMIC_FG_SON_SLP_TIME_MASK),
		(PMIC_FG_SON_SLP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_son_det_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_SON_CON2),
		(val),
		(PMIC_FG_SON_DET_TIME_MASK),
		(PMIC_FG_SON_DET_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_soff_slp_cur_th(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_SOFF_CON0),
		(val),
		(PMIC_FG_SOFF_SLP_CUR_TH_MASK),
		(PMIC_FG_SOFF_SLP_CUR_TH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_soff_slp_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_SOFF_CON1),
		(val),
		(PMIC_FG_SOFF_SLP_TIME_MASK),
		(PMIC_FG_SOFF_SLP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_soff_det_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_SOFF_CON2),
		(val),
		(PMIC_FG_SOFF_DET_TIME_MASK),
		(PMIC_FG_SOFF_DET_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_soff_time_15_00(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_SOFF_CON3),
		(&val),
		(PMIC_FG_SOFF_TIME_15_00_MASK),
		(PMIC_FG_SOFF_TIME_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_soff_time_29_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_SOFF_CON4),
		(&val),
		(PMIC_FG_SOFF_TIME_29_16_MASK),
		(PMIC_FG_SOFF_TIME_29_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_soff(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_SOFF_CON4),
		(&val),
		(PMIC_FG_SOFF_MASK),
		(PMIC_FG_SOFF_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_zcv_det_iv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ZCV_CON0),
		(val),
		(PMIC_FG_ZCV_DET_IV_MASK),
		(PMIC_FG_ZCV_DET_IV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fgadc_zcv_con0_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ZCV_CON0),
		(val),
		(PMIC_FGADC_ZCV_CON0_RSV_MASK),
		(PMIC_FGADC_ZCV_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_zcv_curr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ZCV_CON1),
		(&val),
		(PMIC_FG_ZCV_CURR_MASK),
		(PMIC_FG_ZCV_CURR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_zcv_car_15_00(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ZCV_CON2),
		(&val),
		(PMIC_FG_ZCV_CAR_15_00_MASK),
		(PMIC_FG_ZCV_CAR_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_zcv_car_31_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_ZCV_CON3),
		(&val),
		(PMIC_FG_ZCV_CAR_31_16_MASK),
		(PMIC_FG_ZCV_CAR_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_zcv_car_th_15_00(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ZCVTH_CON0),
		(val),
		(PMIC_FG_ZCV_CAR_TH_15_00_MASK),
		(PMIC_FG_ZCV_CAR_TH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_zcv_car_th_30_16(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_ZCVTH_CON1),
		(val),
		(PMIC_FG_ZCV_CAR_TH_30_16_MASK),
		(PMIC_FG_ZCV_CAR_TH_30_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_r_curr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_R_CON0),
		(&val),
		(PMIC_FG_R_CURR_MASK),
		(PMIC_FG_R_CURR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_current_out(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CUR_CON0),
		(&val),
		(PMIC_FG_CURRENT_OUT_MASK),
		(PMIC_FG_CURRENT_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_cur_lth(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CUR_CON1),
		(val),
		(PMIC_FG_CUR_LTH_MASK),
		(PMIC_FG_CUR_LTH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_cur_hth(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_CUR_CON2),
		(val),
		(PMIC_FG_CUR_HTH_MASK),
		(PMIC_FG_CUR_HTH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_fg_cic2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_CUR_CON3),
		(&val),
		(PMIC_FG_CIC2_MASK),
		(PMIC_FG_CIC2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fg_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_FGADC_OFFSET_CON0),
		(&val),
		(PMIC_FG_OFFSET_MASK),
		(PMIC_FG_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_fg_adjust_offset_value(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_OFFSET_CON1),
		(val),
		(PMIC_FG_ADJUST_OFFSET_VALUE_MASK),
		(PMIC_FG_ADJUST_OFFSET_VALUE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_gain(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_GAIN_CON0),
		(val),
		(PMIC_FG_GAIN_MASK),
		(PMIC_FG_GAIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_MODE_MASK),
		(PMIC_FG_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_rst_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_RST_SW_MASK),
		(PMIC_FG_RST_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_fgcal_en_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_FGCAL_EN_SW_MASK),
		(PMIC_FG_FGCAL_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_fg_fgadc_en_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_FGADC_EN_SW_MASK),
		(PMIC_FG_FGADC_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_system_info_con0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SYSTEM_INFO_CON0),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON0_MASK),
		(PMIC_RG_SYSTEM_INFO_CON0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_system_info_con1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SYSTEM_INFO_CON1),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON1_MASK),
		(PMIC_RG_SYSTEM_INFO_CON1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_system_info_con2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SYSTEM_INFO_CON2),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON2_MASK),
		(PMIC_RG_SYSTEM_INFO_CON2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BATON_EN_MASK),
		(PMIC_RG_BATON_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_baton_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_BATON_EN_MASK),
		(PMIC_RG_BATON_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_bif_batid_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BIF_BATID_SW_EN_MASK),
		(PMIC_RG_BIF_BATID_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_bif_batid_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_BIF_BATID_SW_EN_MASK),
		(PMIC_RG_BIF_BATID_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_qi_baton_lt_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_ANA_CON0),
		(val),
		(PMIC_RG_QI_BATON_LT_EN_MASK),
		(PMIC_RG_QI_BATON_LT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_qi_baton_lt_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_QI_BATON_LT_EN_MASK),
		(PMIC_RG_QI_BATON_LT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_baton_ht_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BATON_HT_EN_MASK),
		(PMIC_RG_BATON_HT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_baton_ht_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_BATON_HT_EN_MASK),
		(PMIC_RG_BATON_HT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_baton_ht_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_MON0),
		(&val),
		(PMIC_DA_BATON_HT_EN_MASK),
		(PMIC_DA_BATON_HT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_ad_baton_undet(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_MON0),
		(&val),
		(PMIC_AD_BATON_UNDET_MASK),
		(PMIC_AD_BATON_UNDET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_ad_baton_undet_raw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_ANA_MON0),
		(&val),
		(PMIC_AD_BATON_UNDET_RAW_MASK),
		(PMIC_AD_BATON_UNDET_RAW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_bif_tx_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_ANA_MON0),
		(&val),
		(PMIC_DA_BIF_TX_EN_MASK),
		(PMIC_DA_BIF_TX_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_bif_tx_data(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_ANA_MON0),
		(&val),
		(PMIC_DA_BIF_TX_DATA_MASK),
		(PMIC_DA_BIF_TX_DATA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_bif_rx_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_ANA_MON0),
		(&val),
		(PMIC_DA_BIF_RX_EN_MASK),
		(PMIC_DA_BIF_RX_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_ad_bif_rx_data(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_ANA_MON0),
		(&val),
		(PMIC_AD_BIF_RX_DATA_MASK),
		(PMIC_AD_BIF_RX_DATA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_baton_debounce_wnd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON0),
		(val),
		(PMIC_RG_BATON_DEBOUNCE_WND_MASK),
		(PMIC_RG_BATON_DEBOUNCE_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_debounce_thd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON0),
		(val),
		(PMIC_RG_BATON_DEBOUNCE_THD_MASK),
		(PMIC_RG_BATON_DEBOUNCE_THD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_chrdet_testmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_CHRDET_TESTMODE_MASK),
		(PMIC_RG_BATON_CHRDET_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_undet_testmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_UNDET_TESTMODE_MASK),
		(PMIC_RG_BATON_UNDET_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_auxadc_testmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_AUXADC_TESTMODE_MASK),
		(PMIC_RG_BATON_AUXADC_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_fgadc_testmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_FGADC_TESTMODE_MASK),
		(PMIC_RG_BATON_FGADC_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_rtc_testmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_RTC_TESTMODE_MASK),
		(PMIC_RG_BATON_RTC_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_bif_testmode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_BIF_TESTMODE_MASK),
		(PMIC_RG_BATON_BIF_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_vbif28_req_testmode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_VBIF28_REQ_TESTMODE_MASK),
		(PMIC_RG_BATON_VBIF28_REQ_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_vbif28_ack_testmode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_VBIF28_ACK_TESTMODE_MASK),
		(PMIC_RG_BATON_VBIF28_ACK_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_chrdet_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_CHRDET_SW_MASK),
		(PMIC_RG_BATON_CHRDET_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_undet_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_UNDET_SW_MASK),
		(PMIC_RG_BATON_UNDET_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_auxadc_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_AUXADC_SW_MASK),
		(PMIC_RG_BATON_AUXADC_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_fgadc_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_FGADC_SW_MASK),
		(PMIC_RG_BATON_FGADC_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_rtc_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_RTC_SW_MASK),
		(PMIC_RG_BATON_RTC_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_bif_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_BIF_SW_MASK),
		(PMIC_RG_BATON_BIF_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_vbif28_req_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_VBIF28_REQ_SW_MASK),
		(PMIC_RG_BATON_VBIF28_REQ_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_baton_vbif28_ack_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BATON_CON1),
		(val),
		(PMIC_RG_BATON_VBIF28_ACK_SW_MASK),
		(PMIC_RG_BATON_VBIF28_ACK_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_baton_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_DEB_MASK),
		(PMIC_BATON_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_auxadc_set(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_AUXADC_SET_MASK),
		(PMIC_BATON_AUXADC_SET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_deb_vld(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_DEB_VLD_MASK),
		(PMIC_BATON_DEB_VLD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_bif_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_BIF_STATUS_MASK),
		(PMIC_BATON_BIF_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_rtc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_RTC_STATUS_MASK),
		(PMIC_BATON_RTC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_fgadc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_FGADC_STATUS_MASK),
		(PMIC_BATON_FGADC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_auxadc_trig(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_AUXADC_TRIG_MASK),
		(PMIC_BATON_AUXADC_TRIG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_chrdet_deb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_CHRDET_DEB_MASK),
		(PMIC_BATON_CHRDET_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pwr_baton_vbif28_ack(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_PWR_BATON_VBIF28_ACK_MASK),
		(PMIC_PWR_BATON_VBIF28_ACK_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_pwr_baton_vbif28_req(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_PWR_BATON_VBIF28_REQ_MASK),
		(PMIC_PWR_BATON_VBIF28_REQ_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_baton_rsv_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BATON_CON2),
		(&val),
		(PMIC_BATON_RSV_0_MASK),
		(PMIC_BATON_RSV_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_bif_command_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON0),
		(val),
		(PMIC_BIF_COMMAND_0_MASK),
		(PMIC_BIF_COMMAND_0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON1),
		(val),
		(PMIC_BIF_COMMAND_1_MASK),
		(PMIC_BIF_COMMAND_1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON2),
		(val),
		(PMIC_BIF_COMMAND_2_MASK),
		(PMIC_BIF_COMMAND_2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON3),
		(val),
		(PMIC_BIF_COMMAND_3_MASK),
		(PMIC_BIF_COMMAND_3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_4(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON4),
		(val),
		(PMIC_BIF_COMMAND_4_MASK),
		(PMIC_BIF_COMMAND_4_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_5(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON5),
		(val),
		(PMIC_BIF_COMMAND_5_MASK),
		(PMIC_BIF_COMMAND_5_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_6(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON6),
		(val),
		(PMIC_BIF_COMMAND_6_MASK),
		(PMIC_BIF_COMMAND_6_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_7(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON7),
		(val),
		(PMIC_BIF_COMMAND_7_MASK),
		(PMIC_BIF_COMMAND_7_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_8(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON8),
		(val),
		(PMIC_BIF_COMMAND_8_MASK),
		(PMIC_BIF_COMMAND_8_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_9(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON9),
		(val),
		(PMIC_BIF_COMMAND_9_MASK),
		(PMIC_BIF_COMMAND_9_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_10(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON10),
		(val),
		(PMIC_BIF_COMMAND_10_MASK),
		(PMIC_BIF_COMMAND_10_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_11(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON11),
		(val),
		(PMIC_BIF_COMMAND_11_MASK),
		(PMIC_BIF_COMMAND_11_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_12(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON12),
		(val),
		(PMIC_BIF_COMMAND_12_MASK),
		(PMIC_BIF_COMMAND_12_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_13(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON13),
		(val),
		(PMIC_BIF_COMMAND_13_MASK),
		(PMIC_BIF_COMMAND_13_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_14(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON14),
		(val),
		(PMIC_BIF_COMMAND_14_MASK),
		(PMIC_BIF_COMMAND_14_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON15),
		(val),
		(PMIC_BIF_RSV_MASK),
		(PMIC_BIF_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_command_type(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON15),
		(val),
		(PMIC_BIF_COMMAND_TYPE_MASK),
		(PMIC_BIF_COMMAND_TYPE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_trasfer_num(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON15),
		(val),
		(PMIC_BIF_TRASFER_NUM_MASK),
		(PMIC_BIF_TRASFER_NUM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_logic_0_set(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON16),
		(val),
		(PMIC_BIF_LOGIC_0_SET_MASK),
		(PMIC_BIF_LOGIC_0_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_logic_1_set(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON16),
		(val),
		(PMIC_BIF_LOGIC_1_SET_MASK),
		(PMIC_BIF_LOGIC_1_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_stop_set(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON16),
		(val),
		(PMIC_BIF_STOP_SET_MASK),
		(PMIC_BIF_STOP_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_debounce_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON17),
		(val),
		(PMIC_BIF_DEBOUNCE_EN_MASK),
		(PMIC_BIF_DEBOUNCE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_read_expect_num(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON17),
		(val),
		(PMIC_BIF_READ_EXPECT_NUM_MASK),
		(PMIC_BIF_READ_EXPECT_NUM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_trasact_trigger(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON18),
		(val),
		(PMIC_BIF_TRASACT_TRIGGER_MASK),
		(PMIC_BIF_TRASACT_TRIGGER_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_bif_data_num(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON19),
		(&val),
		(PMIC_BIF_DATA_NUM_MASK),
		(PMIC_BIF_DATA_NUM_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_response(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON19),
		(&val),
		(PMIC_BIF_RESPONSE_MASK),
		(PMIC_BIF_RESPONSE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON20),
		(&val),
		(PMIC_BIF_DATA_0_MASK),
		(PMIC_BIF_DATA_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON20),
		(&val),
		(PMIC_BIF_ACK_0_MASK),
		(PMIC_BIF_ACK_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON20),
		(&val),
		(PMIC_BIF_ERR_0_MASK),
		(PMIC_BIF_ERR_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON21),
		(&val),
		(PMIC_BIF_DATA_1_MASK),
		(PMIC_BIF_DATA_1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON21),
		(&val),
		(PMIC_BIF_ACK_1_MASK),
		(PMIC_BIF_ACK_1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON21),
		(&val),
		(PMIC_BIF_ERR_1_MASK),
		(PMIC_BIF_ERR_1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON22),
		(&val),
		(PMIC_BIF_DATA_2_MASK),
		(PMIC_BIF_DATA_2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON22),
		(&val),
		(PMIC_BIF_ACK_2_MASK),
		(PMIC_BIF_ACK_2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON22),
		(&val),
		(PMIC_BIF_ERR_2_MASK),
		(PMIC_BIF_ERR_2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON23),
		(&val),
		(PMIC_BIF_DATA_3_MASK),
		(PMIC_BIF_DATA_3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON23),
		(&val),
		(PMIC_BIF_ACK_3_MASK),
		(PMIC_BIF_ACK_3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON23),
		(&val),
		(PMIC_BIF_ERR_3_MASK),
		(PMIC_BIF_ERR_3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON24),
		(&val),
		(PMIC_BIF_DATA_4_MASK),
		(PMIC_BIF_DATA_4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON24),
		(&val),
		(PMIC_BIF_ACK_4_MASK),
		(PMIC_BIF_ACK_4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON24),
		(&val),
		(PMIC_BIF_ERR_4_MASK),
		(PMIC_BIF_ERR_4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON25),
		(&val),
		(PMIC_BIF_DATA_5_MASK),
		(PMIC_BIF_DATA_5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON25),
		(&val),
		(PMIC_BIF_ACK_5_MASK),
		(PMIC_BIF_ACK_5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON25),
		(&val),
		(PMIC_BIF_ERR_5_MASK),
		(PMIC_BIF_ERR_5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_6(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON26),
		(&val),
		(PMIC_BIF_DATA_6_MASK),
		(PMIC_BIF_DATA_6_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_6(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON26),
		(&val),
		(PMIC_BIF_ACK_6_MASK),
		(PMIC_BIF_ACK_6_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_6(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON26),
		(&val),
		(PMIC_BIF_ERR_6_MASK),
		(PMIC_BIF_ERR_6_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_7(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON27),
		(&val),
		(PMIC_BIF_DATA_7_MASK),
		(PMIC_BIF_DATA_7_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_7(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON27),
		(&val),
		(PMIC_BIF_ACK_7_MASK),
		(PMIC_BIF_ACK_7_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_7(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON27),
		(&val),
		(PMIC_BIF_ERR_7_MASK),
		(PMIC_BIF_ERR_7_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_8(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON28),
		(&val),
		(PMIC_BIF_DATA_8_MASK),
		(PMIC_BIF_DATA_8_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_8(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON28),
		(&val),
		(PMIC_BIF_ACK_8_MASK),
		(PMIC_BIF_ACK_8_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_8(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON28),
		(&val),
		(PMIC_BIF_ERR_8_MASK),
		(PMIC_BIF_ERR_8_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_data_9(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON29),
		(&val),
		(PMIC_BIF_DATA_9_MASK),
		(PMIC_BIF_DATA_9_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_ack_9(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON29),
		(&val),
		(PMIC_BIF_ACK_9_MASK),
		(PMIC_BIF_ACK_9_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_err_9(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON29),
		(&val),
		(PMIC_BIF_ERR_9_MASK),
		(PMIC_BIF_ERR_9_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_bif_test_mode0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE0_MASK),
		(PMIC_BIF_TEST_MODE0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE1_MASK),
		(PMIC_BIF_TEST_MODE1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE2_MASK),
		(PMIC_BIF_TEST_MODE2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE3_MASK),
		(PMIC_BIF_TEST_MODE3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode4(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE4_MASK),
		(PMIC_BIF_TEST_MODE4_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode5(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE5_MASK),
		(PMIC_BIF_TEST_MODE5_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode6(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE6_MASK),
		(PMIC_BIF_TEST_MODE6_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode7(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE7_MASK),
		(PMIC_BIF_TEST_MODE7_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_test_mode8(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TEST_MODE8_MASK),
		(PMIC_BIF_TEST_MODE8_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_bat_lost_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_BAT_LOST_SW_MASK),
		(PMIC_BIF_BAT_LOST_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_rx_data_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_RX_DATA_SW_MASK),
		(PMIC_BIF_RX_DATA_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_tx_data_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TX_DATA_SW_MASK),
		(PMIC_BIF_TX_DATA_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_rx_en_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_RX_EN_SW_MASK),
		(PMIC_BIF_RX_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_tx_en_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON30),
		(val),
		(PMIC_BIF_TX_EN_SW_MASK),
		(PMIC_BIF_TX_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_back_normal(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON31),
		(val),
		(PMIC_BIF_BACK_NORMAL_MASK),
		(PMIC_BIF_BACK_NORMAL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_irq_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON31),
		(val),
		(PMIC_BIF_IRQ_CLR_MASK),
		(PMIC_BIF_IRQ_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_bif_irq(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON31),
		(&val),
		(PMIC_BIF_IRQ_MASK),
		(PMIC_BIF_IRQ_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_timeout(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON31),
		(&val),
		(PMIC_BIF_TIMEOUT_MASK),
		(PMIC_BIF_TIMEOUT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_bat_undet(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON31),
		(&val),
		(PMIC_BIF_BAT_UNDET_MASK),
		(PMIC_BIF_BAT_UNDET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_total_valid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON31),
		(&val),
		(PMIC_BIF_TOTAL_VALID_MASK),
		(PMIC_BIF_TOTAL_VALID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_bus_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON31),
		(&val),
		(PMIC_BIF_BUS_STATUS_MASK),
		(PMIC_BIF_BUS_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_bif_power_up_count(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON32),
		(val),
		(PMIC_BIF_POWER_UP_COUNT_MASK),
		(PMIC_BIF_POWER_UP_COUNT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_power_up(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON32),
		(val),
		(PMIC_BIF_POWER_UP_MASK),
		(PMIC_BIF_POWER_UP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_bif_rx_err_unknown(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON33),
		(&val),
		(PMIC_BIF_RX_ERR_UNKNOWN_MASK),
		(PMIC_BIF_RX_ERR_UNKNOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_rx_err_insuff(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON33),
		(&val),
		(PMIC_BIF_RX_ERR_INSUFF_MASK),
		(PMIC_BIF_RX_ERR_INSUFF_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_rx_err_lowphase(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON33),
		(&val),
		(PMIC_BIF_RX_ERR_LOWPHASE_MASK),
		(PMIC_BIF_RX_ERR_LOWPHASE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_rx_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON33),
		(&val),
		(PMIC_BIF_RX_STATE_MASK),
		(PMIC_BIF_RX_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_flow_ctl_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON33),
		(&val),
		(PMIC_BIF_FLOW_CTL_STATE_MASK),
		(PMIC_BIF_FLOW_CTL_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_tx_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON33),
		(&val),
		(PMIC_BIF_TX_STATE_MASK),
		(PMIC_BIF_TX_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_tx_data_fianl(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON34),
		(&val),
		(PMIC_BIF_TX_DATA_FIANL_MASK),
		(PMIC_BIF_TX_DATA_FIANL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_rx_data_sampling(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON35),
		(&val),
		(PMIC_BIF_RX_DATA_SAMPLING_MASK),
		(PMIC_BIF_RX_DATA_SAMPLING_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_bif_rx_data_recovery(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON36),
		(&val),
		(PMIC_BIF_RX_DATA_RECOVERY_MASK),
		(PMIC_BIF_RX_DATA_RECOVERY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_baton_ht_en_pre(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON36),
		(val),
		(PMIC_RG_BATON_HT_EN_PRE_MASK),
		(PMIC_RG_BATON_HT_EN_PRE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_baton_ht_en_pre(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON36),
		(&val),
		(PMIC_RG_BATON_HT_EN_PRE_MASK),
		(PMIC_RG_BATON_HT_EN_PRE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_baton_ht_en_dly_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON36),
		(val),
		(PMIC_RG_BATON_HT_EN_DLY_TIME_MASK),
		(PMIC_RG_BATON_HT_EN_DLY_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_baton_ht_en_dly_time(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON36),
		(&val),
		(PMIC_RG_BATON_HT_EN_DLY_TIME_MASK),
		(PMIC_RG_BATON_HT_EN_DLY_TIME_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_bif_timeout_set(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON37),
		(val),
		(PMIC_BIF_TIMEOUT_SET_MASK),
		(PMIC_BIF_TIMEOUT_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_rx_deg_wnd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON38),
		(val),
		(PMIC_BIF_RX_DEG_WND_MASK),
		(PMIC_BIF_RX_DEG_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bif_rx_deg_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON38),
		(val),
		(PMIC_BIF_RX_DEG_EN_MASK),
		(PMIC_BIF_RX_DEG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_bif_rsv1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BIF_CON39),
		(&val),
		(PMIC_BIF_RSV1_MASK),
		(PMIC_BIF_RSV1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_bif_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BIF_CON39),
		(val),
		(PMIC_BIF_RSV0_MASK),
		(PMIC_BIF_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_hk_top_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_ID),
		(&val),
		(PMIC_HK_TOP_ANA_ID_MASK),
		(PMIC_HK_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_ID),
		(&val),
		(PMIC_HK_TOP_DIG_ID_MASK),
		(PMIC_HK_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_ANA_MINOR_REV_MASK),
		(PMIC_HK_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_HK_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_DIG_MINOR_REV_MASK),
		(PMIC_HK_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_HK_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_DBI),
		(&val),
		(PMIC_HK_TOP_CBS_MASK),
		(PMIC_HK_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_DBI),
		(&val),
		(PMIC_HK_TOP_BIX_MASK),
		(PMIC_HK_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_DBI),
		(&val),
		(PMIC_HK_TOP_ESP_MASK),
		(PMIC_HK_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_top_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_DXI),
		(&val),
		(PMIC_HK_TOP_FPI_MASK),
		(PMIC_HK_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_clk_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TPM0),
		(&val),
		(PMIC_HK_CLK_OFFSET_MASK),
		(PMIC_HK_CLK_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_rst_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TPM0),
		(&val),
		(PMIC_HK_RST_OFFSET_MASK),
		(PMIC_HK_RST_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_int_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TPM1),
		(&val),
		(PMIC_HK_INT_OFFSET_MASK),
		(PMIC_HK_INT_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_hk_int_len(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TPM1),
		(&val),
		(PMIC_HK_INT_LEN_MASK),
		(PMIC_HK_INT_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_auxadc_26m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_26m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_26M_CK_PDN_MASK),
		(PMIC_RG_AUXADC_26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_CK_PDN_MASK),
		(PMIC_RG_AUXADC_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_rng_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_RNG_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_RNG_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_rng_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_RNG_CK_PDN_MASK),
		(PMIC_RG_AUXADC_RNG_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_1M_CK_PDN_MASK),
		(PMIC_RG_AUXADC_1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_32K_CK_PDN_MASK),
		(PMIC_RG_AUXADC_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_intrp_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_HK_INTRP_CK_PDN_HWEN_MASK),
		(PMIC_RG_HK_INTRP_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_intrp_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_HK_INTRP_CK_PDN_MASK),
		(PMIC_RG_HK_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_26m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_26M_CK_TSTSEL_MASK),
		(PMIC_RG_AUXADC_26M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_CK_TSTSEL_MASK),
		(PMIC_RG_AUXADC_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_rng_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_RNG_CK_TSTSEL_MASK),
		(PMIC_RG_AUXADC_RNG_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_1m_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_1M_CK_TSTSEL_MASK),
		(PMIC_RG_AUXADC_1M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_32k_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_32K_CK_TSTSEL_MASK),
		(PMIC_RG_AUXADC_32K_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_intrp_ck_tstsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_HK_INTRP_CK_TSTSEL_MASK),
		(PMIC_RG_HK_INTRP_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_RG_AUXADC_RST_MASK),
		(PMIC_RG_AUXADC_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_reg_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_RG_AUXADC_REG_RST_MASK),
		(PMIC_RG_AUXADC_REG_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_hk_top_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_HK_TOP_SWRST_MASK),
		(PMIC_BANK_HK_TOP_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_auxadc_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_SWRST_MASK),
		(PMIC_BANK_AUXADC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_auxadc_dig_1_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_1_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_1_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_auxadc_dig_2_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_2_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_2_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_auxadc_dig_3_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_3_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_3_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_bank_auxadc_dig_4_swrst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_4_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_4_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_en_bat_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT_H_MASK),
		(PMIC_RG_INT_EN_BAT_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bat_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT_H_MASK),
		(PMIC_RG_INT_EN_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_bat_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT_L_MASK),
		(PMIC_RG_INT_EN_BAT_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bat_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT_L_MASK),
		(PMIC_RG_INT_EN_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_bat2_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT2_H_MASK),
		(PMIC_RG_INT_EN_BAT2_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bat2_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT2_H_MASK),
		(PMIC_RG_INT_EN_BAT2_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_bat2_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT2_L_MASK),
		(PMIC_RG_INT_EN_BAT2_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bat2_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT2_L_MASK),
		(PMIC_RG_INT_EN_BAT2_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_bat_temp_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT_TEMP_H_MASK),
		(PMIC_RG_INT_EN_BAT_TEMP_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bat_temp_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT_TEMP_H_MASK),
		(PMIC_RG_INT_EN_BAT_TEMP_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_bat_temp_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT_TEMP_L_MASK),
		(PMIC_RG_INT_EN_BAT_TEMP_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_bat_temp_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT_TEMP_L_MASK),
		(PMIC_RG_INT_EN_BAT_TEMP_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_thr_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_THR_H_MASK),
		(PMIC_RG_INT_EN_THR_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_thr_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_THR_H_MASK),
		(PMIC_RG_INT_EN_THR_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_thr_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_THR_L_MASK),
		(PMIC_RG_INT_EN_THR_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_thr_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_THR_L_MASK),
		(PMIC_RG_INT_EN_THR_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_auxadc_imp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_AUXADC_IMP_MASK),
		(PMIC_RG_INT_EN_AUXADC_IMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_auxadc_imp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_AUXADC_IMP_MASK),
		(PMIC_RG_INT_EN_AUXADC_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_nag_c_dltv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_nag_c_dltv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_bat_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT_H_MASK),
		(PMIC_RG_INT_MASK_BAT_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bat_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT_L_MASK),
		(PMIC_RG_INT_MASK_BAT_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bat2_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT2_H_MASK),
		(PMIC_RG_INT_MASK_BAT2_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bat2_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT2_L_MASK),
		(PMIC_RG_INT_MASK_BAT2_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bat_temp_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT_TEMP_H_MASK),
		(PMIC_RG_INT_MASK_BAT_TEMP_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_bat_temp_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT_TEMP_L_MASK),
		(PMIC_RG_INT_MASK_BAT_TEMP_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_thr_h(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_THR_H_MASK),
		(PMIC_RG_INT_MASK_THR_H_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_thr_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_THR_L_MASK),
		(PMIC_RG_INT_MASK_THR_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_auxadc_imp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_AUXADC_IMP_MASK),
		(PMIC_RG_INT_MASK_AUXADC_IMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_nag_c_dltv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_MASK_NAG_C_DLTV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bat_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bat_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bat2_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT2_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT2_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bat2_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT2_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT2_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bat_temp_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT_TEMP_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT_TEMP_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_bat_temp_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT_TEMP_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT_TEMP_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_thr_h(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_THR_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_THR_H_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_thr_l(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_THR_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_THR_L_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_auxadc_imp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_AUXADC_IMP_MASK),
		(PMIC_RG_INT_RAW_STATUS_AUXADC_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_nag_c_dltv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_RAW_STATUS_NAG_C_DLTV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_clk_mon_flag_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_MON_CON0),
		(val),
		(PMIC_RG_CLK_MON_FLAG_EN_MASK),
		(PMIC_RG_CLK_MON_FLAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_clk_mon_flag_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_MON_CON0),
		(&val),
		(PMIC_RG_CLK_MON_FLAG_EN_MASK),
		(PMIC_RG_CLK_MON_FLAG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_clk_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_MON_CON0),
		(val),
		(PMIC_RG_CLK_MON_FLAG_SEL_MASK),
		(PMIC_RG_CLK_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mon_flag_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_MON_CON1),
		(val),
		(PMIC_RG_INT_MON_FLAG_EN_MASK),
		(PMIC_RG_INT_MON_FLAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_mon_flag_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_MON_CON1),
		(&val),
		(PMIC_RG_INT_MON_FLAG_EN_MASK),
		(PMIC_RG_INT_MON_FLAG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_MON_CON1),
		(val),
		(PMIC_RG_INT_MON_FLAG_SEL_MASK),
		(PMIC_RG_INT_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_mon_flag_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_MON_CON2),
		(val),
		(PMIC_RG_HK_MON_FLAG_SEL_MASK),
		(PMIC_RG_HK_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_mon_flag_sel_auxadc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_MON_CON2),
		(val),
		(PMIC_RG_MON_FLAG_SEL_AUXADC_MASK),
		(PMIC_RG_MON_FLAG_SEL_AUXADC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_adcin_vsen_mux_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CHR_CON),
		(val),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_adcin_vsen_mux_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_CHR_CON),
		(&val),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_baton_tdet_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CHR_CON),
		(val),
		(PMIC_RG_BATON_TDET_EN_MASK),
		(PMIC_RG_BATON_TDET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_baton_tdet_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_CHR_CON),
		(&val),
		(PMIC_RG_BATON_TDET_EN_MASK),
		(PMIC_RG_BATON_TDET_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_adcin_vsen_ext_baton_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CHR_CON),
		(val),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_adcin_vsen_ext_baton_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_CHR_CON),
		(&val),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_adcin_vbat_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CHR_CON),
		(val),
		(PMIC_RG_ADCIN_VBAT_EN_MASK),
		(PMIC_RG_ADCIN_VBAT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_adcin_vbat_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_CHR_CON),
		(&val),
		(PMIC_RG_ADCIN_VBAT_EN_MASK),
		(PMIC_RG_ADCIN_VBAT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_adcin_vsen_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CHR_CON),
		(val),
		(PMIC_RG_ADCIN_VSEN_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_adcin_vsen_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_CHR_CON),
		(&val),
		(PMIC_RG_ADCIN_VSEN_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_adcin_chr_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_CHR_CON),
		(val),
		(PMIC_RG_ADCIN_CHR_EN_MASK),
		(PMIC_RG_ADCIN_CHR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_adcin_chr_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_CHR_CON),
		(&val),
		(PMIC_RG_ADCIN_CHR_EN_MASK),
		(PMIC_RG_ADCIN_CHR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_auxadc_diffbuf_swen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_ANA_CON),
		(val),
		(PMIC_RG_AUXADC_DIFFBUF_SWEN_MASK),
		(PMIC_RG_AUXADC_DIFFBUF_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_diffbuf_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_ANA_CON),
		(val),
		(PMIC_RG_AUXADC_DIFFBUF_EN_MASK),
		(PMIC_RG_AUXADC_DIFFBUF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_auxadc_diffbuf_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_ANA_CON),
		(&val),
		(PMIC_RG_AUXADC_DIFFBUF_EN_MASK),
		(PMIC_RG_AUXADC_DIFFBUF_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_adcin_vbat_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_ADCIN_VBAT_EN_MASK),
		(PMIC_DA_ADCIN_VBAT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_auxadc_vbat_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_AUXADC_VBAT_EN_MASK),
		(PMIC_DA_AUXADC_VBAT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_adcin_vsen_mux_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_DA_ADCIN_VSEN_MUX_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_adcin_vsen_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_ADCIN_VSEN_EN_MASK),
		(PMIC_DA_ADCIN_VSEN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_adcin_chr_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_ADCIN_CHR_EN_MASK),
		(PMIC_DA_ADCIN_CHR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_baton_tdet_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_BATON_TDET_EN_MASK),
		(PMIC_DA_BATON_TDET_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_adcin_batid_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_ADCIN_BATID_SW_EN_MASK),
		(PMIC_DA_ADCIN_BATID_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_auxadc_diffbuf_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_AUXADC_ANA),
		(&val),
		(PMIC_DA_AUXADC_DIFFBUF_EN_MASK),
		(PMIC_DA_AUXADC_DIFFBUF_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_hk_strup_auxadc_start_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_STRUP),
		(val),
		(PMIC_RG_HK_STRUP_AUXADC_START_SW_MASK),
		(PMIC_RG_HK_STRUP_AUXADC_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_strup_auxadc_rstb_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_STRUP),
		(val),
		(PMIC_RG_HK_STRUP_AUXADC_RSTB_SW_MASK),
		(PMIC_RG_HK_STRUP_AUXADC_RSTB_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_strup_auxadc_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_STRUP),
		(val),
		(PMIC_RG_HK_STRUP_AUXADC_START_SEL_MASK),
		(PMIC_RG_HK_STRUP_AUXADC_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_strup_auxadc_rstb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_STRUP),
		(val),
		(PMIC_RG_HK_STRUP_AUXADC_RSTB_SEL_MASK),
		(PMIC_RG_HK_STRUP_AUXADC_RSTB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_hk_strup_auxadc_rpcnt_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_STRUP),
		(val),
		(PMIC_RG_HK_STRUP_AUXADC_RPCNT_MAX_MASK),
		(PMIC_RG_HK_STRUP_AUXADC_RPCNT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaux18_auxadc_stb_swen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VAUX18_AUXADC_STB_SWEN_MASK),
		(PMIC_RG_VAUX18_AUXADC_STB_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaux18_auxadc_stb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VAUX18_AUXADC_STB_EN_MASK),
		(PMIC_RG_VAUX18_AUXADC_STB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vaux18_auxadc_stb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_CON),
		(&val),
		(PMIC_RG_VAUX18_AUXADC_STB_EN_MASK),
		(PMIC_RG_VAUX18_AUXADC_STB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vaux18_auxadc_ack_swen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VAUX18_AUXADC_ACK_SWEN_MASK),
		(PMIC_RG_VAUX18_AUXADC_ACK_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vaux18_auxadc_ack_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VAUX18_AUXADC_ACK_EN_MASK),
		(PMIC_RG_VAUX18_AUXADC_ACK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vaux18_auxadc_ack_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_CON),
		(&val),
		(PMIC_RG_VAUX18_AUXADC_ACK_EN_MASK),
		(PMIC_RG_VAUX18_AUXADC_ACK_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vbif28_auxadc_stb_swen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VBIF28_AUXADC_STB_SWEN_MASK),
		(PMIC_RG_VBIF28_AUXADC_STB_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbif28_auxadc_stb_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VBIF28_AUXADC_STB_EN_MASK),
		(PMIC_RG_VBIF28_AUXADC_STB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vbif28_auxadc_stb_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_CON),
		(&val),
		(PMIC_RG_VBIF28_AUXADC_STB_EN_MASK),
		(PMIC_RG_VBIF28_AUXADC_STB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vbif28_auxadc_ack_swen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VBIF28_AUXADC_ACK_SWEN_MASK),
		(PMIC_RG_VBIF28_AUXADC_ACK_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbif28_auxadc_ack_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_LDO_CON),
		(val),
		(PMIC_RG_VBIF28_AUXADC_ACK_EN_MASK),
		(PMIC_RG_VBIF28_AUXADC_ACK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vbif28_auxadc_ack_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_CON),
		(&val),
		(PMIC_RG_VBIF28_AUXADC_ACK_EN_MASK),
		(PMIC_RG_VBIF28_AUXADC_ACK_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_auxadc_vaux18_req(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_AUXADC_VAUX18_REQ_MASK),
		(PMIC_DD_AUXADC_VAUX18_REQ_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_vaux18_auxadc_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_VAUX18_AUXADC_STB_MASK),
		(PMIC_DD_VAUX18_AUXADC_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_auxadc_vaux18_pwdb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_AUXADC_VAUX18_PWDB_MASK),
		(PMIC_DD_AUXADC_VAUX18_PWDB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_vaux18_auxadc_ack(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_VAUX18_AUXADC_ACK_MASK),
		(PMIC_DD_VAUX18_AUXADC_ACK_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_auxadc_vbif28_req(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_AUXADC_VBIF28_REQ_MASK),
		(PMIC_DD_AUXADC_VBIF28_REQ_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_vbif28_auxadc_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_VBIF28_AUXADC_STB_MASK),
		(PMIC_DD_VBIF28_AUXADC_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_auxadc_vbif28_pwdb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_AUXADC_VBIF28_PWDB_MASK),
		(PMIC_DD_AUXADC_VBIF28_PWDB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_dd_vbif28_auxadc_ack(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_HK_TOP_LDO_STATUS),
		(&val),
		(PMIC_DD_VBIF28_AUXADC_ACK_MASK),
		(PMIC_DD_VBIF28_AUXADC_ACK_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_hk_auxadc_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_HK_TOP_WKEY),
		(val),
		(PMIC_HK_AUXADC_KEY_MASK),
		(PMIC_HK_AUXADC_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_ID),
		(&val),
		(PMIC_AUXADC_ANA_ID_MASK),
		(PMIC_AUXADC_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DSN_CBS_MASK),
		(PMIC_AUXADC_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DSN_BIX_MASK),
		(PMIC_AUXADC_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_aux_rsv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON0),
		(val),
		(PMIC_RG_AUX_RSV_MASK),
		(PMIC_RG_AUX_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_cali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_AUXADC_CALI_MASK),
		(PMIC_RG_AUXADC_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbuf_byp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_VBUF_BYP_MASK),
		(PMIC_RG_VBUF_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbuf_calen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_VBUF_CALEN_MASK),
		(PMIC_RG_VBUF_CALEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vbuf_exten(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_VBUF_EXTEN_MASK),
		(PMIC_RG_VBUF_EXTEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_rng_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_AUXADC_RNG_EN_MASK),
		(PMIC_RG_AUXADC_RNG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_auxadc_rng_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ANA_CON1),
		(&val),
		(PMIC_RG_AUXADC_RNG_EN_MASK),
		(PMIC_RG_AUXADC_RNG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_auxadc_noise_res(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_AUXADC_NOISE_RES_MASK),
		(PMIC_RG_AUXADC_NOISE_RES_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_auxadc_pullh_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ANA_CON1),
		(val),
		(PMIC_RG_AUXADC_PULLH_EN_MASK),
		(PMIC_RG_AUXADC_PULLH_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_auxadc_pullh_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ANA_CON1),
		(&val),
		(PMIC_RG_AUXADC_PULLH_EN_MASK),
		(PMIC_RG_AUXADC_PULLH_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_efuse_auxadc_ndif_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ELR_0),
		(val),
		(PMIC_RG_EFUSE_AUXADC_NDIF_EN_MASK),
		(PMIC_RG_EFUSE_AUXADC_NDIF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_efuse_auxadc_ndif_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ELR_0),
		(&val),
		(PMIC_RG_EFUSE_AUXADC_NDIF_EN_MASK),
		(PMIC_RG_EFUSE_AUXADC_NDIF_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_1_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_1_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_1_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_1_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC0),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH0_MASK),
		(PMIC_AUXADC_ADC_OUT_CH0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC0),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH0_MASK),
		(PMIC_AUXADC_ADC_RDY_CH0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC1),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH1_MASK),
		(PMIC_AUXADC_ADC_OUT_CH1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC1),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH1_MASK),
		(PMIC_AUXADC_ADC_RDY_CH1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC2),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH2_MASK),
		(PMIC_AUXADC_ADC_OUT_CH2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC2),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH2_MASK),
		(PMIC_AUXADC_ADC_RDY_CH2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC3),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH3_MASK),
		(PMIC_AUXADC_ADC_OUT_CH3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC3),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH3_MASK),
		(PMIC_AUXADC_ADC_RDY_CH3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC4),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch4(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC4),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC5),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH5_MASK),
		(PMIC_AUXADC_ADC_OUT_CH5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch5(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC5),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH5_MASK),
		(PMIC_AUXADC_ADC_RDY_CH5_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch6(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC6),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH6_MASK),
		(PMIC_AUXADC_ADC_OUT_CH6_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch6(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC6),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH6_MASK),
		(PMIC_AUXADC_ADC_RDY_CH6_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch7(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC7),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch7(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC7),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch8(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC8),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH8_MASK),
		(PMIC_AUXADC_ADC_OUT_CH8_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch8(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC8),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH8_MASK),
		(PMIC_AUXADC_ADC_RDY_CH8_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch9(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC9),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH9_MASK),
		(PMIC_AUXADC_ADC_OUT_CH9_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch9(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC9),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH9_MASK),
		(PMIC_AUXADC_ADC_RDY_CH9_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch10(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC10),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH10_MASK),
		(PMIC_AUXADC_ADC_OUT_CH10_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch10(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC10),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH10_MASK),
		(PMIC_AUXADC_ADC_RDY_CH10_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch11(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC11),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH11_MASK),
		(PMIC_AUXADC_ADC_OUT_CH11_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch11(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC11),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH11_MASK),
		(PMIC_AUXADC_ADC_RDY_CH11_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch12_15(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC12),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH12_15_MASK),
		(PMIC_AUXADC_ADC_OUT_CH12_15_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch12_15(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC12),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH12_15_MASK),
		(PMIC_AUXADC_ADC_RDY_CH12_15_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch7_by_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC15),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch7_by_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC15),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch7_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC16),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch7_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC16),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch7_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC17),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch7_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC17),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch4_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC18),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch4_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC18),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_pwron_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC19),
		(&val),
		(PMIC_AUXADC_ADC_OUT_PWRON_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_PWRON_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_pwron_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC19),
		(&val),
		(PMIC_AUXADC_ADC_RDY_PWRON_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_PWRON_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_wakeup_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC20),
		(&val),
		(PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_wakeup_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC20),
		(&val),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch0_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC21),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch0_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC21),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch0_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC22),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch0_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC22),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch1_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC23),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch1_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC23),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch1_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC24),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch1_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC24),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_fgadc_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC26),
		(&val),
		(PMIC_AUXADC_ADC_OUT_FGADC_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_FGADC_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_fgadc_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC26),
		(&val),
		(PMIC_AUXADC_ADC_RDY_FGADC_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_FGADC_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_bat_plugin_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC27),
		(&val),
		(PMIC_AUXADC_ADC_OUT_BAT_PLUGIN_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_BAT_PLUGIN_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_bat_plugin_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC27),
		(&val),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_raw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC30),
		(&val),
		(PMIC_AUXADC_ADC_OUT_RAW_MASK),
		(PMIC_AUXADC_ADC_OUT_RAW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_dcxo_by_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC32),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_dcxo_by_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC32),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_dcxo_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC33),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_dcxo_by_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC33),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_dcxo_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC34),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_dcxo_by_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC34),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_batid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC37),
		(&val),
		(PMIC_AUXADC_ADC_OUT_BATID_MASK),
		(PMIC_AUXADC_ADC_OUT_BATID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_batid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC37),
		(&val),
		(PMIC_AUXADC_ADC_RDY_BATID_MASK),
		(PMIC_AUXADC_ADC_RDY_BATID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch4_by_thr1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC38),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR1_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch4_by_thr1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC38),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR1_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch4_by_thr2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC39),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR2_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch4_by_thr2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC39),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR2_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_ch4_by_thr3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC40),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR3_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_ch4_by_thr3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_ADC40),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR3_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA0),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_wakeup(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA0),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_dcxo_gps_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_dcxo_gps_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_dcxo_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_share(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_SHARE_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_SHARE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_fgadc_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_FGADC_PCHR_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_FGADC_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_gps_ap(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_gps_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_gps(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_thr_md(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR_MD_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR_MD_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_bat_plugin_pchr(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_PLUGIN_PCHR_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_PLUGIN_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_batid(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_BATID_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_BATID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_pwron(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_PWRON_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_PWRON_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_thr1(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR1_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR1_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_thr2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR2_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_thr3(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR3_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR3_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_2_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_2_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_2_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_2_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_2_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_2_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_2_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_2_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_2_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_2_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_3_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_3_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_3_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_3_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_3_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_3_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_3_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_3_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_3_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_ck_on_extd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_ON_EXTD_MASK),
		(PMIC_AUXADC_CK_ON_EXTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_srclken_src_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_SRCLKEN_SRC_SEL_MASK),
		(PMIC_AUXADC_SRCLKEN_SRC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_pwdb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_ADC_PWDB_MASK),
		(PMIC_AUXADC_ADC_PWDB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_pwdb_swctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_ADC_PWDB_SWCTRL_MASK),
		(PMIC_AUXADC_ADC_PWDB_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_strup_ck_on_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_STRUP_CK_ON_ENB_MASK),
		(PMIC_AUXADC_STRUP_CK_ON_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_srclken_ck_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_SRCLKEN_CK_EN_MASK),
		(PMIC_AUXADC_SRCLKEN_CK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ck_aon_gps(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_AON_GPS_MASK),
		(PMIC_AUXADC_CK_AON_GPS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ck_aon_md(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_AON_MD_MASK),
		(PMIC_AUXADC_CK_AON_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ck_aon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_AON_MASK),
		(PMIC_AUXADC_CK_AON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_small(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON1),
		(val),
		(PMIC_AUXADC_AVG_NUM_SMALL_MASK),
		(PMIC_AUXADC_AVG_NUM_SMALL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_large(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON1),
		(val),
		(PMIC_AUXADC_AVG_NUM_LARGE_MASK),
		(PMIC_AUXADC_AVG_NUM_LARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON1),
		(val),
		(PMIC_AUXADC_SPL_NUM_MASK),
		(PMIC_AUXADC_SPL_NUM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_sel_share(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_SHARE_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_SHARE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_sel_lbat(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_LBAT_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_LBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_sel_bat_temp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_BAT_TEMP_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_BAT_TEMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_sel_wakeup(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_large(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON3),
		(val),
		(PMIC_AUXADC_SPL_NUM_LARGE_MASK),
		(PMIC_AUXADC_SPL_NUM_LARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sleep(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON4),
		(val),
		(PMIC_AUXADC_SPL_NUM_SLEEP_MASK),
		(PMIC_AUXADC_SPL_NUM_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sleep_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON4),
		(val),
		(PMIC_AUXADC_SPL_NUM_SLEEP_SEL_MASK),
		(PMIC_AUXADC_SPL_NUM_SLEEP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sel_share(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_SHARE_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_SHARE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sel_lbat(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_LBAT_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_LBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sel_bat_temp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_BAT_TEMP_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_BAT_TEMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_sel_wakeup(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_ch0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON6),
		(val),
		(PMIC_AUXADC_SPL_NUM_CH0_MASK),
		(PMIC_AUXADC_SPL_NUM_CH0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_ch3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON7),
		(val),
		(PMIC_AUXADC_SPL_NUM_CH3_MASK),
		(PMIC_AUXADC_SPL_NUM_CH3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_spl_num_ch7(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON8),
		(val),
		(PMIC_AUXADC_SPL_NUM_CH7_MASK),
		(PMIC_AUXADC_SPL_NUM_CH7_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_lbat(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_LBAT_MASK),
		(PMIC_AUXADC_AVG_NUM_LBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_ch7(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH7_MASK),
		(PMIC_AUXADC_AVG_NUM_CH7_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_ch3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH3_MASK),
		(PMIC_AUXADC_AVG_NUM_CH3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_ch0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH0_MASK),
		(PMIC_AUXADC_AVG_NUM_CH0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_hpc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON10),
		(val),
		(PMIC_AUXADC_AVG_NUM_HPC_MASK),
		(PMIC_AUXADC_AVG_NUM_HPC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_dcxo(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON10),
		(val),
		(PMIC_AUXADC_AVG_NUM_DCXO_MASK),
		(PMIC_AUXADC_AVG_NUM_DCXO_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_ch7_wakeup(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON10),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH7_WAKEUP_MASK),
		(PMIC_AUXADC_AVG_NUM_CH7_WAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_avg_num_btmp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON10),
		(val),
		(PMIC_AUXADC_AVG_NUM_BTMP_MASK),
		(PMIC_AUXADC_AVG_NUM_BTMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch0_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH0_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH0_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch1_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH1_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch2_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH2_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch3_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH3_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH3_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch4_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH4_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH4_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch5_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH5_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH5_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch6_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH6_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH6_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch7_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH7_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH7_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch8_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH8_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH8_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch9_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH9_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH9_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch10_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH10_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH10_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_trim_ch11_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH11_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH11_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_2s_comp_enb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_ADC_2S_COMP_ENB_MASK),
		(PMIC_AUXADC_ADC_2S_COMP_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_trim_comp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_ADC_TRIM_COMP_MASK),
		(PMIC_AUXADC_ADC_TRIM_COMP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_rng_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_RNG_EN_MASK),
		(PMIC_AUXADC_RNG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_test_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_TEST_MODE_MASK),
		(PMIC_AUXADC_TEST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bit_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_BIT_SEL_MASK),
		(PMIC_AUXADC_BIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_start_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_START_SW_MASK),
		(PMIC_AUXADC_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_start_swctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_START_SWCTRL_MASK),
		(PMIC_AUXADC_START_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ts_vbe_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_TS_VBE_SEL_MASK),
		(PMIC_AUXADC_TS_VBE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ts_vbe_sel_swctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_TS_VBE_SEL_SWCTRL_MASK),
		(PMIC_AUXADC_TS_VBE_SEL_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_vbuf_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_VBUF_EN_MASK),
		(PMIC_AUXADC_VBUF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_vbuf_en_swctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_VBUF_EN_SWCTRL_MASK),
		(PMIC_AUXADC_VBUF_EN_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_out_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_OUT_SEL_MASK),
		(PMIC_AUXADC_OUT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_da_dac(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON14),
		(val),
		(PMIC_AUXADC_DA_DAC_MASK),
		(PMIC_AUXADC_DA_DAC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_da_dac_swctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON14),
		(val),
		(PMIC_AUXADC_DA_DAC_SWCTRL_MASK),
		(PMIC_AUXADC_DA_DAC_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_ad_auxadc_comp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_CON14),
		(&val),
		(PMIC_AD_AUXADC_COMP_MASK),
		(PMIC_AD_AUXADC_COMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_adcin_vsen_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VSEN_EN_MASK),
		(PMIC_AUXADC_ADCIN_VSEN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adcin_vbat_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VBAT_EN_MASK),
		(PMIC_AUXADC_ADCIN_VBAT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adcin_vsen_mux_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_AUXADC_ADCIN_VSEN_MUX_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adcin_vsen_ext_baton_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_MASK),
		(PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adcin_chr_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_CHR_EN_MASK),
		(PMIC_AUXADC_ADCIN_CHR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adcin_baton_tdet_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_BATON_TDET_EN_MASK),
		(PMIC_AUXADC_ADCIN_BATON_TDET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_accdet_anaswctrl_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ACCDET_ANASWCTRL_EN_MASK),
		(PMIC_AUXADC_ACCDET_ANASWCTRL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_xo_thadc_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_XO_THADC_EN_MASK),
		(PMIC_AUXADC_XO_THADC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adcin_batid_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_BATID_SW_EN_MASK),
		(PMIC_AUXADC_ADCIN_BATID_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_vxo22_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_VXO22_EN_MASK),
		(PMIC_AUXADC_VXO22_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dig0_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_DIG0_RSV0_MASK),
		(PMIC_AUXADC_DIG0_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_chsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_CHSEL_MASK),
		(PMIC_AUXADC_CHSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_swctrl_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_SWCTRL_EN_MASK),
		(PMIC_AUXADC_SWCTRL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_source_lbat_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_SOURCE_LBAT_SEL_MASK),
		(PMIC_AUXADC_SOURCE_LBAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_source_lbat2_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_SOURCE_LBAT2_SEL_MASK),
		(PMIC_AUXADC_SOURCE_LBAT2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_start_extd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_START_EXTD_MASK),
		(PMIC_AUXADC_START_EXTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dac_extd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_DAC_EXTD_MASK),
		(PMIC_AUXADC_DAC_EXTD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dac_extd_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_DAC_EXTD_EN_MASK),
		(PMIC_AUXADC_DAC_EXTD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dig0_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON17),
		(val),
		(PMIC_AUXADC_DIG0_RSV1_MASK),
		(PMIC_AUXADC_DIG0_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_start_shade_num(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON18),
		(val),
		(PMIC_AUXADC_START_SHADE_NUM_MASK),
		(PMIC_AUXADC_START_SHADE_NUM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_start_shade_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON18),
		(val),
		(PMIC_AUXADC_START_SHADE_EN_MASK),
		(PMIC_AUXADC_START_SHADE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_start_shade_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON18),
		(val),
		(PMIC_AUXADC_START_SHADE_SEL_MASK),
		(PMIC_AUXADC_START_SHADE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_rdy_wakeup_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_rdy_fgadc_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_FGADC_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_FGADC_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_rdy_bat_plugin_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_adc_rdy_pwron_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_PWRON_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_PWRON_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_data_reuse_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ch0_data_reuse_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH0_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_CH0_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ch1_data_reuse_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH1_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_CH1_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_data_reuse_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DCXO_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_DCXO_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_data_reuse_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ch0_data_reuse_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH0_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_CH0_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_ch1_data_reuse_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH1_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_CH1_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_data_reuse_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DCXO_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_DCXO_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_state_cs_s(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_CON21),
		(&val),
		(PMIC_AUXADC_STATE_CS_S_MASK),
		(PMIC_AUXADC_STATE_CS_S_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_autorpt_prd(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_AUTORPT0),
		(val),
		(PMIC_AUXADC_AUTORPT_PRD_MASK),
		(PMIC_AUXADC_AUTORPT_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_autorpt_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_AUTORPT0),
		(val),
		(PMIC_AUXADC_AUTORPT_EN_MASK),
		(PMIC_AUXADC_AUTORPT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_accdet_auto_spl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_AUTO_SPL_MASK),
		(PMIC_AUXADC_ACCDET_AUTO_SPL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_accdet_auto_rqst_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_MASK),
		(PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_accdet_dig1_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_DIG1_RSV0_MASK),
		(PMIC_AUXADC_ACCDET_DIG1_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_accdet_dig0_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_DIG0_RSV0_MASK),
		(PMIC_AUXADC_ACCDET_DIG0_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_fgadc_start_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_FGADC_START_SW_MASK),
		(PMIC_AUXADC_FGADC_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_fgadc_start_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_FGADC_START_SEL_MASK),
		(PMIC_AUXADC_FGADC_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_imp_fgadc_r_sw(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_IMP_FGADC_R_SW_MASK),
		(PMIC_AUXADC_IMP_FGADC_R_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_imp_fgadc_r_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_IMP_FGADC_R_SEL_MASK),
		(PMIC_AUXADC_IMP_FGADC_R_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_plugin_start_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_BAT_PLUGIN_START_SW_MASK),
		(PMIC_AUXADC_BAT_PLUGIN_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_plugin_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_BAT_PLUGIN_START_SEL_MASK),
		(PMIC_AUXADC_BAT_PLUGIN_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dbg_dig0_rsv2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_DBG_DIG0_RSV2_MASK),
		(PMIC_AUXADC_DBG_DIG0_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dbg_dig1_rsv2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_DBG_DIG1_RSV2_MASK),
		(PMIC_AUXADC_DBG_DIG1_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_EN_MASK),
		(PMIC_AUXADC_NAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_clr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_CLR_MASK),
		(PMIC_AUXADC_NAG_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_vbat1_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_VBAT1_SEL_MASK),
		(PMIC_AUXADC_NAG_VBAT1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_prd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_PRD_SEL_MASK),
		(PMIC_AUXADC_NAG_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_irq_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_IRQ_EN_MASK),
		(PMIC_AUXADC_NAG_IRQ_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_nag_c_dltv_irq(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_0),
		(&val),
		(PMIC_AUXADC_NAG_C_DLTV_IRQ_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_IRQ_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_nag_zcv(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_1),
		(val),
		(PMIC_AUXADC_NAG_ZCV_MASK),
		(PMIC_AUXADC_NAG_ZCV_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_c_dltv_th_15_0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_2),
		(val),
		(PMIC_AUXADC_NAG_C_DLTV_TH_15_0_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_TH_15_0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_c_dltv_th_26_16(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_3),
		(val),
		(PMIC_AUXADC_NAG_C_DLTV_TH_26_16_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_TH_26_16_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_nag_cnt_15_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_4),
		(&val),
		(PMIC_AUXADC_NAG_CNT_15_0_MASK),
		(PMIC_AUXADC_NAG_CNT_15_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_nag_cnt_25_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_5),
		(&val),
		(PMIC_AUXADC_NAG_CNT_25_16_MASK),
		(PMIC_AUXADC_NAG_CNT_25_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_nag_dltv(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_6),
		(&val),
		(PMIC_AUXADC_NAG_DLTV_MASK),
		(PMIC_AUXADC_NAG_DLTV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_nag_c_dltv_15_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_7),
		(&val),
		(PMIC_AUXADC_NAG_C_DLTV_15_0_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_15_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_nag_c_dltv_26_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_8),
		(&val),
		(PMIC_AUXADC_NAG_C_DLTV_26_16_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_26_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_nag_auxadc_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_9),
		(&val),
		(PMIC_AUXADC_NAG_AUXADC_START_MASK),
		(PMIC_AUXADC_NAG_AUXADC_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_nag_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_9),
		(&val),
		(PMIC_AUXADC_NAG_STATE_MASK),
		(PMIC_AUXADC_NAG_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_nag(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_10),
		(&val),
		(PMIC_AUXADC_ADC_OUT_NAG_MASK),
		(PMIC_AUXADC_ADC_OUT_NAG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_nag(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_10),
		(&val),
		(PMIC_AUXADC_ADC_RDY_NAG_MASK),
		(PMIC_AUXADC_ADC_RDY_NAG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_nag_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_11),
		(val),
		(PMIC_AUXADC_NAG_CK_SW_EN_MASK),
		(PMIC_AUXADC_NAG_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_nag_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_NAG_11),
		(val),
		(PMIC_AUXADC_NAG_CK_SW_MODE_MASK),
		(PMIC_AUXADC_NAG_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_nag(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_NAG_11),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_NAG_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_NAG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_efuse_gain_ch7_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR0),
		(val),
		(PMIC_EFUSE_GAIN_CH7_TRIM_MASK),
		(PMIC_EFUSE_GAIN_CH7_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_efuse_offset_ch7_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR1),
		(val),
		(PMIC_EFUSE_OFFSET_CH7_TRIM_MASK),
		(PMIC_EFUSE_OFFSET_CH7_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_efuse_gain_ch4_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR2),
		(val),
		(PMIC_EFUSE_GAIN_CH4_TRIM_MASK),
		(PMIC_EFUSE_GAIN_CH4_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_efuse_offset_ch4_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR3),
		(val),
		(PMIC_EFUSE_OFFSET_CH4_TRIM_MASK),
		(PMIC_EFUSE_OFFSET_CH4_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_efuse_gain_ch0_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR4),
		(val),
		(PMIC_EFUSE_GAIN_CH0_TRIM_MASK),
		(PMIC_EFUSE_GAIN_CH0_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_efuse_offset_ch0_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR5),
		(val),
		(PMIC_EFUSE_OFFSET_CH0_TRIM_MASK),
		(PMIC_EFUSE_OFFSET_CH0_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_sw_gain_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR6),
		(val),
		(PMIC_AUXADC_SW_GAIN_TRIM_MASK),
		(PMIC_AUXADC_SW_GAIN_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_sw_offset_trim(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR7),
		(val),
		(PMIC_AUXADC_SW_OFFSET_TRIM_MASK),
		(PMIC_AUXADC_SW_OFFSET_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_id(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_ID_MASK),
		(PMIC_AUXADC_EFUSE_ID_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_o_slope(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_O_SLOPE_MASK),
		(PMIC_AUXADC_EFUSE_O_SLOPE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_o_slope_sign(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_O_SLOPE_SIGN_MASK),
		(PMIC_AUXADC_EFUSE_O_SLOPE_SIGN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_degc_cali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_DEGC_CALI_MASK),
		(PMIC_AUXADC_EFUSE_DEGC_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_adc_cali_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_ADC_CALI_EN_MASK),
		(PMIC_AUXADC_EFUSE_ADC_CALI_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_RSV0_MASK),
		(PMIC_AUXADC_EFUSE_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_o_vts(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR9),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv1(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR9),
		(val),
		(PMIC_AUXADC_EFUSE_RSV1_MASK),
		(PMIC_AUXADC_EFUSE_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_o_vts_2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR10),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_2_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv2(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR10),
		(val),
		(PMIC_AUXADC_EFUSE_RSV2_MASK),
		(PMIC_AUXADC_EFUSE_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_o_vts_3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR11),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_3_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv3(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR11),
		(val),
		(PMIC_AUXADC_EFUSE_RSV3_MASK),
		(PMIC_AUXADC_EFUSE_RSV3_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_o_vts_4(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR12),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_4_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_4_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv4(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR12),
		(val),
		(PMIC_AUXADC_EFUSE_RSV4_MASK),
		(PMIC_AUXADC_EFUSE_RSV4_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_gain_aux(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR13),
		(val),
		(PMIC_AUXADC_EFUSE_GAIN_AUX_MASK),
		(PMIC_AUXADC_EFUSE_GAIN_AUX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv5(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR13),
		(val),
		(PMIC_AUXADC_EFUSE_RSV5_MASK),
		(PMIC_AUXADC_EFUSE_RSV5_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_gain_bgrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR14),
		(val),
		(PMIC_AUXADC_EFUSE_GAIN_BGRL_MASK),
		(PMIC_AUXADC_EFUSE_GAIN_BGRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_gain_bgrh(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR14),
		(val),
		(PMIC_AUXADC_EFUSE_GAIN_BGRH_MASK),
		(PMIC_AUXADC_EFUSE_GAIN_BGRH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv6(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR14),
		(val),
		(PMIC_AUXADC_EFUSE_RSV6_MASK),
		(PMIC_AUXADC_EFUSE_RSV6_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_cali_from_efuse_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_CALI_FROM_EFUSE_EN_MASK),
		(PMIC_AUXADC_EFUSE_CALI_FROM_EFUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_adc_bgrcali_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_ADC_BGRCALI_EN_MASK),
		(PMIC_AUXADC_EFUSE_ADC_BGRCALI_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_adc_auxcali_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_ADC_AUXCALI_EN_MASK),
		(PMIC_AUXADC_EFUSE_ADC_AUXCALI_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_trmpl_cali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_TRMPL_CALI_MASK),
		(PMIC_AUXADC_EFUSE_TRMPL_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_trmph_cali(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_TRMPH_CALI_MASK),
		(PMIC_AUXADC_EFUSE_TRMPH_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_sign_bgrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_SIGN_BGRL_MASK),
		(PMIC_AUXADC_EFUSE_SIGN_BGRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_sign_bgrh(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_SIGN_BGRH_MASK),
		(PMIC_AUXADC_EFUSE_SIGN_BGRH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_sign_aux(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_SIGN_AUX_MASK),
		(PMIC_AUXADC_EFUSE_SIGN_AUX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_rsv7(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR15),
		(val),
		(PMIC_AUXADC_EFUSE_RSV7_MASK),
		(PMIC_AUXADC_EFUSE_RSV7_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_vbg12(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR16),
		(val),
		(PMIC_AUXADC_EFUSE_VBG12_MASK),
		(PMIC_AUXADC_EFUSE_VBG12_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_efuse_vaux18(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DIG_3_ELR16),
		(val),
		(PMIC_AUXADC_EFUSE_VAUX18_MASK),
		(PMIC_AUXADC_EFUSE_VAUX18_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_ana_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_4_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_4_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dig_id(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_4_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_4_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_ana_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_ana_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dig_minor_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dig_major_rev(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dsn_cbs(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_4_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dsn_bix(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_4_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dsn_esp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_4_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_dig_4_dsn_fpi(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DIG_4_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_4_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_imp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_IMP0),
		(val),
		(PMIC_AUXADC_IMP_EN_MASK),
		(PMIC_AUXADC_IMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_imp_prd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_IMP1),
		(val),
		(PMIC_AUXADC_IMP_PRD_SEL_MASK),
		(PMIC_AUXADC_IMP_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_imp_cnt_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_IMP1),
		(val),
		(PMIC_AUXADC_IMP_CNT_SEL_MASK),
		(PMIC_AUXADC_IMP_CNT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_impedance_chsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_IMP1),
		(val),
		(PMIC_AUXADC_IMPEDANCE_CHSEL_MASK),
		(PMIC_AUXADC_IMPEDANCE_CHSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_impedance_irq_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP1),
		(&val),
		(PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_MASK),
		(PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_imp_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP2),
		(&val),
		(PMIC_AUXADC_IMP_START_MASK),
		(PMIC_AUXADC_IMP_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_imp_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP2),
		(&val),
		(PMIC_AUXADC_IMP_STATE_MASK),
		(PMIC_AUXADC_IMP_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_imp_count(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP2),
		(&val),
		(PMIC_AUXADC_IMP_COUNT_MASK),
		(PMIC_AUXADC_IMP_COUNT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_imp_fgadc_r_s(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP2),
		(&val),
		(PMIC_AUXADC_IMP_FGADC_R_S_MASK),
		(PMIC_AUXADC_IMP_FGADC_R_S_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_fgadc_auxadc_imp_r_done_s(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP2),
		(&val),
		(PMIC_FGADC_AUXADC_IMP_R_DONE_S_MASK),
		(PMIC_FGADC_AUXADC_IMP_R_DONE_S_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_imp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP3),
		(&val),
		(PMIC_AUXADC_ADC_OUT_IMP_MASK),
		(PMIC_AUXADC_ADC_OUT_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_imp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP3),
		(&val),
		(PMIC_AUXADC_ADC_RDY_IMP_MASK),
		(PMIC_AUXADC_ADC_RDY_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_imp_avg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP4),
		(&val),
		(PMIC_AUXADC_ADC_OUT_IMP_AVG_MASK),
		(PMIC_AUXADC_ADC_OUT_IMP_AVG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_imp_avg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP4),
		(&val),
		(PMIC_AUXADC_ADC_RDY_IMP_AVG_MASK),
		(PMIC_AUXADC_ADC_RDY_IMP_AVG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_imp_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_IMP5),
		(val),
		(PMIC_AUXADC_IMP_CK_SW_EN_MASK),
		(PMIC_AUXADC_IMP_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_imp_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_IMP5),
		(val),
		(PMIC_AUXADC_IMP_CK_SW_MODE_MASK),
		(PMIC_AUXADC_IMP_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_imp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_IMP5),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_IMP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_lbat_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT0),
		(val),
		(PMIC_AUXADC_LBAT_EN_MASK),
		(PMIC_AUXADC_LBAT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_det_prd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT1),
		(val),
		(PMIC_AUXADC_LBAT_DET_PRD_SEL_MASK),
		(PMIC_AUXADC_LBAT_DET_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_debt_max_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT1),
		(val),
		(PMIC_AUXADC_LBAT_DEBT_MAX_SEL_MASK),
		(PMIC_AUXADC_LBAT_DEBT_MAX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_debt_min_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT1),
		(val),
		(PMIC_AUXADC_LBAT_DEBT_MIN_SEL_MASK),
		(PMIC_AUXADC_LBAT_DEBT_MIN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_volt_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2),
		(val),
		(PMIC_AUXADC_LBAT_VOLT_MAX_MASK),
		(PMIC_AUXADC_LBAT_VOLT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_irq_en_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2),
		(val),
		(PMIC_AUXADC_LBAT_IRQ_EN_MAX_MASK),
		(PMIC_AUXADC_LBAT_IRQ_EN_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_det_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2),
		(val),
		(PMIC_AUXADC_LBAT_DET_MAX_MASK),
		(PMIC_AUXADC_LBAT_DET_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_lbat_max_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2),
		(&val),
		(PMIC_AUXADC_LBAT_MAX_IRQ_B_MASK),
		(PMIC_AUXADC_LBAT_MAX_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_lbat_volt_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT3),
		(val),
		(PMIC_AUXADC_LBAT_VOLT_MIN_MASK),
		(PMIC_AUXADC_LBAT_VOLT_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_irq_en_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT3),
		(val),
		(PMIC_AUXADC_LBAT_IRQ_EN_MIN_MASK),
		(PMIC_AUXADC_LBAT_IRQ_EN_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_det_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT3),
		(val),
		(PMIC_AUXADC_LBAT_DET_MIN_MASK),
		(PMIC_AUXADC_LBAT_DET_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_lbat_min_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT3),
		(&val),
		(PMIC_AUXADC_LBAT_MIN_IRQ_B_MASK),
		(PMIC_AUXADC_LBAT_MIN_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat_debounce_count_max(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT4),
		(&val),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_MASK),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat_debounce_count_min(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT5),
		(&val),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_MASK),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT6),
		(&val),
		(PMIC_AUXADC_LBAT_STATE_MASK),
		(PMIC_AUXADC_LBAT_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat_auxadc_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT6),
		(&val),
		(PMIC_AUXADC_LBAT_AUXADC_START_MASK),
		(PMIC_AUXADC_LBAT_AUXADC_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_lbat(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT7),
		(&val),
		(PMIC_AUXADC_ADC_OUT_LBAT_MASK),
		(PMIC_AUXADC_ADC_OUT_LBAT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_lbat(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT7),
		(&val),
		(PMIC_AUXADC_ADC_RDY_LBAT_MASK),
		(PMIC_AUXADC_ADC_RDY_LBAT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_lbat_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT8),
		(val),
		(PMIC_AUXADC_LBAT_CK_SW_EN_MASK),
		(PMIC_AUXADC_LBAT_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT8),
		(val),
		(PMIC_AUXADC_LBAT_CK_SW_MODE_MASK),
		(PMIC_AUXADC_LBAT_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_lbat(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT8),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_LBAT_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_LBAT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_0),
		(val),
		(PMIC_AUXADC_BAT_TEMP_EN_MASK),
		(PMIC_AUXADC_BAT_TEMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_froze_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_1),
		(val),
		(PMIC_AUXADC_BAT_TEMP_FROZE_EN_MASK),
		(PMIC_AUXADC_BAT_TEMP_FROZE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_det_prd_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_2),
		(val),
		(PMIC_AUXADC_BAT_TEMP_DET_PRD_SEL_MASK),
		(PMIC_AUXADC_BAT_TEMP_DET_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_debt_max_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_2),
		(val),
		(PMIC_AUXADC_BAT_TEMP_DEBT_MAX_SEL_MASK),
		(PMIC_AUXADC_BAT_TEMP_DEBT_MAX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_debt_min_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_2),
		(val),
		(PMIC_AUXADC_BAT_TEMP_DEBT_MIN_SEL_MASK),
		(PMIC_AUXADC_BAT_TEMP_DEBT_MIN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_volt_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_3),
		(val),
		(PMIC_AUXADC_BAT_TEMP_VOLT_MAX_MASK),
		(PMIC_AUXADC_BAT_TEMP_VOLT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_irq_en_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_3),
		(val),
		(PMIC_AUXADC_BAT_TEMP_IRQ_EN_MAX_MASK),
		(PMIC_AUXADC_BAT_TEMP_IRQ_EN_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_det_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_3),
		(val),
		(PMIC_AUXADC_BAT_TEMP_DET_MAX_MASK),
		(PMIC_AUXADC_BAT_TEMP_DET_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_bat_temp_max_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_3),
		(&val),
		(PMIC_AUXADC_BAT_TEMP_MAX_IRQ_B_MASK),
		(PMIC_AUXADC_BAT_TEMP_MAX_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_volt_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_4),
		(val),
		(PMIC_AUXADC_BAT_TEMP_VOLT_MIN_MASK),
		(PMIC_AUXADC_BAT_TEMP_VOLT_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_irq_en_min(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_4),
		(val),
		(PMIC_AUXADC_BAT_TEMP_IRQ_EN_MIN_MASK),
		(PMIC_AUXADC_BAT_TEMP_IRQ_EN_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_det_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_4),
		(val),
		(PMIC_AUXADC_BAT_TEMP_DET_MIN_MASK),
		(PMIC_AUXADC_BAT_TEMP_DET_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_bat_temp_min_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_4),
		(&val),
		(PMIC_AUXADC_BAT_TEMP_MIN_IRQ_B_MASK),
		(PMIC_AUXADC_BAT_TEMP_MIN_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_bat_temp_debounce_count_max(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_5),
		(&val),
		(PMIC_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MAX_MASK),
		(PMIC_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MAX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_bat_temp_debounce_count_min(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_6),
		(&val),
		(PMIC_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MIN_MASK),
		(PMIC_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MIN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_bat_temp_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_7),
		(&val),
		(PMIC_AUXADC_BAT_TEMP_STATE_MASK),
		(PMIC_AUXADC_BAT_TEMP_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_bat_temp_auxadc_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_7),
		(&val),
		(PMIC_AUXADC_BAT_TEMP_AUXADC_START_MASK),
		(PMIC_AUXADC_BAT_TEMP_AUXADC_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_bat_temp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_8),
		(&val),
		(PMIC_AUXADC_ADC_OUT_BAT_TEMP_MASK),
		(PMIC_AUXADC_ADC_OUT_BAT_TEMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_bat_temp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_8),
		(&val),
		(PMIC_AUXADC_ADC_RDY_BAT_TEMP_MASK),
		(PMIC_AUXADC_ADC_RDY_BAT_TEMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_9),
		(val),
		(PMIC_AUXADC_BAT_TEMP_CK_SW_EN_MASK),
		(PMIC_AUXADC_BAT_TEMP_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_bat_temp_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_BAT_TEMP_9),
		(val),
		(PMIC_AUXADC_BAT_TEMP_CK_SW_MODE_MASK),
		(PMIC_AUXADC_BAT_TEMP_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_bat_temp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_BAT_TEMP_9),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_TEMP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_TEMP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_0),
		(val),
		(PMIC_AUXADC_LBAT2_EN_MASK),
		(PMIC_AUXADC_LBAT2_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_det_prd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_1),
		(val),
		(PMIC_AUXADC_LBAT2_DET_PRD_SEL_MASK),
		(PMIC_AUXADC_LBAT2_DET_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_debt_max_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_1),
		(val),
		(PMIC_AUXADC_LBAT2_DEBT_MAX_SEL_MASK),
		(PMIC_AUXADC_LBAT2_DEBT_MAX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_debt_min_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_1),
		(val),
		(PMIC_AUXADC_LBAT2_DEBT_MIN_SEL_MASK),
		(PMIC_AUXADC_LBAT2_DEBT_MIN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_volt_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_2),
		(val),
		(PMIC_AUXADC_LBAT2_VOLT_MAX_MASK),
		(PMIC_AUXADC_LBAT2_VOLT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_irq_en_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_2),
		(val),
		(PMIC_AUXADC_LBAT2_IRQ_EN_MAX_MASK),
		(PMIC_AUXADC_LBAT2_IRQ_EN_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_det_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_2),
		(val),
		(PMIC_AUXADC_LBAT2_DET_MAX_MASK),
		(PMIC_AUXADC_LBAT2_DET_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_lbat2_max_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_2),
		(&val),
		(PMIC_AUXADC_LBAT2_MAX_IRQ_B_MASK),
		(PMIC_AUXADC_LBAT2_MAX_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_volt_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_3),
		(val),
		(PMIC_AUXADC_LBAT2_VOLT_MIN_MASK),
		(PMIC_AUXADC_LBAT2_VOLT_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_irq_en_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_3),
		(val),
		(PMIC_AUXADC_LBAT2_IRQ_EN_MIN_MASK),
		(PMIC_AUXADC_LBAT2_IRQ_EN_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_det_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_3),
		(val),
		(PMIC_AUXADC_LBAT2_DET_MIN_MASK),
		(PMIC_AUXADC_LBAT2_DET_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_lbat2_min_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_3),
		(&val),
		(PMIC_AUXADC_LBAT2_MIN_IRQ_B_MASK),
		(PMIC_AUXADC_LBAT2_MIN_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat2_debounce_count_max(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_4),
		(&val),
		(PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_MASK),
		(PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat2_debounce_count_min(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_5),
		(&val),
		(PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_MASK),
		(PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat2_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_6),
		(&val),
		(PMIC_AUXADC_LBAT2_STATE_MASK),
		(PMIC_AUXADC_LBAT2_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_lbat2_auxadc_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_6),
		(&val),
		(PMIC_AUXADC_LBAT2_AUXADC_START_MASK),
		(PMIC_AUXADC_LBAT2_AUXADC_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_lbat2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_7),
		(&val),
		(PMIC_AUXADC_ADC_OUT_LBAT2_MASK),
		(PMIC_AUXADC_ADC_OUT_LBAT2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_lbat2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_7),
		(&val),
		(PMIC_AUXADC_ADC_RDY_LBAT2_MASK),
		(PMIC_AUXADC_ADC_RDY_LBAT2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_8),
		(val),
		(PMIC_AUXADC_LBAT2_CK_SW_EN_MASK),
		(PMIC_AUXADC_LBAT2_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_lbat2_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_LBAT2_8),
		(val),
		(PMIC_AUXADC_LBAT2_CK_SW_MODE_MASK),
		(PMIC_AUXADC_LBAT2_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_lbat2(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_LBAT2_8),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_LBAT2_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_LBAT2_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_thr_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR0),
		(val),
		(PMIC_AUXADC_THR_EN_MASK),
		(PMIC_AUXADC_THR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_det_prd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR1),
		(val),
		(PMIC_AUXADC_THR_DET_PRD_SEL_MASK),
		(PMIC_AUXADC_THR_DET_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_debt_max_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR1),
		(val),
		(PMIC_AUXADC_THR_DEBT_MAX_SEL_MASK),
		(PMIC_AUXADC_THR_DEBT_MAX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_debt_min_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR1),
		(val),
		(PMIC_AUXADC_THR_DEBT_MIN_SEL_MASK),
		(PMIC_AUXADC_THR_DEBT_MIN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_volt_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR2),
		(val),
		(PMIC_AUXADC_THR_VOLT_MAX_MASK),
		(PMIC_AUXADC_THR_VOLT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_irq_en_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR2),
		(val),
		(PMIC_AUXADC_THR_IRQ_EN_MAX_MASK),
		(PMIC_AUXADC_THR_IRQ_EN_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_det_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR2),
		(val),
		(PMIC_AUXADC_THR_DET_MAX_MASK),
		(PMIC_AUXADC_THR_DET_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_thr_max_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR2),
		(&val),
		(PMIC_AUXADC_THR_MAX_IRQ_B_MASK),
		(PMIC_AUXADC_THR_MAX_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_thr_volt_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR3),
		(val),
		(PMIC_AUXADC_THR_VOLT_MIN_MASK),
		(PMIC_AUXADC_THR_VOLT_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_irq_en_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR3),
		(val),
		(PMIC_AUXADC_THR_IRQ_EN_MIN_MASK),
		(PMIC_AUXADC_THR_IRQ_EN_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_det_min(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR3),
		(val),
		(PMIC_AUXADC_THR_DET_MIN_MASK),
		(PMIC_AUXADC_THR_DET_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_thr_min_irq_b(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR3),
		(&val),
		(PMIC_AUXADC_THR_MIN_IRQ_B_MASK),
		(PMIC_AUXADC_THR_MIN_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_thr_debounce_count_max(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR4),
		(&val),
		(PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX_MASK),
		(PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_thr_debounce_count_min(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR5),
		(&val),
		(PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN_MASK),
		(PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_thr_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR6),
		(&val),
		(PMIC_AUXADC_THR_STATE_MASK),
		(PMIC_AUXADC_THR_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_thr_auxadc_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR6),
		(&val),
		(PMIC_AUXADC_THR_AUXADC_START_MASK),
		(PMIC_AUXADC_THR_AUXADC_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_thr_hw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR7),
		(&val),
		(PMIC_AUXADC_ADC_OUT_THR_HW_MASK),
		(PMIC_AUXADC_ADC_OUT_THR_HW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_thr_hw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR7),
		(&val),
		(PMIC_AUXADC_ADC_RDY_THR_HW_MASK),
		(PMIC_AUXADC_ADC_RDY_THR_HW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_thr_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR8),
		(val),
		(PMIC_AUXADC_THR_CK_SW_EN_MASK),
		(PMIC_AUXADC_THR_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_thr_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_THR8),
		(val),
		(PMIC_AUXADC_THR_CK_SW_MODE_MASK),
		(PMIC_AUXADC_THR_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_thr_hw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_THR8),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR_HW_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR_HW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_prd_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_0),
		(val),
		(PMIC_AUXADC_MDRT_DET_PRD_SEL_MASK),
		(PMIC_AUXADC_MDRT_DET_PRD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_0),
		(val),
		(PMIC_AUXADC_MDRT_DET_EN_MASK),
		(PMIC_AUXADC_MDRT_DET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_wkup_start_cnt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_1),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_wkup_start_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_1),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_wkup_start(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_wkup_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_wkup_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_EN_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_det_srclken_ind(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_MASK),
		(PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_mdrt_state(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_MDRT_3),
		(&val),
		(PMIC_AUXADC_MDRT_STATE_MASK),
		(PMIC_AUXADC_MDRT_STATE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_mdrt_start(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_MDRT_3),
		(&val),
		(PMIC_AUXADC_MDRT_START_MASK),
		(PMIC_AUXADC_MDRT_START_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_mdrt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_MDRT_4),
		(&val),
		(PMIC_AUXADC_ADC_OUT_MDRT_MASK),
		(PMIC_AUXADC_ADC_OUT_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_mdrt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_MDRT_4),
		(&val),
		(PMIC_AUXADC_ADC_RDY_MDRT_MASK),
		(PMIC_AUXADC_ADC_RDY_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_5),
		(val),
		(PMIC_AUXADC_MDRT_CK_SW_EN_MASK),
		(PMIC_AUXADC_MDRT_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_mdrt_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_MDRT_5),
		(val),
		(PMIC_AUXADC_MDRT_CK_SW_MODE_MASK),
		(PMIC_AUXADC_MDRT_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_mdrt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_MDRT_5),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_MDRT_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_mdrt_det_wkup_start_cnt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DCXO_MDRT_1),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_mdrt_det_wkup_start_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DCXO_MDRT_1),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_mdrt_det_wkup_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_mdrt_det_wkup_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_dcxo_mdrt_det_wkup_start(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_adc_out_dcxo_mdrt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DCXO_MDRT_3),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_MDRT_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_rdy_dcxo_mdrt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DCXO_MDRT_3),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_MDRT_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_adc_busy_in_dcxo_mdrt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_DCXO_MDRT_4),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_auxadc_rsv_1rsv0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_RSV_1),
		(val),
		(PMIC_AUXADC_RSV_1RSV0_MASK),
		(PMIC_AUXADC_RSV_1RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_auxadc_new_priority_list_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_AUXADC_PRI_NEW),
		(val),
		(PMIC_AUXADC_NEW_PRIORITY_LIST_SEL_MASK),
		(PMIC_AUXADC_NEW_PRIORITY_LIST_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_auxadc_sample_list_15_0(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_SPL_LIST_0),
		(&val),
		(PMIC_AUXADC_SAMPLE_LIST_15_0_MASK),
		(PMIC_AUXADC_SAMPLE_LIST_15_0_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_sample_list_31_16(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_SPL_LIST_1),
		(&val),
		(PMIC_AUXADC_SAMPLE_LIST_31_16_MASK),
		(PMIC_AUXADC_SAMPLE_LIST_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_auxadc_sample_list_33_32(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_AUXADC_SPL_LIST_2),
		(&val),
		(PMIC_AUXADC_SAMPLE_LIST_33_32_MASK),
		(PMIC_AUXADC_SAMPLE_LIST_33_32_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck32k_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK32K_CK_PDN_MASK),
		(PMIC_RG_BUCK32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck1m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK1M_CK_PDN_MASK),
		(PMIC_RG_BUCK1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck26m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK26M_CK_PDN_MASK),
		(PMIC_RG_BUCK26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_ana_2m_ck_pdn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_ANA_2M_CK_PDN_MASK),
		(PMIC_RG_BUCK_VPA_ANA_2M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck32k_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_BUCK32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck1m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK1M_CK_PDN_HWEN_MASK),
		(PMIC_RG_BUCK1M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck26m_ck_pdn_hwen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_BUCK26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_sleep_ctrl_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK_SLEEP_CTRL_MODE_MASK),
		(PMIC_RG_BUCK_SLEEP_CTRL_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_sleep_ctrl_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_CLK_HWEN_CON0),
		(&val),
		(PMIC_RG_BUCK_SLEEP_CTRL_MODE_MASK),
		(PMIC_RG_BUCK_SLEEP_CTRL_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vpu_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VPU_OC_MASK),
		(PMIC_RG_INT_EN_VPU_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vpu_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VPU_OC_MASK),
		(PMIC_RG_INT_EN_VPU_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vcore_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCORE_OC_MASK),
		(PMIC_RG_INT_EN_VCORE_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vcore_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCORE_OC_MASK),
		(PMIC_RG_INT_EN_VCORE_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vgpu11_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VGPU11_OC_MASK),
		(PMIC_RG_INT_EN_VGPU11_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vgpu11_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VGPU11_OC_MASK),
		(PMIC_RG_INT_EN_VGPU11_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vgpu12_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VGPU12_OC_MASK),
		(PMIC_RG_INT_EN_VGPU12_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vgpu12_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VGPU12_OC_MASK),
		(PMIC_RG_INT_EN_VGPU12_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vmodem_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VMODEM_OC_MASK),
		(PMIC_RG_INT_EN_VMODEM_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vmodem_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VMODEM_OC_MASK),
		(PMIC_RG_INT_EN_VMODEM_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vproc1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VPROC1_OC_MASK),
		(PMIC_RG_INT_EN_VPROC1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vproc1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VPROC1_OC_MASK),
		(PMIC_RG_INT_EN_VPROC1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vproc2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VPROC2_OC_MASK),
		(PMIC_RG_INT_EN_VPROC2_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vproc2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VPROC2_OC_MASK),
		(PMIC_RG_INT_EN_VPROC2_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vs1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VS1_OC_MASK),
		(PMIC_RG_INT_EN_VS1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vs1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VS1_OC_MASK),
		(PMIC_RG_INT_EN_VS1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vs2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VS2_OC_MASK),
		(PMIC_RG_INT_EN_VS2_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vs2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VS2_OC_MASK),
		(PMIC_RG_INT_EN_VS2_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_en_vpa_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VPA_OC_MASK),
		(PMIC_RG_INT_EN_VPA_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_en_vpa_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VPA_OC_MASK),
		(PMIC_RG_INT_EN_VPA_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_int_mask_vpu_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VPU_OC_MASK),
		(PMIC_RG_INT_MASK_VPU_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vcore_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCORE_OC_MASK),
		(PMIC_RG_INT_MASK_VCORE_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vgpu11_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VGPU11_OC_MASK),
		(PMIC_RG_INT_MASK_VGPU11_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vgpu12_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VGPU12_OC_MASK),
		(PMIC_RG_INT_MASK_VGPU12_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vmodem_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VMODEM_OC_MASK),
		(PMIC_RG_INT_MASK_VMODEM_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vproc1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VPROC1_OC_MASK),
		(PMIC_RG_INT_MASK_VPROC1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vproc2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VPROC2_OC_MASK),
		(PMIC_RG_INT_MASK_VPROC2_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vs1_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VS1_OC_MASK),
		(PMIC_RG_INT_MASK_VS1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vs2_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VS2_OC_MASK),
		(PMIC_RG_INT_MASK_VS2_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_int_mask_vpa_oc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VPA_OC_MASK),
		(PMIC_RG_INT_MASK_VPA_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vpu_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VPU_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VPU_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vcore_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCORE_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCORE_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vgpu11_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VGPU11_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VGPU11_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vgpu12_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VGPU12_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VGPU12_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vmodem_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VMODEM_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VMODEM_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vproc1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VPROC1_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VPROC1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vproc2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VPROC2_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VPROC2_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vs1_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VS1_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VS1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vs2_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VS2_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VS2_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rg_int_raw_status_vpa_oc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VPA_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VPA_OC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vow_buck_vcore_dvs_done(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_VOW_CON),
		(val),
		(PMIC_RG_VOW_BUCK_VCORE_DVS_DONE_MASK),
		(PMIC_RG_VOW_BUCK_VCORE_DVS_DONE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vow_buck_vcore_dvs_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_VOW_CON),
		(val),
		(PMIC_RG_VOW_BUCK_VCORE_DVS_SW_MODE_MASK),
		(PMIC_RG_VOW_BUCK_VCORE_DVS_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vow_buck_vcore_dvs_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_VOW_CON),
		(&val),
		(PMIC_RG_VOW_BUCK_VCORE_DVS_SW_MODE_MASK),
		(PMIC_RG_VOW_BUCK_VCORE_DVS_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_stb_max(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_STB_CON),
		(val),
		(PMIC_RG_BUCK_STB_MAX_MASK),
		(PMIC_RG_BUCK_STB_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgp2_minfreq_latency_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_VGP2_MINFREQ_CON),
		(val),
		(PMIC_RG_BUCK_VGP2_MINFREQ_LATENCY_MAX_MASK),
		(PMIC_RG_BUCK_VGP2_MINFREQ_LATENCY_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgp2_minfreq_duration_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_VGP2_MINFREQ_CON),
		(val),
		(PMIC_RG_BUCK_VGP2_MINFREQ_DURATION_MAX_MASK),
		(PMIC_RG_BUCK_VGP2_MINFREQ_DURATION_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_minfreq_latency_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_VPA_MINFREQ_CON),
		(val),
		(PMIC_RG_BUCK_VPA_MINFREQ_LATENCY_MAX_MASK),
		(PMIC_RG_BUCK_VPA_MINFREQ_LATENCY_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_minfreq_duration_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_VPA_MINFREQ_CON),
		(val),
		(PMIC_RG_BUCK_VPA_MINFREQ_DURATION_MAX_MASK),
		(PMIC_RG_BUCK_VPA_MINFREQ_DURATION_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_buck_top_write_key(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_KEY_PROT),
		(val),
		(PMIC_BUCK_TOP_WRITE_KEY_MASK),
		(PMIC_BUCK_TOP_WRITE_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_buck_vpu_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG0),
		(&val),
		(PMIC_BUCK_VPU_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VPU_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vcore_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG0),
		(&val),
		(PMIC_BUCK_VCORE_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VCORE_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vgpu11_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG1),
		(&val),
		(PMIC_BUCK_VGPU11_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VGPU11_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vgpu12_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG1),
		(&val),
		(PMIC_BUCK_VGPU12_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VGPU12_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vmodem_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG2),
		(&val),
		(PMIC_BUCK_VMODEM_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VMODEM_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vproc1_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG2),
		(&val),
		(PMIC_BUCK_VPROC1_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VPROC1_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vproc2_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG3),
		(&val),
		(PMIC_BUCK_VPROC2_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VPROC2_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vs1_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG3),
		(&val),
		(PMIC_BUCK_VS1_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VS1_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vs2_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG4),
		(&val),
		(PMIC_BUCK_VS2_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VS2_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_buck_vpa_wdtdbg_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_WDTDBG4),
		(&val),
		(PMIC_BUCK_VPA_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VPA_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VPU_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPU_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPU_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPU_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VGPU11_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VGPU11_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VGPU12_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VGPU12_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VPROC1_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPROC1_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VPROC2_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VS2_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VS2_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VS2_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VS2_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_oc_sdn_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_oc_sdn_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_dcm_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_DCM_MODE_MASK),
		(PMIC_RG_BUCK_DCM_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_dcm_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_DCM_MODE_MASK),
		(PMIC_RG_BUCK_DCM_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VPU_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPU_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VPU_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPU_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VGPU11_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VGPU11_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VGPU11_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VGPU11_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VGPU12_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VGPU12_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VGPU12_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VGPU12_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VPROC1_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPROC1_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VPROC1_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPROC1_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR2),
		(val),
		(PMIC_RG_BUCK_VS2_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VS2_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR2),
		(&val),
		(PMIC_RG_BUCK_VS2_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VS2_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_TOP_ELR2),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_vosel_limit_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_TOP_ELR2),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CON0),
		(val),
		(PMIC_RG_BUCK_VPU_EN_MASK),
		(PMIC_RG_BUCK_VPU_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_CON0),
		(&val),
		(PMIC_RG_BUCK_VPU_EN_MASK),
		(PMIC_RG_BUCK_VPU_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CON0),
		(val),
		(PMIC_RG_BUCK_VPU_LP_MASK),
		(PMIC_RG_BUCK_VPU_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_CON0),
		(&val),
		(PMIC_RG_BUCK_VPU_LP_MASK),
		(PMIC_RG_BUCK_VPU_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_vosel_sleep(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CON1),
		(val),
		(PMIC_RG_BUCK_VPU_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPU_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_CON1),
		(&val),
		(PMIC_RG_BUCK_VPU_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPU_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_selr2r_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VPU_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VPU_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_sfchg_frate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CFG0),
		(val),
		(PMIC_RG_BUCK_VPU_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VPU_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CFG0),
		(val),
		(PMIC_RG_BUCK_VPU_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VPU_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_sfchg_rrate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CFG0),
		(val),
		(PMIC_RG_BUCK_VPU_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VPU_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_CFG0),
		(val),
		(PMIC_RG_BUCK_VPU_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VPU_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPU_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPU_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPU_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw10_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw11_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw12_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw13_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw14_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPU_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPU_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPU_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw0_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw1_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw2_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw3_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw4_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw5_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw6_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw7_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw8_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw9_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw10_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw11_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw12_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw13_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_hw14_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPU_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPU_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPU_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG0),
		(&val),
		(PMIC_DA_VPU_VOSEL_MASK),
		(PMIC_DA_VPU_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG0),
		(&val),
		(PMIC_DA_VPU_VOSEL_GRAY_MASK),
		(PMIC_DA_VPU_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_EN_MASK),
		(PMIC_DA_VPU_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_STB_MASK),
		(PMIC_DA_VPU_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_LOOP_SEL_MASK),
		(PMIC_DA_VPU_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_R2R_PDN_MASK),
		(PMIC_DA_VPU_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_DVS_EN_MASK),
		(PMIC_DA_VPU_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_DVS_DOWN_MASK),
		(PMIC_DA_VPU_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_SSH_MASK),
		(PMIC_DA_VPU_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpu_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_DA_VPU_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VPU_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_DBG1),
		(val),
		(PMIC_RG_BUCK_VPU_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPU_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPU_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPU_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_DBG1),
		(val),
		(PMIC_RG_BUCK_VPU_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPU_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPU_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPU_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpu_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPU_ELR0),
		(val),
		(PMIC_RG_BUCK_VPU_VOSEL_MASK),
		(PMIC_RG_BUCK_VPU_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpu_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPU_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPU_VOSEL_MASK),
		(PMIC_RG_BUCK_VPU_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_EN_MASK),
		(PMIC_RG_BUCK_VCORE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_EN_MASK),
		(PMIC_RG_BUCK_VCORE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_LP_MASK),
		(PMIC_RG_BUCK_VCORE_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_LP_MASK),
		(PMIC_RG_BUCK_VCORE_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_vosel_sleep(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CON1),
		(val),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_CON1),
		(&val),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_selr2r_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VCORE_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VCORE_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sfchg_frate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sfchg_rrate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw10_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw11_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw12_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw13_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw14_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw0_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw1_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw2_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw3_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw4_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw5_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw6_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw7_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw8_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw9_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw10_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw11_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw12_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw13_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_hw14_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VCORE_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG0),
		(&val),
		(PMIC_DA_VCORE_VOSEL_MASK),
		(PMIC_DA_VCORE_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG0),
		(&val),
		(PMIC_DA_VCORE_VOSEL_GRAY_MASK),
		(PMIC_DA_VCORE_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_EN_MASK),
		(PMIC_DA_VCORE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_STB_MASK),
		(PMIC_DA_VCORE_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_LOOP_SEL_MASK),
		(PMIC_DA_VCORE_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_R2R_PDN_MASK),
		(PMIC_DA_VCORE_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_DVS_EN_MASK),
		(PMIC_DA_VCORE_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_DVS_DOWN_MASK),
		(PMIC_DA_VCORE_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_SSH_MASK),
		(PMIC_DA_VCORE_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vcore_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VCORE_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(val),
		(PMIC_RG_BUCK_VCORE_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_RG_BUCK_VCORE_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(val),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sshub_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_SSHUB_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_SSHUB_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SSHUB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_sshub_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_SSHUB_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_SSHUB_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SSHUB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_sshub_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_SSHUB_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_SSHUB_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_SSHUB_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_sshub_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_SSHUB_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_SSHUB_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_SSHUB_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_spi_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_SPI_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_SPI_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SPI_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_spi_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_SPI_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_SPI_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SPI_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_spi_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_SPI_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_SPI_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_SPI_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_spi_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_SPI_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_SPI_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_SPI_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_bt_lp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_BT_LP_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_BT_LP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_BT_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_bt_lp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_BT_LP_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_BT_LP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_BT_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_bt_lp_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_BT_LP_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_BT_LP_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_BT_LP_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_bt_lp_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_BT_LP_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_BT_LP_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_BT_LP_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_track_stall_bypass(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_STALL_TRACK0),
		(val),
		(PMIC_RG_BUCK_VCORE_TRACK_STALL_BYPASS_MASK),
		(PMIC_RG_BUCK_VCORE_TRACK_STALL_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vcore_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VCORE_ELR0),
		(val),
		(PMIC_RG_BUCK_VCORE_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vcore_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VCORE_ELR0),
		(&val),
		(PMIC_RG_BUCK_VCORE_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CON0),
		(val),
		(PMIC_RG_BUCK_VGPU11_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_CON0),
		(&val),
		(PMIC_RG_BUCK_VGPU11_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CON0),
		(val),
		(PMIC_RG_BUCK_VGPU11_LP_MASK),
		(PMIC_RG_BUCK_VGPU11_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_CON0),
		(&val),
		(PMIC_RG_BUCK_VGPU11_LP_MASK),
		(PMIC_RG_BUCK_VGPU11_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CON1),
		(val),
		(PMIC_RG_BUCK_VGPU11_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VGPU11_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_CON1),
		(&val),
		(PMIC_RG_BUCK_VGPU11_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VGPU11_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_selr2r_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VGPU11_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VGPU11_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU11_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VGPU11_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU11_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VGPU11_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU11_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VGPU11_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU11_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VGPU11_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU11_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU11_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw10_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw11_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw12_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw13_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw14_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw0_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw1_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw2_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw3_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw4_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw5_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw6_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw7_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw8_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw9_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw10_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw11_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw12_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw13_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_hw14_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG0),
		(&val),
		(PMIC_DA_VGPU11_VOSEL_MASK),
		(PMIC_DA_VGPU11_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG0),
		(&val),
		(PMIC_DA_VGPU11_VOSEL_GRAY_MASK),
		(PMIC_DA_VGPU11_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_EN_MASK),
		(PMIC_DA_VGPU11_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_STB_MASK),
		(PMIC_DA_VGPU11_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_LOOP_SEL_MASK),
		(PMIC_DA_VGPU11_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_R2R_PDN_MASK),
		(PMIC_DA_VGPU11_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_DVS_EN_MASK),
		(PMIC_DA_VGPU11_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_DVS_DOWN_MASK),
		(PMIC_DA_VGPU11_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_SSH_MASK),
		(PMIC_DA_VGPU11_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu11_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_DA_VGPU11_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VGPU11_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(val),
		(PMIC_RG_BUCK_VGPU11_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_RG_BUCK_VGPU11_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VGPU11_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(val),
		(PMIC_RG_BUCK_VGPU11_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_DBG1),
		(&val),
		(PMIC_RG_BUCK_VGPU11_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VGPU11_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu11_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU11_ELR0),
		(val),
		(PMIC_RG_BUCK_VGPU11_VOSEL_MASK),
		(PMIC_RG_BUCK_VGPU11_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu11_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU11_ELR0),
		(&val),
		(PMIC_RG_BUCK_VGPU11_VOSEL_MASK),
		(PMIC_RG_BUCK_VGPU11_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CON0),
		(val),
		(PMIC_RG_BUCK_VGPU12_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_CON0),
		(&val),
		(PMIC_RG_BUCK_VGPU12_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CON0),
		(val),
		(PMIC_RG_BUCK_VGPU12_LP_MASK),
		(PMIC_RG_BUCK_VGPU12_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_CON0),
		(&val),
		(PMIC_RG_BUCK_VGPU12_LP_MASK),
		(PMIC_RG_BUCK_VGPU12_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CON1),
		(val),
		(PMIC_RG_BUCK_VGPU12_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VGPU12_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_CON1),
		(&val),
		(PMIC_RG_BUCK_VGPU12_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VGPU12_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_selr2r_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VGPU12_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VGPU12_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU12_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VGPU12_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU12_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VGPU12_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU12_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VGPU12_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_CFG0),
		(val),
		(PMIC_RG_BUCK_VGPU12_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VGPU12_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(val),
		(PMIC_RG_BUCK_VGPU12_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VGPU12_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw10_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw11_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw12_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw13_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw14_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw0_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw1_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw2_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw3_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw4_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw5_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw6_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw7_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw8_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw9_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw10_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw11_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw12_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw13_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_hw14_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG0),
		(&val),
		(PMIC_DA_VGPU12_VOSEL_MASK),
		(PMIC_DA_VGPU12_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG0),
		(&val),
		(PMIC_DA_VGPU12_VOSEL_GRAY_MASK),
		(PMIC_DA_VGPU12_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_EN_MASK),
		(PMIC_DA_VGPU12_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_STB_MASK),
		(PMIC_DA_VGPU12_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_LOOP_SEL_MASK),
		(PMIC_DA_VGPU12_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_R2R_PDN_MASK),
		(PMIC_DA_VGPU12_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_DVS_EN_MASK),
		(PMIC_DA_VGPU12_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_DVS_DOWN_MASK),
		(PMIC_DA_VGPU12_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_SSH_MASK),
		(PMIC_DA_VGPU12_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vgpu12_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_DA_VGPU12_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VGPU12_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(val),
		(PMIC_RG_BUCK_VGPU12_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_RG_BUCK_VGPU12_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VGPU12_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(val),
		(PMIC_RG_BUCK_VGPU12_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_DBG1),
		(&val),
		(PMIC_RG_BUCK_VGPU12_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VGPU12_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vgpu12_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VGPU12_ELR0),
		(val),
		(PMIC_RG_BUCK_VGPU12_VOSEL_MASK),
		(PMIC_RG_BUCK_VGPU12_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vgpu12_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VGPU12_ELR0),
		(&val),
		(PMIC_RG_BUCK_VGPU12_VOSEL_MASK),
		(PMIC_RG_BUCK_VGPU12_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CON0),
		(val),
		(PMIC_RG_BUCK_VMODEM_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_CON0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CON0),
		(val),
		(PMIC_RG_BUCK_VMODEM_LP_MASK),
		(PMIC_RG_BUCK_VMODEM_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_CON0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_LP_MASK),
		(PMIC_RG_BUCK_VMODEM_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CON1),
		(val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_CON1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_selr2r_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VMODEM_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VMODEM_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw10_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw11_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw12_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw13_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw14_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw0_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw1_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw2_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw3_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw4_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw5_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw6_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw7_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw8_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw9_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw10_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw11_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw12_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw13_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_hw14_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG0),
		(&val),
		(PMIC_DA_VMODEM_VOSEL_MASK),
		(PMIC_DA_VMODEM_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG0),
		(&val),
		(PMIC_DA_VMODEM_VOSEL_GRAY_MASK),
		(PMIC_DA_VMODEM_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_EN_MASK),
		(PMIC_DA_VMODEM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_STB_MASK),
		(PMIC_DA_VMODEM_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_LOOP_SEL_MASK),
		(PMIC_DA_VMODEM_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_R2R_PDN_MASK),
		(PMIC_DA_VMODEM_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_DVS_EN_MASK),
		(PMIC_DA_VMODEM_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_DVS_DOWN_MASK),
		(PMIC_DA_VMODEM_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_SSH_MASK),
		(PMIC_DA_VMODEM_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vmodem_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VMODEM_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_track_stall_bypass(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_STALL_TRACK0),
		(val),
		(PMIC_RG_BUCK_VMODEM_TRACK_STALL_BYPASS_MASK),
		(PMIC_RG_BUCK_VMODEM_TRACK_STALL_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vmodem_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VMODEM_ELR0),
		(val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vmodem_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VMODEM_ELR0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC1_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_CON0),
		(&val),
		(PMIC_RG_BUCK_VPROC1_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC1_LP_MASK),
		(PMIC_RG_BUCK_VPROC1_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_CON0),
		(&val),
		(PMIC_RG_BUCK_VPROC1_LP_MASK),
		(PMIC_RG_BUCK_VPROC1_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CON1),
		(val),
		(PMIC_RG_BUCK_VPROC1_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPROC1_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_CON1),
		(&val),
		(PMIC_RG_BUCK_VPROC1_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPROC1_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_selr2r_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VPROC1_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VPROC1_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC1_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VPROC1_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC1_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VPROC1_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC1_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VPROC1_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC1_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VPROC1_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC1_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC1_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw10_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw11_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw12_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw13_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw14_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw0_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw1_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw2_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw3_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw4_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw5_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw6_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw7_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw8_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw9_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw10_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw11_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw12_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw13_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_hw14_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG0),
		(&val),
		(PMIC_DA_VPROC1_VOSEL_MASK),
		(PMIC_DA_VPROC1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG0),
		(&val),
		(PMIC_DA_VPROC1_VOSEL_GRAY_MASK),
		(PMIC_DA_VPROC1_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_EN_MASK),
		(PMIC_DA_VPROC1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_STB_MASK),
		(PMIC_DA_VPROC1_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_LOOP_SEL_MASK),
		(PMIC_DA_VPROC1_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_R2R_PDN_MASK),
		(PMIC_DA_VPROC1_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_DVS_EN_MASK),
		(PMIC_DA_VPROC1_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_DVS_DOWN_MASK),
		(PMIC_DA_VPROC1_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_SSH_MASK),
		(PMIC_DA_VPROC1_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc1_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_DA_VPROC1_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VPROC1_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(val),
		(PMIC_RG_BUCK_VPROC1_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPROC1_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPROC1_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(val),
		(PMIC_RG_BUCK_VPROC1_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPROC1_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPROC1_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_track_stall_bypass(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_STALL_TRACK0),
		(val),
		(PMIC_RG_BUCK_VPROC1_TRACK_STALL_BYPASS_MASK),
		(PMIC_RG_BUCK_VPROC1_TRACK_STALL_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc1_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC1_ELR0),
		(val),
		(PMIC_RG_BUCK_VPROC1_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC1_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc1_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC1_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPROC1_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC2_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_CON0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC2_LP_MASK),
		(PMIC_RG_BUCK_VPROC2_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_CON0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_LP_MASK),
		(PMIC_RG_BUCK_VPROC2_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CON1),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_CON1),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_selr2r_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VPROC2_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VPROC2_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC2_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VPROC2_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC2_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VPROC2_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC2_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VPROC2_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC2_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VPROC2_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC2_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC2_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw10_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw11_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw12_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw13_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw14_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw0_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw1_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw2_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw3_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw4_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw5_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw6_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw7_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw8_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw9_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw10_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw11_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw12_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw13_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_hw14_op_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG0),
		(&val),
		(PMIC_DA_VPROC2_VOSEL_MASK),
		(PMIC_DA_VPROC2_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG0),
		(&val),
		(PMIC_DA_VPROC2_VOSEL_GRAY_MASK),
		(PMIC_DA_VPROC2_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_EN_MASK),
		(PMIC_DA_VPROC2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_STB_MASK),
		(PMIC_DA_VPROC2_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_LOOP_SEL_MASK),
		(PMIC_DA_VPROC2_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_R2R_PDN_MASK),
		(PMIC_DA_VPROC2_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_DVS_EN_MASK),
		(PMIC_DA_VPROC2_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_DVS_DOWN_MASK),
		(PMIC_DA_VPROC2_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_SSH_MASK),
		(PMIC_DA_VPROC2_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vproc2_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_DA_VPROC2_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VPROC2_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(val),
		(PMIC_RG_BUCK_VPROC2_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPROC2_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(val),
		(PMIC_RG_BUCK_VPROC2_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPROC2_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_track_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(val),
		(PMIC_RG_BUCK_VPROC2_TRACK_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_TRACK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_track_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_TRACK_EN_MASK),
		(PMIC_RG_BUCK_VPROC2_TRACK_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_track_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(val),
		(PMIC_RG_BUCK_VPROC2_TRACK_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_TRACK_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_track_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_TRACK_MODE_MASK),
		(PMIC_RG_BUCK_VPROC2_TRACK_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel_delta(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_DELTA_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_DELTA_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel_delta(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_DELTA_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_DELTA_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel_offset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_OFFSET_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_OFFSET_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel_offset(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_TRACK0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_OFFSET_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel_lb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_TRACK1),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LB_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel_lb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_TRACK1),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LB_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_LB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel_hb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_TRACK1),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_HB_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_HB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel_hb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_TRACK1),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_HB_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_HB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_track_stall_bypass(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_STALL_TRACK0),
		(val),
		(PMIC_RG_BUCK_VPROC2_TRACK_STALL_BYPASS_MASK),
		(PMIC_RG_BUCK_VPROC2_TRACK_STALL_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vproc2_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPROC2_ELR0),
		(val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vproc2_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPROC2_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPROC2_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC2_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CON0),
		(val),
		(PMIC_RG_BUCK_VS1_EN_MASK),
		(PMIC_RG_BUCK_VS1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_CON0),
		(&val),
		(PMIC_RG_BUCK_VS1_EN_MASK),
		(PMIC_RG_BUCK_VS1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CON0),
		(val),
		(PMIC_RG_BUCK_VS1_LP_MASK),
		(PMIC_RG_BUCK_VS1_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_CON0),
		(&val),
		(PMIC_RG_BUCK_VS1_LP_MASK),
		(PMIC_RG_BUCK_VS1_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_vosel_sleep(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CON1),
		(val),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_CON1),
		(&val),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_selr2r_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VS1_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VS1_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_sfchg_frate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_sfchg_rrate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw10_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw11_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw12_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw13_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw14_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw0_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw1_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw2_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw3_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw4_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw5_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw6_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw7_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw8_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw9_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw10_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw11_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw12_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw13_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_hw14_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS1_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS1_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS1_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG0),
		(&val),
		(PMIC_DA_VS1_VOSEL_MASK),
		(PMIC_DA_VS1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG0),
		(&val),
		(PMIC_DA_VS1_VOSEL_GRAY_MASK),
		(PMIC_DA_VS1_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_EN_MASK),
		(PMIC_DA_VS1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_STB_MASK),
		(PMIC_DA_VS1_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_LOOP_SEL_MASK),
		(PMIC_DA_VS1_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_R2R_PDN_MASK),
		(PMIC_DA_VS1_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_DVS_EN_MASK),
		(PMIC_DA_VS1_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_DVS_DOWN_MASK),
		(PMIC_DA_VS1_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_SSH_MASK),
		(PMIC_DA_VS1_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs1_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VS1_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_DBG1),
		(val),
		(PMIC_RG_BUCK_VS1_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_RG_BUCK_VS1_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_DBG1),
		(val),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_DBG1),
		(&val),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_voter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_VOTER),
		(val),
		(PMIC_RG_BUCK_VS1_VOTER_EN_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_voter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_VOTER),
		(&val),
		(PMIC_RG_BUCK_VS1_VOTER_EN_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_voter_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_VOTER_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_voter_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_VOTER_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs1_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS1_ELR0),
		(val),
		(PMIC_RG_BUCK_VS1_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs1_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS1_ELR0),
		(&val),
		(PMIC_RG_BUCK_VS1_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CON0),
		(val),
		(PMIC_RG_BUCK_VS2_EN_MASK),
		(PMIC_RG_BUCK_VS2_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_CON0),
		(&val),
		(PMIC_RG_BUCK_VS2_EN_MASK),
		(PMIC_RG_BUCK_VS2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CON0),
		(val),
		(PMIC_RG_BUCK_VS2_LP_MASK),
		(PMIC_RG_BUCK_VS2_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_CON0),
		(&val),
		(PMIC_RG_BUCK_VS2_LP_MASK),
		(PMIC_RG_BUCK_VS2_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_vosel_sleep(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CON1),
		(val),
		(PMIC_RG_BUCK_VS2_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VS2_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_vosel_sleep(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_CON1),
		(&val),
		(PMIC_RG_BUCK_VS2_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VS2_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_selr2r_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_SLP_CON),
		(val),
		(PMIC_RG_BUCK_VS2_SELR2R_CTRL_MASK),
		(PMIC_RG_BUCK_VS2_SELR2R_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_sfchg_frate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CFG0),
		(val),
		(PMIC_RG_BUCK_VS2_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VS2_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CFG0),
		(val),
		(PMIC_RG_BUCK_VS2_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VS2_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_sfchg_rrate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CFG0),
		(val),
		(PMIC_RG_BUCK_VS2_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VS2_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_CFG0),
		(val),
		(PMIC_RG_BUCK_VS2_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VS2_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw0_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw0_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw1_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw1_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw2_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw2_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw3_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw3_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW3_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw4_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW4_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw4_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW4_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW4_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw5_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW5_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw5_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW5_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW5_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw6_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW6_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw6_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW6_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW6_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw7_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW7_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw7_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW7_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW7_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw8_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW8_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw8_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW8_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW8_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw9_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW9_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw9_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW9_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW9_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw10_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW10_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw10_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW10_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW10_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw11_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW11_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw11_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW11_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW11_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw12_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW12_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw12_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW12_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW12_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw13_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW13_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw13_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW13_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW13_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw14_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW14_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw14_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_HW14_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_HW14_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_sw_op_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS2_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_sw_op_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS2_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VS2_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw0_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw0_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw1_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw1_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw2_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw2_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw3_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw3_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW3_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw4_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW4_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw4_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW4_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW4_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw5_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW5_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw5_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW5_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW5_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw6_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW6_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw6_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW6_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW6_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw7_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW7_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw7_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW7_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW7_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw8_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW8_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw8_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW8_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW8_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw9_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW9_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw9_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW9_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW9_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw10_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW10_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw10_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW10_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW10_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw11_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW11_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw11_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW11_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW11_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw12_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW12_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw12_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW12_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW12_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw13_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW13_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw13_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW13_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW13_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw14_op_cfg(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW14_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw14_op_cfg(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_HW14_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS2_HW14_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw0_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW0_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw0_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW0_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW0_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw1_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW1_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw1_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW1_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW1_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw2_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW2_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw2_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW2_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW2_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw3_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW3_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw3_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW3_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW3_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw4_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW4_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw4_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW4_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW4_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw5_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW5_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw5_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW5_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW5_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw6_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW6_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw6_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW6_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW6_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw7_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW7_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw7_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW7_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW7_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw8_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW8_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw8_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW8_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW8_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw9_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW9_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw9_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW9_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW9_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw10_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW10_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw10_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW10_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW10_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw11_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW11_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw11_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW11_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW11_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw12_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW12_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw12_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW12_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW12_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw13_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW13_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw13_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW13_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW13_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_hw14_op_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(val),
		(PMIC_RG_BUCK_VS2_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW14_OP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_hw14_op_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_OP_MODE),
		(&val),
		(PMIC_RG_BUCK_VS2_HW14_OP_MODE_MASK),
		(PMIC_RG_BUCK_VS2_HW14_OP_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG0),
		(&val),
		(PMIC_DA_VS2_VOSEL_MASK),
		(PMIC_DA_VS2_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG0),
		(&val),
		(PMIC_DA_VS2_VOSEL_GRAY_MASK),
		(PMIC_DA_VS2_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_EN_MASK),
		(PMIC_DA_VS2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_STB_MASK),
		(PMIC_DA_VS2_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_loop_sel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_LOOP_SEL_MASK),
		(PMIC_DA_VS2_LOOP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_r2r_pdn(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_R2R_PDN_MASK),
		(PMIC_DA_VS2_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_dvs_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_DVS_EN_MASK),
		(PMIC_DA_VS2_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_DVS_DOWN_MASK),
		(PMIC_DA_VS2_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_ssh(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_SSH_MASK),
		(PMIC_DA_VS2_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vs2_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_DA_VS2_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VS2_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_DBG1),
		(val),
		(PMIC_RG_BUCK_VS2_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VS2_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_RG_BUCK_VS2_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VS2_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_DBG1),
		(val),
		(PMIC_RG_BUCK_VS2_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VS2_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_DBG1),
		(&val),
		(PMIC_RG_BUCK_VS2_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VS2_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_voter_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_VOTER),
		(val),
		(PMIC_RG_BUCK_VS2_VOTER_EN_MASK),
		(PMIC_RG_BUCK_VS2_VOTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_voter_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_VOTER),
		(&val),
		(PMIC_RG_BUCK_VS2_VOTER_EN_MASK),
		(PMIC_RG_BUCK_VS2_VOTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_voter_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_VOTER_CFG),
		(val),
		(PMIC_RG_BUCK_VS2_VOTER_VOSEL_MASK),
		(PMIC_RG_BUCK_VS2_VOTER_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_voter_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_VOTER_CFG),
		(&val),
		(PMIC_RG_BUCK_VS2_VOTER_VOSEL_MASK),
		(PMIC_RG_BUCK_VS2_VOTER_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vs2_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VS2_ELR0),
		(val),
		(PMIC_RG_BUCK_VS2_VOSEL_MASK),
		(PMIC_RG_BUCK_VS2_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vs2_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VS2_ELR0),
		(&val),
		(PMIC_RG_BUCK_VS2_VOSEL_MASK),
		(PMIC_RG_BUCK_VS2_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_EN_MASK),
		(PMIC_RG_BUCK_VPA_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_EN_MASK),
		(PMIC_RG_BUCK_VPA_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_lp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_LP_MASK),
		(PMIC_RG_BUCK_VPA_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_lp(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_LP_MASK),
		(PMIC_RG_BUCK_VPA_LP_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_vosel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CON1),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_CON1),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_sfchg_frate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_sfchg_fen(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_sfchg_rrate(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_sfchg_ren(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_dvs_down_ctrl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_DOWN_CTRL_MASK),
		(PMIC_RG_BUCK_VPA_DVS_DOWN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_da_vpa_vosel(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG0),
		(&val),
		(PMIC_DA_VPA_VOSEL_MASK),
		(PMIC_DA_VPA_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_vosel_gray(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG0),
		(&val),
		(PMIC_DA_VPA_VOSEL_GRAY_MASK),
		(PMIC_DA_VPA_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_EN_MASK),
		(PMIC_DA_VPA_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_stb(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_STB_MASK),
		(PMIC_DA_VPA_STB_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_dvs_transt(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_DVS_TRANST_MASK),
		(PMIC_DA_VPA_DVS_TRANST_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_dvs_bw(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_DVS_BW_MASK),
		(PMIC_DA_VPA_DVS_BW_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_dvs_down(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_DVS_DOWN_MASK),
		(PMIC_DA_VPA_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_da_vpa_minfreq_discharge(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VPA_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_ck_sw_mode(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DBG1),
		(val),
		(PMIC_RG_BUCK_VPA_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_ck_sw_mode(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPA_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_ck_sw_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DBG1),
		(val),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_ck_sw_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DBG1),
		(&val),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_vosel_dlc011(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DLC_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_vosel_dlc011(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DLC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_vosel_dlc111(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DLC_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_vosel_dlc111(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DLC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_vosel_dlc001(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DLC_CON1),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_vosel_dlc001(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DLC_CON1),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_dlc_map_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DLC_CON2),
		(val),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_MASK),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_dlc_map_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DLC_CON2),
		(&val),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_MASK),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_dlc(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_DLC_CON2),
		(val),
		(PMIC_RG_BUCK_VPA_DLC_MASK),
		(PMIC_RG_BUCK_VPA_DLC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_da_vpa_dlc(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_DLC_CON2),
		(&val),
		(PMIC_DA_VPA_DLC_MASK),
		(PMIC_DA_VPA_DLC_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_EN_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_buck_vpa_msfg_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_BUCK_VPA_MSFG_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_MSFG_EN_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_rrate0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_RRATE0),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_RRATE0_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_RRATE0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_rrate5(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_RRATE2),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_RRATE5_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_RRATE5_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_rthd0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_RTHD0),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_RTHD0_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_RTHD0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_frate0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_FRATE0),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_FRATE0_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_FRATE0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_frate5(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_FRATE2),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_FRATE5_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_FRATE5_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_buck_vpa_msfg_fthd0(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_BUCK_VPA_MSFG_FTHD0),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_FTHD0_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_FTHD0_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smps_testmode_b(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMPS_ANA_CON0),
		(val),
		(PMIC_RG_SMPS_TESTMODE_B_MASK),
		(PMIC_RG_SMPS_TESTMODE_B_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_autok_rst(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMPS_ANA_CON0),
		(val),
		(PMIC_RG_AUTOK_RST_MASK),
		(PMIC_RG_AUTOK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_smps_disautok(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_SMPS_ANA_CON0),
		(val),
		(PMIC_RG_SMPS_DISAUTOK_MASK),
		(PMIC_RG_SMPS_DISAUTOK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ndis_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_NDIS_EN_MASK),
		(PMIC_RG_VGPU11_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_ndis_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(&val),
		(PMIC_RG_VGPU11_NDIS_EN_MASK),
		(PMIC_RG_VGPU11_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_pwm_rstramp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VGPU11_PWM_RSTRAMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_pwm_rstramp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(&val),
		(PMIC_RG_VGPU11_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VGPU11_PWM_RSTRAMP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_sleep_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_SLEEP_TIME_MASK),
		(PMIC_RG_VGPU11_SLEEP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_loopsel_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_LOOPSEL_DIS_MASK),
		(PMIC_RG_VGPU11_LOOPSEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_tb_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_TB_DIS_MASK),
		(PMIC_RG_VGPU11_TB_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_tb_pfm_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_TB_PFM_OFF_MASK),
		(PMIC_RG_VGPU11_TB_PFM_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_dummy_load_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_DUMMY_LOAD_EN_MASK),
		(PMIC_RG_VGPU11_DUMMY_LOAD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_dummy_load_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(&val),
		(PMIC_RG_VGPU11_DUMMY_LOAD_EN_MASK),
		(PMIC_RG_VGPU11_DUMMY_LOAD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_tb_vrefsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_TB_VREFSEL_MASK),
		(PMIC_RG_VGPU11_TB_VREFSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ton_extend_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_TON_EXTEND_EN_MASK),
		(PMIC_RG_VGPU11_TON_EXTEND_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_ton_extend_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(&val),
		(PMIC_RG_VGPU11_TON_EXTEND_EN_MASK),
		(PMIC_RG_VGPU11_TON_EXTEND_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_urt_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_URT_EN_MASK),
		(PMIC_RG_VGPU11_URT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_urt_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(&val),
		(PMIC_RG_VGPU11_URT_EN_MASK),
		(PMIC_RG_VGPU11_URT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ovp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_OVP_EN_MASK),
		(PMIC_RG_VGPU11_OVP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_ovp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(&val),
		(PMIC_RG_VGPU11_OVP_EN_MASK),
		(PMIC_RG_VGPU11_OVP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ovp_vrefsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_OVP_VREFSEL_MASK),
		(PMIC_RG_VGPU11_OVP_VREFSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ramp_ac(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON0),
		(val),
		(PMIC_RG_VGPU11_RAMP_AC_MASK),
		(PMIC_RG_VGPU11_RAMP_AC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ocp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON1),
		(val),
		(PMIC_RG_VGPU11_OCP_MASK),
		(PMIC_RG_VGPU11_OCP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ocn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON1),
		(val),
		(PMIC_RG_VGPU11_OCN_MASK),
		(PMIC_RG_VGPU11_OCN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_fugon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON1),
		(val),
		(PMIC_RG_VGPU11_FUGON_MASK),
		(PMIC_RG_VGPU11_FUGON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_flgon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON1),
		(val),
		(PMIC_RG_VGPU11_FLGON_MASK),
		(PMIC_RG_VGPU11_FLGON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_pfm_peak(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON1),
		(val),
		(PMIC_RG_VGPU11_PFM_PEAK_MASK),
		(PMIC_RG_VGPU11_PFM_PEAK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_sonic_pfm_peak(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_SONIC_PFM_PEAK_MASK),
		(PMIC_RG_VGPU11_SONIC_PFM_PEAK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_vdiff_groundsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_VDIFF_GROUNDSEL_MASK),
		(PMIC_RG_VGPU11_VDIFF_GROUNDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_ug_sr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_UG_SR_MASK),
		(PMIC_RG_VGPU11_UG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_lg_sr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_LG_SR_MASK),
		(PMIC_RG_VGPU11_LG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_fccm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_FCCM_MASK),
		(PMIC_RG_VGPU11_FCCM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_retention_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_RETENTION_EN_MASK),
		(PMIC_RG_VGPU11_RETENTION_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_retention_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(&val),
		(PMIC_RG_VGPU11_RETENTION_EN_MASK),
		(PMIC_RG_VGPU11_RETENTION_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_nonaudible_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(val),
		(PMIC_RG_VGPU11_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VGPU11_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_nonaudible_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON2),
		(&val),
		(PMIC_RG_VGPU11_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VGPU11_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_rsvh(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON3),
		(val),
		(PMIC_RG_VGPU11_RSVH_MASK),
		(PMIC_RG_VGPU11_RSVH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_rsvl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON3),
		(val),
		(PMIC_RG_VGPU11_RSVL_MASK),
		(PMIC_RG_VGPU11_RSVL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rgs_vgpu11_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON4),
		(&val),
		(PMIC_RGS_VGPU11_OC_STATUS_MASK),
		(PMIC_RGS_VGPU11_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vgpu11_dig_mon(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON4),
		(&val),
		(PMIC_RGS_VGPU11_DIG_MON_MASK),
		(PMIC_RGS_VGPU11_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_digmon_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON4),
		(val),
		(PMIC_RG_VGPU11_DIGMON_SEL_MASK),
		(PMIC_RG_VGPU11_DIGMON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_vbat_low_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_VBAT_LOW_DIS_MASK),
		(PMIC_RG_VGPU11_VBAT_LOW_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_vbat_hi_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_VBAT_HI_DIS_MASK),
		(PMIC_RG_VGPU11_VBAT_HI_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_vout_hi_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_VOUT_HI_DIS_MASK),
		(PMIC_RG_VGPU11_VOUT_HI_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_rcb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_RCB_MASK),
		(PMIC_RG_VGPU11_RCB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_vdiff_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_VDIFF_OFF_MASK),
		(PMIC_RG_VGPU11_VDIFF_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu11_vdiffcap_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_VDIFFCAP_EN_MASK),
		(PMIC_RG_VGPU11_VDIFFCAP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_vdiffcap_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(&val),
		(PMIC_RG_VGPU11_VDIFFCAP_EN_MASK),
		(PMIC_RG_VGPU11_VDIFFCAP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_dac_vref_1p1v_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_DAC_VREF_1P1V_EN_MASK),
		(PMIC_RG_VGPU11_DAC_VREF_1P1V_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_dac_vref_1p1v_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(&val),
		(PMIC_RG_VGPU11_DAC_VREF_1P1V_EN_MASK),
		(PMIC_RG_VGPU11_DAC_VREF_1P1V_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu11_dac_vref_1p2v_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(val),
		(PMIC_RG_VGPU11_DAC_VREF_1P2V_EN_MASK),
		(PMIC_RG_VGPU11_DAC_VREF_1P2V_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu11_dac_vref_1p2v_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON5),
		(&val),
		(PMIC_RG_VGPU11_DAC_VREF_1P2V_EN_MASK),
		(PMIC_RG_VGPU11_DAC_VREF_1P2V_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ndis_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_NDIS_EN_MASK),
		(PMIC_RG_VGPU12_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_ndis_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(&val),
		(PMIC_RG_VGPU12_NDIS_EN_MASK),
		(PMIC_RG_VGPU12_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_pwm_rstramp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VGPU12_PWM_RSTRAMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_pwm_rstramp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(&val),
		(PMIC_RG_VGPU12_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VGPU12_PWM_RSTRAMP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_sleep_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_SLEEP_TIME_MASK),
		(PMIC_RG_VGPU12_SLEEP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_loopsel_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_LOOPSEL_DIS_MASK),
		(PMIC_RG_VGPU12_LOOPSEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_tb_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_TB_DIS_MASK),
		(PMIC_RG_VGPU12_TB_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_tb_pfm_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_TB_PFM_OFF_MASK),
		(PMIC_RG_VGPU12_TB_PFM_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_tb_vrefsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_TB_VREFSEL_MASK),
		(PMIC_RG_VGPU12_TB_VREFSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ton_extend_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_TON_EXTEND_EN_MASK),
		(PMIC_RG_VGPU12_TON_EXTEND_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_ton_extend_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(&val),
		(PMIC_RG_VGPU12_TON_EXTEND_EN_MASK),
		(PMIC_RG_VGPU12_TON_EXTEND_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_urt_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_URT_EN_MASK),
		(PMIC_RG_VGPU12_URT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_urt_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(&val),
		(PMIC_RG_VGPU12_URT_EN_MASK),
		(PMIC_RG_VGPU12_URT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_dummy_load_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_DUMMY_LOAD_EN_MASK),
		(PMIC_RG_VGPU12_DUMMY_LOAD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_dummy_load_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(&val),
		(PMIC_RG_VGPU12_DUMMY_LOAD_EN_MASK),
		(PMIC_RG_VGPU12_DUMMY_LOAD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ovp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_OVP_EN_MASK),
		(PMIC_RG_VGPU12_OVP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_ovp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(&val),
		(PMIC_RG_VGPU12_OVP_EN_MASK),
		(PMIC_RG_VGPU12_OVP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ovp_vrefsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_OVP_VREFSEL_MASK),
		(PMIC_RG_VGPU12_OVP_VREFSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ramp_ac(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON6),
		(val),
		(PMIC_RG_VGPU12_RAMP_AC_MASK),
		(PMIC_RG_VGPU12_RAMP_AC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ocp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON7),
		(val),
		(PMIC_RG_VGPU12_OCP_MASK),
		(PMIC_RG_VGPU12_OCP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ocn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON7),
		(val),
		(PMIC_RG_VGPU12_OCN_MASK),
		(PMIC_RG_VGPU12_OCN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_pfm_peak(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON7),
		(val),
		(PMIC_RG_VGPU12_PFM_PEAK_MASK),
		(PMIC_RG_VGPU12_PFM_PEAK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_sonic_pfm_peak(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON7),
		(val),
		(PMIC_RG_VGPU12_SONIC_PFM_PEAK_MASK),
		(PMIC_RG_VGPU12_SONIC_PFM_PEAK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_flgon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_FLGON_MASK),
		(PMIC_RG_VGPU12_FLGON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_fugon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_FUGON_MASK),
		(PMIC_RG_VGPU12_FUGON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_vdiff_groundsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_VDIFF_GROUNDSEL_MASK),
		(PMIC_RG_VGPU12_VDIFF_GROUNDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_ug_sr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_UG_SR_MASK),
		(PMIC_RG_VGPU12_UG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_lg_sr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_LG_SR_MASK),
		(PMIC_RG_VGPU12_LG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_fccm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_FCCM_MASK),
		(PMIC_RG_VGPU12_FCCM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_rsvh(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON8),
		(val),
		(PMIC_RG_VGPU12_RSVH_MASK),
		(PMIC_RG_VGPU12_RSVH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_rsvl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(val),
		(PMIC_RG_VGPU12_RSVL_MASK),
		(PMIC_RG_VGPU12_RSVL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_nonaudible_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(val),
		(PMIC_RG_VGPU12_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VGPU12_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_nonaudible_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(&val),
		(PMIC_RG_VGPU12_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VGPU12_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_retention_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(val),
		(PMIC_RG_VGPU12_RETENTION_EN_MASK),
		(PMIC_RG_VGPU12_RETENTION_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_retention_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(&val),
		(PMIC_RG_VGPU12_RETENTION_EN_MASK),
		(PMIC_RG_VGPU12_RETENTION_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vgpu12_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(&val),
		(PMIC_RGS_VGPU12_OC_STATUS_MASK),
		(PMIC_RGS_VGPU12_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vgpu12_dig_mon(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(&val),
		(PMIC_RGS_VGPU12_DIG_MON_MASK),
		(PMIC_RGS_VGPU12_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_digmon_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON9),
		(val),
		(PMIC_RG_VGPU12_DIGMON_SEL_MASK),
		(PMIC_RG_VGPU12_DIGMON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_rcb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_RCB_MASK),
		(PMIC_RG_VGPU12_RCB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_vbat_hi_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_VBAT_HI_DIS_MASK),
		(PMIC_RG_VGPU12_VBAT_HI_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_vbat_low_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_VBAT_LOW_DIS_MASK),
		(PMIC_RG_VGPU12_VBAT_LOW_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_vout_hi_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_VOUT_HI_DIS_MASK),
		(PMIC_RG_VGPU12_VOUT_HI_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_vdiff_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_VDIFF_OFF_MASK),
		(PMIC_RG_VGPU12_VDIFF_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpu12_vdiffcap_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_VDIFFCAP_EN_MASK),
		(PMIC_RG_VGPU12_VDIFFCAP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_vdiffcap_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(&val),
		(PMIC_RG_VGPU12_VDIFFCAP_EN_MASK),
		(PMIC_RG_VGPU12_VDIFFCAP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_dac_vref_1p1v_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_DAC_VREF_1P1V_EN_MASK),
		(PMIC_RG_VGPU12_DAC_VREF_1P1V_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_dac_vref_1p1v_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(&val),
		(PMIC_RG_VGPU12_DAC_VREF_1P1V_EN_MASK),
		(PMIC_RG_VGPU12_DAC_VREF_1P1V_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpu12_dac_vref_1p2v_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(val),
		(PMIC_RG_VGPU12_DAC_VREF_1P2V_EN_MASK),
		(PMIC_RG_VGPU12_DAC_VREF_1P2V_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpu12_dac_vref_1p2v_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON10),
		(&val),
		(PMIC_RG_VGPU12_DAC_VREF_1P2V_EN_MASK),
		(PMIC_RG_VGPU12_DAC_VREF_1P2V_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_tb_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_TB_DIS_MASK),
		(PMIC_RG_VCORE_TB_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_ndis_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_NDIS_EN_MASK),
		(PMIC_RG_VCORE_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_ndis_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_NDIS_EN_MASK),
		(PMIC_RG_VCORE_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_loopsel_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_LOOPSEL_DIS_MASK),
		(PMIC_RG_VCORE_LOOPSEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_pwm_rstramp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VCORE_PWM_RSTRAMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_pwm_rstramp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VCORE_PWM_RSTRAMP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_sleep_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_SLEEP_TIME_MASK),
		(PMIC_RG_VCORE_SLEEP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_tb_vrefsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_TB_VREFSEL_MASK),
		(PMIC_RG_VCORE_TB_VREFSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_tb_pfm_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_TB_PFM_OFF_MASK),
		(PMIC_RG_VCORE_TB_PFM_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_ton_extend_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_TON_EXTEND_EN_MASK),
		(PMIC_RG_VCORE_TON_EXTEND_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_ton_extend_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_TON_EXTEND_EN_MASK),
		(PMIC_RG_VCORE_TON_EXTEND_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_urt_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_URT_EN_MASK),
		(PMIC_RG_VCORE_URT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_urt_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_URT_EN_MASK),
		(PMIC_RG_VCORE_URT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_dummy_load_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_DUMMY_LOAD_EN_MASK),
		(PMIC_RG_VCORE_DUMMY_LOAD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_dummy_load_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_DUMMY_LOAD_EN_MASK),
		(PMIC_RG_VCORE_DUMMY_LOAD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_ovp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_OVP_EN_MASK),
		(PMIC_RG_VCORE_OVP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_ovp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_OVP_EN_MASK),
		(PMIC_RG_VCORE_OVP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_ovp_vrefsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_OVP_VREFSEL_MASK),
		(PMIC_RG_VCORE_OVP_VREFSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_ramp_ac(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_RAMP_AC_MASK),
		(PMIC_RG_VCORE_RAMP_AC_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_ocp(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON12),
		(val),
		(PMIC_RG_VCORE_OCP_MASK),
		(PMIC_RG_VCORE_OCP_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_ocn(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON12),
		(val),
		(PMIC_RG_VCORE_OCN_MASK),
		(PMIC_RG_VCORE_OCN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_fugon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON12),
		(val),
		(PMIC_RG_VCORE_FUGON_MASK),
		(PMIC_RG_VCORE_FUGON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_flgon(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON12),
		(val),
		(PMIC_RG_VCORE_FLGON_MASK),
		(PMIC_RG_VCORE_FLGON_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_pfm_peak(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON12),
		(val),
		(PMIC_RG_VCORE_PFM_PEAK_MASK),
		(PMIC_RG_VCORE_PFM_PEAK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_sonic_pfm_peak(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON12),
		(val),
		(PMIC_RG_VCORE_SONIC_PFM_PEAK_MASK),
		(PMIC_RG_VCORE_SONIC_PFM_PEAK_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_ug_sr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_UG_SR_MASK),
		(PMIC_RG_VCORE_UG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_lg_sr(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_LG_SR_MASK),
		(PMIC_RG_VCORE_LG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_vdiff_groundsel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_VDIFF_GROUNDSEL_MASK),
		(PMIC_RG_VCORE_VDIFF_GROUNDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_fccm(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_FCCM_MASK),
		(PMIC_RG_VCORE_FCCM_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_nonaudible_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_nonaudible_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(&val),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_retention_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_RETENTION_EN_MASK),
		(PMIC_RG_VCORE_RETENTION_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_retention_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(&val),
		(PMIC_RG_VCORE_RETENTION_EN_MASK),
		(PMIC_RG_VCORE_RETENTION_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_rsvh(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON13),
		(val),
		(PMIC_RG_VCORE_RSVH_MASK),
		(PMIC_RG_VCORE_RSVH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_rsvl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON14),
		(val),
		(PMIC_RG_VCORE_RSVL_MASK),
		(PMIC_RG_VCORE_RSVL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rgs_vcore_oc_status(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON14),
		(&val),
		(PMIC_RGS_VCORE_OC_STATUS_MASK),
		(PMIC_RGS_VCORE_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_vcore_dig_mon(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON14),
		(&val),
		(PMIC_RGS_VCORE_DIG_MON_MASK),
		(PMIC_RGS_VCORE_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_digmon_sel(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON14),
		(val),
		(PMIC_RG_VCORE_DIGMON_SEL_MASK),
		(PMIC_RG_VCORE_DIGMON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpuvcore_tmdl(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON14),
		(val),
		(PMIC_RG_VGPUVCORE_TMDL_MASK),
		(PMIC_RG_VGPUVCORE_TMDL_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_rcb(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_RCB_MASK),
		(PMIC_RG_VCORE_RCB_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_vbat_low_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_VBAT_LOW_DIS_MASK),
		(PMIC_RG_VCORE_VBAT_LOW_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_vbat_hi_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_VBAT_HI_DIS_MASK),
		(PMIC_RG_VCORE_VBAT_HI_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_vout_hi_dis(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_VOUT_HI_DIS_MASK),
		(PMIC_RG_VCORE_VOUT_HI_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_vdiff_off(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_VDIFF_OFF_MASK),
		(PMIC_RG_VCORE_VDIFF_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vcore_vdiffcap_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_VDIFFCAP_EN_MASK),
		(PMIC_RG_VCORE_VDIFFCAP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_vdiffcap_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(&val),
		(PMIC_RG_VCORE_VDIFFCAP_EN_MASK),
		(PMIC_RG_VCORE_VDIFFCAP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_dac_vref_1p1v_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_DAC_VREF_1P1V_EN_MASK),
		(PMIC_RG_VCORE_DAC_VREF_1P1V_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_dac_vref_1p1v_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(&val),
		(PMIC_RG_VCORE_DAC_VREF_1P1V_EN_MASK),
		(PMIC_RG_VCORE_DAC_VREF_1P1V_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vcore_dac_vref_1p2v_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VCORE_DAC_VREF_1P2V_EN_MASK),
		(PMIC_RG_VCORE_DAC_VREF_1P2V_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vcore_dac_vref_1p2v_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(&val),
		(PMIC_RG_VCORE_DAC_VREF_1P2V_EN_MASK),
		(PMIC_RG_VCORE_DAC_VREF_1P2V_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vgpuvcore_diff_l(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON15),
		(val),
		(PMIC_RG_VGPUVCORE_DIFF_L_MASK),
		(PMIC_RG_VGPUVCORE_DIFF_L_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpuvcore_sr_vbat(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(val),
		(PMIC_RG_VGPUVCORE_SR_VBAT_MASK),
		(PMIC_RG_VGPUVCORE_SR_VBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpuvcore_config_lat_rsvh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(val),
		(PMIC_RG_VGPUVCORE_CONFIG_LAT_RSVH_MASK),
		(PMIC_RG_VGPUVCORE_CONFIG_LAT_RSVH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpuvcore_reconfig_rsvh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(val),
		(PMIC_RG_VGPUVCORE_RECONFIG_RSVH_MASK),
		(PMIC_RG_VGPUVCORE_RECONFIG_RSVH_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vgpuvcore_reconfig_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(val),
		(PMIC_RG_VGPUVCORE_RECONFIG_EN_MASK),
		(PMIC_RG_VGPUVCORE_RECONFIG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vgpuvcore_reconfig_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(&val),
		(PMIC_RG_VGPUVCORE_RECONFIG_EN_MASK),
		(PMIC_RG_VGPUVCORE_RECONFIG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_3ph1_vgpu11_digcfg_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(&val),
		(PMIC_RGS_3PH1_VGPU11_DIGCFG_EN_MASK),
		(PMIC_RGS_3PH1_VGPU11_DIGCFG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_3ph2_vcore_digcfg_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(&val),
		(PMIC_RGS_3PH2_VCORE_DIGCFG_EN_MASK),
		(PMIC_RGS_3PH2_VCORE_DIGCFG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_get_rgs_3ph3_vgpu12_digcfg_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VGPUVCORE_ANA_CON16),
		(&val),
		(PMIC_RGS_3PH3_VGPU12_DIGCFG_EN_MASK),
		(PMIC_RGS_3PH3_VGPU12_DIGCFG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vproc1_sr_vbat(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VPROC1_ANA_CON0),
		(val),
		(PMIC_RG_VPROC1_SR_VBAT_MASK),
		(PMIC_RG_VPROC1_SR_VBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_set_rg_vproc1_ndis_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VPROC1_ANA_CON0),
		(val),
		(PMIC_RG_VPROC1_NDIS_EN_MASK),
		(PMIC_RG_VPROC1_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vproc1_ndis_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VPROC1_ANA_CON0),
		(&val),
		(PMIC_RG_VPROC1_NDIS_EN_MASK),
		(PMIC_RG_VPROC1_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vproc1_pwm_rstramp_en(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VPROC1_ANA_CON0),
		(val),
		(PMIC_RG_VPROC1_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VPROC1_PWM_RSTRAMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6359_upmu_get_rg_vproc1_pwm_rstramp_en(void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6359_VPROC1_ANA_CON0),
		(&val),
		(PMIC_RG_VPROC1_PWM_RSTRAMP_EN_MASK),
		(PMIC_RG_VPROC1_PWM_RSTRAMP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6359_upmu_set_rg_vproc1_sleep_time(unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6359_VPROC1_ANA_CON0),
		(val),
		(PMIC_RG_VPROC1_SLEEP_TIME_MASK),
		(PMIC_RG_VPROC1_SLEEP_TIME_SHIFT)
			);

	return ret;
}

{
	unsigned int ret = 0;

