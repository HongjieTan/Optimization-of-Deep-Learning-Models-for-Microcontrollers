/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Jan 13 14:34:10 2025
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network.h"
#include "network_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "1bcfa6a094bf0909b4c91a6ed26d79fa"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Mon Jan 13 14:34:10 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  pool_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8161, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  pool_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 624, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  pool_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  nl_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  pool_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 60, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  nl_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  pool_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 480, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conversion_82_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 5, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1264, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 880, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13601, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20401, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1560, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 60, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2640, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1360, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2400, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5760, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 480, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1970, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 5, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1920, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4800, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4000, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6000, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14400, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 60, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14400, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 115200, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 480, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2400, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 5, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2816, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 104, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 176, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 224, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5344, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  pool_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  nl_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_8_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5968, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 26912, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0068925609812140465f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06345777213573456f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12570825219154358f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005498465150594711f),
    AI_PACK_INTQ_ZP(-55)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005498465150594711f),
    AI_PACK_INTQ_ZP(-55)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07631854712963104f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1751367598772049f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007479380816221237f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007479380816221237f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07794877886772156f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009129071608185768f),
    AI_PACK_INTQ_ZP(17)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009129071608185768f),
    AI_PACK_INTQ_ZP(17)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08466842025518417f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1372191160917282f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010199788957834244f),
    AI_PACK_INTQ_ZP(29)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010199788957834244f),
    AI_PACK_INTQ_ZP(29)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07895902544260025f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.19559472799301147f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.021485425531864166f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.20830407738685608f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010199788957834244f),
    AI_PACK_INTQ_ZP(29)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009129071608185768f),
    AI_PACK_INTQ_ZP(17)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007479380816221237f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005498465150594711f),
    AI_PACK_INTQ_ZP(-55)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0068925609812140465f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006305891089141369f),
    AI_PACK_INTQ_ZP(-32)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0046562314964830875f),
    AI_PACK_INTQ_ZP(-88)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006831031758338213f, 0.012565338984131813f, 0.007624171674251556f, 0.007951365783810616f, 0.005560602061450481f, 0.013245065696537495f, 0.007299159653484821f, 0.003784606931731105f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004690967965871096f, 0.0019889737013727427f, 0.002661684062331915f, 0.001987527357414365f, 0.0028570531867444515f, 0.0018997365841642022f, 0.0017663456965237856f, 0.0015701375668868423f, 0.0025674751959741116f, 0.0015833647921681404f, 0.002958483761176467f, 0.003562726080417633f, 0.005595135036855936f, 0.005059684161096811f, 0.0011695121647790074f, 0.003529053647071123f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0041177645325660706f, 0.004255895968526602f, 0.00424247095361352f, 0.0052504888735711575f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00041649656486697495f, 0.0006625254754908383f, 0.0004943098756484687f, 0.000747792306356132f, 0.0009020197903737426f, 0.0005981323192827404f, 0.0009422376751899719f, 0.0008187288767658174f, 0.0008567830664105713f, 0.0007609105086885393f, 0.0008922409033402801f, 0.0006983190542086959f, 0.001289062900468707f, 0.0008218106813728809f, 0.0009534030687063932f, 0.0006276442436501384f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003372237319126725f, 0.0038745736237615347f, 0.0031429086811840534f, 0.00340261566452682f, 0.0037901843897998333f, 0.0037374638486653566f, 0.004955833312124014f, 0.0038411817513406277f, 0.004032833036035299f, 0.004038349259644747f, 0.0035816740710288286f, 0.002648172667250037f, 0.0032478696666657925f, 0.004174505826085806f, 0.004310515243560076f, 0.004269199911504984f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006756551098078489f, 0.019977740943431854f, 0.012829553335905075f, 0.01929662562906742f, 0.025193488225340843f, 0.013213355094194412f, 0.024187972769141197f, 0.01508537121117115f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012850482016801834f, 0.0010696585522964597f, 0.0023506933357566595f, 0.0019463656935840845f, 0.0011170508805662394f, 0.0015719679649919271f, 0.0009329450549557805f, 0.0012645894894376397f, 0.0007546087726950645f, 0.0019027437083423138f, 0.000946369837038219f, 0.0016306056641042233f, 0.00116712914314121f, 0.0009783444693312049f, 0.0010736235417425632f, 0.0008662685286253691f, 0.0013051637215539813f, 0.0015110715758055449f, 0.0012563044438138604f, 0.0016709936317056417f, 0.0021618769969791174f, 0.002412365982308984f, 0.0013499452034011483f, 0.0008296009618788958f, 0.0009487704373896122f, 0.0012304680421948433f, 0.0020137301180511713f, 0.0017593816155567765f, 0.0013013927964493632f, 0.0031155585311353207f, 0.0013129011495038867f, 0.0028475779108703136f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002765223616734147f, 0.004077890422195196f, 0.003022845834493637f, 0.003934926353394985f, 0.0028048818930983543f, 0.003648600308224559f, 0.0036602949257940054f, 0.0035909514408558607f, 0.0030296037439256907f, 0.0028948714025318623f, 0.0033511435613036156f, 0.0029131139162927866f, 0.00282899197191f, 0.0034237115178257227f, 0.003505066968500614f, 0.0033596446737647057f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006463733036071062f, 0.006045549176633358f, 0.0060093277134001255f, 0.004958369769155979f, 0.00625224644318223f, 0.006539622321724892f, 0.0077110882848501205f, 0.008938265033066273f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016152005409821868f, 0.0014093969948589802f, 0.0013739423593506217f, 0.0019257753156125546f, 0.0009413443622179329f, 0.0018078108550980687f, 0.0009957256261259317f, 0.0018774585332721472f, 0.0023641781881451607f, 0.0018981638131663203f, 0.0017531641060486436f, 0.001186668872833252f, 0.0019701647106558084f, 0.0018897795816883445f, 0.0011383785167708993f, 0.0014949218602851033f, 0.0010646394221112132f, 0.0010526177939027548f, 0.000934349256567657f, 0.001992610516026616f, 0.001992798177525401f, 0.0018243853701278567f, 0.002054763026535511f, 0.0014690461102873087f, 0.0016282321885228157f, 0.0016021508490666747f, 0.0016081297071650624f, 0.0018022590084001422f, 0.0014456975040957332f, 0.0022716540843248367f, 0.0019030494149774313f, 0.001097393687814474f, 0.001955644926056266f, 0.0011497236555442214f, 0.0009316483046859503f, 0.001531383371911943f, 0.0015988731756806374f, 0.0012712188763543963f, 0.0021788731683045626f, 0.0012457971461117268f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0026769344694912434f, 0.002479003043845296f, 0.0026931543834507465f, 0.003392188111320138f, 0.003026276361197233f, 0.0029966349247843027f, 0.002901775762438774f, 0.0030461486894637346f, 0.003294519381597638f, 0.0033835929352790117f, 0.0034586440306156874f, 0.002884694142267108f, 0.0031129561830312014f, 0.002707657404243946f, 0.003069981699809432f, 0.003081104950979352f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033123164903372526f, 0.003930489998310804f, 0.004700422752648592f, 0.004532781895250082f, 0.0037072557024657726f, 0.004831004422158003f, 0.004814059939235449f, 0.004288186319172382f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002843094989657402f, 0.002801136113703251f, 0.00303438538685441f, 0.0023805713281035423f, 0.0032262851018458605f, 0.0025167767889797688f, 0.0026123574934899807f, 0.0023380257189273834f, 0.0027132926043123007f, 0.002810566918924451f, 0.0026734767016023397f, 0.0031149794813245535f, 0.0027444239240139723f, 0.0042319344356656075f, 0.003405264113098383f, 0.0016006581718102098f, 0.0028504806105047464f, 0.003350045531988144f, 0.0028603007085621357f, 0.003683016635477543f, 0.002524669747799635f, 0.004942865110933781f, 0.0026285951025784016f, 0.002990046516060829f, 0.0026247131172567606f, 0.002110344124957919f, 0.0034002522006630898f, 0.0017013372853398323f, 0.00225004437379539f, 0.003471691394224763f, 0.00243722228333354f, 0.0028680446557700634f, 0.0040200501680374146f, 0.0033723502419888973f, 0.0026779966428875923f, 0.0029382072389125824f, 0.0029198869597166777f, 0.0027540295850485563f, 0.004659219179302454f, 0.002826952375471592f, 0.0026342154014855623f, 0.004245643503963947f, 0.0030276370234787464f, 0.0024263737723231316f, 0.004075157456099987f, 0.0022214269265532494f, 0.003304030979052186f, 0.002031956799328327f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006469463463872671f, 0.005549546796828508f, 0.003988133277744055f, 0.0025805248878896236f, 0.003454708494246006f, 0.003267324762418866f, 0.0021947731729596853f, 0.005043553654104471f, 0.002469888422638178f, 0.002098639728501439f, 0.003950834274291992f, 0.005954124499112368f, 0.007692018989473581f, 0.004015687387436628f, 0.004228275269269943f, 0.002365953754633665f, 0.0033683015499264f, 0.0016088394913822412f, 0.0032045419793576f, 0.004116954281926155f, 0.006047302391380072f, 0.0029919655062258244f, 0.0043307216838002205f, 0.003315941197797656f, 0.0027540295850485563f, 0.002727752085775137f, 0.003698949934914708f, 0.0020344355143606663f, 0.0031501848716288805f, 0.0028678865637630224f, 0.004103569313883781f, 0.0030149330850690603f, 0.0025194601621478796f, 0.002736469265073538f, 0.0024288855493068695f, 0.0069986674934625626f, 0.00190455571282655f, 0.0035970075987279415f, 0.003321048803627491f, 0.004478175193071365f, 0.003866965649649501f, 0.002943233121186495f, 0.005442454945296049f, 0.0030699202325195074f, 0.0035784326028078794f, 0.004368164110928774f, 0.0021147343795746565f, 0.0030205813236534595f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003442251356318593f, 0.002560166409239173f, 0.003014516783878207f, 0.0044475034810602665f, 0.0031124602537602186f, 0.003380486508831382f, 0.0038449473213404417f, 0.002955704228952527f, 0.004145486745983362f, 0.0032770808320492506f, 0.002902866108343005f, 0.003596891649067402f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008264845819212496f, 0.0005996309337206185f, 0.000695699593052268f, 0.00044922082452103496f, 0.0005572038935497403f, 0.0005564907332882285f, 0.0006685962434858084f, 0.0004947123816236854f, 0.0008690718677826226f, 0.0005677778390236199f, 0.0004990657325834036f, 0.0005184894544072449f, 0.0006471549859270453f, 0.0008221504976972938f, 0.0003844177408609539f, 0.0006362798158079386f, 0.0005013965419493616f, 0.0006453635869547725f, 0.0006053271354176104f, 0.0005248638335615396f, 0.0011630951194092631f, 0.0007948208367452025f, 0.0004517908673733473f, 0.0004193465574644506f, 0.0005320343188941479f, 0.00038389323162846267f, 0.0007016808376647532f, 0.0006708424771204591f, 0.0008227338548749685f, 0.0007598049123771489f, 0.0006493254331871867f, 0.0006191737484186888f, 0.0008795276517048478f, 0.0005327158723957837f, 0.0005630775121971965f, 0.0006093209958635271f, 0.0006717109936289489f, 0.00045048713218420744f, 0.0006794494111090899f, 0.0004797393048647791f, 0.0006491545937024057f, 0.0006172845023684204f, 0.0004944495158270001f, 0.0005695211002603173f, 0.0004884920199401677f, 0.0006478367140516639f, 0.000478423316963017f, 0.0006041167071089149f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005707440432161093f, 0.00789667572826147f, 0.008401326835155487f, 0.006675222422927618f, 0.010669245384633541f, 0.007375817280262709f, 0.009401454590260983f, 0.006889522075653076f, 0.00661746459081769f, 0.008341715671122074f, 0.010747769847512245f, 0.007417128887027502f, 0.00597200496122241f, 0.006380664650350809f, 0.008578590117394924f, 0.009028337895870209f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029792452696710825f, 0.0028945603407919407f, 0.0027161419857293367f, 0.0031447357032448053f, 0.0021543155889958143f, 0.004331678617745638f, 0.002394854323938489f, 0.0036358183715492487f, 0.0024892764631658792f, 0.0027790393214672804f, 0.0021132873371243477f, 0.0027886158786714077f, 0.0035955170169472694f, 0.002929841401055455f, 0.002667706925421953f, 0.0032103133853524923f, 0.0026235664263367653f, 0.004095475189387798f, 0.0019583371467888355f, 0.002698249649256468f, 0.0017719955649226904f, 0.003721339860931039f, 0.0023364536464214325f, 0.0030802488327026367f, 0.0031780439894646406f, 0.003396900836378336f, 0.001983022317290306f, 0.0028661391697824f, 0.002662509446963668f, 0.0023907439317554235f, 0.003527416381984949f, 0.002596653066575527f, 0.002794853178784251f, 0.003888297826051712f, 0.002104926621541381f, 0.0025572071317583323f, 0.0027425470761954784f, 0.0022438468877226114f, 0.0033261922653764486f, 0.0026631380897015333f, 0.002490367041900754f, 0.0015057894634082913f, 0.0040479060262441635f, 0.003575748996809125f, 0.003613312728703022f, 0.0020296741276979446f, 0.0032703420147299767f, 0.00389282638207078f, 0.0026586030144244432f, 0.0022551652509719133f, 0.003902391530573368f, 0.002446911297738552f, 0.004211108200252056f, 0.0030797880608588457f, 0.0026619755662977695f, 0.004258662927895784f, 0.002891058102250099f, 0.0032338660676032305f, 0.0025149527937173843f, 0.002237841719761491f, 0.002361163031309843f, 0.0019244643626734614f, 0.002185639925301075f, 0.002802936127409339f, 0.0029728624504059553f, 0.0039862971752882f, 0.0021908541675657034f, 0.003280532779172063f, 0.0020761622581630945f, 0.002957685384899378f, 0.002437831601127982f, 0.0038010941352695227f, 0.0037468718364834785f, 0.002683623693883419f, 0.0033787505235522985f, 0.003280594479292631f, 0.002899735001847148f, 0.002342105144634843f, 0.0022433840204030275f, 0.004355316981673241f, 0.0029194606468081474f, 0.0034753023646771908f, 0.002675754949450493f, 0.00465394277125597f, 0.0024921877775341272f, 0.0030351344030350447f, 0.002223376417532563f, 0.003265529405325651f, 0.0026464485563337803f, 0.001840104698203504f, 0.003063600743189454f, 0.0029836143366992474f, 0.003375246189534664f, 0.0024931461084634066f, 0.0023839210625737906f, 0.0028162505477666855f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002633620984852314f, 0.0060264961794018745f, 0.002904711989685893f, 0.005291121546179056f, 0.004445700906217098f, 0.0031702748965471983f, 0.005232356954365969f, 0.00890600960701704f, 0.007021888624876738f, 0.0057988655753433704f, 0.005404692608863115f, 0.005846997257322073f, 0.004961550701409578f, 0.005656025372445583f, 0.0027270920109003782f, 0.003955902066081762f, 0.003911127801984549f, 0.0043125455267727375f, 0.004592421464622021f, 0.003490558359771967f, 0.002030193107202649f, 0.00538213737308979f, 0.0058099557645618916f, 0.0030004451982676983f, 0.0031396292615681887f, 0.007169786840677261f, 0.0017886480782181025f, 0.0020568338222801685f, 0.002610804047435522f, 0.0032040593214333057f, 0.0047782245092093945f, 0.002531758276745677f, 0.004998167976737022f, 0.0039259037002921104f, 0.006971785333007574f, 0.003651825711131096f, 0.0021247565746307373f, 0.0075871581211686134f, 0.005510638002306223f, 0.0028565244283527136f, 0.004937535151839256f, 0.007576849777251482f, 0.002763644326478243f, 0.002949358196929097f, 0.002371125156059861f, 0.003185846144333482f, 0.00218112301081419f, 0.004269825294613838f, 0.004572816658765078f, 0.002993691014125943f, 0.0051870993338525295f, 0.0024463867302984f, 0.0033181982580572367f, 0.0028257842641323805f, 0.0052318209782242775f, 0.0029395606834441423f, 0.002852723468095064f, 0.003127869451418519f, 0.0023013001773506403f, 0.001953745260834694f, 0.002926114946603775f, 0.003237364115193486f, 0.0024148174561560154f, 0.00313327694311738f, 0.004366070963442326f, 0.0043669166043400764f, 0.004426079802215099f, 0.004480073228478432f, 0.002591149415820837f, 0.003856829833239317f, 0.0025987799745053053f, 0.005192845594137907f, 0.0021921806037425995f, 0.004635969176888466f, 0.002249606419354677f, 0.0036563770845532417f, 0.003427715040743351f, 0.00316462735645473f, 0.0036673573777079582f, 0.004763398785144091f, 0.0029878460336476564f, 0.006427420303225517f, 0.0033333266619592905f, 0.0028616583440452814f, 0.0029366505332291126f, 0.00286296964623034f, 0.006617940496653318f, 0.002462297910824418f, 0.0027205850929021835f, 0.0042405324056744576f, 0.0042890505865216255f, 0.006478769239038229f, 0.004786140285432339f, 0.006590398959815502f, 0.0041525475680828094f, 0.002627333626151085f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0020002061501145363f, 0.00251575093716383f, 0.002178393304347992f, 0.001871011801995337f, 0.003631169442087412f, 0.0036363378167152405f, 0.0021026520989835262f, 0.0030504383612424135f, 0.0019329837523400784f, 0.002965277759358287f, 0.002254702150821686f, 0.0031879388261586428f, 0.0020477785728871822f, 0.002853671321645379f, 0.002109611639752984f, 0.002540941582992673f, 0.00204856158234179f, 0.0025845197960734367f, 0.0018959661247208714f, 0.002174835419282317f, 0.002893409924581647f, 0.0029020372312515974f, 0.001938985544256866f, 0.002407926367595792f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00043046943028457463f, 0.0005060265539214015f, 0.0004847745003644377f, 0.0006288337172009051f, 0.00047907684347592294f, 0.0003764387802220881f, 0.00039878065581433475f, 0.0003524462808854878f, 0.00045412135659717023f, 0.00036662345519289374f, 0.00042973970994353294f, 0.0004046164976898581f, 0.0003778387908823788f, 0.0006504616467282176f, 0.0007140271482057869f, 0.0004511872830335051f, 0.00042375060729682446f, 0.0004797252477146685f, 0.0004722702142316848f, 0.0004929050337523222f, 0.0004107132845092565f, 0.00037263642298057675f, 0.00040388136403635144f, 0.0004634651413653046f, 0.00044079721556045115f, 0.00033935316605493426f, 0.0006217528716661036f, 0.00043612715671770275f, 0.0004995940253138542f, 0.00037441510357894003f, 0.0005098944529891014f, 0.0004833983548451215f, 0.000338934944011271f, 0.0004931270959787071f, 0.0004264276649337262f, 0.0003975546860601753f, 0.00040459478623233736f, 0.0004297621489968151f, 0.0004311352677177638f, 0.00039344269316643476f, 0.0004059937200509012f, 0.0007302201702259481f, 0.000725950812920928f, 0.00038987616426311433f, 0.0005359374335967004f, 0.0003944379568565637f, 0.00037881097523495555f, 0.0003439471765886992f, 0.00047404898214153945f, 0.0006522324401885271f, 0.0005656040157191455f, 0.0005111542996019125f, 0.0003586866660043597f, 0.0005612394888885319f, 0.0004750930529553443f, 0.0003962454793509096f, 0.00037804298335686326f, 0.0005152146331965923f, 0.0004526615666691214f, 0.0004845485382247716f, 0.00033157464349642396f, 0.0005027535371482372f, 0.0005199434817768633f, 0.00043084417120553553f, 0.000451273110229522f, 0.0004584062553476542f, 0.00047049784916453063f, 0.00038066753768362105f, 0.0007855245494283736f, 0.0003659272042568773f, 0.00038347282679751515f, 0.00037457223515957594f, 0.000429335399530828f, 0.00038081829552538693f, 0.0003460831940174103f, 0.00047726690536364913f, 0.0005336391623131931f, 0.0004733663226943463f, 0.00046973591088317335f, 0.00040842307498678565f, 0.0006209778948687017f, 0.00036512737278826535f, 0.00044850478298030794f, 0.0005673698615282774f, 0.0006595865124836564f, 0.0004681006248574704f, 0.00041377919842489064f, 0.000681077188346535f, 0.00037648799479939044f, 0.0003174039302393794f, 0.0004567619471345097f, 0.0003869755601044744f, 0.0005592017550952733f, 0.0004128938599023968f, 0.0005230294191278517f, 0.0005855110939592123f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036090754438191652f, 0.0038201208226382732f, 0.004815496038645506f, 0.003482440486550331f, 0.007708944380283356f, 0.004654244054108858f, 0.003270885907113552f, 0.006048867944628f, 0.004475315101444721f, 0.004878167062997818f, 0.004553274251520634f, 0.004202338866889477f, 0.003496013581752777f, 0.004258644767105579f, 0.0038244621828198433f, 0.0042476961389184f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001539351069368422f, 0.0019216722575947642f, 0.0017655751435086131f, 0.002088970737531781f, 0.0019929606933146715f, 0.00282584922388196f, 0.0021553707774728537f, 0.002019111765548587f, 0.0029700857121497393f, 0.002448370447382331f, 0.0021614436991512775f, 0.0029190261848270893f, 0.002266417955979705f, 0.0021694255992770195f, 0.002101171063259244f, 0.0017196492990478873f, 0.0016319358255714178f, 0.002150445943698287f, 0.0019820670131593943f, 0.002711809938773513f, 0.0019523686496540904f, 0.0015034102834761143f, 0.002194196917116642f, 0.002652544528245926f, 0.00224186759442091f, 0.002213150030001998f, 0.002016721060499549f, 0.002128157764673233f, 0.0014176005497574806f, 0.0016497053438797593f, 0.0016789811197668314f, 0.001840126351453364f, 0.0018379220273345709f, 0.0015627972315996885f, 0.002182337688282132f, 0.0022039199247956276f, 0.0021895007230341434f, 0.0022547037806361914f, 0.001958591863512993f, 0.0016826448263600469f, 0.0024052183143794537f, 0.0020245977211743593f, 0.0025012593250721693f, 0.0021165539510548115f, 0.002203206764534116f, 0.002325033536180854f, 0.0022483384236693382f, 0.0015272615710273385f, 0.0023273814003914595f, 0.0023441961966454983f, 0.0019270154880359769f, 0.0027327362913638353f, 0.0023584847804158926f, 0.0014931444311514497f, 0.002229290548712015f, 0.0023460781667381525f, 0.0016820813762024045f, 0.0019143682438880205f, 0.002368025481700897f, 0.0021649987902492285f, 0.0017436164198443294f, 0.0022134368773549795f, 0.0020665843039751053f, 0.0024656725581735373f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001880891970358789f, 0.0047793397679924965f, 0.0022328111808747053f, 0.0014602673472836614f, 0.0037585634272545576f, 0.004450435750186443f, 0.003175468184053898f, 0.005790801253169775f, 0.005742096807807684f, 0.0017741129267960787f, 0.0037691358011215925f, 0.0043794577941298485f, 0.0024637863971292973f, 0.0023635784164071083f, 0.0034098438918590546f, 0.0023056413047015667f, 0.003930728882551193f, 0.004511361010372639f, 0.006908012554049492f, 0.002955035073682666f, 0.005263385362923145f, 0.002542017260566354f, 0.0023134835064411163f, 0.004645549226552248f, 0.0024954434484243393f, 0.006165622733533382f, 0.005209061782807112f, 0.0023331409320235252f, 0.0018455828540027142f, 0.0022673634812235832f, 0.0027225816156715155f, 0.003977712243795395f, 0.003168265800923109f, 0.003327408339828253f, 0.005957216955721378f, 0.0025655829813331366f, 0.00291300262324512f, 0.005164725240319967f, 0.0015418179100379348f, 0.002142800949513912f, 0.0025963166262954473f, 0.002297643106430769f, 0.003648838959634304f, 0.0032377433963119984f, 0.0025594548787921667f, 0.005891728680580854f, 0.003940556198358536f, 0.002093822928145528f, 0.0037785586901009083f, 0.0026196425314992666f, 0.002198424655944109f, 0.002483782358467579f, 0.0036129129584878683f, 0.007704275194555521f, 0.0029400542844086885f, 0.002794709289446473f, 0.002807110082358122f, 0.003734885947778821f, 0.003676158841699362f, 0.00325778522528708f, 0.002369010355323553f, 0.00302576064132154f, 0.0021340211387723684f, 0.0026722033508121967f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029124415013939142f, 0.0024285789113491774f, 0.0025335969403386116f, 0.003085222328081727f, 0.003228929825127125f, 0.003435659222304821f, 0.002797767287120223f, 0.0026502523105591536f, 0.0027246035169810057f, 0.003059825161471963f, 0.0030907453037798405f, 0.003043180098757148f, 0.0026326507795602083f, 0.0026395453605800867f, 0.002761155366897583f, 0.0030856230296194553f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005385156255215406f, 0.0007641339907422662f, 0.0005423468537628651f, 0.00039805113920010626f, 0.0004682576982304454f, 0.0005756974569521844f, 0.000516833330038935f, 0.0006514150882139802f, 0.0004952338058501482f, 0.0005291617708280683f, 0.0004226523742545396f, 0.0005771339638158679f, 0.000624045089352876f, 0.0004492751322686672f, 0.0004988657310605049f, 0.00048642107867635787f, 0.0004305784241296351f, 0.0003935244749300182f, 0.0005647797952406108f, 0.00047991436440497637f, 0.0005098373512737453f, 0.0005415696068666875f, 0.0004943322273902595f, 0.0006414299132302403f, 0.0005898402887396514f, 0.0005762616638094187f, 0.0005222316831350327f, 0.0004429968830663711f, 0.00042094039963558316f, 0.0003829999768640846f, 0.0007140303496271372f, 0.000448047328973189f, 0.0003703324473462999f, 0.000518426822964102f, 0.0005444067064672709f, 0.0008705849177204072f, 0.0005879129748791456f, 0.0003389434132259339f, 0.0004880305496044457f, 0.000411250744946301f, 0.0005736013408750296f, 0.0004674746887758374f, 0.0005255649448372424f, 0.0004387958615552634f, 0.0005909394240006804f, 0.0005582969170063734f, 0.000443261640612036f, 0.00043462219764478505f, 0.0005639698356389999f, 0.0006956643192097545f, 0.0005929165054112673f, 0.0006403131992556155f, 0.00038210180355235934f, 0.0005883611156605184f, 0.0005398859502747655f, 0.0005441084504127502f, 0.0005641876487061381f, 0.0005398847279138863f, 0.0005956594250164926f, 0.00035109592135995626f, 0.0004520859511103481f, 0.0005010108579881489f, 0.00035023066448047757f, 0.0006196240428835154f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0040337457321584225f, 0.004513017367571592f, 0.003856092458590865f, 0.0038580559194087982f, 0.006238000001758337f, 0.00568720418959856f, 0.006378644146025181f, 0.0031737301032990217f, 0.003915983717888594f, 0.005997511558234692f, 0.005769410170614719f, 0.005825162399560213f, 0.004653885494917631f, 0.0029037275817245245f, 0.003461746498942375f, 0.0034536714665591717f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013442487688735127f, 0.0023123931605368853f, 0.0025798410642892122f, 0.001159893348813057f, 0.0012242934899404645f, 0.0015400255797430873f, 0.0018295306945219636f, 0.0023263765033334494f, 0.0010959780775010586f, 0.0013650803593918681f, 0.0015589906834065914f, 0.00196324591524899f, 0.0017029898008331656f, 0.0014148481423035264f, 0.0019456673180684447f, 0.002679315162822604f, 0.0019514247542247176f, 0.0015902778832241893f, 0.0015333055052906275f, 0.0015073984395712614f, 0.0017557073151692748f, 0.002285914495587349f, 0.0017813044833019376f, 0.0017167857149615884f, 0.0017130434280261397f, 0.0015799840912222862f, 0.0014566307654604316f, 0.0015040637226775289f, 0.001138010062277317f, 0.0011821043444797397f, 0.001923948060721159f, 0.0013332547387108207f, 0.001165915746241808f, 0.0011269996175542474f, 0.001580644748173654f, 0.001594063825905323f, 0.0018395998049527407f, 0.0017792670987546444f, 0.0020525166764855385f, 0.0017261930042877793f, 0.0016294807428494096f, 0.0018023478332906961f, 0.0018628478283062577f, 0.0016690656775608659f, 0.0026623927988111973f, 0.0017607186455279589f, 0.0011778883635997772f, 0.0010713828960433602f, 0.001351377461105585f, 0.0021640234626829624f, 0.0015599796315655112f, 0.0021950234659016132f, 0.001452699420042336f, 0.0015702220844104886f, 0.0022399234585464f, 0.001298773568123579f, 0.0023616196122020483f, 0.0016628607409074903f, 0.0014965286245569587f, 0.0018227180698886514f, 0.0019168939907103777f, 0.0014582161093130708f, 0.0013757685665041208f, 0.0016698598628863692f, 0.0009189825505018234f, 0.001369509263895452f, 0.001922091469168663f, 0.001820397679693997f, 0.001733741955831647f, 0.0011211506789550185f, 0.0014988714829087257f, 0.0019828088115900755f, 0.0017528870375826955f, 0.0022023722995072603f, 0.0018049435457214713f, 0.001729050069116056f, 0.0016703209839761257f, 0.0013955495087429881f, 0.0014564060838893056f, 0.0017534260405227542f, 0.0012752271723002195f, 0.0017150964122265577f, 0.0013003542553633451f, 0.0018163719214498997f, 0.002073547337204218f, 0.0010300267022103071f, 0.0013095756294205785f, 0.0025822396855801344f, 0.0016495874151587486f, 0.001571832923218608f, 0.0013252042699605227f, 0.0015234658494591713f, 0.001154941855929792f, 0.0017948613967746496f, 0.002026896458119154f, 0.0017434414476156235f, 0.002229558303952217f, 0.0015076401177793741f, 0.0018738113576546311f, 0.0017495844513177872f, 0.0016455362783744931f, 0.00242067058570683f, 0.0020694429986178875f, 0.002127392217516899f, 0.0019448515959084034f, 0.0019523808732628822f, 0.002533384133130312f, 0.0019017943413928151f, 0.0015324278501793742f, 0.0013424453791230917f, 0.0016448965761810541f, 0.0012086991919204593f, 0.0017846501432359219f, 0.002003488829359412f, 0.002727688755840063f, 0.0010463334619998932f, 0.0020655302796512842f, 0.0015572530683130026f, 0.0018373659113422036f, 0.0020325868390500546f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003485900117084384f, 0.00260776630602777f, 0.0024788121227174997f, 0.003724675392732024f, 0.004421995487064123f, 0.0039577241986989975f, 0.004696091171354055f, 0.002750163432210684f, 0.0046510542742908f, 0.006384191103279591f, 0.006796213332563639f, 0.002888735616579652f, 0.0027354038320481777f, 0.006101291626691818f, 0.004946333821862936f, 0.003970755729824305f, 0.003584870370104909f, 0.005509163718670607f, 0.004358218517154455f, 0.004580444656312466f, 0.0020241611637175083f, 0.004212808329612017f, 0.004588761832565069f, 0.003994281403720379f, 0.003135986626148224f, 0.0032874401658773422f, 0.002821000525727868f, 0.004369279835373163f, 0.0023962680716067553f, 0.0062771933153271675f, 0.0027222137432545424f, 0.0022002023179084063f, 0.004396494477987289f, 0.005347891245037317f, 0.001777250086888671f, 0.001733971992507577f, 0.0037591159343719482f, 0.003869780106469989f, 0.00205233134329319f, 0.0031307111494243145f, 0.005785995163023472f, 0.006610787473618984f, 0.003329155035316944f, 0.0037016398273408413f, 0.0018176910234615207f, 0.0022082440555095673f, 0.0031349598430097103f, 0.005519638303667307f, 0.0038947835564613342f, 0.004811737686395645f, 0.0023650317452847958f, 0.0032935761846601963f, 0.0034161650110036135f, 0.0026002847589552402f, 0.0022302998695522547f, 0.002475465415045619f, 0.002768510254099965f, 0.0030494763050228357f, 0.002549315569922328f, 0.0025825626216828823f, 0.004047859460115433f, 0.0026747628580778837f, 0.003689396195113659f, 0.0038758337032049894f, 0.006251695565879345f, 0.005016977898776531f, 0.0027252782601863146f, 0.005315147340297699f, 0.003996165934950113f, 0.004324642475694418f, 0.005276633892208338f, 0.0037692904006689787f, 0.0019030760740861297f, 0.003827329259365797f, 0.002221570583060384f, 0.005003396887332201f, 0.0040873028337955475f, 0.0031196188647300005f, 0.0022711167111992836f, 0.0038460653740912676f, 0.001831685658544302f, 0.004681052174419165f, 0.0027969121001660824f, 0.002488984726369381f, 0.004067173693329096f, 0.005935678258538246f, 0.0034157256595790386f, 0.0023210772778838873f, 0.00187029002700001f, 0.0032677864655852318f, 0.0036531821824610233f, 0.0024592240806668997f, 0.004941767547279596f, 0.002466228324919939f, 0.0027695901226252317f, 0.0037757998798042536f, 0.0026750897523015738f, 0.0031569856218993664f, 0.004993876907974482f, 0.004388092551380396f, 0.004096874501556158f, 0.006173658650368452f, 0.0039439438842237f, 0.0019540367648005486f, 0.0029876127373427153f, 0.0029560551047325134f, 0.00234995293430984f, 0.002531958743929863f, 0.0021695196628570557f, 0.003035453613847494f, 0.0032871272414922714f, 0.002378477482125163f, 0.004871029872447252f, 0.002350175753235817f, 0.002675167052075267f, 0.0017711075488477945f, 0.0035378916654735804f, 0.002719234675168991f, 0.0037879508454352617f, 0.002730437321588397f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003200095146894455f, 0.002933812327682972f, 0.0021057503763586283f, 0.002763657597824931f, 0.0023724480997771025f, 0.0017110430635511875f, 0.0016665509901940823f, 0.00323488749563694f, 0.0035072872415184975f, 0.0017244277987629175f, 0.002047553425654769f, 0.0018690574215725064f, 0.0017583906883373857f, 0.0032596727833151817f, 0.0023618738632649183f, 0.0028098986949771643f, 0.0023544577416032553f, 0.002077131299301982f, 0.0018728930735960603f, 0.002232941798865795f, 0.0029365208465605974f, 0.0018877445254474878f, 0.0025374675169587135f, 0.002707306295633316f, 0.003054868895560503f, 0.0017221842426806688f, 0.0026497829239815474f, 0.0016478708712384105f, 0.002782595343887806f, 0.0026415700558573008f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00041564469574950635f, 0.00029817302129231393f, 0.0004924344830214977f, 0.00039294749149121344f, 0.00046104713692329824f, 0.0003522986953612417f, 0.0004859185719396919f, 0.0005428750300779939f, 0.0007145232520997524f, 0.0006086464272812009f, 0.0004418979515321553f, 0.00043379730777814984f, 0.0004937351332046092f, 0.0004131598398089409f, 0.0003645253018476069f, 0.0003920152666978538f, 0.00048049131873995066f, 0.0006008539348840714f, 0.00043480200110934675f, 0.0004440548364073038f, 0.0004027632239740342f, 0.0003374364459887147f, 0.0005197852151468396f, 0.00038398546166718006f, 0.0005143904709257185f, 0.0003598190669436008f, 0.00029994509532116354f, 0.00037109971162863076f, 0.00039066781755536795f, 0.0006285292329266667f, 0.0005136422114446759f, 0.0005436316132545471f, 0.00038292797398753464f, 0.0005026768776588142f, 0.00040638408972881734f, 0.000373814778868109f, 0.0005178045248612761f, 0.000408435269491747f, 0.00037718535168096423f, 0.0004136229690629989f, 0.0004236758395563811f, 0.0003599240444600582f, 0.00040666849236004055f, 0.0004284907481633127f, 0.0006486924248747528f, 0.00041582403355278075f, 0.0004541525267995894f, 0.0006660446524620056f, 0.0004433426074683666f, 0.0005950724589638412f, 0.00037897544098086655f, 0.00034580225474201143f, 0.0003742102417163551f, 0.0005455631180666387f, 0.0006129933753982186f, 0.00038071529706940055f, 0.0003703580587171018f, 0.00033539830474182963f, 0.0005502115818671882f, 0.0005968051264062524f, 0.0002971365465782583f, 0.0006547359516844153f, 0.0004444990190677345f, 0.0004759150615427643f, 0.0003705607377924025f, 0.0003421269357204437f, 0.0005525980959646404f, 0.0005461800610646605f, 0.00039437765371985734f, 0.00037454767152667046f, 0.0004979188670404255f, 0.0004430385015439242f, 0.00048797897761687636f, 0.00039694871520623565f, 0.0004921467043459415f, 0.00038475761539302766f, 0.00038155936636030674f, 0.00036142379394732416f, 0.0003894676046911627f, 0.00039290651329793036f, 0.00033870182232931256f, 0.000462513038655743f, 0.00043592130532488227f, 0.0003804341540671885f, 0.0006499322480522096f, 0.0004498653288464993f, 0.00045293717994354665f, 0.00045959060662426054f, 0.00046935322461649776f, 0.0004355543351266533f, 0.0003752336197067052f, 0.0004036432655993849f, 0.0008061534608714283f, 0.000469387712655589f, 0.00038402763311751187f, 0.00035849949927069247f, 0.0004481719224713743f, 0.00043512447155080736f, 0.0005557944532483816f, 0.0005246567889116704f, 0.0003941491013392806f, 0.00037015159614384174f, 0.0004491285071708262f, 0.00039177745929919183f, 0.0004936093464493752f, 0.0004116296477150172f, 0.0003971215628553182f, 0.0004643973952624947f, 0.0004555916239041835f, 0.0006131484406068921f, 0.00034347421023994684f, 0.00038725504418835044f, 0.0004886746173724532f, 0.00045239017345011234f, 0.0004055410681758076f, 0.0005046981968916953f, 0.0004032790020573884f, 0.00046356150414794683f, 0.000355201045749709f, 0.00039659003959968686f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003015497699379921f, 0.0026244239415973425f, 0.0030005164444446564f, 0.003518087090924382f, 0.002403461141511798f, 0.003214652184396982f, 0.0030426860321313143f, 0.0048471237532794476f, 0.0030385253485292196f, 0.003166633192449808f, 0.003033548826351762f, 0.0034172337036579847f, 0.004428640007972717f, 0.003206422785297036f, 0.0033823687117546797f, 0.0031923423521220684f, 0.004267190117388964f, 0.004046156536787748f, 0.0035830014385282993f, 0.0035615696106106043f, 0.0033380729146301746f, 0.006179612595587969f, 0.0032807120587676764f, 0.0016684706788510084f, 0.002718130126595497f, 0.0037716522347182035f, 0.0036971676163375378f, 0.0034649271983653307f, 0.0026675183326005936f, 0.00409599207341671f, 0.0043757762759923935f, 0.0043133520521223545f, 0.0034982075449079275f, 0.004282460082322359f, 0.002407192252576351f, 0.003226209431886673f, 0.0040014260448515415f, 0.0034601986408233643f, 0.0031027109362185f, 0.004207473248243332f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016665328294038773f, 0.0017801631474867463f, 0.0020286741200834513f, 0.0019804458133876324f, 0.0016868687234818935f, 0.001443179091438651f, 0.0021419015247374773f, 0.0018855087691918015f, 0.0011835270561277866f, 0.001596959074959159f, 0.001557392766699195f, 0.001720805186778307f, 0.0016074345912784338f, 0.0014858271460980177f, 0.0014315872685983777f, 0.002743673278018832f, 0.0013873743591830134f, 0.002189257647842169f, 0.001108960248529911f, 0.0009860163554549217f, 0.0015143342316150665f, 0.001786183100193739f, 0.0010928511619567871f, 0.0015801906120032072f, 0.0015681252116337419f, 0.0016385613707825541f, 0.0011822792002931237f, 0.0015123800840228796f, 0.0013641798868775368f, 0.001709170755930245f, 0.0010143856052309275f, 0.0017118580872192979f, 0.001958039589226246f, 0.002031676471233368f, 0.002012531505897641f, 0.0013901239726692438f, 0.0020283060148358345f, 0.0019167778082191944f, 0.0014273206470534205f, 0.0027084886096417904f, 0.0019495680462568998f, 0.0020160444546490908f, 0.0016756807453930378f, 0.001614785403944552f, 0.0015984437195584178f, 0.0012792195193469524f, 0.0016261821147054434f, 0.0021458077244460583f, 0.0015564410714432597f, 0.0018489432986825705f, 0.0020843446254730225f, 0.0013210776960477233f, 0.0017411374719813466f, 0.0019683754071593285f, 0.0013074999442324042f, 0.0015088526997715235f, 0.0014779389603063464f, 0.0014939417596906424f, 0.0016857071314007044f, 0.0012298963265493512f, 0.0021297242492437363f, 0.0017564668087288737f, 0.0018841780256479979f, 0.0018017032416537404f, 0.001690644072368741f, 0.0020143380388617516f, 0.00211072014644742f, 0.002377573400735855f, 0.0021687617991119623f, 0.0018283603712916374f, 0.0015796420630067587f, 0.0026185507886111736f, 0.002021340886130929f, 0.002212161896750331f, 0.002205667784437537f, 0.002010280964896083f, 0.0019709093030542135f, 0.001642007613554597f, 0.0014529753243550658f, 0.00245907180942595f, 0.001919982023537159f, 0.0016317691188305616f, 0.0020571991335600615f, 0.0019464356591925025f, 0.002533343620598316f, 0.001230133231729269f, 0.00136319431476295f, 0.001349673024378717f, 0.0013708407059311867f, 0.0014216036070138216f, 0.002181614050641656f, 0.0013326113112270832f, 0.0021730775479227304f, 0.0011038108495995402f, 0.0013201487017795444f, 0.0019183227559551597f, 0.0011137935798615217f, 0.0018257810734212399f, 0.0017085181316360831f, 0.0012763869017362595f, 0.001487185712903738f, 0.0018914615502581f, 0.0018825042061507702f, 0.0018579465104267001f, 0.0016580376541242003f, 0.001756169949658215f, 0.0018235337920486927f, 0.0013882315251976252f, 0.0020241914317011833f, 0.0012912418460473418f, 0.0015591683331876993f, 0.0011877480428665876f, 0.0018723608227446675f, 0.0015063942410051823f, 0.001057682791724801f, 0.00265731499530375f, 0.0022135560866445303f, 0.0009903475875034928f, 0.001784278778359294f, 0.001597865717485547f, 0.0013961016666144133f, 0.001169513096101582f, 0.0018509317887946963f, 0.0012017360422760248f, 0.0017651591915637255f, 0.00260234740562737f, 0.001245451858267188f, 0.0016091238940134645f, 0.0017014608019962907f, 0.002452380955219269f, 0.0023800008930265903f, 0.0028910753317177296f, 0.0018557135481387377f, 0.0013939811615273356f, 0.0011074437061324716f, 0.0015172316925600171f, 0.0018784351414069533f, 0.00168552715331316f, 0.0015254714526236057f, 0.002281583147123456f, 0.0013792136451229453f, 0.0017007185379043221f, 0.001968950964510441f, 0.0012422974687069654f, 0.0014067103620618582f, 0.0015014157397672534f, 0.0022546935360878706f, 0.001284408732317388f, 0.0017116885865107179f, 0.001762751373462379f, 0.00221820711158216f, 0.0017246195347979665f, 0.0015782610280439258f, 0.0024902077857404947f, 0.0016347919590771198f, 0.0014532249188050628f, 0.0019518021726980805f, 0.002424696460366249f, 0.00205383007414639f, 0.0014681312022730708f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0034258924424648285f, 0.003183601424098015f, 0.00398916844278574f, 0.0028890399262309074f, 0.0029591696802526712f, 0.0031761471182107925f, 0.0045805987901985645f, 0.003485816065222025f, 0.0035978183150291443f, 0.0034361137077212334f, 0.004656053613871336f, 0.0027811413165181875f, 0.002682699356228113f, 0.0044881305657327175f, 0.0054882788099348545f, 0.0038737785071134567f, 0.003567697945982218f, 0.0051900045946240425f, 0.0034950829576700926f, 0.003585980972275138f, 0.0028681610710918903f, 0.003728455863893032f, 0.0018376722000539303f, 0.0040453094989061356f, 0.003597565460950136f, 0.004841259680688381f, 0.0025883903726935387f, 0.0041201235726475716f, 0.0029098547529429197f, 0.0029686233028769493f, 0.006434720940887928f, 0.0048280260525643826f, 0.0043880692683160305f, 0.002762108575552702f, 0.0028933740686625242f, 0.004032519645988941f, 0.0028605489060282707f, 0.0026710869278758764f, 0.007778043393045664f, 0.003122068475931883f, 0.006103287450969219f, 0.003070387989282608f, 0.0039430661126971245f, 0.0029426661785691977f, 0.0027916005346924067f, 0.0018157821614295244f, 0.003238455858081579f, 0.004943730775266886f, 0.0030023634899407625f, 0.002801747526973486f, 0.0025723150465637445f, 0.0030393137130886316f, 0.004157344810664654f, 0.005139993503689766f, 0.002371602226048708f, 0.006770817097276449f, 0.004863842390477657f, 0.004033482633531094f, 0.006220090668648481f, 0.004161616787314415f, 0.002337137470021844f, 0.002907593734562397f, 0.0040877461433410645f, 0.0028730963822454214f, 0.004798909183591604f, 0.004144011996686459f, 0.00359966978430748f, 0.006807923782616854f, 0.005375836510211229f, 0.0031125869136303663f, 0.0035897570196539164f, 0.004507287871092558f, 0.0024473308585584164f, 0.005802491679787636f, 0.005015622358769178f, 0.003186577232554555f, 0.0024250629357993603f, 0.003840215038508177f, 0.004168903920799494f, 0.005818234756588936f, 0.0036195944994688034f, 0.00481173861771822f, 0.003391195321455598f, 0.005470789037644863f, 0.003880903823301196f, 0.006981285754591227f, 0.002717972034588456f, 0.004139069002121687f, 0.0045428648591041565f, 0.001909819315187633f, 0.005856608971953392f, 0.0022354088723659515f, 0.003786308690905571f, 0.002123585669323802f, 0.0032619114499539137f, 0.0038016114849597216f, 0.004753919783979654f, 0.0062413886189460754f, 0.007712904829531908f, 0.0024100616574287415f, 0.0034333798103034496f, 0.006859106943011284f, 0.0036765444092452526f, 0.0026016731280833483f, 0.005424832459539175f, 0.0019078822806477547f, 0.0056959050707519054f, 0.002545841969549656f, 0.002374599687755108f, 0.0050619314424693584f, 0.003573900554329157f, 0.004228659905493259f, 0.0031132358126342297f, 0.00421907939016819f, 0.005621324758976698f, 0.004928692243993282f, 0.004519626032561064f, 0.003279514843598008f, 0.0029028465505689383f, 0.003961489070206881f, 0.0024585751816630363f, 0.005954901687800884f, 0.0030289627611637115f, 0.002048234222456813f, 0.005242427811026573f, 0.0032804433722049f, 0.006012540310621262f, 0.006172116845846176f, 0.002385746920481324f, 0.006376313511282206f, 0.0046249618753790855f, 0.002593014156445861f, 0.0029319950845092535f, 0.0034883052576333284f, 0.0031473813578486443f, 0.003255369607359171f, 0.00444573862478137f, 0.003050448140129447f, 0.00555134192109108f, 0.0023076930083334446f, 0.002926011336967349f, 0.002412594622001052f, 0.0027086029294878244f, 0.0049909730441868305f, 0.0026824537198990583f, 0.003313040127977729f, 0.005219492595642805f, 0.003086562966927886f, 0.0031904750503599644f, 0.005367544014006853f, 0.004866758827120066f, 0.0018459358252584934f, 0.004370385780930519f, 0.0032239167485386133f, 0.004424263723194599f, 0.0034323318395763636f, 0.0026982969138771296f, 0.0026717428117990494f, 0.004830182529985905f, 0.006851918995380402f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001563356607221067f, 0.0017213566461578012f, 0.0026689530350267887f, 0.0023828502744436264f, 0.0021098735742270947f, 0.0029705732595175505f, 0.0016350983642041683f, 0.0028538687620311975f, 0.0024340960662811995f, 0.002754886168986559f, 0.0020413713064044714f, 0.002284796442836523f, 0.0020617027767002583f, 0.0017055667703971267f, 0.001717039616778493f, 0.0028372714295983315f, 0.0021528140641748905f, 0.0019036708399653435f, 0.002634934615343809f, 0.0022522988729178905f, 0.0015471772057935596f, 0.0016265326412394643f, 0.0018343591364100575f, 0.001556559232994914f, 0.002371437381953001f, 0.0019226312870159745f, 0.002161164302378893f, 0.00331499008461833f, 0.0032242820598185062f, 0.001984367147088051f, 0.0035486044362187386f, 0.001444743131287396f, 0.0015003519365563989f, 0.0016203110571950674f, 0.0022572041489183903f, 0.0019982783123850822f, 0.0029358079191297293f, 0.002050466602668166f, 0.0024593500420451164f, 0.0030002060811966658f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0003173162112943828f, 0.0003573860158212483f, 0.0005240071332082152f, 0.0003574371221475303f, 0.00038460962241515517f, 0.0004185652651358396f, 0.000375750387320295f, 0.00033505065948702395f, 0.00035062505048699677f, 0.00044600991532206535f, 0.00028823630418628454f, 0.0004948440473526716f, 0.0006176868337206542f, 0.00044956550118513405f, 0.00035724486224353313f, 0.000537149840965867f, 0.00048193513066507876f, 0.0005848387954756618f, 0.0004959643119946122f, 0.00031414144905284047f, 0.00035974173806607723f, 0.0004076571494806558f, 0.0002989553613588214f, 0.0003254697658121586f, 0.0003005417238455266f, 0.00033503372105769813f, 0.0004764687910210341f, 0.0005056127556599677f, 0.00027461827266961336f, 0.00046502563054673374f, 0.0005579893477261066f, 0.0002936890523415059f, 0.00034489863901399076f, 0.00038690140354447067f, 0.0004502688825596124f, 0.0005001573008485138f, 0.000297785853035748f, 0.0004118351498618722f, 0.0003893465909641236f, 0.00034400864387862384f, 0.0004320455191191286f, 0.00044823510688729584f, 0.00033784651895985007f, 0.00035874132299795747f, 0.00031554343877360225f, 0.00030962395248934627f, 0.0003984327777288854f, 0.0003539309254847467f, 0.0004581335815601051f, 0.0007568512810394168f, 0.00038507930003106594f, 0.0004550745652522892f, 0.0003681665984913707f, 0.0003169584379065782f, 0.0004905049572698772f, 0.0006715466734021902f, 0.00043062554323114455f, 0.00035043637035414577f, 0.00033723958767950535f, 0.0003860531433019787f, 0.00036995933623984456f, 0.0004359518934506923f, 0.00042452584602870047f, 0.00048743950901553035f, 0.00044426688691601157f, 0.0004142824618611485f, 0.00029401571373455226f, 0.0003870136570185423f, 0.0003607755934353918f, 0.0003615238529164344f, 0.0003845553728751838f, 0.0004455571179278195f, 0.000470419239718467f, 0.00032455817563459277f, 0.0004509629216045141f, 0.0004361728497315198f, 0.0002857215004041791f, 0.0003222122904844582f, 0.0003644486714620143f, 0.0005010395543649793f, 0.0003326709265820682f, 0.00042965702596120536f, 0.0005106944590806961f, 0.0003290545428171754f, 0.0004742781457025558f, 0.00043496687430888414f, 0.00045449857134371996f, 0.0004166736325714737f, 0.0006065625930204988f, 0.000418166775489226f, 0.00028732806094922125f, 0.00045638784649781883f, 0.000360823527444154f, 0.00044445673120208085f, 0.0004930737777613103f, 0.0003786890010815114f, 0.0003924233606085181f, 0.0004846194642595947f, 0.0002800037036649883f, 0.000526615884155035f, 0.00037868673098273575f, 0.00043729698518291116f, 0.00029858434572815895f, 0.0005561255966313183f, 0.00044519410585053265f, 0.00028471247060224414f, 0.00045432060142047703f, 0.00035565710277296603f, 0.00031705282162874937f, 0.00047555495984852314f, 0.0002935567463282496f, 0.00031977021717466414f, 0.0003444187459535897f, 0.0004524023679550737f, 0.0006147627136670053f, 0.00045917800161987543f, 0.00042433509952388704f, 0.00039294621092267334f, 0.0005421843961812556f, 0.0004410675319377333f, 0.0003232323215343058f, 0.0003213946183677763f, 0.00047853539581410587f, 0.0005281972698867321f, 0.0004017739265691489f, 0.0003632527659647167f, 0.0006616736645810306f, 0.00041828755638562143f, 0.00044753606198355556f, 0.00032052636379376054f, 0.00030571091338060796f, 0.0003452471864875406f, 0.0004688039771281183f, 0.00041999670793302357f, 0.0005410166922956705f, 0.00029237710987217724f, 0.000354506861185655f, 0.00035084690898656845f, 0.00040834935498423874f, 0.0003393731021787971f, 0.0004617268859874457f, 0.00046078424202278256f, 0.0004661810817196965f, 0.0003538434102665633f, 0.0004663744184654206f, 0.0002988304477185011f, 0.0003928268270101398f, 0.000438658578786999f, 0.00034875949495472014f, 0.0005373196909204125f, 0.00032289870432578027f, 0.00038009329000487924f, 0.00034097995376214385f, 0.0003150494012515992f, 0.00036346149863675237f, 0.00048353453166782856f, 0.0003983263159170747f, 0.00046454177936539054f, 0.00039095335523597896f, 0.00040838963468559086f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0026883461978286505f, 0.0015850064810365438f, 0.0027847178280353546f, 0.002216740045696497f, 0.0019907590467482805f, 0.002197404159232974f, 0.002722828183323145f, 0.0016066182870417833f, 0.0019149566069245338f, 0.0035618599504232407f, 0.0019311904907226562f, 0.0020820810459554195f, 0.002249347511678934f, 0.0017983756260946393f, 0.002351202303543687f, 0.0018588245147839189f, 0.0031923423521220684f, 0.002393764443695545f, 0.0015016807010397315f, 0.003575424198061228f, 0.0020754472352564335f, 0.0019543215166777372f, 0.0013932461151853204f, 0.0017591520445421338f, 0.0024683987721800804f, 0.0025141756050288677f, 0.00283997505903244f, 0.0014989811461418867f, 0.0022052698768675327f, 0.002128971042111516f, 0.0015768558951094747f, 0.0022178185172379017f, 0.0014614694518968463f, 0.0017252956749871373f, 0.0017321115592494607f, 0.0026150622870773077f, 0.003792096395045519f, 0.0016469873953610659f, 0.002783010946586728f, 0.003160665510222316f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001114209764637053f, 0.0007905291276983917f, 0.0015692200977355242f, 0.0011406771373003721f, 0.0011764413211494684f, 0.0013779205037280917f, 0.0007178567466326058f, 0.000853241013828665f, 0.0018288339488208294f, 0.0012489751679822803f, 0.0009071265812963247f, 0.001423476729542017f, 0.001571511966176331f, 0.0021001463755965233f, 0.0010370118543505669f, 0.0012012183433398604f, 0.0011256763245910406f, 0.000924027874134481f, 0.0013094695750623941f, 0.001381626003421843f, 0.0008290151017718017f, 0.0007990106241777539f, 0.00119690946303308f, 0.0013745416654273868f, 0.0010321770096197724f, 0.0010001767659559846f, 0.0012671146541833878f, 0.001091332291252911f, 0.0012248889543116093f, 0.0012861845316365361f, 0.001168824266642332f, 0.000965965271461755f, 0.0006588990218006074f, 0.0015434477245435119f, 0.0010152129689231515f, 0.001261842087842524f, 0.0010071812430396676f, 0.0007933998131193221f, 0.0010875293519347906f, 0.0010174778290092945f, 0.000818556291051209f, 0.0012346896110102534f, 0.0015689373249188066f, 0.0013830584939569235f, 0.001333585474640131f, 0.0007212400669232011f, 0.0010358684230595827f, 0.001624576048925519f, 0.0007574821938760579f, 0.0008351089782081544f, 0.000916299584787339f, 0.0009328624582849443f, 0.0011270756367594004f, 0.0010930912103503942f, 0.0011185661423951387f, 0.0010564120020717382f, 0.0009706736309453845f, 0.0010708289919421077f, 0.00075240881415084f, 0.001508292742073536f, 0.000987113337032497f, 0.0013581040548160672f, 0.0008195465779863298f, 0.001493000192567706f, 0.0009460658184252679f, 0.0013963604578748345f, 0.001272209919989109f, 0.0012395360972732306f, 0.0012858950067311525f, 0.001321807038038969f, 0.0008602689485996962f, 0.0011015423806384206f, 0.0009566853987053037f, 0.0008056756341829896f, 0.0009820485720410943f, 0.0009058179566636682f, 0.0015039158752188087f, 0.0010747503256425261f, 0.0009306301944889128f, 0.0010384179186075926f, 0.0007497891201637685f, 0.0009051453089341521f, 0.0010463324142619967f, 0.0017798417247831821f, 0.0007217276724986732f, 0.0010090612340718508f, 0.0015981714241206646f, 0.0014660900924354792f, 0.0012723886175081134f, 0.0013668008614331484f, 0.0009742945549078286f, 0.0010257770773023367f, 0.0010594523046165705f, 0.0014167942572385073f, 0.0008027496514841914f, 0.0006281202076934278f, 0.0011398697970435023f, 0.001326293684542179f, 0.001526462147012353f, 0.0005679336609318852f, 0.00191678071860224f, 0.000752358406316489f, 0.0008692615083418787f, 0.0009194593294523656f, 0.0009872784139588475f, 0.0015085753984749317f, 0.000793720711953938f, 0.0012377139646559954f, 0.0006591984420083463f, 0.0016388559015467763f, 0.001386796124279499f, 0.0008775285677984357f, 0.0008791426080279052f, 0.0010472352150827646f, 0.0006008624914102256f, 0.0008388240821659565f, 0.0013210901524871588f, 0.001649105572141707f, 0.0007031506393104792f, 0.0008987385081127286f, 0.0013958752388134599f, 0.0027314696926623583f, 0.0011473320191726089f, 0.0012103307526558638f, 0.0014158596750348806f, 0.0008387209381908178f, 0.001050753053277731f, 0.0012762699043378234f, 0.001352939521893859f, 0.001020811847411096f, 0.0008423058898188174f, 0.001410006545484066f, 0.0009722515824250877f, 0.0007894864538684487f, 0.0013407997321337461f, 0.0009835980599746108f, 0.0009978575399145484f, 0.0012636154424399137f, 0.0008554328815080225f, 0.0012992315459996462f, 0.0010277079418301582f, 0.0007172687910497189f, 0.000978945754468441f, 0.0023899527732282877f, 0.0015789213357493281f, 0.0018439368577674031f, 0.0011272014817222953f, 0.0020301248878240585f, 0.0015151714906096458f, 0.0010344035690650344f, 0.0009360552066937089f, 0.0006847915356047451f, 0.0011296924203634262f, 0.0008717448217794299f, 0.0010651317425072193f, 0.0013362695463001728f, 0.0014902694383636117f, 0.0006818948895670474f, 0.0014284891076385975f, 0.0007748042116872966f, 0.0007529031718149781f, 0.0017192285740748048f, 0.0009590474655851722f, 0.0007529088761657476f, 0.0011242479085922241f, 0.0010519473580643535f, 0.0015601946506649256f, 0.0008929895702749491f, 0.0006727721192874014f, 0.0010572936153039336f, 0.0015805814182385802f, 0.0013057177420705557f, 0.0008363291854038835f, 0.0011890759924426675f, 0.0012006232282146811f, 0.001827149884775281f, 0.001506880042143166f, 0.0014408169081434608f, 0.0010974473552778363f, 0.0011660541640594602f, 0.0010597850196063519f, 0.0009706458076834679f, 0.0012971857795491815f, 0.0014038118533790112f, 0.0014808822888880968f, 0.0012305525597184896f, 0.0009938526200130582f, 0.0010438186582177877f, 0.000846089911647141f, 0.0011491035111248493f, 0.001220604288391769f, 0.001868296298198402f, 0.0010222209384664893f, 0.0012686897534877062f, 0.0010630182223394513f, 0.0008382976520806551f, 0.0014484386192634702f, 0.0011632229434326291f, 0.0011606727493926883f, 0.0014820621581748128f, 0.0009042706224136055f, 0.001285635749809444f, 0.000743362819775939f, 0.0012439611600711942f, 0.0008506974554620683f, 0.000798373541329056f, 0.0009351923945359886f, 0.0014960479456931353f, 0.0010053737787529826f, 0.0013433006824925542f, 0.0016374849947169423f, 0.000949160079471767f, 0.001971130957826972f, 0.0017973864451050758f, 0.0015862984582781792f, 0.0010146591812372208f, 0.0013031486887484789f, 0.001514752977527678f, 0.0018270519794896245f, 0.001066648750565946f, 0.0012950351228937507f, 0.000706213410012424f, 0.0011079484829679132f, 0.0009046149207279086f, 0.001709258882328868f, 0.0010075101163238287f, 0.000850255077239126f, 0.0006718180375173688f, 0.001040678471326828f, 0.000674118404276669f, 0.000982847181148827f, 0.0007959221256896853f, 0.0006924890330992639f, 0.0007856008014641702f, 0.0008761289645917714f, 0.001483179279603064f, 0.0012054994003847241f, 0.0009735596249811351f, 0.0008911104523576796f, 0.0017203042516484857f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035948026925325394f, 0.0015247493283823133f, 0.004392581060528755f, 0.0018937417771667242f, 0.002121907426044345f, 0.005498008336871862f, 0.003144739428535104f, 0.003175419522449374f, 0.0017754507716745138f, 0.0019071722635999322f, 0.0019436465809121728f, 0.0024341109674423933f, 0.004948786459863186f, 0.0020399228669703007f, 0.002397018950432539f, 0.0026652838569134474f, 0.0013410394312813878f, 0.0019732657819986343f, 0.002840945729985833f, 0.003838538657873869f, 0.002419061493128538f, 0.0019221139373257756f, 0.0022369734942913055f, 0.002862313063815236f, 0.002714375965297222f, 0.0021545500494539738f, 0.002485354198142886f, 0.002727023558691144f, 0.004112298600375652f, 0.0033922826405614614f, 0.0037552271969616413f, 0.0036222501657903194f, 0.0018107887590304017f, 0.002784913871437311f, 0.004265657626092434f, 0.0014741766499355435f, 0.00427984306588769f, 0.0024219760671257973f, 0.00503556476905942f, 0.003790945280343294f, 0.002194300526753068f, 0.0040150475688278675f, 0.005324681289494038f, 0.0035639561247080564f, 0.003815300762653351f, 0.002205612137913704f, 0.0024805234279483557f, 0.002555322367697954f, 0.0013361916644498706f, 0.0029811146669089794f, 0.0031150472350418568f, 0.0023508481681346893f, 0.0031620769295841455f, 0.003513214411213994f, 0.00274283392354846f, 0.006246626842767f, 0.005807571578770876f, 0.0026612705551087856f, 0.0032826510723680258f, 0.0024493802338838577f, 0.002368846209719777f, 0.003270004643127322f, 0.0019909238908439875f, 0.0030665602535009384f, 0.0018135771388188004f, 0.0023847881238907576f, 0.0029538290109485388f, 0.0027878424152731895f, 0.004798309411853552f, 0.0026518262457102537f, 0.004103206563740969f, 0.0064843399450182915f, 0.0018746271962299943f, 0.0030733596067875624f, 0.0036317789927124977f, 0.0017374446615576744f, 0.007587754167616367f, 0.0021604776848107576f, 0.0026746136136353016f, 0.002387101761996746f, 0.004648446571081877f, 0.0016152308089658618f, 0.0043821074068546295f, 0.004538227338343859f, 0.0016531461151316762f, 0.004639375023543835f, 0.0042718276381492615f, 0.006381279788911343f, 0.0013311041984707117f, 0.006230794358998537f, 0.0018032588995993137f, 0.004276450257748365f, 0.003169204806908965f, 0.003875202964991331f, 0.002029907424002886f, 0.0021495434921234846f, 0.0034005006309598684f, 0.0035567220766097307f, 0.0017864614492282271f, 0.0018728154245764017f, 0.0028114072047173977f, 0.0013471971033141017f, 0.0033279890194535255f, 0.00697643356397748f, 0.0059406571090221405f, 0.00875986460596323f, 0.002090124413371086f, 0.005524317268282175f, 0.0022657327353954315f, 0.00459487596526742f, 0.0018486037151888013f, 0.001776229590177536f, 0.0066938879899680614f, 0.003682699054479599f, 0.004448504187166691f, 0.0018010835628956556f, 0.003491051495075226f, 0.006633337587118149f, 0.002157634822651744f, 0.0021268348209559917f, 0.0030647125095129013f, 0.0025770901702344418f, 0.004797209985554218f, 0.002486341865733266f, 0.00350379035808146f, 0.0024123452603816986f, 0.003180505009368062f, 0.0042504058219492435f, 0.004586993716657162f, 0.0013490477576851845f, 0.004310913383960724f, 0.004751784261316061f, 0.0039104740135371685f, 0.003052681451663375f, 0.003707814496010542f, 0.005223338026553392f, 0.0028053829446434975f, 0.004973447881639004f, 0.0014917318476364017f, 0.005988858640193939f, 0.0024207925889641047f, 0.001386079122312367f, 0.0022283783182501793f, 0.005314930342137814f, 0.004034439567476511f, 0.003479034872725606f, 0.0019250966142863035f, 0.004091858863830566f, 0.002008177572861314f, 0.0035563239362090826f, 0.003506207838654518f, 0.0016110342694446445f, 0.004407808184623718f, 0.005231076385825872f, 0.001543911173939705f, 0.004411714151501656f, 0.0032134924549609423f, 0.0029249382205307484f, 0.003945744596421719f, 0.004210035316646099f, 0.001707384828478098f, 0.005294399335980415f, 0.0033414580393582582f, 0.0014934770297259092f, 0.003039432456716895f, 0.003095529740676284f, 0.002059869933873415f, 0.001467839116230607f, 0.002229365287348628f, 0.0020803625229746103f, 0.002976670628413558f, 0.0019758353009819984f, 0.0038066094275563955f, 0.004071792587637901f, 0.0023656943812966347f, 0.0020610676147043705f, 0.005470397416502237f, 0.0020219492726027966f, 0.0023387265391647816f, 0.004666238557547331f, 0.0017318080645054579f, 0.0033396962098777294f, 0.005567179527133703f, 0.0039690518751740456f, 0.004525745753198862f, 0.0027209429536014795f, 0.004749950021505356f, 0.002306754933670163f, 0.0025477956514805555f, 0.001794473617337644f, 0.0030192257836461067f, 0.0028888152446597815f, 0.0016199795063585043f, 0.004028772469609976f, 0.004326540511101484f, 0.002077136654406786f, 0.004617899190634489f, 0.0028899589087814093f, 0.0021130444947630167f, 0.0039640567265450954f, 0.0022596472408622503f, 0.0061530801467597485f, 0.0017544736620038748f, 0.0029943077825009823f, 0.003576676594093442f, 0.0023739796597510576f, 0.0021453951485455036f, 0.003295269561931491f, 0.0032102486584335566f, 0.0017885525012388825f, 0.004145987797528505f, 0.002033136785030365f, 0.002129583153873682f, 0.003430919023230672f, 0.003716927021741867f, 0.0015852712094783783f, 0.0025426310021430254f, 0.007425558287650347f, 0.003134670900180936f, 0.0018016276881098747f, 0.0027627868112176657f, 0.0023684778716415167f, 0.0038062750827521086f, 0.0025858061853796244f, 0.0023499801754951477f, 0.001543306978419423f, 0.0026447626296430826f, 0.0027228815015405416f, 0.0019981872756034136f, 0.001852922374382615f, 0.0020746716763824224f, 0.0018764488631859422f, 0.0021780035458505154f, 0.0071741873398423195f, 0.002286925446242094f, 0.004548267927020788f, 0.0034350971691310406f, 0.003263887483626604f, 0.003403834765776992f, 0.005405353847891092f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 60,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001320315757766366f, 0.0012332419864833355f, 0.0011588101042434573f, 0.0014028882142156363f, 0.0012110820971429348f, 0.0017422499367967248f, 0.001241604215465486f, 0.00140117306727916f, 0.00138589006382972f, 0.0022293850779533386f, 0.0023784679360687733f, 0.0015077596763148904f, 0.0019957537297159433f, 0.002153479726985097f, 0.0021015857346355915f, 0.002035372657701373f, 0.0013473076978698373f, 0.001892573432996869f, 0.0018357600783929229f, 0.001883809338323772f, 0.0012507752981036901f, 0.002648511901497841f, 0.00120120111387223f, 0.0012809745967388153f, 0.0014851449523121119f, 0.0013354310067370534f, 0.0012404459994286299f, 0.0023423575330525637f, 0.0015543296467512846f, 0.00133589468896389f, 0.0011998348636552691f, 0.0022898493334650993f, 0.0019246049923822284f, 0.0013349039945751429f, 0.0012555571738630533f, 0.001621668809093535f, 0.0012583608040586114f, 0.00130235415417701f, 0.001302514341659844f, 0.001798533834517002f, 0.0013512357836589217f, 0.0014350218698382378f, 0.0013980009825900197f, 0.001815561205148697f, 0.0021740130614489317f, 0.002202442381531f, 0.002063762629404664f, 0.0013297242112457752f, 0.001818029209971428f, 0.001987018622457981f, 0.0015522423200309277f, 0.0018648533150553703f, 0.0012806459562852979f, 0.0013078439515084028f, 0.001191121176816523f, 0.0017341332277283072f, 0.002038167556747794f, 0.0012854074593633413f, 0.002021764637902379f, 0.0022342796437442303f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0002921643026638776f, 0.00040352734504267573f, 0.00022905340301804245f, 0.00033723836531862617f, 0.0003002631419803947f, 0.00032312655821442604f, 0.0002837957290466875f, 0.00040160131175071f, 0.00033950674696825445f, 0.00030035394593141973f, 0.0003134274447802454f, 0.00033278606133535504f, 0.0003674879262689501f, 0.00021988811204209924f, 0.0004300296714063734f, 0.00025826261844486f, 0.00031030894024297595f, 0.00045732359285466373f, 0.000456455658422783f, 0.0003135562874376774f, 0.0002939451951533556f, 0.0003730019961949438f, 0.00033017026726156473f, 0.00038971402682363987f, 0.0003806545864790678f, 0.00037188196438364685f, 0.0002949110930785537f, 0.0003886016784235835f, 0.00030411320040002465f, 0.00031082433997653425f, 0.0002677652519196272f, 0.0003643914533313364f, 0.00029003593954257667f, 0.00039945764001458883f, 0.0003363893192727119f, 0.00034885690547525883f, 0.0003539967001415789f, 0.0005056114750914276f, 0.00028303463477641344f, 0.00031317680259235203f, 0.0003754375211428851f, 0.00032995012588799f, 0.00034983400837518275f, 0.0003441991575527936f, 0.0003684637777041644f, 0.0004640183178707957f, 0.0003666760749183595f, 0.0003219502395950258f, 0.0003716456994879991f, 0.00036002518027089536f, 0.000325199420331046f, 0.0003728956216946244f, 0.000298230821499601f, 0.0003292255860287696f, 0.0003401836147531867f, 0.00047119674854911864f, 0.0002810025180224329f, 0.0004009091935586184f, 0.0003516018623486161f, 0.0002852215548045933f, 0.00030240832711569965f, 0.0004148078733123839f, 0.0003485106281004846f, 0.0003981709887739271f, 0.00025550430291332304f, 0.00028207292780280113f, 0.0002768024569377303f, 0.00029466967680491507f, 0.0006528230151161551f, 0.00027488902560435236f, 0.0002944623993244022f, 0.0003609003033488989f, 0.0003107826050836593f, 0.0003297283546999097f, 0.00031492128618992865f, 0.0003070603415835649f, 0.00031489800312556326f, 0.0003573137801140547f, 0.000373043556464836f, 0.0002490128972567618f, 0.00035426203976385295f, 0.000299355509923771f, 0.0002372501912759617f, 0.0004064131062477827f, 0.0003232146555092186f, 0.00035448645940050483f, 0.0002535508538130671f, 0.0003200682403985411f, 0.0003159134357701987f, 0.0002419810916762799f, 0.0003748023009393364f, 0.0002725598169490695f, 0.00033219592296518385f, 0.00030959557625465095f, 0.0003569441323634237f, 0.00030382900149561465f, 0.00029524677665904164f, 0.00033396168146282434f, 0.0003271833702456206f, 0.00039080038550309837f, 0.0003293361805845052f, 0.0004148087464272976f, 0.0002734632871579379f, 0.00048428887384943664f, 0.00025950450799427927f, 0.00040943417116068304f, 0.0003184779779985547f, 0.0003782091662287712f, 0.00039757322520017624f, 0.00023399069323204458f, 0.0003056891728192568f, 0.00026877300115302205f, 0.0003053013060707599f, 0.00031326766475103796f, 0.0003577468160074204f, 0.0004253946535754949f, 0.0003158149484079331f, 0.0002206357748946175f, 0.00028179175569675863f, 0.00031398358987644315f, 0.0002788745332509279f, 0.0002705331426113844f, 0.0004484707023948431f, 0.0003847480984404683f, 0.00036631638067774475f, 0.0002996999828610569f, 0.00027694323216564953f, 0.0003532172995619476f, 0.00029627460753545165f, 0.0003038541763089597f, 0.00032640204881317914f, 0.00025031864061020315f, 0.0003806856693699956f, 0.00034018265432678163f, 0.00024827950983308256f, 0.00026020215591415763f, 0.0002989339700434357f, 0.00029038594220764935f, 0.00041098197107203305f, 0.00028515805024653673f, 0.0003526073705870658f, 0.00040442863246425986f, 0.00032692094100639224f, 0.000276661739917472f, 0.0003641839721240103f, 0.0002572165976744145f, 0.0002867041912395507f, 0.0002834091428667307f, 0.00032676715636625886f, 0.00032209407072514296f, 0.00033412055927328765f, 0.0005367552512325346f, 0.0003561293997336179f, 0.00037205632543191314f, 0.0002957877004519105f, 0.000346175889717415f, 0.00029488318250514567f, 0.0003740645479410887f, 0.00031002704054117203f, 0.00023551398771815002f, 0.00033309863647446036f, 0.00034408867941237986f, 0.00030292768497020006f, 0.0004724239115603268f, 0.0002819228102453053f, 0.0003162153298035264f, 0.0003507423389237374f, 0.0003280595992691815f, 0.00027617390151135623f, 0.0003176805912517011f, 0.00032430156716145575f, 0.00040605029789730906f, 0.00035312669933773577f, 0.00045944470912218094f, 0.00023919538944028318f, 0.00036533476668410003f, 0.0002958170371130109f, 0.0002905263681896031f, 0.0003124056675005704f, 0.0003704536356963217f, 0.0003578663745429367f, 0.00026334126596339047f, 0.0003062543401028961f, 0.00030741869704797864f, 0.00044310351950116456f, 0.0003501257160678506f, 0.00042392589966766536f, 0.0004221085109747946f, 0.0005091587663628161f, 0.0002772027801256627f, 0.0002413170732324943f, 0.0002597565471660346f, 0.00030023406725376844f, 0.00024141871836036444f, 0.0003461443120613694f, 0.0003510543319862336f, 0.0003080707974731922f, 0.00032441041548736393f, 0.00038265122566372156f, 0.0003017322451341897f, 0.0002424785343464464f, 0.00027024332666769624f, 0.0004189754545222968f, 0.00026808513212017715f, 0.0004229789483360946f, 0.000268495554337278f, 0.00024649250553920865f, 0.0005077609093859792f, 0.0002704275248106569f, 0.0003561807388905436f, 0.0005219856393523514f, 0.00023755368601996452f, 0.00025286353775300086f, 0.0002973630034830421f, 0.00037629023427143693f, 0.00031339621637016535f, 0.00030698830960318446f, 0.0004460137861315161f, 0.0005066617159172893f, 0.0003888168721459806f, 0.0003038955619558692f, 0.0002789855934679508f, 0.0003414041711948812f, 0.0002721871715039015f, 0.00022942456416785717f, 0.0003848608466796577f, 0.00034477116423659027f, 0.00027637206949293613f, 0.00033745807013474405f, 0.0002790444123093039f, 0.0003103903727605939f, 0.00028822661261074245f, 0.00033168186200782657f, 0.0002763431693892926f, 0.0002560311695560813f, 0.0002368903806200251f, 0.0003749509633053094f, 0.00026039013755507767f, 0.0002881620603147894f, 0.00036991699016653f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009926434140652418f, 0.0009819932747632265f, 0.0018511456437408924f, 0.0019854821730405092f, 0.001369620207697153f, 0.0008701351471245289f, 0.0014526827726513147f, 0.0010135771008208394f, 0.0007754166144877672f, 0.0016682780114933848f, 0.0007491759606637061f, 0.0010230934713035822f, 0.0010540453949943185f, 0.0011641641613095999f, 0.0013528591953217983f, 0.0009615703602321446f, 0.0011279728496447206f, 0.0007713371305726469f, 0.000915096199605614f, 0.0007369146915152669f, 0.0008340032072737813f, 0.001492320210672915f, 0.000749289698433131f, 0.0007411809638142586f, 0.001000358839519322f, 0.000856690458022058f, 0.001257052063010633f, 0.000709329848177731f, 0.0007835859432816505f, 0.0006973355775699019f, 0.0009713376057334244f, 0.0011721777264028788f, 0.000844225229229778f, 0.0018772886833176017f, 0.0009646832477301359f, 0.0011730723781511188f, 0.0007137505454011261f, 0.0012082254979759455f, 0.002784315962344408f, 0.001971788238734007f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012104775523766875f, 0.0007212817436084151f, 0.0006263797986321151f, 0.0006357430829666555f, 0.0005343937664292753f, 0.0010178450029343367f, 0.0011417287169024348f, 0.0005714488797821105f, 0.0005961660644970834f, 0.0005586365587078035f, 0.0009720019879750907f, 0.0007752272649668157f, 0.000690806598868221f, 0.001036992878653109f, 0.0006412526126950979f, 0.0005920099793002009f, 0.0005616496782749891f, 0.0007663562428206205f, 0.0006456146948039532f, 0.0006182938814163208f, 0.0005391098675318062f, 0.0006832625949755311f, 0.0008339646738022566f, 0.0005426136194728315f, 0.0007399060996249318f, 0.0007861742051318288f, 0.001857367460615933f, 0.0005340759526006877f, 0.0005909343017265201f, 0.0009323040721938014f, 0.0006526831421069801f, 0.0005502676940523088f, 0.0005982071743346751f, 0.0007650209008716047f, 0.0006792034255340695f, 0.0011759087210521102f, 0.0007630038307979703f, 0.0006122103077359498f, 0.0006883044261485338f, 0.0008617337443865836f, 0.0006845286698080599f, 0.0005659035523422062f, 0.000490604666993022f, 0.0008317568572238088f, 0.0007839580648578703f, 0.0008009119774214923f, 0.0008319421322084963f, 0.0007364440243691206f, 0.0007804269553162158f, 0.00041400687769055367f, 0.0006003206362947822f, 0.001173881464637816f, 0.0007332874811254442f, 0.0007756905979476869f, 0.0007610520115122199f, 0.00045526964822784066f, 0.0006278882501646876f, 0.0006435321411117911f, 0.0007014228031039238f, 0.0012526116333901882f, 0.0006231829174794257f, 0.0006348522147163749f, 0.0005687593948096037f, 0.0004961077938787639f, 0.000621014041826129f, 0.0005876354989595711f, 0.000906949513591826f, 0.0007637575035914779f, 0.0006604117807000875f, 0.00041336537105962634f, 0.0007689940393902361f, 0.0005296400049701333f, 0.001591012580320239f, 0.0006366934976540506f, 0.0009436208638362586f, 0.0005900755641050637f, 0.0005211943062022328f, 0.0005824160180054605f, 0.0010656681843101978f, 0.0006880242144688964f, 0.0005316035822033882f, 0.00041421246714890003f, 0.0007583163096569479f, 0.0005053080967627466f, 0.0006378878024406731f, 0.0006043133325874805f, 0.0007911376305855811f, 0.0009318643715232611f, 0.0005906539736315608f, 0.0006768695893697441f, 0.000544804148375988f, 0.0006012027151882648f, 0.0004850664990954101f, 0.0007224849541671574f, 0.0006737242802046239f, 0.000496018270496279f, 0.000789791694842279f, 0.0007619731477461755f, 0.0007891143322922289f, 0.00041358466842211783f, 0.0006223309319466352f, 0.0006632530712522566f, 0.000632803828921169f, 0.0005818386562168598f, 0.0008116998360492289f, 0.0008200978045351803f, 0.0007188479648903012f, 0.0005943169817328453f, 0.0006389612681232393f, 0.0007819007732905447f, 0.0006323203560896218f, 0.00040433858521282673f, 0.0005453428020700812f, 0.0005195099511183798f, 0.0006673337193205953f, 0.00041849122499115765f, 0.0005670360988005996f, 0.0007237667450681329f, 0.0006505250348709524f, 0.0004039290943183005f, 0.0007506630499847233f, 0.0009310911991633475f, 0.0006061710882931948f, 0.0005689472309313715f, 0.0013827808434143662f, 0.0005856446223333478f, 0.0006621155189350247f, 0.0006406734464690089f, 0.0006046781199984252f, 0.00048658400191925466f, 0.000504174386151135f, 0.0005322217475622892f, 0.0010381228057667613f, 0.0008197383722290397f, 0.0005680843605659902f, 0.0005757669568993151f, 0.000617005571257323f, 0.0007453941507264972f, 0.0010715869721025229f, 0.0010354680707678199f, 0.0007082407828420401f, 0.0008952623466029763f, 0.0007121778908185661f, 0.0007061809883452952f, 0.0007602557307109237f, 0.0007540892693214118f, 0.0006137966411188245f, 0.0007324318867176771f, 0.000611791096162051f, 0.0006966608925722539f, 0.0005449160235002637f, 0.0005093019572086632f, 0.0007534928736276925f, 0.0010334033286198974f, 0.000675742921885103f, 0.0006850524805486202f, 0.0016085455426946282f, 0.0006911528180353343f, 0.001280033029615879f, 0.0006324640708044171f, 0.000563054985832423f, 0.0005557952681556344f, 0.0011258237063884735f, 0.0007485108799301088f, 0.0006778393872082233f, 0.0005659189191646874f, 0.000492071732878685f, 0.0006975948344916105f, 0.000488688237965107f, 0.0014519179239869118f, 0.0006416782271116972f, 0.0005152691737748682f, 0.0008706786902621388f, 0.001131769153289497f, 0.0006517026922665536f, 0.0010340476874262094f, 0.0004934344906359911f, 0.00042289990233257413f, 0.0005265423096716404f, 0.00044755751150660217f, 0.0011933328351005912f, 0.001120051951147616f, 0.0010932192672044039f, 0.0006922221509739757f, 0.0006044121691957116f, 0.0008019453380256891f, 0.0007399159949272871f, 0.0007101166411302984f, 0.0011450740275904536f, 0.0006157226744107902f, 0.0006183909717947245f, 0.0006289632874540985f, 0.0012544302735477686f, 0.0007221335545182228f, 0.0005354685708880424f, 0.0007851924747228622f, 0.0011089417384937406f, 0.0006034885882399976f, 0.0006624530651606619f, 0.0006767754093743861f, 0.0006413938826881349f, 0.0007088904385454953f, 0.0006713343900628388f, 0.000502280832733959f, 0.0007711275829933584f, 0.000553967896848917f, 0.0006985566578805447f, 0.0006996484589762986f, 0.0015399146359413862f, 0.0005868820007890463f, 0.001184064312838018f, 0.0013314606621861458f, 0.0006032568635419011f, 0.0008754429291002452f, 0.0009262381354346871f, 0.0010818451410159469f, 0.0005324981757439673f, 0.001612214371562004f, 0.0006179797346703708f, 0.00050555937923491f, 0.0005961703136563301f, 0.0006975671858526766f, 0.0006435504765249789f, 0.0006588295218534768f, 0.0011162079172208905f, 0.0006938555743545294f, 0.0007018583128228784f, 0.0006246858974918723f, 0.0010163374245166779f, 0.001384463394060731f, 0.00048715746379457414f, 0.001066314522176981f, 0.000497142958920449f, 0.000841948960442096f, 0.0005488504539243877f, 0.000882547814399004f, 0.0006849438068456948f, 0.0007062657386995852f, 0.0007012101705186069f, 0.0004653686482924968f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 480,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007833957788534462f, 0.0008908534655347466f, 0.001333598280325532f, 0.0011709373211488128f, 0.001410492230206728f, 0.0011786948889493942f, 0.0015997033333405852f, 0.001443736138753593f, 0.0009397424291819334f, 0.001173939905129373f, 0.0015715365298092365f, 0.0008164394530467689f, 0.001346771139651537f, 0.0011223532492294908f, 0.0008616760023869574f, 0.001104602008126676f, 0.000829060678370297f, 0.0013676988892257214f, 0.0013378375442698598f, 0.001226211665198207f, 0.0010291612707078457f, 0.0009393863147124648f, 0.0008647693903185427f, 0.0008336151950061321f, 0.002096188487485051f, 0.0013269827468320727f, 0.0013415199937298894f, 0.0010370331583544612f, 0.000817333348095417f, 0.0013223739806562662f, 0.0010326987830922008f, 0.0009090394014492631f, 0.0009499851148575544f, 0.000835831742733717f, 0.0011132670333608985f, 0.0008523683063685894f, 0.0009689150610938668f, 0.0015451873186975718f, 0.001355017302557826f, 0.0011602715821936727f, 0.0007642621058039367f, 0.0012626780662685633f, 0.0008535495144315064f, 0.000873434473760426f, 0.0014985494781285524f, 0.0009638158953748643f, 0.0008932718192227185f, 0.0011474373750388622f, 0.0008476949296891689f, 0.0009680396178737283f, 0.0008423332474194467f, 0.001645251759327948f, 0.001050147577188909f, 0.0008718064636923373f, 0.0009010001085698605f, 0.0011290815891698003f, 0.0012947379145771265f, 0.001244370942004025f, 0.0008053382043726742f, 0.0016481527127325535f, 0.0010093190940096974f, 0.0014311091508716345f, 0.0009124971693381667f, 0.0013610320165753365f, 0.0014060820685699582f, 0.001070497091859579f, 0.0011755165178328753f, 0.0010331037919968367f, 0.0009987896773964167f, 0.001139395753853023f, 0.0008398452773690224f, 0.0009000520803965628f, 0.0010433699935674667f, 0.0014862536918371916f, 0.000840511464048177f, 0.0014866560231894255f, 0.0011621880112215877f, 0.0007689833291806281f, 0.001315788715146482f, 0.0016047809040173888f, 0.0022942053619772196f, 0.0010599973611533642f, 0.0014190428191795945f, 0.0009407122270204127f, 0.0013894137227907777f, 0.0012954703997820616f, 0.001198034267872572f, 0.0007615525391884148f, 0.0008394474862143397f, 0.0009190044947899878f, 0.0013243192806839943f, 0.000974938680883497f, 0.0008353111916221678f, 0.0011064083082601428f, 0.0012836004607379436f, 0.0012683414388448f, 0.000916615012101829f, 0.0015599281759932637f, 0.0009865449974313378f, 0.0015531370881944895f, 0.000914163189008832f, 0.0008378104539588094f, 0.0010111765004694462f, 0.0009472136734984815f, 0.0007327661151066422f, 0.001350176753476262f, 0.0007827004883438349f, 0.0009557455778121948f, 0.0013887507375329733f, 0.000924981664866209f, 0.0016198374796658754f, 0.000831281824503094f, 0.0013569036964327097f, 0.0012590655824169517f, 0.0008763679070398211f, 0.001037503476254642f, 0.0008545147138647735f, 0.0008434713818132877f, 0.0009945557685568929f, 0.001800880883820355f, 0.0010060180211439729f, 0.0013151554157957435f, 0.0015375767834484577f, 0.0015347154112532735f, 0.0007873000577092171f, 0.0009414688101969659f, 0.0015454374952241778f, 0.000816064071841538f, 0.0016027342062443495f, 0.000967113533988595f, 0.001666387775912881f, 0.0015704667894169688f, 0.001356448163278401f, 0.0013772540260106325f, 0.0015972437104210258f, 0.00099543749820441f, 0.0008426742861047387f, 0.002162524266168475f, 0.0008136758115142584f, 0.001270886743441224f, 0.0012715257471427321f, 0.0008368853013962507f, 0.0007677977555431426f, 0.0009388838079757988f, 0.0014152111252769828f, 0.0007691210485063493f, 0.0007733225356787443f, 0.0015412929933518171f, 0.001097419997677207f, 0.0007682816940359771f, 0.000967521860729903f, 0.0009965392528101802f, 0.0013001484330743551f, 0.0008130843634717166f, 0.000845241651404649f, 0.0012196898460388184f, 0.0010452078422531486f, 0.0012768200831487775f, 0.0013253850629553199f, 0.0012592388084158301f, 0.000920474820304662f, 0.0010028841206803918f, 0.0008898234227672219f, 0.0007980151567608118f, 0.0007529602153226733f, 0.0008323355577886105f, 0.0008561396971344948f, 0.0010916368337348104f, 0.001336927991360426f, 0.0007920724456198514f, 0.0011854585027322173f, 0.001255094539374113f, 0.0017144962912425399f, 0.0015718245413154364f, 0.0008033004705794156f, 0.0012662560911849141f, 0.0009728528093546629f, 0.0018540301825851202f, 0.00076167011866346f, 0.0011998958652839065f, 0.0015329315792769194f, 0.0015154436696320772f, 0.0018320984672755003f, 0.0011593049857765436f, 0.0018319442169740796f, 0.001845565508119762f, 0.0008676797151565552f, 0.0010114285396412015f, 0.0016705390298739076f, 0.0014331756392493844f, 0.001450123032554984f, 0.0008642860339023173f, 0.0015942571917548776f, 0.0008947722380980849f, 0.0014942261623218656f, 0.001314368098974228f, 0.0012140898033976555f, 0.0013860658509656787f, 0.0013357001589611173f, 0.00133540912065655f, 0.0010005326475948095f, 0.00102984718978405f, 0.0008770932327024639f, 0.0013095492031425238f, 0.000858001527376473f, 0.0008208187646232545f, 0.0018389270408079028f, 0.0008921825792640448f, 0.0010158017976209521f, 0.0007881908095441759f, 0.0015355200739577413f, 0.000773685984313488f, 0.0008574575185775757f, 0.0009723858092911541f, 0.001336818328127265f, 0.001025662524625659f, 0.0007779845036566257f, 0.0009755523642525077f, 0.0007762977038510144f, 0.0017030320595949888f, 0.000837167666759342f, 0.0008335512247867882f, 0.0022339688148349524f, 0.001742276712320745f, 0.0008824506658129394f, 0.0009718799265101552f, 0.001130240736529231f, 0.0019375468837097287f, 0.0007670545601285994f, 0.0015314486809074879f, 0.0010667694732546806f, 0.0013151471503078938f, 0.0014944534050300717f, 0.0008272181730717421f, 0.0014547022292390466f, 0.0008491064654663205f, 0.0008942128042690456f, 0.001009897910989821f, 0.0011327124666422606f, 0.000788192730396986f, 0.0008572099613957107f, 0.001286979648284614f, 0.0012732348404824734f, 0.0011735059088096023f, 0.0011345194652676582f, 0.0014329918194562197f, 0.0007831397233530879f, 0.0008086956804618239f, 0.0014513510977849364f, 0.0016400843160226941f, 0.0017072140472009778f, 0.00139568408485502f, 0.000998914591036737f, 0.0015225133392959833f, 0.0009776175720617175f, 0.0008213773253373802f, 0.0015346797881647944f, 0.0008462552796117961f, 0.0007772081298753619f, 0.0022801312152296305f, 0.0008323157671838999f, 0.0008195435511879623f, 0.0010190265020355582f, 0.0013479572953656316f, 0.0012576383305713534f, 0.0008949781768023968f, 0.0013308573979884386f, 0.0009613994625397027f, 0.0013442861381918192f, 0.0010032961145043373f, 0.0010349067160859704f, 0.0009079414885491133f, 0.0013909643748775125f, 0.001765904831700027f, 0.0008882276597432792f, 0.001355478074401617f, 0.001275542308576405f, 0.001623894670046866f, 0.0008670653332956135f, 0.0013188980519771576f, 0.0008250718819908798f, 0.0008036571671254933f, 0.0010965539840981364f, 0.0008598630665801466f, 0.000828163290861994f, 0.0016044344520196319f, 0.0010088114067912102f, 0.0012795462971553206f, 0.0011873740004375577f, 0.0014568540500476956f, 0.0015757974470034242f, 0.0008790044812485576f, 0.0015223569935187697f, 0.001381066394969821f, 0.0011052940972149372f, 0.0008661681786179543f, 0.0014519705437123775f, 0.0010978995123878121f, 0.0008439804660156369f, 0.0008266057120636106f, 0.0014625666663050652f, 0.0008703607600182295f, 0.0008296552114188671f, 0.0013857169542461634f, 0.0012468162458389997f, 0.0011603579623624682f, 0.0015440373681485653f, 0.0013439501635730267f, 0.0014212088426575065f, 0.0015221117064356804f, 0.0008988082408905029f, 0.0012040711008012295f, 0.0011102370917797089f, 0.0014470164896920323f, 0.0010988032445311546f, 0.0009017788106575608f, 0.0011764813680201769f, 0.0009225659305229783f, 0.0009247564594261348f, 0.0020477185025811195f, 0.0009366543963551521f, 0.001146087539382279f, 0.0013443944044411182f, 0.0007891933782957494f, 0.001261995523236692f, 0.000853844394441694f, 0.0008697740850038826f, 0.0011798073537647724f, 0.001564886188134551f, 0.0016056665917858481f, 0.0011861097300425172f, 0.0007847101078368723f, 0.0008449960732832551f, 0.0016500446945428848f, 0.0008189350483007729f, 0.0008397552301175892f, 0.0012605699012055993f, 0.0012024620082229376f, 0.000990938046015799f, 0.0013635517098009586f, 0.0007682773284614086f, 0.0015510889934375882f, 0.0007768016075715423f, 0.0007612822228111327f, 0.0016658517997711897f, 0.0013331972295418382f, 0.0008488585008308291f, 0.0009026009938679636f, 0.0017747932579368353f, 0.0011361542856320739f, 0.0008710583788342774f, 0.0012821126729249954f, 0.001378627959638834f, 0.001214930904097855f, 0.000806857948191464f, 0.0008783803787082434f, 0.0009354307549074292f, 0.0013493051519617438f, 0.0015465130563825369f, 0.0013799319276586175f, 0.000896102748811245f, 0.001313014654442668f, 0.0011181385489180684f, 0.0007867364911362529f, 0.0013996540801599622f, 0.0008558174013160169f, 0.0011787090916186571f, 0.0008262075134553015f, 0.0012369659962132573f, 0.0015181772178038955f, 0.0009379682596772909f, 0.0008406263077631593f, 0.0011678882874548435f, 0.0009926166385412216f, 0.0008886928553692997f, 0.0016759345307946205f, 0.0010653964709490538f, 0.001241471734829247f, 0.0020674269180744886f, 0.0015207346295937896f, 0.0008159904391504824f, 0.0010254387743771076f, 0.001176523743197322f, 0.0012401624117046595f, 0.0014151647919788957f, 0.0009568982059136033f, 0.001326906611211598f, 0.0009081067400984466f, 0.0008553870138712227f, 0.0017036120407283306f, 0.0009167062817141414f, 0.0012301404494792223f, 0.0015257385093718767f, 0.0016464776126667857f, 0.0008409825386479497f, 0.0008816717308945954f, 0.0015147124649956822f, 0.0014826406259089708f, 0.000935288961045444f, 0.0017566884635016322f, 0.0016270556952804327f, 0.0012573977001011372f, 0.0008677129517309368f, 0.0008870754390954971f, 0.0014395479811355472f, 0.0016231605550274253f, 0.0012899038847535849f, 0.0015472348313778639f, 0.000762316572945565f, 0.0007640031981281936f, 0.0008160026627592742f, 0.0013629166642203927f, 0.0018712497549131513f, 0.0018804894061759114f, 0.0013620277168229222f, 0.0009608358959667385f, 0.001297330716624856f, 0.0009927182691171765f, 0.0010039240587502718f, 0.0008821632363833487f, 0.000980340875685215f, 0.0009282633545808494f, 0.0008147208718582988f, 0.001320435549132526f, 0.0016647576121613383f, 0.0008678786689415574f, 0.0013037825701758265f, 0.0011941434349864721f, 0.001548929256387055f, 0.0012155154254287481f, 0.0014741894556209445f, 0.00103111716452986f, 0.000840121298097074f, 0.0012491653906181455f, 0.001564939972013235f, 0.0011256583966314793f, 0.0018014074303209782f, 0.0008030100725591183f, 0.00085785414557904f, 0.0012871513608843088f, 0.0008302140049636364f, 0.0007560319500043988f, 0.0007159276865422726f, 0.0007508710259571671f, 0.0009437893750146031f, 0.0008867246215231717f, 0.0009625868406146765f, 0.0013526104157790542f, 0.0012607802636921406f, 0.0016119779320433736f, 0.0009200259228236973f, 0.0011258356971666217f, 0.0008436621283181012f, 0.0015959619777277112f, 0.001369721838273108f, 0.0018134155543521047f, 0.0008047011797316372f, 0.0014643523609265685f, 0.0008487858576700091f, 0.0017028108704835176f, 0.0014683378394693136f, 0.0012666101101785898f, 0.0008482360863126814f, 0.0008067481103353202f, 0.0012290725717321038f, 0.0015692388406023383f, 0.001672790152952075f, 0.001378332613967359f, 0.0008009831071831286f, 0.0014616394182667136f, 0.0008516552043147385f, 0.0008286518277600408f, 0.0016800297889858484f, 0.0014048570301383734f, 0.0014026010176166892f, 0.0015020748833194375f, 0.0009954971028491855f, 0.0017965225270017982f, 0.0008787696715444326f, 0.0012505038175731897f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 5,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015961418393999338f, 0.0021288206335157156f, 0.0015730265295132995f, 0.0036859859246760607f, 0.0037370447535067797f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0046562314964830875f),
    AI_PACK_INTQ_ZP(-88)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0046562314964830875f),
    AI_PACK_INTQ_ZP(-88)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_8_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.020676985383033752f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014380384236574173f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11552819609642029f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11552819609642029f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10009219497442245f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10009219497442245f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07810314744710922f),
    AI_PACK_INTQ_ZP(14)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14157570898532867f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006305891089141369f),
    AI_PACK_INTQ_ZP(-32)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006305891089141369f),
    AI_PACK_INTQ_ZP(-32)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10104159265756607f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0068925609812140465f),
    AI_PACK_INTQ_ZP(-18)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  1, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  nl_33_output, AI_STATIC,
  2, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &nl_33_output_array, &nl_33_output_array_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  3, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &eltwise_34_output_array, &eltwise_34_output_array_intq)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  5, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  7, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  9, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  pool_39_output, AI_STATIC,
  10, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &pool_39_output_array, &pool_39_output_array_intq)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  11, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_40_output_array, &conv2d_40_output_array_intq)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  13, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_42_output, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &eltwise_42_output_array, &eltwise_42_output_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  15, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  nl_43_output, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_44_output, AI_STATIC,
  17, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &eltwise_44_output_array, &eltwise_44_output_array_intq)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  18, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 8161, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8161, 8161),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  21, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_47_output_array, &conv2d_47_output_array_intq)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  23, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  pool_49_output, AI_STATIC,
  24, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_49_output_array, &pool_49_output_array_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 1, 624, 1, 1), AI_STRIDE_INIT(4, 1, 1, 624, 624),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_52_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_52_output_array, &eltwise_52_output_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  nl_53_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_54_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  33, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_output_array, &conv2d_56_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  pool_58_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &pool_58_output_array, &pool_58_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  37, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 1, 1, 40, 40),
  1, &conv2d_59_output_array, &conv2d_59_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_61_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &eltwise_61_output_array, &eltwise_61_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  41, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  nl_62_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &nl_62_output_array, &nl_62_output_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_63_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &eltwise_63_output_array, &eltwise_63_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_64_output_array, &conv2d_64_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_65_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_65_output_array, &eltwise_65_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_66_output_array, &conv2d_66_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  48, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  pool_68_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &pool_68_output_array, &pool_68_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 1, 1, 60, 60),
  1, &conv2d_69_output_array, &conv2d_69_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_71_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &eltwise_71_output_array, &eltwise_71_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  55, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  nl_72_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &nl_72_output_array, &nl_72_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_73_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &eltwise_73_output_array, &eltwise_73_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch1, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_40_scratch1_array, &conv2d_40_scratch1_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_74_output_array, &conv2d_74_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_75_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_75_output_array, &eltwise_75_output_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  pool_77_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &pool_77_output_array, &pool_77_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_output, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 1, 1, 480, 480),
  1, &conv2d_78_output_array, &conv2d_78_output_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  65, 0x1,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5, 5),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  66, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_output, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5, 5),
  1, &nl_81_output_array, &nl_81_output_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conversion_82_output, AI_STATIC,
  68, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
  1, &conversion_82_output_array, NULL)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  70, 0x0,
  AI_SHAPE_INIT(4, 1, 1264, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1264, 1264),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  77, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  81, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 16), AI_STRIDE_INIT(4, 1, 8, 128, 384),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  83, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  84, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch1, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_50_scratch1_array, &conv2d_50_scratch1_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 4), AI_STRIDE_INIT(4, 1, 16, 64, 64),
  1, &conv2d_4_weights_array, &conv2d_4_weights_array_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  87, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_4_bias_array, NULL)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  88, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 4, 1, 1, 16), AI_STRIDE_INIT(4, 1, 4, 64, 64),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  90, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  91, 0x0,
  AI_SHAPE_INIT(4, 1, 880, 1, 1), AI_STRIDE_INIT(4, 1, 1, 880, 880),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 16), AI_STRIDE_INIT(4, 1, 16, 256, 256),
  1, &conv2d_9_weights_array, &conv2d_9_weights_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_9_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch0, AI_STATIC,
  94, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_56_scratch0_array, NULL)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  96, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch1, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_scratch1_array, &conv2d_56_scratch1_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 32), AI_STRIDE_INIT(4, 1, 8, 256, 768),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  99, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  100, 0x0,
  AI_SHAPE_INIT(4, 1, 13601, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13601, 13601),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 16), AI_STRIDE_INIT(4, 1, 32, 512, 512),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  103, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch0, AI_STATIC,
  105, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_59_scratch0_array, NULL)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  106, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch1, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 1, 1, 40, 40),
  1, &conv2d_59_scratch1_array, &conv2d_59_scratch1_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 40), AI_STRIDE_INIT(4, 1, 8, 320, 960),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  109, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  110, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  112, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch0, AI_STATIC,
  113, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_64_scratch0_array, NULL)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  115, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch0, AI_STATIC,
  116, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_66_scratch0_array, NULL)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  118, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch1, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_66_scratch1_array, &conv2d_66_scratch1_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  121, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  122, 0x0,
  AI_SHAPE_INIT(4, 1, 20401, 1, 1), AI_STRIDE_INIT(4, 1, 1, 20401, 20401),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  125, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_scratch0, AI_STATIC,
  127, 0x0,
  AI_SHAPE_INIT(4, 1, 1560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1560, 1560),
  1, &conv2d_69_scratch0_array, NULL)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  128, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_scratch1, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 1, 1, 60, 60),
  1, &conv2d_69_scratch1_array, &conv2d_69_scratch1_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  131, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  132, 0x0,
  AI_SHAPE_INIT(4, 1, 2640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2640, 2640),
  1, &conv2d_70_scratch0_array, NULL)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  134, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_scratch0, AI_STATIC,
  135, 0x0,
  AI_SHAPE_INIT(4, 1, 1360, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1360, 1360),
  1, &conv2d_74_scratch0_array, NULL)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 96, 5, 5, 1), AI_STRIDE_INIT(4, 1, 96, 96, 480),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  137, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  138, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 24), AI_STRIDE_INIT(4, 1, 96, 2304, 2304),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  142, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 96), AI_STRIDE_INIT(4, 1, 24, 2304, 2304),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  143, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_scratch0, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 5760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5760, 5760),
  1, &conv2d_78_scratch0_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 1536, 1536),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_scratch1, AI_STATIC,
  146, 0x1,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 1, 1, 480, 480),
  1, &conv2d_78_scratch1_array, &conv2d_78_scratch1_array_intq)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  147, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch0, AI_STATIC,
  149, 0x0,
  AI_SHAPE_INIT(4, 1, 1970, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1970, 1970),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  150, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  151, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_scratch0, AI_STATIC,
  152, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
  1, &nl_81_scratch0_array, NULL)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  153, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  154, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  155, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  156, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  157, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  159, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  160, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 120), AI_STRIDE_INIT(4, 1, 16, 1920, 1920),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  161, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  163, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  165, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  166, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  167, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  168, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 40), AI_STRIDE_INIT(4, 1, 120, 4800, 4800),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  169, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_weights, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 160), AI_STRIDE_INIT(4, 1, 40, 6400, 6400),
  1, &conv2d_56_weights_array, &conv2d_56_weights_array_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_bias, AI_STATIC,
  171, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_56_bias_array, NULL)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  172, 0x1,
  AI_SHAPE_INIT(4, 160, 5, 5, 1), AI_STRIDE_INIT(4, 1, 160, 160, 800),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_weights, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 160, 1, 1, 40), AI_STRIDE_INIT(4, 1, 160, 6400, 6400),
  1, &conv2d_59_weights_array, &conv2d_59_weights_array_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_bias, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_59_bias_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 160), AI_STRIDE_INIT(4, 1, 40, 6400, 6400),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  177, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_weights, AI_STATIC,
  178, 0x1,
  AI_SHAPE_INIT(4, 160, 1, 1, 40), AI_STRIDE_INIT(4, 1, 160, 6400, 6400),
  1, &conv2d_64_weights_array, &conv2d_64_weights_array_intq)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_bias, AI_STATIC,
  179, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_64_bias_array, NULL)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_weights, AI_STATIC,
  180, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_66_weights_array, &conv2d_66_weights_array_intq)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_bias, AI_STATIC,
  181, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_66_bias_array, NULL)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  182, 0x1,
  AI_SHAPE_INIT(4, 240, 5, 5, 1), AI_STRIDE_INIT(4, 1, 240, 240, 1200),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  183, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_weights, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 60), AI_STRIDE_INIT(4, 1, 240, 14400, 14400),
  1, &conv2d_69_weights_array, &conv2d_69_weights_array_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_bias, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 4, 4, 240, 240),
  1, &conv2d_69_bias_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 60, 1, 1, 240), AI_STRIDE_INIT(4, 1, 60, 14400, 14400),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_weights, AI_STATIC,
  188, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 40), AI_STRIDE_INIT(4, 1, 240, 9600, 9600),
  1, &conv2d_74_weights_array, &conv2d_74_weights_array_intq)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_bias, AI_STATIC,
  189, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_74_bias_array, NULL)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  190, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  191, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_weights, AI_STATIC,
  192, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 480), AI_STRIDE_INIT(4, 1, 240, 115200, 115200),
  1, &conv2d_78_weights_array, &conv2d_78_weights_array_intq)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_bias, AI_STATIC,
  193, 0x0,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1920, 1920),
  1, &conv2d_78_bias_array, NULL)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  194, 0x1,
  AI_SHAPE_INIT(4, 480, 1, 1, 5), AI_STRIDE_INIT(4, 1, 480, 2400, 2400),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  195, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  197, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 2816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2816, 2816),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 104, 1, 1), AI_STRIDE_INIT(4, 1, 1, 104, 104),
  1, &conv2d_4_scratch0_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch1, AI_STATIC,
  201, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &conv2d_4_scratch1_array, &conv2d_4_scratch1_array_intq)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 176, 1, 1), AI_STRIDE_INIT(4, 1, 1, 176, 176),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  203, 0x0,
  AI_SHAPE_INIT(4, 1, 224, 1, 1), AI_STRIDE_INIT(4, 1, 1, 224, 224),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  205, 0x0,
  AI_SHAPE_INIT(4, 1, 5344, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5344, 5344),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  206, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  208, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  210, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_pad_before_output, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_2_pad_before_output_array, &conv2d_2_pad_before_output_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  212, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  pool_3_output, AI_STATIC,
  214, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &pool_3_output_array, &pool_3_output_array_intq)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &conv2d_4_output_array, &conv2d_4_output_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  216, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  217, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_6_output, AI_STATIC,
  218, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &eltwise_6_output_array, &eltwise_6_output_array_intq)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  nl_7_output, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &nl_7_output_array, &nl_7_output_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_8_output, AI_STATIC,
  220, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &eltwise_8_output_array, &eltwise_8_output_array_intq)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  221, 0x0,
  AI_SHAPE_INIT(4, 1, 5968, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5968, 5968),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  222, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_9_output_array, &conv2d_9_output_array_intq)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  224, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_pad_before_output, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 58, 58), AI_STRIDE_INIT(4, 1, 1, 8, 464),
  1, &conv2d_11_pad_before_output_array, &conv2d_11_pad_before_output_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  226, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  228, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_pad_before_output, AI_STATIC,
  230, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 30, 30), AI_STRIDE_INIT(4, 1, 1, 8, 240),
  1, &conv2d_14_pad_before_output_array, &conv2d_14_pad_before_output_array_intq)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  234, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  235, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  236, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  238, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  239, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  240, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  244, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  246, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  248, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  251, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  253, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  254, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  255, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_82_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_81_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_82_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_82_layer, 82,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &conversion_82_chain,
  NULL, &conversion_82_layer, AI_STATIC, 
)


AI_STATIC_CONST ai_i32 nl_81_nl_params_data[] = { 1789318400, 24, -124 };
AI_ARRAY_OBJ_DECLARE(
    nl_81_nl_params, AI_ARRAY_FORMAT_S32,
    nl_81_nl_params_data, nl_81_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_81_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_81_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_81_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  nl_81_layer, 81,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm_integer,
  &nl_81_chain,
  NULL, &conversion_82_layer, AI_STATIC, 
  .nl_params = &nl_81_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_79_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_78_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_79_weights, &conv2d_79_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_79_layer, 79,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_79_chain,
  NULL, &nl_81_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_78_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_78_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_78_weights, &conv2d_78_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_78_scratch0, &conv2d_78_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_78_layer, 78,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_78_chain,
  NULL, &conv2d_79_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_77_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_77_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_77_layer, 77,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_77_chain,
  NULL, &conv2d_78_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_76_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_76_weights, &conv2d_76_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_76_scratch0, &conv2d_76_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_76_layer, 76,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_76_chain,
  NULL, &pool_77_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_75_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_65_output, &conv2d_74_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_75_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_75_layer, 75,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_75_chain,
  NULL, &conv2d_76_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_74_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_73_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_74_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_74_weights, &conv2d_74_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_74_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_74_layer, 74,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_74_chain,
  NULL, &eltwise_75_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_73_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_67_output, &nl_72_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_73_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_73_layer, 73,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_73_chain,
  NULL, &conv2d_74_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_72_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -123, -120, -118, -115, -112, -110, -107, -105, -102, -99, -97, -94, -92, -89, -86, -84, -81, -79, -76, -73, -71, -68, -66, -63, -60, -58, -55, -53, -50, -47, -45, -42, -40, -37, -34, -32, -29, -27, -24, -21, -19, -16, -14, -11, -8, -6, -3, -1, 2, 5, 7, 10, 12, 15, 18, 20, 23, 25, 28, 31, 33, 36, 38, 41, 44, 46, 49, 51, 54, 57, 59, 62, 64, 67, 70, 72, 75, 77, 80, 83, 85, 88, 90, 93, 96, 98, 101, 103, 106, 109, 111, 114, 116, 119, 122, 124, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_72_nl_params, AI_ARRAY_FORMAT_S8,
    nl_72_nl_params_data, nl_72_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_72_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_71_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_72_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_72_layer, 72,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_72_chain,
  NULL, &eltwise_73_layer, AI_STATIC, 
  .nl_params = &nl_72_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_71_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_70_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_71_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_71_layer, 71,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_71_chain,
  NULL, &nl_72_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_70_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_70_weights, &conv2d_70_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_70_layer, 70,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_70_chain,
  NULL, &eltwise_71_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_69_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_69_weights, &conv2d_69_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_69_scratch0, &conv2d_69_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_69_layer, 69,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_69_chain,
  NULL, &conv2d_70_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_68_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_68_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_68_layer, 68,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_68_chain,
  NULL, &conv2d_69_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_67_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_67_weights, &conv2d_67_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_67_scratch0, &conv2d_67_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_67_layer, 67,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_67_chain,
  NULL, &pool_68_layer, AI_STATIC, 
  .groups = 240, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_66_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_66_weights, &conv2d_66_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_66_scratch0, &conv2d_66_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_66_layer, 66,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_66_chain,
  NULL, &conv2d_67_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_65_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_55_output, &conv2d_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_65_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_65_layer, 65,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_65_chain,
  NULL, &conv2d_66_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_64_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_64_weights, &conv2d_64_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_64_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_64_layer, 64,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_64_chain,
  NULL, &eltwise_65_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_63_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_57_output, &nl_62_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_63_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_63_layer, 63,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_63_chain,
  NULL, &conv2d_64_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_62_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -123, -121, -119, -116, -114, -112, -109, -107, -105, -102, -100, -98, -95, -93, -91, -88, -86, -84, -81, -79, -77, -74, -72, -70, -67, -65, -63, -60, -58, -56, -54, -51, -49, -47, -44, -42, -40, -37, -35, -33, -30, -28, -26, -23, -21, -19, -16, -14, -12, -9, -7, -5, -2, 0, 2, 5, 7, 9, 12, 14, 16, 19, 21, 23, 26, 28, 30, 33, 35, 37, 40, 42, 44, 47, 49, 51, 54, 56, 58, 61, 63, 65, 68, 70, 72, 75, 77, 79, 82, 84, 86, 88, 91, 93, 95, 98, 100, 102, 105, 107, 109, 112, 114, 116, 119, 121, 123, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_62_nl_params, AI_ARRAY_FORMAT_S8,
    nl_62_nl_params_data, nl_62_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_62_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_62_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_62_layer, 62,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_62_chain,
  NULL, &eltwise_63_layer, AI_STATIC, 
  .nl_params = &nl_62_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_61_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_60_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_61_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_61_layer, 61,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_61_chain,
  NULL, &nl_62_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_60_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_60_weights, &conv2d_60_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_60_layer, 60,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_60_chain,
  NULL, &eltwise_61_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_59_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_59_weights, &conv2d_59_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_59_scratch0, &conv2d_59_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_59_layer, 59,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_58_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_58_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_58_layer, 58,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_58_chain,
  NULL, &conv2d_59_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_57_weights, &conv2d_57_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_57_scratch0, &conv2d_57_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_layer, 57,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_57_chain,
  NULL, &pool_58_layer, AI_STATIC, 
  .groups = 160, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_56_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_56_weights, &conv2d_56_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_56_scratch0, &conv2d_56_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_56_layer, 56,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_56_chain,
  NULL, &conv2d_57_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_55_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_54_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_55_weights, &conv2d_55_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_55_layer, 55,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_55_chain,
  NULL, &conv2d_56_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_54_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_output, &nl_53_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_54_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_54_layer, 54,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_54_chain,
  NULL, &conv2d_55_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -118, -117, -115, -113, -111, -109, -107, -105, -103, -101, -99, -97, -96, -94, -92, -90, -88, -86, -84, -82, -80, -78, -77, -75, -73, -71, -69, -67, -65, -63, -61, -59, -57, -56, -54, -52, -50, -48, -46, -44, -42, -40, -38, -36, -35, -33, -31, -29, -27, -25, -23, -21, -19, -17, -15, -14, -12, -10, -8, -6, -4, -2, 0, 2, 4, 6, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_53_nl_params, AI_ARRAY_FORMAT_S8,
    nl_53_nl_params_data, nl_53_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_53_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_52_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_53_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_53_layer, 53,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_53_chain,
  NULL, &eltwise_54_layer, AI_STATIC, 
  .nl_params = &nl_53_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_52_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_51_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_52_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_52_layer, 52,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_52_chain,
  NULL, &nl_53_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_51_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_51_weights, &conv2d_51_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_51_layer, 51,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_51_chain,
  NULL, &eltwise_52_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_50_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_50_weights, &conv2d_50_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_50_scratch0, &conv2d_50_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_50_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_50_chain,
  NULL, &conv2d_51_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_49_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_49_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_49_layer, 49,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_49_chain,
  NULL, &conv2d_50_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_48_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_48_weights, &conv2d_48_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_scratch0, &conv2d_48_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_48_layer, 48,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_48_chain,
  NULL, &pool_49_layer, AI_STATIC, 
  .groups = 120, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_47_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_47_weights, &conv2d_47_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_47_scratch0, &conv2d_47_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_47_layer, 47,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_47_chain,
  NULL, &conv2d_48_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_46_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_36_output, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_46_layer, 46,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_46_chain,
  NULL, &conv2d_47_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_45_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_45_weights, &conv2d_45_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_45_layer, 45,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_45_chain,
  NULL, &eltwise_46_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_44_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_output, &nl_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_44_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_44_layer, 44,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_44_chain,
  NULL, &conv2d_45_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -122, -121, -120, -118, -117, -115, -114, -113, -111, -110, -108, -107, -106, -104, -103, -101, -100, -99, -97, -96, -94, -93, -92, -90, -89, -87, -86, -85, -83, -82, -80, -79, -78, -76, -75, -73, -72, -71, -69, -68, -66, -65, -64, -62, -61, -59, -58, -56, -55, -54, -52, -51, -49, -48, -47, -45, -44, -42, -41, -40, -38, -37, -35, -34, -33, -31, -30, -28, -27, -26, -24, -23, -21, -20, -19, -17, -16, -14, -13, -12, -10, -9, -7, -6, -5, -3, -2, 0, 1, 2, 4, 5, 7, 8, 9, 11, 12, 14, 15, 16, 18, 19, 21, 22, 23, 25, 26, 28, 29, 30, 32, 33, 35, 36, 37, 39, 40, 42, 43, 44, 46, 47, 49, 50, 51, 53, 54, 56, 57, 58, 60, 61, 63, 64, 65, 67, 68, 70, 71, 73, 74, 75, 77, 78, 80, 81, 82, 84, 85, 87, 88, 89, 91, 92, 94, 95, 96, 98, 99, 101, 102, 103, 105, 106, 108, 109, 110, 112, 113, 115, 116, 117, 119, 120, 122, 123, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_43_nl_params, AI_ARRAY_FORMAT_S8,
    nl_43_nl_params_data, nl_43_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_43_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_43_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_43_layer, 43,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_43_chain,
  NULL, &eltwise_44_layer, AI_STATIC, 
  .nl_params = &nl_43_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_42_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_41_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_42_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_42_layer, 42,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_42_chain,
  NULL, &nl_43_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_41_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_41_weights, &conv2d_41_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_41_layer, 41,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_41_chain,
  NULL, &eltwise_42_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_40_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_40_weights, &conv2d_40_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_40_scratch0, &conv2d_40_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_40_layer, 40,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_39_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_39_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_39_layer, 39,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_39_chain,
  NULL, &conv2d_40_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_38_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_38_weights, &conv2d_38_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_scratch0, &conv2d_38_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_38_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_38_chain,
  NULL, &pool_39_layer, AI_STATIC, 
  .groups = 64, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_37_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_36_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_37_weights, &conv2d_37_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_37_scratch0, &conv2d_37_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_37_layer, 37,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_37_chain,
  NULL, &conv2d_38_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_36_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_26_output, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_36_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_36_layer, 36,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_36_chain,
  NULL, &conv2d_37_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_35_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_35_weights, &conv2d_35_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_35_layer, 35,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_35_chain,
  NULL, &eltwise_36_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_34_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_output, &nl_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_34_layer, 34,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_34_chain,
  NULL, &conv2d_35_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -116, -114, -112, -110, -109, -107, -105, -103, -102, -100, -98, -96, -95, -93, -91, -89, -88, -86, -84, -82, -81, -79, -77, -75, -74, -72, -70, -68, -66, -65, -63, -61, -59, -58, -56, -54, -52, -51, -49, -47, -45, -44, -42, -40, -38, -37, -35, -33, -31, -30, -28, -26, -24, -23, -21, -19, -17, -16, -14, -12, -10, -8, -7, -5, -3, -1, 0, 2, 4, 6, 7, 9, 11, 13, 14, 16, 18, 20, 21, 23, 25, 27, 28, 30, 32, 34, 35, 37, 39, 41, 42, 44, 46, 48, 50, 51, 53, 55, 57, 58, 60, 62, 64, 65, 67, 69, 71, 72, 74, 76, 78, 79, 81, 83, 85, 86, 88, 90, 92, 93, 95, 97, 99, 100, 102, 104, 106, 108, 109, 111, 113, 115, 116, 118, 120, 122, 123, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_33_nl_params, AI_ARRAY_FORMAT_S8,
    nl_33_nl_params_data, nl_33_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_33_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_33_layer, 33,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_33_chain,
  NULL, &eltwise_34_layer, AI_STATIC, 
  .nl_params = &nl_33_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_32_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_31_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_32_layer, 32,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_32_chain,
  NULL, &nl_33_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_31_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_31_weights, &conv2d_31_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_31_layer, 31,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_31_chain,
  NULL, &eltwise_32_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_30_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_30_weights, &conv2d_30_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_30_scratch0, &conv2d_30_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_30_chain,
  NULL, &conv2d_31_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_29_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_29_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_29_layer, 29,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_29_chain,
  NULL, &conv2d_30_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_scratch0, &conv2d_28_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_28_chain,
  NULL, &pool_29_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_27_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_27_weights, &conv2d_27_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_27_scratch0, &conv2d_27_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_27_layer, 27,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_27_chain,
  NULL, &conv2d_28_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_weights, &conv2d_26_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_26_layer, 26,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_26_chain,
  NULL, &conv2d_27_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_output, &nl_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_25_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_25_layer, 25,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_25_chain,
  NULL, &conv2d_26_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -122, -120, -118, -117, -115, -114, -112, -110, -109, -107, -105, -104, -102, -101, -99, -97, -96, -94, -93, -91, -89, -88, -86, -85, -83, -81, -80, -78, -77, -75, -73, -72, -70, -69, -67, -65, -64, -62, -60, -59, -57, -56, -54, -52, -51, -49, -48, -46, -44, -43, -41, -40, -38, -36, -35, -33, -32, -30, -28, -27, -25, -23, -22, -20, -19, -17, -15, -14, -12, -11, -9, -7, -6, -4, -3, -1, 1, 2, 4, 5, 7, 9, 10, 12, 14, 15, 17, 18, 20, 22, 23, 25, 26, 28, 30, 31, 33, 34, 36, 38, 39, 41, 42, 44, 46, 47, 49, 50, 52, 54, 55, 57, 59, 60, 62, 63, 65, 67, 68, 70, 71, 73, 75, 76, 78, 79, 81, 83, 84, 86, 87, 89, 91, 92, 94, 96, 97, 99, 100, 102, 104, 105, 107, 108, 110, 112, 113, 115, 116, 118, 120, 121, 123, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_24_nl_params, AI_ARRAY_FORMAT_S8,
    nl_24_nl_params_data, nl_24_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_24_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_24_layer, 24,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_24_chain,
  NULL, &eltwise_25_layer, AI_STATIC, 
  .nl_params = &nl_24_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_22_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_23_layer, 23,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_23_chain,
  NULL, &nl_24_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 22,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_22_chain,
  NULL, &eltwise_23_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_21_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_20_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_20_layer, 20,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_20_chain,
  NULL, &conv2d_21_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_scratch0, &conv2d_19_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 19,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_19_chain,
  NULL, &pool_20_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_18_weights, &conv2d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_18_scratch0, &conv2d_18_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_layer, 18,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_18_chain,
  NULL, &conv2d_19_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_output, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_17_layer, 17,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_17_chain,
  NULL, &conv2d_18_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_16_weights, &conv2d_16_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_16_layer, 16,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_16_chain,
  NULL, &eltwise_17_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_scratch0, &conv2d_15_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_15_chain,
  NULL, &conv2d_16_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_14_weights, &conv2d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_14_scratch0, &conv2d_14_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_deep_3x3_sssa8_ch,
  &conv2d_14_chain,
  NULL, &conv2d_15_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_14_pad_before_value_data[] = { -2 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_14_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_14_pad_before_value_data, conv2d_14_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_pad_before_layer, 14,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_14_pad_before_chain,
  NULL, &conv2d_14_layer, AI_STATIC, 
  .value = &conv2d_14_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 13,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_13_chain,
  NULL, &conv2d_14_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, &conv2d_12_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_12_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, &conv2d_11_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_deep_sssa8_ch,
  &conv2d_11_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_11_pad_before_value_data[] = { -11 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_11_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_11_pad_before_value_data, conv2d_11_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_pad_before_layer, 11,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_11_pad_before_chain,
  NULL, &conv2d_11_layer, AI_STATIC, 
  .value = &conv2d_11_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_10_chain,
  NULL, &conv2d_11_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_9_weights, &conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_9_layer, 9,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_9_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_output, &nl_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_8_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_8_layer, 8,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_8_chain,
  NULL, &conv2d_9_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_7_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -126, -124, -123, -122, -121, -120, -119, -117, -116, -115, -114, -113, -111, -110, -109, -108, -107, -105, -104, -103, -102, -101, -100, -98, -97, -96, -95, -94, -92, -91, -90, -89, -88, -86, -85, -84, -83, -82, -81, -79, -78, -77, -76, -75, -73, -72, -71, -70, -69, -67, -66, -65, -64, -63, -62, -60, -59, -58, -57, -56, -54, -53, -52, -51, -50, -48, -47, -46, -45, -44, -43, -41, -40, -39, -38, -37, -35, -34, -33, -32, -31, -29, -28, -27, -26, -25, -24, -22, -21, -20, -19, -18, -16, -15, -14, -13, -12, -10, -9, -8, -7, -6, -5, -3, -2, -1, 0, 1, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 22, 23, 24, 25, 26, 28, 29, 30, 31, 32, 33, 35, 36, 37, 38, 39, 41, 42, 43, 44, 45, 47, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 60, 61, 62, 63, 64, 66, 67, 68, 69, 70, 71, 73, 74, 75, 76, 77, 79, 80, 81, 82, 83, 85, 86, 87, 88, 89, 90, 92, 93, 94, 95, 96, 98, 99, 100, 101, 102, 104, 105, 106, 107, 108, 109, 111, 112, 113, 114, 115, 117, 118, 119, 120, 121, 123, 124, 125, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_7_nl_params, AI_ARRAY_FORMAT_S8,
    nl_7_nl_params_data, nl_7_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_7_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_7_layer, 7,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_7_chain,
  NULL, &eltwise_8_layer, AI_STATIC, 
  .nl_params = &nl_7_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_5_output, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_6_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_6_layer, 6,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_6_chain,
  NULL, &nl_7_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_5_chain,
  NULL, &eltwise_6_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_4_weights, &conv2d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_4_scratch0, &conv2d_4_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_4_layer, 4,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_4_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_3_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_3_layer, 3,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_3_chain,
  NULL, &conv2d_4_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(56, 56), 
  .pool_stride = AI_SHAPE_2D_INIT(56, 56), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, &conv2d_2_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_deep_sssa8_ch,
  &conv2d_2_chain,
  NULL, &pool_3_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_2_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_2_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_2_pad_before_value_data, conv2d_2_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_pad_before_layer, 2,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_2_pad_before_chain,
  NULL, &conv2d_2_layer, AI_STATIC, 
  .value = &conv2d_2_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, &conv2d_1_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_rgb_sssa8_ch,
  &conv2d_1_chain,
  NULL, &conv2d_2_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &serving_default_input_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_0_layer, 0,
  NL_TYPE, 0x0, NULL,
  nl, node_convert_integer,
  &conversion_0_chain,
  NULL, &conv2d_1_layer, AI_STATIC, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 269288, 1, 1),
    269288, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
    156600, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_82_output),
  &conversion_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 269288, 1, 1),
      269288, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
      156600, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_82_output),
  &conversion_0_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_network_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    serving_default_input_10_output_array.data = AI_PTR(g_network_activations_map[0] + 5420);
    serving_default_input_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5420);
    
    conversion_0_output_array.data = AI_PTR(g_network_activations_map[0] + 5416);
    conversion_0_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5416);
    
    conv2d_1_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 155948);
    conv2d_1_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 155948);
    
    conv2d_1_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_1_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_1_output_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_1_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_2_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 896);
    conv2d_2_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 896);
    
    conv2d_2_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 104864);
    conv2d_2_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 104864);
    
    conv2d_2_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_2_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_2_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_2_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    pool_3_output_array.data = AI_PTR(g_network_activations_map[0] + 50176);
    pool_3_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50176);
    
    conv2d_4_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 50192);
    conv2d_4_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 50192);
    
    conv2d_4_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 50296);
    conv2d_4_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 50296);
    
    conv2d_4_output_array.data = AI_PTR(g_network_activations_map[0] + 50300);
    conv2d_4_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50300);
    
    conv2d_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 50304);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 50304);
    
    conv2d_5_output_array.data = AI_PTR(g_network_activations_map[0] + 50176);
    conv2d_5_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50176);
    
    eltwise_6_output_array.data = AI_PTR(g_network_activations_map[0] + 50192);
    eltwise_6_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50192);
    
    nl_7_output_array.data = AI_PTR(g_network_activations_map[0] + 50176);
    nl_7_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50176);
    
    eltwise_8_output_array.data = AI_PTR(g_network_activations_map[0] + 50192);
    eltwise_8_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50192);
    
    conv2d_9_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_9_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_9_output_array.data = AI_PTR(g_network_activations_map[0] + 100368);
    conv2d_9_output_array.data_start = AI_PTR(g_network_activations_map[0] + 100368);
    
    conv2d_10_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_10_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_10_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    conv2d_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_11_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 25232);
    conv2d_11_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25232);
    
    conv2d_11_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_11_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 52144);
    conv2d_11_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 52144);
    
    conv2d_11_output_array.data = AI_PTR(g_network_activations_map[0] + 77232);
    conv2d_11_output_array.data_start = AI_PTR(g_network_activations_map[0] + 77232);
    
    conv2d_12_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_12_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_12_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_12_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_12_output_array.data = AI_PTR(g_network_activations_map[0] + 12832);
    conv2d_12_output_array.data_start = AI_PTR(g_network_activations_map[0] + 12832);
    
    conv2d_13_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_13_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    conv2d_13_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_14_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 6416);
    conv2d_14_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6416);
    
    conv2d_14_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 13616);
    conv2d_14_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 13616);
    
    conv2d_14_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19584);
    conv2d_14_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19584);
    
    conv2d_14_output_array.data = AI_PTR(g_network_activations_map[0] + 50944);
    conv2d_14_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50944);
    
    conv2d_15_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6416);
    conv2d_15_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6416);
    
    conv2d_15_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6736);
    conv2d_15_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6736);
    
    conv2d_15_output_array.data = AI_PTR(g_network_activations_map[0] + 19280);
    conv2d_15_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19280);
    
    conv2d_16_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_16_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_16_output_array.data = AI_PTR(g_network_activations_map[0] + 6416);
    conv2d_16_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6416);
    
    eltwise_17_output_array.data = AI_PTR(g_network_activations_map[0] + 12688);
    eltwise_17_output_array.data_start = AI_PTR(g_network_activations_map[0] + 12688);
    
    conv2d_18_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_18_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_18_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 18960);
    conv2d_18_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 18960);
    
    conv2d_18_output_array.data = AI_PTR(g_network_activations_map[0] + 56592);
    conv2d_18_output_array.data_start = AI_PTR(g_network_activations_map[0] + 56592);
    
    conv2d_19_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_19_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_19_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4084);
    conv2d_19_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4084);
    
    conv2d_19_output_array.data = AI_PTR(g_network_activations_map[0] + 13492);
    conv2d_19_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13492);
    
    pool_20_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_20_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_21_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 48);
    conv2d_21_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    conv2d_21_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 360);
    conv2d_21_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 360);
    
    conv2d_21_output_array.data = AI_PTR(g_network_activations_map[0] + 372);
    conv2d_21_output_array.data_start = AI_PTR(g_network_activations_map[0] + 372);
    
    conv2d_22_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 384);
    conv2d_22_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 384);
    
    conv2d_22_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_22_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_23_output_array.data = AI_PTR(g_network_activations_map[0] + 48);
    eltwise_23_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    nl_24_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_24_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_25_output_array.data = AI_PTR(g_network_activations_map[0] + 48);
    eltwise_25_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    conv2d_26_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 9456);
    conv2d_26_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 9456);
    
    conv2d_26_output_array.data = AI_PTR(g_network_activations_map[0] + 9808);
    conv2d_26_output_array.data_start = AI_PTR(g_network_activations_map[0] + 9808);
    
    conv2d_27_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_27_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_27_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 12944);
    conv2d_27_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 12944);
    
    conv2d_27_output_array.data = AI_PTR(g_network_activations_map[0] + 31760);
    conv2d_27_output_array.data_start = AI_PTR(g_network_activations_map[0] + 31760);
    
    conv2d_28_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_28_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_28_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 12944);
    conv2d_28_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 12944);
    
    conv2d_28_output_array.data = AI_PTR(g_network_activations_map[0] + 50576);
    conv2d_28_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50576);
    
    pool_29_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_29_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_30_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 96);
    conv2d_30_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 96);
    
    conv2d_30_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_30_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    conv2d_30_output_array.data = AI_PTR(g_network_activations_map[0] + 744);
    conv2d_30_output_array.data_start = AI_PTR(g_network_activations_map[0] + 744);
    
    conv2d_31_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 768);
    conv2d_31_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 768);
    
    conv2d_31_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_31_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_32_output_array.data = AI_PTR(g_network_activations_map[0] + 96);
    eltwise_32_output_array.data_start = AI_PTR(g_network_activations_map[0] + 96);
    
    nl_33_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_33_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_34_output_array.data = AI_PTR(g_network_activations_map[0] + 12944);
    eltwise_34_output_array.data_start = AI_PTR(g_network_activations_map[0] + 12944);
    
    conv2d_35_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_35_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_35_output_array.data = AI_PTR(g_network_activations_map[0] + 544);
    conv2d_35_output_array.data_start = AI_PTR(g_network_activations_map[0] + 544);
    
    eltwise_36_output_array.data = AI_PTR(g_network_activations_map[0] + 3680);
    eltwise_36_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3680);
    
    conv2d_37_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_37_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_37_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6816);
    conv2d_37_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6816);
    
    conv2d_37_output_array.data = AI_PTR(g_network_activations_map[0] + 19360);
    conv2d_37_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19360);
    
    conv2d_38_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6816);
    conv2d_38_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6816);
    
    conv2d_38_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 31904);
    conv2d_38_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 31904);
    
    conv2d_38_output_array.data = AI_PTR(g_network_activations_map[0] + 44448);
    conv2d_38_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44448);
    
    pool_39_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_39_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_40_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_40_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_40_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 480);
    conv2d_40_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 480);
    
    conv2d_40_output_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 512);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 512);
    
    conv2d_41_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_41_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_42_output_array.data = AI_PTR(g_network_activations_map[0] + 64);
    eltwise_42_output_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    nl_43_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_43_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_44_output_array.data = AI_PTR(g_network_activations_map[0] + 6816);
    eltwise_44_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6816);
    
    conv2d_45_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_45_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_45_output_array.data = AI_PTR(g_network_activations_map[0] + 416);
    conv2d_45_output_array.data_start = AI_PTR(g_network_activations_map[0] + 416);
    
    eltwise_46_output_array.data = AI_PTR(g_network_activations_map[0] + 6816);
    eltwise_46_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6816);
    
    conv2d_47_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_47_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_47_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 9952);
    conv2d_47_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 9952);
    
    conv2d_47_output_array.data = AI_PTR(g_network_activations_map[0] + 33472);
    conv2d_47_output_array.data_start = AI_PTR(g_network_activations_map[0] + 33472);
    
    conv2d_48_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_48_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_48_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10204);
    conv2d_48_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10204);
    
    conv2d_48_output_array.data = AI_PTR(g_network_activations_map[0] + 16084);
    conv2d_48_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16084);
    
    pool_49_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_49_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_50_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_50_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_50_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_50_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_50_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_50_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_51_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_51_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
    conv2d_51_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_51_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_52_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_52_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_53_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_53_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_54_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_54_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_55_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6000);
    conv2d_55_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6000);
    
    conv2d_55_output_array.data = AI_PTR(g_network_activations_map[0] + 6880);
    conv2d_55_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6880);
    
    conv2d_56_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_56_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_56_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8840);
    conv2d_56_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8840);
    
    conv2d_56_output_array.data = AI_PTR(g_network_activations_map[0] + 16680);
    conv2d_56_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16680);
    
    conv2d_57_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 24520);
    conv2d_57_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 24520);
    
    conv2d_57_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8840);
    conv2d_57_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8840);
    
    conv2d_57_output_array.data = AI_PTR(g_network_activations_map[0] + 38124);
    conv2d_57_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38124);
    
    pool_58_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_58_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_59_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 160);
    conv2d_59_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 160);
    
    conv2d_59_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 1200);
    conv2d_59_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 1200);
    
    conv2d_59_output_array.data = AI_PTR(g_network_activations_map[0] + 1240);
    conv2d_59_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1240);
    
    conv2d_60_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1280);
    conv2d_60_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1280);
    
    conv2d_60_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_60_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_61_output_array.data = AI_PTR(g_network_activations_map[0] + 160);
    eltwise_61_output_array.data_start = AI_PTR(g_network_activations_map[0] + 160);
    
    nl_62_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_62_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_63_output_array.data = AI_PTR(g_network_activations_map[0] + 8840);
    eltwise_63_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8840);
    
    conv2d_64_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_64_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_64_output_array.data = AI_PTR(g_network_activations_map[0] + 1040);
    conv2d_64_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1040);
    
    eltwise_65_output_array.data = AI_PTR(g_network_activations_map[0] + 3000);
    eltwise_65_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3000);
    
    conv2d_66_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_66_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_66_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4960);
    conv2d_66_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4960);
    
    conv2d_66_output_array.data = AI_PTR(g_network_activations_map[0] + 16720);
    conv2d_66_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16720);
    
    conv2d_67_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 28480);
    conv2d_67_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 28480);
    
    conv2d_67_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4960);
    conv2d_67_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4960);
    
    conv2d_67_output_array.data = AI_PTR(g_network_activations_map[0] + 48884);
    conv2d_67_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48884);
    
    pool_68_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_68_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_69_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 240);
    conv2d_69_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 240);
    
    conv2d_69_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 1800);
    conv2d_69_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 1800);
    
    conv2d_69_output_array.data = AI_PTR(g_network_activations_map[0] + 1860);
    conv2d_69_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1860);
    
    conv2d_70_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 4960);
    conv2d_70_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 4960);
    
    conv2d_70_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_71_output_array.data = AI_PTR(g_network_activations_map[0] + 240);
    eltwise_71_output_array.data_start = AI_PTR(g_network_activations_map[0] + 240);
    
    nl_72_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_72_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_73_output_array.data = AI_PTR(g_network_activations_map[0] + 4960);
    eltwise_73_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4960);
    
    conv2d_74_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_74_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_74_output_array.data = AI_PTR(g_network_activations_map[0] + 16720);
    conv2d_74_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16720);
    
    eltwise_75_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    eltwise_75_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_76_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1960);
    conv2d_76_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1960);
    
    conv2d_76_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4520);
    conv2d_76_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4520);
    
    conv2d_76_output_array.data = AI_PTR(g_network_activations_map[0] + 16280);
    conv2d_76_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16280);
    
    pool_77_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_77_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_78_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 240);
    conv2d_78_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 240);
    
    conv2d_78_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6000);
    conv2d_78_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6000);
    
    conv2d_78_output_array.data = AI_PTR(g_network_activations_map[0] + 6480);
    conv2d_78_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6480);
    
    conv2d_79_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_79_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 1972);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1972);
    
    nl_81_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_81_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_81_output_array.data = AI_PTR(g_network_activations_map[0] + 20);
    nl_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 20);
    
    conversion_82_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conversion_82_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_network_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array.data = AI_PTR(g_network_weights_map[0] + 0);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array.data_start = AI_PTR(g_network_weights_map[0] + 0);
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array.data = AI_PTR(g_network_weights_map[0] + 4);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array.data_start = AI_PTR(g_network_weights_map[0] + 4);
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array.data = AI_PTR(g_network_weights_map[0] + 8);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array.data_start = AI_PTR(g_network_weights_map[0] + 8);
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array.data = AI_PTR(g_network_weights_map[0] + 12);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array.data_start = AI_PTR(g_network_weights_map[0] + 12);
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array.data = AI_PTR(g_network_weights_map[0] + 16);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array.data_start = AI_PTR(g_network_weights_map[0] + 16);
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array.data = AI_PTR(g_network_weights_map[0] + 20);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array.data_start = AI_PTR(g_network_weights_map[0] + 20);
    
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array.format |= AI_FMT_FLAG_CONST;
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array.data = AI_PTR(g_network_weights_map[0] + 24);
    EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array.data_start = AI_PTR(g_network_weights_map[0] + 24);
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_network_weights_map[0] + 28);
    conv2d_1_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 28);
    
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_network_weights_map[0] + 244);
    conv2d_1_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 244);
    
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(g_network_weights_map[0] + 276);
    conv2d_2_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 276);
    
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(g_network_weights_map[0] + 1428);
    conv2d_2_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1428);
    
    conv2d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_weights_array.data = AI_PTR(g_network_weights_map[0] + 1492);
    conv2d_4_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1492);
    
    conv2d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_bias_array.data = AI_PTR(g_network_weights_map[0] + 1556);
    conv2d_4_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1556);
    
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(g_network_weights_map[0] + 1572);
    conv2d_5_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1572);
    
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(g_network_weights_map[0] + 1636);
    conv2d_5_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1636);
    
    conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_weights_array.data = AI_PTR(g_network_weights_map[0] + 1700);
    conv2d_9_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1700);
    
    conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_bias_array.data = AI_PTR(g_network_weights_map[0] + 1956);
    conv2d_9_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1956);
    
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(g_network_weights_map[0] + 2020);
    conv2d_10_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2020);
    
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(g_network_weights_map[0] + 2148);
    conv2d_10_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 2148);
    
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(g_network_weights_map[0] + 2180);
    conv2d_11_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2180);
    
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(g_network_weights_map[0] + 4484);
    conv2d_11_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 4484);
    
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(g_network_weights_map[0] + 4612);
    conv2d_12_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 4612);
    
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(g_network_weights_map[0] + 5124);
    conv2d_12_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5124);
    
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(g_network_weights_map[0] + 5188);
    conv2d_13_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5188);
    
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(g_network_weights_map[0] + 5316);
    conv2d_13_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5316);
    
    conv2d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_weights_array.data = AI_PTR(g_network_weights_map[0] + 5348);
    conv2d_14_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5348);
    
    conv2d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_bias_array.data = AI_PTR(g_network_weights_map[0] + 8228);
    conv2d_14_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 8228);
    
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(g_network_weights_map[0] + 8388);
    conv2d_15_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 8388);
    
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(g_network_weights_map[0] + 9028);
    conv2d_15_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9028);
    
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(g_network_weights_map[0] + 9092);
    conv2d_16_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9092);
    
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(g_network_weights_map[0] + 9220);
    conv2d_16_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9220);
    
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(g_network_weights_map[0] + 9252);
    conv2d_18_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9252);
    
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(g_network_weights_map[0] + 9636);
    conv2d_18_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9636);
    
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(g_network_weights_map[0] + 9828);
    conv2d_19_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9828);
    
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(g_network_weights_map[0] + 11028);
    conv2d_19_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 11028);
    
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(g_network_weights_map[0] + 11220);
    conv2d_21_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 11220);
    
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(g_network_weights_map[0] + 11796);
    conv2d_21_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 11796);
    
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(g_network_weights_map[0] + 11844);
    conv2d_22_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 11844);
    
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(g_network_weights_map[0] + 12420);
    conv2d_22_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 12420);
    
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(g_network_weights_map[0] + 12612);
    conv2d_26_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 12612);
    
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(g_network_weights_map[0] + 13380);
    conv2d_26_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 13380);
    
    conv2d_27_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_weights_array.data = AI_PTR(g_network_weights_map[0] + 13444);
    conv2d_27_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 13444);
    
    conv2d_27_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_bias_array.data = AI_PTR(g_network_weights_map[0] + 14980);
    conv2d_27_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 14980);
    
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(g_network_weights_map[0] + 15364);
    conv2d_28_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 15364);
    
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(g_network_weights_map[0] + 17764);
    conv2d_28_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 17764);
    
    conv2d_30_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_weights_array.data = AI_PTR(g_network_weights_map[0] + 18148);
    conv2d_30_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 18148);
    
    conv2d_30_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_bias_array.data = AI_PTR(g_network_weights_map[0] + 20452);
    conv2d_30_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 20452);
    
    conv2d_31_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_weights_array.data = AI_PTR(g_network_weights_map[0] + 20548);
    conv2d_31_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 20548);
    
    conv2d_31_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_bias_array.data = AI_PTR(g_network_weights_map[0] + 22852);
    conv2d_31_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 22852);
    
    conv2d_35_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_weights_array.data = AI_PTR(g_network_weights_map[0] + 23236);
    conv2d_35_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 23236);
    
    conv2d_35_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_bias_array.data = AI_PTR(g_network_weights_map[0] + 24772);
    conv2d_35_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 24772);
    
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(g_network_weights_map[0] + 24836);
    conv2d_37_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 24836);
    
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(g_network_weights_map[0] + 25860);
    conv2d_37_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 25860);
    
    conv2d_38_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_weights_array.data = AI_PTR(g_network_weights_map[0] + 26116);
    conv2d_38_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 26116);
    
    conv2d_38_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_bias_array.data = AI_PTR(g_network_weights_map[0] + 27716);
    conv2d_38_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 27716);
    
    conv2d_40_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_weights_array.data = AI_PTR(g_network_weights_map[0] + 27972);
    conv2d_40_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 27972);
    
    conv2d_40_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_bias_array.data = AI_PTR(g_network_weights_map[0] + 28996);
    conv2d_40_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 28996);
    
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(g_network_weights_map[0] + 29060);
    conv2d_41_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 29060);
    
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(g_network_weights_map[0] + 30084);
    conv2d_41_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 30084);
    
    conv2d_45_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_weights_array.data = AI_PTR(g_network_weights_map[0] + 30340);
    conv2d_45_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 30340);
    
    conv2d_45_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_bias_array.data = AI_PTR(g_network_weights_map[0] + 31364);
    conv2d_45_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 31364);
    
    conv2d_47_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_weights_array.data = AI_PTR(g_network_weights_map[0] + 31428);
    conv2d_47_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 31428);
    
    conv2d_47_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_bias_array.data = AI_PTR(g_network_weights_map[0] + 33348);
    conv2d_47_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 33348);
    
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(g_network_weights_map[0] + 33828);
    conv2d_48_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 33828);
    
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(g_network_weights_map[0] + 36828);
    conv2d_48_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 36828);
    
    conv2d_50_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_weights_array.data = AI_PTR(g_network_weights_map[0] + 37308);
    conv2d_50_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 37308);
    
    conv2d_50_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_bias_array.data = AI_PTR(g_network_weights_map[0] + 40908);
    conv2d_50_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 40908);
    
    conv2d_51_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_weights_array.data = AI_PTR(g_network_weights_map[0] + 41028);
    conv2d_51_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 41028);
    
    conv2d_51_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_bias_array.data = AI_PTR(g_network_weights_map[0] + 44628);
    conv2d_51_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 44628);
    
    conv2d_55_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_weights_array.data = AI_PTR(g_network_weights_map[0] + 45108);
    conv2d_55_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 45108);
    
    conv2d_55_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_bias_array.data = AI_PTR(g_network_weights_map[0] + 49908);
    conv2d_55_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 49908);
    
    conv2d_56_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_56_weights_array.data = AI_PTR(g_network_weights_map[0] + 50068);
    conv2d_56_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 50068);
    
    conv2d_56_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_56_bias_array.data = AI_PTR(g_network_weights_map[0] + 56468);
    conv2d_56_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 56468);
    
    conv2d_57_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_weights_array.data = AI_PTR(g_network_weights_map[0] + 57108);
    conv2d_57_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 57108);
    
    conv2d_57_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_bias_array.data = AI_PTR(g_network_weights_map[0] + 61108);
    conv2d_57_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 61108);
    
    conv2d_59_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_59_weights_array.data = AI_PTR(g_network_weights_map[0] + 61748);
    conv2d_59_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 61748);
    
    conv2d_59_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_59_bias_array.data = AI_PTR(g_network_weights_map[0] + 68148);
    conv2d_59_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 68148);
    
    conv2d_60_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_weights_array.data = AI_PTR(g_network_weights_map[0] + 68308);
    conv2d_60_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 68308);
    
    conv2d_60_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_bias_array.data = AI_PTR(g_network_weights_map[0] + 74708);
    conv2d_60_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 74708);
    
    conv2d_64_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_64_weights_array.data = AI_PTR(g_network_weights_map[0] + 75348);
    conv2d_64_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 75348);
    
    conv2d_64_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_64_bias_array.data = AI_PTR(g_network_weights_map[0] + 81748);
    conv2d_64_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 81748);
    
    conv2d_66_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_66_weights_array.data = AI_PTR(g_network_weights_map[0] + 81908);
    conv2d_66_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 81908);
    
    conv2d_66_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_66_bias_array.data = AI_PTR(g_network_weights_map[0] + 91508);
    conv2d_66_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 91508);
    
    conv2d_67_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_weights_array.data = AI_PTR(g_network_weights_map[0] + 92468);
    conv2d_67_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 92468);
    
    conv2d_67_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_bias_array.data = AI_PTR(g_network_weights_map[0] + 98468);
    conv2d_67_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 98468);
    
    conv2d_69_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_69_weights_array.data = AI_PTR(g_network_weights_map[0] + 99428);
    conv2d_69_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 99428);
    
    conv2d_69_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_69_bias_array.data = AI_PTR(g_network_weights_map[0] + 113828);
    conv2d_69_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 113828);
    
    conv2d_70_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_weights_array.data = AI_PTR(g_network_weights_map[0] + 114068);
    conv2d_70_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 114068);
    
    conv2d_70_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_bias_array.data = AI_PTR(g_network_weights_map[0] + 128468);
    conv2d_70_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 128468);
    
    conv2d_74_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_74_weights_array.data = AI_PTR(g_network_weights_map[0] + 129428);
    conv2d_74_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 129428);
    
    conv2d_74_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_74_bias_array.data = AI_PTR(g_network_weights_map[0] + 139028);
    conv2d_74_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 139028);
    
    conv2d_76_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_weights_array.data = AI_PTR(g_network_weights_map[0] + 139188);
    conv2d_76_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 139188);
    
    conv2d_76_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_bias_array.data = AI_PTR(g_network_weights_map[0] + 148788);
    conv2d_76_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 148788);
    
    conv2d_78_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_78_weights_array.data = AI_PTR(g_network_weights_map[0] + 149748);
    conv2d_78_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 149748);
    
    conv2d_78_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_78_bias_array.data = AI_PTR(g_network_weights_map[0] + 264948);
    conv2d_78_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 264948);
    
    conv2d_79_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_weights_array.data = AI_PTR(g_network_weights_map[0] + 266868);
    conv2d_79_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 266868);
    
    conv2d_79_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 269268);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 269268);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 19197236,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 19197236,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_create(network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_data_params_get(&params) != true) {
        err = ai_network_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_init(*network, &params) != true) {
        err = ai_network_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

