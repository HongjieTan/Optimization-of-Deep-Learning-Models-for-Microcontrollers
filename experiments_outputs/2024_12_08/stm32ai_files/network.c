/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jan 14 10:14:37 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "c6651b44aebe891a74cfac83b12081b2"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Jan 14 10:14:37 2025"

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
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
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
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
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
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8161, AI_STATIC)
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
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
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
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 624, AI_STATIC)
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
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
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
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
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
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
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
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
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
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
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
  nl_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 160, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
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
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
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
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
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
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 240, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
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
  eltwise_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
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
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1264, AI_STATIC)
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
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  nl_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conversion_82_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 4, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
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
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5880, AI_STATIC)
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
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
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
  conv2d_50_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
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
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
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
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 880, AI_STATIC)
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
  conv2d_56_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
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
  conv2d_56_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13601, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7840, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1040, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_59_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40, AI_STATIC)
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
  NULL, NULL, 1960, AI_STATIC)
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
  NULL, NULL, 4, AI_STATIC)
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
  NULL, NULL, 1920, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
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
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
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
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 96, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.09198201447725296f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13266760110855103f),
    AI_PACK_INTQ_ZP(-7)))

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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01901809684932232f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005782745312899351f),
    AI_PACK_INTQ_ZP(-46)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005782745312899351f),
    AI_PACK_INTQ_ZP(-46)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07671386003494263f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.17418071627616882f),
    AI_PACK_INTQ_ZP(-8)))

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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00690431660041213f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00690431660041213f),
    AI_PACK_INTQ_ZP(-18)))

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
    AI_PACK_INTQ_SCALE(0.09009741991758347f),
    AI_PACK_INTQ_ZP(-1)))

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
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007719043642282486f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007719043642282486f),
    AI_PACK_INTQ_ZP(-3)))

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
    AI_PACK_INTQ_SCALE(0.06137508153915405f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11545577645301819f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_output_array_intq, AI_STATIC_CONST,
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
    AI_PACK_INTQ_SCALE(0.011601078324019909f),
    AI_PACK_INTQ_ZP(41)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011601078324019909f),
    AI_PACK_INTQ_ZP(41)))

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
    AI_PACK_INTQ_SCALE(0.06422830373048782f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.16732656955718994f),
    AI_PACK_INTQ_ZP(-2)))

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
    AI_PACK_INTQ_SCALE(0.012844836339354515f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.19551235437393188f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011601078324019909f),
    AI_PACK_INTQ_ZP(41)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007719043642282486f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00690431660041213f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005782745312899351f),
    AI_PACK_INTQ_ZP(-46)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00698438985273242f),
    AI_PACK_INTQ_ZP(-16)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004787334240972996f),
    AI_PACK_INTQ_ZP(-82)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003290045540779829f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009717163629829884f, 0.017132865265011787f, 0.009217205457389355f, 0.010742856189608574f, 0.004043130669742823f, 0.018977051600813866f, 0.008242928422987461f, 0.003018367802724242f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025325873866677284f, 0.002683495171368122f, 0.0027938364073634148f, 0.0014908541925251484f, 0.0022451356053352356f, 0.0030921176075935364f, 0.0018503183964639902f, 0.0023680247832089663f, 0.0037690745666623116f, 0.002713602501899004f, 0.0020705286879092455f, 0.0028675319626927376f, 0.0062127928249537945f, 0.0020219117868691683f, 0.0014986601890996099f, 0.0024880971759557724f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00354625447653234f, 0.004197823815047741f, 0.004470726475119591f, 0.004683883395045996f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00032741506583988667f, 0.0006634205346927047f, 0.0003395131789147854f, 0.0007723489543423057f, 0.0007319460855796933f, 0.0007970805163495243f, 0.0008226806530728936f, 0.0007318704738281667f, 0.0016143579268828034f, 0.0007174285710789263f, 0.0005540476413443685f, 0.0007322854944504797f, 0.0008601899608038366f, 0.0008877541986294091f, 0.0008360827923752367f, 0.000845376227516681f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029331082478165627f, 0.0032154060900211334f, 0.0043787467293441296f, 0.003988923970609903f, 0.003427523421123624f, 0.003978579770773649f, 0.004249508026987314f, 0.0038537064101547003f, 0.0036863030400127172f, 0.003498087404295802f, 0.004708216525614262f, 0.00293537019751966f, 0.003645378863438964f, 0.003640303388237953f, 0.003804063657298684f, 0.003598137991502881f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008501491509377956f, 0.022172631695866585f, 0.02623305842280388f, 0.01823221892118454f, 0.027196437120437622f, 0.012603632174432278f, 0.016624843701720238f, 0.02644115500152111f),
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
    AI_PACK_INTQ_SCALE(0.0009752441546879709f, 0.0013636300573125482f, 0.002781711518764496f, 0.001527886837720871f, 0.001385814743116498f, 0.0014854255132377148f, 0.0009888397762551904f, 0.002098656725138426f, 0.0014614480314776301f, 0.0020516449585556984f, 0.001005028490908444f, 0.0012690216535702348f, 0.00157703657168895f, 0.0011923803249374032f, 0.0016894059954211116f, 0.001782946870662272f, 0.0010240634437650442f, 0.0026808269321918488f, 0.0012155979638919234f, 0.0011229022638872266f, 0.0023843722883611917f, 0.002165981102734804f, 0.001373938866890967f, 0.0009153434657491744f, 0.001710244338028133f, 0.0013176229549571872f, 0.002285895636305213f, 0.002024826593697071f, 0.0020216081757098436f, 0.0024342555552721024f, 0.0017605473985895514f, 0.0024585698265582323f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002965671243146062f, 0.0034276419319212437f, 0.003214699449017644f, 0.003197477664798498f, 0.0034507655072957277f, 0.0032255512196570635f, 0.0030982494354248047f, 0.002468372695147991f, 0.0030545725021511316f, 0.0032088779844343662f, 0.0030081539880484343f, 0.002927931258454919f, 0.003113082842901349f, 0.003100790549069643f, 0.003179058199748397f, 0.002979443408548832f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008687382563948631f, 0.005383433308452368f, 0.008550511673092842f, 0.004948452115058899f, 0.005101657006889582f, 0.005735205486416817f, 0.006167661398649216f, 0.008296415209770203f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001583258854225278f, 0.0015904376050457358f, 0.0015818525571376085f, 0.0011101214913651347f, 0.0015012697549536824f, 0.001429031603038311f, 0.0009195272577926517f, 0.0018220989732071757f, 0.0018205639207735658f, 0.002489411039277911f, 0.001350801787339151f, 0.0017030343879014254f, 0.0017678735312074423f, 0.0013754765968769789f, 0.0015317427460104227f, 0.0016057896427810192f, 0.0015644226223230362f, 0.0018849301850423217f, 0.0010255209635943174f, 0.0018083774484694004f, 0.001214351854287088f, 0.0013322924496605992f, 0.0010994571493938565f, 0.001551814959384501f, 0.002142316196113825f, 0.001263401354663074f, 0.0018144355854019523f, 0.001648588222451508f, 0.0015549140516668558f, 0.0018898166017606854f, 0.0011826811823993921f, 0.002306135604158044f, 0.0023277890868484974f, 0.001602838165126741f, 0.001367895514704287f, 0.0011540934210643172f, 0.000965430517680943f, 0.0018627410754561424f, 0.002137070754542947f, 0.0011796782491728663f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002453307621181011f, 0.002791754202917218f, 0.0033606409560889006f, 0.003089366713538766f, 0.0030785321723669767f, 0.003832017071545124f, 0.003014742396771908f, 0.0026603874284774065f, 0.0033313995227217674f, 0.0031858887523412704f, 0.002935976954177022f, 0.0028951580170542f, 0.002865799004212022f, 0.0035825285594910383f, 0.002862825756892562f, 0.0030396028887480497f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002710529137402773f, 0.002744235098361969f, 0.006857138127088547f, 0.0040322719141840935f, 0.0043181986548006535f, 0.0042548649944365025f, 0.004273438826203346f, 0.003329116851091385f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005478324834257364f, 0.002754801884293556f, 0.0024648888502269983f, 0.0020104499999433756f, 0.004112346097826958f, 0.001922881929203868f, 0.001977129839360714f, 0.0013525892281904817f, 0.0015076349955052137f, 0.0024292217567563057f, 0.0034143223892897367f, 0.003082919167354703f, 0.001758987084031105f, 0.005524288862943649f, 0.0019825852941721678f, 0.003713369369506836f, 0.002432946115732193f, 0.0031355933751910925f, 0.002462391508743167f, 0.003096695989370346f, 0.004811817780137062f, 0.0036902735009789467f, 0.0022334957029670477f, 0.004631732124835253f, 0.003721927059814334f, 0.0018590482650324702f, 0.0023207624908536673f, 0.0033057418186217546f, 0.0036212760023772717f, 0.0017669335938990116f, 0.002307618036866188f, 0.003314449219033122f, 0.0048091234639286995f, 0.004239596892148256f, 0.0024297635536640882f, 0.0021268168929964304f, 0.0022919357288628817f, 0.0018495795084163547f, 0.00352461077272892f, 0.0017761166673153639f, 0.002852086443454027f, 0.004379006568342447f, 0.0017638405552133918f, 0.002815116662532091f, 0.0017312598647549748f, 0.003019161755219102f, 0.0024399938993155956f, 0.003208097070455551f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003836244810372591f, 0.0035612983629107475f, 0.0023155291564762592f, 0.002339400816708803f, 0.0026780578773468733f, 0.0034893841948360205f, 0.0052565401419997215f, 0.007029929663985968f, 0.0069328173995018005f, 0.0022797402925789356f, 0.0031016054563224316f, 0.0021629799157381058f, 0.005026275757700205f, 0.0029728238005191088f, 0.00350350234657526f, 0.0017411973094567657f, 0.0032904900144785643f, 0.0015039019053801894f, 0.0080022057518363f, 0.002864315640181303f, 0.004726119805127382f, 0.002616510959342122f, 0.0016870555700734258f, 0.0015468333149328828f, 0.0016419043531641364f, 0.004405605606734753f, 0.003189305542036891f, 0.0039900741539895535f, 0.003856857307255268f, 0.01912911981344223f, 0.0033995083067566156f, 0.00168523914180696f, 0.002391920890659094f, 0.0020965191069990396f, 0.003366804216057062f, 0.00251455744728446f, 0.0021819574758410454f, 0.0028495455626398325f, 0.0037013469263911247f, 0.016458122059702873f, 0.005514365155249834f, 0.002248187083750963f, 0.0021435983944684267f, 0.0028943258803337812f, 0.005989612080156803f, 0.0018133445410057902f, 0.0026174415834248066f, 0.004005479160696268f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003042386844754219f, 0.0031492188572883606f, 0.002954134251922369f, 0.0028890175744891167f, 0.0030184416100382805f, 0.004227889236062765f, 0.0024443964939564466f, 0.0027639337349683046f, 0.00342906778678298f, 0.0037159896455705166f, 0.0037717479281127453f, 0.003111331956461072f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005847769789397717f, 0.0004674876690842211f, 0.000686529790982604f, 0.0006431448273360729f, 0.0005063961143605411f, 0.0005557602271437645f, 0.00048342469381168485f, 0.0004936894401907921f, 0.0005935706431046128f, 0.0005127399927005172f, 0.0004243382136337459f, 0.0005060496623627841f, 0.0006245033582672477f, 0.0006728230509907007f, 0.00046838540583848953f, 0.00043778406688943505f, 0.0005402708775363863f, 0.0006482115713879466f, 0.0006920901942066848f, 0.0005267589585855603f, 0.0009811499621719122f, 0.0005306696984916925f, 0.0005219876184128225f, 0.0005013406043872237f, 0.0004021732893306762f, 0.0004790427628904581f, 0.0004671385104302317f, 0.00045368215069174767f, 0.0006758729577995837f, 0.00048439286183565855f, 0.0005159955471754074f, 0.0007052291184663773f, 0.000668122956994921f, 0.0006680305232293904f, 0.0006455476977862418f, 0.000617538345977664f, 0.00044327162322588265f, 0.0005363999516703188f, 0.0007394897402264178f, 0.0005912421620450914f, 0.0006457585259340703f, 0.0005179340369068086f, 0.0004717618285212666f, 0.0005718560423702002f, 0.000491045881062746f, 0.0005504481960088015f, 0.00048655254067853093f, 0.0007446111994795501f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008999664336442947f, 0.008270456455647945f, 0.006463007070124149f, 0.006242125760763884f, 0.009515617042779922f, 0.006092785391956568f, 0.0060869804583489895f, 0.006306611932814121f, 0.009611323475837708f, 0.005875068716704845f, 0.010340094566345215f, 0.007895641028881073f, 0.008077001199126244f, 0.009050976485013962f, 0.009647599421441555f, 0.006614699028432369f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019044368527829647f, 0.004737896379083395f, 0.0043714651837944984f, 0.0031303793657571077f, 0.00329483300447464f, 0.003678834531456232f, 0.0023542519193142653f, 0.0019568789284676313f, 0.0023962114937603474f, 0.002496306551620364f, 0.0023856470361351967f, 0.002337540965527296f, 0.0026536346413195133f, 0.003254497656598687f, 0.0037447118666023016f, 0.0036270481068640947f, 0.004331508185714483f, 0.0027993328403681517f, 0.0027664194349199533f, 0.003421723609790206f, 0.003997465129941702f, 0.004215106833726168f, 0.004039750900119543f, 0.0024934185203164816f, 0.002137628151103854f, 0.002319415332749486f, 0.003432739758864045f, 0.004215415101498365f, 0.0033221894409507513f, 0.0033605091739445925f, 0.0023874796461313963f, 0.002079262398183346f, 0.0028762193396687508f, 0.002961917780339718f, 0.0022647238802164793f, 0.0019679339602589607f, 0.003613219829276204f, 0.0026779340114444494f, 0.003857741830870509f, 0.005155733786523342f, 0.0028513942379504442f, 0.00389625271782279f, 0.002997178351506591f, 0.0023446576669812202f, 0.0030182276386767626f, 0.0021105161868035793f, 0.0026122750714421272f, 0.0027095312252640724f, 0.002240249188616872f, 0.0024284233804792166f, 0.001629183767363429f, 0.003436267375946045f, 0.0038589765317738056f, 0.004151294007897377f, 0.0034973996225744486f, 0.0027365884743630886f, 0.0038004498928785324f, 0.004001792520284653f, 0.002576578874140978f, 0.002977285999804735f, 0.0021316485945135355f, 0.0023500360548496246f, 0.003569026943296194f, 0.003527723951265216f, 0.002728380262851715f, 0.0038256547413766384f, 0.0028776756953448057f, 0.0020322157070040703f, 0.0023795394226908684f, 0.002879755338653922f, 0.0032265533227473497f, 0.002594725228846073f, 0.002903664717450738f, 0.0032065315172076225f, 0.002819518093019724f, 0.004191944375634193f, 0.0033308540005236864f, 0.002796037122607231f, 0.0024377102963626385f, 0.0017495384672656655f, 0.003978789784014225f, 0.002997361356392503f, 0.0015469992067664862f, 0.001878026407212019f, 0.0032692733220756054f, 0.0038826405070722103f, 0.0017299929168075323f, 0.00315291341394186f, 0.002329678274691105f, 0.0018435805104672909f, 0.0016973592573776841f, 0.002858439926058054f, 0.0033298777416348457f, 0.0019090782152488828f, 0.00299761607311666f, 0.0031969163101166487f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001994313905015588f, 0.0028493753634393215f, 0.002664390252903104f, 0.002660750411450863f, 0.0030204833019524813f, 0.004741507116705179f, 0.004181649070233107f, 0.003940516617149115f, 0.003569598775357008f, 0.0018359754467383027f, 0.0029681550804525614f, 0.004323051776736975f, 0.004185256082564592f, 0.00672069052234292f, 0.0014180181315168738f, 0.002574561396613717f, 0.003501728642731905f, 0.004360278602689505f, 0.003541413228958845f, 0.0016841504257172346f, 0.003833454567939043f, 0.0028427010402083397f, 0.00636632926762104f, 0.0035251921508461237f, 0.0062579005025327206f, 0.0047709764912724495f, 0.004400382749736309f, 0.003030643332749605f, 0.0031147687695920467f, 0.004076769575476646f, 0.004137718118727207f, 0.0014292884152382612f, 0.003983053844422102f, 0.004249782767146826f, 0.004887267481535673f, 0.00695275142788887f, 0.002686440944671631f, 0.0034510025288909674f, 0.006195155903697014f, 0.004139987751841545f, 0.004920915234833956f, 0.0019484972581267357f, 0.003802554216235876f, 0.003923519980162382f, 0.0035764032509177923f, 0.001787985092960298f, 0.0024696195032447577f, 0.004123779479414225f, 0.004153785761445761f, 0.0028439396992325783f, 0.0032913689501583576f, 0.002840133151039481f, 0.0032574792858213186f, 0.0034674082417041063f, 0.0063394345343112946f, 0.0023847101256251335f, 0.003501548431813717f, 0.0033838017843663692f, 0.002218044362962246f, 0.0022497421596199274f, 0.001675933599472046f, 0.006366193760186434f, 0.003004490165039897f, 0.004157824441790581f, 0.0014928438467904925f, 0.0031600696966052055f, 0.003666788572445512f, 0.002094259951263666f, 0.00846135150641203f, 0.0037548725958913565f, 0.0031764619052410126f, 0.005652132909744978f, 0.0019532940350472927f, 0.00312556023709476f, 0.0021714752074331045f, 0.0024485262110829353f, 0.004689882975071669f, 0.0036156876012682915f, 0.007740202359855175f, 0.007976190187036991f, 0.00558376545086503f, 0.003711664117872715f, 0.004152162000536919f, 0.004732445348054171f, 0.004144397564232349f, 0.001609678496606648f, 0.0034230665769428015f, 0.00482566561549902f, 0.0038153466302901506f, 0.002656572964042425f, 0.0013189491583034396f, 0.003250132780522108f, 0.0021443250589072704f, 0.0035228030756115913f, 0.004996703937649727f, 0.0036624418571591377f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002018810948356986f, 0.002537194872274995f, 0.0017932694172486663f, 0.0018573971465229988f, 0.0020267795771360397f, 0.002718894509598613f, 0.0032242326997220516f, 0.0030862975399941206f, 0.0018684122478589416f, 0.002353701274842024f, 0.0027703410014510155f, 0.002917395904660225f, 0.0020778202451765537f, 0.00330261024646461f, 0.0028752067591995f, 0.00207923399284482f, 0.0019762497395277023f, 0.0026225901674479246f, 0.0026364498771727085f, 0.002238903194665909f, 0.002103994833305478f, 0.0025407765060663223f, 0.0026393458247184753f, 0.003946536686271429f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000513729639351368f, 0.0004249340854585171f, 0.0006635695463046432f, 0.0003772889031097293f, 0.0005147586925886571f, 0.0005878556985408068f, 0.00040296156657859683f, 0.00045528876944445074f, 0.0006745835999026895f, 0.0005497150705195963f, 0.0003322671982459724f, 0.000516326806973666f, 0.0003796561504714191f, 0.0005638726288452744f, 0.0004281299188733101f, 0.00035461518564261496f, 0.0005420147790573537f, 0.0005540637066587806f, 0.000395448092604056f, 0.00045670909457840025f, 0.00039990092045627534f, 0.0003532793198246509f, 0.0004121924575883895f, 0.0007167007424868643f, 0.0005114130326546729f, 0.0007949491846375167f, 0.0006085344939492643f, 0.00043168538832105696f, 0.00032343409839086235f, 0.0005437720101326704f, 0.00043145258678123355f, 0.0005524074658751488f, 0.00048740991041995585f, 0.0005079656839370728f, 0.0004045868990942836f, 0.0003895673726219684f, 0.0003546367515809834f, 0.0003781204577535391f, 0.0006061418098397553f, 0.000523501425050199f, 0.0006599095650017262f, 0.0005536780226975679f, 0.0003357509267516434f, 0.0007537215715274215f, 0.0004076543846167624f, 0.00045973481610417366f, 0.00045862983097322285f, 0.0004641844134312123f, 0.00045998627319931984f, 0.000521006528288126f, 0.00039540365105494857f, 0.00043550797272473574f, 0.0003973717102780938f, 0.0004088719142600894f, 0.00041716493433341384f, 0.00044131241156719625f, 0.0006186649552546442f, 0.00040974278817884624f, 0.0004691906797233969f, 0.000511312042362988f, 0.0005420126253738999f, 0.0004046117246616632f, 0.0005194583791308105f, 0.0005168808856979012f, 0.0005256690201349556f, 0.0004584111156873405f, 0.0005805636756122112f, 0.0004342850879766047f, 0.00040523623465560377f, 0.00046352067147381604f, 0.0004610855830833316f, 0.0004166540747974068f, 0.0005770185962319374f, 0.0005423862603493035f, 0.00036883357097394764f, 0.0005201525636948645f, 0.00044342121691443026f, 0.0006071978714317083f, 0.00041334074921905994f, 0.000531145604327321f, 0.000424380210461095f, 0.0004793157277163118f, 0.0006085566128604114f, 0.00041056214831769466f, 0.0004116848867852241f, 0.000736297108232975f, 0.00046386916073970497f, 0.0004052656586281955f, 0.0004733775567729026f, 0.0003821409773081541f, 0.0003824292216449976f, 0.0005663177580572665f, 0.0006701299571432173f, 0.0005917813396081328f, 0.0005400264635682106f, 0.0004664096049964428f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0042779091745615005f, 0.0030398028902709484f, 0.005428655073046684f, 0.006114581599831581f, 0.0067948694340884686f, 0.005597952287644148f, 0.00549920042976737f, 0.004542389884591103f, 0.005678085144609213f, 0.00651720492169261f, 0.004718432668596506f, 0.00425236951559782f, 0.005002703983336687f, 0.004213249776512384f, 0.006565486546605825f, 0.005856846924871206f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016309416387230158f, 0.001041873823851347f, 0.0018712120363488793f, 0.0018149857642129064f, 0.0021760305389761925f, 0.0017462697578594089f, 0.0034563506487756968f, 0.0018254183232784271f, 0.0016906165983527899f, 0.002655520336702466f, 0.001320013077929616f, 0.0023059616796672344f, 0.002159325871616602f, 0.001188172958791256f, 0.002286358503624797f, 0.0023248745128512383f, 0.0017528358148410916f, 0.0016463987994939089f, 0.0022453691344708204f, 0.0017211685189977288f, 0.0023868519347161055f, 0.0023720550816506147f, 0.0010226769372820854f, 0.0020025235135108232f, 0.0018020059214904904f, 0.002833219012245536f, 0.0024236245080828667f, 0.002059236401692033f, 0.001881861942820251f, 0.0017208452336490154f, 0.0026169707998633385f, 0.0017539765685796738f, 0.002633171621710062f, 0.0017958151875063777f, 0.0012947202194482088f, 0.002395099028944969f, 0.0014734334545210004f, 0.002354299882426858f, 0.0019089379347860813f, 0.0023296785075217485f, 0.0015032601077109575f, 0.002252904698252678f, 0.002034988487139344f, 0.0028018197044730186f, 0.0012612160062417388f, 0.001724079716950655f, 0.0027506817132234573f, 0.0013498226180672646f, 0.0020600901916623116f, 0.0018793625058606267f, 0.002440469339489937f, 0.0018363525159657001f, 0.002465951256453991f, 0.001459912396967411f, 0.002225611126050353f, 0.0027892268262803555f, 0.0024425142910331488f, 0.0013767860364168882f, 0.0020854221656918526f, 0.0032744253985583782f, 0.001750377006828785f, 0.0020179629791527987f, 0.0016951261786743999f, 0.0025916029699146748f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033296847250312567f, 0.006825148593634367f, 0.0029296642169356346f, 0.002568327123299241f, 0.002778266556560993f, 0.0024947335477918386f, 0.0020635409746319056f, 0.00723034655675292f, 0.0037536299787461758f, 0.0038665751926600933f, 0.0026866246480494738f, 0.004429978784173727f, 0.0024145825300365686f, 0.005634789355099201f, 0.0020333146676421165f, 0.00204343325458467f, 0.0056984918192029f, 0.005847115069627762f, 0.003807285102084279f, 0.005280561279505491f, 0.0051900953985750675f, 0.0028857553843408823f, 0.0030101952143013477f, 0.0044893804006278515f, 0.0028417909052222967f, 0.0043739392422139645f, 0.003951030783355236f, 0.0033784143161028624f, 0.0028160251677036285f, 0.002118565607815981f, 0.003048668382689357f, 0.00226781633682549f, 0.0031841867603361607f, 0.005449378862977028f, 0.006380212027579546f, 0.007517179474234581f, 0.0020311621483415365f, 0.003997077699750662f, 0.002671022666618228f, 0.0032674327958375216f, 0.0031716623343527317f, 0.0034615600015968084f, 0.005787418223917484f, 0.002206918317824602f, 0.003044291166588664f, 0.004706026054918766f, 0.004155803006142378f, 0.0030981835443526506f, 0.0030186984222382307f, 0.0034246649593114853f, 0.003292771987617016f, 0.0016456631710752845f, 0.002236663829535246f, 0.007836615666747093f, 0.0031760414130985737f, 0.005439047701656818f, 0.0025966342072933912f, 0.0041696010157465935f, 0.0025822443421930075f, 0.003846439765766263f, 0.005923446733504534f, 0.0035452311858534813f, 0.004841482266783714f, 0.0025549137499183416f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033700126223266125f, 0.0025223151315003633f, 0.0031481157056987286f, 0.003662210190668702f, 0.0033241400960832834f, 0.0036498126573860645f, 0.0024146325886249542f, 0.00296768662519753f, 0.003419408807530999f, 0.00347551959566772f, 0.0029414340388029814f, 0.002757425419986248f, 0.0029244606848806143f, 0.003716718405485153f, 0.0038007055409252644f, 0.002506544580683112f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008117168908938766f, 0.0007103245006874204f, 0.0007158504449762404f, 0.000529032782651484f, 0.0004999886150471866f, 0.0005377187626436353f, 0.0004849120450671762f, 0.0005139217828400433f, 0.0005443876725621521f, 0.0005459330859594047f, 0.0005561188445426524f, 0.0005675813881680369f, 0.0008923237328417599f, 0.0005167823983356357f, 0.0005766978720203042f, 0.0006035146070644259f, 0.000514258979819715f, 0.00046953579294495285f, 0.0006004797760397196f, 0.000633553194347769f, 0.00037548356340266764f, 0.0005519468686543405f, 0.0006236766930669546f, 0.0007210351177491248f, 0.0005703197093680501f, 0.0005294228903949261f, 0.0005676604341715574f, 0.0006199371418915689f, 0.00045912322821095586f, 0.0007129902369342744f, 0.0005898153758607805f, 0.00043872123933397233f, 0.00048684614012017846f, 0.0005476885125972331f, 0.0007173329358920455f, 0.0005222304025664926f, 0.0006143673090264201f, 0.0007627624436281621f, 0.0005234546260908246f, 0.00035508250584825873f, 0.0005404860712587833f, 0.000990486703813076f, 0.0005473606870509684f, 0.00043626350816339254f, 0.0010272808140143752f, 0.0005910266772843897f, 0.0004866961680818349f, 0.0004315639962442219f, 0.0004545627161860466f, 0.0007330103544518352f, 0.000545692746527493f, 0.0006222556112334132f, 0.0004401241894811392f, 0.00071660679532215f, 0.0008204909390769899f, 0.0006086727371439338f, 0.0004721546429209411f, 0.00041949303704313934f, 0.0007272064685821533f, 0.00057184137403965f, 0.0005669585661962628f, 0.0006397039978764951f, 0.0005625422345474362f, 0.0007286847103387117f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003799659898504615f, 0.0059337858110666275f, 0.0039961370639503f, 0.003169920528307557f, 0.005427180323749781f, 0.0037033988628536463f, 0.0072314622811973095f, 0.007356158457696438f, 0.005093398969620466f, 0.006336860824376345f, 0.005972648039460182f, 0.005345473997294903f, 0.00412983912974596f, 0.004342861473560333f, 0.007648436818271875f, 0.005322485696524382f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013597854413092136f, 0.0010901204077526927f, 0.0014637790154665709f, 0.0011546327732503414f, 0.002388149732723832f, 0.0007684562588110566f, 0.001822441234253347f, 0.0020264519844204187f, 0.0011290631955489516f, 0.0009637277107685804f, 0.001195457181893289f, 0.0008483951678499579f, 0.0015399603871628642f, 0.0015868744812905788f, 0.0018337329383939505f, 0.0015585480723530054f, 0.0012978753075003624f, 0.001780758029781282f, 0.0012796606170013547f, 0.0011203972389921546f, 0.0016010573599487543f, 0.0019062856445088983f, 0.0010005029616877437f, 0.0019469034159556031f, 0.0027017754036933184f, 0.0012083735782653093f, 0.0022844786290079355f, 0.0012392204953357577f, 0.0014851472806185484f, 0.001997789368033409f, 0.002328393515199423f, 0.0010901442728936672f, 0.0017450368031859398f, 0.0012392542557790875f, 0.002163117751479149f, 0.0012612994760274887f, 0.0011847076239064336f, 0.0011177200358361006f, 0.0012974618002772331f, 0.0020277991425246f, 0.0009829960763454437f, 0.0015669529093429446f, 0.001592756132595241f, 0.001037921174429357f, 0.0017856730846688151f, 0.0012660895008593798f, 0.001159207196906209f, 0.001063869334757328f, 0.0019937034230679274f, 0.0014938045060262084f, 0.001543716760352254f, 0.0008024777052924037f, 0.0016138196224346757f, 0.00157744693569839f, 0.0015842324355617166f, 0.0012070854427292943f, 0.0014774954179301858f, 0.00141431693919003f, 0.0010044430382549763f, 0.0022058794274926186f, 0.00145482097286731f, 0.0017983578145503998f, 0.0014406611444428563f, 0.0008421572856605053f, 0.0009417039109393954f, 0.0019215946085751057f, 0.0014034041669219732f, 0.0014500607503578067f, 0.0017355429008603096f, 0.001415720791555941f, 0.0016942311776801944f, 0.0017867368878796697f, 0.0012646677205339074f, 0.0018481574952602386f, 0.0017731338739395142f, 0.002107871463522315f, 0.0022829945664852858f, 0.0011536150705069304f, 0.001495077507570386f, 0.0018894876120612025f, 0.001704819849692285f, 0.001691196346655488f, 0.00166713644284755f, 0.0013942595105618238f, 0.0016076049068942666f, 0.0018316118512302637f, 0.0013417346635833383f, 0.0020344844087958336f, 0.001801318023353815f, 0.0014044252457097173f, 0.0020293951965868473f, 0.0021460899151861668f, 0.0020799883641302586f, 0.0019008127273991704f, 0.001655449508689344f, 0.0013143684482201934f, 0.0014219023287296295f, 0.0017106860177591443f, 0.0011731571285054088f, 0.0011283664498478174f, 0.0021399955730885267f, 0.0026414489839226007f, 0.0009175010491162539f, 0.0012869843048974872f, 0.0016363196773454547f, 0.0012953535187989473f, 0.0010405636858195066f, 0.001750257215462625f, 0.0012074292171746492f, 0.0016748298658058047f, 0.0020786391105502844f, 0.001230455469340086f, 0.0016299218405038118f, 0.0022800180595368147f, 0.0022270872723311186f, 0.0018712019082158804f, 0.0016789727378636599f, 0.0025558324996382f, 0.0016300221905112267f, 0.0015342424158006907f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003190413350239396f, 0.005300041288137436f, 0.003373010316863656f, 0.00616971030831337f, 0.004375147167593241f, 0.0024307186249643564f, 0.004239625297486782f, 0.003179237712174654f, 0.004174796864390373f, 0.004347565118223429f, 0.004787001293152571f, 0.0014439902734011412f, 0.0033694349694997072f, 0.003929012455046177f, 0.0032041273079812527f, 0.00250888429582119f, 0.0029224667232483625f, 0.004420838784426451f, 0.003310110419988632f, 0.002449997467920184f, 0.0030516681727021933f, 0.003423541085794568f, 0.003556140000000596f, 0.004457153379917145f, 0.0027713284362107515f, 0.003249845700338483f, 0.0027990699745714664f, 0.002142190933227539f, 0.0029374153818935156f, 0.0033776836935430765f, 0.0037024151533842087f, 0.0019785871263593435f, 0.0022829219233244658f, 0.00461624376475811f, 0.0024029326159507036f, 0.003296844894066453f, 0.002552647842094302f, 0.004071525763720274f, 0.0040483055636286736f, 0.0028387547936290503f, 0.001667278353124857f, 0.0041108806617558f, 0.003391668666154146f, 0.0033476140815764666f, 0.0034478523302823305f, 0.002109064720571041f, 0.004823998082429171f, 0.004782266449183226f, 0.003889089683070779f, 0.002262955764308572f, 0.0031377284321933985f, 0.0019996671471744776f, 0.004107168409973383f, 0.0027734837494790554f, 0.0017457533394917846f, 0.004266524221748114f, 0.005208707880228758f, 0.0025943894870579243f, 0.006178248208016157f, 0.0024012348148971796f, 0.0025654430501163006f, 0.004408285953104496f, 0.0034611013252288103f, 0.002793220104649663f, 0.002065956126898527f, 0.0019385345513001084f, 0.0026476893108338118f, 0.0024952769745141268f, 0.0050864932127296925f, 0.004551934543997049f, 0.004750188440084457f, 0.0024656280875205994f, 0.0021011335775256157f, 0.004854504484683275f, 0.002776172012090683f, 0.0025859393645077944f, 0.002355935052037239f, 0.0033794958144426346f, 0.003387248143553734f, 0.004794445354491472f, 0.0029056346975266933f, 0.002752874279394746f, 0.004178440198302269f, 0.002479845192283392f, 0.006450347136706114f, 0.0038097293581813574f, 0.004677718039602041f, 0.002295552520081401f, 0.0011098561808466911f, 0.00233207899145782f, 0.0034481859765946865f, 0.0035392085555940866f, 0.003119818866252899f, 0.007462465204298496f, 0.0023573976941406727f, 0.005473915487527847f, 0.004439815878868103f, 0.005288104061037302f, 0.0030176376458257437f, 0.002952284412458539f, 0.0032746107317507267f, 0.0020313875284045935f, 0.0022832080721855164f, 0.0022109707351773977f, 0.0037331790663301945f, 0.003525265259668231f, 0.004256829619407654f, 0.00408399011939764f, 0.0017701252363622189f, 0.004319295287132263f, 0.003958742134273052f, 0.002360032871365547f, 0.0025338472332805395f, 0.0028224436100572348f, 0.003761822823435068f, 0.0019737575203180313f, 0.004339692648500204f, 0.003473876276984811f, 0.0026580754201859236f, 0.002253814833238721f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001893813838250935f, 0.002670431509613991f, 0.0017487064469605684f, 0.0025055173318833113f, 0.0020597768016159534f, 0.0016844995552673936f, 0.00303469505161047f, 0.0018725889967754483f, 0.0017313353018835187f, 0.0018082790775224566f, 0.0030341409146785736f, 0.0031382404267787933f, 0.0033963092137128115f, 0.0029317501466721296f, 0.0024498137645423412f, 0.002342851599678397f, 0.002902123611420393f, 0.0026235487312078476f, 0.0020245749037712812f, 0.0028622515965253115f, 0.0036938900593668222f, 0.0018044618191197515f, 0.0027334082406014204f, 0.002115481300279498f, 0.0030542658641934395f, 0.0016273927176371217f, 0.0018326083663851023f, 0.0017371572321280837f, 0.0034012107644230127f, 0.0027301094960421324f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004393987765070051f, 0.0005033879424445331f, 0.0004605251015163958f, 0.0003969678364228457f, 0.0007157644140534103f, 0.0005496005178429186f, 0.0004236089007463306f, 0.0004469333798624575f, 0.0005731273558922112f, 0.000500358990393579f, 0.0004625724977813661f, 0.0004213251522742212f, 0.0004308369243517518f, 0.0003800814156420529f, 0.0004688865737989545f, 0.00043166449177078903f, 0.0003494337433949113f, 0.00039652420673519373f, 0.0005330229178071022f, 0.00033922589500434697f, 0.0003799515834543854f, 0.0004462712095119059f, 0.0004738778807222843f, 0.0003514142008498311f, 0.0004583169356919825f, 0.0004586957220453769f, 0.00037064749631099403f, 0.00035662029404193163f, 0.000399168289732188f, 0.0004473321314435452f, 0.0005367454723455012f, 0.0006255832850001752f, 0.00040185029502026737f, 0.0003804559528362006f, 0.0005515878438018262f, 0.00047447753604501486f, 0.00043896338320337236f, 0.0005718814209103584f, 0.0003248027933295816f, 0.0004910171846859157f, 0.00039132958045229316f, 0.00033685803646221757f, 0.00039882867713458836f, 0.00042590411612764f, 0.0005879725213162601f, 0.0003465136978775263f, 0.0005585299804806709f, 0.000646185886580497f, 0.00035575631773099303f, 0.000487363402498886f, 0.0003381080168765038f, 0.0003386905009392649f, 0.00034828856587409973f, 0.0003843173326458782f, 0.0005859670345671475f, 0.0005638829316012561f, 0.0004415666626300663f, 0.0005000756355002522f, 0.0006721599493175745f, 0.0003986929659731686f, 0.00036782436654902995f, 0.00042450506589375436f, 0.0007321698358282447f, 0.0004245861782692373f, 0.000379500153940171f, 0.00037222570972517133f, 0.0005080694681964815f, 0.00043455007835291326f, 0.00034083524951711297f, 0.0003920099406968802f, 0.0005535179516300559f, 0.0004936641780659556f, 0.0003527639200910926f, 0.0005931374616920948f, 0.0004658640827983618f, 0.0003886309277731925f, 0.00035598731483332813f, 0.00044832381536252797f, 0.00042981322621926665f, 0.0003645684919320047f, 0.00040326296584680676f, 0.00047226459719240665f, 0.000842547626234591f, 0.00040991607238538563f, 0.000492403341922909f, 0.0003099218010902405f, 0.0006731614703312516f, 0.0006682632956653833f, 0.00035256435512565076f, 0.0003273255715612322f, 0.00030693397275172174f, 0.00047411135165020823f, 0.0004951605806127191f, 0.00031097300234250724f, 0.00047549832379445434f, 0.00043557805474847555f, 0.0004033174191135913f, 0.0004306740593165159f, 0.0004165346035733819f, 0.000423425663029775f, 0.0004290388314984739f, 0.00045612140092998743f, 0.00036317482590675354f, 0.0005121552967466414f, 0.0005236674332991242f, 0.00040677821380086243f, 0.0005103626754134893f, 0.0004925405373796821f, 0.00044774028356187046f, 0.0004483743687160313f, 0.0004428488027770072f, 0.0003654507454484701f, 0.0004102941893506795f, 0.0004649286565836519f, 0.0004422958882059902f, 0.00036937888944521546f, 0.00039509765338152647f, 0.00047991651808843017f, 0.0003639826027210802f, 0.0005009095766581595f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004390818066895008f, 0.0033292286098003387f, 0.003339794697239995f, 0.00427004462108016f, 0.0048798127099871635f, 0.005428928881883621f, 0.004013773985207081f, 0.007017134688794613f, 0.002839843975380063f, 0.0031779655255377293f, 0.001976656261831522f, 0.002849181415513158f, 0.003261010395362973f, 0.003966707270592451f, 0.00293221534229815f, 0.005226948764175177f, 0.0019488403340801597f, 0.0029367904644459486f, 0.0022045529913157225f, 0.0032013256568461657f, 0.0024404621217399836f, 0.0032259917352348566f, 0.003798490157350898f, 0.004559705499559641f, 0.003556495299562812f, 0.004946589469909668f, 0.005313677713274956f, 0.002457441994920373f, 0.005342873279005289f, 0.002412572270259261f, 0.0035898226778954268f, 0.00275624543428421f, 0.003988065291196108f, 0.0033148950897157192f, 0.004381343722343445f, 0.005332904867827892f, 0.0027069237548857927f, 0.003261436242610216f, 0.003347913734614849f, 0.0026224348694086075f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010366947390139103f, 0.0028042560443282127f, 0.0013896794989705086f, 0.00182706443592906f, 0.0009310079040005803f, 0.001717183506116271f, 0.0011969443876296282f, 0.0016331641236320138f, 0.00302342907525599f, 0.0011346781393513083f, 0.0014821088407188654f, 0.0018213973380625248f, 0.001039711176417768f, 0.001041680690832436f, 0.0014038606313988566f, 0.001113835838623345f, 0.0028095757588744164f, 0.0017211597878485918f, 0.0006751970504410565f, 0.0012471700320020318f, 0.0022833547554910183f, 0.0012609513942152262f, 0.0010451246052980423f, 0.0020961053669452667f, 0.0014997076941654086f, 0.0013839546591043472f, 0.0010999318910762668f, 0.0022758073173463345f, 0.0014498806558549404f, 0.0019459085306152701f, 0.0024046499747782946f, 0.0012900159927085042f, 0.0013862908817827702f, 0.0012031984515488148f, 0.002011141274124384f, 0.0010990028968080878f, 0.001211270340718329f, 0.0020907316356897354f, 0.0014675294514745474f, 0.0014158864505589008f, 0.0018043851014226675f, 0.00132179562933743f, 0.0021154400892555714f, 0.0009912210516631603f, 0.00074243254493922f, 0.0024555025156587362f, 0.0016705805901437998f, 0.0017188882920891047f, 0.0013043534709140658f, 0.0013538047205656767f, 0.0013602623948827386f, 0.0007951786974444985f, 0.0021583843044936657f, 0.0015155075816437602f, 0.0006793296197429299f, 0.00122194888535887f, 0.0016929805278778076f, 0.0011925350409001112f, 0.001147652044892311f, 0.0012435077223926783f, 0.0008421986713074148f, 0.0017546176677569747f, 0.002001887420192361f, 0.001364361378364265f, 0.001698919921182096f, 0.0012470980873331428f, 0.0014018708607181907f, 0.0012251579901203513f, 0.0008978988626040518f, 0.002111810725182295f, 0.0008921691915020347f, 0.0012781813275068998f, 0.001999767031520605f, 0.002625033026561141f, 0.0011037002550438046f, 0.0017872563330456614f, 0.0016637331573292613f, 0.001732031349092722f, 0.0024377871304750443f, 0.0017277897568419576f, 0.001239948091097176f, 0.001197765115648508f, 0.0016581813106313348f, 0.0013995750341564417f, 0.0013465674128383398f, 0.00135099608451128f, 0.001778768957592547f, 0.0010822364129126072f, 0.002194215077906847f, 0.0007906914688646793f, 0.001570999389514327f, 0.0017241894965991378f, 0.0011154362000524998f, 0.0008675029966980219f, 0.0025797972921282053f, 0.0013836317230015993f, 0.0013910598354414105f, 0.0009134408901445568f, 0.0018772216280922294f, 0.0014621233567595482f, 0.0017226154450327158f, 0.002013151068240404f, 0.0014839371433481574f, 0.0011187369236722589f, 0.003130170051008463f, 0.0013048031833022833f, 0.003072942141443491f, 0.0012701046653091908f, 0.0012875163229182363f, 0.0015948303043842316f, 0.0019681318663060665f, 0.0011402162490412593f, 0.0008861404494382441f, 0.0012246404075995088f, 0.0018504711333662271f, 0.0011418502544984221f, 0.0014995425008237362f, 0.002639907179400325f, 0.001189709990285337f, 0.001183200511150062f, 0.0016409221570938826f, 0.0025379934813827276f, 0.0015244585229083896f, 0.0011186570627614856f, 0.0015823289286345243f, 0.0021744209807366133f, 0.0016868264647200704f, 0.0013144626282155514f, 0.0013430204708129168f, 0.0016360034933313727f, 0.0013586679706349969f, 0.0011907636653631926f, 0.0018306783167645335f, 0.0010174198541790247f, 0.0011389267165213823f, 0.0015671472065150738f, 0.002571473829448223f, 0.0013210959732532501f, 0.0018555690767243505f, 0.0012715107295662165f, 0.0017532939091324806f, 0.0012400286504998803f, 0.0012566456571221352f, 0.0018087588250637054f, 0.0013133303727954626f, 0.0017277683364227414f, 0.0015464023454114795f, 0.0016585671110078692f, 0.0011727066012099385f, 0.0017891948809847236f, 0.0017263334011659026f, 0.0016834838315844536f, 0.0014758366160094738f, 0.0012078002328053117f, 0.0015722387470304966f, 0.0008528901380486786f, 0.0018741365056484938f, 0.001195446471683681f, 0.0023590526543557644f, 0.002072499366477132f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024427103344351053f, 0.002466181991621852f, 0.005640134215354919f, 0.0031073116697371006f, 0.007674402091652155f, 0.002900608815252781f, 0.0027006345335394144f, 0.0052906908094882965f, 0.0034405523911118507f, 0.002732804510742426f, 0.007177689578384161f, 0.002335952827706933f, 0.0025485109072178602f, 0.003712903242558241f, 0.003775920020416379f, 0.0020320110488682985f, 0.0026511256583034992f, 0.0018815280636772513f, 0.0042878249660134315f, 0.003387776203453541f, 0.002916267141699791f, 0.004168981220573187f, 0.003423083806410432f, 0.00338164740242064f, 0.0064345174469053745f, 0.0025822140742093325f, 0.0033463258296251297f, 0.003759506158530712f, 0.0029409013222903013f, 0.0061445035971701145f, 0.0034638734068721533f, 0.004914987366646528f, 0.007185662630945444f, 0.005815976765006781f, 0.002935928525403142f, 0.003020827192813158f, 0.004540601745247841f, 0.004185090772807598f, 0.0030922931618988514f, 0.004440770484507084f, 0.007003081031143665f, 0.0019763910677284002f, 0.0031366434413939714f, 0.002722742734476924f, 0.004427052102982998f, 0.0028443934861570597f, 0.0054383124224841595f, 0.004766752012073994f, 0.00263381190598011f, 0.0037933692801743746f, 0.00380574818700552f, 0.004453161731362343f, 0.0036587996874004602f, 0.006027212832123041f, 0.0031348569318652153f, 0.0015017075929790735f, 0.002133376896381378f, 0.004729764070361853f, 0.004128627013415098f, 0.0035967647563666105f, 0.005965541582554579f, 0.0057210177183151245f, 0.003347244579344988f, 0.005954256281256676f, 0.0035086749121546745f, 0.00419395649805665f, 0.002515183761715889f, 0.008208549581468105f, 0.0023476541973650455f, 0.0027582631446421146f, 0.005252794362604618f, 0.009188991971313953f, 0.0019407715881243348f, 0.002152885077521205f, 0.003338612150400877f, 0.004431677050888538f, 0.00555240735411644f, 0.0035600222181528807f, 0.0018390583572909236f, 0.007646398153156042f, 0.008521424606442451f, 0.0027538274880498648f, 0.006019138731062412f, 0.0029088484589010477f, 0.0018392259953543544f, 0.0034460164606571198f, 0.0026535377837717533f, 0.008015137165784836f, 0.002352394862100482f, 0.0032899107318371534f, 0.003685372183099389f, 0.0034168800339102745f, 0.005224547814577818f, 0.001928352634422481f, 0.004588227719068527f, 0.002450379775837064f, 0.006633857265114784f, 0.0035660879220813513f, 0.003537986660376191f, 0.0026867748238146305f, 0.010330061428248882f, 0.0037720135878771544f, 0.005250872112810612f, 0.00258271349593997f, 0.0055710128508508205f, 0.0024577409494668245f, 0.0062975515611469746f, 0.00504127936437726f, 0.00567942950874567f, 0.0046416353434324265f, 0.005088315811008215f, 0.006883613765239716f, 0.0045498148538172245f, 0.002042035572230816f, 0.0034556344617158175f, 0.0038925742264837027f, 0.004400213249027729f, 0.0021589247044175863f, 0.0038845338858664036f, 0.004466858226805925f, 0.0022053364664316177f, 0.00464019225910306f, 0.0024729284923523664f, 0.003753512632101774f, 0.00773475831374526f, 0.002293387893587351f, 0.0022093658335506916f, 0.006486885249614716f, 0.004730874672532082f, 0.0027344650588929653f, 0.003413799684494734f, 0.003468387294560671f, 0.006371302995830774f, 0.005865737795829773f, 0.007661700248718262f, 0.008471113629639149f, 0.0048517645336687565f, 0.004649962764233351f, 0.0031959356274455786f, 0.0024825534783303738f, 0.0034109409898519516f, 0.004944841377437115f, 0.007385678123682737f, 0.003939750604331493f, 0.002406231127679348f, 0.00449736462906003f, 0.002319903811439872f, 0.0038213422521948814f, 0.0023627604823559523f, 0.004620289895683527f, 0.004213172476738691f, 0.0029846394900232553f, 0.0029291799291968346f, 0.008772091940045357f, 0.005282518453896046f, 0.0024941195733845234f, 0.003739092033356428f, 0.0018425204325467348f, 0.004659645725041628f, 0.0060418108478188515f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_59_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016583059914410114f, 0.001703957561403513f, 0.002030392875894904f, 0.002255743369460106f, 0.0018475913675501943f, 0.0015684119425714016f, 0.00150517956353724f, 0.0016192832263186574f, 0.0022021576296538115f, 0.0014650843804702163f, 0.0027370706666260958f, 0.001895151799544692f, 0.0016648395685479045f, 0.0020775983575731516f, 0.0021538580767810345f, 0.0023952380288392305f, 0.001519015058875084f, 0.0015536503633484244f, 0.0024712285958230495f, 0.002221775706857443f, 0.0017284976784139872f, 0.0015971726970747113f, 0.001610561041161418f, 0.0016220613615587354f, 0.001492142560891807f, 0.0016520884819328785f, 0.001879048882983625f, 0.0015794934006407857f, 0.0020479231607168913f, 0.0015684597892686725f, 0.0018360470421612263f, 0.0014689676463603973f, 0.002995941322296858f, 0.0015120337484404445f, 0.002345302142202854f, 0.0027819988317787647f, 0.0021175972651690245f, 0.0021502904128283262f, 0.0028084588702768087f, 0.0026125414296984673f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 160,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0003193059819750488f, 0.00044837905443273485f, 0.00042254553409293294f, 0.00031061467598192394f, 0.0003220758226234466f, 0.0003927560173906386f, 0.0002695308066904545f, 0.00037630004226230085f, 0.00032983400160446763f, 0.0003285022103227675f, 0.00039703265065327287f, 0.00035922956885769963f, 0.000281272194115445f, 0.0003146722156088799f, 0.0003190733550582081f, 0.00031008495716378093f, 0.0003980844921898097f, 0.00045099228736944497f, 0.00030903349397704005f, 0.00042104636668227613f, 0.0005055951769463718f, 0.0003693084872793406f, 0.00029690246446989477f, 0.000309066817862913f, 0.0003991335688624531f, 0.00027992590912617743f, 0.0004743453464470804f, 0.00032389326952397823f, 0.0006440299330279231f, 0.00042787945130839944f, 0.0003318926610518247f, 0.0004639339167624712f, 0.0003319854149594903f, 0.00039331885636784136f, 0.00032670851214788854f, 0.000348508678143844f, 0.0003586066886782646f, 0.0004280801513232291f, 0.00032506068237125874f, 0.00034181290538981557f, 0.0003563326026778668f, 0.0002713525900617242f, 0.00041053644963540137f, 0.00035217154072597623f, 0.00039328105049207807f, 0.0004106727719772607f, 0.00043734730570577085f, 0.0003774113720282912f, 0.00031106738606467843f, 0.00043918893788941205f, 0.00030367402359843254f, 0.00036459381226450205f, 0.0003248011344112456f, 0.00039711882709525526f, 0.0003080507449340075f, 0.0002962407888844609f, 0.0003627612313721329f, 0.0003366501769050956f, 0.0003850760404020548f, 0.00029203551821410656f, 0.0002833601029124111f, 0.00034403635072521865f, 0.00031847486388869584f, 0.00037826254265382886f, 0.00043432682286947966f, 0.0003028790815733373f, 0.0003086547367274761f, 0.0004041484498884529f, 0.00031000160379335284f, 0.00035704034962691367f, 0.00025976088363677263f, 0.00040866798372007906f, 0.0004670678754337132f, 0.00037356920074671507f, 0.00031802442390471697f, 0.0003018270945176482f, 0.0004927738918922842f, 0.0004048835253342986f, 0.0003620687348302454f, 0.00039579844451509416f, 0.00029383652145043015f, 0.00038811544072814286f, 0.00048258452443405986f, 0.0002568550407886505f, 0.00038831328856758773f, 0.0003214853350073099f, 0.0003613168082665652f, 0.00033681702916510403f, 0.0003793124051298946f, 0.00028780693537555635f, 0.00033237613388337195f, 0.0004088069836143404f, 0.00027987934299744666f, 0.00033149763476103544f, 0.00046269569429568946f, 0.00031786441104486585f, 0.0003611695137806237f, 0.0003284370177425444f, 0.00045242146006785333f, 0.0003251653688494116f, 0.0003582258359529078f, 0.0003449250652920455f, 0.00041368225356563926f, 0.00031665703863836825f, 0.00028956652386114f, 0.0002648805675562471f, 0.00040124624501913786f, 0.000446847960120067f, 0.0003473670221865177f, 0.00029822770738974214f, 0.00032388584804721177f, 0.0006150773260742426f, 0.0003173091681674123f, 0.00033983151661232114f, 0.00034184017567895353f, 0.0002674702845979482f, 0.00035053136525675654f, 0.0003344629076309502f, 0.0002560901630204171f, 0.00036619490128941834f, 0.0002935781376436353f, 0.0003685842966660857f, 0.0003343778953421861f, 0.00032445930992253125f, 0.000479329057270661f, 0.00038273658719845116f, 0.0003710830642376095f, 0.000419756950577721f, 0.0002979637065436691f, 0.00042034342186525464f, 0.0003093157720286399f, 0.0003055152774322778f, 0.0003378565888851881f, 0.00028924120124429464f, 0.0003277540672570467f, 0.0002788452839013189f, 0.000497686502058059f, 0.0005915177753195167f, 0.0003441270673647523f, 0.000357132958015427f, 0.0002915788209065795f, 0.00045058023533783853f, 0.00028708126046694815f, 0.0002842774847522378f, 0.0003963504859711975f, 0.0003996921004727483f, 0.0002909749746322632f, 0.0003729314776137471f, 0.0004583252302836627f, 0.00033560290466994047f, 0.00034057977609336376f, 0.000421813310822472f, 0.0002974105009343475f, 0.0004318235442042351f, 0.00044075233745388687f, 0.00036755987093783915f, 0.0003515837306622416f, 0.0003271589521318674f, 0.00043121917406097054f, 0.0005562378210015595f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017468916485086083f, 0.0024921130388975143f, 0.001329097431153059f, 0.0033286355901509523f, 0.001289306441321969f, 0.0020378923509269953f, 0.001357391127385199f, 0.004419810138642788f, 0.0033888500183820724f, 0.0010373045224696398f, 0.0013167776633054018f, 0.0012063186150044203f, 0.0015428451588377357f, 0.0024578801821917295f, 0.0012984647182747722f, 0.0027399766258895397f, 0.002958057215437293f, 0.0015889180358499289f, 0.001278967596590519f, 0.002821173518896103f, 0.0012815704103559256f, 0.003144885879009962f, 0.004391092341393232f, 0.0019239535322412848f, 0.0022257312666624784f, 0.0013002819614484906f, 0.0029674931429326534f, 0.0013993358006700873f, 0.0019911881536245346f, 0.0021597605664283037f, 0.0034989763516932726f, 0.002760800765827298f, 0.002083254512399435f, 0.0012757150689139962f, 0.0015654729213565588f, 0.0025908900424838066f, 0.0022564404644072056f, 0.001529054599814117f, 0.0022722145076841116f, 0.0028165923431515694f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018247597618028522f, 0.0019566365517675877f, 0.0008601389126852155f, 0.0012556612491607666f, 0.0009620327618904412f, 0.0007226353627629578f, 0.0009115193970501423f, 0.0005440754466690123f, 0.0022468706592917442f, 0.0013178117806091905f, 0.000843263347633183f, 0.0016223579877987504f, 0.0009126119548454881f, 0.0006419164128601551f, 0.0011528534814715385f, 0.0010240060510113835f, 0.0005356839392334223f, 0.0008050852338783443f, 0.0010046246461570263f, 0.0007005244842730463f, 0.0012897790875285864f, 0.000959038850851357f, 0.0007397020817734301f, 0.00112592289224267f, 0.001054992782883346f, 0.0011188143398612738f, 0.0007873002323321998f, 0.0012955110287293792f, 0.0011145814787596464f, 0.0009617210016585886f, 0.0011943388963118196f, 0.001385553739964962f, 0.0007219059043563902f, 0.000892572570592165f, 0.0010146263521164656f, 0.0007192628108896315f, 0.0009473366662859917f, 0.0012999854516237974f, 0.000916183867957443f, 0.0006510007078759372f, 0.000958928489126265f, 0.0008613301906734705f, 0.0007309577194973826f, 0.0006865285686217248f, 0.0007821650360710919f, 0.0005317329196259379f, 0.0016149678267538548f, 0.0009574781288392842f, 0.0011320021003484726f, 0.0006389031186699867f, 0.0006142985657788813f, 0.0013239519903436303f, 0.0005051360931247473f, 0.0015410325722768903f, 0.0010739165591076016f, 0.001152946730144322f, 0.0010756001574918628f, 0.0007247891626320779f, 0.0007069241255521774f, 0.0008961337152868509f, 0.0007804117631167173f, 0.0012396338861435652f, 0.0016286815516650677f, 0.0009420380229130387f, 0.0007354060071520507f, 0.0008314355509355664f, 0.0014577110996469855f, 0.000942582031711936f, 0.0012646634131669998f, 0.0008580127032473683f, 0.0019716985989362f, 0.0015947265783324838f, 0.0014091727789491415f, 0.000572255696170032f, 0.0006818380788899958f, 0.0008603251189924777f, 0.0015335921198129654f, 0.000759966904297471f, 0.001827409490942955f, 0.0012364169815555215f, 0.0014276561560109258f, 0.0012114502023905516f, 0.0008724170038476586f, 0.0017246814677491784f, 0.0014570034109055996f, 0.0009388109901919961f, 0.0013513807207345963f, 0.0014919888926669955f, 0.0011382317170500755f, 0.0013525404501706362f, 0.000973214628174901f, 0.0012085407506674528f, 0.0013181455433368683f, 0.0005325814709067345f, 0.0014828371349722147f, 0.0009109472157433629f, 0.0007106333505362272f, 0.0006736392388120294f, 0.0008459619130007923f, 0.0010221923002973199f, 0.0007474335143342614f, 0.0008721306803636253f, 0.0010838491143658757f, 0.0005880560493096709f, 0.0008900334942154586f, 0.0009245716501027346f, 0.00046379619743674994f, 0.0007691610953770578f, 0.0010953883174806833f, 0.002138805575668812f, 0.000837060040794313f, 0.001210078946314752f, 0.0017120464472100139f, 0.0019604782573878765f, 0.0010678879916667938f, 0.000679622171446681f, 0.0010559216607362032f, 0.0010099147912114859f, 0.0006294803461059928f, 0.0008499578107148409f, 0.0006662142113782465f, 0.001510745263658464f, 0.0007834903663024306f, 0.0006483398610725999f, 0.000853978970553726f, 0.001129773911088705f, 0.000720519048627466f, 0.0012815147638320923f, 0.0009434145758859813f, 0.0008004820556379855f, 0.0007695268141105771f, 0.0009305092389695346f, 0.0008252797415480018f, 0.0015823727007955313f, 0.0009448537603020668f, 0.001607126439921558f, 0.000816590734757483f, 0.0010987340938299894f, 0.0006351674674078822f, 0.0008209857041947544f, 0.001049993559718132f, 0.0017909978050738573f, 0.001120100961998105f, 0.0010439479956403375f, 0.0008785013924352825f, 0.0017922063125297427f, 0.0009262812091037631f, 0.000725683115888387f, 0.0010084856767207384f, 0.0015417460817843676f, 0.0007394659332931042f, 0.0010178438387811184f, 0.0008876285864971578f, 0.001283528981730342f, 0.0016272072680294514f, 0.0006922783795744181f, 0.0011971615022048354f, 0.000786521180998534f, 0.0008096974343061447f, 0.0011634237598627806f, 0.0011010462185367942f, 0.0010408250382170081f, 0.001191407791338861f, 0.0010508019477128983f, 0.0006907376227900386f, 0.0017394594615325332f, 0.0009027516352944076f, 0.0009542375919409096f, 0.0005322018405422568f, 0.0007298339041881263f, 0.0013720188289880753f, 0.0010573301697149873f, 0.0006491607055068016f, 0.0008500920957885683f, 0.0011201997986063361f, 0.0006835857057012618f, 0.0010700742714107037f, 0.001020596013404429f, 0.0010537328198552132f, 0.0008547263569198549f, 0.001069526420906186f, 0.0008225295459851623f, 0.0010160739766433835f, 0.000666772888507694f, 0.0012972526019439101f, 0.0015152492560446262f, 0.0013813393888995051f, 0.0012379925465211272f, 0.0005822408711537719f, 0.0021776529029011726f, 0.0007003396167419851f, 0.0010556337656453252f, 0.001462227082811296f, 0.0007394282729364932f, 0.0006114189745858312f, 0.0016146119451150298f, 0.0016945311799645424f, 0.0007519432110711932f, 0.0006308674928732216f, 0.001407031319104135f, 0.0006204668316058815f, 0.0011381448712199926f, 0.0009324663551524282f, 0.0008608728530816734f, 0.0007526383269578218f, 0.0008652416290715337f, 0.0010130670852959156f, 0.0009346715523861349f, 0.0009172498248517513f, 0.0006920048617757857f, 0.001073330407962203f, 0.0006553601124323905f, 0.0013437852030619979f, 0.0009439483401365578f, 0.0014233768451958895f, 0.0017320177285000682f, 0.0010087743867188692f, 0.0010789313819259405f, 0.0013910242123529315f, 0.00058435567189008f, 0.0014278035378083587f, 0.0007000495679676533f, 0.0012278275098651648f, 0.00161030946765095f, 0.0013735239626839757f, 0.0012512663379311562f, 0.0006903284229338169f, 0.0013853348791599274f, 0.001083029550500214f, 0.0008049688767641783f, 0.0012094647390767932f, 0.0006363245192915201f, 0.0009498888975940645f, 0.0011044105049222708f, 0.0008802040247246623f, 0.0009538910817354918f, 0.0009260814404115081f, 0.0010682754218578339f, 0.0008572842925786972f, 0.0009513603872619569f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004457483999431133f, 0.003620896255597472f, 0.0024378658272325993f, 0.0023701132740825415f, 0.0036352190654724836f, 0.0025211325846612453f, 0.002644249005243182f, 0.0018457112601026893f, 0.0023315376602113247f, 0.0037037034053355455f, 0.0021437276154756546f, 0.0051767658442258835f, 0.002282885368913412f, 0.0022738261613994837f, 0.001962181879207492f, 0.003390852129086852f, 0.0014820484211668372f, 0.011979750357568264f, 0.003516939701512456f, 0.003424399998039007f, 0.00581516046077013f, 0.002866539405658841f, 0.0040229386650025845f, 0.0016781709855422378f, 0.002126854145899415f, 0.006819902919232845f, 0.0029178643599152565f, 0.003762762760743499f, 0.005250370129942894f, 0.0038050836883485317f, 0.002880166517570615f, 0.0042600492015480995f, 0.005897144321352243f, 0.0031866326462477446f, 0.004276607651263475f, 0.008645749650895596f, 0.003132580081000924f, 0.0019215905340388417f, 0.0026446867268532515f, 0.0016515591414645314f, 0.0033761959057301283f, 0.004294346086680889f, 0.001944125397130847f, 0.0035422814544290304f, 0.0022398908622562885f, 0.00215251836925745f, 0.004106653388589621f, 0.0031833264511078596f, 0.0037198287900537252f, 0.004005902912467718f, 0.0041448622941970825f, 0.0032616048119962215f, 0.005864459555596113f, 0.006968914531171322f, 0.0033391357865184546f, 0.008712722919881344f, 0.0035849716514348984f, 0.002151915105059743f, 0.005330015905201435f, 0.008568253368139267f, 0.002915040822699666f, 0.0030483666341751814f, 0.0044024293310940266f, 0.0025584674440324306f, 0.0016593425534665585f, 0.0017357789911329746f, 0.0037548011168837547f, 0.006687713321298361f, 0.004166525788605213f, 0.010712876915931702f, 0.0043747927993535995f, 0.0035135869402438402f, 0.00250794249586761f, 0.004835899453610182f, 0.004893971141427755f, 0.0029704063199460506f, 0.005270800087600946f, 0.004540526308119297f, 0.008480897173285484f, 0.003618045477196574f, 0.0028129108250141144f, 0.002407555002719164f, 0.0023799173068255186f, 0.004570347256958485f, 0.003389265388250351f, 0.005617039743810892f, 0.002402974758297205f, 0.00676139397546649f, 0.0023163689766079187f, 0.004397169221192598f, 0.002344902604818344f, 0.0067774164490401745f, 0.003842549631372094f, 0.0037009608931839466f, 0.004041301552206278f, 0.0015156276058405638f, 0.0015050865476951003f, 0.006472927983850241f, 0.002681730780750513f, 0.0012595455627888441f, 0.0030116450507193804f, 0.00395389087498188f, 0.006577325984835625f, 0.002898816717788577f, 0.007379319053143263f, 0.0023745386861264706f, 0.010625491850078106f, 0.0024937435518950224f, 0.0020729198586195707f, 0.002152865519747138f, 0.0023080846294760704f, 0.004893037956207991f, 0.0074803950265049934f, 0.003809266723692417f, 0.0051812161691486835f, 0.004905579145997763f, 0.0026781598571687937f, 0.0029101392719894648f, 0.0022285289596766233f, 0.008341173641383648f, 0.001867879880592227f, 0.007903045043349266f, 0.0019000440370291471f, 0.003954380284994841f, 0.0018244789680466056f, 0.002471521031111479f, 0.003350319806486368f, 0.005069144070148468f, 0.008023528382182121f, 0.0038681095466017723f, 0.0025829412043094635f, 0.002832689555361867f, 0.010180188342928886f, 0.008257674053311348f, 0.002549464348703623f, 0.004163005389273167f, 0.001768665388226509f, 0.003164584282785654f, 0.0015823199646547437f, 0.004816376604139805f, 0.0031404662877321243f, 0.0020346015226095915f, 0.0075889150612056255f, 0.0034916687291115522f, 0.003054399508982897f, 0.003053162945434451f, 0.004208971280604601f, 0.0022788941860198975f, 0.002384305465966463f, 0.005401538219302893f, 0.006272229366004467f, 0.0021413627546280622f, 0.003642476862296462f, 0.004528956022113562f, 0.004136852454394102f, 0.005281063262373209f, 0.003916286397725344f, 0.002915432211011648f, 0.007861766964197159f, 0.003670529928058386f, 0.002533896127715707f, 0.002757022390142083f, 0.0018195812590420246f, 0.003648321842774749f, 0.0023724024649709463f, 0.005197556689381599f, 0.005846031010150909f, 0.0036653978750109673f, 0.0030462141148746014f, 0.004682787228375673f, 0.0029188550543040037f, 0.0023932261392474174f, 0.0077352579683065414f, 0.003969068638980389f, 0.003485501743853092f, 0.004011769313365221f, 0.0027298054192215204f, 0.0036831095349043608f, 0.0020752667915076017f, 0.005139149725437164f, 0.0024401999544352293f, 0.009766125120222569f, 0.0028568487614393234f, 0.00222058710642159f, 0.003375011496245861f, 0.0031531809363514185f, 0.003277562325820327f, 0.005187906790524721f, 0.001634784392081201f, 0.004132104571908712f, 0.0020361815113574266f, 0.0023288961965590715f, 0.003386166412383318f, 0.007901896722614765f, 0.004119299352169037f, 0.0026317473966628313f, 0.0028960418421775103f, 0.002372472081333399f, 0.003126739291474223f, 0.0022897813469171524f, 0.002924653235822916f, 0.0030155456624925137f, 0.0027927374467253685f, 0.007075036875903606f, 0.0030234071891754866f, 0.002184985438361764f, 0.00693258922547102f, 0.002533026970922947f, 0.0023570351768285036f, 0.0016174016054719687f, 0.003025189507752657f, 0.0034587415866553783f, 0.0038553730119019747f, 0.003576116170734167f, 0.005801177583634853f, 0.006172240246087313f, 0.008884060196578503f, 0.007143831346184015f, 0.0029432789888232946f, 0.00462555605918169f, 0.0020390464924275875f, 0.0017766383243724704f, 0.0020930375903844833f, 0.008909590542316437f, 0.005082692485302687f, 0.0021123334299772978f, 0.0019512469880282879f, 0.0039608413353562355f, 0.001900986535474658f, 0.0026825566310435534f, 0.002169765532016754f, 0.0045409430749714375f, 0.002190370112657547f, 0.003111334051936865f, 0.0037509191315621138f, 0.0022214786149561405f, 0.003051084466278553f, 0.0024856466334313154f, 0.004765788558870554f, 0.0031615211628377438f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 60,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00129381800070405f, 0.00121195032261312f, 0.0012750487076118588f, 0.001159899402409792f, 0.0011870162561535835f, 0.001759433071129024f, 0.0012450942303985357f, 0.0011591692455112934f, 0.002428194507956505f, 0.0014740417245775461f, 0.0013177163200452924f, 0.0011581032304093242f, 0.0020707377698272467f, 0.0016288296319544315f, 0.0014596086693927646f, 0.0016438538441434503f, 0.0012347529409453273f, 0.0013828151859343052f, 0.0012019257992506027f, 0.0013523680390790105f, 0.0022805549670010805f, 0.0014893707120791078f, 0.0012088603107258677f, 0.001866050879471004f, 0.0019704767037183046f, 0.001629362697713077f, 0.0015124931233003736f, 0.0011884411796927452f, 0.0018786597065627575f, 0.0013028639368712902f, 0.0018817585660144687f, 0.001756529207341373f, 0.0019749472849071026f, 0.0015828523319214582f, 0.0012888530036434531f, 0.0014778682962059975f, 0.002180058741942048f, 0.0012356210500001907f, 0.0020844333339482546f, 0.0019907946698367596f, 0.0015042248414829373f, 0.0016689294716343284f, 0.0016997078200802207f, 0.0017245474737137556f, 0.0012542885961011052f, 0.0015419179107993841f, 0.0015511370729655027f, 0.001365620642900467f, 0.001735689234919846f, 0.0019040247425436974f, 0.0016977126942947507f, 0.0016538354102522135f, 0.0013539377832785249f, 0.0016646527219563723f, 0.0012272242456674576f, 0.001366466865874827f, 0.0029001643415540457f, 0.0019017262384295464f, 0.0015438582049682736f, 0.001592769636772573f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004237009852658957f, 0.00036968247150070965f, 0.00023895013146102428f, 0.0005807792767882347f, 0.0002274839935125783f, 0.0004790679377038032f, 0.00032422173535451293f, 0.0003144023648928851f, 0.00039122093585319817f, 0.0002547785989008844f, 0.00023291695106308907f, 0.00047962277312763035f, 0.0003034986148122698f, 0.0003988922107964754f, 0.0003230999573133886f, 0.00029079726664349437f, 0.00033070557401515543f, 0.00036544332397170365f, 0.00032732487306930125f, 0.00032329739769920707f, 0.00030542892636731267f, 0.0002581424778327346f, 0.0003832649963442236f, 0.0003752121701836586f, 0.00024753992329351604f, 0.00035967715666629374f, 0.00028249676688574255f, 0.00031511145061813295f, 0.0002253663697047159f, 0.00025891800760291517f, 0.0002472169871907681f, 0.0003982582129538059f, 0.0003492661926429719f, 0.0003364848380442709f, 0.00029844994423910975f, 0.00033727052505128086f, 0.0004378891899250448f, 0.00030054361559450626f, 0.00027455290546640754f, 0.0003072468389291316f, 0.0002674819261301309f, 0.0003023451135959476f, 0.00041687372140586376f, 0.0002944153093267232f, 0.0003386303724255413f, 0.000341404986102134f, 0.0003596609749365598f, 0.0002845741400960833f, 0.0004329928779043257f, 0.00027934034005738795f, 0.00027219639741815627f, 0.0002974408562295139f, 0.0002604280598461628f, 0.00028396162088029087f, 0.00032304704654961824f, 0.00026710060774348676f, 0.0002606276539154351f, 0.00027185663930140436f, 0.00031671274336986244f, 0.00044309694203548133f, 0.00029129115864634514f, 0.0003558605385478586f, 0.0002542337169870734f, 0.00030306927510537207f, 0.0002725250378716737f, 0.0003345825825817883f, 0.000262531015323475f, 0.00034792619408108294f, 0.0002227508375653997f, 0.0002785171091090888f, 0.0002990748325828463f, 0.0003329526516608894f, 0.0002834078040905297f, 0.00033832568442448974f, 0.000292737822746858f, 0.00024910681531764567f, 0.0003954200365114957f, 0.0002454369096085429f, 0.0003196909965481609f, 0.0003527906665112823f, 0.0005665438948199153f, 0.00032650315552018583f, 0.00031914038117974997f, 0.00032836798345670104f, 0.00033681298373267055f, 0.00042074770317412913f, 0.0003350022598169744f, 0.00022034553694538772f, 0.0003644207026809454f, 0.0002645189524628222f, 0.00041636417154222727f, 0.0004279618733562529f, 0.00023746627266518772f, 0.0003156720194965601f, 0.0005206880741752684f, 0.00029785826336592436f, 0.0002535139792598784f, 0.0003567997773643583f, 0.0003913260588888079f, 0.0002765429671853781f, 0.0003167586983181536f, 0.00024224224034696817f, 0.000409106956794858f, 0.0003339157556183636f, 0.00029014903702773154f, 0.00026114078355021775f, 0.0003018479037564248f, 0.00030215727747417986f, 0.00031461124308407307f, 0.0004024923837278038f, 0.00039095591637305915f, 0.0004940294311381876f, 0.00032396893948316574f, 0.00043268557055853307f, 0.00045244497596286237f, 0.0003253619361203164f, 0.00030078989220783114f, 0.00026186354807578027f, 0.000523748283740133f, 0.00038696403498761356f, 0.000265473616309464f, 0.0002878913364838809f, 0.00039716073661111295f, 0.00023928124574013054f, 0.00027526792837306857f, 0.00045192003017291427f, 0.00022109970450401306f, 0.00038867135299369693f, 0.00046803956502117217f, 0.00026396196335554123f, 0.0003005601465702057f, 0.0003275418421253562f, 0.00028507172828540206f, 0.00035966868745163083f, 0.00024784341803751886f, 0.000364196632290259f, 0.0004200490948278457f, 0.00027641523047350347f, 0.0003605941019486636f, 0.0004028982948511839f, 0.00036057119723409414f, 0.00035581892007030547f, 0.00034466208308003843f, 0.00028272776398807764f, 0.0005749050178565085f, 0.00026643648743629456f, 0.00030875694938004017f, 0.00033714500023052096f, 0.0003488770453259349f, 0.0003381671558599919f, 0.0003068745427299291f, 0.0003378528926987201f, 0.00025242927949875593f, 0.0003475894045550376f, 0.00030574799166060984f, 0.00027052994119003415f, 0.0002365612454013899f, 0.00030525069450959563f, 0.00030879530822858214f, 0.0002634798001963645f, 0.00033864332363009453f, 0.0002813095925375819f, 0.0003133509890176356f, 0.0002553759259171784f, 0.0003458851424511522f, 0.0002474060165695846f, 0.00040608039125800133f, 0.0002355530159547925f, 0.0003531435795594007f, 0.0002877867955248803f, 0.00034690889879129827f, 0.00026287054060958326f, 0.000248954223934561f, 0.00027375674108043313f, 0.0003042617463506758f, 0.0002363139792578295f, 0.0003942417388316244f, 0.00032523402478545904f, 0.00036637732409872115f, 0.00027514275279827416f, 0.0003462200693320483f, 0.00034735852386802435f, 0.0002684502396732569f, 0.0002980509016197175f, 0.00026651122607290745f, 0.000343584775691852f, 0.00032938618096522987f, 0.00029866909608244896f, 0.0003983094356954098f, 0.0003136033483315259f, 0.00023387583496514708f, 0.0003270793240517378f, 0.00029316224390640855f, 0.0003331347834318876f, 0.0002855973143596202f, 0.00032981779077090323f, 0.0003203258675057441f, 0.00028529344126582146f, 0.0002818706270772964f, 0.0004628980823326856f, 0.000294456142000854f, 0.0004026537062600255f, 0.00035939557710662484f, 0.0003965248179156333f, 0.000287871080217883f, 0.00037492121919058263f, 0.0004274061357136816f, 0.0003769340110011399f, 0.0002726547827478498f, 0.00030417984817177057f, 0.0002936564269475639f, 0.0002639922604430467f, 0.0003083375049754977f, 0.0003013844252564013f, 0.0003347511519677937f, 0.0005326996906660497f, 0.0003849819768220186f, 0.00034687435254454613f, 0.00033056639949791133f, 0.00033640742185525596f, 0.0003186702379025519f, 0.0003665940894279629f, 0.000388884887797758f, 0.000453698739875108f, 0.0003396316315047443f, 0.00033096762490458786f, 0.0003491315001156181f, 0.0002726765815168619f, 0.0002994901151396334f, 0.0003311644832137972f, 0.0002957233227789402f, 0.0002978048287332058f, 0.0002222101466031745f, 0.0003856066323351115f, 0.00032200466375797987f, 0.0002679447643458843f, 0.000410288164857775f, 0.0002622090687509626f, 0.00027560879243537784f, 0.0002586719347164035f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_74_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010001875925809145f, 0.0010027376702055335f, 0.0007814012933522463f, 0.0007802824256941676f, 0.00045753936865366995f, 0.0006535733118653297f, 0.0005251985276117921f, 0.0005024982383474708f, 0.0006869581993669271f, 0.0005788019625470042f, 0.0006847679032944143f, 0.0007209291798062623f, 0.000518808257766068f, 0.0007711558719165623f, 0.0004928013077005744f, 0.0008396770572289824f, 0.0008035673527047038f, 0.0018719998188316822f, 0.00046930802636779845f, 0.000550450524315238f, 0.0011321312049403787f, 0.001133725862018764f, 0.0007754690595902503f, 0.0005309305270202458f, 0.00044040021020919085f, 0.001706599025055766f, 0.0013553157914429903f, 0.0005403873510658741f, 0.0006167382234707475f, 0.0011064659338444471f, 0.0004932761075906456f, 0.0005141809233464301f, 0.0006376864621415734f, 0.0006438726559281349f, 0.0010867201490327716f, 0.0006163842044770718f, 0.0014285091310739517f, 0.00046543905045837164f, 0.0006050876108929515f, 0.000563628738746047f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006706127314828336f, 0.0005078268586657941f, 0.0007731069927103817f, 0.00046084512723609805f, 0.0004737004346679896f, 0.0005554772214964032f, 0.00037818768760189414f, 0.0005449056625366211f, 0.0004929463611915708f, 0.00038870921707712114f, 0.001404092414304614f, 0.00041035551112145185f, 0.0004003527283202857f, 0.0005827592103742063f, 0.000545301241800189f, 0.0004847381205763668f, 0.0004688229819294065f, 0.00044810198596678674f, 0.00044920010259374976f, 0.000624978041741997f, 0.000515972264111042f, 0.0004682813596446067f, 0.0012851640349254012f, 0.00046895581181161106f, 0.0008497324888594449f, 0.001132384524680674f, 0.00048766343388706446f, 0.0009858167031779885f, 0.0007235311786644161f, 0.0006094734417274594f, 0.0006762759876437485f, 0.0004352462128736079f, 0.0012352075427770615f, 0.0005150307551957667f, 0.0007334715919569135f, 0.0008590323850512505f, 0.0003683323157019913f, 0.00036118499701842666f, 0.00047600618563592434f, 0.00045372970635071397f, 0.001046199118718505f, 0.0009555386495776474f, 0.0006326696020551026f, 0.000618483463767916f, 0.00042684507207013667f, 0.0004690003115683794f, 0.0010722398292273283f, 0.000327960035065189f, 0.0004127981374040246f, 0.000581475265789777f, 0.00038662695442326367f, 0.000416764582041651f, 0.0009527187794446945f, 0.0007669195765629411f, 0.001084794639609754f, 0.0010621518595144153f, 0.0003866951446980238f, 0.0004195616929791868f, 0.0004815472348127514f, 0.0015541391912847757f, 0.0005225713830441236f, 0.0003641526564024389f, 0.00043159941560588777f, 0.000392515939893201f, 0.0010126238921657205f, 0.0007838947931304574f, 0.0006427578045986593f, 0.0004421181802172214f, 0.0009273385512642562f, 0.0003909017250407487f, 0.0003747409500647336f, 0.0006428355700336397f, 0.0005583610036410391f, 0.0004423215868882835f, 0.0005353187443688512f, 0.00045662804041057825f, 0.0004220016999170184f, 0.0005468501476570964f, 0.0005388731369748712f, 0.00036490088677965105f, 0.0005025515565648675f, 0.0004074465250596404f, 0.0005611158558167517f, 0.0008793882443569601f, 0.00038545552524738014f, 0.0011454197810962796f, 0.0004206158628221601f, 0.00041014800081029534f, 0.0006015499820932746f, 0.0006862740265205503f, 0.000592961732763797f, 0.0011246009962633252f, 0.00043978248140774667f, 0.00038888698327355087f, 0.00034315409720875323f, 0.000570598291233182f, 0.0003232725721318275f, 0.001221804996021092f, 0.001677508233115077f, 0.00031539035262539983f, 0.0004773797991219908f, 0.0010305275209248066f, 0.0005741101922467351f, 0.0005544389714486897f, 0.00036787803401239216f, 0.0007647674065083265f, 0.0011209200602024794f, 0.00047702720621600747f, 0.0008720431360416114f, 0.0011567083420231938f, 0.0007136360509321094f, 0.0004344114859122783f, 0.0015183382201939821f, 0.0005691187689080834f, 0.00043726799776777625f, 0.0005859443917870522f, 0.0009735506610013545f, 0.0003397749678697437f, 0.0004954620380885899f, 0.0005838394281454384f, 0.0004920446081086993f, 0.00043870744411833584f, 0.00044072308810427785f, 0.0006574942963197827f, 0.0005306689417921007f, 0.0006660173530690372f, 0.00044828784302808344f, 0.0003683475370053202f, 0.0009960398310795426f, 0.0006754565984010696f, 0.000571281008888036f, 0.00048610998783260584f, 0.001056744484230876f, 0.0008853173349052668f, 0.001262195874005556f, 0.0004344998742453754f, 0.00035587939782999456f, 0.0015021931612864137f, 0.00046975986333563924f, 0.000831010052934289f, 0.0004915960016660392f, 0.0008769493433646858f, 0.0004578780790325254f, 0.0010725847678259015f, 0.0005005461280234158f, 0.0004892820143140852f, 0.0005039058160036802f, 0.0009168943506665528f, 0.0005239247693680227f, 0.00047648450708948076f, 0.0004575942875817418f, 0.00044111040187999606f, 0.0005679702735505998f, 0.00044655503006652f, 0.0011962458956986666f, 0.00044195092050358653f, 0.0006481975433416665f, 0.00061194779118523f, 0.00038849239354021847f, 0.0006625126698054373f, 0.0004255757085047662f, 0.001131461001932621f, 0.000783905852586031f, 0.00044644009904004633f, 0.0014092079363763332f, 0.000519059831276536f, 0.00036967641790397465f, 0.0005897583905607462f, 0.0010660175466910005f, 0.0004649703041650355f, 0.0003646568802651018f, 0.00036601084866560996f, 0.0004203436546958983f, 0.0009342351113446057f, 0.00038319232407957315f, 0.0009337817900814116f, 0.0005953947547823191f, 0.00043642998207360506f, 0.0010085466783493757f, 0.0003590149281080812f, 0.0005928432219661772f, 0.0004089974972885102f, 0.0003216898476239294f, 0.00035955794737674296f, 0.0011773888254538178f, 0.00062558549689129f, 0.0004974826006218791f, 0.0004711575747933239f, 0.0006361610139720142f, 0.000533229555003345f, 0.0006237169727683067f, 0.00048089600750245154f, 0.0005115006933920085f, 0.0006781509728170931f, 0.0004938272177241743f, 0.0003785093140322715f, 0.0002833623730111867f, 0.00047197460662573576f, 0.00034077547024935484f, 0.00033785568666644394f, 0.000546686293091625f, 0.0003999500477220863f, 0.0005058353999629617f, 0.0007268277695402503f, 0.0005712419515475631f, 0.0007547730347141623f, 0.0004735709517262876f, 0.0003150630509480834f, 0.0005540731362998486f, 0.0002805048425216228f, 0.0013635739451274276f, 0.0006883552996441722f, 0.0005764028755947948f, 0.0005235128337517381f, 0.0004380629980005324f, 0.00038097414653748274f, 0.0006419960991479456f, 0.0006327898008748889f, 0.0005302322097122669f, 0.00040585838723927736f, 0.0013055637245997787f, 0.0006904052570462227f, 0.00045062488061375916f, 0.0005385289550758898f, 0.00048095459351316094f, 0.00039274393930099905f, 0.0006301493267528713f, 0.0012170553673058748f, 0.0004927365807816386f, 0.00035235960967838764f, 0.0003853969683405012f, 0.0012744828127324581f, 0.0005612837267108262f, 0.00041105429409071803f, 0.000388260988984257f, 0.0008446513675153255f, 0.0006651307921856642f, 0.0004210313782095909f, 0.0006981564220041037f, 0.0005601702723652124f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_78_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 480,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001021788571961224f, 0.00120074104052037f, 0.0008925668080337346f, 0.0011952811619266868f, 0.0013230046024546027f, 0.0016746454639360309f, 0.001289665699005127f, 0.001318800845183432f, 0.0008174959803000093f, 0.0008580368012189865f, 0.0008509311592206359f, 0.0011385242687538266f, 0.0009714090847410262f, 0.001149573246948421f, 0.0010917829349637032f, 0.0008707831730134785f, 0.0012900795554742217f, 0.0012619588524103165f, 0.001989643322303891f, 0.0012689491268247366f, 0.0008866728749126196f, 0.0012749327579513192f, 0.0008047445444390178f, 0.0009218999184668064f, 0.000977575546130538f, 0.0007523882086388767f, 0.001035720226354897f, 0.0012095682322978973f, 0.0009200036874972284f, 0.0015941408928483725f, 0.0008770327549427748f, 0.0008609658107161522f, 0.0007982918177731335f, 0.0007501336513087153f, 0.002270014025270939f, 0.0010517691262066364f, 0.000940728816203773f, 0.0008276377338916063f, 0.0008754050359129906f, 0.0012865324970334768f, 0.0010056350147351623f, 0.0011741804191842675f, 0.0013489358825609088f, 0.0007158974185585976f, 0.001106461277231574f, 0.0008142422302626073f, 0.0008178848656825721f, 0.00134129892103374f, 0.0008531607454642653f, 0.0007893993752077222f, 0.0013973350869491696f, 0.0011068705935031176f, 0.0009263565298169851f, 0.0010047981049865484f, 0.0009495920967310667f, 0.0008009581943042576f, 0.0008650135132484138f, 0.0009030200308188796f, 0.000810959143564105f, 0.0009364940924569964f, 0.0015983178745955229f, 0.001111305202357471f, 0.0008769133710302413f, 0.0009772191988304257f, 0.001306676771491766f, 0.0007811752730049193f, 0.0011508874595165253f, 0.0007880812627263367f, 0.0010626333532854915f, 0.0007694767555221915f, 0.0008062436827458441f, 0.0011205478804185987f, 0.001364326337352395f, 0.0013547461712732911f, 0.0013075307942926884f, 0.0009200397762469947f, 0.0016623358242213726f, 0.0008322301437146962f, 0.0011811862932518125f, 0.0014289499958977103f, 0.0009646413382142782f, 0.0011826495174318552f, 0.0014765013474971056f, 0.0009911615634337068f, 0.0009104018681682646f, 0.0007831956027075648f, 0.0012454757234081626f, 0.0010595524217933416f, 0.0014971561031416059f, 0.0007554738549515605f, 0.0010095547186210752f, 0.0009166973177343607f, 0.0015445351600646973f, 0.0015203777002170682f, 0.0012449288042262197f, 0.0009739983361214399f, 0.000865133770275861f, 0.000735411187633872f, 0.0010227967286482453f, 0.001275243703275919f, 0.0010189239401370287f, 0.0010091953445225954f, 0.001420303015038371f, 0.0009742373367771506f, 0.001500096172094345f, 0.0009306810679845512f, 0.0015116542344912887f, 0.0008561140857636929f, 0.0009954588022083044f, 0.0013237360399216413f, 0.0014631926314905286f, 0.0020727887749671936f, 0.0008251863764598966f, 0.000854611222166568f, 0.0009365137666463852f, 0.0011707331286743283f, 0.0008600156288594007f, 0.001381215057335794f, 0.0009092839900404215f, 0.000780756410676986f, 0.000795372819993645f, 0.0007378029986284673f, 0.0015526717761531472f, 0.0011453329352661967f, 0.0008895164355635643f, 0.0009832645300775766f, 0.0009063241886906326f, 0.0008336959290318191f, 0.0009083691402338445f, 0.0024735641200095415f, 0.0008196919807232916f, 0.0008665158529765904f, 0.0015025562606751919f, 0.0011693681590259075f, 0.0018531092209741473f, 0.000871201220434159f, 0.000924072926864028f, 0.0010407903464511037f, 0.0007588118314743042f, 0.0009203852387145162f, 0.0013157868525013328f, 0.0008696253644302487f, 0.000741442374419421f, 0.0008469783351756632f, 0.001478087971918285f, 0.0009604934020899236f, 0.0007559749647043645f, 0.0013196164509281516f, 0.0015164228389039636f, 0.0017548701725900173f, 0.0011268674861639738f, 0.0009655321482568979f, 0.000851102638989687f, 0.0007850636611692607f, 0.0008069463656283915f, 0.0012298100627958775f, 0.001319029019214213f, 0.0009669158607721329f, 0.0008522872813045979f, 0.0013735027750954032f, 0.001331132953055203f, 0.0008644271292723715f, 0.000858084880746901f, 0.0014386193361133337f, 0.0010222741402685642f, 0.001722535933367908f, 0.0010095053585246205f, 0.001334951724857092f, 0.0017804824747145176f, 0.0008680645260028541f, 0.0009091532556340098f, 0.000921997707337141f, 0.0020584885496646166f, 0.0015528398798778653f, 0.0011083396384492517f, 0.001329566934145987f, 0.001370985060930252f, 0.001172199728898704f, 0.0009779698448255658f, 0.0008951101335696876f, 0.0014648550422862172f, 0.0017852365272119641f, 0.0014103902503848076f, 0.0011523690773174167f, 0.0009277794742956758f, 0.0010242598364129663f, 0.0013244317378848791f, 0.0008575987885706127f, 0.0016240542754530907f, 0.001451070187613368f, 0.0008737032767385244f, 0.0024901190772652626f, 0.001362749608233571f, 0.0008372014272026718f, 0.0017689444357529283f, 0.001429296564310789f, 0.0008394900942221284f, 0.0013149655424058437f, 0.0009293648763559759f, 0.0009455090621486306f, 0.0015129725215956569f, 0.0009595328010618687f, 0.0009319132077507675f, 0.0012048289645463228f, 0.0008846206474117935f, 0.0008590493234805763f, 0.001090089906938374f, 0.000763834803365171f, 0.0013420113828033209f, 0.0009152606944553554f, 0.0009128722595050931f, 0.0008496781811118126f, 0.0008387023699469864f, 0.0012381175765767694f, 0.0010692293290048838f, 0.0012223845114931464f, 0.0009989205282181501f, 0.00106209481600672f, 0.0007906451937742531f, 0.0014135354431346059f, 0.0009997612796723843f, 0.001828770968131721f, 0.0008706789230927825f, 0.000873493030667305f, 0.0008582002483308315f, 0.0013201419496908784f, 0.0012565371580421925f, 0.000785793352406472f, 0.000864861998707056f, 0.0007929972489364445f, 0.0010447317035868764f, 0.0012111953692510724f, 0.0016166029963642359f, 0.0008449193555861712f, 0.0011685615172609687f, 0.0007796356221660972f, 0.0008025115821510553f, 0.0008929009782150388f, 0.001152858487330377f, 0.0013271685456857085f, 0.0010980049846693873f, 0.000858165614772588f, 0.0007986152777448297f, 0.0009733765618875623f, 0.0009205153910443187f, 0.0008951316121965647f, 0.0007841375772841275f, 0.001015908899717033f, 0.0014231815002858639f, 0.0008046634611673653f, 0.0012209804262965918f, 0.001524725928902626f, 0.0008276891312561929f, 0.0008147798362188041f, 0.0008858877117745578f, 0.0015224330127239227f, 0.0009447181946597993f, 0.0008084080182015896f, 0.0009616453316994011f, 0.001170834992080927f, 0.0014068447053432465f, 0.0013624236453324556f, 0.0014948206953704357f, 0.0007580125238746405f, 0.0007507046102546155f, 0.0017346501117572188f, 0.0012036307016387582f, 0.0007902350625954568f, 0.001308318693190813f, 0.0010351433884352446f, 0.001192685798741877f, 0.0007902809884399176f, 0.0007815100834704936f, 0.001046853489242494f, 0.0016352568054571748f, 0.0013091468717902899f, 0.0011095813242718577f, 0.0007878882461227477f, 0.0007775893900543451f, 0.0011694116983562708f, 0.0008443417027592659f, 0.0014877617359161377f, 0.0015361892292276025f, 0.0013056332245469093f, 0.0008481594850309193f, 0.0010356931015849113f, 0.0009103115880861878f, 0.0013418312883004546f, 0.0011110486229881644f, 0.0015075048431754112f, 0.001302384422160685f, 0.0012112847762182355f, 0.0016183116240426898f, 0.0007665774319320917f, 0.0010703831212595105f, 0.0008093517972156405f, 0.0009904293110594153f, 0.0009806028101593256f, 0.0007648358005098999f, 0.0008706775261089206f, 0.0007658550166524947f, 0.0010109016438946128f, 0.0009874284733086824f, 0.0009922570316120982f, 0.001236596843227744f, 0.0009322746191173792f, 0.0008023129776120186f, 0.0007925580721348524f, 0.0012586199445649981f, 0.0008254639687947929f, 0.001062337658368051f, 0.0008411331218667328f, 0.001215892261825502f, 0.0012808280298486352f, 0.000810965255368501f, 0.0008212996181100607f, 0.0007957208435982466f, 0.0015605693915858865f, 0.0009466010960750282f, 0.000895211473107338f, 0.0009148481767624617f, 0.0008893832564353943f, 0.0011613894021138549f, 0.0018845910672098398f, 0.0012642433866858482f, 0.0008284669020213187f, 0.0010527527192607522f, 0.0018927931087091565f, 0.0019042515195906162f, 0.0013333727838471532f, 0.0008048997260630131f, 0.001162077533081174f, 0.0009584244107827544f, 0.0011381236836314201f, 0.0010782171739265323f, 0.000953294278588146f, 0.001488471869379282f, 0.000913356663659215f, 0.0015365674626082182f, 0.0013028463581576943f, 0.0010046274401247501f, 0.0011851888848468661f, 0.0016019291942939162f, 0.001359631773084402f, 0.0012548118829727173f, 0.0008750516572035849f, 0.0016383418114855886f, 0.0015310076996684074f, 0.0008153039962053299f, 0.0008363125962205231f, 0.0008637626306153834f, 0.0013238221872597933f, 0.0012320105452090502f, 0.0014008702710270882f, 0.0012813226785510778f, 0.0008853237377479672f, 0.0009347278391942382f, 0.000829787808470428f, 0.0008658304577693343f, 0.0008313516154885292f, 0.0014212009264156222f, 0.0008815642795525491f, 0.001002688193693757f, 0.0008760927594266832f, 0.0011320036137476563f, 0.0013925101375207305f, 0.0009049421059899032f, 0.0012498646974563599f, 0.000863304128870368f, 0.0015590462135151029f, 0.0008630265947431326f, 0.0008579446002840996f, 0.0013973364839330316f, 0.0011491355253383517f, 0.0011568652698770165f, 0.0014114252990111709f, 0.0015128225786611438f, 0.0014228341169655323f, 0.0007709465571679175f, 0.0010202566627413034f, 0.001317839603871107f, 0.0007569370209239423f, 0.001198710291646421f, 0.0010189905297011137f, 0.001524842926301062f, 0.0009594985749572515f, 0.0008889222517609596f, 0.0007910147542133927f, 0.0007962052477523685f, 0.0012612193822860718f, 0.0008330918499268591f, 0.0011803002562373877f, 0.0011889004381373525f, 0.0008751808200031519f, 0.0011311330599710345f, 0.002026786096394062f, 0.0011910483008250594f, 0.0008982642902992666f, 0.0008878482040017843f, 0.0008773191948421299f, 0.0013751073274761438f, 0.0013451031409204006f, 0.0013167819706723094f, 0.0017581508727744222f, 0.001359956106171012f, 0.001054162043146789f, 0.001398254418745637f, 0.0007935332250781357f, 0.0017320699989795685f, 0.0009052507812157273f, 0.0014836207265034318f, 0.0008031303295865655f, 0.0011459506349638104f, 0.0015121259493753314f, 0.000783907191362232f, 0.0008314848528243601f, 0.0019015215802937746f, 0.001195950317196548f, 0.000758945127017796f, 0.0013041237834841013f, 0.0009291349560953677f, 0.0007433991995640099f, 0.001542074023745954f, 0.0010096237529069185f, 0.0009273558971472085f, 0.000861415930557996f, 0.0013472733553498983f, 0.0015483001479879022f, 0.0010240253759548068f, 0.0016882880590856075f, 0.0014071216573938727f, 0.0008283568895421922f, 0.0009521947940811515f, 0.0007815379649400711f, 0.0008930714102461934f, 0.0016079358756542206f, 0.0012111191172152758f, 0.002053976058959961f, 0.0008540014969184995f, 0.0009432638180442154f, 0.0008341752691194415f, 0.0012401238782331347f, 0.0008414086769334972f, 0.0008468886371701956f, 0.0007599943783134222f, 0.0009409090271219611f, 0.0012451063375920057f, 0.0008318365435115993f, 0.0012366928858682513f, 0.000764717347919941f, 0.0007780862506479025f, 0.0009972462430596352f, 0.0011855006450787187f, 0.001414411119185388f, 0.0015115069691091776f, 0.0013075281167402864f, 0.0014883935218676925f, 0.0018255170434713364f, 0.0008882926194928586f, 0.0014033354818820953f, 0.0012342004338279366f, 0.0010820222087204456f, 0.0013351181987673044f, 0.0013638118980452418f, 0.0011594926472753286f, 0.001178469741716981f, 0.0015774412313476205f, 0.0013914925511926413f, 0.000797056476585567f, 0.0008828273857943714f, 0.0009255190961994231f, 0.0009354326757602394f, 0.001659455825574696f, 0.0011238587321713567f, 0.0011100218398496509f, 0.0009376865345984697f, 0.0011014443589374423f, 0.0015488334465771914f, 0.0008146952022798359f, 0.0007599838427267969f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001470342860557139f, 0.0018701113294810057f, 0.0010602950351312757f, 0.004550828132778406f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010259994305670261f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003290045540779829f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003290045540779829f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_8_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.017420867457985878f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016021791845560074f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11692211776971817f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11692211776971817f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11078501492738724f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11078501492738724f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0728129893541336f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1422358751296997f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02348969131708145f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004787334240972996f),
    AI_PACK_INTQ_ZP(-82)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004787334240972996f),
    AI_PACK_INTQ_ZP(-82)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.020456941798329353f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10024016350507736f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
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
    AI_PACK_INTQ_SCALE(0.00698438985273242f),
    AI_PACK_INTQ_ZP(-16)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00698438985273242f),
    AI_PACK_INTQ_ZP(-16)))

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
  eltwise_36_output, AI_STATIC,
  2, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_27_scratch0_array, NULL)

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
  conv2d_27_scratch1, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

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
  conv2d_41_output, AI_STATIC,
  9, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 8161, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8161, 8161),
  1, &conv2d_28_scratch0_array, NULL)

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
  conv2d_28_scratch1, AI_STATIC,
  13, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

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
  eltwise_46_output, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 624, 1, 1), AI_STRIDE_INIT(4, 1, 1, 624, 624),
  1, &conv2d_30_scratch0_array, NULL)

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
  conv2d_30_scratch1, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

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
  conv2d_51_output, AI_STATIC,
  23, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_31_scratch0_array, NULL)

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
  eltwise_54_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_35_scratch0_array, NULL)

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
  conv2d_57_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  32, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_37_scratch0_array, NULL)

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
  conv2d_37_scratch1, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

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
  nl_62_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 160, 160),
  1, &nl_62_output_array, &nl_62_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_38_scratch0_array, NULL)

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
  conv2d_38_scratch1, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

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
  conv2d_67_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  46, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_40_scratch0_array, NULL)

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
  conv2d_70_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 1, 1, 240, 240),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  50, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_41_scratch0_array, NULL)

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
  eltwise_73_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &eltwise_73_output_array, &eltwise_73_output_array_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  54, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_45_scratch0_array, NULL)

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
  conv2d_76_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  58, 0x0,
  AI_SHAPE_INIT(4, 1, 1264, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1264, 1264),
  1, &conv2d_47_scratch0_array, NULL)

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
  conv2d_47_scratch1, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  nl_81_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &nl_81_output_array, &nl_81_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conversion_82_output, AI_STATIC,
  64, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conversion_82_output_array, NULL)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_48_scratch0_array, NULL)

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
  conv2d_48_scratch1, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 7, 7), AI_STRIDE_INIT(4, 1, 1, 120, 840),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

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
  EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array, &EmbeddedNetV1_width0_5_conv2d_14_clip_by_value_Minimum_y2_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  72, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_50_scratch0_array, NULL)

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
  conv2d_50_scratch1, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_50_scratch1_array, &conv2d_50_scratch1_array_intq)

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
  conv2d_51_scratch0, AI_STATIC,
  78, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_51_scratch0_array, NULL)

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
  conv2d_55_scratch0, AI_STATIC,
  81, 0x0,
  AI_SHAPE_INIT(4, 1, 880, 1, 1), AI_STRIDE_INIT(4, 1, 1, 880, 880),
  1, &conv2d_55_scratch0_array, NULL)

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
  conv2d_56_scratch0, AI_STATIC,
  84, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_56_scratch0_array, NULL)

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
  conv2d_56_scratch1, AI_STATIC,
  87, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_56_scratch1_array, &conv2d_56_scratch1_array_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 16), AI_STRIDE_INIT(4, 1, 16, 256, 256),
  1, &conv2d_9_weights_array, &conv2d_9_weights_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  89, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_9_bias_array, NULL)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  90, 0x0,
  AI_SHAPE_INIT(4, 1, 13601, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13601, 13601),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 8), AI_STRIDE_INIT(4, 1, 16, 128, 128),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 160, 7, 7), AI_STRIDE_INIT(4, 1, 1, 160, 1120),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 32), AI_STRIDE_INIT(4, 1, 8, 256, 768),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch0, AI_STATIC,
  95, 0x0,
  AI_SHAPE_INIT(4, 1, 1040, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1040, 1040),
  1, &conv2d_59_scratch0_array, NULL)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  96, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_59_scratch1, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 1, 1, 40, 40),
  1, &conv2d_59_scratch1_array, &conv2d_59_scratch1_array_intq)

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
  AI_SHAPE_INIT(4, 1, 1960, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1960, 1960),
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
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
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
  AI_SHAPE_INIT(4, 480, 1, 1, 4), AI_STRIDE_INIT(4, 1, 480, 1920, 1920),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  189, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
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
  conv2d_30_output, AI_STATIC,
  246, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24, 24),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  247, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

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
  nl_33_output, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 1, 1, 96, 96),
  1, &nl_33_output_array, &nl_33_output_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  251, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_26_scratch0_array, NULL)



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


AI_STATIC_CONST ai_i32 nl_81_nl_params_data[] = { 1679438336, 24, -124 };
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


AI_STATIC_CONST ai_i8 nl_72_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -116, -113, -110, -107, -104, -101, -98, -95, -93, -90, -87, -84, -81, -78, -75, -72, -69, -66, -63, -60, -57, -54, -51, -48, -45, -42, -39, -36, -33, -30, -27, -24, -22, -19, -16, -13, -10, -7, -4, -1, 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97, 100, 103, 106, 109, 112, 115, 118, 120, 123, 126 };
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


AI_STATIC_CONST ai_i8 nl_62_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -118, -116, -114, -112, -110, -108, -106, -104, -102, -100, -98, -97, -95, -93, -91, -89, -87, -85, -83, -81, -79, -77, -75, -73, -71, -69, -67, -65, -63, -61, -59, -57, -55, -53, -51, -49, -47, -45, -43, -41, -39, -37, -35, -34, -32, -30, -28, -26, -24, -22, -20, -18, -16, -14, -12, -10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -116, -114, -112, -110, -109, -107, -105, -103, -102, -100, -98, -96, -95, -93, -91, -89, -88, -86, -84, -82, -80, -79, -77, -75, -73, -72, -70, -68, -66, -65, -63, -61, -59, -58, -56, -54, -52, -51, -49, -47, -45, -43, -42, -40, -38, -36, -35, -33, -31, -29, -28, -26, -24, -22, -21, -19, -17, -15, -14, -12, -10, -8, -7, -5, -3, -1, 1, 2, 4, 6, 8, 9, 11, 13, 15, 16, 18, 20, 22, 23, 25, 27, 29, 30, 32, 34, 36, 37, 39, 41, 43, 45, 46, 48, 50, 52, 53, 55, 57, 59, 60, 62, 64, 66, 67, 69, 71, 73, 74, 76, 78, 80, 82, 83, 85, 87, 89, 90, 92, 94, 96, 97, 99, 101, 103, 104, 106, 108, 110, 111, 113, 115, 117, 118, 120, 122, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -122, -121, -119, -118, -116, -115, -113, -112, -110, -109, -107, -106, -104, -103, -101, -100, -99, -97, -96, -94, -93, -91, -90, -88, -87, -85, -84, -82, -81, -79, -78, -76, -75, -73, -72, -70, -69, -68, -66, -65, -63, -62, -60, -59, -57, -56, -54, -53, -51, -50, -48, -47, -45, -44, -42, -41, -40, -38, -37, -35, -34, -32, -31, -29, -28, -26, -25, -23, -22, -20, -19, -17, -16, -14, -13, -12, -10, -9, -7, -6, -4, -3, -1, 0, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 47, 49, 50, 52, 53, 55, 56, 58, 59, 61, 62, 64, 65, 67, 68, 70, 71, 73, 74, 75, 77, 78, 80, 81, 83, 84, 86, 87, 89, 90, 92, 93, 95, 96, 98, 99, 101, 102, 104, 105, 106, 108, 109, 111, 112, 114, 115, 117, 118, 120, 121, 123, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -116, -114, -112, -110, -108, -107, -105, -103, -101, -100, -98, -96, -94, -92, -91, -89, -87, -85, -83, -82, -80, -78, -76, -75, -73, -71, -69, -67, -66, -64, -62, -60, -59, -57, -55, -53, -51, -50, -48, -46, -44, -43, -41, -39, -37, -35, -34, -32, -30, -28, -26, -25, -23, -21, -19, -18, -16, -14, -12, -10, -9, -7, -5, -3, -2, 0, 2, 4, 6, 7, 9, 11, 13, 14, 16, 18, 20, 22, 23, 25, 27, 29, 31, 32, 34, 36, 38, 39, 41, 43, 45, 47, 48, 50, 52, 54, 55, 57, 59, 61, 63, 64, 66, 68, 70, 71, 73, 75, 77, 79, 80, 82, 84, 86, 88, 89, 91, 93, 95, 96, 98, 100, 102, 104, 105, 107, 109, 111, 112, 114, 116, 118, 120, 121, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -126, -124, -123, -122, -121, -119, -118, -117, -116, -115, -113, -112, -111, -110, -108, -107, -106, -105, -104, -102, -101, -100, -99, -97, -96, -95, -94, -93, -91, -90, -89, -88, -86, -85, -84, -83, -82, -80, -79, -78, -77, -76, -74, -73, -72, -71, -69, -68, -67, -66, -65, -63, -62, -61, -60, -58, -57, -56, -55, -54, -52, -51, -50, -49, -47, -46, -45, -44, -43, -41, -40, -39, -38, -36, -35, -34, -33, -32, -30, -29, -28, -27, -25, -24, -23, -22, -21, -19, -18, -17, -16, -14, -13, -12, -11, -10, -8, -7, -6, -5, -3, -2, -1, 0, 1, 3, 4, 5, 6, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 20, 21, 22, 23, 25, 26, 27, 28, 29, 31, 32, 33, 34, 36, 37, 38, 39, 40, 42, 43, 44, 45, 47, 48, 49, 50, 51, 53, 54, 55, 56, 58, 59, 60, 61, 62, 64, 65, 66, 67, 69, 70, 71, 72, 73, 75, 76, 77, 78, 80, 81, 82, 83, 84, 86, 87, 88, 89, 91, 92, 93, 94, 95, 97, 98, 99, 100, 102, 103, 104, 105, 106, 108, 109, 110, 111, 112, 114, 115, 116, 117, 119, 120, 121, 122, 123, 125, 126, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_21_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .groups = 1, 
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


AI_STATIC_CONST ai_i8 conv2d_14_pad_before_value_data[] = { -18 };
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


AI_STATIC_CONST ai_i8 conv2d_11_pad_before_value_data[] = { -45 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 268804, 1, 1),
    268804, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 268804, 1, 1),
      268804, NULL, NULL)
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
    
    conv2d_21_output_array.data = AI_PTR(g_network_activations_map[0] + 360);
    conv2d_21_output_array.data_start = AI_PTR(g_network_activations_map[0] + 360);
    
    conv2d_22_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 372);
    conv2d_22_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 372);
    
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
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 1960);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1960);
    
    nl_81_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_81_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_81_output_array.data = AI_PTR(g_network_activations_map[0] + 16);
    nl_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16);
    
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
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 268788);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 268788);
    
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
      
      .n_macc            = 19196722,
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
      
      .n_macc            = 19196722,
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

