
/*                  - Mellanox Confidential and Proprietary -
 *
 *  Copyright (C) 2010-2011, Mellanox Technologies Ltd.  ALL RIGHTS RESERVED.
 *
 *  Except as specifically permitted herein, no portion of the information,
 *  including but not limited to object code and source code, may be reproduced,
 *  modified, distributed, republished or otherwise exploited in any form or by
 *  any means for any purpose without the prior written permission of Mellanox
 *  Technologies Ltd. Use of software subject to the terms and conditions
 *  detailed in the file "LICENSE.txt".
 *
 */
 

/***
         *** This file was generated at "2018-06-25 13:22:56"
         *** by:
         ***    > /mswg/release/tools/a-me/last_stable/adabe_plugins/adb2c/adb2pack.py --input adb/connectx4/connectx4.adb --file-prefix connectx4 --prefix connectx4_
         ***/
#include "image_info_layouts.h"


void connectx4_FW_VERSION_pack(const struct connectx4_FW_VERSION *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->MAJOR);
    offset = 48;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->SUBMINOR);
    offset = 32;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->MINOR);
    offset = 80;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Hour);
    offset = 72;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Minutes);
    offset = 64;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Seconds);
    offset = 120;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Day);
    offset = 112;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Month);
    offset = 96;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->Year);
}

void connectx4_FW_VERSION_unpack(struct connectx4_FW_VERSION *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    ptr_struct->MAJOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 48;
    ptr_struct->SUBMINOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 32;
    ptr_struct->MINOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 80;
    ptr_struct->Hour = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 72;
    ptr_struct->Minutes = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 64;
    ptr_struct->Seconds = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 120;
    ptr_struct->Day = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 112;
    ptr_struct->Month = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 96;
    ptr_struct->Year = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
}

void connectx4_FW_VERSION_print(const struct connectx4_FW_VERSION *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_FW_VERSION ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "MAJOR                : " UH_FMT "\n", ptr_struct->MAJOR);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "SUBMINOR             : " UH_FMT "\n", ptr_struct->SUBMINOR);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "MINOR                : " UH_FMT "\n", ptr_struct->MINOR);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "Hour                 : " UH_FMT "\n", ptr_struct->Hour);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "Minutes              : " UH_FMT "\n", ptr_struct->Minutes);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "Seconds              : " UH_FMT "\n", ptr_struct->Seconds);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "Day                  : " UH_FMT "\n", ptr_struct->Day);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "Month                : " UH_FMT "\n", ptr_struct->Month);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "Year                 : " UH_FMT "\n", ptr_struct->Year);
}

unsigned int connectx4_FW_VERSION_size(void)
{
    return CONNECTX4_FW_VERSION_SIZE;
}

void connectx4_FW_VERSION_dump(const struct connectx4_FW_VERSION *ptr_struct, FILE *fd)
{
    connectx4_FW_VERSION_print(ptr_struct, fd, 0);
}

void connectx4_module_version_pack(const struct connectx4_module_version *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 24;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->branch);
    offset = 12;
    adb2c_push_bits_to_buff(ptr_buff, offset, 12, (u_int32_t)ptr_struct->minor);
    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 12, (u_int32_t)ptr_struct->major);
}

void connectx4_module_version_unpack(struct connectx4_module_version *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 24;
    ptr_struct->branch = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 12;
    ptr_struct->minor = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 12);
    offset = 0;
    ptr_struct->major = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 12);
}

void connectx4_module_version_print(const struct connectx4_module_version *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_module_version ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "branch               : " UH_FMT "\n", ptr_struct->branch);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "minor                : " UH_FMT "\n", ptr_struct->minor);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "major                : " UH_FMT "\n", ptr_struct->major);
}

unsigned int connectx4_module_version_size(void)
{
    return CONNECTX4_MODULE_VERSION_SIZE;
}

void connectx4_module_version_dump(const struct connectx4_module_version *ptr_struct, FILE *fd)
{
    connectx4_module_version_print(ptr_struct, fd, 0);
}

void connectx4_TRIPPLE_VERSION_pack(const struct connectx4_TRIPPLE_VERSION *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->MAJOR);
    offset = 48;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->SUBMINOR);
    offset = 32;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->MINOR);
}

void connectx4_TRIPPLE_VERSION_unpack(struct connectx4_TRIPPLE_VERSION *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    ptr_struct->MAJOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 48;
    ptr_struct->SUBMINOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 32;
    ptr_struct->MINOR = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
}

void connectx4_TRIPPLE_VERSION_print(const struct connectx4_TRIPPLE_VERSION *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_TRIPPLE_VERSION ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "MAJOR                : " UH_FMT "\n", ptr_struct->MAJOR);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "SUBMINOR             : " UH_FMT "\n", ptr_struct->SUBMINOR);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "MINOR                : " UH_FMT "\n", ptr_struct->MINOR);
}

unsigned int connectx4_TRIPPLE_VERSION_size(void)
{
    return CONNECTX4_TRIPPLE_VERSION_SIZE;
}

void connectx4_TRIPPLE_VERSION_dump(const struct connectx4_TRIPPLE_VERSION *ptr_struct, FILE *fd)
{
    connectx4_TRIPPLE_VERSION_print(ptr_struct, fd, 0);
}

void connectx4_image_size_pack(const struct connectx4_image_size *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 24;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->log_step);
    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->run_from_any);
    offset = 32;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->max_size);
}

void connectx4_image_size_unpack(struct connectx4_image_size *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 24;
    ptr_struct->log_step = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 0;
    ptr_struct->run_from_any = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 32;
    ptr_struct->max_size = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
}

void connectx4_image_size_print(const struct connectx4_image_size *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_image_size ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "log_step             : " UH_FMT "\n", ptr_struct->log_step);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "run_from_any         : " UH_FMT "\n", ptr_struct->run_from_any);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "max_size             : " U32H_FMT "\n", ptr_struct->max_size);
}

unsigned int connectx4_image_size_size(void)
{
    return CONNECTX4_IMAGE_SIZE_SIZE;
}

void connectx4_image_size_dump(const struct connectx4_image_size *ptr_struct, FILE *fd)
{
    connectx4_image_size_print(ptr_struct, fd, 0);
}

void connectx4_module_versions_pack(const struct connectx4_module_versions *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    connectx4_module_version_pack(&(ptr_struct->core), ptr_buff + offset / 8);
    offset = 32;
    connectx4_module_version_pack(&(ptr_struct->phy), ptr_buff + offset / 8);
    offset = 64;
    connectx4_module_version_pack(&(ptr_struct->kernel), ptr_buff + offset / 8);
    offset = 96;
    connectx4_module_version_pack(&(ptr_struct->iron_image), ptr_buff + offset / 8);
    offset = 128;
    connectx4_module_version_pack(&(ptr_struct->host_management), ptr_buff + offset / 8);
    offset = 160;
    connectx4_module_version_pack(&(ptr_struct->mad), ptr_buff + offset / 8);
}

void connectx4_module_versions_unpack(struct connectx4_module_versions *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    connectx4_module_version_unpack(&(ptr_struct->core), ptr_buff + offset / 8);
    offset = 32;
    connectx4_module_version_unpack(&(ptr_struct->phy), ptr_buff + offset / 8);
    offset = 64;
    connectx4_module_version_unpack(&(ptr_struct->kernel), ptr_buff + offset / 8);
    offset = 96;
    connectx4_module_version_unpack(&(ptr_struct->iron_image), ptr_buff + offset / 8);
    offset = 128;
    connectx4_module_version_unpack(&(ptr_struct->host_management), ptr_buff + offset / 8);
    offset = 160;
    connectx4_module_version_unpack(&(ptr_struct->mad), ptr_buff + offset / 8);
}

void connectx4_module_versions_print(const struct connectx4_module_versions *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_module_versions ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "core:\n");
    connectx4_module_version_print(&(ptr_struct->core), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "phy:\n");
    connectx4_module_version_print(&(ptr_struct->phy), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "kernel:\n");
    connectx4_module_version_print(&(ptr_struct->kernel), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "iron_image:\n");
    connectx4_module_version_print(&(ptr_struct->iron_image), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "host_management:\n");
    connectx4_module_version_print(&(ptr_struct->host_management), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "mad:\n");
    connectx4_module_version_print(&(ptr_struct->mad), fd, indent_level + 1);
}

unsigned int connectx4_module_versions_size(void)
{
    return CONNECTX4_MODULE_VERSIONS_SIZE;
}

void connectx4_module_versions_dump(const struct connectx4_module_versions *ptr_struct, FILE *fd)
{
    connectx4_module_versions_print(ptr_struct, fd, 0);
}

void connectx4_image_info_pack(const struct connectx4_image_info *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;
    int i;

    offset = 25;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->long_keys);
    offset = 24;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->debug_fw_tokens_supported);
    offset = 23;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->mcc_en);
    offset = 22;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->signed_vendor_nvconfig_files);
    offset = 21;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->signed_mlnx_nvconfig_files);
    offset = 20;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->frc_supported);
    offset = 19;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->cs_tokens_supported);
    offset = 18;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->debug_fw);
    offset = 17;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->signed_fw);
    offset = 16;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->secure_fw);
    offset = 8;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->minor_version);
    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->major_version);
    offset = 32;
    connectx4_FW_VERSION_pack(&(ptr_struct->FW_VERSION), ptr_buff + offset / 8);
    offset = 160;
    connectx4_TRIPPLE_VERSION_pack(&(ptr_struct->mic_version), ptr_buff + offset / 8);
    offset = 240;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->pci_vendor_id);
    offset = 224;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->pci_device_id);
    offset = 272;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->pci_sub_vendor_id);
    offset = 256;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->pci_subsystem_id);
    for (i = 0; i < 16; ++i) {
        offset = adb2c_calc_array_field_address(312, 8, i, 8192, 1);
        adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->psid[i]);
    }
    offset = 432;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->vsd_vendor_id);
    for (i = 0; i < 208; ++i) {
        offset = adb2c_calc_array_field_address(472, 8, i, 8192, 1);
        adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->vsd[i]);
    }
    offset = 2112;
    connectx4_image_size_pack(&(ptr_struct->image_size), ptr_buff + offset / 8);
    for (i = 0; i < 4; ++i) {
        offset = adb2c_calc_array_field_address(2240, 32, i, 8192, 1);
        adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->supported_hw_id[i]);
    }
    offset = 2368;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->ini_file_num);
    for (i = 0; i < 16; ++i) {
        offset = adb2c_calc_array_field_address(3608, 8, i, 8192, 1);
        adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->prod_ver[i]);
    }
    for (i = 0; i < 256; ++i) {
        offset = adb2c_calc_array_field_address(3736, 8, i, 8192, 1);
        adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->description[i]);
    }
    offset = 6144;
    connectx4_module_versions_pack(&(ptr_struct->module_versions), ptr_buff + offset / 8);
    for (i = 0; i < 64; ++i) {
        offset = adb2c_calc_array_field_address(6680, 8, i, 8192, 1);
        adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->name[i]);
    }
    for (i = 0; i < 128; ++i) {
        offset = adb2c_calc_array_field_address(7192, 8, i, 8192, 1);
        adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->prs_name[i]);
    }
}

void connectx4_image_info_unpack(struct connectx4_image_info *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;
    int i;

    offset = 25;
    ptr_struct->long_keys = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 24;
    ptr_struct->debug_fw_tokens_supported = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 23;
    ptr_struct->mcc_en = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 22;
    ptr_struct->signed_vendor_nvconfig_files = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 21;
    ptr_struct->signed_mlnx_nvconfig_files = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 20;
    ptr_struct->frc_supported = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 19;
    ptr_struct->cs_tokens_supported = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 18;
    ptr_struct->debug_fw = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 17;
    ptr_struct->signed_fw = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 16;
    ptr_struct->secure_fw = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 8;
    ptr_struct->minor_version = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 0;
    ptr_struct->major_version = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 32;
    connectx4_FW_VERSION_unpack(&(ptr_struct->FW_VERSION), ptr_buff + offset / 8);
    offset = 160;
    connectx4_TRIPPLE_VERSION_unpack(&(ptr_struct->mic_version), ptr_buff + offset / 8);
    offset = 240;
    ptr_struct->pci_vendor_id = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 224;
    ptr_struct->pci_device_id = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 272;
    ptr_struct->pci_sub_vendor_id = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 256;
    ptr_struct->pci_subsystem_id = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    for (i = 0; i < 16; ++i) {
        offset = adb2c_calc_array_field_address(312, 8, i, 8192, 1);
        ptr_struct->psid[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }
        ptr_struct->psid[16] = '\0';
    offset = 432;
    ptr_struct->vsd_vendor_id = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    for (i = 0; i < 208; ++i) {
        offset = adb2c_calc_array_field_address(472, 8, i, 8192, 1);
        ptr_struct->vsd[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }
        ptr_struct->vsd[208] = '\0';
    offset = 2112;
    connectx4_image_size_unpack(&(ptr_struct->image_size), ptr_buff + offset / 8);
    for (i = 0; i < 4; ++i) {
        offset = adb2c_calc_array_field_address(2240, 32, i, 8192, 1);
        ptr_struct->supported_hw_id[i] = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    }
    offset = 2368;
    ptr_struct->ini_file_num = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    for (i = 0; i < 16; ++i) {
        offset = adb2c_calc_array_field_address(3608, 8, i, 8192, 1);
        ptr_struct->prod_ver[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }
        ptr_struct->prod_ver[16] = '\0';
    for (i = 0; i < 256; ++i) {
        offset = adb2c_calc_array_field_address(3736, 8, i, 8192, 1);
        ptr_struct->description[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }
        ptr_struct->description[256] = '\0';
    offset = 6144;
    connectx4_module_versions_unpack(&(ptr_struct->module_versions), ptr_buff + offset / 8);
    for (i = 0; i < 64; ++i) {
        offset = adb2c_calc_array_field_address(6680, 8, i, 8192, 1);
        ptr_struct->name[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }
        ptr_struct->name[64] = '\0';
    for (i = 0; i < 128; ++i) {
        offset = adb2c_calc_array_field_address(7192, 8, i, 8192, 1);
        ptr_struct->prs_name[i] = (char)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    }
        ptr_struct->prs_name[128] = '\0';
}

void connectx4_image_info_print(const struct connectx4_image_info *ptr_struct, FILE *fd, int indent_level)
{
    int i;

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_image_info ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "long_keys            : " UH_FMT "\n", ptr_struct->long_keys);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "debug_fw_tokens_supported : " UH_FMT "\n", ptr_struct->debug_fw_tokens_supported);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "mcc_en               : " UH_FMT "\n", ptr_struct->mcc_en);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signed_vendor_nvconfig_files : " UH_FMT "\n", ptr_struct->signed_vendor_nvconfig_files);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signed_mlnx_nvconfig_files : " UH_FMT "\n", ptr_struct->signed_mlnx_nvconfig_files);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "frc_supported        : " UH_FMT "\n", ptr_struct->frc_supported);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "cs_tokens_supported  : " UH_FMT "\n", ptr_struct->cs_tokens_supported);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "debug_fw             : " UH_FMT "\n", ptr_struct->debug_fw);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signed_fw            : " UH_FMT "\n", ptr_struct->signed_fw);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "secure_fw            : " UH_FMT "\n", ptr_struct->secure_fw);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "minor_version        : " UH_FMT "\n", ptr_struct->minor_version);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "major_version        : " UH_FMT "\n", ptr_struct->major_version);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "FW_VERSION:\n");
    connectx4_FW_VERSION_print(&(ptr_struct->FW_VERSION), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "mic_version:\n");
    connectx4_TRIPPLE_VERSION_print(&(ptr_struct->mic_version), fd, indent_level + 1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "pci_vendor_id        : " UH_FMT "\n", ptr_struct->pci_vendor_id);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "pci_device_id        : " UH_FMT "\n", ptr_struct->pci_device_id);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "pci_sub_vendor_id    : " UH_FMT "\n", ptr_struct->pci_sub_vendor_id);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "pci_subsystem_id     : " UH_FMT "\n", ptr_struct->pci_subsystem_id);
        fprintf(fd, "psid                 : \"%s\"\n", ptr_struct->psid);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "vsd_vendor_id        : " UH_FMT "\n", ptr_struct->vsd_vendor_id);
        fprintf(fd, "vsd                  : \"%s\"\n", ptr_struct->vsd);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "image_size:\n");
    connectx4_image_size_print(&(ptr_struct->image_size), fd, indent_level + 1);
    for (i = 0; i < 4; ++i) {
        adb2c_add_indentation(fd, indent_level);
        fprintf(fd, "supported_hw_id_%03d : " U32H_FMT "\n", i, ptr_struct->supported_hw_id[i]);
    }
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "ini_file_num         : " U32H_FMT "\n", ptr_struct->ini_file_num);
        fprintf(fd, "prod_ver             : \"%s\"\n", ptr_struct->prod_ver);
        fprintf(fd, "description          : \"%s\"\n", ptr_struct->description);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "module_versions:\n");
    connectx4_module_versions_print(&(ptr_struct->module_versions), fd, indent_level + 1);
        fprintf(fd, "name                 : \"%s\"\n", ptr_struct->name);
        fprintf(fd, "prs_name             : \"%s\"\n", ptr_struct->prs_name);
}

unsigned int connectx4_image_info_size(void)
{
    return CONNECTX4_IMAGE_INFO_SIZE;
}

void connectx4_image_info_dump(const struct connectx4_image_info *ptr_struct, FILE *fd)
{
    connectx4_image_info_print(ptr_struct, fd, 0);
}

void connectx4_itoc_entry_pack(const struct connectx4_itoc_entry *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 8;
    adb2c_push_bits_to_buff(ptr_buff, offset, 22, (u_int32_t)ptr_struct->size);
    offset = 0;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->type);
    offset = 34;
    adb2c_push_bits_to_buff(ptr_buff, offset, 30, (u_int32_t)ptr_struct->param0);
    offset = 33;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->cache_line_crc);
    offset = 32;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->zipped_image);
    offset = 64;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->param1);
    offset = 161;
    adb2c_push_bits_to_buff(ptr_buff, offset, 29, (u_int32_t)ptr_struct->flash_addr);
    offset = 160;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->relative_addr);
    offset = 208;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->section_crc);
    offset = 207;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->no_crc);
    offset = 206;
    adb2c_push_bits_to_buff(ptr_buff, offset, 1, (u_int32_t)ptr_struct->device_data);
    offset = 240;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->itoc_entry_crc);
}

void connectx4_itoc_entry_unpack(struct connectx4_itoc_entry *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 8;
    ptr_struct->size = (u_int32_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 22);
    offset = 0;
    ptr_struct->type = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 34;
    ptr_struct->param0 = (u_int32_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 30);
    offset = 33;
    ptr_struct->cache_line_crc = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 32;
    ptr_struct->zipped_image = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 64;
    ptr_struct->param1 = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    offset = 161;
    ptr_struct->flash_addr = (u_int32_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 29);
    offset = 160;
    ptr_struct->relative_addr = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 208;
    ptr_struct->section_crc = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
    offset = 207;
    ptr_struct->no_crc = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 206;
    ptr_struct->device_data = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 1);
    offset = 240;
    ptr_struct->itoc_entry_crc = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
}

void connectx4_itoc_entry_print(const struct connectx4_itoc_entry *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_itoc_entry ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "size                 : " UH_FMT "\n", ptr_struct->size);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "type                 : " UH_FMT "\n", ptr_struct->type);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "param0               : " UH_FMT "\n", ptr_struct->param0);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "cache_line_crc       : " UH_FMT "\n", ptr_struct->cache_line_crc);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "zipped_image         : " UH_FMT "\n", ptr_struct->zipped_image);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "param1               : " U32H_FMT "\n", ptr_struct->param1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "flash_addr           : " UH_FMT "\n", ptr_struct->flash_addr);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "relative_addr        : " UH_FMT "\n", ptr_struct->relative_addr);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "section_crc          : " UH_FMT "\n", ptr_struct->section_crc);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "no_crc               : " UH_FMT "\n", ptr_struct->no_crc);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "device_data          : " UH_FMT "\n", ptr_struct->device_data);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "itoc_entry_crc       : " UH_FMT "\n", ptr_struct->itoc_entry_crc);
}

unsigned int connectx4_itoc_entry_size(void)
{
    return CONNECTX4_ITOC_ENTRY_SIZE;
}

void connectx4_itoc_entry_dump(const struct connectx4_itoc_entry *ptr_struct, FILE *fd)
{
    connectx4_itoc_entry_print(ptr_struct, fd, 0);
}

void connectx4_itoc_header_pack(const struct connectx4_itoc_header *ptr_struct, u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->signature0);
    offset = 32;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->signature1);
    offset = 64;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->signature2);
    offset = 96;
    adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int32_t)ptr_struct->signature3);
    offset = 152;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->version);
    offset = 128;
    adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->flash_layout_version);
    offset = 240;
    adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->itoc_entry_crc);
}

void connectx4_itoc_header_unpack(struct connectx4_itoc_header *ptr_struct, const u_int8_t *ptr_buff)
{
    u_int32_t offset;

    offset = 0;
    ptr_struct->signature0 = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    offset = 32;
    ptr_struct->signature1 = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    offset = 64;
    ptr_struct->signature2 = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    offset = 96;
    ptr_struct->signature3 = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
    offset = 152;
    ptr_struct->version = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 128;
    ptr_struct->flash_layout_version = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);
    offset = 240;
    ptr_struct->itoc_entry_crc = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);
}

void connectx4_itoc_header_print(const struct connectx4_itoc_header *ptr_struct, FILE *fd, int indent_level)
{
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "======== connectx4_itoc_header ========\n");

    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signature0           : " U32H_FMT "\n", ptr_struct->signature0);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signature1           : " U32H_FMT "\n", ptr_struct->signature1);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signature2           : " U32H_FMT "\n", ptr_struct->signature2);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "signature3           : " U32H_FMT "\n", ptr_struct->signature3);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "version              : " UH_FMT "\n", ptr_struct->version);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "flash_layout_version : " UH_FMT "\n", ptr_struct->flash_layout_version);
    adb2c_add_indentation(fd, indent_level);
    fprintf(fd, "itoc_entry_crc       : " UH_FMT "\n", ptr_struct->itoc_entry_crc);
}

unsigned int connectx4_itoc_header_size(void)
{
    return CONNECTX4_ITOC_HEADER_SIZE;
}

void connectx4_itoc_header_dump(const struct connectx4_itoc_header *ptr_struct, FILE *fd)
{
    connectx4_itoc_header_print(ptr_struct, fd, 0);
}