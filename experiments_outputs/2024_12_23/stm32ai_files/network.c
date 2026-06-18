/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jan 14 13:05:52 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "41743ffe81dba27b63961cb1742db1d4"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Jan 14 13:05:52 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  pool_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8161, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 624, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  pool_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  pool_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  nl_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  pool_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 60, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  nl_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  pool_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 480, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1264, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conversion_82_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 10, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 880, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13601, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20401, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1560, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 60, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2640, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1360, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2400, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5760, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 480, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2020, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 10, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1920, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4800, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4000, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 160, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6400, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6000, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14400, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 60, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14400, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_74_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 115200, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_78_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 480, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4800, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 10, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2816, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 104, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 176, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 224, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5344, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  pool_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5968, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_8_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 26912, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06787865608930588f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.120574951171875f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014637974090874195f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005022252909839153f),
    AI_PACK_INTQ_ZP(-72)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005022252909839153f),
    AI_PACK_INTQ_ZP(-72)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0638958066701889f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13239285349845886f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00733368331566453f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00733368331566453f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0721094161272049f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022634325549006462f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008015146479010582f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008015146479010582f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0728352889418602f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09553766995668411f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012430623173713684f),
    AI_PACK_INTQ_ZP(47)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012430623173713684f),
    AI_PACK_INTQ_ZP(47)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09819577634334564f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14353355765342712f),
    AI_PACK_INTQ_ZP(12)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.017917262390255928f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.4018014371395111f),
    AI_PACK_INTQ_ZP(58)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012430623173713684f),
    AI_PACK_INTQ_ZP(47)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008015146479010582f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00733368331566453f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005022252909839153f),
    AI_PACK_INTQ_ZP(-72)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00804530642926693f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005822719540446997f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033106582704931498f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030172241386026144f, 0.0035104157868772745f, 0.015597368590533733f, 0.0023543352726846933f, 0.004437715280801058f, 0.010561180301010609f, 0.00667011272162199f, 0.0038637726102024317f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0023311020340770483f, 0.003374985419213772f, 0.004953135270625353f, 0.002967049367725849f, 0.0017911731265485287f, 0.0010199411772191525f, 0.0018527592765167356f, 0.0013311445945873857f, 0.002056542783975601f, 0.002697134856134653f, 0.00224288203753531f, 0.0020515499636530876f, 0.002012569922953844f, 0.0010797196300700307f, 0.001914051827043295f, 0.0025548934936523438f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004945761989802122f, 0.004216990899294615f, 0.004701544996351004f, 0.0049309032037854195f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016423925990238786f, 0.0008099160040728748f, 0.0005960360867902637f, 0.0007941517396830022f, 0.0011281120823696256f, 0.0004468044498935342f, 0.0007881021010689437f, 0.0005889905150979757f, 0.0009237128542736173f, 0.0007915573660284281f, 0.0011375496396794915f, 0.0006645148969255388f, 0.0012034974060952663f, 0.0006586934323422611f, 0.0005110076745040715f, 0.0007261067512445152f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003975444473326206f, 0.004253238905221224f, 0.004406929016113281f, 0.0036869358737021685f, 0.0030322254169732332f, 0.004169150721281767f, 0.003858469892293215f, 0.003989360760897398f, 0.0038318238221108913f, 0.0043277679942548275f, 0.0038153172936290503f, 0.0038949307054281235f, 0.00462565990164876f, 0.004344118759036064f, 0.0039530531503260136f, 0.004258845932781696f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010723002254962921f, 0.009604644030332565f, 0.01387983188033104f, 0.018868330866098404f, 0.0208984836935997f, 0.008824827149510384f, 0.016603633761405945f, 0.014082184992730618f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 32,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002034452510997653f, 0.0008681467734277248f, 0.0013858531601727009f, 0.0020388690754771233f, 0.0025968884583562613f, 0.0007614006171934307f, 0.0012805256992578506f, 0.0033445442095398903f, 0.0013458990724757314f, 0.001578151830472052f, 0.0011166173499077559f, 0.0013854650314897299f, 0.002029866212978959f, 0.0014909043675288558f, 0.002228355035185814f, 0.0009610693668946624f, 0.0011129736667498946f, 0.0013603242114186287f, 0.0010634829523041844f, 0.0015933397226035595f, 0.0032392002176493406f, 0.0011339886114001274f, 0.002793295541778207f, 0.0011681192554533482f, 0.0024811739567667246f, 0.0010591981699690223f, 0.001246497267857194f, 0.001577789313159883f, 0.0015223475638777018f, 0.0016799239674583077f, 0.000781999493483454f, 0.0016219853423535824f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003906948491930962f, 0.004504048731178045f, 0.004740570671856403f, 0.003786894027143717f, 0.0038233455270528793f, 0.003956941422075033f, 0.003681011265143752f, 0.004064754117280245f, 0.0034073349088430405f, 0.0037897678557783365f, 0.0029849603306502104f, 0.003739472245797515f, 0.004693913739174604f, 0.004061876330524683f, 0.005389097146689892f, 0.003811166388913989f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0045745521783828735f, 0.004969337955117226f, 0.004978046286851168f, 0.004430157598108053f, 0.005082258023321629f, 0.0028552445583045483f, 0.004532376304268837f, 0.0066065918654203415f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009447643533349037f, 0.0011286413064226508f, 0.0010220420081168413f, 0.0017709063831716776f, 0.0020258408039808273f, 0.0014984753215685487f, 0.00097143545281142f, 0.0011306199012324214f, 0.0008834540494717658f, 0.002376342425122857f, 0.0015617908211424947f, 0.0007588944281451404f, 0.0013311022194102407f, 0.002453196793794632f, 0.0012018488487228751f, 0.0007674125372432172f, 0.0019297102699056268f, 0.001170477131381631f, 0.0014847539132460952f, 0.001800405327230692f, 0.0010315366089344025f, 0.0017103365389630198f, 0.0015696185873821378f, 0.0008714398718439043f, 0.001688679214566946f, 0.0007212474592961371f, 0.0011040358804166317f, 0.0011133961379528046f, 0.001970615005120635f, 0.0015213530277833343f, 0.0007459052139893174f, 0.0019754248205572367f, 0.001183882006444037f, 0.0014484056737273932f, 0.0018660256173461676f, 0.0007852973067201674f, 0.0009153311839327216f, 0.0017716562142595649f, 0.002239034976810217f, 0.0009415209060534835f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003838674630969763f, 0.004636090248823166f, 0.005117765627801418f, 0.004716210067272186f, 0.0037257021758705378f, 0.004618701990693808f, 0.003470782423391938f, 0.003136354498565197f, 0.005320986732840538f, 0.003954569809138775f, 0.004903473891317844f, 0.0035363645292818546f, 0.003735329257324338f, 0.0036877559032291174f, 0.004237724933773279f, 0.004646183457225561f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031784651800990105f, 0.0022943387739360332f, 0.003185974434018135f, 0.0021873461082577705f, 0.0032984670251607895f, 0.002696005394682288f, 0.003209837945178151f, 0.002919329097494483f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0027068585623055696f, 0.002211526967585087f, 0.0021739613730460405f, 0.00344931916333735f, 0.002339319558814168f, 0.0032082737889140844f, 0.0038077272474765778f, 0.003742418484762311f, 0.0028468631207942963f, 0.0014442293904721737f, 0.0032207604963332415f, 0.003929391503334045f, 0.001618893351405859f, 0.0036587463691830635f, 0.0030293220188468695f, 0.004280886612832546f, 0.003134092316031456f, 0.0014985291054472327f, 0.0035750323440879583f, 0.0038554463535547256f, 0.004857988562434912f, 0.002810894511640072f, 0.004053632728755474f, 0.002378723816946149f, 0.004558322485536337f, 0.0013463188661262393f, 0.0032052556052803993f, 0.002049599541351199f, 0.003229358233511448f, 0.003640406299382448f, 0.0030050838831812143f, 0.002696260577067733f, 0.004050921648740768f, 0.004816414788365364f, 0.0036419283133000135f, 0.0031637174542993307f, 0.0030548893846571445f, 0.003629364538937807f, 0.003100997069850564f, 0.002424833597615361f, 0.004126332700252533f, 0.0031095820013433695f, 0.003230480710044503f, 0.0031760369893163443f, 0.0038401137571781874f, 0.0028628110885620117f, 0.0025938989128917456f, 0.0045937104150652885f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006234404165297747f, 0.002638139994814992f, 0.020775247365236282f, 0.003705749986693263f, 0.0033537251874804497f, 0.007306259591132402f, 0.003703796537593007f, 0.002874955302104354f, 0.002574705285951495f, 0.019524946808815002f, 0.0022392345126718283f, 0.0049395193345844746f, 0.004843630827963352f, 0.004184713587164879f, 0.003444138215854764f, 0.0033699069172143936f, 0.0023531457409262657f, 0.005352373234927654f, 0.0031461650505661964f, 0.0032826538663357496f, 0.0018224382074549794f, 0.0028674129862338305f, 0.00234437664039433f, 0.0020297730807214975f, 0.0025045908987522125f, 0.010272763669490814f, 0.002380342921242118f, 0.003246861509978771f, 0.004522725008428097f, 0.002627297304570675f, 0.0015505633782595396f, 0.001948022749274969f, 0.002494684886187315f, 0.0014146269531920552f, 0.0011487186420708895f, 0.004476375412195921f, 0.0027634920552372932f, 0.0028243488632142544f, 0.0018043359741568565f, 0.004656154662370682f, 0.008116195909678936f, 0.0027194081339985132f, 0.0030634573195129633f, 0.007180175743997097f, 0.0016450805123895407f, 0.0031262258999049664f, 0.003069646656513214f, 0.0019547913689166307f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004613395780324936f, 0.003232352202758193f, 0.003322145203128457f, 0.003815897973254323f, 0.005076049827039242f, 0.0037879261653870344f, 0.002413036534562707f, 0.0034914908464998007f, 0.0043671876192092896f, 0.003906007157638669f, 0.003388596000149846f, 0.003242212114855647f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000536603678483516f, 0.0010405773064121604f, 0.0006954895216040313f, 0.0008776546455919743f, 0.0007867028471082449f, 0.0009496388374827802f, 0.0008304373477585614f, 0.0011259912280365825f, 0.0008176993578672409f, 0.0005942679126746953f, 0.0008254379499703646f, 0.0006177735631354153f, 0.0009087465004995465f, 0.0008651124080643058f, 0.0006681571830995381f, 0.0010060336207970977f, 0.0006045203772373497f, 0.0009745425195433199f, 0.0006261482485570014f, 0.0007792989490553737f, 0.0007185808499343693f, 0.0006490856176242232f, 0.000583931861910969f, 0.0007798246806487441f, 0.0007625357829965651f, 0.0005752787692472339f, 0.0005471157492138445f, 0.0006831685896031559f, 0.0005636278074234724f, 0.0005652015097439289f, 0.0006152426358312368f, 0.000580997671931982f, 0.000645445950794965f, 0.0008046567090786994f, 0.000524900562595576f, 0.0006429872009903193f, 0.0006481572636403143f, 0.0006526177749037743f, 0.0010507905390113592f, 0.000572950579226017f, 0.0008952078060247004f, 0.0005030643660575151f, 0.0005660178721882403f, 0.0007291179499588907f, 0.0007149254088290036f, 0.0007784326444379985f, 0.0007713075028732419f, 0.0010538907954469323f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008399766869843006f, 0.010368199087679386f, 0.010590161196887493f, 0.008532123640179634f, 0.007184527348726988f, 0.008664093911647797f, 0.010621421039104462f, 0.007479278836399317f, 0.009310905821621418f, 0.010320684872567654f, 0.009154751896858215f, 0.009508021175861359f, 0.008417232893407345f, 0.009196804836392403f, 0.008124664425849915f, 0.008403526619076729f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030644668731838465f, 0.002282350091263652f, 0.002290469827130437f, 0.003737132530659437f, 0.003529338398948312f, 0.0034391838125884533f, 0.0034006345085799694f, 0.0023701286409050226f, 0.002430110238492489f, 0.002245741430670023f, 0.0015790588222444057f, 0.004053570795804262f, 0.0019489409169182181f, 0.0027619567699730396f, 0.003140869550406933f, 0.004475270863622427f, 0.0020580487325787544f, 0.003010243410244584f, 0.0033426282461732626f, 0.0030063351150602102f, 0.0025236443616449833f, 0.0019409359665587544f, 0.0018133551348000765f, 0.00221632095053792f, 0.0025698398239910603f, 0.0017671665409579873f, 0.0034544209484010935f, 0.003398827975615859f, 0.0020820111967623234f, 0.0022411823738366365f, 0.002489567268639803f, 0.003167893271893263f, 0.004312482662498951f, 0.0023237818386405706f, 0.0020136914681643248f, 0.002172569278627634f, 0.0021795572247356176f, 0.0022867422085255384f, 0.0018163375789299607f, 0.003044856246560812f, 0.0038977323565632105f, 0.0023773550055921078f, 0.004307030234485865f, 0.0017048086738213897f, 0.0022348174825310707f, 0.003266182728111744f, 0.002260256325826049f, 0.0032382202334702015f, 0.0030360741075128317f, 0.001849041087552905f, 0.002767588011920452f, 0.0023766900412738323f, 0.0032798382453620434f, 0.0048380265943706036f, 0.005118473432958126f, 0.003458478720858693f, 0.002744839061051607f, 0.003649657592177391f, 0.002638094127178192f, 0.003244519466534257f, 0.0016004214994609356f, 0.0018532975809648633f, 0.001833535498008132f, 0.001970896264538169f, 0.0023667188361287117f, 0.004459287505596876f, 0.0029940784443169832f, 0.0030538374558091164f, 0.0025414894334971905f, 0.001245817169547081f, 0.0036417499650269747f, 0.0024079408030956984f, 0.003534222487360239f, 0.0030228784307837486f, 0.0021935622207820415f, 0.004365940112620592f, 0.0020034981425851583f, 0.004062495660036802f, 0.002175790024921298f, 0.003847996238619089f, 0.0024321351666003466f, 0.002836371771991253f, 0.0032293233089149f, 0.0019519159104675055f, 0.0033345050178468227f, 0.0035231050569564104f, 0.00357834598980844f, 0.0023591385688632727f, 0.0016794624971225858f, 0.0031919311732053757f, 0.0020048886071890593f, 0.002981131197884679f, 0.0027526854537427425f, 0.0022362153977155685f, 0.002745513105764985f, 0.0023164930753409863f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007222854066640139f, 0.005370690952986479f, 0.0025761378929018974f, 0.0015445572789758444f, 0.005471862852573395f, 0.0027116043493151665f, 0.0019742706790566444f, 0.003744704881682992f, 0.00313586019910872f, 0.00724042346701026f, 0.007011572364717722f, 0.0025425460189580917f, 0.004611615091562271f, 0.007848520763218403f, 0.004538986831903458f, 0.002614909317344427f, 0.003326608333736658f, 0.004594292026013136f, 0.0020612291991710663f, 0.005678316578269005f, 0.004819434601813555f, 0.0032234678510576487f, 0.0027969353832304478f, 0.005625196732580662f, 0.004771340638399124f, 0.004489629063755274f, 0.0023728637024760246f, 0.003520495491102338f, 0.006698755081743002f, 0.00501445634290576f, 0.005172786768525839f, 0.0025170359294861555f, 0.0072653829120099545f, 0.0034862433094531298f, 0.00225682370364666f, 0.005799687467515469f, 0.003712394740432501f, 0.0034163508098572493f, 0.003325758734717965f, 0.004307246301323175f, 0.002351111965253949f, 0.002272313693538308f, 0.002937542274594307f, 0.005759649910032749f, 0.0056289369240403175f, 0.003735220292583108f, 0.0021905747707933187f, 0.0028704956639558077f, 0.006105365697294474f, 0.003034345107153058f, 0.002016897313296795f, 0.0057348692789673805f, 0.00272400607354939f, 0.003690137295052409f, 0.0037423865869641304f, 0.002862493274733424f, 0.006658849772065878f, 0.0029123134445399046f, 0.0033952430821955204f, 0.0027790656313300133f, 0.02025250717997551f, 0.00517626665532589f, 0.0027273832820355892f, 0.005797912832349539f, 0.007278031203895807f, 0.004526334349066019f, 0.002096389653161168f, 0.0025123045779764652f, 0.0031487620435655117f, 0.006789699196815491f, 0.0030182283371686935f, 0.005469373892992735f, 0.0022382084280252457f, 0.00716242752969265f, 0.008545284159481525f, 0.0026306072250008583f, 0.005218858830630779f, 0.0044241780415177345f, 0.0037730103358626366f, 0.004057683516293764f, 0.005624271463602781f, 0.0043830834329128265f, 0.0026727968361228704f, 0.003397212829440832f, 0.0037144774105399847f, 0.002826889744028449f, 0.004443037789314985f, 0.005149684380739927f, 0.010612519457936287f, 0.0024631437845528126f, 0.005968500394374132f, 0.0040113492868840694f, 0.004054022487252951f, 0.0023546877782791853f, 0.00448609096929431f, 0.0034251483157277107f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0023131908383220434f, 0.0046810852363705635f, 0.004337732680141926f, 0.0038234288804233074f, 0.004057961516082287f, 0.0036157143767923117f, 0.005228755529969931f, 0.0038270908407866955f, 0.002337288111448288f, 0.0045276968739926815f, 0.003768219379708171f, 0.003873040433973074f, 0.005038097966462374f, 0.003439044114202261f, 0.004373578354716301f, 0.004632258787751198f, 0.0021183027420192957f, 0.003315549809485674f, 0.003248831257224083f, 0.006078497972339392f, 0.00428361538797617f, 0.004300050903111696f, 0.005282767582684755f, 0.006336977705359459f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006093943957239389f, 0.0007767927017994225f, 0.000533759652171284f, 0.0007069367566145957f, 0.0009279862279072404f, 0.0006583153153769672f, 0.0010602542897686362f, 0.0007445047958754003f, 0.0006004681345075369f, 0.0005308102699927986f, 0.0006458724965341389f, 0.0009519687737338245f, 0.0006457088165916502f, 0.0011740293120965362f, 0.0006375500233843923f, 0.000762747076805681f, 0.0007328371284529567f, 0.0009701467934064567f, 0.000672145513817668f, 0.0007608286687172949f, 0.0006998219178058207f, 0.0007371372776106f, 0.0005445147980935872f, 0.0007013169815763831f, 0.0006381111452355981f, 0.0010909467237070203f, 0.0007968978607095778f, 0.0006366357556544244f, 0.0006571689154952765f, 0.0007803544867783785f, 0.0007185941794887185f, 0.0007144162664189935f, 0.000541487243026495f, 0.0005378781352192163f, 0.0006144065991975367f, 0.0006195168243721128f, 0.000827939307782799f, 0.0005796439363621175f, 0.0010027457028627396f, 0.0005425934796221554f, 0.0007235159282572567f, 0.000817105988971889f, 0.0007158718071877956f, 0.0006055723642930388f, 0.00046284141717478633f, 0.0005967306206002831f, 0.0009859560523182154f, 0.0007474039448425174f, 0.0005659097223542631f, 0.0006769829196855426f, 0.0009531364776194096f, 0.0005839257501065731f, 0.00132374104578048f, 0.0007958297501318157f, 0.0007398322923108935f, 0.0008209616644307971f, 0.0004188048478681594f, 0.0007644140860065818f, 0.0008386076078750193f, 0.0010553767206147313f, 0.0006653373129665852f, 0.000651361420750618f, 0.0006474782130680978f, 0.0008316194289363921f, 0.0006894147372804582f, 0.0009346726001240313f, 0.0006255448097363114f, 0.000556187704205513f, 0.0008248306112363935f, 0.0006808206089772284f, 0.0010324690956622362f, 0.0008066934533417225f, 0.00080222258111462f, 0.0005830643349327147f, 0.0008271572296507657f, 0.0006625644746236503f, 0.000608449277933687f, 0.0007534751784987748f, 0.0005677799927070737f, 0.0005866708816029131f, 0.0007145657436922193f, 0.0008212820976041257f, 0.0006366577581502497f, 0.000494431471452117f, 0.0007845534710213542f, 0.0009028970962390304f, 0.0005903206183575094f, 0.0007471753633581102f, 0.0008744397200644016f, 0.0006426048930734396f, 0.0007793568656779826f, 0.0005802525556646287f, 0.0006709884037263691f, 0.0007496395264752209f, 0.0007061506621539593f, 0.000884039793163538f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0055503807961940765f, 0.006125894840806723f, 0.00776434363797307f, 0.005734207108616829f, 0.00420880364254117f, 0.004007138777524233f, 0.006558810826390982f, 0.004809040110558271f, 0.005160157103091478f, 0.004520288202911615f, 0.007286910433322191f, 0.005263385828584433f, 0.006356531288474798f, 0.004175542388111353f, 0.004423079546540976f, 0.004408175125718117f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015300902305170894f, 0.0012017458211630583f, 0.0020134143996983767f, 0.0016840328462421894f, 0.0013788114301860332f, 0.0020432418677955866f, 0.0016904068179428577f, 0.002374125411733985f, 0.002505362266674638f, 0.0015584217617288232f, 0.002181598450988531f, 0.0025390111841261387f, 0.001782308565452695f, 0.0007615713402628899f, 0.0018242242513224483f, 0.0020263921469449997f, 0.0016022714553400874f, 0.0013465761439874768f, 0.002505056792870164f, 0.003094818675890565f, 0.0022727365139871836f, 0.0014471982140094042f, 0.0026875543408095837f, 0.0020875446498394012f, 0.0026685830671340227f, 0.0020853120367974043f, 0.0015841387212276459f, 0.002554830629378557f, 0.0025190883316099644f, 0.0028867111541330814f, 0.0013908110558986664f, 0.0017163010779768229f, 0.0011649099178612232f, 0.00220486125908792f, 0.0017038880614563823f, 0.002004608977586031f, 0.0023089165333658457f, 0.001504364307038486f, 0.0028421920724213123f, 0.0017506638541817665f, 0.0018027712358161807f, 0.002211393555626273f, 0.0026061648968607187f, 0.0022413518745452166f, 0.00263263494707644f, 0.0021386079024523497f, 0.0036160466261208057f, 0.0028487269300967455f, 0.0018800112884491682f, 0.003146149916574359f, 0.0025523642543703318f, 0.0016067820833995938f, 0.002171721076592803f, 0.001942265429534018f, 0.0020191227085888386f, 0.002345052780583501f, 0.0017423790413886309f, 0.00324038858525455f, 0.0018774365307763219f, 0.0014202968450263143f, 0.0018355963984504342f, 0.0019427570514380932f, 0.002030556323006749f, 0.0018048277124762535f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005195818841457367f, 0.006381320767104626f, 0.002349602524191141f, 0.002188615035265684f, 0.007460687775164843f, 0.0030157421715557575f, 0.0038261376321315765f, 0.003236055141314864f, 0.002783633302897215f, 0.0041440497152507305f, 0.0024357542861253023f, 0.003727691015228629f, 0.006284307222813368f, 0.01044671330600977f, 0.006563342176377773f, 0.004220223054289818f, 0.005041745025664568f, 0.004942615516483784f, 0.0038090813905000687f, 0.0025274173822253942f, 0.0035322352778166533f, 0.00401638587936759f, 0.003467782400548458f, 0.003488884074613452f, 0.002482570707798004f, 0.005434841383248568f, 0.004295970778912306f, 0.002572034252807498f, 0.0029158610850572586f, 0.002634327858686447f, 0.0029671837110072374f, 0.003700611647218466f, 0.003543366678059101f, 0.0033594269771128893f, 0.0058806417509913445f, 0.004564741626381874f, 0.0048024654388427734f, 0.004434545524418354f, 0.0030112173408269882f, 0.004459889605641365f, 0.003641844494268298f, 0.004109835252165794f, 0.005284658167511225f, 0.004790520761162043f, 0.002583756810054183f, 0.0041848449036479f, 0.003392874961718917f, 0.004119204822927713f, 0.002230179961770773f, 0.003456720383837819f, 0.004281316418200731f, 0.0098563889041543f, 0.001706292387098074f, 0.003210680326446891f, 0.002813101978972554f, 0.00198165001347661f, 0.0021562029141932726f, 0.0034687439911067486f, 0.00630209781229496f, 0.004714485723525286f, 0.004408075474202633f, 0.002554746810346842f, 0.0019187470898032188f, 0.006092545110732317f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0042442879639565945f, 0.004215999506413937f, 0.0037266151048243046f, 0.003305518999695778f, 0.0039571309462189674f, 0.0033628055825829506f, 0.004816340748220682f, 0.004369891714304686f, 0.004864330869168043f, 0.004811527673155069f, 0.004199515096843243f, 0.0036791772581636906f, 0.0026034896727651358f, 0.002438164781779051f, 0.004461340140551329f, 0.0026042982935905457f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007506288820877671f, 0.0006421335856430233f, 0.0008311037090606987f, 0.0005771360010839999f, 0.0009554300340823829f, 0.000619412399828434f, 0.0010019971523433924f, 0.000823427049908787f, 0.0008691484690643847f, 0.0009100995375774801f, 0.0009053450776264071f, 0.0008444596314802766f, 0.0007513936143368483f, 0.0005217683501541615f, 0.0009687460260465741f, 0.000527324911672622f, 0.0008904361166059971f, 0.0006535308202728629f, 0.0007572905742563307f, 0.0009808309841901064f, 0.0006423709564842284f, 0.0007887214887887239f, 0.000520232948474586f, 0.0005754863959737122f, 0.0006929519004188478f, 0.0007854483556002378f, 0.001086317584849894f, 0.0007677912362851202f, 0.0006204067030921578f, 0.0005136813269928098f, 0.0007091875304467976f, 0.0007975919870659709f, 0.0006081949104554951f, 0.0004646182933356613f, 0.0007363964105024934f, 0.0008962326101027429f, 0.0004975285846740007f, 0.0008872078033164144f, 0.0008159163990058005f, 0.0006713612237945199f, 0.0005634403205476701f, 0.000790660735219717f, 0.0005896170041523874f, 0.0007858659373596311f, 0.0007059773779474199f, 0.0010128120193257928f, 0.0004846413794439286f, 0.0011584649328142405f, 0.000875188794452697f, 0.0006236745975911617f, 0.001131723984144628f, 0.000699892349075526f, 0.0005854599876329303f, 0.0008480191463604569f, 0.0009838463738560677f, 0.0006812129286117852f, 0.0005601179436780512f, 0.000758323585614562f, 0.0007342390599660575f, 0.0005321239586919546f, 0.0007843053317628801f, 0.0005155758699402213f, 0.000691852648742497f, 0.0005388504941947758f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0064148809760808945f, 0.006623450201004744f, 0.0062698498368263245f, 0.0055791521444916725f, 0.004986012354493141f, 0.006870572920888662f, 0.005504583939909935f, 0.006582400295883417f, 0.005520814564079046f, 0.006432257127016783f, 0.006647520232945681f, 0.007863468490540981f, 0.0046065994538366795f, 0.006638344842940569f, 0.005123746581375599f, 0.008269164711236954f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019796425476670265f, 0.0013060811907052994f, 0.0013519591884687543f, 0.002055385150015354f, 0.0016492045251652598f, 0.0026417337357997894f, 0.002108780201524496f, 0.0021611975971609354f, 0.0014502070844173431f, 0.0015677291667088866f, 0.0026344156358391047f, 0.0018421027343720198f, 0.0020684129558503628f, 0.001591991982422769f, 0.0013027987442910671f, 0.0023797198664397f, 0.0011204825714230537f, 0.0014554897788912058f, 0.0027178979944437742f, 0.001177815138362348f, 0.0012829276965931058f, 0.0016896023880690336f, 0.0028330860659480095f, 0.0015492768725380301f, 0.0026088880840688944f, 0.0026346093509346247f, 0.0022381797898560762f, 0.0016697554383426905f, 0.0017577949911355972f, 0.001284187426790595f, 0.0030049611814320087f, 0.0020595157984644175f, 0.0016540075885131955f, 0.0012598675675690174f, 0.0022457956802099943f, 0.0012193333823233843f, 0.0023181226570159197f, 0.0009545500506646931f, 0.001294925226829946f, 0.0019527359399944544f, 0.001300686039030552f, 0.001866810256615281f, 0.0011826347326859832f, 0.0012056174455210567f, 0.001388693694025278f, 0.0019623907282948494f, 0.0009975801222026348f, 0.001574676833115518f, 0.001340400893241167f, 0.0015462710289284587f, 0.001283076824620366f, 0.0014646092895418406f, 0.0011912079062312841f, 0.0014237952418625355f, 0.0011121182469651103f, 0.0011690277606248856f, 0.0017833301099017262f, 0.001541751204058528f, 0.0014187219785526395f, 0.0019362190505489707f, 0.0009688084828667343f, 0.001944826333783567f, 0.0021926756016910076f, 0.0016046256059780717f, 0.0016687631141394377f, 0.0013553098542615771f, 0.002196388551965356f, 0.0015153361018747091f, 0.0020996821112930775f, 0.0014314638683572412f, 0.002109892200678587f, 0.0024812486954033375f, 0.0012998876627534628f, 0.0014152334770187736f, 0.0023129829205572605f, 0.0013156679924577475f, 0.0019199473317712545f, 0.0015172171406447887f, 0.002561027416959405f, 0.0014616533881053329f, 0.0015192889841273427f, 0.002595196943730116f, 0.0019027328817173839f, 0.0013338541612029076f, 0.002624213695526123f, 0.001620951690711081f, 0.001661947462707758f, 0.001278989831916988f, 0.0016406722133979201f, 0.0015470207436010242f, 0.0018546031787991524f, 0.0012451412621885538f, 0.0018871851498261094f, 0.002827976131811738f, 0.0023407379630953074f, 0.0013238128740340471f, 0.002097975928336382f, 0.0013891872949898243f, 0.0027304324321448803f, 0.0015768862795084715f, 0.0014842883683741093f, 0.001532003516331315f, 0.0021250310819596052f, 0.003615658963099122f, 0.0015428217593580484f, 0.001455065910704434f, 0.0019334479002282023f, 0.002578356536105275f, 0.001016302965581417f, 0.0017312130657956004f, 0.002423220546916127f, 0.0016218330711126328f, 0.002463506767526269f, 0.001945888390764594f, 0.001468032132834196f, 0.001362529001198709f, 0.0014027463039383292f, 0.001810938585549593f, 0.0018236699979752302f, 0.0015141854528337717f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022966195829212666f, 0.0057550943456590176f, 0.0031477995216846466f, 0.002812753664329648f, 0.004186248406767845f, 0.0026663769967854023f, 0.002687536645680666f, 0.0030495203100144863f, 0.004253237042576075f, 0.00323134264908731f, 0.0029573398642241955f, 0.005649440456181765f, 0.0022404701448976994f, 0.0035345135256648064f, 0.003693490521982312f, 0.0022142601665109396f, 0.0023934415075927973f, 0.004333300516009331f, 0.0021149483509361744f, 0.0036683864891529083f, 0.002451702719554305f, 0.006246882025152445f, 0.0026302849873900414f, 0.0053160605020821095f, 0.002015666337683797f, 0.0024262298829853535f, 0.00392409972846508f, 0.00195792643353343f, 0.004018616862595081f, 0.003651969600468874f, 0.0027907476760447025f, 0.0032031892333179712f, 0.002691026544198394f, 0.004672272130846977f, 0.0022891962435096502f, 0.0038750895764678717f, 0.0017834148602560163f, 0.010662980377674103f, 0.0025493802968412638f, 0.0021858010441064835f, 0.0021123450715094805f, 0.0024011326022446156f, 0.0026819834019988775f, 0.005292198620736599f, 0.005287623032927513f, 0.0023231429513543844f, 0.00885093305259943f, 0.005311512853950262f, 0.003703121794387698f, 0.0030276759061962366f, 0.003463244764134288f, 0.0025576765183359385f, 0.0044410452246665955f, 0.0037075683940201998f, 0.004497674759477377f, 0.004237446002662182f, 0.0017910086316987872f, 0.0038078450597822666f, 0.005123605486005545f, 0.0038167142774909735f, 0.007005867548286915f, 0.0052102478221058846f, 0.0028592259623110294f, 0.003075465327128768f, 0.00558578222990036f, 0.0024790074676275253f, 0.0025461888872087f, 0.0028671359177678823f, 0.003855176502838731f, 0.0033218369353562593f, 0.0027927090413868427f, 0.004291084595024586f, 0.002374405972659588f, 0.003910410217940807f, 0.0020288184750825167f, 0.0027550342492759228f, 0.00492648733779788f, 0.005235451739281416f, 0.003594704670831561f, 0.0032778179738670588f, 0.0014645912451669574f, 0.003997627645730972f, 0.004316654056310654f, 0.0034720171242952347f, 0.0034383991733193398f, 0.004354689735919237f, 0.0025850243400782347f, 0.003516386030241847f, 0.0019835869316011667f, 0.003237615106627345f, 0.004025473725050688f, 0.007113014813512564f, 0.005894946865737438f, 0.001553426031023264f, 0.0022172422613948584f, 0.002737805712968111f, 0.0037404398899525404f, 0.005503546446561813f, 0.0013402081094682217f, 0.0028721392154693604f, 0.00275064492598176f, 0.004945195745676756f, 0.0024763550609350204f, 0.0023454553447663784f, 0.0035994534846395254f, 0.004460497759282589f, 0.0022661767434328794f, 0.0020130311604589224f, 0.0077067045494914055f, 0.0019324063323438168f, 0.0032216785475611687f, 0.00392046058550477f, 0.0027736732736229897f, 0.00204245513305068f, 0.003962362185120583f, 0.0024420744739472866f, 0.004127968102693558f, 0.0038038413040339947f, 0.0038026846013963223f, 0.0022763400338590145f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0034507226664572954f, 0.0018827749881893396f, 0.0033304737880825996f, 0.004361292812973261f, 0.005415164865553379f, 0.004575013183057308f, 0.0018764567794278264f, 0.004235963337123394f, 0.004440682008862495f, 0.001646294491365552f, 0.003397699212655425f, 0.0018196847522631288f, 0.0017436551861464977f, 0.0034937914460897446f, 0.002150721149519086f, 0.0039551821537315845f, 0.0023154111113399267f, 0.00288114370778203f, 0.004020834341645241f, 0.00556563213467598f, 0.004090691916644573f, 0.005381982307881117f, 0.003577392315492034f, 0.0021385871805250645f, 0.004165968857705593f, 0.0019309099297970533f, 0.0018763242987915874f, 0.0056943148374557495f, 0.003870026208460331f, 0.004477457609027624f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000732928398065269f, 0.0008516922825947404f, 0.0006607521791011095f, 0.0006427743937820196f, 0.0006871379446238279f, 0.0006182009819895029f, 0.0010827077785506845f, 0.0005288781248964369f, 0.0006077361758798361f, 0.0005958556430414319f, 0.0009136354201473296f, 0.0006170844426378608f, 0.0005601609591394663f, 0.0006210459978319705f, 0.0006741652032360435f, 0.0006576727610081434f, 0.0004923624801449478f, 0.0006027239141985774f, 0.0005934518994763494f, 0.0004644386935979128f, 0.0006129122921265662f, 0.0008927184971980751f, 0.0005985792959108949f, 0.0008362874505110085f, 0.0007927572587504983f, 0.0005574969109147787f, 0.0010796620044857264f, 0.0007018600590527058f, 0.0005475051584653556f, 0.0006840309360995889f, 0.0008896450162865222f, 0.000647911976557225f, 0.0004529725993052125f, 0.0005249824607744813f, 0.0007500006468035281f, 0.0005938157555647194f, 0.0004656990640796721f, 0.0008080711122602224f, 0.0007774421246722341f, 0.0006120163016021252f, 0.0005862622056156397f, 0.0006215416942723095f, 0.0005091541679576039f, 0.0007848716340959072f, 0.0008315054583363235f, 0.0007816908182576299f, 0.0010281442664563656f, 0.0008228548103943467f, 0.0008846179698593915f, 0.0007321920711547136f, 0.0008046837756410241f, 0.0007429012912325561f, 0.00048729352420195937f, 0.0005395366461016238f, 0.0004134742193855345f, 0.0007424788200296462f, 0.0007255326490849257f, 0.00048543844604864717f, 0.0006222405354492366f, 0.0006254407344385982f, 0.0009480367298237979f, 0.00046971329720690846f, 0.0007227124297060072f, 0.0005665145581588149f, 0.0007750161457806826f, 0.0006763298879377544f, 0.0005926780286245048f, 0.0008678223239257932f, 0.0006300944951362908f, 0.0005383509560488164f, 0.0005772748263552785f, 0.0005779380444437265f, 0.00038596682134084404f, 0.0008760098717175424f, 0.0004916173056699336f, 0.0007692943327128887f, 0.00048770036664791405f, 0.0007458867039531469f, 0.0008309700642712414f, 0.0006541439215652645f, 0.00036738370545208454f, 0.0008806202677078545f, 0.0008213136461563408f, 0.0006819730624556541f, 0.0005578963900916278f, 0.0007705361931584775f, 0.0010680597042664886f, 0.0006470117950811982f, 0.0008151978836394846f, 0.0006256456254050136f, 0.0004603822890203446f, 0.0008418828947469592f, 0.0006965643842704594f, 0.0006396535318344831f, 0.0005262564518488944f, 0.0005591307417489588f, 0.0008312653517350554f, 0.0007342026801779866f, 0.000528935284819454f, 0.0004097165074199438f, 0.000870013958774507f, 0.000960678094998002f, 0.000464592914795503f, 0.0005946767632849514f, 0.0007936589536257088f, 0.0007086909608915448f, 0.0010395135032013059f, 0.00043420595466159284f, 0.0006256395136006176f, 0.0004694450180977583f, 0.0007028880063444376f, 0.0010125775588676333f, 0.0005581793375313282f, 0.0008108534384518862f, 0.0006086701177991927f, 0.0005573377129621804f, 0.0005710325203835964f, 0.0008301007328554988f, 0.000615039374679327f, 0.0009817506652325392f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0040395623072981834f, 0.006129673216491938f, 0.0061409855261445045f, 0.004175371490418911f, 0.005720353219658136f, 0.0071281976997852325f, 0.004307519178837538f, 0.005433797836303711f, 0.005531353875994682f, 0.005486409645527601f, 0.00457776989787817f, 0.005083808209747076f, 0.005217595491558313f, 0.006291400175541639f, 0.005643300712108612f, 0.006235540844500065f, 0.004550403915345669f, 0.004141987767070532f, 0.004286063369363546f, 0.0037588116247206926f, 0.004680872429162264f, 0.005192678887397051f, 0.004137791693210602f, 0.004956929013133049f, 0.005067002028226852f, 0.0031314482912421227f, 0.005362831987440586f, 0.0049377563409507275f, 0.0035965084098279476f, 0.005502320360392332f, 0.0068499259650707245f, 0.003633141750469804f, 0.004326291382312775f, 0.005403297021985054f, 0.004083551466464996f, 0.004295933060348034f, 0.005174294114112854f, 0.004426875151693821f, 0.005831440445035696f, 0.0038067784626036882f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001806213753297925f, 0.0016447070520371199f, 0.0023389835841953754f, 0.0019032872514799237f, 0.0019972920417785645f, 0.0017166521865874529f, 0.0020988781470805407f, 0.002672495786100626f, 0.0018018203554674983f, 0.00330667314119637f, 0.001366660580970347f, 0.0021135625429451466f, 0.0011107659665867686f, 0.0015752663603052497f, 0.0014866181882098317f, 0.0015009877970442176f, 0.001500897342339158f, 0.002142680110409856f, 0.0024615279398858547f, 0.0016005125362426043f, 0.002367384498938918f, 0.0028876352589577436f, 0.0011654810514301062f, 0.00204455410130322f, 0.002228078432381153f, 0.0016372847603634f, 0.0019716396927833557f, 0.0020330676343292f, 0.0021011175122112036f, 0.0021126095671206713f, 0.0017348167020827532f, 0.0018812722992151976f, 0.001240214565768838f, 0.002020513406023383f, 0.001996115315705538f, 0.0014235636917874217f, 0.0026455463375896215f, 0.002337018959224224f, 0.0018188441172242165f, 0.0021210242994129658f, 0.0015593855641782284f, 0.0016127654816955328f, 0.0016733924858272076f, 0.0023511406034231186f, 0.0018480379367247224f, 0.0021368758752942085f, 0.001937989378347993f, 0.0015397476963698864f, 0.0015450179344043136f, 0.002070517046377063f, 0.0017284200293943286f, 0.0016246092272922397f, 0.0019773838575929403f, 0.0015016519464552402f, 0.0015249698190018535f, 0.0016873122658580542f, 0.0018667064141482115f, 0.0015677055343985558f, 0.0015435143141075969f, 0.0013161228271201253f, 0.0018294394249096513f, 0.0018097965512424707f, 0.0017250248929485679f, 0.001974309328943491f, 0.0021646833047270775f, 0.0012053060345351696f, 0.0018850609194487333f, 0.001429040334187448f, 0.001261907396838069f, 0.002075738739222288f, 0.0018892629304900765f, 0.0017465099226683378f, 0.001601988566108048f, 0.0019364679465070367f, 0.0011179082794114947f, 0.003444794798269868f, 0.0016324367607012391f, 0.0024896874092519283f, 0.0015629722038283944f, 0.0012948199873790145f, 0.0014710442628711462f, 0.0019446194637566805f, 0.001520888414233923f, 0.0023976443335413933f, 0.002291628159582615f, 0.0018890227656811476f, 0.0015197693137452006f, 0.0020047167781740427f, 0.0016836783615872264f, 0.0017592173535376787f, 0.002194521715864539f, 0.0027588640805333853f, 0.0014728663954883814f, 0.002076926873996854f, 0.001996000297367573f, 0.0022102603688836098f, 0.0017158685950562358f, 0.0015446721808984876f, 0.0014971345663070679f, 0.0016691754572093487f, 0.0011476530926302075f, 0.0027116492856293917f, 0.002033218275755644f, 0.001911141094751656f, 0.0018726160051301122f, 0.0017303129425272346f, 0.002202358329668641f, 0.0016542692901566625f, 0.00136666395701468f, 0.0023202949669212103f, 0.00181111681740731f, 0.001638840651139617f, 0.002398113487288356f, 0.001346764387562871f, 0.002000549342483282f, 0.001526611507870257f, 0.001757629681378603f, 0.0014713156269863248f, 0.0025762689765542746f, 0.001112493104301393f, 0.0018965717172250152f, 0.002222364768385887f, 0.0016336379339918494f, 0.001537030329927802f, 0.0019236875232309103f, 0.0010047084651887417f, 0.0015980178723111749f, 0.0026251748204231262f, 0.0014178247656673193f, 0.0020330999977886677f, 0.001959685469046235f, 0.002687751315534115f, 0.001344173215329647f, 0.001250654342584312f, 0.002031332114711404f, 0.001455371268093586f, 0.0010032320860773325f, 0.001656981068663299f, 0.0015955137787386775f, 0.0025691594928503036f, 0.0023367651738226414f, 0.0015301404055207968f, 0.0020147347822785378f, 0.0016775524709373713f, 0.0018737060017883778f, 0.0019026962108910084f, 0.001444550114683807f, 0.0018969255033880472f, 0.0016747986664995551f, 0.0019385841442272067f, 0.0012488147476688027f, 0.002490332582965493f, 0.0032467786222696304f, 0.0017593704396858811f, 0.001282979384995997f, 0.0019611625466495752f, 0.0016458129975944757f, 0.002301642205566168f, 0.0016825580969452858f, 0.002135863061994314f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005897649098187685f, 0.002063754014670849f, 0.0026969898026436567f, 0.00398021936416626f, 0.004078997299075127f, 0.004143430385738611f, 0.006154865492135286f, 0.002535987878218293f, 0.006007681135088205f, 0.0037792043294757605f, 0.006798819173127413f, 0.005067415069788694f, 0.014716307632625103f, 0.005242972634732723f, 0.0055500827729702f, 0.004822661634534597f, 0.0045072357170283794f, 0.00417958851903677f, 0.004535851068794727f, 0.0020920289680361748f, 0.0026346377562731504f, 0.0024730078876018524f, 0.008158012293279171f, 0.0026264667976647615f, 0.003604630008339882f, 0.0034687211737036705f, 0.005283752456307411f, 0.004175130743533373f, 0.002070334041491151f, 0.005113950930535793f, 0.0063577271066606045f, 0.0031438092701137066f, 0.006457143928855658f, 0.0033559524454176426f, 0.002968789543956518f, 0.009243342094123363f, 0.0061179352924227715f, 0.0054922569543123245f, 0.006254608277231455f, 0.0029729746747761965f, 0.0027826367877423763f, 0.006021982058882713f, 0.006219583563506603f, 0.001881948672235012f, 0.004239577800035477f, 0.0024949382059276104f, 0.0055439588613808155f, 0.004626151639968157f, 0.004923244006931782f, 0.004148338455706835f, 0.0038639064878225327f, 0.0022400105372071266f, 0.0034299332182854414f, 0.006083867512643337f, 0.002781394636258483f, 0.004615903366357088f, 0.003221080405637622f, 0.00407738983631134f, 0.006928198039531708f, 0.0043921018950641155f, 0.004382808227092028f, 0.005266939755529165f, 0.006766614969819784f, 0.008302188478410244f, 0.00481953751295805f, 0.013264813460409641f, 0.0056287203915417194f, 0.0030422285199165344f, 0.010783486999571323f, 0.004271334037184715f, 0.002743498422205448f, 0.004909743554890156f, 0.004005801398307085f, 0.004409109242260456f, 0.003097349312156439f, 0.002988298423588276f, 0.006189616397023201f, 0.003061779076233506f, 0.005452016834169626f, 0.005499932914972305f, 0.005215015262365341f, 0.0032431555446237326f, 0.004472759086638689f, 0.006020489148795605f, 0.002522530034184456f, 0.004707633052021265f, 0.004280876833945513f, 0.005147439893335104f, 0.003178811864927411f, 0.004773028194904327f, 0.004762311931699514f, 0.0025198806542903185f, 0.004120408557355404f, 0.007544900756329298f, 0.003721430664882064f, 0.005266519263386726f, 0.004481033887714148f, 0.002459936076775193f, 0.005455483216792345f, 0.004277299623936415f, 0.012248554266989231f, 0.005278057884424925f, 0.00579509511590004f, 0.004094770178198814f, 0.002835765015333891f, 0.00237200572155416f, 0.003159202868118882f, 0.005902398377656937f, 0.005574495531618595f, 0.005192219745367765f, 0.002688311506062746f, 0.009970149956643581f, 0.0023314408026635647f, 0.006842646282166243f, 0.00777077954262495f, 0.004167543724179268f, 0.007548870984464884f, 0.0075696357525885105f, 0.004113485570997f, 0.010374782606959343f, 0.002447947161272168f, 0.0033195277210325003f, 0.005989947356283665f, 0.0038589786272495985f, 0.004530939739197493f, 0.0024502587039023638f, 0.004372924100607634f, 0.007366931065917015f, 0.008724657818675041f, 0.0037051911931484938f, 0.0033770729787647724f, 0.004346455913037062f, 0.005825888365507126f, 0.00340832956135273f, 0.005420686677098274f, 0.006158615928143263f, 0.01088159903883934f, 0.002571130869910121f, 0.012140168808400631f, 0.003069817554205656f, 0.004986978601664305f, 0.004193242639303207f, 0.004438949748873711f, 0.0033072838559746742f, 0.0025093425065279007f, 0.00453463988378644f, 0.0058167665265500546f, 0.004917588550597429f, 0.005396224092692137f, 0.003974036779254675f, 0.002831387799233198f, 0.0030002305284142494f, 0.004388760309666395f, 0.005277658812701702f, 0.004170646425336599f, 0.0030240078922361135f, 0.006821027025580406f, 0.00431425403803587f, 0.006170337554067373f, 0.0026782562490552664f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001727299066260457f, 0.004715086426585913f, 0.0021190785337239504f, 0.005585973616689444f, 0.003919105511158705f, 0.00391332246363163f, 0.003952119965106249f, 0.001964705064892769f, 0.004981095436960459f, 0.002001383574679494f, 0.0036804366391152143f, 0.004786014091223478f, 0.0022971313446760178f, 0.0029348686803132296f, 0.0037770390044897795f, 0.0018249141285195947f, 0.0034117535687983036f, 0.002578150713816285f, 0.004781453404575586f, 0.004037091508507729f, 0.00169191334862262f, 0.004463360644876957f, 0.004713509231805801f, 0.005090431775897741f, 0.0015782647533342242f, 0.003470608266070485f, 0.0032414859160780907f, 0.003923618700355291f, 0.0020472723990678787f, 0.0019159808289259672f, 0.004605341237038374f, 0.0015701454831287265f, 0.004071228206157684f, 0.0036716831382364035f, 0.0035729813389480114f, 0.0033484785817563534f, 0.004235969390720129f, 0.0036185483913868666f, 0.0033437940292060375f, 0.0041782446205616f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006223297095857561f, 0.0005615731352008879f, 0.000533345912117511f, 0.0008296679588966072f, 0.0009993906132876873f, 0.0007114002364687622f, 0.001304610981605947f, 0.0006019535940140486f, 0.0008308339747600257f, 0.0005908883176743984f, 0.0004945226246491075f, 0.0005004603881388903f, 0.0005487095331773162f, 0.0008250948158092797f, 0.0005946053424850106f, 0.0005738740437664092f, 0.0006178765906952322f, 0.00042149407090619206f, 0.0007041035569272935f, 0.000509146077092737f, 0.0007053450681269169f, 0.000687375373672694f, 0.0005747972754761577f, 0.0007596598588861525f, 0.0004082643717993051f, 0.0005324514349922538f, 0.0006500299205072224f, 0.000683820981066674f, 0.0004519376379903406f, 0.0007146254647523165f, 0.0008672144031152129f, 0.0007833617273718119f, 0.0005533114308491349f, 0.000643692968878895f, 0.0006918222061358392f, 0.0007223181310109794f, 0.00044989850721322f, 0.0005654054693877697f, 0.0006823661969974637f, 0.000563758541829884f, 0.0006538182497024536f, 0.0006489248480647802f, 0.0006522256880998611f, 0.0007145831477828324f, 0.0006584812072105706f, 0.0006050727097317576f, 0.0005720818880945444f, 0.0005555881652981043f, 0.0005044640274718404f, 0.0008315191953442991f, 0.0007684235461056232f, 0.0004922897205688059f, 0.0006253771134652197f, 0.0006567509262822568f, 0.0006172163411974907f, 0.000641459715552628f, 0.0005731831770390272f, 0.0006617156905122101f, 0.0007632510387338698f, 0.0012944466434419155f, 0.0004202580894343555f, 0.0007241499260999262f, 0.0009434443200007081f, 0.0007303652819246054f, 0.0005086226738058031f, 0.0008173251990228891f, 0.0007681297138333321f, 0.0005640615709125996f, 0.0005994316306896508f, 0.0005091968341730535f, 0.0005726538947783411f, 0.0005438546068035066f, 0.001184998545795679f, 0.0006656233454123139f, 0.0005204995977692306f, 0.0004338443686719984f, 0.0007540674996562302f, 0.0005749036208726466f, 0.0007541404920630157f, 0.0009013423114083707f, 0.0007594953058287501f, 0.0009303955012001097f, 0.0006959532620385289f, 0.0004152655601501465f, 0.0005326683749444783f, 0.0009332184563390911f, 0.0012880705762654543f, 0.000926526787225157f, 0.0007360474555753171f, 0.0005581146688200533f, 0.0005462339613586664f, 0.0006883575697429478f, 0.0004580710956361145f, 0.0005159064894542098f, 0.0005535790114663541f, 0.0009214864112436771f, 0.0005088210455141962f, 0.0005676504224538803f, 0.0005691290134564042f, 0.0007047018734738231f, 0.0008046936127357185f, 0.0005911880871281028f, 0.0007002310594543815f, 0.0005869953893125057f, 0.0006737337680533528f, 0.0007189507014118135f, 0.000778938876464963f, 0.0005712311249226332f, 0.000788033299613744f, 0.0008246034849435091f, 0.0007645851001143456f, 0.000516539323143661f, 0.0008082816493697464f, 0.0006607341347262263f, 0.000715032103471458f, 0.0006566959200426936f, 0.0009100527386181056f, 0.0007423220085911453f, 0.0006653382442891598f, 0.0005967564648017287f, 0.0004622757842298597f, 0.0007382134790532291f, 0.0006190960993990302f, 0.0006125305662862957f, 0.0006796520901843905f, 0.0007058639312162995f, 0.0005539178382605314f, 0.0006443510064855218f, 0.00045986889745108783f, 0.0005375893670134246f, 0.0009738089283928275f, 0.0005544931045733392f, 0.0005057962844148278f, 0.0005471835029311478f, 0.001001013326458633f, 0.0007721547735854983f, 0.0006840506684966385f, 0.0007394889835268259f, 0.0005497012170962989f, 0.0006048516952432692f, 0.0007012408459559083f, 0.000737377442419529f, 0.0004481183714233339f, 0.0006619522464461625f, 0.000470079219667241f, 0.00048602040624246f, 0.0006337619270198047f, 0.000677726638969034f, 0.0005005088169127703f, 0.0005928102764301002f, 0.0007594581111334264f, 0.0009145400254055858f, 0.0006287748692557216f, 0.0009765854338184f, 0.000507514807395637f, 0.0004708596388809383f, 0.0014111882774159312f, 0.0008917544037103653f, 0.0009750412427820265f, 0.0009507498471066356f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004471004940569401f, 0.004976934753358364f, 0.005393295548856258f, 0.0046788230538368225f, 0.004460655618458986f, 0.0044041951186954975f, 0.003956273663789034f, 0.004106705542653799f, 0.003445441136136651f, 0.004730054177343845f, 0.004068320617079735f, 0.004479348659515381f, 0.003758104285225272f, 0.003995849750936031f, 0.0038601444102823734f, 0.005300167948007584f, 0.004832876846194267f, 0.004237087909132242f, 0.005593705456703901f, 0.004628244321793318f, 0.006211502477526665f, 0.0035887586418539286f, 0.004137684125453234f, 0.004953364375978708f, 0.004201905801892281f, 0.003342299722135067f, 0.005417923908680677f, 0.0031716201920062304f, 0.005002676974982023f, 0.0039683496579527855f, 0.004067156929522753f, 0.005821115802973509f, 0.004243399016559124f, 0.004087462555617094f, 0.005466067232191563f, 0.0052270349115133286f, 0.005503395572304726f, 0.0046624913811683655f, 0.004674535244703293f, 0.004463301971554756f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008437346550635993f, 0.0012762716505676508f, 0.0018159367609769106f, 0.0010187857551500201f, 0.001619353424757719f, 0.0013241888955235481f, 0.0012246370315551758f, 0.0009267485584132373f, 0.0018841896671801805f, 0.0015208766562864184f, 0.0013723340816795826f, 0.0010985134867951274f, 0.001504114014096558f, 0.0009706207783892751f, 0.0014575247187167406f, 0.0013355303090065718f, 0.001865277998149395f, 0.0015618542674928904f, 0.0016193677438423038f, 0.0008427022839896381f, 0.0013506406685337424f, 0.0009002804872579873f, 0.0016934777377173305f, 0.0015556241851300001f, 0.0014048247830942273f, 0.001047025783918798f, 0.0020842854864895344f, 0.0014326528180390596f, 0.001076789922080934f, 0.0008150979410856962f, 0.0018056157277897f, 0.000641777878627181f, 0.0010120230726897717f, 0.001486043562181294f, 0.0009453981183469296f, 0.0011165845207870007f, 0.0014868279686197639f, 0.0009039963479153812f, 0.0008650582749396563f, 0.0015668937703594565f, 0.0011383595410734415f, 0.001047880039550364f, 0.0008195649716071784f, 0.0007654945948161185f, 0.0006331175100058317f, 0.0013358226278796792f, 0.0013296805555000901f, 0.0008492524502798915f, 0.0016066933749243617f, 0.0016267240280285478f, 0.0016721001593396068f, 0.001733936951495707f, 0.0009635982569307089f, 0.0009115185821428895f, 0.00160683854483068f, 0.001503197941929102f, 0.0018919090507552028f, 0.0012479033321142197f, 0.0010924075031653047f, 0.0015940903685986996f, 0.0010779215954244137f, 0.001240353798493743f, 0.0010819579474627972f, 0.0014988984912633896f, 0.000926452106796205f, 0.0020693864207714796f, 0.0009075902635231614f, 0.0006684365216642618f, 0.001402036054059863f, 0.0011054648784920573f, 0.0017709472449496388f, 0.0010718887206166983f, 0.0009514108533039689f, 0.0010013746796175838f, 0.0013048643013462424f, 0.0010045603848993778f, 0.001071085804142058f, 0.0005911268526688218f, 0.001560090808197856f, 0.0013185561401769519f, 0.0012386600719764829f, 0.0012082038447260857f, 0.0013820489402860403f, 0.0016064675292000175f, 0.0012696241028606892f, 0.001261022873222828f, 0.001442527282051742f, 0.0013783464673906565f, 0.001336131477728486f, 0.0017200278816744685f, 0.0008624300244264305f, 0.0010531388688832521f, 0.0016897603636607528f, 0.0012130282120779157f, 0.0007918536430224776f, 0.0011516291415318847f, 0.00102601433172822f, 0.001567088533192873f, 0.001503225532360375f, 0.0013366800267249346f, 0.001372206723317504f, 0.0015729867154732347f, 0.001493520918302238f, 0.0011065158760175109f, 0.0019469602266326547f, 0.0009322752594016492f, 0.001184461754746735f, 0.0006506357458420098f, 0.0011868705041706562f, 0.001794598763808608f, 0.0008289208053611219f, 0.0012409343617036939f, 0.0015000259736552835f, 0.0015302952378988266f, 0.0014631919329985976f, 0.0011011563474312425f, 0.0011188563657924533f, 0.0012780457036569715f, 0.0018018969567492604f, 0.0013355630217120051f, 0.0017973046051338315f, 0.0024038110859692097f, 0.0009414908126927912f, 0.0007937084301374853f, 0.001032555941492319f, 0.0016887870151549578f, 0.0008827573037706316f, 0.0011122184805572033f, 0.0013024585787206888f, 0.0011460111709311604f, 0.0010335276601836085f, 0.0008242704207077622f, 0.0022092009894549847f, 0.0013492591679096222f, 0.002020906424149871f, 0.0010711816139519215f, 0.0017564749578014016f, 0.0011469655437394977f, 0.0016231302870437503f, 0.0011397392954677343f, 0.0012634658487513661f, 0.0018488614587113261f, 0.0007325388723984361f, 0.0017178318230435252f, 0.0010383614571765065f, 0.0006956614670343697f, 0.0013516948092728853f, 0.0014299429021775723f, 0.0016530794091522694f, 0.0012359964894130826f, 0.00103704200591892f, 0.0010411679977551103f, 0.001305113430134952f, 0.0013236490776762366f, 0.0008170549990609288f, 0.0007356365094892681f, 0.001068648649379611f, 0.0008147400803864002f, 0.0013268953189253807f, 0.0013900143094360828f, 0.001368496916256845f, 0.002248963341116905f, 0.0026651564985513687f, 0.0021780538372695446f, 0.0012366550508886576f, 0.0018320541130378842f, 0.0010076959151774645f, 0.0013144465629011393f, 0.0012174647999927402f, 0.0010043468791991472f, 0.0015310952439904213f, 0.0015902825398370624f, 0.0016744692111387849f, 0.0017620057333260775f, 0.0015618865145370364f, 0.0011526905000209808f, 0.0011369577841833234f, 0.000641937309410423f, 0.0012247291160747409f, 0.0008001422975212336f, 0.0015512517420575023f, 0.0013799731386825442f, 0.0021207823883742094f, 0.0015032215742394328f, 0.0009206472313962877f, 0.001475819735787809f, 0.002498459303751588f, 0.0017625190084800124f, 0.0014708915259689093f, 0.0009369692415930331f, 0.0014780578203499317f, 0.0017338499892503023f, 0.0007112812018021941f, 0.0011728910030797124f, 0.0016104900278151035f, 0.001007998245768249f, 0.001786540844477713f, 0.0013065508101135492f, 0.0014653144171461463f, 0.0011450910242274404f, 0.0010348072974011302f, 0.001318219699896872f, 0.0011190209770575166f, 0.0009381256531924009f, 0.0011077484814450145f, 0.0011569539783522487f, 0.001219476805999875f, 0.0011091624619439244f, 0.0007886429666541517f, 0.0015495760599151254f, 0.0014767308020964265f, 0.0014636950800195336f, 0.0009715409250929952f, 0.0012921333545818925f, 0.001114199054427445f, 0.0014595765387639403f, 0.0011333508882671595f, 0.0011055981740355492f, 0.0008074186043813825f, 0.00127933151088655f, 0.0018170771654695272f, 0.0011180363362655044f, 0.001732551958411932f, 0.0011591216316446662f, 0.001701270928606391f, 0.0014592834049835801f, 0.0012573136482387781f, 0.001268444349989295f, 0.0012391682248562574f, 0.0010345543269068003f, 0.0009960985044017434f, 0.00110410968773067f, 0.0026757395826280117f, 0.0012784390710294247f, 0.0013645491562783718f, 0.0019471205305308104f, 0.0012820963747799397f, 0.0015960728051140904f, 0.0014927465235814452f, 0.0013578850775957108f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006210868246853352f, 0.003451576689258218f, 0.0036170952953398228f, 0.001957222353667021f, 0.006639115046709776f, 0.0021633568685501814f, 0.0034853739198297262f, 0.002354477997869253f, 0.0027869034092873335f, 0.012548182159662247f, 0.00672074593603611f, 0.006436515599489212f, 0.00476453872397542f, 0.013966034166514874f, 0.004575589671730995f, 0.003874634625390172f, 0.0037562933284789324f, 0.005046476610004902f, 0.0026557042729109526f, 0.011657514609396458f, 0.004348326940089464f, 0.0035102663096040487f, 0.004114450886845589f, 0.002220670459792018f, 0.005447786301374435f, 0.006757519207894802f, 0.0016334872925654054f, 0.00541849946603179f, 0.00650410121306777f, 0.005022507626563311f, 0.0031580994836986065f, 0.008766849525272846f, 0.004173805937170982f, 0.003090868005529046f, 0.002950678113847971f, 0.003502285573631525f, 0.0019597108475863934f, 0.011230507865548134f, 0.026469290256500244f, 0.0038578591775149107f, 0.002286420436576009f, 0.0062213619239628315f, 0.008438751101493835f, 0.008703385479748249f, 0.019801264628767967f, 0.00216360273770988f, 0.0031350923236459494f, 0.02257000096142292f, 0.0030007455497980118f, 0.004108467139303684f, 0.0015312868636101484f, 0.004003864713013172f, 0.0030119626317173243f, 0.005665760952979326f, 0.0047879633493721485f, 0.0043057589791715145f, 0.003531964961439371f, 0.0030445249285548925f, 0.003259801771491766f, 0.002485949546098709f, 0.006594608537852764f, 0.004057358019053936f, 0.007522516883909702f, 0.0033037220127880573f, 0.005725906230509281f, 0.003690052544698119f, 0.010071950033307076f, 0.008484330028295517f, 0.0028729222249239683f, 0.0029068193398416042f, 0.005054370034486055f, 0.011067258194088936f, 0.004120100289583206f, 0.008591508492827415f, 0.00363726238720119f, 0.006127377040684223f, 0.0031419629231095314f, 0.006358827464282513f, 0.0038649567868560553f, 0.0021509856451302767f, 0.008130600675940514f, 0.003968211822211742f, 0.00460985628888011f, 0.005556790623813868f, 0.002971659181639552f, 0.002912646858021617f, 0.004057133570313454f, 0.004460106138139963f, 0.003208935959264636f, 0.006580933928489685f, 0.005858008749783039f, 0.003679479006677866f, 0.002338214311748743f, 0.00225580926053226f, 0.012102760374546051f, 0.003237753873690963f, 0.0031576077453792095f, 0.002242868300527334f, 0.003281780518591404f, 0.002873349701985717f, 0.0037782855797559023f, 0.006002036854624748f, 0.003031337633728981f, 0.004199765622615814f, 0.005318809300661087f, 0.00997929833829403f, 0.013914153911173344f, 0.011483225971460342f, 0.002531318925321102f, 0.004308000672608614f, 0.014139484614133835f, 0.0031518659088760614f, 0.006744223181158304f, 0.005820079240947962f, 0.00316244107671082f, 0.011559686623513699f, 0.010829965583980083f, 0.008005829527974129f, 0.0028857190627604723f, 0.0033835251815617085f, 0.005499030463397503f, 0.0056757680140435696f, 0.007463178597390652f, 0.002730687614530325f, 0.005590558517724276f, 0.0021840890403836966f, 0.00892229937016964f, 0.004147739615291357f, 0.0029033811297267675f, 0.003945185337215662f, 0.005598064977675676f, 0.0045689428225159645f, 0.0032239235006272793f, 0.004695951007306576f, 0.004387947730720043f, 0.013584299013018608f, 0.0015602214261889458f, 0.006998136173933744f, 0.0020773012656718493f, 0.0057541062124073505f, 0.002324238885194063f, 0.004942840896546841f, 0.005811371840536594f, 0.002805095398798585f, 0.0032329445239156485f, 0.012043452821671963f, 0.0053285863250494f, 0.002661102218553424f, 0.0030608628876507282f, 0.006419682875275612f, 0.004514147061854601f, 0.008149960078299046f, 0.007017132360488176f, 0.0025864066556096077f, 0.0024776356294751167f, 0.008694805204868317f, 0.008314104750752449f, 0.02711658552289009f, 0.004130832850933075f, 0.0027105791959911585f, 0.0028277786914259195f, 0.002849594457075f, 0.005857138428837061f, 0.0029098421800881624f, 0.006197632290422916f, 0.003416141029447317f, 0.007676647510379553f, 0.0027336236089468002f, 0.0014288944657891989f, 0.005561428610235453f, 0.0014219338772818446f, 0.004471715074032545f, 0.005458508618175983f, 0.0012642346555367112f, 0.004701391793787479f, 0.0034990659914910793f, 0.004954109434038401f, 0.006449929904192686f, 0.003659154288470745f, 0.010821952484548092f, 0.002313485136255622f, 0.002475486136972904f, 0.003601028583943844f, 0.0027555201668292284f, 0.014211072586476803f, 0.004199464805424213f, 0.008098230697214603f, 0.002940134145319462f, 0.004242966417223215f, 0.002978366333991289f, 0.0034623960964381695f, 0.003902032505720854f, 0.014343599788844585f, 0.0020408681593835354f, 0.0033809926826506853f, 0.0051458789967000484f, 0.003497222438454628f, 0.00731278583407402f, 0.004242381080985069f, 0.005729542579501867f, 0.005857145879417658f, 0.0025826438795775175f, 0.004491840954869986f, 0.01109871082007885f, 0.006216042209416628f, 0.004957853350788355f, 0.01281175296753645f, 0.0038914631586521864f, 0.005189358722418547f, 0.0022164303809404373f, 0.002755486173555255f, 0.0021812128834426403f, 0.005803287029266357f, 0.005042829550802708f, 0.0035123787820339203f, 0.0023615744430571795f, 0.003939046058803797f, 0.005144820082932711f, 0.006214633118361235f, 0.003581223078072071f, 0.0032667445484548807f, 0.0019300776766613126f, 0.002849976532161236f, 0.0069899121299386024f, 0.00648919865489006f, 0.005507211200892925f, 0.007191079668700695f, 0.00400495296344161f, 0.003743677167221904f, 0.0018758508376777172f, 0.006523373071104288f, 0.0038855411112308502f, 0.003176064696162939f, 0.007864126935601234f, 0.00784387905150652f, 0.004534140694886446f, 0.0016590517479926348f, 0.004721458535641432f, 0.0030005318112671375f, 0.0029483134858310223f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 60,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004412310663610697f, 0.0012646133545786142f, 0.004276266321539879f, 0.0014914205530658364f, 0.0014576741959899664f, 0.0034925765357911587f, 0.0014003192773088813f, 0.005208764690905809f, 0.0038275534752756357f, 0.005099835805594921f, 0.004943143110722303f, 0.0013691203203052282f, 0.004463345743715763f, 0.001345622818917036f, 0.002464463235810399f, 0.0037096915766596794f, 0.005616358015686274f, 0.0014287886442616582f, 0.005385256838053465f, 0.0034714138600975275f, 0.0014933559577912092f, 0.0019842814654111862f, 0.004171799402683973f, 0.004209531936794519f, 0.005004581063985825f, 0.0034458742011338472f, 0.004455461632460356f, 0.0015236010076478124f, 0.0035107778385281563f, 0.0044602458365261555f, 0.0013253985671326518f, 0.002446032827720046f, 0.0038248207420110703f, 0.0021000090055167675f, 0.001472596311941743f, 0.0035472875460982323f, 0.0037390536163002253f, 0.002781054237857461f, 0.004810989834368229f, 0.00604166928678751f, 0.004593054763972759f, 0.003733004443347454f, 0.004827061202377081f, 0.003923478536307812f, 0.004791335668414831f, 0.004032129887491465f, 0.004311856813728809f, 0.0017928140005096793f, 0.0037730918265879154f, 0.0017339347396045923f, 0.004513690713793039f, 0.004648395348340273f, 0.004630832001566887f, 0.0045045120641589165f, 0.0038631181232631207f, 0.0020158838015049696f, 0.003772817086428404f, 0.0019592519383877516f, 0.00375935947522521f, 0.0052399300038814545f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005079683032818139f, 0.0005856860661879182f, 0.0006311747129075229f, 0.0006237238412722945f, 0.0005379299982450902f, 0.0006480362499132752f, 0.00048128748312592506f, 0.00047579078818671405f, 0.0006191841093823314f, 0.000585590663831681f, 0.00044763233745470643f, 0.000618963036686182f, 0.0005195707781240344f, 0.0005760719068348408f, 0.0007631240878254175f, 0.0005757020553573966f, 0.0006788649479858577f, 0.0006693307659588754f, 0.0006280610687099397f, 0.0006832199869677424f, 0.0005871613975614309f, 0.000561513239517808f, 0.0008928824099712074f, 0.0005163927562534809f, 0.0007320856675505638f, 0.0007224587607197464f, 0.0006302219117060304f, 0.0005829700385220349f, 0.0007293338421732187f, 0.0008005278650671244f, 0.0004487683763727546f, 0.000653106952086091f, 0.0005360462237149477f, 0.0005766752292402089f, 0.0006304130656644702f, 0.00037269986933097243f, 0.0004730891087092459f, 0.0006463768659159541f, 0.0005822812090627849f, 0.0005851148162037134f, 0.0005136789986863732f, 0.0006802162388339639f, 0.0007333123940043151f, 0.0008367863483726978f, 0.000889739952981472f, 0.0007182746194303036f, 0.0006372182979248464f, 0.0006603152141906321f, 0.0005797275225631893f, 0.0008411185117438436f, 0.0005684937932528555f, 0.000602759188041091f, 0.0007222710992209613f, 0.0007223166758194566f, 0.0005212444812059402f, 0.0008510130573995411f, 0.0005775546887889504f, 0.0006465448532253504f, 0.0006260941736400127f, 0.0006803945871070027f, 0.0008343763183802366f, 0.0005898933159187436f, 0.000644853338599205f, 0.0005033506895415485f, 0.000495794927701354f, 0.0005943511496298015f, 0.000714291469193995f, 0.0008145337924361229f, 0.0006704981788061559f, 0.0008891595061868429f, 0.0006975066498853266f, 0.0009447625488974154f, 0.0006551452679559588f, 0.0005957612884230912f, 0.0008200997835956514f, 0.0007627082522958517f, 0.0006237257621251047f, 0.0005588960484601557f, 0.0007635886431671679f, 0.0003430053766351193f, 0.0006245450931601226f, 0.0004225739976391196f, 0.0006345896981656551f, 0.0006432250957004726f, 0.0005879123928025365f, 0.0005148423369973898f, 0.0006218493217602372f, 0.000706195249222219f, 0.0006247785640880466f, 0.000710099411662668f, 0.00048190070083364844f, 0.000583321729209274f, 0.00073407799936831f, 0.0006291582249104977f, 0.000759689137339592f, 0.0006517732981592417f, 0.000928207824472338f, 0.0004436979943420738f, 0.0007035165326669812f, 0.0006792384665459394f, 0.0006479744333773851f, 0.0006645590765401721f, 0.0006770592299290001f, 0.0006986421067267656f, 0.0006225154502317309f, 0.0006340333493426442f, 0.0006711074383929372f, 0.0006198284099809825f, 0.0005000728415325284f, 0.000770420185290277f, 0.0005541588761843741f, 0.0007144524715840816f, 0.0006870864308439195f, 0.00047893793089315295f, 0.0006961200851947069f, 0.0005702744238078594f, 0.0005686620133928955f, 0.0007264331798069179f, 0.0007964076939970255f, 0.0009195341262966394f, 0.0006635033059865236f, 0.0008414722396992147f, 0.000643331790342927f, 0.000508199620526284f, 0.0004783843760378659f, 0.0008794089662842453f, 0.001025538775138557f, 0.0006456150440499187f, 0.0007653634529560804f, 0.0007204976282082498f, 0.0006170940469019115f, 0.0007151814643293619f, 0.0007218822138383985f, 0.0005994947860017419f, 0.0005460212705656886f, 0.0010173902846872807f, 0.000723165983799845f, 0.0006825857562944293f, 0.0010059187188744545f, 0.000683274760376662f, 0.0007566474960185587f, 0.0009110663668252528f, 0.0005422629183158278f, 0.000986680155619979f, 0.0005356913898140192f, 0.0005739146145060658f, 0.0009123102063313127f, 0.0008041468681767583f, 0.0005542834987863898f, 0.0007440675399266183f, 0.0007611585315316916f, 0.0007186195580288768f, 0.0004864667425863445f, 0.0009376719244755805f, 0.0005295241135172546f, 0.0007229797192849219f, 0.0006465062033385038f, 0.0009320912649855018f, 0.0007693508523516357f, 0.0004240813141223043f, 0.0005763744120486081f, 0.0006386135937646031f, 0.0006465675542131066f, 0.0007808087975718081f, 0.0005763400113210082f, 0.0006702571990899742f, 0.0006021169247105718f, 0.0007038634503260255f, 0.0004550873418338597f, 0.0005741248023696244f, 0.000659773126244545f, 0.0007495278841815889f, 0.0008357744081877172f, 0.0006736506475135684f, 0.0008900744724087417f, 0.0008428187575191259f, 0.0004985129344277084f, 0.0004511153092607856f, 0.0005342321819625795f, 0.0008715396979823709f, 0.0006093892734497786f, 0.0006455219117924571f, 0.000575814105104655f, 0.0006275922642089427f, 0.0006037309649400413f, 0.000617966172285378f, 0.0007956672925502062f, 0.0007321023149415851f, 0.0009688481804914773f, 0.0005367283592931926f, 0.0006093609845265746f, 0.0007441697525791824f, 0.0004547206044662744f, 0.0005228930967859924f, 0.0005273503484204412f, 0.0005791423609480262f, 0.0007453500293195248f, 0.0008123223087750375f, 0.0006475325208157301f, 0.0007094105239957571f, 0.0005307623068802059f, 0.0007030866108834743f, 0.0007281603175215423f, 0.0007963393582031131f, 0.0005491742631420493f, 0.0008127736509777606f, 0.0008026153082028031f, 0.0006246631382964551f, 0.0007119405781850219f, 0.00047825800720602274f, 0.0009294322226196527f, 0.00043181804358027875f, 0.0008459869422949851f, 0.00071300333365798f, 0.0006579544278793037f, 0.0005533956573344767f, 0.0007528067217208445f, 0.0006004407186992466f, 0.000656013609841466f, 0.0005883771227672696f, 0.000684208411257714f, 0.0005609282525256276f, 0.0008478258387185633f, 0.0006621857173740864f, 0.0009650737629272044f, 0.0007328192004933953f, 0.0005429387092590332f, 0.0005598844145424664f, 0.0006958341691643f, 0.0004773127438966185f, 0.0006143877399154007f, 0.0006947547080926597f, 0.0009760163375176489f, 0.0006938514998182654f, 0.0006529716774821281f, 0.000809115415904671f, 0.0005298745818436146f, 0.0008280123583972454f, 0.0005863537080585957f, 0.0006915262201800942f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031478512100875378f, 0.003358278889209032f, 0.004936030134558678f, 0.003448839532211423f, 0.0035004650708287954f, 0.004116207826882601f, 0.002795838052406907f, 0.00259479065425694f, 0.0038520987145602703f, 0.004887619521468878f, 0.0026494893245399f, 0.004817758221179247f, 0.0033817030489444733f, 0.00347676663659513f, 0.0037496439181268215f, 0.005170706659555435f, 0.003075414104387164f, 0.002884681336581707f, 0.0041295005939900875f, 0.0032571458723396063f, 0.0037905436474829912f, 0.0037253238260746002f, 0.0041150725446641445f, 0.004801548086106777f, 0.002520335139706731f, 0.0037733712233603f, 0.00271398457698524f, 0.003504732623696327f, 0.004221775569021702f, 0.0029351322446018457f, 0.0026276479475200176f, 0.0032197926193475723f, 0.0032920115627348423f, 0.003982437774538994f, 0.002970406785607338f, 0.003775784047320485f, 0.00417468324303627f, 0.003354955930262804f, 0.004024282563477755f, 0.0027967665810137987f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009234343888238072f, 0.0010996415512636304f, 0.0006940853199921548f, 0.0006780641269870102f, 0.0008090232731774449f, 0.0010432895505800843f, 0.0008746803505346179f, 0.0009239143109880388f, 0.001016357447952032f, 0.0007280955906026065f, 0.0008926625014282763f, 0.0007531839655712247f, 0.0008285556687042117f, 0.001140290405601263f, 0.0005185220506973565f, 0.000574996811337769f, 0.0008730115951038897f, 0.0006353964563459158f, 0.0009059847216121852f, 0.0008651143289171159f, 0.0008172485395334661f, 0.0009867035550996661f, 0.0008429724257439375f, 0.0007382213952951133f, 0.0006081305327825248f, 0.0008062763954512775f, 0.0008020666427910328f, 0.0007131812162697315f, 0.0010765596525743604f, 0.0006132653215900064f, 0.0010290372883901f, 0.000882516207639128f, 0.0009923281613737345f, 0.0006270693265832961f, 0.0007154677296057343f, 0.000832516117952764f, 0.0006249748985283077f, 0.0007867867825552821f, 0.0007215859368443489f, 0.0008533804211765528f, 0.0008533529471606016f, 0.0008488129824399948f, 0.0012460154248401523f, 0.000864609086420387f, 0.000861330539919436f, 0.0008338842890225351f, 0.0008660779567435384f, 0.0009796618251129985f, 0.0008608645875938237f, 0.0009695922490209341f, 0.0008822176605463028f, 0.0008308327523991466f, 0.0007578860968351364f, 0.001204833621159196f, 0.0009598543401807547f, 0.0009293528273701668f, 0.00107745046261698f, 0.000715891772415489f, 0.0005838270881213248f, 0.0007453163270838559f, 0.0012242201482877135f, 0.0006695004412904382f, 0.0010243706637993455f, 0.0008713406277820468f, 0.0007773327524773777f, 0.0007268381887115538f, 0.0008474132046103477f, 0.0010719753336161375f, 0.000767837162129581f, 0.001086174394004047f, 0.0008222063188441098f, 0.0009607488173060119f, 0.0010650212643668056f, 0.0007565552368760109f, 0.0008129709749482572f, 0.0009112878469750285f, 0.0008793558226898313f, 0.0007883692742325366f, 0.0009712731698527932f, 0.0006640813080593944f, 0.0010507478145882487f, 0.0008632608805783093f, 0.0008292432175949216f, 0.0009033179376274347f, 0.0008537094690836966f, 0.0008684415370225906f, 0.0010041309287771583f, 0.0008862177492119372f, 0.0006425558240152895f, 0.0008589892531745136f, 0.0007630011532455683f, 0.000913867203053087f, 0.0008892308687791228f, 0.0009709506994113326f, 0.001096432562917471f, 0.0008641015156172216f, 0.0006671567098237574f, 0.0010451639536768198f, 0.0008294945582747459f, 0.0006889133364893496f, 0.0011923837009817362f, 0.0006984103820286691f, 0.0009281124221161008f, 0.0007517947815358639f, 0.0009357750532217324f, 0.0013157486682757735f, 0.0007297545671463013f, 0.0008092874195426702f, 0.0008569935453124344f, 0.0011140871793031693f, 0.0013967823470011353f, 0.0008319337503053248f, 0.0008069135365076363f, 0.0009448688360862434f, 0.0008635018020868301f, 0.0007272482034750283f, 0.0010329557117074728f, 0.0011797795305028558f, 0.0011094155488535762f, 0.0008935049409046769f, 0.0009239853243343532f, 0.0006929222727194428f, 0.0008464553393423557f, 0.001140595762990415f, 0.0008006726275198162f, 0.0014364958042278886f, 0.0008643443579785526f, 0.0006786162848584354f, 0.0007053258595988154f, 0.0008078314131125808f, 0.0011841284576803446f, 0.0008281320333480835f, 0.00111421849578619f, 0.0009163934155367315f, 0.0009255859768018126f, 0.0007145606796257198f, 0.0008934350917115808f, 0.0008768134284764528f, 0.0009421776048839092f, 0.0008354849996976554f, 0.0012658816995099187f, 0.0008127315668389201f, 0.0009279148653149605f, 0.0009092061663977802f, 0.0008171356748789549f, 0.0007757483399473131f, 0.0009034358081407845f, 0.000822345376946032f, 0.0006766417063772678f, 0.000829789147246629f, 0.0010463454527780414f, 0.0009545756038278341f, 0.0007920441566966474f, 0.0007086300174705684f, 0.0007048434927128255f, 0.000742562348023057f, 0.0008906050934456289f, 0.0012699943035840988f, 0.0010082776425406337f, 0.0006999007891863585f, 0.0011591080110520124f, 0.0007064317469485104f, 0.0009940636809915304f, 0.0009854021482169628f, 0.0010393890552222729f, 0.0007390603423118591f, 0.0011725944932550192f, 0.001014160574413836f, 0.0008615223923698068f, 0.0009427948971278965f, 0.0008706850931048393f, 0.0007891976274549961f, 0.0010972623713314533f, 0.0009249788708984852f, 0.0010080396896228194f, 0.0011272295378148556f, 0.0007997302454896271f, 0.0007251515053212643f, 0.0009131201077252626f, 0.0008342950604856014f, 0.0009125146316364408f, 0.0012460309080779552f, 0.000738399859983474f, 0.001053529791533947f, 0.0010959138162434101f, 0.0007845826912671328f, 0.0006355713121592999f, 0.0008806518744677305f, 0.0006689712754450738f, 0.0007809458766132593f, 0.0009010952198877931f, 0.0011895477073267102f, 0.0008994399104267359f, 0.000816627056337893f, 0.000745187106076628f, 0.0010269504273310304f, 0.0006293390179052949f, 0.0010138575453311205f, 0.0007429330144077539f, 0.0010638413950800896f, 0.0007261635619215667f, 0.0007758820429444313f, 0.000774191168602556f, 0.0010407319059595466f, 0.0007752882083877921f, 0.0011024072300642729f, 0.0009774287464097142f, 0.0009420555434189737f, 0.0006788200116716325f, 0.0008834738400764763f, 0.0008966546156443655f, 0.0008924024878069758f, 0.000807139731477946f, 0.0006900896551087499f, 0.0007772617391310632f, 0.0007252534851431847f, 0.0007666366873309016f, 0.0006403231527656317f, 0.0013751122169196606f, 0.0006269254954531789f, 0.0006262239185161889f, 0.0009039521683007479f, 0.0009454878745600581f, 0.0007492812001146376f, 0.0008806887781247497f, 0.0011732418788596988f, 0.0008536247187294066f, 0.001033617416396737f, 0.0008571995422244072f, 0.0011460203677415848f, 0.0006566987140104175f, 0.0008932110504247248f, 0.0008528584148734808f, 0.0009526103385724127f, 0.0007948737475089729f, 0.0009044111939147115f, 0.0011498855892568827f, 0.0009173286380246282f, 0.0008012587786652148f, 0.0009329719468951225f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 480,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024875039234757423f, 0.003231980139389634f, 0.0031452106777578592f, 0.002735163550823927f, 0.0008873810293152928f, 0.0009713873150758445f, 0.0033933890517801046f, 0.0011060847900807858f, 0.002625980880111456f, 0.002610403811559081f, 0.0009865104220807552f, 0.0037951860576868057f, 0.002159338677302003f, 0.0035157748498022556f, 0.0030458769761025906f, 0.003832920454442501f, 0.000841744476929307f, 0.0025172159075737f, 0.001046541496179998f, 0.0027211641427129507f, 0.004067083355039358f, 0.0031152027659118176f, 0.0024752484168857336f, 0.001398429274559021f, 0.0018587064696475863f, 0.000799904577434063f, 0.000896418234333396f, 0.0028413303662091494f, 0.0027437356766313314f, 0.0009574878495186567f, 0.0008701618062332273f, 0.0008744026999920607f, 0.0028551684226840734f, 0.0020548333413898945f, 0.0010517974151298404f, 0.0031354627572000027f, 0.0029821835923939943f, 0.0035737224388867617f, 0.003384313080459833f, 0.003861992387101054f, 0.004243587143719196f, 0.0029874423053115606f, 0.0029195090755820274f, 0.0028877556324005127f, 0.0037385683972388506f, 0.0008159691351465881f, 0.000842742738313973f, 0.002763180760666728f, 0.0030266232788562775f, 0.0009252814343199134f, 0.0010633408091962337f, 0.0008385698893107474f, 0.003400143701583147f, 0.0029672158416360617f, 0.0025214990600943565f, 0.0021092891693115234f, 0.0028321726713329554f, 0.0027675474993884563f, 0.0031915304716676474f, 0.003020285628736019f, 0.003245959524065256f, 0.0031794747337698936f, 0.001635763212107122f, 0.002630240749567747f, 0.0025293368380516768f, 0.0025850660167634487f, 0.0026706289499998093f, 0.0011644759215414524f, 0.0010532572632655501f, 0.0032392723951488733f, 0.0012682282831519842f, 0.0035577898379415274f, 0.0035129617899656296f, 0.0033094831742346287f, 0.0025713222566992044f, 0.0013504865346476436f, 0.0027484027668833733f, 0.0008406774140894413f, 0.003420409746468067f, 0.0022921136114746332f, 0.002398352837190032f, 0.0028165949042886496f, 0.002876610029488802f, 0.0012098642764613032f, 0.0032782009802758694f, 0.003092391649261117f, 0.003778353100642562f, 0.0007968012359924614f, 0.003220491809770465f, 0.000986506580375135f, 0.0027531750965863466f, 0.0008860251400619745f, 0.0023712103720754385f, 0.0030737502966076136f, 0.0008198915747925639f, 0.0030380943790078163f, 0.002998701296746731f, 0.0010703617008402944f, 0.003354883287101984f, 0.003649274120107293f, 0.0026194762904196978f, 0.003616881091147661f, 0.0025063781067728996f, 0.0008629389340057969f, 0.003230712143704295f, 0.00260499631986022f, 0.0031091810669749975f, 0.002912275493144989f, 0.001807055901736021f, 0.0009033965179696679f, 0.0013499177293851972f, 0.001996582606807351f, 0.00329229817725718f, 0.0035797611344605684f, 0.003221625927835703f, 0.0013570250011980534f, 0.0011899650562554598f, 0.002714606001973152f, 0.0036726000253111124f, 0.003336541121825576f, 0.001886505400761962f, 0.001230519963428378f, 0.0023103596176952124f, 0.0024120600428432226f, 0.0011522199492901564f, 0.0008830137085169554f, 0.0012528407387435436f, 0.0010121812811121345f, 0.0027921784203499556f, 0.002981266938149929f, 0.0026602987200021744f, 0.002823383780196309f, 0.0024928641505539417f, 0.0030413351487368345f, 0.0029261927120387554f, 0.0033111826051026583f, 0.002651663962751627f, 0.0036340432707220316f, 0.0009245302644558251f, 0.0033653732389211655f, 0.003057217923924327f, 0.000893416756298393f, 0.0030490760691463947f, 0.0025851037353277206f, 0.002967196051031351f, 0.0009664305835030973f, 0.0012596352025866508f, 0.0032736267894506454f, 0.0008808812126517296f, 0.0008943614084273577f, 0.001479248283430934f, 0.0008924516150727868f, 0.0030258737970143557f, 0.0037628926802426577f, 0.002996978349983692f, 0.003007475985214114f, 0.003852694295346737f, 0.001062788418494165f, 0.0029623371083289385f, 0.0009235566831193864f, 0.000821827445179224f, 0.0008224366465583444f, 0.00101688620634377f, 0.003934056498110294f, 0.0008183367317542434f, 0.0029106121510267258f, 0.002955822506919503f, 0.003644658951088786f, 0.0029010516591370106f, 0.003503582440316677f, 0.003252436639741063f, 0.0030632358975708485f, 0.004132136236876249f, 0.0012608744436874986f, 0.0038686369080096483f, 0.0026551266200840473f, 0.0034104108344763517f, 0.0026982140261679888f, 0.0010634633945301175f, 0.0030304163228720427f, 0.0009880529250949621f, 0.002723156474530697f, 0.003277991432696581f, 0.0027090609073638916f, 0.0028120926581323147f, 0.0028742423746734858f, 0.000880274863447994f, 0.003521414240822196f, 0.0023861436638981104f, 0.0034165559336543083f, 0.002209185156971216f, 0.0020700220484286547f, 0.0035990348551422358f, 0.004186784382909536f, 0.004422212019562721f, 0.0030271101277321577f, 0.002233063103631139f, 0.002928073052316904f, 0.0032148067839443684f, 0.0026796050369739532f, 0.0024165231734514236f, 0.0024754127953201532f, 0.002257833955809474f, 0.00411771796643734f, 0.0008946104790084064f, 0.004571693018078804f, 0.003177988575771451f, 0.002726571401581168f, 0.0008186742779798806f, 0.0010444781510159373f, 0.0028619361110031605f, 0.003183811204507947f, 0.0008559169364161789f, 0.0010803985642269254f, 0.003185547888278961f, 0.0009005567408166826f, 0.0009905364131554961f, 0.0009899563156068325f, 0.002527170814573765f, 0.0009483928442932665f, 0.0022868558298796415f, 0.0027527231723070145f, 0.0028593563474714756f, 0.002284005517140031f, 0.0024310313165187836f, 0.000931609480176121f, 0.0028854741249233484f, 0.0008102550636976957f, 0.0035469969734549522f, 0.0011276582954451442f, 0.003035646164789796f, 0.002129099564626813f, 0.0028898990713059902f, 0.0024061216972768307f, 0.002539851935580373f, 0.0032593421638011932f, 0.0029891629237681627f, 0.0008766685496084392f, 0.0029207575134932995f, 0.000965628307312727f, 0.0008314935839734972f, 0.001013613655231893f, 0.0037304689176380634f, 0.0029813344590365887f, 0.002680389676243067f, 0.003946198616176844f, 0.0032186436001211405f, 0.002469167346134782f, 0.0031379011925309896f, 0.001064409501850605f, 0.002354089170694351f, 0.002976504620164633f, 0.000864405301399529f, 0.0030220362823456526f, 0.00285637890920043f, 0.0009001296712085605f, 0.0032609968911856413f, 0.003263248363509774f, 0.000989902182482183f, 0.0025636947248131037f, 0.0016143297543749213f, 0.003972990904003382f, 0.0024739191867411137f, 0.0017720243195071816f, 0.0014490516623482108f, 0.0026383993681520224f, 0.0009382680291309953f, 0.0008593113743700087f, 0.0026908305007964373f, 0.0010763512691482902f, 0.0024230522103607655f, 0.0010038563050329685f, 0.003413357539102435f, 0.0013518398627638817f, 0.0010474780574440956f, 0.0030980256851762533f, 0.003046376397833228f, 0.0012793459463864565f, 0.00244784913957119f, 0.0025326013565063477f, 0.002997041679918766f, 0.0008599126012995839f, 0.0028253633063286543f, 0.0029233768582344055f, 0.003444406669586897f, 0.0014232397079467773f, 0.002875967649742961f, 0.004006214905530214f, 0.0038423629011958838f, 0.002856653183698654f, 0.0025646621361374855f, 0.0010406732326373458f, 0.0024365580175071955f, 0.0030105423647910357f, 0.0012220763601362705f, 0.0010784853948280215f, 0.003326875390484929f, 0.0027452134527266026f, 0.0029498892836272717f, 0.0027479571290314198f, 0.001008291612379253f, 0.003058683592826128f, 0.0016804920742288232f, 0.0009372493368573487f, 0.0019455490401014686f, 0.0024587952066212893f, 0.0009720589150674641f, 0.0008513803477399051f, 0.00247955322265625f, 0.002885123249143362f, 0.00079710828140378f, 0.002505526877939701f, 0.003061919938772917f, 0.0027484807651489973f, 0.0010543520329520106f, 0.001216388656757772f, 0.001028538914397359f, 0.0026975413784384727f, 0.0027708292473107576f, 0.0008789257262833416f, 0.001440717140212655f, 0.0016759905265644193f, 0.0034602622035890818f, 0.0028238780796527863f, 0.0030455829109996557f, 0.0036035776138305664f, 0.0007892876747064292f, 0.0032767895609140396f, 0.0030789824668318033f, 0.0027833080384880304f, 0.0028553951997309923f, 0.003466064343228936f, 0.0009994738502427936f, 0.0027687347028404474f, 0.0009994887514039874f, 0.0008280793554149568f, 0.0031320848502218723f, 0.002403879538178444f, 0.0009074654662981629f, 0.0024692534934729338f, 0.0009241084917448461f, 0.0009700101800262928f, 0.0009838726837188005f, 0.003973250277340412f, 0.0008945711306296289f, 0.0032305563800036907f, 0.0034373761154711246f, 0.0030242600478231907f, 0.0013809786178171635f, 0.002817191183567047f, 0.002480620751157403f, 0.0008357641054317355f, 0.0010109377326443791f, 0.004234579857438803f, 0.002992982743307948f, 0.003679398912936449f, 0.00251945317722857f, 0.00321688549593091f, 0.0031754428055137396f, 0.004000330343842506f, 0.0031770123168826103f, 0.003069542348384857f, 0.0023913108743727207f, 0.00249483366496861f, 0.00319416425190866f, 0.0011367929400876164f, 0.0035983333364129066f, 0.003336901543661952f, 0.0022519028279930353f, 0.000880918581970036f, 0.0031154428143054247f, 0.0009781490080058575f, 0.0029690798837691545f, 0.0008476349757984281f, 0.002605279441922903f, 0.0027791650500148535f, 0.0029951827600598335f, 0.0026436373591423035f, 0.0025198219809681177f, 0.0035861078649759293f, 0.0008182144374586642f, 0.0009851228678599f, 0.001097111962735653f, 0.0015775961801409721f, 0.003481231164187193f, 0.0035357598681002855f, 0.002540840767323971f, 0.0010231822961941361f, 0.001145724207162857f, 0.0031674548517912626f, 0.002787407487630844f, 0.0011378272902220488f, 0.0029304400086402893f, 0.001315565430559218f, 0.00306372600607574f, 0.0009700001683086157f, 0.0033146319910883904f, 0.001097343978472054f, 0.003307178383693099f, 0.0025650823954492807f, 0.0008826779085211456f, 0.0031336636748164892f, 0.0025179956573992968f, 0.0032299512531608343f, 0.0035446356050670147f, 0.0014183419989421964f, 0.002867590170353651f, 0.0026290330570191145f, 0.0030450632330030203f, 0.003613866865634918f, 0.003286090912297368f, 0.0026646372862160206f, 0.002459480194374919f, 0.00298302061855793f, 0.0008203478064388037f, 0.0008343562367372215f, 0.0012911661760881543f, 0.002182532334700227f, 0.0026252535171806812f, 0.003928122576326132f, 0.002674446441233158f, 0.003422106383368373f, 0.0012644687667489052f, 0.0013234216021373868f, 0.003512005787342787f, 0.0013455054722726345f, 0.003424797672778368f, 0.002653913339599967f, 0.0031573690939694643f, 0.003678072476759553f, 0.002299313433468342f, 0.0009795250371098518f, 0.002085550921037793f, 0.0023221515584737062f, 0.002816445892676711f, 0.003172487486153841f, 0.0030135787092149258f, 0.0028553344309329987f, 0.0037415253464132547f, 0.0028608222492039204f, 0.002762055490165949f, 0.0010669941548258066f, 0.0014594551175832748f, 0.0009430502541363239f, 0.0009570263209752738f, 0.001986062154173851f, 0.004309631418436766f, 0.005335336085408926f, 0.0033382782712578773f, 0.0013374234549701214f, 0.0008484157733619213f, 0.0036418121308088303f, 0.0028511432465165854f, 0.0032027570996433496f, 0.002612204058095813f, 0.0008773306617513299f, 0.0028678947128355503f, 0.00352478981949389f, 0.0009692249004729092f, 0.0009555825963616371f, 0.004038235172629356f, 0.002484984928742051f, 0.0031344732269644737f, 0.0026560421101748943f, 0.0030342109967023134f, 0.003249606816098094f, 0.0034792455844581127f, 0.0024986143689602613f, 0.0038105316925793886f, 0.0010135348420590162f, 0.0010199338430538774f, 0.0025865656789392233f, 0.0017102001002058387f, 0.0012032205704599619f, 0.0033218960743397474f, 0.002094835741445422f, 0.0009248907444998622f, 0.0012969000963494182f, 0.0023984804283827543f, 0.0009684060350991786f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 10,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006882424000650644f, 0.0046177878975868225f, 0.004505687393248081f, 0.00445061968639493f, 0.008464163169264793f, 0.004959439393132925f, 0.013824237510561943f, 0.005881336983293295f, 0.005718993954360485f, 0.007120763882994652f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01145063154399395f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033106582704931498f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033106582704931498f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_8_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015009728260338306f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01642444357275963f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09682814031839371f),
    AI_PACK_INTQ_ZP(11)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09682814031839371f),
    AI_PACK_INTQ_ZP(11)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06825695931911469f),
    AI_PACK_INTQ_ZP(-26)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06825695931911469f),
    AI_PACK_INTQ_ZP(-26)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05376031994819641f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10256808251142502f),
    AI_PACK_INTQ_ZP(-29)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005822719540446997f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005822719540446997f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10246411710977554f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00804530642926693f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00804530642926693f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &eltwise_34_output_array, &eltwise_34_output_array_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  1, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  3, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  5, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  pool_39_output, AI_STATIC,
  7, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &pool_39_output_array, &pool_39_output_array_intq)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_40_output_array, &conv2d_40_output_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  9, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  10, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_42_output, AI_STATIC,
  11, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &eltwise_42_output_array, &eltwise_42_output_array_intq)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  nl_43_output, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 8161, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8161, 8161),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_44_output, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &eltwise_44_output_array, &eltwise_44_output_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  15, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  17, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  18, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_47_output_array, &conv2d_47_output_array_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  19, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 624, 1, 1), AI_STRIDE_INIT(4, 1, 1, 624, 624),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  pool_49_output, AI_STATIC,
  21, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_49_output_array, &pool_49_output_array_intq)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  23, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  24, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_52_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_52_output_array, &eltwise_52_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  nl_53_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_54_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_output_array, &conv2d_56_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  pool_58_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &pool_58_output_array, &pool_58_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 1, 1, 40, 40),
  1, &conv2d_59_output_array, &conv2d_59_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_61_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &eltwise_61_output_array, &eltwise_61_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  nl_62_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &nl_62_output_array, &nl_62_output_array_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_63_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &eltwise_63_output_array, &eltwise_63_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_64_output_array, &conv2d_64_output_array_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  42, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_65_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_65_output_array, &eltwise_65_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_66_output_array, &conv2d_66_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  pool_68_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &pool_68_output_array, &pool_68_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 1, 1, 60, 60),
  1, &conv2d_69_output_array, &conv2d_69_output_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  49, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_71_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &eltwise_71_output_array, &eltwise_71_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  nl_72_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &nl_72_output_array, &nl_72_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  53, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_73_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &eltwise_73_output_array, &eltwise_73_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_74_output_array, &conv2d_74_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_75_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_75_output_array, &eltwise_75_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  57, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  pool_77_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &pool_77_output_array, &pool_77_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 1, 1, 480, 480),
  1, &conv2d_78_output_array, &conv2d_78_output_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  61, 0x0,
  AI_SHAPE_INIT(4, 1, 1264, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1264, 1264),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10, 10),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10, 10),
  1, &nl_81_output_array, &nl_81_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conversion_82_output, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &conversion_82_output_array, NULL)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  68, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  75, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  77, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch1, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_50_scratch1_array, &conv2d_50_scratch1_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 16), AI_STRIDE_INIT(4, 1, 8, 128, 384),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  80, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  81, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 4), AI_STRIDE_INIT(4, 1, 16, 64, 64),
  1, &conv2d_4_weights_array, &conv2d_4_weights_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  83, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_4_bias_array, NULL)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  84, 0x0,
  AI_SHAPE_INIT(4, 1, 880, 1, 1), AI_STRIDE_INIT(4, 1, 1, 880, 880),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 4, 1, 1, 16), AI_STRIDE_INIT(4, 1, 4, 64, 64),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  86, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch0, AI_STATIC,
  87, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_56_scratch0_array, NULL)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 16), AI_STRIDE_INIT(4, 1, 16, 256, 256),
  1, &conv2d_9_weights_array, &conv2d_9_weights_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch1, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_scratch1_array, &conv2d_56_scratch1_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  90, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_9_bias_array, NULL)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  92, 0x0,
  AI_SHAPE_INIT(4, 1, 13601, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13601, 13601),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 32), AI_STRIDE_INIT(4, 1, 8, 256, 768),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  96, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch0, AI_STATIC,
  97, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_59_scratch0_array, NULL)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 16), AI_STRIDE_INIT(4, 1, 32, 512, 512),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  99, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  100, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  102, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch0, AI_STATIC,
  103, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_64_scratch0_array, NULL)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 40), AI_STRIDE_INIT(4, 1, 8, 320, 960),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  105, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch0, AI_STATIC,
  106, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_66_scratch0_array, NULL)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  108, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch1, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_66_scratch1_array, &conv2d_66_scratch1_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  111, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  112, 0x0,
  AI_SHAPE_INIT(4, 1, 20401, 1, 1), AI_STRIDE_INIT(4, 1, 1, 20401, 20401),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  115, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_scratch0, AI_STATIC,
  117, 0x0,
  AI_SHAPE_INIT(4, 1, 1560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1560, 1560),
  1, &conv2d_69_scratch0_array, NULL)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  118, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_scratch1, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 1, 1, 60, 60),
  1, &conv2d_69_scratch1_array, &conv2d_69_scratch1_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  121, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  122, 0x0,
  AI_SHAPE_INIT(4, 1, 2640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2640, 2640),
  1, &conv2d_70_scratch0_array, NULL)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  124, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_scratch0, AI_STATIC,
  125, 0x0,
  AI_SHAPE_INIT(4, 1, 1360, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1360, 1360),
  1, &conv2d_74_scratch0_array, NULL)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  127, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  128, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  130, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 96, 5, 5, 1), AI_STRIDE_INIT(4, 1, 96, 96, 480),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  133, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_scratch0, AI_STATIC,
  134, 0x0,
  AI_SHAPE_INIT(4, 1, 5760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5760, 5760),
  1, &conv2d_78_scratch0_array, NULL)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 24), AI_STRIDE_INIT(4, 1, 96, 2304, 2304),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_scratch1, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 1, 1, 480, 480),
  1, &conv2d_78_scratch1_array, &conv2d_78_scratch1_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  137, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 96), AI_STRIDE_INIT(4, 1, 24, 2304, 2304),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch0, AI_STATIC,
  139, 0x0,
  AI_SHAPE_INIT(4, 1, 2020, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2020, 2020),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 1536, 1536),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_scratch0, AI_STATIC,
  142, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &nl_81_scratch0_array, NULL)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  143, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  144, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  145, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  146, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  147, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  149, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  150, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  151, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  152, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  153, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  154, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 120), AI_STRIDE_INIT(4, 1, 16, 1920, 1920),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  155, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  156, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  157, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  159, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  160, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  161, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 40), AI_STRIDE_INIT(4, 1, 120, 4800, 4800),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  163, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_weights, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 160), AI_STRIDE_INIT(4, 1, 40, 6400, 6400),
  1, &conv2d_56_weights_array, &conv2d_56_weights_array_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_bias, AI_STATIC,
  165, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_56_bias_array, NULL)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  166, 0x1,
  AI_SHAPE_INIT(4, 160, 5, 5, 1), AI_STRIDE_INIT(4, 1, 160, 160, 800),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  167, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_weights, AI_STATIC,
  168, 0x1,
  AI_SHAPE_INIT(4, 160, 1, 1, 40), AI_STRIDE_INIT(4, 1, 160, 6400, 6400),
  1, &conv2d_59_weights_array, &conv2d_59_weights_array_intq)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_bias, AI_STATIC,
  169, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_59_bias_array, NULL)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 160), AI_STRIDE_INIT(4, 1, 40, 6400, 6400),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  171, 0x0,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 4, 4, 640, 640),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_weights, AI_STATIC,
  172, 0x1,
  AI_SHAPE_INIT(4, 160, 1, 1, 40), AI_STRIDE_INIT(4, 1, 160, 6400, 6400),
  1, &conv2d_64_weights_array, &conv2d_64_weights_array_intq)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_bias, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_64_bias_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_weights, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_66_weights_array, &conv2d_66_weights_array_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_bias, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_66_bias_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 240, 5, 5, 1), AI_STRIDE_INIT(4, 1, 240, 240, 1200),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  177, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_weights, AI_STATIC,
  178, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 60), AI_STRIDE_INIT(4, 1, 240, 14400, 14400),
  1, &conv2d_69_weights_array, &conv2d_69_weights_array_intq)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_69_bias, AI_STATIC,
  179, 0x0,
  AI_SHAPE_INIT(4, 1, 60, 1, 1), AI_STRIDE_INIT(4, 4, 4, 240, 240),
  1, &conv2d_69_bias_array, NULL)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  180, 0x1,
  AI_SHAPE_INIT(4, 60, 1, 1, 240), AI_STRIDE_INIT(4, 1, 60, 14400, 14400),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  181, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_weights, AI_STATIC,
  182, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 40), AI_STRIDE_INIT(4, 1, 240, 9600, 9600),
  1, &conv2d_74_weights_array, &conv2d_74_weights_array_intq)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_74_bias, AI_STATIC,
  183, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_74_bias_array, NULL)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_weights, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 480), AI_STRIDE_INIT(4, 1, 240, 115200, 115200),
  1, &conv2d_78_weights_array, &conv2d_78_weights_array_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_78_bias, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 480, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1920, 1920),
  1, &conv2d_78_bias_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  188, 0x1,
  AI_SHAPE_INIT(4, 480, 1, 1, 10), AI_STRIDE_INIT(4, 1, 480, 4800, 4800),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  189, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  190, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  191, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 2816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2816, 2816),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 104, 1, 1), AI_STRIDE_INIT(4, 1, 1, 104, 104),
  1, &conv2d_4_scratch0_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  195, 0x0,
  AI_SHAPE_INIT(4, 1, 176, 1, 1), AI_STRIDE_INIT(4, 1, 1, 176, 176),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 224, 1, 1), AI_STRIDE_INIT(4, 1, 1, 224, 224),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  197, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 5344, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5344, 5344),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  201, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  202, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  204, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_pad_before_output, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_2_pad_before_output_array, &conv2d_2_pad_before_output_array_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  206, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  207, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  pool_3_output, AI_STATIC,
  208, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &pool_3_output_array, &pool_3_output_array_intq)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &conv2d_4_output_array, &conv2d_4_output_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  210, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  211, 0x0,
  AI_SHAPE_INIT(4, 1, 5968, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5968, 5968),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_6_output, AI_STATIC,
  212, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &eltwise_6_output_array, &eltwise_6_output_array_intq)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_8_output, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &eltwise_8_output_array, &eltwise_8_output_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  214, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &conv2d_9_output_array, &conv2d_9_output_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  216, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_pad_before_output, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 58, 58), AI_STRIDE_INIT(4, 1, 1, 8, 464),
  1, &conv2d_11_pad_before_output_array, &conv2d_11_pad_before_output_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  218, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  220, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  221, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  222, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_pad_before_output, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 30, 30), AI_STRIDE_INIT(4, 1, 1, 8, 240),
  1, &conv2d_14_pad_before_output_array, &conv2d_14_pad_before_output_array_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  224, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  225, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  226, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  228, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  229, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  230, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  234, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  236, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  238, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  240, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  243, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  244, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  246, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  248, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  250, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  nl_33_output, AI_STATIC,
  251, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &nl_33_output_array, &nl_33_output_array_intq)



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


AI_STATIC_CONST ai_i32 nl_81_nl_params_data[] = { 1725724032, 25, -62 };
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


AI_STATIC_CONST ai_i8 nl_72_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -118, -115, -112, -109, -106, -103, -99, -96, -93, -90, -87, -84, -80, -77, -74, -71, -68, -65, -61, -58, -55, -52, -49, -46, -42, -39, -36, -33, -30, -27, -23, -20, -17, -14, -11, -8, -4, -1, 2, 5, 8, 11, 15, 18, 21, 24, 27, 30, 34, 37, 40, 43, 46, 50, 53, 56, 59, 62, 65, 69, 72, 75, 78, 81, 84, 88, 91, 94, 97, 100, 103, 107, 110, 113, 116, 119, 122, 126 };
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


AI_STATIC_CONST ai_i8 nl_62_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -118, -116, -114, -112, -110, -108, -106, -103, -101, -99, -97, -95, -93, -91, -89, -87, -85, -83, -81, -79, -77, -75, -73, -71, -69, -67, -65, -63, -61, -59, -56, -54, -52, -50, -48, -46, -44, -42, -40, -38, -36, -34, -32, -30, -28, -26, -24, -22, -20, -18, -16, -14, -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_59_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_59_layer, 59,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .groups = 1, 
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -121, -119, -117, -115, -113, -111, -109, -107, -106, -104, -102, -100, -98, -96, -94, -92, -91, -89, -87, -85, -83, -81, -79, -78, -76, -74, -72, -70, -68, -66, -64, -63, -61, -59, -57, -55, -53, -51, -49, -48, -46, -44, -42, -40, -38, -36, -34, -33, -31, -29, -27, -25, -23, -21, -20, -18, -16, -14, -12, -10, -8, -6, -5, -3, -1, 1, 3, 5, 7, 9, 10, 12, 14, 16, 18, 20, 22, 23, 25, 27, 29, 31, 33, 35, 37, 38, 40, 42, 44, 46, 48, 50, 52, 53, 55, 57, 59, 61, 63, 65, 66, 68, 70, 72, 74, 76, 78, 80, 81, 83, 85, 87, 89, 91, 93, 95, 96, 98, 100, 102, 104, 106, 108, 110, 111, 113, 115, 117, 119, 121, 123, 124, 126 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -122, -120, -119, -118, -116, -115, -114, -113, -111, -110, -109, -108, -106, -105, -104, -102, -101, -100, -99, -97, -96, -95, -93, -92, -91, -90, -88, -87, -86, -84, -83, -82, -81, -79, -78, -77, -75, -74, -73, -72, -70, -69, -68, -67, -65, -64, -63, -61, -60, -59, -58, -56, -55, -54, -52, -51, -50, -49, -47, -46, -45, -43, -42, -41, -40, -38, -37, -36, -35, -33, -32, -31, -29, -28, -27, -26, -24, -23, -22, -20, -19, -18, -17, -15, -14, -13, -11, -10, -9, -8, -6, -5, -4, -2, -1, 0, 1, 3, 4, 5, 6, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 21, 22, 23, 24, 26, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 44, 45, 46, 47, 49, 50, 51, 53, 54, 55, 56, 58, 59, 60, 62, 63, 64, 65, 67, 68, 69, 71, 72, 73, 74, 76, 77, 78, 79, 81, 82, 83, 85, 86, 87, 88, 90, 91, 92, 94, 95, 96, 97, 99, 100, 101, 103, 104, 105, 106, 108, 109, 110, 111, 113, 114, 115, 117, 118, 119, 120, 122, 123, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -118, -116, -114, -112, -110, -107, -105, -103, -101, -99, -97, -95, -93, -91, -89, -87, -85, -83, -81, -79, -77, -75, -73, -71, -69, -66, -64, -62, -60, -58, -56, -54, -52, -50, -48, -46, -44, -42, -40, -38, -36, -34, -32, -30, -27, -25, -23, -21, -19, -17, -15, -13, -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 9, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126 };
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


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -122, -121, -119, -118, -116, -115, -113, -112, -110, -109, -107, -106, -104, -103, -101, -100, -98, -97, -95, -94, -92, -91, -89, -88, -86, -85, -83, -82, -80, -79, -78, -76, -75, -73, -72, -70, -69, -67, -66, -64, -63, -61, -60, -58, -57, -55, -54, -52, -51, -49, -48, -46, -45, -43, -42, -40, -39, -37, -36, -34, -33, -31, -30, -29, -27, -26, -24, -23, -21, -20, -18, -17, -15, -14, -12, -11, -9, -8, -6, -5, -3, -2, 0, 1, 3, 4, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 20, 22, 23, 25, 26, 28, 29, 31, 32, 34, 35, 37, 38, 40, 41, 43, 44, 46, 47, 49, 50, 52, 53, 55, 56, 58, 59, 61, 62, 64, 65, 67, 68, 69, 71, 72, 74, 75, 77, 78, 80, 81, 83, 84, 86, 87, 89, 90, 92, 93, 95, 96, 98, 99, 101, 102, 104, 105, 107, 108, 110, 111, 113, 114, 116, 117, 118, 120, 121, 123, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 conv2d_14_pad_before_value_data[] = { -26 };
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


AI_STATIC_CONST ai_i8 conv2d_11_pad_before_value_data[] = { 11 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_output, &eltwise_6_output),
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
  NULL, &eltwise_8_layer, AI_STATIC, 
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 271708, 1, 1),
    271708, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 271708, 1, 1),
      271708, NULL, NULL)
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
    
    eltwise_8_output_array.data = AI_PTR(g_network_activations_map[0] + 50208);
    eltwise_8_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50208);
    
    conv2d_9_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_9_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_9_output_array.data = AI_PTR(g_network_activations_map[0] + 100384);
    conv2d_9_output_array.data_start = AI_PTR(g_network_activations_map[0] + 100384);
    
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
    
    conv2d_59_output_array.data = AI_PTR(g_network_activations_map[0] + 1200);
    conv2d_59_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1200);
    
    conv2d_60_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1240);
    conv2d_60_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1240);
    
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
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 2020);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2020);
    
    nl_81_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_81_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_81_output_array.data = AI_PTR(g_network_activations_map[0] + 40);
    nl_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 40);
    
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
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 271668);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 271668);
    
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
      
      .n_macc            = 19199710,
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
      
      .n_macc            = 19199710,
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

