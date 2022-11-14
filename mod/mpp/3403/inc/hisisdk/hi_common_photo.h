/*
  Copyright (c), 2001-2021, Shenshu Tech. Co., Ltd.
 */

#ifndef __HI_COMMON_PHOTO_H__
#define __HI_COMMON_PHOTO_H__

#include "ot_common_photo.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_PHOTO_HDR_FRAME_NUM OT_PHOTO_HDR_FRAME_NUM
#define HI_PHOTO_MFNR_FRAME_NUM OT_PHOTO_MFNR_FRAME_NUM
#define HI_PHOTO_MIN_WIDTH OT_PHOTO_MIN_WIDTH
#define HI_PHOTO_MIN_HEIGHT OT_PHOTO_MIN_HEIGHT
#define HI_PHOTO_MAX_WIDTH OT_PHOTO_MAX_WIDTH
#define HI_PHOTO_MAX_HEIGHT OT_PHOTO_MAX_HEIGHT
#define HI_PHOTO_HDR_ISO_LEVEL_CNT OT_PHOTO_HDR_ISO_LEVEL_CNT
#define HI_PHOTO_SFNR_ISO_LEVEL_CNT OT_PHOTO_SFNR_ISO_LEVEL_CNT
#define HI_PHOTO_MFNR_ISO_LEVEL_CNT OT_PHOTO_MFNR_ISO_LEVEL_CNT
#define HI_PHOTO_DE_ISO_LEVEL_CNT OT_PHOTO_DE_ISO_LEVEL_CNT
#define HI_PHOTO_MAX_FACE_NUM OT_PHOTO_MAX_FACE_NUM

#define HI_PHOTO_ALG_TYPE_HDR OT_PHOTO_ALG_TYPE_HDR
#define HI_PHOTO_ALG_TYPE_SFNR OT_PHOTO_ALG_TYPE_SFNR
#define HI_PHOTO_ALG_TYPE_MFNR OT_PHOTO_ALG_TYPE_MFNR
#define HI_PHOTO_ALG_TYPE_DE OT_PHOTO_ALG_TYPE_DE
#define HI_PHOTO_ALG_TYPE_BUTT OT_PHOTO_ALG_TYPE_BUTT

typedef ot_photo_alg_type hi_photo_alg_type;
typedef ot_photo_face_info hi_photo_face_info;
typedef ot_photo_dark_motion_detection_param hi_photo_dark_motion_detection_param;
typedef ot_photo_image_fusion_param hi_photo_image_fusion_param;
typedef ot_photo_hdr_coef hi_photo_hdr_coef;
typedef ot_photo_sfnr_iso_strategy hi_photo_sfnr_iso_strategy;
typedef ot_photo_sfnr_coef hi_photo_sfnr_coef;
typedef ot_photo_mfnr_3dnr_iso_strategy hi_photo_mfnr_3dnr_iso_strategy;
typedef ot_photo_mfnr_3dnr_param hi_photo_mfnr_3dnr_param;
typedef ot_photo_mfnr_2dnr_iso_strategy hi_photo_mfnr_2dnr_iso_strategy;
typedef ot_photo_mfnr_2dnr_param hi_photo_mfnr_2dnr_param;
typedef ot_photo_de_iso_strategy hi_photo_de_iso_strategy;
typedef ot_photo_de_coef hi_photo_de_coef;
typedef ot_photo_mfnr_coef hi_photo_mfnr_coef;
typedef ot_photo_alg_coef hi_photo_alg_coef;
typedef ot_photo_alg_init hi_photo_alg_init;
typedef ot_photo_hdr_attr hi_photo_hdr_attr;
typedef ot_photo_sfnr_attr hi_photo_sfnr_attr;
typedef ot_photo_mfnr_attr hi_photo_mfnr_attr;
typedef ot_photo_de_attr hi_photo_de_attr;
typedef ot_photo_alg_attr hi_photo_alg_attr;

#define HI_ERR_PHOTO_NULL_PTR OT_ERR_PHOTO_NULL_PTR
#define HI_ERR_PHOTO_NOT_READY OT_ERR_PHOTO_NOT_READY
#define HI_ERR_PHOTO_INVALID_DEVID OT_ERR_PHOTO_INVALID_DEVID
#define HI_ERR_PHOTO_INVALID_CHNID OT_ERR_PHOTO_INVALID_CHNID
#define HI_ERR_PHOTO_EXIST OT_ERR_PHOTO_EXIST
#define HI_ERR_PHOTO_UNEXIST OT_ERR_PHOTO_UNEXIST
#define HI_ERR_PHOTO_NOT_CFG OT_ERR_PHOTO_NOT_CFG
#define HI_ERR_PHOTO_NOT_SUPPORT OT_ERR_PHOTO_NOT_SUPPORT
#define HI_ERR_PHOTO_NOT_PERM OT_ERR_PHOTO_NOT_PERM
#define HI_ERR_PHOTO_NO_MEM OT_ERR_PHOTO_NO_MEM
#define HI_ERR_PHOTO_NO_BUF OT_ERR_PHOTO_NO_BUF
#define HI_ERR_PHOTO_ILLEGAL_PARAM OT_ERR_PHOTO_ILLEGAL_PARAM
#define HI_ERR_PHOTO_BUSY OT_ERR_PHOTO_BUSY
#define HI_ERR_PHOTO_BUF_EMPTY OT_ERR_PHOTO_BUF_EMPTY

#ifdef __cplusplus
}
#endif
#endif /* __HI_COMMON_PHOTO_H__ */