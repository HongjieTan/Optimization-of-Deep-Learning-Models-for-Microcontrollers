/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jan 14 14:13:57 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "7091fbc4d5fb4e5c2329c2534507a4bf"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Jan 14 14:13:57 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
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
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
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
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
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
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
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
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8161, AI_STATIC)
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
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
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
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 624, AI_STATIC)
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
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
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
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
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
  conv2d_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
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
  conv2d_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
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
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
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
  conv2d_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
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
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
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
  conv2d_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 60, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
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
  nl_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  pool_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 480, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1264, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conversion_82_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 11, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
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
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 880, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13601, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
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
  conv2d_59_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20401, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
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
  conv2d_69_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1560, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 60, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2640, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1360, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2400, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5760, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 480, AI_STATIC)
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
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2030, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 11, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1920, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4800, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4000, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6000, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14400, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 60, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14400, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 115200, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 480, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5280, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 11, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2816, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 104, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 176, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 224, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5344, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  pool_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5968, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  nl_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_8_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 26912, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006384774576872587f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05902070552110672f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10803105682134628f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.019583918154239655f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0067974478006362915f),
    AI_PACK_INTQ_ZP(-20)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0067974478006362915f),
    AI_PACK_INTQ_ZP(-20)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05626234784722328f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11654964089393616f),
    AI_PACK_INTQ_ZP(1)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010236871428787708f),
    AI_PACK_INTQ_ZP(29)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010236871428787708f),
    AI_PACK_INTQ_ZP(29)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07635645568370819f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011657636612653732f),
    AI_PACK_INTQ_ZP(41)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011657636612653732f),
    AI_PACK_INTQ_ZP(41)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.061013225466012955f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09580017626285553f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01237773708999157f),
    AI_PACK_INTQ_ZP(46)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01237773708999157f),
    AI_PACK_INTQ_ZP(46)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08280811458826065f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11752847582101822f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011182588525116444f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.3272560238838196f),
    AI_PACK_INTQ_ZP(30)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01237773708999157f),
    AI_PACK_INTQ_ZP(46)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011657636612653732f),
    AI_PACK_INTQ_ZP(41)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010236871428787708f),
    AI_PACK_INTQ_ZP(29)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0067974478006362915f),
    AI_PACK_INTQ_ZP(-20)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006384774576872587f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005355582572519779f),
    AI_PACK_INTQ_ZP(-60)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005168465431779623f),
    AI_PACK_INTQ_ZP(-66)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028892841655761003f, 0.004582638386636972f, 0.013361007906496525f, 0.004471675027161837f, 0.005893523804843426f, 0.010108258575201035f, 0.0053212302736938f, 0.006732567213475704f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028299710247665644f, 0.0036958057899028063f, 0.0051499647088348866f, 0.001194105832837522f, 0.003230506321415305f, 0.0015593679854646325f, 0.0018691745353862643f, 0.0020407792180776596f, 0.006546189542859793f, 0.0013986731646582484f, 0.002512493869289756f, 0.0021451206412166357f, 0.001555066555738449f, 0.00242055207490921f, 0.004154662601649761f, 0.0013849454699084163f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005537308752536774f, 0.0042818523943424225f, 0.00424247095361352f, 0.007046656217426062f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007792209507897496f, 0.0006625254754908383f, 0.0008307737880386412f, 0.0009366677259095013f, 0.0007655347581021488f, 0.0005981323192827404f, 0.0009713483741506934f, 0.0012039445573464036f, 0.0007492980221286416f, 0.0008280680631287396f, 0.0009340728283859789f, 0.0007524550892412663f, 0.0010182245168834925f, 0.0008218106813728809f, 0.0015465947799384594f, 0.0005865020793862641f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004107856657356024f, 0.004371799062937498f, 0.006554431281983852f, 0.0036589838564395905f, 0.004291643388569355f, 0.0043260641396045685f, 0.005185834132134914f, 0.00406472897157073f, 0.00348763819783926f, 0.0047549414448440075f, 0.004638286307454109f, 0.004527417477220297f, 0.004811555612832308f, 0.006739463657140732f, 0.004655467811971903f, 0.004961260128766298f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.017486846074461937f, 0.018922653049230576f, 0.018782583996653557f, 0.0220755897462368f, 0.020292529836297035f, 0.013902903534471989f, 0.019910354167222977f, 0.02389533258974552f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015328159788623452f, 0.0017847780836746097f, 0.001974361017346382f, 0.001750195981003344f, 0.0019016010919585824f, 0.000903935288079083f, 0.0010493338340893388f, 0.00221050763502717f, 0.000841096683871001f, 0.0012876265682280064f, 0.0012458375422284007f, 0.0011611671652644873f, 0.0009875977411866188f, 0.0014578987611457705f, 0.0015655392780900002f, 0.0010031226556748152f, 0.0012102178297936916f, 0.0014971086056903005f, 0.0016115910839289427f, 0.0019599134102463722f, 0.0014874954940751195f, 0.001936628483235836f, 0.0015643448568880558f, 0.0012684116372838616f, 0.0013311527436599135f, 0.0013754679821431637f, 0.0009319882956333458f, 0.0019346337066963315f, 0.0013757135020568967f, 0.001636774162761867f, 0.0009022161830216646f, 0.0015462160808965564f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00337958917953074f, 0.005027143284678459f, 0.0033969462383538485f, 0.004330282099545002f, 0.0043984404765069485f, 0.0040746694430708885f, 0.0036818184889853f, 0.004146047402173281f, 0.003961341455578804f, 0.0036265754606574774f, 0.0042681265622377396f, 0.005599216092377901f, 0.0036650286056101322f, 0.004197857342660427f, 0.0034859366714954376f, 0.0037632370367646217f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009275018237531185f, 0.004060965497046709f, 0.004656825680285692f, 0.005511241499334574f, 0.004977657925337553f, 0.0039995829574763775f, 0.0054239025339484215f, 0.005510556045919657f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012976637808606029f, 0.0010947760893031955f, 0.002138949930667877f, 0.0008628481882624328f, 0.0014590746723115444f, 0.001215790631249547f, 0.0010731798829510808f, 0.0010158073855563998f, 0.0013012094423174858f, 0.001953743165358901f, 0.001153554767370224f, 0.0012875872198492289f, 0.0018359101377427578f, 0.0021299347281455994f, 0.0016250759363174438f, 0.0015577313024550676f, 0.0024094427935779095f, 0.0010734563693404198f, 0.0009089658269658685f, 0.0014207481872290373f, 0.0018156449077650905f, 0.002055521123111248f, 0.0008386083063669503f, 0.001084081712178886f, 0.001135107595473528f, 0.001509350840933621f, 0.0009759067906998098f, 0.001228409237228334f, 0.001232801121659577f, 0.00186922587454319f, 0.0014449241571128368f, 0.0010843225754797459f, 0.001293462933972478f, 0.0011170509969815612f, 0.00112129095941782f, 0.001376769389025867f, 0.0009004683815874159f, 0.0014982415596023202f, 0.0008289320394396782f, 0.0008332317811436951f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0037756790407001972f, 0.0035150807816535234f, 0.004048030823469162f, 0.004508600570261478f, 0.0044144680723547935f, 0.0040704007260501385f, 0.0039697629399597645f, 0.004640283528715372f, 0.005029529798775911f, 0.004031019750982523f, 0.004525102209299803f, 0.004665296990424395f, 0.0051879482343792915f, 0.003984806127846241f, 0.004591546952724457f, 0.003379636676982045f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0020105461589992046f, 0.001702961279079318f, 0.0020041607785969973f, 0.0028251137118786573f, 0.0019472388084977865f, 0.002182534895837307f, 0.0026159947738051414f, 0.0015463584568351507f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022729341872036457f, 0.0033801330719143152f, 0.0021517809946089983f, 0.001907960744574666f, 0.002777516609057784f, 0.0023785391822457314f, 0.0034610575530678034f, 0.002817603526636958f, 0.002259409287944436f, 0.004215548746287823f, 0.0022238213568925858f, 0.003773584496229887f, 0.002626710804179311f, 0.002409778768196702f, 0.0023708310909569263f, 0.0039220512844622135f, 0.003248721593990922f, 0.0024859807454049587f, 0.004877126310020685f, 0.0024373221676796675f, 0.003125227754935622f, 0.0035019225906580687f, 0.003260513534769416f, 0.0019512069411575794f, 0.0027273332234472036f, 0.003958605229854584f, 0.0025966993998736143f, 0.0037354719825088978f, 0.003273135982453823f, 0.00363521883264184f, 0.0035734802950173616f, 0.002987891435623169f, 0.003539286321029067f, 0.0030764646362513304f, 0.0027935125399380922f, 0.0030053684022277594f, 0.003304455429315567f, 0.0039510284550487995f, 0.0031860300805419683f, 0.0038203964941203594f, 0.0034024957567453384f, 0.003170373849570751f, 0.002619561506435275f, 0.004429074004292488f, 0.0018795754294842482f, 0.002394000068306923f, 0.006304391659796238f, 0.002303604269400239f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007563689257949591f, 0.0033025143202394247f, 0.005333267617970705f, 0.004794887732714415f, 0.003430462907999754f, 0.003829204710200429f, 0.0015822892310097814f, 0.0032876513432711363f, 0.003129031974822283f, 0.0033812010660767555f, 0.0046739112585783005f, 0.00361328711733222f, 0.002877467079088092f, 0.0037351574283093214f, 0.0035055510234087706f, 0.002754393732175231f, 0.0028862664476037025f, 0.0021041561849415302f, 0.0035302359610795975f, 0.004632934462279081f, 0.006424595136195421f, 0.00217699003405869f, 0.0028569430578500032f, 0.006130465306341648f, 0.005686396732926369f, 0.0022184259723871946f, 0.0031578978523612022f, 0.002596453530713916f, 0.003670256119221449f, 0.0034835662227123976f, 0.0035079915542155504f, 0.0036750759463757277f, 0.0037522828206419945f, 0.0021824303548783064f, 0.0020431841257959604f, 0.0029446976259350777f, 0.003772903233766556f, 0.004222548566758633f, 0.003096564905717969f, 0.003401288064196706f, 0.004295246209949255f, 0.002582088578492403f, 0.003135459963232279f, 0.0027308142744004726f, 0.0066443695686757565f, 0.005314628593623638f, 0.0016364778857678175f, 0.0031160369981080294f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003202848369255662f, 0.0038875313475728035f, 0.004935376811772585f, 0.004350780509412289f, 0.003674207953736186f, 0.004006179515272379f, 0.0024491227231919765f, 0.0028584562242031097f, 0.004529597703367472f, 0.005196352954953909f, 0.0036912779323756695f, 0.0035862477961927652f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005073088686913252f, 0.0006731034372933209f, 0.001033528009429574f, 0.0009428869816474617f, 0.0004722568264696747f, 0.0005941999261267483f, 0.0008355454192496836f, 0.0006628358387388289f, 0.0005489703617058694f, 0.0005929294275119901f, 0.0006758319796063006f, 0.0007460550987161696f, 0.0012198553886264563f, 0.0007478688494302332f, 0.0009241501102223992f, 0.0006460307049565017f, 0.0009126490913331509f, 0.0010370019590482116f, 0.0008597096893936396f, 0.0003426263574510813f, 0.0008270274265669286f, 0.0007925828685984015f, 0.0006342181004583836f, 0.0007669553160667419f, 0.0007156651699915528f, 0.0006840906571596861f, 0.0006813897052779794f, 0.0006546354270540178f, 0.000577794446144253f, 0.0004985743435099721f, 0.0005026055732741952f, 0.0008217079448513687f, 0.0007784757181070745f, 0.0010462079662829638f, 0.0008941996493376791f, 0.0006778656970709562f, 0.0005611723754554987f, 0.0008357810438610613f, 0.0006943827611394227f, 0.0004362559993751347f, 0.0009615659946575761f, 0.0012980103492736816f, 0.0008791227010078728f, 0.0005099195404909551f, 0.0007378784357570112f, 0.0005944536533206701f, 0.0008537459070794284f, 0.0008622149471193552f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008315705694258213f, 0.00848225224763155f, 0.009269090369343758f, 0.006938251666724682f, 0.007610997650772333f, 0.010972085408866405f, 0.007681742776185274f, 0.00566331809386611f, 0.006475930102169514f, 0.006579235661774874f, 0.007043283432722092f, 0.007163279224187136f, 0.0072405459359288216f, 0.00811503455042839f, 0.008406317792832851f, 0.007304868660867214f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001808244502171874f, 0.002934258198365569f, 0.0023584982845932245f, 0.0028064455837011337f, 0.0021949787624180317f, 0.0020846726838499308f, 0.0024650574196130037f, 0.0025756678078323603f, 0.002435243222862482f, 0.0029158673714846373f, 0.0033466138411313295f, 0.0012488187057897449f, 0.0022539966739714146f, 0.003508786205202341f, 0.002994704758748412f, 0.003038544673472643f, 0.0025817854329943657f, 0.0021653571166098118f, 0.001664185430854559f, 0.0027390518225729465f, 0.002458896255120635f, 0.005715511739253998f, 0.0032684514299035072f, 0.002431764965876937f, 0.002536268439143896f, 0.001929688616655767f, 0.0024426032323390245f, 0.00318656163290143f, 0.002178053604438901f, 0.002420758595690131f, 0.0031710879411548376f, 0.0022260716650635004f, 0.00204465351998806f, 0.0031572633888572454f, 0.0020453454926609993f, 0.0023341102059930563f, 0.002257462590932846f, 0.0030406133737415075f, 0.0029095725622028112f, 0.0019507328979671001f, 0.0023007565177977085f, 0.003091814462095499f, 0.0022596486378461123f, 0.0017346625681966543f, 0.0030667311511933804f, 0.002616451121866703f, 0.002043438144028187f, 0.0016416809521615505f, 0.0019920424092561007f, 0.002226716373115778f, 0.0024077408015727997f, 0.0026084149722009897f, 0.002380774589255452f, 0.0033217703457921743f, 0.0025839675217866898f, 0.0023654033429920673f, 0.002821124391630292f, 0.003741215681657195f, 0.0027890398632735014f, 0.0022736992686986923f, 0.002730193780735135f, 0.002824072726070881f, 0.0016602170653641224f, 0.0017157846596091986f, 0.0033853724598884583f, 0.00201555248349905f, 0.003031037515029311f, 0.001431367825716734f, 0.0020425752736628056f, 0.0024648760445415974f, 0.0025140515062958f, 0.0032606692984700203f, 0.003377178218215704f, 0.0023483308032155037f, 0.002596498467028141f, 0.0026984114665538073f, 0.002497736131772399f, 0.0018353756750002503f, 0.004011292941868305f, 0.002614696277305484f, 0.003942403011023998f, 0.0031176169868558645f, 0.002384025137871504f, 0.002258705673739314f, 0.00241014058701694f, 0.0031234344933182f, 0.0023950678296387196f, 0.002331345109269023f, 0.002626498229801655f, 0.002979348646476865f, 0.002535779494792223f, 0.0022948884870857f, 0.002025358146056533f, 0.002710761735215783f, 0.0014157840050756931f, 0.0024761264212429523f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004345908295363188f, 0.00463261129334569f, 0.003449122654274106f, 0.005172613076865673f, 0.003996506333351135f, 0.0030302514787763357f, 0.002616864163428545f, 0.005386700388044119f, 0.0034039022866636515f, 0.0050677829422056675f, 0.00417722063139081f, 0.024918507784605026f, 0.003896007314324379f, 0.003944086842238903f, 0.00311555084772408f, 0.0063655786216259f, 0.0033664312213659286f, 0.004931717645376921f, 0.003484251443296671f, 0.003289682324975729f, 0.003323093755170703f, 0.0021395592484623194f, 0.0021136512514203787f, 0.0038207692559808493f, 0.0057697962038218975f, 0.006894359365105629f, 0.0022841165773570538f, 0.002864328445866704f, 0.0029797691386193037f, 0.003301037009805441f, 0.003996723331511021f, 0.0028431485407054424f, 0.004174600355327129f, 0.0018395752413198352f, 0.0032928257714957f, 0.004350942559540272f, 0.005097329616546631f, 0.0023899003863334656f, 0.004466422833502293f, 0.002884817076846957f, 0.0044982340186834335f, 0.004377173725515604f, 0.0056545366533100605f, 0.0028722374700009823f, 0.004976426716893911f, 0.0032061790116131306f, 0.0054627940990030766f, 0.004531934391707182f, 0.004907369613647461f, 0.005436237435787916f, 0.004540265072137117f, 0.002272169105708599f, 0.005906851962208748f, 0.0029602099675685167f, 0.006696625612676144f, 0.0031220351811498404f, 0.0030654584988951683f, 0.0029884434770792723f, 0.0028587146662175655f, 0.003261216916143894f, 0.003405391238629818f, 0.0017514345236122608f, 0.0048737907782197f, 0.007735333405435085f, 0.0030628719832748175f, 0.005367891397327185f, 0.0024595537688583136f, 0.0031526568345725536f, 0.004046611487865448f, 0.005449075251817703f, 0.003386025782674551f, 0.005325963255017996f, 0.0027504621539264917f, 0.004958929494023323f, 0.007575761526823044f, 0.0036200881004333496f, 0.004388697445392609f, 0.00612606992945075f, 0.0047864485532045364f, 0.0055519030429422855f, 0.003136938437819481f, 0.006163623183965683f, 0.002388135762885213f, 0.0030895122326910496f, 0.0025444799102842808f, 0.002593244658783078f, 0.004376685246825218f, 0.0029814005829393864f, 0.00431899493560195f, 0.0033657243475317955f, 0.0026273303665220737f, 0.0036198575980961323f, 0.002640215214341879f, 0.0023446381092071533f, 0.02913261018693447f, 0.0036440833937376738f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022142233792692423f, 0.0034005208872258663f, 0.0017692276742309332f, 0.002085914369672537f, 0.0021008651237934828f, 0.0033991506788879633f, 0.0054525528103113174f, 0.004378670360893011f, 0.003739041043445468f, 0.0035148407332599163f, 0.003926628734916449f, 0.0032821649219840765f, 0.005051146261394024f, 0.0032141597475856543f, 0.003634466789662838f, 0.004391166847199202f, 0.0020443780813366175f, 0.0035344280768185854f, 0.004288816824555397f, 0.0038573683705180883f, 0.004636181052774191f, 0.0046697515062987804f, 0.006220947951078415f, 0.005214099306613207f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006088348454795778f, 0.000432414875831455f, 0.0009861704893410206f, 0.0006533197010867298f, 0.0007075355970300734f, 0.0006491022650152445f, 0.0005888117011636496f, 0.0007163180271163583f, 0.00036974894464947283f, 0.000686856044922024f, 0.0006587840034626424f, 0.00045859350939281285f, 0.00038476919871754944f, 0.0007322065066546202f, 0.0009245501714758575f, 0.0010255052475258708f, 0.0007917767507024109f, 0.00094594806432724f, 0.0007191498298197985f, 0.0005653301486745477f, 0.0006263265386223793f, 0.0005743050714954734f, 0.0008046083967201412f, 0.000492233200930059f, 0.0006264940020628273f, 0.0008714355644769967f, 0.0009419412817806005f, 0.0005886539584025741f, 0.0005880816606804729f, 0.0006071448442526162f, 0.0005314102163538337f, 0.0009006142499856651f, 0.00040905523928813636f, 0.0007764978799968958f, 0.0006045488989911973f, 0.0009085023775696754f, 0.0006017496343702078f, 0.0009661662625148892f, 0.000615583558101207f, 0.0008115798118524253f, 0.0006640139617957175f, 0.0006813834770582616f, 0.000513693317770958f, 0.0005983059527352452f, 0.0007346775964833796f, 0.000551367353182286f, 0.0006035551195964217f, 0.0007033131550997496f, 0.0006548892124556005f, 0.0006271589663811028f, 0.0005074712680652738f, 0.0009351790649816394f, 0.00044818935566581786f, 0.0005728930118493736f, 0.0006646942929364741f, 0.0006987719680182636f, 0.0007418656605295837f, 0.000924387713894248f, 0.000653432565741241f, 0.0007262054132297635f, 0.0006807342288084328f, 0.0006533351261168718f, 0.0005861618556082249f, 0.0008825376280583441f, 0.0006492523825727403f, 0.00046839428250677884f, 0.0005265657673589885f, 0.0007379650487564504f, 0.0007300543366000056f, 0.0010790546657517552f, 0.0004786696226801723f, 0.0010262924479320645f, 0.0006465251790359616f, 0.00078610546188429f, 0.0006563441129401326f, 0.0007454264559783041f, 0.000771524733863771f, 0.0007472755387425423f, 0.0006292940233834088f, 0.0004415029543451965f, 0.0008300160989165306f, 0.0008618381107226014f, 0.0007579344674013555f, 0.0007147074793465436f, 0.00089474325068295f, 0.0005867773434147239f, 0.0005685770884156227f, 0.0006225952529348433f, 0.000652303802780807f, 0.0005229445523582399f, 0.0006680429796688259f, 0.0006160583579912782f, 0.0005906167207285762f, 0.0005296834278851748f, 0.000718842085916549f, 0.0005983336013741791f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005365123972296715f, 0.003994110971689224f, 0.005534980911761522f, 0.004795555025339127f, 0.0035132302436977625f, 0.004291801247745752f, 0.003931498154997826f, 0.004658954683691263f, 0.0038961642421782017f, 0.005871118512004614f, 0.004345111548900604f, 0.0038764928467571735f, 0.0047823721542954445f, 0.005257174838334322f, 0.006216034758836031f, 0.0044936793856322765f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001448295428417623f, 0.0018568147206678987f, 0.0016354096587747335f, 0.0018000598065555096f, 0.0017928697634488344f, 0.0015706504927948117f, 0.003628429491072893f, 0.0012754369527101517f, 0.002566651673987508f, 0.0015120712341740727f, 0.0019299163250252604f, 0.0026584304869174957f, 0.0028766412287950516f, 0.0016834704438224435f, 0.0011966131860390306f, 0.0015273813623934984f, 0.0012286326382309198f, 0.0019208418671041727f, 0.001982316840440035f, 0.002800669753924012f, 0.0020695901475846767f, 0.0025530557613819838f, 0.0014137515099719167f, 0.001895349589176476f, 0.0021715916227549314f, 0.0018281697994098067f, 0.002792443847283721f, 0.0022266844753175974f, 0.0013192311162129045f, 0.0010264585725963116f, 0.001912252395413816f, 0.0011920290999114513f, 0.001719256630167365f, 0.0013352883979678154f, 0.001329934224486351f, 0.0023926086723804474f, 0.002049139467999339f, 0.0019553673919290304f, 0.001780862919986248f, 0.0012937819119542837f, 0.001404201379045844f, 0.0015075658448040485f, 0.002471648156642914f, 0.0016650798497721553f, 0.002671482739970088f, 0.0020308690145611763f, 0.003554312512278557f, 0.0035634664818644524f, 0.001782936044037342f, 0.0017085912404581904f, 0.0025240678805857897f, 0.001146874506957829f, 0.001835227245464921f, 0.001752013573423028f, 0.001651389291509986f, 0.0020735333673655987f, 0.0016418520826846361f, 0.002478476846590638f, 0.002698528580367565f, 0.002936209086328745f, 0.00131703179795295f, 0.0013760323636233807f, 0.0019210095051676035f, 0.0021641396451741457f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004682587459683418f, 0.0032760626636445522f, 0.010930776596069336f, 0.003059606533497572f, 0.002035947283729911f, 0.0033880448900163174f, 0.003214973257854581f, 0.0030272093135863543f, 0.004396933596581221f, 0.004661382641643286f, 0.0025932560674846172f, 0.003938641399145126f, 0.00433837715536356f, 0.005795743782073259f, 0.003326568752527237f, 0.005205374211072922f, 0.003349896753206849f, 0.0041414364241063595f, 0.0030849159229546785f, 0.003019748954102397f, 0.0035071433521807194f, 0.002533536870032549f, 0.016133690252900124f, 0.003146027447655797f, 0.0036705262027680874f, 0.003020814387127757f, 0.003838496282696724f, 0.0033162133768200874f, 0.005068837199360132f, 0.013130804523825645f, 0.0034722338896244764f, 0.00525544211268425f, 0.005614320747554302f, 0.003812234615907073f, 0.004119593650102615f, 0.004766195081174374f, 0.004100552294403315f, 0.0042509594932198524f, 0.003375288099050522f, 0.003204026725143194f, 0.003484431654214859f, 0.004643938038498163f, 0.003036526497453451f, 0.004485685843974352f, 0.002499581081792712f, 0.0038448735140264034f, 0.0015318712685257196f, 0.004019423387944698f, 0.002144046826288104f, 0.005379086825996637f, 0.0031074031721800566f, 0.004590868018567562f, 0.004350630100816488f, 0.006030205637216568f, 0.0024052467197179794f, 0.003648741403594613f, 0.003895352128893137f, 0.0014647369971498847f, 0.002407998777925968f, 0.0020806118845939636f, 0.004221256822347641f, 0.0057335179299116135f, 0.0036545570474117994f, 0.004591029603034258f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004821416921913624f, 0.005090962629765272f, 0.0026064023841172457f, 0.0034065598156303167f, 0.0032227495685219765f, 0.002637408208101988f, 0.00406233686953783f, 0.003961983602494001f, 0.004889714531600475f, 0.002805200405418873f, 0.0038036128971725702f, 0.004853479098528624f, 0.004248225130140781f, 0.004489954560995102f, 0.003894168883562088f, 0.005126979202032089f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006125112413428724f, 0.00045135850086808205f, 0.0006080883904360235f, 0.0005889426684007049f, 0.0006982460618019104f, 0.0011618465650826693f, 0.0007018291507847607f, 0.0007931487052701414f, 0.0008109510526992381f, 0.0007526637054979801f, 0.0008912475896067917f, 0.0004629171162378043f, 0.0006669744616374373f, 0.0005182307795621455f, 0.0005481609841808677f, 0.000404355552745983f, 0.0007935266476124525f, 0.0006473156390711665f, 0.000777837703935802f, 0.0004814506974071264f, 0.0007135755731724203f, 0.0007588164880871773f, 0.0007899625925347209f, 0.0005837676580995321f, 0.0008346411632373929f, 0.0006254722829908133f, 0.0004943350795656443f, 0.0006302348338067532f, 0.0007776321726851165f, 0.0004696324176620692f, 0.0005656112916767597f, 0.0007034176378510892f, 0.000587143178563565f, 0.0008156031253747642f, 0.0006726207793690264f, 0.0005009316955693066f, 0.0010076730977743864f, 0.000776427797973156f, 0.0006609194679185748f, 0.000719259143806994f, 0.0009404818993061781f, 0.0006510571693070233f, 0.0008178473799489439f, 0.0007999145309440792f, 0.000889618240762502f, 0.0005987101467326283f, 0.0005610377993434668f, 0.0011256226571276784f, 0.0009832597570493817f, 0.0005111030186526477f, 0.0007103222305886447f, 0.0007433700957335532f, 0.0004286865587346256f, 0.0006519138696603477f, 0.0007824164931662381f, 0.001017307280562818f, 0.0006952242692932487f, 0.0008050979231484234f, 0.0005709363613277674f, 0.0005422415561042726f, 0.0009416540851816535f, 0.0011280679609626532f, 0.0006518581067211926f, 0.0006957817822694778f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004435973707586527f, 0.006957009434700012f, 0.005636646877974272f, 0.0044557503424584866f, 0.004028168972581625f, 0.005741840694099665f, 0.0033437248785048723f, 0.006104421801865101f, 0.004781788680702448f, 0.00512474263086915f, 0.005792980547994375f, 0.004163860809057951f, 0.0053967805579304695f, 0.005624180659651756f, 0.004284809809178114f, 0.005201883148401976f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013835359131917357f, 0.0017911825561895967f, 0.001770702889189124f, 0.0019212551414966583f, 0.001127028837800026f, 0.001818968914449215f, 0.00195144338067621f, 0.0023448944557458162f, 0.00239855470135808f, 0.0025201498065143824f, 0.002906543668359518f, 0.0011269208043813705f, 0.0014734282158315182f, 0.0014430736191570759f, 0.001523950370028615f, 0.001226181397214532f, 0.0012302584946155548f, 0.0012240740470588207f, 0.0014789958950132132f, 0.0011129820486530662f, 0.002138532930985093f, 0.002116987481713295f, 0.0016069207340478897f, 0.0015724722761660814f, 0.0019816067069768906f, 0.001309014274738729f, 0.0025619775988161564f, 0.0010113802272826433f, 0.00117646181024611f, 0.002790293423458934f, 0.0018896791152656078f, 0.0018045584438368678f, 0.0015700014773756266f, 0.0011196993291378021f, 0.0012095189886167645f, 0.0020105743315070868f, 0.0011112447828054428f, 0.0015009258640930057f, 0.0007043072837404907f, 0.00194572564214468f, 0.0009594341972842813f, 0.001962018897756934f, 0.0013999679358676076f, 0.0016643480630591512f, 0.002048388822004199f, 0.0019313617376610637f, 0.001603352022357285f, 0.0013387682847678661f, 0.0017795789754018188f, 0.0018706346163526177f, 0.0017303304048255086f, 0.0012742024846374989f, 0.0011742140632122755f, 0.0017398162744939327f, 0.0034214004408568144f, 0.0010305774630978703f, 0.0017656557029113173f, 0.0016676238738000393f, 0.0016082945512607694f, 0.0017025768756866455f, 0.0010173385962843895f, 0.0009008880006149411f, 0.0022470680996775627f, 0.0014048313023522496f, 0.0017184460302814841f, 0.0013163272524252534f, 0.0012257222551852465f, 0.0016142806271091104f, 0.0028201905079185963f, 0.0011129637714475393f, 0.0011478833621367812f, 0.0018241130746901035f, 0.0017391503788530827f, 0.0013682908611372113f, 0.0019261508714407682f, 0.002674385439604521f, 0.0020034806802868843f, 0.001287381979636848f, 0.0016980880172923207f, 0.0023069537710398436f, 0.0014446184504777193f, 0.0016276196110993624f, 0.0016258145915344357f, 0.001879294402897358f, 0.0017990946071222425f, 0.0010601438116282225f, 0.0014830243308097124f, 0.0014629405923187733f, 0.0029228657949715853f, 0.0026553382631391287f, 0.0009884744649752975f, 0.0013505984097719193f, 0.001375693711452186f, 0.0015642282087355852f, 0.001703134155832231f, 0.0014917097287252545f, 0.0013580030063167214f, 0.0017942349659278989f, 0.0017317674355581403f, 0.0009324468555860221f, 0.0014539158437401056f, 0.000996340997517109f, 0.0011658777948468924f, 0.002870783908292651f, 0.0014896151842549443f, 0.0014843385433778167f, 0.0026302875485271215f, 0.002034706063568592f, 0.0018729811999946833f, 0.001976495608687401f, 0.0012993551790714264f, 0.0023529455065727234f, 0.0014953435165807605f, 0.0015482741873711348f, 0.001099944580346346f, 0.0018026784528046846f, 0.0013966475380584598f, 0.0016613936750218272f, 0.0016331170918419957f, 0.0016241937410086393f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031432509422302246f, 0.0038185312878340483f, 0.0026534716598689556f, 0.004232976119965315f, 0.004068678244948387f, 0.0021518534049391747f, 0.0021990640088915825f, 0.002470335690304637f, 0.002575742080807686f, 0.0020500309765338898f, 0.002502960152924061f, 0.0034457019064575434f, 0.003450439078733325f, 0.005547960288822651f, 0.00420353002846241f, 0.003918367438018322f, 0.004773335997015238f, 0.008689520880579948f, 0.002079857513308525f, 0.0068034036085009575f, 0.003675434272736311f, 0.0021525234915316105f, 0.006009353324770927f, 0.005534786731004715f, 0.003983366768807173f, 0.003220065264031291f, 0.0022007355000823736f, 0.0039700609631836414f, 0.0034554204903542995f, 0.0021751460153609514f, 0.0018548566149547696f, 0.003206715453416109f, 0.0020885143894702196f, 0.006418286357074976f, 0.0027465412858873606f, 0.0019138194620609283f, 0.003706328570842743f, 0.003130152355879545f, 0.006623889785259962f, 0.00322185130789876f, 0.004789161961525679f, 0.002410921500995755f, 0.00242228084243834f, 0.0041245887987315655f, 0.003456750186160207f, 0.0018230498535558581f, 0.0035712276585400105f, 0.0025238441303372383f, 0.0025930313859134912f, 0.0020036003552377224f, 0.0023209480568766594f, 0.0030420017428696156f, 0.002786240540444851f, 0.0032367827370762825f, 0.002050132490694523f, 0.005244255531579256f, 0.0035508431028574705f, 0.005288990214467049f, 0.0019115169998258352f, 0.0021811388432979584f, 0.004253983031958342f, 0.015167235396802425f, 0.002728033810853958f, 0.006098601501435041f, 0.002261621644720435f, 0.0020540894474834204f, 0.004315190017223358f, 0.0030461743008345366f, 0.0017086007865145802f, 0.003930584527552128f, 0.003864702070131898f, 0.00547113036736846f, 0.003385545453056693f, 0.005092344246804714f, 0.0020146023016422987f, 0.002044215565547347f, 0.0024254347663372755f, 0.005490966606885195f, 0.004083937965333462f, 0.003890108549967408f, 0.00473423395305872f, 0.0026853394228965044f, 0.0036462689749896526f, 0.002719051204621792f, 0.005578647833317518f, 0.008526841178536415f, 0.00413392623886466f, 0.005192158743739128f, 0.0018581044860184193f, 0.0020409126300364733f, 0.010673271492123604f, 0.003722347319126129f, 0.004535861779004335f, 0.0033162289764732122f, 0.001792603638023138f, 0.006066806614398956f, 0.0032400768250226974f, 0.002313340315595269f, 0.003320736577734351f, 0.004752504639327526f, 0.004220042377710342f, 0.012053490616381168f, 0.004186530597507954f, 0.0020892310421913862f, 0.002643236657604575f, 0.002439304953441024f, 0.002648646244779229f, 0.002057731384411454f, 0.0022676053922623396f, 0.0015576387522742152f, 0.006256077904254198f, 0.002471612300723791f, 0.0034987886901944876f, 0.0037140059284865856f, 0.0025363669265061617f, 0.005232132039964199f, 0.002084796316921711f, 0.0032570380717515945f, 0.00368990795686841f, 0.0020451368764042854f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003065228695049882f, 0.0035462460946291685f, 0.003964196424931288f, 0.003802697639912367f, 0.0028624022379517555f, 0.0054608844220638275f, 0.004587430506944656f, 0.005388530902564526f, 0.0018990826793015003f, 0.004478149581700563f, 0.004072809591889381f, 0.003701490815728903f, 0.0019644955173134804f, 0.0031555595342069864f, 0.005369976628571749f, 0.003977983258664608f, 0.0019355432596057653f, 0.00177496497053653f, 0.003293632296845317f, 0.005041682627052069f, 0.0044987136498093605f, 0.0022691264748573303f, 0.0033366908319294453f, 0.004940105136483908f, 0.004154385533183813f, 0.005176675505936146f, 0.002110706875100732f, 0.0017587443580850959f, 0.0038201117422431707f, 0.00542239798232913f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00043936705333180726f, 0.0007062788354232907f, 0.0008399299695156515f, 0.0005345005192793906f, 0.000599601655267179f, 0.0009736581123434007f, 0.0009164365474134684f, 0.0007073581800796092f, 0.0004871679993811995f, 0.0004927570698782802f, 0.00048723298823460937f, 0.0009338433155789971f, 0.0004865401133429259f, 0.0003937527071684599f, 0.0006504291668534279f, 0.0010711573995649815f, 0.0008808918646536767f, 0.0009677694761194289f, 0.0007789222872816026f, 0.0010210557375103235f, 0.0007749170181341469f, 0.0007675890228711069f, 0.0003849281929433346f, 0.001052263891324401f, 0.000855625607073307f, 0.0007225768058560789f, 0.0007038625190034509f, 0.0007252965588122606f, 0.0006507211946882308f, 0.0009519414743408561f, 0.000603043707087636f, 0.0007281620055437088f, 0.0007266277680173516f, 0.0006252675666473806f, 0.0004901356296613812f, 0.0007437754538841546f, 0.0008500994299538434f, 0.0010244613513350487f, 0.000529890414327383f, 0.0008530844934284687f, 0.0006367413443513215f, 0.000882404507137835f, 0.0006526759243570268f, 0.0008251277031376958f, 0.000550552096683532f, 0.0007785091293044388f, 0.0006469778018072248f, 0.0005976275424472988f, 0.0008128645131364465f, 0.0008051864570006728f, 0.000450691906735301f, 0.0005807281704619527f, 0.0005723080248571932f, 0.0006038447609171271f, 0.0007607340230606496f, 0.001019957009702921f, 0.0006594063597731292f, 0.0006818812107667327f, 0.0005964950541965663f, 0.0006795775843784213f, 0.0008195575792342424f, 0.0005752021097578108f, 0.000638562545645982f, 0.0008814989123493433f, 0.0006240576039999723f, 0.0005935995723120868f, 0.0007367201615124941f, 0.0005127127515152097f, 0.0006931169773451984f, 0.0005362174706533551f, 0.0006363467546179891f, 0.000671503774356097f, 0.000922720821108669f, 0.0006481470772996545f, 0.0006173902656883001f, 0.0010168349836021662f, 0.000500572205055505f, 0.0009764580172486603f, 0.0008172007510438561f, 0.0006812973297201097f, 0.0003791015187744051f, 0.0005260405014269054f, 0.0007902613724581897f, 0.0008602344314567745f, 0.0007555158226750791f, 0.0005279194447211921f, 0.0005782390362583101f, 0.0007850457332096994f, 0.0005624543409794569f, 0.0009456315892748535f, 0.0008034658967517316f, 0.0005383386742323637f, 0.0005395073676481843f, 0.0009700951632112265f, 0.0006204340606927872f, 0.0005552744842134416f, 0.0008078708779066801f, 0.000740158197004348f, 0.0006338296225294471f, 0.0003678174107335508f, 0.0005196209531277418f, 0.0012148083187639713f, 0.000508852070197463f, 0.0009085068013519049f, 0.00054463732521981f, 0.0006347010494209826f, 0.0009725510026328266f, 0.00046014596591703594f, 0.0006893178215250373f, 0.0007942861411720514f, 0.0009503011824563146f, 0.0008019516826607287f, 0.0004887347458861768f, 0.0005566779873333871f, 0.0005649339291267097f, 0.0006227975827641785f, 0.0011138509726151824f, 0.0008881529793143272f, 0.0007304446189664304f, 0.0005603993195109069f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004187864251434803f, 0.004766163881868124f, 0.005135249346494675f, 0.005180136766284704f, 0.0057030366733670235f, 0.006910351105034351f, 0.0034904007334262133f, 0.004938182886689901f, 0.0037411635275930166f, 0.003997301682829857f, 0.0043999552726745605f, 0.003599853254854679f, 0.004717542789876461f, 0.0062225861474871635f, 0.005653386935591698f, 0.0065625919960439205f, 0.00539015419781208f, 0.006493560504168272f, 0.004552559461444616f, 0.005178617779165506f, 0.0038537962827831507f, 0.005699528381228447f, 0.005853964481502771f, 0.004859044216573238f, 0.0047403620555996895f, 0.006499683018773794f, 0.004788961261510849f, 0.004857206251472235f, 0.006071628071367741f, 0.004795338958501816f, 0.00816265121102333f, 0.004837913904339075f, 0.005706925876438618f, 0.006135186646133661f, 0.005254111718386412f, 0.005257952027022839f, 0.004587119445204735f, 0.0057573770172894f, 0.006797488778829575f, 0.005536146927624941f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0023869893047958612f, 0.002861183602362871f, 0.0022789479698985815f, 0.0017541819252073765f, 0.0017003553221002221f, 0.0018201860366389155f, 0.0013610887108370662f, 0.00198357948102057f, 0.0018865896854549646f, 0.0010871827835217118f, 0.0020647067576646805f, 0.0020369456615298986f, 0.001035366440191865f, 0.0025464161299169064f, 0.0017246431671082973f, 0.0014450069284066558f, 0.00196213205344975f, 0.002549019642174244f, 0.0016460908809676766f, 0.0028008799999952316f, 0.001429751398973167f, 0.002042465377599001f, 0.002606515772640705f, 0.0035999841056764126f, 0.002151845023036003f, 0.002029789611697197f, 0.0024722078815102577f, 0.0012841165298596025f, 0.0022911850828677416f, 0.0017134631052613258f, 0.0014421709347516298f, 0.0020257215946912766f, 0.001359201385639608f, 0.0029510175809264183f, 0.0027451375499367714f, 0.0017177355475723743f, 0.002148713218048215f, 0.002089401474222541f, 0.001389422919601202f, 0.0027065370231866837f, 0.0014525929000228643f, 0.002098100958392024f, 0.0024778132792562246f, 0.0014860270312055945f, 0.0014360356144607067f, 0.003152619581669569f, 0.003003512741997838f, 0.0018203029176220298f, 0.0021817167289555073f, 0.0026150888297706842f, 0.001607291866093874f, 0.002949804998934269f, 0.002833073027431965f, 0.0015541516477242112f, 0.0019046779489144683f, 0.0016016439767554402f, 0.0016505211824551225f, 0.0021761315874755383f, 0.0017289702082052827f, 0.002075526164844632f, 0.002182002877816558f, 0.0021224403753876686f, 0.0027294086758047342f, 0.0026001431979238987f, 0.0018011457286775112f, 0.001263050944544375f, 0.0019294929224997759f, 0.0024623468052595854f, 0.001535027171485126f, 0.0031240987591445446f, 0.002512408420443535f, 0.002215101383626461f, 0.002361578866839409f, 0.0013999592047184706f, 0.0025703839492052794f, 0.002062441548332572f, 0.002658738289028406f, 0.002872139448300004f, 0.0017704400233924389f, 0.002344445325434208f, 0.0025462331250309944f, 0.0023894074838608503f, 0.0026435325853526592f, 0.0029403583612293005f, 0.0022364063188433647f, 0.0017620059661567211f, 0.0018438640981912613f, 0.0015046774642542005f, 0.0022879764437675476f, 0.002267187461256981f, 0.00292100477963686f, 0.0026585389859974384f, 0.004025080241262913f, 0.0014313142746686935f, 0.002581763081252575f, 0.0017224347684532404f, 0.0018418116960674524f, 0.0025612511672079563f, 0.0014561159769073129f, 0.0012833024375140667f, 0.0016221306286752224f, 0.0018081780290231109f, 0.0014442221727222204f, 0.0017070705071091652f, 0.0018020359566435218f, 0.0020204882603138685f, 0.0018277294002473354f, 0.0018989365780726075f, 0.0016441101906821132f, 0.002778831636533141f, 0.002244421513751149f, 0.0027370762545615435f, 0.0014724009670317173f, 0.002254138235002756f, 0.002071546157822013f, 0.00155818578787148f, 0.0021524732001125813f, 0.003457835176959634f, 0.001795083750039339f, 0.0025058495812118053f, 0.0017661049496382475f, 0.0026565114967525005f, 0.0017848165007308125f, 0.0014504173304885626f, 0.0014197981217876077f, 0.0025725415907800198f, 0.0018718335777521133f, 0.0010761539451777935f, 0.0023433207534253597f, 0.0017517699161544442f, 0.0018789560999721289f, 0.0028412984684109688f, 0.0033167200163006783f, 0.0021973231341689825f, 0.003441145643591881f, 0.0012238406343385577f, 0.0011256380239501595f, 0.0008389749564230442f, 0.0018902989104390144f, 0.0018280154326930642f, 0.002025348600000143f, 0.0015130623942241073f, 0.0012737744254991412f, 0.0018225531093776226f, 0.00254469970241189f, 0.0026242658495903015f, 0.002068527275696397f, 0.0009576060110703111f, 0.002010632073506713f, 0.0024953135289251804f, 0.0027277509216219187f, 0.0011254310375079513f, 0.0016815983690321445f, 0.0022911038249731064f, 0.0019946221727877855f, 0.001547589199617505f, 0.0020822251681238413f, 0.001788039575330913f, 0.0014949562028050423f, 0.002176598645746708f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028937768656760454f, 0.003663723822683096f, 0.0042424630373716354f, 0.004118478856980801f, 0.004369127098470926f, 0.003188708098605275f, 0.005273888818919659f, 0.0030877867247909307f, 0.005179646424949169f, 0.005916082300245762f, 0.003308510407805443f, 0.005890803877264261f, 0.014686275273561478f, 0.002039145678281784f, 0.009670735336840153f, 0.00509584741666913f, 0.005145851522684097f, 0.0017477235523983836f, 0.004902448505163193f, 0.0031031176913529634f, 0.005534562282264233f, 0.002881176071241498f, 0.0028885086067020893f, 0.005051193758845329f, 0.0026960778050124645f, 0.00369874550960958f, 0.0028265900909900665f, 0.008534896187484264f, 0.002336967270821333f, 0.005567279644310474f, 0.0057470486499369144f, 0.003423183225095272f, 0.003912478219717741f, 0.0039489734917879105f, 0.0028906185179948807f, 0.007578311022371054f, 0.004502410534769297f, 0.003032793290913105f, 0.004347176291048527f, 0.003405830590054393f, 0.004463118966668844f, 0.003482414409518242f, 0.005592332221567631f, 0.004908687435090542f, 0.005893389228731394f, 0.002431937726214528f, 0.0032719147857278585f, 0.007039729505777359f, 0.004263747949153185f, 0.004112909082323313f, 0.003682030364871025f, 0.0031363670714199543f, 0.003430461511015892f, 0.006642285268753767f, 0.0023043733090162277f, 0.003062786068767309f, 0.0034377174451947212f, 0.00365041708573699f, 0.0047445036470890045f, 0.0031277325470000505f, 0.00442344369366765f, 0.004075022414326668f, 0.0025088568218052387f, 0.005662719719111919f, 0.008846565149724483f, 0.006626171991229057f, 0.005458959843963385f, 0.0016283366130664945f, 0.006236640736460686f, 0.002776455134153366f, 0.002790863858535886f, 0.004481540061533451f, 0.005869952496141195f, 0.007044249214231968f, 0.004327947739511728f, 0.0028702239505946636f, 0.0045860870741307735f, 0.004640235565602779f, 0.008996455930173397f, 0.0046435934491455555f, 0.002482655458152294f, 0.0038367542438209057f, 0.0015681227669119835f, 0.002017288003116846f, 0.004476118367165327f, 0.0046607861295342445f, 0.002942242892459035f, 0.006234312895685434f, 0.0054671308025717735f, 0.004034681245684624f, 0.0038561627734452486f, 0.0027838891837745905f, 0.0037022994365543127f, 0.0059523736126720905f, 0.002971641020849347f, 0.006260428577661514f, 0.004201112315058708f, 0.004024720285087824f, 0.003227819688618183f, 0.005565539933741093f, 0.004955809097737074f, 0.0038187734317034483f, 0.005374517757445574f, 0.004472639411687851f, 0.006932187359780073f, 0.006369962356984615f, 0.003916893154382706f, 0.007156498730182648f, 0.012250293046236038f, 0.002662546234205365f, 0.003266398562118411f, 0.003399723209440708f, 0.005119849927723408f, 0.00398483220487833f, 0.003938575740903616f, 0.0060292258858680725f, 0.0014550300547853112f, 0.0029620251152664423f, 0.0038708553183823824f, 0.0026280696038156748f, 0.00549299456179142f, 0.004228689707815647f, 0.006020809058099985f, 0.003562541911378503f, 0.00751870684325695f, 0.0038771796971559525f, 0.005986541043967009f, 0.007150225341320038f, 0.007037815637886524f, 0.008207050152122974f, 0.004884523339569569f, 0.004029209725558758f, 0.0025613096076995134f, 0.0045544859021902084f, 0.0021900248248130083f, 0.00993710570037365f, 0.010657746344804764f, 0.019241662696003914f, 0.0038482039235532284f, 0.0037888900842517614f, 0.005351609084755182f, 0.0070388587191700935f, 0.006805845070630312f, 0.007896581664681435f, 0.00419354485347867f, 0.0034506076481193304f, 0.007058437913656235f, 0.01306647714227438f, 0.002664887113496661f, 0.002638195175677538f, 0.0033948253840208054f, 0.00327322818338871f, 0.004552030935883522f, 0.0032228350173681974f, 0.0027233525179326534f, 0.003097767475992441f, 0.006396145094186068f, 0.005799928680062294f, 0.008590939454734325f, 0.002566700102761388f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004221044015139341f, 0.001973869511857629f, 0.0032577451784163713f, 0.0016619026428088546f, 0.004146797116845846f, 0.0017056399956345558f, 0.0015125280478969216f, 0.004865175578743219f, 0.004080618266016245f, 0.0021762957330793142f, 0.0028081771451979876f, 0.0066657597199082375f, 0.003722021821886301f, 0.003954675048589706f, 0.003559655975550413f, 0.004172242246568203f, 0.005102898459881544f, 0.004608190152794123f, 0.003948495723307133f, 0.0020941724069416523f, 0.004725680220872164f, 0.0048226346261799335f, 0.002817167667672038f, 0.0016495996387675405f, 0.004800944589078426f, 0.004700005054473877f, 0.004567680414766073f, 0.0024349852465093136f, 0.004653337877243757f, 0.0016686993185430765f, 0.004092635586857796f, 0.0018222036305814981f, 0.005366906523704529f, 0.003956346306949854f, 0.00432944018393755f, 0.004014170728623867f, 0.004368091933429241f, 0.0034499955363571644f, 0.0038454255554825068f, 0.0031831879168748856f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006459306459873915f, 0.0008122195140458643f, 0.0006925154011696577f, 0.0005531153874471784f, 0.0005856251809746027f, 0.0005135694518685341f, 0.0009051391971297562f, 0.0006273314356803894f, 0.0007949794526211917f, 0.0007449184777215123f, 0.0007711309590376914f, 0.0005758833140134811f, 0.0008416977943852544f, 0.0006687474087812006f, 0.0008112187497317791f, 0.0006033194367773831f, 0.0006443235906772316f, 0.0006193270091898739f, 0.0008194406982511282f, 0.0007990017766132951f, 0.0005962495924904943f, 0.0005416796775534749f, 0.0005029668682254851f, 0.0006798665854148567f, 0.0005265848594717681f, 0.0006499912706203759f, 0.0006100396276451647f, 0.001146589987911284f, 0.0006876216502860188f, 0.0008246720535680652f, 0.0007518876227550209f, 0.0005457473453134298f, 0.0007027810206636786f, 0.0007933234446682036f, 0.000666708976496011f, 0.0008218986913561821f, 0.0006472451495938003f, 0.0006176586612127721f, 0.0006787556339986622f, 0.0004466001992113888f, 0.0005364020471461117f, 0.0005823011160828173f, 0.0007155393832363188f, 0.0006182593060657382f, 0.0005383536918088794f, 0.0007221782580018044f, 0.00041582828271202743f, 0.0007524120155721903f, 0.0007809239905327559f, 0.0006429437198676169f, 0.00064524554181844f, 0.0010040422203019261f, 0.0009830399649217725f, 0.0005549737834371626f, 0.0007622026023454964f, 0.0005646481295116246f, 0.0006137022865004838f, 0.0006337512750178576f, 0.0009309165761806071f, 0.0006317528313957155f, 0.0008425735286436975f, 0.0008839722140692174f, 0.0005619334988296032f, 0.0008137598633766174f, 0.000849821837618947f, 0.000663508428260684f, 0.0006163849029690027f, 0.0005940846167504787f, 0.0006335928337648511f, 0.0006602283683605492f, 0.0005523005384020507f, 0.0008367997361347079f, 0.0005965502350591123f, 0.0008154790266416967f, 0.0005153715028427541f, 0.0007548280409537256f, 0.0006583107751794159f, 0.0005447889561764896f, 0.0006557505112141371f, 0.0007716001127846539f, 0.0005211793468333781f, 0.0008104735752567649f, 0.0007132466998882592f, 0.0006465291953645647f, 0.000649389112368226f, 0.0005283525679260492f, 0.0005832025199197233f, 0.0006349837058223784f, 0.0005895201466046274f, 0.0007049365085549653f, 0.000547094561625272f, 0.0008543114527128637f, 0.0007340198499150574f, 0.0006743340636603534f, 0.0007196413353085518f, 0.0007677710382267833f, 0.0006194676971063018f, 0.000635787844657898f, 0.0007000133045949042f, 0.0006297285435721278f, 0.0005283039063215256f, 0.0008014126215130091f, 0.0010289339115843177f, 0.0006463807658292353f, 0.0006681233062408864f, 0.0005846371641382575f, 0.001351142767816782f, 0.0005668868543580174f, 0.000684776168782264f, 0.0009370968909934163f, 0.0008571778307668865f, 0.000600852188654244f, 0.0007633062778040767f, 0.0004915065946988761f, 0.0008034539059735835f, 0.0007630752515979111f, 0.0008206508355215192f, 0.0007291842484846711f, 0.0005259473691694438f, 0.0005390899605117738f, 0.000412154127843678f, 0.0007097626803442836f, 0.0008064635330811143f, 0.00046554463915526867f, 0.0006815554224886f, 0.0009751751204021275f, 0.0005390359438024461f, 0.0007151659810915589f, 0.00078995106741786f, 0.0007976189954206347f, 0.0007554117473773658f, 0.0006185044185258448f, 0.0006517214933410287f, 0.0009023437742143869f, 0.0006854885723441839f, 0.0007160322275012732f, 0.0011983554577454925f, 0.0007080109789967537f, 0.000888013921212405f, 0.0006615523598156869f, 0.0005628651706501842f, 0.0006434223032556474f, 0.0007312184316106141f, 0.0005954111111350358f, 0.0007037977920845151f, 0.0009928160579875112f, 0.0007628866587765515f, 0.0005054507637396455f, 0.0005554723902605474f, 0.0010192355839535594f, 0.0007439526380039752f, 0.0006598366890102625f, 0.0008310603443533182f, 0.0007676441455259919f, 0.0008178637945093215f, 0.0009597446187399328f, 0.001066286931745708f, 0.0007292761583812535f, 0.0006037887069396675f, 0.0007851685513742268f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004468957427889109f, 0.005172833800315857f, 0.0046208640560507774f, 0.0035544338170439005f, 0.004342525266110897f, 0.00497990008443594f, 0.00401591882109642f, 0.004633848089724779f, 0.0039020278491079807f, 0.003700519911944866f, 0.0071460711769759655f, 0.004442669916898012f, 0.0035973903723061085f, 0.004007111769169569f, 0.004523115698248148f, 0.004262733738869429f, 0.0034759840928018093f, 0.0027106660418212414f, 0.00488337641581893f, 0.006685572676360607f, 0.005043543875217438f, 0.004397824872285128f, 0.00391133688390255f, 0.005132719408720732f, 0.003984472248703241f, 0.005956621374934912f, 0.004499552305787802f, 0.005225250963121653f, 0.005275852512568235f, 0.005181517917662859f, 0.005014503840357065f, 0.004977457690984011f, 0.004627278074622154f, 0.0036957194097340107f, 0.004484124481678009f, 0.00567491352558136f, 0.0046745119616389275f, 0.004993305075913668f, 0.006548027507960796f, 0.004768036305904388f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009026273037306964f, 0.0013377515133470297f, 0.0013270447961986065f, 0.0006832751096226275f, 0.0011919428361579776f, 0.0006890076911076903f, 0.0011868203291669488f, 0.0019097812473773956f, 0.0018586284713819623f, 0.0009202041546814144f, 0.001433438970707357f, 0.0015599358594045043f, 0.0020036546047776937f, 0.001495234202593565f, 0.0016995654441416264f, 0.0009781054686754942f, 0.0016732764197513461f, 0.0011229459196329117f, 0.0006738169468007982f, 0.0009717060602270067f, 0.0006404241430573165f, 0.0012716981582343578f, 0.001542097539640963f, 0.0012089303927496076f, 0.0008359844796359539f, 0.0014025598065927625f, 0.0008450344321317971f, 0.0010954696917906404f, 0.0014341108035296202f, 0.0015089475782588124f, 0.0015248627169057727f, 0.0010072658769786358f, 0.0014243206242099404f, 0.0023679127916693687f, 0.0010523098753765225f, 0.0013061421923339367f, 0.0012625704985111952f, 0.0014702444896101952f, 0.0014323024079203606f, 0.0021347105503082275f, 0.001084199990145862f, 0.0012218367774039507f, 0.000933224568143487f, 0.0011606920743361115f, 0.0013300040736794472f, 0.0016258774558082223f, 0.0010782867902889848f, 0.0009821869898587465f, 0.0015480926958844066f, 0.0010932193836197257f, 0.002327331807464361f, 0.0009563956991769373f, 0.0020140111446380615f, 0.0014702067710459232f, 0.0011523552238941193f, 0.0007071122527122498f, 0.0013322076993063092f, 0.0008206721977330744f, 0.0014718613820150495f, 0.0015281762462109327f, 0.001864075311459601f, 0.0015053575625643134f, 0.0013928096741437912f, 0.0013675990048795938f, 0.0011025589192286134f, 0.0013544649118557572f, 0.0011141556315124035f, 0.0020658650901168585f, 0.001288964762352407f, 0.0010982154635712504f, 0.0008727633394300938f, 0.0010726704495027661f, 0.00170423393137753f, 0.0018341467948630452f, 0.0015158565947785974f, 0.001003159792162478f, 0.0014916631625965238f, 0.0012904354371130466f, 0.001497446559369564f, 0.0009730641031637788f, 0.0013752490049228072f, 0.0011145257158204913f, 0.0010473827132955194f, 0.0017253040568903089f, 0.002085132757201791f, 0.0016413580160588026f, 0.0013076888862997293f, 0.0011466469150036573f, 0.0009091738029383123f, 0.0014566737227141857f, 0.0011544636217877269f, 0.0007550280424766243f, 0.001167127164080739f, 0.0014139857375994325f, 0.0009980169124901295f, 0.0015698914648965001f, 0.0012487830827012658f, 0.002024815883487463f, 0.0010401338804513216f, 0.0009511683019809425f, 0.000912824587430805f, 0.0017879449296742678f, 0.0010931037832051516f, 0.0012573088752105832f, 0.0011948285391554236f, 0.0010317149572074413f, 0.0014162251027300954f, 0.001237980555742979f, 0.001085872296243906f, 0.0011169438948854804f, 0.0008432610775344074f, 0.0017333249561488628f, 0.001672619953751564f, 0.0009796514641493559f, 0.0013396560680121183f, 0.00135543302167207f, 0.001300662406720221f, 0.0012990233954042196f, 0.0014181871665641665f, 0.0011830981820821762f, 0.0014057373628020287f, 0.0012953239493072033f, 0.0013283310690894723f, 0.0009109582169912755f, 0.0009116040891967714f, 0.0016724088927730918f, 0.001725865644402802f, 0.0010718778939917684f, 0.001347071724012494f, 0.0012509595835581422f, 0.0011592733208090067f, 0.0014854170149192214f, 0.0013713309308514f, 0.0009472775855101645f, 0.0009813116630539298f, 0.0016151673626154661f, 0.0015852939104661345f, 0.0011090408079326153f, 0.0017636646516621113f, 0.0012305134441703558f, 0.0007176930084824562f, 0.001031085499562323f, 0.0010327061172574759f, 0.0018415529048070312f, 0.0013114723842591047f, 0.0012502626050263643f, 0.0013638857053592801f, 0.0014908205484971404f, 0.00155855983030051f, 0.0017266416689381003f, 0.0013098259223625064f, 0.0013441789196804166f, 0.001107901567593217f, 0.0011154362000524998f, 0.0011528166942298412f, 0.0014301869086921215f, 0.0008063526474870741f, 0.0010386292124167085f, 0.001354878069832921f, 0.0008466854342259467f, 0.0012714647455140948f, 0.001014362438581884f, 0.0011047746520489454f, 0.0013093965826556087f, 0.001544069848023355f, 0.0009193214355036616f, 0.0009110535029321909f, 0.0009158274624496698f, 0.001407119445502758f, 0.0019512473372742534f, 0.0013419798342511058f, 0.001419518725015223f, 0.000627055880613625f, 0.0013609240995720029f, 0.001134561956860125f, 0.0010556456400081515f, 0.001541032106615603f, 0.0015066160121932626f, 0.0014760401099920273f, 0.0015251984586939216f, 0.0019510694546625018f, 0.0015202434733510017f, 0.0015547643415629864f, 0.0012684233952313662f, 0.001680264133028686f, 0.0014186756452545524f, 0.0013063359074294567f, 0.0008484877180308104f, 0.0016282721189782023f, 0.0010919900378212333f, 0.0012110016541555524f, 0.0015096067218109965f, 0.0011243901681154966f, 0.0013381369644775987f, 0.0012155636213719845f, 0.0009575393632985651f, 0.001350823207758367f, 0.001115174381993711f, 0.0015407295431941748f, 0.0016207502922043204f, 0.0016330430516973138f, 0.002203980227932334f, 0.0026197931729257107f, 0.0012716441415250301f, 0.0016626209253445268f, 0.0015671633882448077f, 0.0008493856294080615f, 0.001138961873948574f, 0.0012423285515978932f, 0.001240563578903675f, 0.0017140478594228625f, 0.0018659598426893353f, 0.0010415177093818784f, 0.0010178491938859224f, 0.0017785814125090837f, 0.0011336723109707236f, 0.0012861390132457018f, 0.0017623157473281026f, 0.0012153119314461946f, 0.0009982603369280696f, 0.001581497024744749f, 0.0013311741640791297f, 0.0019559345673769712f, 0.0018650301499292254f, 0.0010612929472699761f, 0.0012101966422051191f, 0.0012096524005755782f, 0.0013567423447966576f, 0.001307880156673491f, 0.0018738774815574288f, 0.0016597623471170664f, 0.001119187567383051f, 0.001183616346679628f, 0.0013145386474207044f, 0.001261137891560793f, 0.001740432227961719f, 0.001323249889537692f, 0.002208441263064742f, 0.0018131351098418236f, 0.0010980512015521526f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008894951082766056f, 0.0035248168278485537f, 0.005887964274734259f, 0.011716156266629696f, 0.008031526580452919f, 0.02010268159210682f, 0.006325088441371918f, 0.0026594907976686954f, 0.002546265022829175f, 0.006516736466437578f, 0.003120223293080926f, 0.0071149468421936035f, 0.002262849360704422f, 0.004540234338492155f, 0.0022628819569945335f, 0.009569029323756695f, 0.0024660711642354727f, 0.0037937499582767487f, 0.0185526255518198f, 0.0097582396119833f, 0.020298203453421593f, 0.004538137000054121f, 0.005818406585603952f, 0.006503506563603878f, 0.01349824108183384f, 0.006921511609107256f, 0.009892216883599758f, 0.006863063666969538f, 0.006543743424117565f, 0.004801256116479635f, 0.0033117043785750866f, 0.0037715414073318243f, 0.004712350200861692f, 0.003502542618662119f, 0.008886409923434258f, 0.005141199100762606f, 0.006376692093908787f, 0.0037747754249721766f, 0.004821689799427986f, 0.004063055384904146f, 0.005564445164054632f, 0.003453734563663602f, 0.007425874937325716f, 0.01545960083603859f, 0.004679262638092041f, 0.0036770999431610107f, 0.005245682783424854f, 0.012251446954905987f, 0.005515210796147585f, 0.009209590032696724f, 0.0035137964878231287f, 0.01244150660932064f, 0.00497449329122901f, 0.004285813309252262f, 0.006451198365539312f, 0.019051242619752884f, 0.003986753057688475f, 0.015600718557834625f, 0.003145952010527253f, 0.0027388299349695444f, 0.005544296000152826f, 0.003946775570511818f, 0.001998082734644413f, 0.0051833251491189f, 0.006913322489708662f, 0.004873444326221943f, 0.022167114540934563f, 0.002356052864342928f, 0.009652961976826191f, 0.0044828844256699085f, 0.009617766365408897f, 0.007573914248496294f, 0.0022432103287428617f, 0.0020196966361254454f, 0.002348637906834483f, 0.008127853274345398f, 0.004575446713715792f, 0.011560475453734398f, 0.004841235000640154f, 0.0048563526943326f, 0.006095940247178078f, 0.005094604566693306f, 0.0038937306962907314f, 0.004009161610156298f, 0.0022031296975910664f, 0.0029850504361093044f, 0.00451426999643445f, 0.013710289262235165f, 0.0057669333182275295f, 0.003307733917608857f, 0.0037005101330578327f, 0.00786325242370367f, 0.007513487711548805f, 0.0037350149359554052f, 0.009669851511716843f, 0.003669662633910775f, 0.01495442260056734f, 0.0022294309455901384f, 0.004451117478311062f, 0.005643365904688835f, 0.026562431827187538f, 0.004661790560930967f, 0.0028431143146008253f, 0.0033798343501985073f, 0.0034168728161603212f, 0.0038594305515289307f, 0.004787325393408537f, 0.005100870039314032f, 0.004854136146605015f, 0.0025139153003692627f, 0.006524947937577963f, 0.0052494267001748085f, 0.0035016911569982767f, 0.004994123242795467f, 0.004392446484416723f, 0.004251810256391764f, 0.0033316120970994234f, 0.005879946518689394f, 0.0034816283732652664f, 0.0026069791056215763f, 0.003630709368735552f, 0.0038437775801867247f, 0.0026533736381679773f, 0.004670601338148117f, 0.005157130304723978f, 0.003718987572938204f, 0.0020662331953644753f, 0.008646640926599503f, 0.004221245646476746f, 0.004492028616368771f, 0.004780664574354887f, 0.002711673267185688f, 0.0077317203395068645f, 0.007821613922715187f, 0.007562099490314722f, 0.004503660369664431f, 0.003958017099648714f, 0.005615105852484703f, 0.0032078225631266832f, 0.004995792638510466f, 0.02715323679149151f, 0.010831798426806927f, 0.006328257266432047f, 0.00356824928894639f, 0.00289360573515296f, 0.013028387911617756f, 0.003817769233137369f, 0.003232028800994158f, 0.0033628756646066904f, 0.0042542279697954655f, 0.008800176903605461f, 0.003277887823060155f, 0.00965083483606577f, 0.0027622180059552193f, 0.0024766698479652405f, 0.004250696394592524f, 0.018173031508922577f, 0.010385864414274693f, 0.009087477810680866f, 0.012773307040333748f, 0.004101831931620836f, 0.0065116421319544315f, 0.009045412763953209f, 0.003910050727427006f, 0.003074802691116929f, 0.014773616567254066f, 0.01752246916294098f, 0.01050510723143816f, 0.006123886443674564f, 0.0014240152668207884f, 0.00586116686463356f, 0.011421479284763336f, 0.016501709818840027f, 0.002134394831955433f, 0.019501928240060806f, 0.0049024117179214954f, 0.0033086894545704126f, 0.003039374016225338f, 0.004195800982415676f, 0.008623874746263027f, 0.003914071246981621f, 0.004031446762382984f, 0.003261382458731532f, 0.003951910883188248f, 0.0037143235094845295f, 0.010931417346000671f, 0.007276769727468491f, 0.0071127694100141525f, 0.003910248167812824f, 0.003146966453641653f, 0.004419902339577675f, 0.0033328912686556578f, 0.007957101799547672f, 0.005169793963432312f, 0.007129273843020201f, 0.006999922450631857f, 0.003569898195564747f, 0.0058424388989806175f, 0.0027092229574918747f, 0.00249493308365345f, 0.0026093830820173025f, 0.0027788542211055756f, 0.0020266498904675245f, 0.011776191182434559f, 0.0022488136310130358f, 0.004884633235633373f, 0.0031818158458918333f, 0.00454579945653677f, 0.003289797343313694f, 0.0074614351615309715f, 0.0023474760819226503f, 0.0024837921373546124f, 0.006250318139791489f, 0.005919278599321842f, 0.004980512894690037f, 0.005943556781858206f, 0.004719858523458242f, 0.003007615450769663f, 0.00426170788705349f, 0.003646964207291603f, 0.0022177777718752623f, 0.003643311792984605f, 0.0035077796783298254f, 0.003912959713488817f, 0.0070113991387188435f, 0.0052165137603878975f, 0.00657679233700037f, 0.0025770009960979223f, 0.0049256389029324055f, 0.0031527942046523094f, 0.00295484671369195f, 0.003919905982911587f, 0.004463387653231621f, 0.006259933579713106f, 0.004033499397337437f, 0.0032928918953984976f, 0.004593151155859232f, 0.0031658990774303675f, 0.0024858154356479645f, 0.005846333224326372f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 60,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004237314220517874f, 0.001421655761078f, 0.004006168805062771f, 0.0012347075389698148f, 0.0038376047741621733f, 0.004179294221103191f, 0.0012539561139419675f, 0.0013076921459287405f, 0.0014468989102169871f, 0.0018126467475667596f, 0.002865479327738285f, 0.004472362343221903f, 0.004374479874968529f, 0.004427116829901934f, 0.004220298491418362f, 0.0036567680072039366f, 0.005629958119243383f, 0.004063949920237064f, 0.0014126580208539963f, 0.004471740685403347f, 0.004800529219210148f, 0.0015650031855329871f, 0.0013598317746073008f, 0.0014917575754225254f, 0.004809921141713858f, 0.004267013631761074f, 0.0014931007754057646f, 0.002467024140059948f, 0.003455685917288065f, 0.003662320552393794f, 0.00537204509600997f, 0.005329654086381197f, 0.005304728634655476f, 0.003858843119814992f, 0.00519406097009778f, 0.004681542981415987f, 0.005588551051914692f, 0.0038758087903261185f, 0.001712663914076984f, 0.0029596220701932907f, 0.0044270786456763744f, 0.0039616660214960575f, 0.004149199463427067f, 0.00449297996237874f, 0.00363426492549479f, 0.00606532720848918f, 0.005984342657029629f, 0.0057931519113481045f, 0.0014867741847410798f, 0.003700162284076214f, 0.004044041037559509f, 0.004981893114745617f, 0.007931065745651722f, 0.004175455309450626f, 0.0050722151063382626f, 0.0063573927618563175f, 0.006692259106785059f, 0.0036002572160214186f, 0.0046549332328140736f, 0.005944433622062206f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006981296464800835f, 0.0005239723832346499f, 0.0006268952274695039f, 0.0006535565480589867f, 0.0006891823722980917f, 0.0006989435059949756f, 0.0008062574779614806f, 0.0006889472715556622f, 0.0009231186704710126f, 0.0006814828375354409f, 0.0007214011857286096f, 0.0006292019970715046f, 0.0005703183705918491f, 0.0007638504030182958f, 0.0006551482947543263f, 0.00071596575435251f, 0.0009135791333392262f, 0.0008277667802758515f, 0.0007504879613406956f, 0.0007195408688858151f, 0.0010678417747840285f, 0.00108196004293859f, 0.0008016782230697572f, 0.0007277146796695888f, 0.0006434699171222746f, 0.0008483788697049022f, 0.0006098469602875412f, 0.0006751127075403929f, 0.0008735731826163828f, 0.0008556190296076238f, 0.0006248420104384422f, 0.0005254065617918968f, 0.001040000352077186f, 0.0008928568568080664f, 0.0006614044541493058f, 0.0008475491194985807f, 0.0005993831437081099f, 0.0006526730139739811f, 0.0005265269428491592f, 0.0004843077331315726f, 0.0006299862870946527f, 0.0007707177428528666f, 0.000784705625846982f, 0.0006326278671622276f, 0.0007707298500463367f, 0.0006244852556847036f, 0.0005616220878437161f, 0.0008822883246466517f, 0.0008645115303806961f, 0.0008304141811095178f, 0.0007894948939792812f, 0.0009730141027830541f, 0.0010140513768419623f, 0.0008132745861075819f, 0.0007994301849976182f, 0.0007283719605766237f, 0.0006622737855650485f, 0.0007696733227930963f, 0.0006731832399964333f, 0.0005928922910243273f, 0.0008209702791646123f, 0.0007704750169068575f, 0.0006858762353658676f, 0.0008754315203987062f, 0.0005615615518763661f, 0.0005993336089886725f, 0.000845386297442019f, 0.0005533841904252768f, 0.0005667312070727348f, 0.0008603910100646317f, 0.0006626285030506551f, 0.0008438871009275317f, 0.0007447269163094461f, 0.0004943026578985155f, 0.0007399003952741623f, 0.000807210395578295f, 0.0007802104228176177f, 0.000953471870161593f, 0.0005876282812096179f, 0.0007459154585376382f, 0.0005872100591659546f, 0.0007595838396809995f, 0.0007850712863728404f, 0.0006224220269359648f, 0.00076533347601071f, 0.0005533513030968606f, 0.0005964537267573178f, 0.0008059068932197988f, 0.0007197728846222162f, 0.0005859817028976977f, 0.0005649870727211237f, 0.0006161973578855395f, 0.0006168718682602048f, 0.00047066915431059897f, 0.0010262002469971776f, 0.0006456620176322758f, 0.0010040049673989415f, 0.0005787036498077214f, 0.000586553243920207f, 0.0012543711345642805f, 0.0008526614983566105f, 0.0006546640652231872f, 0.0006955783464945853f, 0.0007421653717756271f, 0.0006555737927556038f, 0.0008284203941002488f, 0.0006522564217448235f, 0.0007440795889124274f, 0.0009586536907590926f, 0.0006637066835537553f, 0.001080643036402762f, 0.0008224695920944214f, 0.0007207479211501777f, 0.000848522933665663f, 0.0007077668560668826f, 0.0006695077172480524f, 0.0005885417340323329f, 0.0005914298235438764f, 0.0007026465027593076f, 0.0005038109957240522f, 0.0010915282182395458f, 0.0005712008569389582f, 0.0004868916585110128f, 0.0005935433437116444f, 0.0005872371257282794f, 0.0008293111459352076f, 0.0006051582749933004f, 0.000806903000921011f, 0.0008225156343542039f, 0.0011407347628846765f, 0.0007956566987559199f, 0.0005185859045013785f, 0.0007593823247589171f, 0.0008204879122786224f, 0.0008637531427666545f, 0.0007859015022404492f, 0.0007498429622501135f, 0.0008269355166703463f, 0.0006110512767918408f, 0.0005695804720744491f, 0.0008145334431901574f, 0.0005115485982969403f, 0.001205159816890955f, 0.0007532609160989523f, 0.0005226610810495913f, 0.0012461822479963303f, 0.0006162325153127313f, 0.000888004491571337f, 0.0006236623739823699f, 0.0005757933831773698f, 0.0006846139440312982f, 0.0006699767545796931f, 0.0006204028613865376f, 0.0007752006640657783f, 0.000505392556078732f, 0.0007446779636666179f, 0.0008165925391949713f, 0.000824297487270087f, 0.0007040989585220814f, 0.0008050768519751728f, 0.0009856077376753092f, 0.0009912826353684068f, 0.0008282444905489683f, 0.0006055146805010736f, 0.0006113603012636304f, 0.000722569297067821f, 0.0005695010768249631f, 0.000719468982424587f, 0.0007575450581498444f, 0.000455570116173476f, 0.0007100154180079699f, 0.0006466571940109134f, 0.0007862981874495745f, 0.0005660500610247254f, 0.0006689339061267674f, 0.0005374625325202942f, 0.0004914079909212887f, 0.0009021127480082214f, 0.0005028336308896542f, 0.00045544307795353234f, 0.000593413773458451f, 0.0007587773725390434f, 0.0004932789015583694f, 0.0008252673433162272f, 0.0007795359124429524f, 0.0007682201685383916f, 0.0007072285516187549f, 0.0008318221662193537f, 0.0007224694709293544f, 0.0005723212962038815f, 0.0006114428979344666f, 0.000609201320912689f, 0.0005314269801601768f, 0.0006412668153643608f, 0.0007221619016490877f, 0.0007620460237376392f, 0.0006305655697360635f, 0.0008566183387301862f, 0.0005736310849897563f, 0.0006458445568569005f, 0.0009102295152842999f, 0.0006459722644649446f, 0.00092639762442559f, 0.0006071793031878769f, 0.0005917851813137531f, 0.0004781532334163785f, 0.0004756781563628465f, 0.0007034988957457244f, 0.00080733752110973f, 0.0007902818615548313f, 0.0006488939397968352f, 0.0005140697467140853f, 0.0008276918088085949f, 0.0009958359878510237f, 0.0008444720297120512f, 0.0005708712269552052f, 0.0010104951215907931f, 0.0006652525626122952f, 0.0006288035656325519f, 0.0006577414460480213f, 0.0007958345813676715f, 0.0009766261791810393f, 0.0008758840849623084f, 0.0006709846784360707f, 0.0008189688669517636f, 0.0009869536152109504f, 0.0007715274696238339f, 0.0006972153205424547f, 0.0007045662496238947f, 0.0006055333651602268f, 0.0006794754881411791f, 0.0007825387292541564f, 0.0009304395643994212f, 0.0009660827927291393f, 0.000689324748236686f, 0.0006253655883483589f, 0.0006214489112608135f, 0.0010728775523602962f, 0.0007225638837553561f, 0.0005832398310303688f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006384463049471378f, 0.004116582218557596f, 0.0038190067280083895f, 0.002561206929385662f, 0.0038812048733234406f, 0.0041894312016665936f, 0.0041280644945800304f, 0.0029487558640539646f, 0.0041320291347801685f, 0.00397626543417573f, 0.0038189939223229885f, 0.0030245110392570496f, 0.0032594313379377127f, 0.004555277992039919f, 0.004529798403382301f, 0.0035544296260923147f, 0.003398800967261195f, 0.003908096347004175f, 0.004840013105422258f, 0.004863899201154709f, 0.004282672889530659f, 0.005447856150567532f, 0.004283276852220297f, 0.0040780846029520035f, 0.003316320478916168f, 0.004793853498995304f, 0.005466982256621122f, 0.0034942226484417915f, 0.004043573047965765f, 0.0049124290235340595f, 0.006144384387880564f, 0.003793990472331643f, 0.00428716791793704f, 0.0042403265833854675f, 0.005269821733236313f, 0.0029938938096165657f, 0.004216321744024754f, 0.0033326863776892424f, 0.004594904836267233f, 0.004229228012263775f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007328054052777588f, 0.0008275257423520088f, 0.001016308437101543f, 0.0006618632469326258f, 0.0008535132510587573f, 0.0009514514240436256f, 0.0011789794079959393f, 0.0008300822228193283f, 0.0008563495939597487f, 0.0007117812638171017f, 0.0012340855319052935f, 0.0010978822829201818f, 0.000788500823546201f, 0.0009438843699172139f, 0.0010901389177888632f, 0.0009873557137325406f, 0.0008253832929767668f, 0.0007431426784023643f, 0.0009440084104426205f, 0.001199029851704836f, 0.0008410093141719699f, 0.0010055189486593008f, 0.0008280107867904007f, 0.000779943831730634f, 0.0008230241946876049f, 0.0008018148364499211f, 0.0008787109982222319f, 0.001027535879984498f, 0.0008983571315184236f, 0.0009521454921923578f, 0.0008718796307221055f, 0.0011019668309018016f, 0.0008859725785441697f, 0.0009285211563110352f, 0.0007920980569906533f, 0.0008924849098548293f, 0.0008603865280747414f, 0.0007115061744116247f, 0.0011643809266388416f, 0.0008932945202104747f, 0.0009051415836438537f, 0.000992635264992714f, 0.0011520178522914648f, 0.0007514275494031608f, 0.0009511293610557914f, 0.0009441448491998017f, 0.0008764732629060745f, 0.0007800929015502334f, 0.0009460531291551888f, 0.0007932883454486728f, 0.0007664259755983949f, 0.0007202210836112499f, 0.0006049909279681742f, 0.0008058167295530438f, 0.001378341461531818f, 0.0010162426624447107f, 0.0007459300686605275f, 0.0010168147273361683f, 0.0008215830894187093f, 0.0007596194045618176f, 0.0006836759275756776f, 0.0006989818066358566f, 0.0007228421745821834f, 0.0008590903598815203f, 0.0008779896306805313f, 0.0008627542410977185f, 0.0007494980236515403f, 0.0010405920911580324f, 0.0009953409899026155f, 0.0010058742482215166f, 0.0008718447061255574f, 0.0007957053603604436f, 0.0007957857451401651f, 0.0007254214724525809f, 0.000892103067599237f, 0.0009205364040099084f, 0.0008498755050823092f, 0.0008197266724891961f, 0.0007303026504814625f, 0.0007127022836357355f, 0.0005990201025269926f, 0.0008458427619189024f, 0.0008604820468463004f, 0.0007690536440350115f, 0.0006630643038079143f, 0.0006422746228054166f, 0.0008805258548818529f, 0.0008121323771774769f, 0.0009443744784221053f, 0.0009562364430166781f, 0.0007562860264442861f, 0.001034185872413218f, 0.0008887195726856589f, 0.0007721290457993746f, 0.0010099721839651465f, 0.0007529364665970206f, 0.0009296560892835259f, 0.0010897567262873054f, 0.0007795019773766398f, 0.0007595244678668678f, 0.0007280948921106756f, 0.000783701310865581f, 0.0009005863685160875f, 0.0007677163230255246f, 0.0008327395771630108f, 0.0010261614806950092f, 0.0007631898624822497f, 0.0009913807734847069f, 0.0010450262343510985f, 0.0013387787621468306f, 0.0006975738797336817f, 0.0007518968777731061f, 0.0008739829063415527f, 0.0006619433406740427f, 0.0009353164932690561f, 0.0009751049219630659f, 0.0011773835867643356f, 0.000564213318284601f, 0.000818365253508091f, 0.000853770412504673f, 0.0008393805474042892f, 0.0006333925994113088f, 0.0009031601948663592f, 0.0008603947935625911f, 0.0011139892740175128f, 0.0008529961341992021f, 0.0010671314084902406f, 0.0012239337665960193f, 0.0008867837605066597f, 0.0008447733125649393f, 0.0007377120200544596f, 0.0012206934625282884f, 0.0008629797375760972f, 0.0011288602836430073f, 0.0012221148936077952f, 0.0005583912716247141f, 0.0008831858867779374f, 0.0008718190365470946f, 0.0011989971389994025f, 0.0008536631939932704f, 0.0009489660733379424f, 0.0005222804029472172f, 0.0008609858923591673f, 0.0008640264277346432f, 0.0008575377287343144f, 0.000866173708345741f, 0.0007179806707426906f, 0.0008892660262063146f, 0.0010753244860097766f, 0.0010207812301814556f, 0.0009590733679942787f, 0.0008156159892678261f, 0.0006662821397185326f, 0.0009776345686987042f, 0.001046595280058682f, 0.0008916487568058074f, 0.0008517570677213371f, 0.0011707368539646268f, 0.0008113901130855083f, 0.0012562972260639071f, 0.0010895413579419255f, 0.0007037438335828483f, 0.0007978903595358133f, 0.0008472433546558022f, 0.0006101971957832575f, 0.0007608221494592726f, 0.0010347868083044887f, 0.0007163002737797797f, 0.0007766017806716263f, 0.0010212328052148223f, 0.0010403499472886324f, 0.0009346562437713146f, 0.0007501276559196413f, 0.0008344418602064252f, 0.0007624553982168436f, 0.0008338462212122977f, 0.0009686523699201643f, 0.0010816754074767232f, 0.0007542865932919085f, 0.0010268158512189984f, 0.0008062900160439312f, 0.0008707981905899942f, 0.0008145530591718853f, 0.000774275278672576f, 0.0009498504223302007f, 0.0010721806902438402f, 0.0007540634833276272f, 0.0013374867849051952f, 0.001344728167168796f, 0.0012195594608783722f, 0.0008757743053138256f, 0.0010028623510152102f, 0.0006528889643959701f, 0.0006578610627911985f, 0.0007046345854178071f, 0.0006943602929823101f, 0.0009402533178217709f, 0.0009060222073458135f, 0.0010491751600056887f, 0.0007049670093692839f, 0.0009146722150035203f, 0.000872799486387521f, 0.0009385657613165677f, 0.0011526149464771152f, 0.0008581295260228217f, 0.0009409083868376911f, 0.0009319649543613195f, 0.0008134980453178287f, 0.0012169318506494164f, 0.0008768461411818862f, 0.0007293936796486378f, 0.000906068307813257f, 0.0007169369491748512f, 0.0006030772929079831f, 0.0011205228511244059f, 0.0008867076830938458f, 0.00077958928886801f, 0.0011055838549509645f, 0.0008383213425986469f, 0.000802221184130758f, 0.0008004974806681275f, 0.0009059033473022282f, 0.0007878061733208597f, 0.0010031074052676558f, 0.0007472215220332146f, 0.0009551356779411435f, 0.0009151501581072807f, 0.0007752602105028927f, 0.0007419196190312505f, 0.0009722592076286674f, 0.0008487528539262712f, 0.0009725645650178194f, 0.000680197961628437f, 0.0011141315335407853f, 0.0007165424176491797f, 0.000736691989004612f, 0.0008395711774937809f, 0.0011148713529109955f, 0.0008172016823664308f, 0.0010027984390035272f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 480,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007954464526847005f, 0.000848728115670383f, 0.0033209784887731075f, 0.002128491410985589f, 0.003033545333892107f, 0.003493076888844371f, 0.002136222319677472f, 0.0029699846636503935f, 0.0008700719918124378f, 0.003493349766358733f, 0.0028831567615270615f, 0.0009128053789027035f, 0.0028273973148316145f, 0.003437264123931527f, 0.0030667539685964584f, 0.0038141815457493067f, 0.0009874275419861078f, 0.0031508472748100758f, 0.004594685509800911f, 0.002687277505174279f, 0.0009995297295972705f, 0.0008076935773715377f, 0.002429637359455228f, 0.00413119699805975f, 0.000993299880065024f, 0.0030457363463938236f, 0.001472516800276935f, 0.0011290829861536622f, 0.0026854563038796186f, 0.003036016831174493f, 0.0010622033150866628f, 0.0008573298691771924f, 0.004147588275372982f, 0.0030399186071008444f, 0.0008282423950731754f, 0.0032053205650299788f, 0.001070901402272284f, 0.0027647078968584538f, 0.0015543003100901842f, 0.0034609816502779722f, 0.0012721979292109609f, 0.003164311870932579f, 0.0035676395054906607f, 0.0009409993072040379f, 0.0017768145771697164f, 0.0043090940453112125f, 0.0034426662605255842f, 0.0031617265194654465f, 0.0031334413215517998f, 0.0026406317483633757f, 0.0035197276156395674f, 0.0030733435414731503f, 0.0009625962120480835f, 0.0029995085205882788f, 0.0007818923331797123f, 0.0030903578735888004f, 0.00251699797809124f, 0.0032218482811003923f, 0.0010199783137068152f, 0.0021128871012479067f, 0.0009372007916681468f, 0.003454079618677497f, 0.003057820489630103f, 0.003131321631371975f, 0.0036662707570940256f, 0.003332673804834485f, 0.003272502450272441f, 0.0028914855793118477f, 0.0007830048562027514f, 0.0029640926513820887f, 0.0031471855472773314f, 0.0026645020116120577f, 0.002862748457118869f, 0.003071150043979287f, 0.002858897438272834f, 0.0029294018168002367f, 0.0024647326208651066f, 0.0024769443552941084f, 0.0032186738681048155f, 0.0026719626039266586f, 0.001433208235539496f, 0.0028218766674399376f, 0.0024270513094961643f, 0.0008313785656355321f, 0.0012629219563677907f, 0.001041541458107531f, 0.003566370578482747f, 0.003270004875957966f, 0.002155626891180873f, 0.0027381726540625095f, 0.0034332997165620327f, 0.0030492774676531553f, 0.0031889399979263544f, 0.0013388579245656729f, 0.0031303532887250185f, 0.0036110212095081806f, 0.0010860221227630973f, 0.0011899981182068586f, 0.0032220492139458656f, 0.0032757441513240337f, 0.0033531798981130123f, 0.0017229447839781642f, 0.004075853154063225f, 0.0036264059599488974f, 0.0008054430363699794f, 0.0030733791645616293f, 0.0035727303475141525f, 0.003347293706610799f, 0.0023642529267817736f, 0.0032122181728482246f, 0.003319117007777095f, 0.001121668377891183f, 0.0031918936874717474f, 0.00259323138743639f, 0.003274658927693963f, 0.005116467364132404f, 0.0033590446691960096f, 0.0034087602980434895f, 0.0023608431220054626f, 0.0034156383480876684f, 0.000976666691713035f, 0.0009927419014275074f, 0.003395032836124301f, 0.0031616785563528538f, 0.0029261920135468245f, 0.0009636164177209139f, 0.0031722222920507193f, 0.00294416188262403f, 0.0023431770969182253f, 0.00319745228625834f, 0.0010856258450075984f, 0.0035644930321723223f, 0.002902878448367119f, 0.0031511480920016766f, 0.0025696305092424154f, 0.0028741417918354273f, 0.003350057639181614f, 0.0027166083455085754f, 0.0009637978509999812f, 0.003151876851916313f, 0.0033179637975990772f, 0.002945617074146867f, 0.002684963634237647f, 0.0020319493487477303f, 0.00368520081974566f, 0.0008241855539381504f, 0.0009647915721870959f, 0.002952540060505271f, 0.0029226187616586685f, 0.0008662291220389307f, 0.001114617451094091f, 0.00098107208032161f, 0.0008391800220124424f, 0.0026342456694692373f, 0.0009852020302787423f, 0.003354346612468362f, 0.0032222752925008535f, 0.0009958421578630805f, 0.002421861281618476f, 0.001015476300381124f, 0.0028944157529622316f, 0.0022625704295933247f, 0.0010567186400294304f, 0.0011069581378251314f, 0.0027024224400520325f, 0.0030856074299663305f, 0.0030299897771328688f, 0.0030573345720767975f, 0.0019202104303985834f, 0.003045759629458189f, 0.002160824602469802f, 0.0026730664540082216f, 0.0028656329959630966f, 0.0023339889012277126f, 0.002734102075919509f, 0.0034638517536222935f, 0.0008441552636213601f, 0.0033506732434034348f, 0.0032017934136092663f, 0.003082544542849064f, 0.0009925795020535588f, 0.0031612564343959093f, 0.0008471978944726288f, 0.001155171194113791f, 0.0008594368700869381f, 0.0030509771313518286f, 0.0032424533274024725f, 0.0036578874569386244f, 0.0010804363992065191f, 0.0035980537068098783f, 0.0030755011830478907f, 0.000947888009250164f, 0.0019471111008897424f, 0.0027289106510579586f, 0.0037311401683837175f, 0.002569603966549039f, 0.0010879235342144966f, 0.0027184232603758574f, 0.002237368142232299f, 0.002883945358917117f, 0.0029235482215881348f, 0.0028309819754213095f, 0.0025346926413476467f, 0.0028499262407422066f, 0.0009376427042298019f, 0.0009397562826052308f, 0.0015932880342006683f, 0.0009356311638839543f, 0.0008823743555694818f, 0.0007795878336764872f, 0.0028788994532078505f, 0.002815244486555457f, 0.0009696155320852995f, 0.0009138646419160068f, 0.002949407324194908f, 0.0010033237049356103f, 0.002651785034686327f, 0.001317527610808611f, 0.0028215234633535147f, 0.004009369295090437f, 0.001472593517974019f, 0.002578900195658207f, 0.00107181363273412f, 0.003300922457128763f, 0.002900550840422511f, 0.0011127089383080602f, 0.0038590701296925545f, 0.0008620682638138533f, 0.0029141874983906746f, 0.0008258497691713274f, 0.0008819233044050634f, 0.00263983104377985f, 0.003653402905911207f, 0.002826882293447852f, 0.0033691234420984983f, 0.004205119330435991f, 0.0031290443148463964f, 0.002076539443805814f, 0.0024835760705173016f, 0.0035076525527983904f, 0.001521367928944528f, 0.002514743944630027f, 0.0029518904630094767f, 0.0028947899118065834f, 0.0009497881401330233f, 0.0037496585864573717f, 0.0029802562203258276f, 0.002978024072945118f, 0.0011553058866411448f, 0.003253864124417305f, 0.0011982293799519539f, 0.0028326634783297777f, 0.0009602900827303529f, 0.00296280300244689f, 0.0009371916530653834f, 0.003463184228166938f, 0.0031484668143093586f, 0.0027162355836480856f, 0.0008557333494536579f, 0.0031460272148251534f, 0.002809212077409029f, 0.0028361629229038954f, 0.0025603286921977997f, 0.0033133667893707752f, 0.002600904554128647f, 0.0009757076040841639f, 0.0008138747652992606f, 0.0008334612939506769f, 0.0009611177374608815f, 0.0008461548713967204f, 0.0026537515223026276f, 0.0010005589574575424f, 0.0032408731058239937f, 0.004090989474207163f, 0.0010800132295116782f, 0.002785199088975787f, 0.002701357239857316f, 0.00278037553653121f, 0.000999744632281363f, 0.0025171583984047174f, 0.001038695452734828f, 0.0027933106757700443f, 0.0008845529519021511f, 0.0029222629964351654f, 0.0008732166606932878f, 0.003598366165533662f, 0.001083450741134584f, 0.0033485793974250555f, 0.003542556194588542f, 0.0034633628092706203f, 0.003211110131815076f, 0.001953956438228488f, 0.003247052663937211f, 0.0032857111655175686f, 0.003631654428318143f, 0.0008307513780891895f, 0.0024511278606951237f, 0.0031529683619737625f, 0.0035262233577668667f, 0.0034505659714341164f, 0.0008942614076659083f, 0.0027666171081364155f, 0.004121688660234213f, 0.0025722794234752655f, 0.002723229816183448f, 0.0028657743241637945f, 0.0009490695665590465f, 0.003527572611346841f, 0.0031452386174350977f, 0.002679473487660289f, 0.0009569499525241554f, 0.002760751871392131f, 0.00242995610460639f, 0.00249318010173738f, 0.0009172693244181573f, 0.003433016361668706f, 0.0009630080312490463f, 0.00284271570853889f, 0.002633004682138562f, 0.004811554681509733f, 0.0009086676873266697f, 0.0008358220220543444f, 0.0027566361241042614f, 0.0009727149154059589f, 0.003418413922190666f, 0.0028453010600060225f, 0.0033862043637782335f, 0.003595411777496338f, 0.000987128121778369f, 0.003612319938838482f, 0.00379540235735476f, 0.0033806494902819395f, 0.0009340233518742025f, 0.002874974859878421f, 0.0009153656428679824f, 0.0037072659470140934f, 0.002453659428283572f, 0.00229506753385067f, 0.0018143169581890106f, 0.0024528258945792913f, 0.0033030412159860134f, 0.0009274081676267087f, 0.0009914637776091695f, 0.0029397173784673214f, 0.002484232885763049f, 0.002940343925729394f, 0.0011651423992589116f, 0.0034050042741000652f, 0.003156570252031088f, 0.003357985755428672f, 0.003909782972186804f, 0.0033148187212646008f, 0.003508402733132243f, 0.00403755996376276f, 0.0024336723145097494f, 0.00476231100037694f, 0.0025303165894001722f, 0.0034596871118992567f, 0.0027901306748390198f, 0.0014400299405679107f, 0.0035719433799386024f, 0.0033194010611623526f, 0.0010835911380127072f, 0.0017519805114716291f, 0.0020921495743095875f, 0.003406339790672064f, 0.003837206633761525f, 0.002614968456327915f, 0.0031496151350438595f, 0.0028477583546191454f, 0.0030473913066089153f, 0.0009035382536239922f, 0.0033147160429507494f, 0.004335767589509487f, 0.002977590309455991f, 0.002664983971044421f, 0.0017244049813598394f, 0.00323677365668118f, 0.0032962928526103497f, 0.0008827322162687778f, 0.0010548254940658808f, 0.0036782657261937857f, 0.004027960356324911f, 0.000811419915407896f, 0.001010796637274325f, 0.0031656837090849876f, 0.001406521419994533f, 0.003906552214175463f, 0.0008338488405570388f, 0.0030661383643746376f, 0.002939531346783042f, 0.0013222068082541227f, 0.002870117546990514f, 0.0010200485121458769f, 0.0022553526796400547f, 0.003076170338317752f, 0.0030086629558354616f, 0.003648946760222316f, 0.0011139065027236938f, 0.0010082677472382784f, 0.0009658135240897536f, 0.003356947097927332f, 0.0024372984189540148f, 0.00286887027323246f, 0.0029989522881805897f, 0.0038906780537217855f, 0.0027666199021041393f, 0.002635036129504442f, 0.0031952140852808952f, 0.0009982067858800292f, 0.003266263287514448f, 0.0024419124238193035f, 0.0034174781758338213f, 0.0030985691118985415f, 0.0030288854613900185f, 0.0031516985036432743f, 0.002755057066679001f, 0.0026680626906454563f, 0.002533086808398366f, 0.0031101268250495195f, 0.002882076194509864f, 0.0031590869184583426f, 0.001511206035502255f, 0.003174164332449436f, 0.002565251663327217f, 0.0008030305034480989f, 0.0030131309758871794f, 0.0035467050038278103f, 0.0025763835292309523f, 0.003161710686981678f, 0.00309977144934237f, 0.0032194775994867086f, 0.0011571726063266397f, 0.003616688773036003f, 0.001038915361277759f, 0.003559930482879281f, 0.0011953517096117139f, 0.0030846144072711468f, 0.0035131643526256084f, 0.0009311653557233512f, 0.0029389611445367336f, 0.0034242712426930666f, 0.00398562615737319f, 0.0009117841836996377f, 0.0007958482601679862f, 0.001381941488943994f, 0.0028592704329639673f, 0.0008713957504369318f, 0.0032193930819630623f, 0.001238179742358625f, 0.0025615075137466192f, 0.003258717944845557f, 0.0039134398102760315f, 0.0029822317883372307f, 0.0033554250840097666f, 0.0009278811630792916f, 0.003494155826047063f, 0.002809343859553337f, 0.0008913269266486168f, 0.0029179968405514956f, 0.003046271624043584f, 0.003792864503338933f, 0.0011458417866379023f, 0.003371391911059618f, 0.0032161730341613293f, 0.0013777419226244092f, 0.0032247279305011034f, 0.0025941424537450075f, 0.0035543874837458134f, 0.0010865270160138607f, 0.002885549794882536f, 0.0030372170731425285f, 0.0008182146120816469f, 0.0010642814449965954f, 0.0036426978185772896f, 0.0009570365655235946f, 0.0020968362223356962f, 0.00104457326233387f, 0.002814588835462928f, 0.0031723894644528627f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 11,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0043859221041202545f, 0.006557784508913755f, 0.0038346729706972837f, 0.003912038169801235f, 0.0040136342868208885f, 0.0071949721314013f, 0.00580175593495369f, 0.007621402386575937f, 0.015519688837230206f, 0.004945184104144573f, 0.004723862279206514f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.017486903816461563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005168465431779623f),
    AI_PACK_INTQ_ZP(-66)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005168465431779623f),
    AI_PACK_INTQ_ZP(-66)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_8_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01479561161249876f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02147217094898224f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1046009361743927f),
    AI_PACK_INTQ_ZP(34)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1046009361743927f),
    AI_PACK_INTQ_ZP(34)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08164156228303909f),
    AI_PACK_INTQ_ZP(-13)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08164156228303909f),
    AI_PACK_INTQ_ZP(-13)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0417926125228405f),
    AI_PACK_INTQ_ZP(14)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09099379926919937f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005355582572519779f),
    AI_PACK_INTQ_ZP(-60)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005355582572519779f),
    AI_PACK_INTQ_ZP(-60)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08664396405220032f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006384774576872587f),
    AI_PACK_INTQ_ZP(-30)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

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
  conv2d_35_output, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_26_scratch0_array, NULL)

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
  conv2d_38_output, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_27_scratch0_array, NULL)

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
  conv2d_27_scratch1, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

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
  nl_43_output, AI_STATIC,
  15, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 8161, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8161, 8161),
  1, &conv2d_28_scratch0_array, NULL)

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
  conv2d_28_scratch1, AI_STATIC,
  19, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

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
  conv2d_48_output, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 624, 1, 1), AI_STRIDE_INIT(4, 1, 1, 624, 624),
  1, &conv2d_30_scratch0_array, NULL)

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
  conv2d_30_scratch1, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

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
  nl_53_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_31_scratch0_array, NULL)

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
  conv2d_56_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_output_array, &conv2d_56_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  34, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_35_scratch0_array, NULL)

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
  conv2d_59_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 1, 1, 40, 40),
  1, &conv2d_59_output_array, &conv2d_59_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  38, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_37_scratch0_array, NULL)

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
  conv2d_37_scratch1, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

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
  conv2d_64_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_64_output_array, &conv2d_64_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  45, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_38_scratch0_array, NULL)

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
  conv2d_38_scratch1, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

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
  conv2d_69_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 1, 1, 60, 60),
  1, &conv2d_69_output_array, &conv2d_69_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  52, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_40_scratch0_array, NULL)

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
  nl_72_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &nl_72_output_array, &nl_72_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  56, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_73_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &eltwise_73_output_array, &eltwise_73_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_74_output_array, &conv2d_74_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_75_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_75_output_array, &eltwise_75_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  60, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  pool_77_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &pool_77_output_array, &pool_77_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 1, 1, 480, 480),
  1, &conv2d_78_output_array, &conv2d_78_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  64, 0x0,
  AI_SHAPE_INIT(4, 1, 1264, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1264, 1264),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  65, 0x1,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1, 11, 11),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1, 11, 11),
  1, &nl_81_output_array, &nl_81_output_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conversion_82_output, AI_STATIC,
  68, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
  1, &conversion_82_output_array, NULL)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  71, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

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
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y, AI_STATIC,
  77, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  78, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  80, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch1, AI_STATIC,
  81, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_50_scratch1_array, &conv2d_50_scratch1_array_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 16), AI_STRIDE_INIT(4, 1, 8, 128, 384),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  83, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  84, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 4), AI_STRIDE_INIT(4, 1, 16, 64, 64),
  1, &conv2d_4_weights_array, &conv2d_4_weights_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  86, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_4_bias_array, NULL)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  87, 0x0,
  AI_SHAPE_INIT(4, 1, 880, 1, 1), AI_STRIDE_INIT(4, 1, 1, 880, 880),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 4, 1, 1, 16), AI_STRIDE_INIT(4, 1, 4, 64, 64),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  89, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch0, AI_STATIC,
  90, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_56_scratch0_array, NULL)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 16), AI_STRIDE_INIT(4, 1, 16, 256, 256),
  1, &conv2d_9_weights_array, &conv2d_9_weights_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch1, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_scratch1_array, &conv2d_56_scratch1_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_9_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  95, 0x0,
  AI_SHAPE_INIT(4, 1, 13601, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13601, 13601),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  96, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

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
  conv2d_59_scratch0, AI_STATIC,
  100, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_59_scratch0_array, NULL)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 16), AI_STRIDE_INIT(4, 1, 32, 512, 512),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  102, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch1, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 1, 1, 40, 40),
  1, &conv2d_59_scratch1_array, &conv2d_59_scratch1_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  105, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  106, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 40), AI_STRIDE_INIT(4, 1, 8, 320, 960),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  108, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch0, AI_STATIC,
  109, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_64_scratch0_array, NULL)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  111, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch0, AI_STATIC,
  112, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_66_scratch0_array, NULL)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch1, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_66_scratch1_array, &conv2d_66_scratch1_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  115, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  117, 0x0,
  AI_SHAPE_INIT(4, 1, 20401, 1, 1), AI_STRIDE_INIT(4, 1, 1, 20401, 20401),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  118, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

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
  conv2d_69_scratch0, AI_STATIC,
  122, 0x0,
  AI_SHAPE_INIT(4, 1, 1560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1560, 1560),
  1, &conv2d_69_scratch0_array, NULL)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  124, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_scratch1, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 1, 1, 60, 60),
  1, &conv2d_69_scratch1_array, &conv2d_69_scratch1_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  127, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  128, 0x0,
  AI_SHAPE_INIT(4, 1, 2640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2640, 2640),
  1, &conv2d_70_scratch0_array, NULL)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  130, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_scratch0, AI_STATIC,
  131, 0x0,
  AI_SHAPE_INIT(4, 1, 1360, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1360, 1360),
  1, &conv2d_74_scratch0_array, NULL)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  133, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  134, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 96, 5, 5, 1), AI_STRIDE_INIT(4, 1, 96, 96, 480),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  137, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 24), AI_STRIDE_INIT(4, 1, 96, 2304, 2304),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_scratch0, AI_STATIC,
  139, 0x0,
  AI_SHAPE_INIT(4, 1, 5760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5760, 5760),
  1, &conv2d_78_scratch0_array, NULL)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_scratch1, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 1, 1, 480, 480),
  1, &conv2d_78_scratch1_array, &conv2d_78_scratch1_array_intq)

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
  conv2d_79_scratch0, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 2030, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2030, 2030),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 1536, 1536),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  146, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_scratch0, AI_STATIC,
  147, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
  1, &nl_81_scratch0_array, NULL)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  149, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  150, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  151, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  152, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  153, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  154, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  155, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  156, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  157, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 120), AI_STRIDE_INIT(4, 1, 16, 1920, 1920),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  159, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  160, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  161, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  163, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  165, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  166, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 40), AI_STRIDE_INIT(4, 1, 120, 4800, 4800),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  167, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_weights, AI_STATIC,
  168, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 160), AI_STRIDE_INIT(4, 1, 40, 6400, 6400),
  1, &conv2d_56_weights_array, &conv2d_56_weights_array_intq)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_bias, AI_STATIC,
  169, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_56_bias_array, NULL)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 160, 5, 5, 1), AI_STRIDE_INIT(4, 1, 160, 160, 800),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  171, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_weights, AI_STATIC,
  172, 0x1,
  AI_SHAPE_INIT(4, 160, 1, 1, 40), AI_STRIDE_INIT(4, 1, 160, 6400, 6400),
  1, &conv2d_59_weights_array, &conv2d_59_weights_array_intq)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_bias, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_59_bias_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 160), AI_STRIDE_INIT(4, 1, 40, 6400, 6400),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_weights, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 160, 1, 1, 40), AI_STRIDE_INIT(4, 1, 160, 6400, 6400),
  1, &conv2d_64_weights_array, &conv2d_64_weights_array_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_bias, AI_STATIC,
  177, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_64_bias_array, NULL)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_weights, AI_STATIC,
  178, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_66_weights_array, &conv2d_66_weights_array_intq)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_bias, AI_STATIC,
  179, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_66_bias_array, NULL)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  180, 0x1,
  AI_SHAPE_INIT(4, 240, 5, 5, 1), AI_STRIDE_INIT(4, 1, 240, 240, 1200),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  181, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_weights, AI_STATIC,
  182, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 60), AI_STRIDE_INIT(4, 1, 240, 14400, 14400),
  1, &conv2d_69_weights_array, &conv2d_69_weights_array_intq)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_bias, AI_STATIC,
  183, 0x0,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 4, 4, 240, 240),
  1, &conv2d_69_bias_array, NULL)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 60, 1, 1, 240), AI_STRIDE_INIT(4, 1, 60, 14400, 14400),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_weights, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 40), AI_STRIDE_INIT(4, 1, 240, 9600, 9600),
  1, &conv2d_74_weights_array, &conv2d_74_weights_array_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_bias, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_74_bias_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  188, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  189, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_weights, AI_STATIC,
  190, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 480), AI_STRIDE_INIT(4, 1, 240, 115200, 115200),
  1, &conv2d_78_weights_array, &conv2d_78_weights_array_intq)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_bias, AI_STATIC,
  191, 0x0,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1920, 1920),
  1, &conv2d_78_bias_array, NULL)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  192, 0x1,
  AI_SHAPE_INIT(4, 480, 1, 1, 11), AI_STRIDE_INIT(4, 1, 480, 5280, 5280),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  193, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  195, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 2816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2816, 2816),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  197, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 104, 1, 1), AI_STRIDE_INIT(4, 1, 1, 104, 104),
  1, &conv2d_4_scratch0_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  199, 0x0,
  AI_SHAPE_INIT(4, 1, 176, 1, 1), AI_STRIDE_INIT(4, 1, 1, 176, 176),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 224, 1, 1), AI_STRIDE_INIT(4, 1, 1, 224, 224),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  201, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 5344, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5344, 5344),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  204, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  205, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  206, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  208, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_pad_before_output, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_2_pad_before_output_array, &conv2d_2_pad_before_output_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  210, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  pool_3_output, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &pool_3_output_array, &pool_3_output_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &conv2d_4_output_array, &conv2d_4_output_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  214, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_6_output, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &eltwise_6_output_array, &eltwise_6_output_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 5968, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5968, 5968),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  nl_7_output, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &nl_7_output_array, &nl_7_output_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_8_output, AI_STATIC,
  218, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &eltwise_8_output_array, &eltwise_8_output_array_intq)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  220, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_9_output_array, &conv2d_9_output_array_intq)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  221, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_pad_before_output, AI_STATIC,
  222, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 58, 58), AI_STRIDE_INIT(4, 1, 1, 8, 464),
  1, &conv2d_11_pad_before_output_array, &conv2d_11_pad_before_output_array_intq)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  223, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  224, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  226, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_pad_before_output, AI_STATIC,
  228, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 30, 30), AI_STRIDE_INIT(4, 1, 1, 8, 240),
  1, &conv2d_14_pad_before_output_array, &conv2d_14_pad_before_output_array_intq)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  234, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  236, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  238, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  240, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  241, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  244, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  246, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  251, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  253, 0x1,
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


AI_STATIC_CONST ai_i32 nl_81_nl_params_data[] = { 1405553920, 25, -62 };
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


AI_STATIC_CONST ai_i8 nl_72_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -115, -112, -109, -106, -103, -100, -96, -93, -90, -87, -84, -81, -77, -74, -71, -68, -65, -62, -59, -55, -52, -49, -46, -43, -40, -36, -33, -30, -27, -24, -21, -18, -14, -11, -8, -5, -2, 1, 5, 8, 11, 14, 17, 20, 24, 27, 30, 33, 36, 39, 42, 46, 49, 52, 55, 58, 61, 65, 68, 71, 74, 77, 80, 83, 87, 90, 93, 96, 99, 102, 106, 109, 112, 115, 118, 121, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_62_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -116, -113, -110, -107, -104, -101, -98, -95, -92, -89, -86, -83, -80, -77, -74, -72, -69, -66, -63, -60, -57, -54, -51, -48, -45, -42, -39, -36, -33, -30, -27, -24, -21, -18, -15, -12, -9, -6, -3, 0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74, 77, 80, 83, 86, 89, 92, 95, 98, 101, 104, 107, 110, 113, 116, 119, 122, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -123, -120, -118, -115, -112, -110, -107, -105, -102, -99, -97, -94, -91, -89, -86, -84, -81, -78, -76, -73, -71, -68, -65, -63, -60, -58, -55, -52, -50, -47, -44, -42, -39, -37, -34, -31, -29, -26, -24, -21, -18, -16, -13, -11, -8, -5, -3, 0, 3, 5, 8, 10, 13, 16, 18, 21, 23, 26, 29, 31, 34, 36, 39, 42, 44, 47, 50, 52, 55, 57, 60, 63, 65, 68, 70, 73, 76, 78, 81, 83, 86, 89, 91, 94, 96, 99, 102, 104, 107, 110, 112, 115, 117, 120, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -121, -119, -118, -116, -114, -112, -111, -109, -107, -105, -104, -102, -100, -99, -97, -95, -93, -92, -90, -88, -86, -85, -83, -81, -79, -78, -76, -74, -73, -71, -69, -67, -66, -64, -62, -60, -59, -57, -55, -53, -52, -50, -48, -47, -45, -43, -41, -40, -38, -36, -34, -33, -31, -29, -27, -26, -24, -22, -21, -19, -17, -15, -14, -12, -10, -8, -7, -5, -3, -1, 0, 2, 4, 5, 7, 9, 11, 12, 14, 16, 18, 19, 21, 23, 25, 26, 28, 30, 31, 33, 35, 37, 38, 40, 42, 44, 45, 47, 49, 51, 52, 54, 56, 57, 59, 61, 63, 64, 66, 68, 70, 71, 73, 75, 77, 78, 80, 82, 83, 85, 87, 89, 90, 92, 94, 96, 97, 99, 101, 103, 104, 106, 108, 109, 111, 113, 115, 116, 118, 120, 122, 123, 125, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_40_layer, 40,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .groups = 1, 
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -121, -120, -118, -117, -115, -113, -112, -110, -108, -107, -105, -104, -102, -100, -99, -97, -95, -94, -92, -91, -89, -87, -86, -84, -82, -81, -79, -78, -76, -74, -73, -71, -69, -68, -66, -65, -63, -61, -60, -58, -56, -55, -53, -51, -50, -48, -47, -45, -43, -42, -40, -38, -37, -35, -34, -32, -30, -29, -27, -25, -24, -22, -21, -19, -17, -16, -14, -12, -11, -9, -8, -6, -4, -3, -1, 1, 2, 4, 6, 7, 9, 10, 12, 14, 15, 17, 19, 20, 22, 23, 25, 27, 28, 30, 32, 33, 35, 36, 38, 40, 41, 43, 45, 46, 48, 49, 51, 53, 54, 56, 58, 59, 61, 62, 64, 66, 67, 69, 71, 72, 74, 76, 77, 79, 80, 82, 84, 85, 87, 89, 90, 92, 93, 95, 97, 98, 100, 102, 103, 105, 106, 108, 110, 111, 113, 115, 116, 118, 119, 121, 123, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -118, -117, -116, -114, -113, -112, -110, -109, -108, -106, -105, -103, -102, -101, -99, -98, -97, -95, -94, -92, -91, -90, -88, -87, -86, -84, -83, -82, -80, -79, -77, -76, -75, -73, -72, -71, -69, -68, -67, -65, -64, -62, -61, -60, -58, -57, -56, -54, -53, -52, -50, -49, -47, -46, -45, -43, -42, -41, -39, -38, -36, -35, -34, -32, -31, -30, -28, -27, -26, -24, -23, -21, -20, -19, -17, -16, -15, -13, -12, -11, -9, -8, -6, -5, -4, -2, -1, 0, 2, 3, 4, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18, 19, 21, 22, 24, 25, 26, 28, 29, 30, 32, 33, 35, 36, 37, 39, 40, 41, 43, 44, 45, 47, 48, 50, 51, 52, 54, 55, 56, 58, 59, 60, 62, 63, 65, 66, 67, 69, 70, 71, 73, 74, 75, 77, 78, 80, 81, 82, 84, 85, 86, 88, 89, 91, 92, 93, 95, 96, 97, 99, 100, 101, 103, 104, 106, 107, 108, 110, 111, 112, 114, 115, 116, 118, 119, 121, 122, 123, 125, 126, 127 };
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


AI_STATIC_CONST ai_i8 conv2d_14_pad_before_value_data[] = { -13 };
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


AI_STATIC_CONST ai_i8 conv2d_11_pad_before_value_data[] = { 34 };
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


AI_STATIC_CONST ai_i8 nl_7_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -119, -117, -116, -115, -114, -112, -111, -110, -108, -107, -106, -104, -103, -102, -100, -99, -98, -96, -95, -94, -92, -91, -90, -88, -87, -86, -85, -83, -82, -81, -79, -78, -77, -75, -74, -73, -71, -70, -69, -67, -66, -65, -63, -62, -61, -59, -58, -57, -56, -54, -53, -52, -50, -49, -48, -46, -45, -44, -42, -41, -40, -38, -37, -36, -34, -33, -32, -30, -29, -28, -27, -25, -24, -23, -21, -20, -19, -17, -16, -15, -13, -12, -11, -9, -8, -7, -5, -4, -3, -1, 0, 1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 16, 17, 18, 20, 21, 22, 24, 25, 26, 28, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 55, 57, 58, 59, 60, 62, 63, 64, 66, 67, 68, 70, 71, 72, 74, 75, 76, 78, 79, 80, 82, 83, 84, 86, 87, 88, 89, 91, 92, 93, 95, 96, 97, 99, 100, 101, 103, 104, 105, 107, 108, 109, 111, 112, 113, 115, 116, 117, 118, 120, 121, 122, 124, 125, 126 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_4_layer, 4,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_4_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .groups = 1, 
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 272192, 1, 1),
    272192, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 272192, 1, 1),
      272192, NULL, NULL)
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
    
    conv2d_4_output_array.data = AI_PTR(g_network_activations_map[0] + 50296);
    conv2d_4_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50296);
    
    conv2d_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 50300);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 50300);
    
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
    
    conv2d_40_output_array.data = AI_PTR(g_network_activations_map[0] + 480);
    conv2d_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 480);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
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
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 2032);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2032);
    
    nl_81_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_81_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_81_output_array.data = AI_PTR(g_network_activations_map[0] + 44);
    nl_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44);
    
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
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 272148);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 272148);
    
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
      
      .n_macc            = 19200224,
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
      
      .n_macc            = 19200224,
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

