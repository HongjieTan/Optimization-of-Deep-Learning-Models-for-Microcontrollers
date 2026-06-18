/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sat Jan 11 14:38:14 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "872e599e79c9b0e2b01de5d1ecca0737"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sat Jan 11 14:38:14 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1584, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13952, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5230, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 11, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  pool_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 134560, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 43200, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  pool_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  pool_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  pool_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  nl_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  pool_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  nl_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  pool_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  nl_82_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_83_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_85_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  pool_88_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_91_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  nl_92_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_93_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_95_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  pool_97_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 11, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 360, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1800, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 18, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 36, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6912, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 368640, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1280, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14080, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 11, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 52, AI_STATIC)
/* Array#256 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 88, AI_STATIC)
/* Array#257 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#258 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#259 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#260 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1481, AI_STATIC)
/* Array#261 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#262 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#263 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#264 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#265 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#266 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#267 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#268 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#269 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#270 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#271 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#272 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#273 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#274 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#275 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#276 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#277 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#278 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#279 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#280 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#281 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#282 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#283 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#284 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#285 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#286 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#287 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#288 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#289 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#290 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 736, AI_STATIC)
/* Array#291 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#292 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#293 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#294 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#295 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#296 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 496, AI_STATIC)
/* Array#297 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#298 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#299 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6121, AI_STATIC)
/* Array#300 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#301 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 468, AI_STATIC)
/* Array#302 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 792, AI_STATIC)
/* Array#303 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#304 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#305 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#306 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12241, AI_STATIC)
/* Array#307 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#308 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 936, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012084721587598324f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025321461725980043f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025321461725980043f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012463651597499847f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09097164869308472f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08965718746185303f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07488659024238586f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10719335079193115f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.019079066812992096f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0056110345758497715f),
    AI_PACK_INTQ_ZP(-51)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0056110345758497715f),
    AI_PACK_INTQ_ZP(-51)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09531836211681366f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0115552032366395f),
    AI_PACK_INTQ_ZP(40)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0115552032366395f),
    AI_PACK_INTQ_ZP(40)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07432723790407181f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12281244248151779f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02147729881107807f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006734098307788372f),
    AI_PACK_INTQ_ZP(-21)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006734098307788372f),
    AI_PACK_INTQ_ZP(-21)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06434675306081772f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.15981049835681915f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012852486222982407f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003927791025489569f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003927791025489569f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022691093385219574f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08036133646965027f),
    AI_PACK_INTQ_ZP(8)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.18603987991809845f),
    AI_PACK_INTQ_ZP(-21)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.018627267330884933f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0052111344411969185f),
    AI_PACK_INTQ_ZP(-65)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0052111344411969185f),
    AI_PACK_INTQ_ZP(-65)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08433482050895691f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1864866018295288f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009031950496137142f),
    AI_PACK_INTQ_ZP(16)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009031950496137142f),
    AI_PACK_INTQ_ZP(16)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08475205302238464f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014165235683321953f),
    AI_PACK_INTQ_ZP(56)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014165235683321953f),
    AI_PACK_INTQ_ZP(56)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_82_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_83_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07282570004463196f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10085752606391907f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_88_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01279677078127861f),
    AI_PACK_INTQ_ZP(49)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01279677078127861f),
    AI_PACK_INTQ_ZP(49)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_92_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_93_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08964952081441879f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14140334725379944f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_97_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014043965376913548f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.41965794563293457f),
    AI_PACK_INTQ_ZP(56)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_101_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01279677078127861f),
    AI_PACK_INTQ_ZP(49)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014165235683321953f),
    AI_PACK_INTQ_ZP(56)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009031950496137142f),
    AI_PACK_INTQ_ZP(16)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0052111344411969185f),
    AI_PACK_INTQ_ZP(-65)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003927791025489569f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006734098307788372f),
    AI_PACK_INTQ_ZP(-21)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0115552032366395f),
    AI_PACK_INTQ_ZP(40)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0056110345758497715f),
    AI_PACK_INTQ_ZP(-51)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025321461725980043f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00437466474249959f, 0.010418856516480446f, 0.009839083068072796f, 0.004526123870164156f, 0.0028984311502426863f, 0.0061350129544734955f, 0.004618009086698294f, 0.003347191493958235f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005325023550540209f, 0.0051657469011843204f, 0.008987667970359325f, 0.010809381492435932f, 0.0053528910502791405f, 0.014904944226145744f, 0.006295694969594479f, 0.006512724794447422f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005707933101803064f, 0.004354145843535662f, 0.005138561595231295f, 0.010759745724499226f, 0.009315899573266506f, 0.004796917550265789f, 0.0037450401578098536f, 0.012705403380095959f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005770204588770866f, 0.005453723482787609f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010873556602746248f, 0.0009736826759763062f, 0.0013239888940006495f, 0.00040189424180425704f, 0.00039589262451045215f, 0.0003612273430917412f, 0.0004077672492712736f, 0.000745602825190872f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.018315179273486137f, 0.027967695146799088f, 0.012903147377073765f, 0.010836620815098286f, 0.01391935907304287f, 0.0245590191334486f, 0.01140388660132885f, 0.027755532413721085f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00453058211132884f, 0.003938581794500351f, 0.004008493851870298f, 0.004426904022693634f, 0.004816792905330658f, 0.004458931274712086f, 0.005532245617359877f, 0.004575106780976057f, 0.004106868524104357f, 0.004723874386399984f, 0.00436537666246295f, 0.003737850347533822f, 0.00480660330504179f, 0.005390187259763479f, 0.004814178217202425f, 0.007374111097306013f, 0.004634198732674122f, 0.0031455429270863533f, 0.004080037586390972f, 0.0027510400395840406f, 0.0037581126671284437f, 0.0055016158148646355f, 0.0048476955853402615f, 0.0030765461269766092f, 0.006704302504658699f, 0.004972459282726049f, 0.0057009304873645306f, 0.003787069581449032f, 0.003290704218670726f, 0.004170001018792391f, 0.003377807093784213f, 0.008048090152442455f, 0.004196780733764172f, 0.00319300452247262f, 0.0034983765799552202f, 0.0028999121859669685f, 0.006811911705881357f, 0.005721746478229761f, 0.004871843848377466f, 0.0036126417107880116f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0074745542369782925f, 0.02363881655037403f, 0.005083499941974878f, 0.0055343955755233765f, 0.004796802531927824f, 0.006107280496507883f, 0.004781365394592285f, 0.008840550668537617f, 0.009007546119391918f, 0.0073271398432552814f, 0.004372636321932077f, 0.019555997103452682f, 0.004482198506593704f, 0.003764709457755089f, 0.0032260583247989416f, 0.00477767875418067f, 0.014729333110153675f, 0.010812859982252121f, 0.009619793854653835f, 0.01799996942281723f, 0.0031605863478034735f, 0.006294142454862595f, 0.004646776244044304f, 0.011106576770544052f, 0.010150151327252388f, 0.0050905668176710606f, 0.011908828280866146f, 0.009223292581737041f, 0.030122937634587288f, 0.016039373353123665f, 0.004612907767295837f, 0.003101668320596218f, 0.004649451468139887f, 0.02306637167930603f, 0.014255661517381668f, 0.007120073307305574f, 0.008545305579900742f, 0.005862210877239704f, 0.014966385439038277f, 0.007177750580012798f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004723630379885435f, 0.00404016301035881f, 0.00302260834723711f, 0.0032832222059369087f, 0.003697272390127182f, 0.003508633701130748f, 0.003953183069825172f, 0.0035322767216712236f, 0.0026434280443936586f, 0.003169694449752569f, 0.004263006150722504f, 0.0036246520467102528f, 0.004542432259768248f, 0.0025666167493909597f, 0.0035642951261252165f, 0.004286516457796097f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036223349161446095f, 0.0020007609855383635f, 0.004944685380905867f, 0.0028870711103081703f, 0.006082193925976753f, 0.0024895276874303818f, 0.003956104628741741f, 0.003667686367407441f, 0.004613391123712063f, 0.0022391797974705696f, 0.0029261272866278887f, 0.0033636789303272963f, 0.004217086359858513f, 0.0030296293552964926f, 0.00923948734998703f, 0.003994029015302658f, 0.003486922010779381f, 0.00312380981631577f, 0.003266512416303158f, 0.002574808895587921f, 0.002393110189586878f, 0.002312161959707737f, 0.003913155756890774f, 0.003363820957019925f, 0.002438667230308056f, 0.0037638936191797256f, 0.003817375050857663f, 0.004002188798040152f, 0.003660954535007477f, 0.0034867303911596537f, 0.0033877615351229906f, 0.0036288544069975615f, 0.002877697581425309f, 0.004737094976007938f, 0.004432385321706533f, 0.005530007649213076f, 0.002557144733145833f, 0.0033601222094148397f, 0.0030990384984761477f, 0.0030005150474607944f, 0.004317740444093943f, 0.00412190705537796f, 0.0028571956790983677f, 0.0028666069265455008f, 0.0035948753356933594f, 0.004052750300616026f, 0.0028648560401052237f, 0.002428386826068163f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010576296597719193f, 0.010724328458309174f, 0.006032812409102917f, 0.00486533809453249f, 0.0069704847410321236f, 0.008391951210796833f, 0.005690595135092735f, 0.00964217260479927f, 0.007310149259865284f, 0.013028860092163086f, 0.005130676552653313f, 0.01114234421402216f, 0.006560783367604017f, 0.004652942530810833f, 0.004197920672595501f, 0.004929571878165007f, 0.009967026300728321f, 0.008455423638224602f, 0.007193567231297493f, 0.0038345230277627707f, 0.01234484277665615f, 0.015443572774529457f, 0.011590170674026012f, 0.008281501941382885f, 0.005697306711226702f, 0.004516883287578821f, 0.005268854089081287f, 0.010318092070519924f, 0.005702998489141464f, 0.008793738670647144f, 0.008726101368665695f, 0.005777270998805761f, 0.009934217669069767f, 0.008342606015503407f, 0.0024299847427755594f, 0.006259689573198557f, 0.0066915699280798435f, 0.008106688037514687f, 0.006160225719213486f, 0.006009227596223354f, 0.020329775288701057f, 0.00697667570784688f, 0.005648868624120951f, 0.016473880037665367f, 0.0036261097993701696f, 0.015800777822732925f, 0.00800836831331253f, 0.00971438828855753f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032188950572162867f, 0.00252572656609118f, 0.002751643070951104f, 0.0029118338134139776f, 0.0035469073336571455f, 0.0030159042216837406f, 0.002992304740473628f, 0.002648932160809636f, 0.002524035982787609f, 0.003333486383780837f, 0.0025252809282392263f, 0.0030796448700129986f, 0.0030507915653288364f, 0.0023833352606743574f, 0.0026459083892405033f, 0.0031087796669453382f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019428558880463243f, 0.0018789510941132903f, 0.0017140022246167064f, 0.0014363410882651806f, 0.002133317058905959f, 0.0019643756095319986f, 0.0015086298808455467f, 0.003359879134222865f, 0.003134373342618346f, 0.002339479746297002f, 0.0027320405934005976f, 0.002419113414362073f, 0.002170349471271038f, 0.0017605089815333486f, 0.0029434540774673223f, 0.0021841637790203094f, 0.0033428899478167295f, 0.0018784737912937999f, 0.0025993085000663996f, 0.001977695617824793f, 0.0030464620795100927f, 0.002864839741960168f, 0.002617091406136751f, 0.001465020701289177f, 0.0017564689042046666f, 0.002139260293915868f, 0.0021971026435494423f, 0.00258378847502172f, 0.002054036594927311f, 0.0029705099295824766f, 0.0027161757461726665f, 0.001663199975155294f, 0.002427817555144429f, 0.0033375886268913746f, 0.0028127948753535748f, 0.0025062079075723886f, 0.0021831896156072617f, 0.002482692478224635f, 0.0028401578310877085f, 0.001680437009781599f, 0.002816158579662442f, 0.0027926082257181406f, 0.0018361069960519671f, 0.0036753006279468536f, 0.002245524199679494f, 0.0017876822967082262f, 0.0034838952124118805f, 0.002225631382316351f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0076553248800337315f, 0.0035416793543845415f, 0.002986486768350005f, 0.0036688740365207195f, 0.006123419385403395f, 0.0030667458195239305f, 0.012712502852082253f, 0.0028206368442624807f, 0.0030858207028359175f, 0.004465654492378235f, 0.004001527559012175f, 0.004332790616899729f, 0.004894666373729706f, 0.005046668462455273f, 0.004081143531948328f, 0.0041782306507229805f, 0.0024576308205723763f, 0.0020949949976056814f, 0.004488348960876465f, 0.002370750065892935f, 0.007701545022428036f, 0.0027218549512326717f, 0.002848200500011444f, 0.007859752513468266f, 0.004284405615180731f, 0.0035940425004810095f, 0.0035862389486283064f, 0.0035272177774459124f, 0.00337950699031353f, 0.0034271283075213432f, 0.0030649469699710608f, 0.00540830148383975f, 0.004581755958497524f, 0.002005612477660179f, 0.0020621938165277243f, 0.003469911403954029f, 0.0018138751620426774f, 0.003031286410987377f, 0.0023617225233465433f, 0.003913989756256342f, 0.0024458891712129116f, 0.0034377407282590866f, 0.0035990453325212f, 0.00465071015059948f, 0.0031058499589562416f, 0.004713066387921572f, 0.001998328370973468f, 0.00317566585727036f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004438953474164009f, 0.003916558809578419f, 0.003919722978025675f, 0.0064059593714773655f, 0.004479429684579372f, 0.0041218651458621025f, 0.0025076500605791807f, 0.003536251140758395f, 0.00402815593406558f, 0.004708565305918455f, 0.0032627382315695286f, 0.004266723990440369f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007384676137007773f, 0.0008772522560320795f, 0.0008348800474777818f, 0.000469392427476123f, 0.000810379977338016f, 0.0005653409170918167f, 0.0005724672228097916f, 0.000756944646127522f, 0.0006451859371736646f, 0.0007751992088742554f, 0.0006794704822823405f, 0.0013089504791423678f, 0.0009337980882264674f, 0.0007567849243059754f, 0.0006407957407645881f, 0.0010119343642145395f, 0.000572944525629282f, 0.0009590701665729284f, 0.0007677646935917437f, 0.0007788012153469026f, 0.000654588860925287f, 0.0008089338662102818f, 0.0005933536449447274f, 0.0006654274184256792f, 0.0012348793679848313f, 0.00033275727764703333f, 0.0007628757739439607f, 0.0008059638785198331f, 0.0005796358454972506f, 0.00047497323248535395f, 0.0005469145835377276f, 0.0005072032217867672f, 0.0005402446258813143f, 0.0005769540439359844f, 0.0009250806760974228f, 0.0009663999662734568f, 0.0008563274168409407f, 0.0006268323631957173f, 0.0007906153914518654f, 0.0010892387945204973f, 0.0010248777689412236f, 0.0008624102338217199f, 0.0013161484384909272f, 0.0009706385899335146f, 0.0009154578438028693f, 0.0007496172329410911f, 0.0004225845623295754f, 0.0008473144844174385f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008460241369903088f, 0.009076351299881935f, 0.008447022177278996f, 0.007783715147525072f, 0.010729841887950897f, 0.007572628557682037f, 0.008109885267913342f, 0.010367090813815594f, 0.010048910044133663f, 0.010898618958890438f, 0.0073833586648106575f, 0.010584349744021893f, 0.006514158099889755f, 0.012574654072523117f, 0.00736309215426445f, 0.008665998466312885f, 0.009194117970764637f, 0.008314600214362144f, 0.009775259532034397f, 0.009447358548641205f, 0.006550576537847519f, 0.008872666396200657f, 0.010226747952401638f, 0.007727497722953558f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002008277690038085f, 0.004611086566001177f, 0.002084203530102968f, 0.0022859012242406607f, 0.004308360628783703f, 0.001627085148356855f, 0.0023395640309900045f, 0.002095813164487481f, 0.0017995300004258752f, 0.003204797627404332f, 0.0018772778566926718f, 0.0020708071533590555f, 0.002815220970660448f, 0.0024868811015039682f, 0.002270556055009365f, 0.003502744249999523f, 0.0022396380081772804f, 0.0027301672380417585f, 0.0034354538656771183f, 0.0028290441259741783f, 0.0024815902579575777f, 0.0026951762847602367f, 0.0025817477144300938f, 0.0026636836118996143f, 0.003068684134632349f, 0.004123574588447809f, 0.0029247866477817297f, 0.0032107937149703503f, 0.002675004303455353f, 0.0010959964711219072f, 0.002509870333597064f, 0.002655923366546631f, 0.0016798205906525254f, 0.0012363357236608863f, 0.0015440336428582668f, 0.0037697632797062397f, 0.0030273371376097202f, 0.003353759180754423f, 0.0017322724452242255f, 0.0033798180520534515f, 0.002662134589627385f, 0.001540591474622488f, 0.002512524137273431f, 0.0031941283959895372f, 0.0022445833310484886f, 0.003125556977465749f, 0.0029953778721392155f, 0.0016051346901804209f, 0.0027609297540038824f, 0.0026914095506072044f, 0.002248884877189994f, 0.0020082853734493256f, 0.0027743226382881403f, 0.0024987279903143644f, 0.002225751057267189f, 0.002958892146125436f, 0.0032046474516391754f, 0.0017389283748343587f, 0.002384309424087405f, 0.0024092814419418573f, 0.002282171742990613f, 0.003874777816236019f, 0.0022408785298466682f, 0.0020500519312918186f, 0.0034319208934903145f, 0.001911190920509398f, 0.0025591570883989334f, 0.002353980205953121f, 0.0017414601752534509f, 0.0020189788192510605f, 0.001418558182194829f, 0.0013050573179498315f, 0.0026710594538599253f, 0.00333130219951272f, 0.0023974068462848663f, 0.002785606076940894f, 0.0026814513839781284f, 0.0018634810112416744f, 0.0024721312802284956f, 0.0034135342575609684f, 0.0028683410491794348f, 0.002338447840884328f, 0.003947404678910971f, 0.002302940469235182f, 0.0027570303063839674f, 0.0016484539955854416f, 0.001976749626919627f, 0.0018376511288806796f, 0.0016454918077215552f, 0.0026708929799497128f, 0.002328060334548354f, 0.0022344153840094805f, 0.0029803509823977947f, 0.003331403946503997f, 0.004114408977329731f, 0.0016325617907568812f, 0.0027714124880731106f, 0.0030748152639716864f, 0.0021305992268025875f, 0.0032204915769398212f, 0.002295693615451455f, 0.002635359298437834f, 0.0026207445189356804f, 0.0017099971882998943f, 0.002814777195453644f, 0.0022260979749262333f, 0.0016384178306907415f, 0.003295664442703128f, 0.0026761749759316444f, 0.002455512760207057f, 0.0026023434475064278f, 0.0021334162447601557f, 0.0015588864916935563f, 0.0028580694925040007f, 0.002532967831939459f, 0.0019734175875782967f, 0.0021947440691292286f, 0.0022621662355959415f, 0.0016985484398901463f, 0.00270468951202929f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008236166089773178f, 0.005652009975165129f, 0.0052919164299964905f, 0.005043473560363054f, 0.002560873283073306f, 0.0033081616275012493f, 0.008471035398542881f, 0.0026598621625453234f, 0.005507628433406353f, 0.004821368958801031f, 0.006162412464618683f, 0.004953536670655012f, 0.0023811098653823137f, 0.0029202820733189583f, 0.005424367729574442f, 0.0027979901060462f, 0.0039644986391067505f, 0.0030306854750961065f, 0.0019559555221349f, 0.006290833931416273f, 0.003376670414581895f, 0.004718791227787733f, 0.006131901405751705f, 0.004785302095115185f, 0.0018437267281115055f, 0.007976523600518703f, 0.005428393837064505f, 0.003759055631235242f, 0.004255235660821199f, 0.00955512747168541f, 0.004323693457990885f, 0.00451315613463521f, 0.0029089893214404583f, 0.006427840795367956f, 0.008407901972532272f, 0.005743677262216806f, 0.006574943196028471f, 0.003836025483906269f, 0.005726334173232317f, 0.004886155016720295f, 0.001735713449306786f, 0.009372210130095482f, 0.002635020762681961f, 0.004386004060506821f, 0.0045157684944570065f, 0.0029721998143941164f, 0.006176135502755642f, 0.004403191152960062f, 0.0037606291007250547f, 0.005808501038700342f, 0.0072455378249287605f, 0.009166575968265533f, 0.003423071000725031f, 0.004988592583686113f, 0.004697774536907673f, 0.0030385104473680258f, 0.003133761929348111f, 0.006546501070261002f, 0.004962978418916464f, 0.0038198113907128572f, 0.004217149224132299f, 0.0030080254655331373f, 0.008448153734207153f, 0.0050704521127045155f, 0.0022910067345947027f, 0.004751993343234062f, 0.006582741625607014f, 0.002910234034061432f, 0.00376460631377995f, 0.00433812802657485f, 0.004844838287681341f, 0.0063125682063400745f, 0.003769390983507037f, 0.004366274457424879f, 0.003298291703686118f, 0.0030349320732057095f, 0.004425251390784979f, 0.0030971469823271036f, 0.004555004648864269f, 0.0018977634608745575f, 0.0038917746860533953f, 0.0041558025404810905f, 0.003379354951903224f, 0.005087532103061676f, 0.004170370753854513f, 0.010417773388326168f, 0.00676810322329402f, 0.005272256210446358f, 0.005586395505815744f, 0.0065111699514091015f, 0.0034465345088392496f, 0.004107695072889328f, 0.0055904085747897625f, 0.003962485119700432f, 0.0032845684327185154f, 0.0034921930637210608f, 0.005338500253856182f, 0.0021545342169702053f, 0.003688742406666279f, 0.0034749512560665607f, 0.005087489262223244f, 0.0039663915522396564f, 0.002423502504825592f, 0.005427059717476368f, 0.005678171757608652f, 0.004264297429472208f, 0.008500128984451294f, 0.002892612013965845f, 0.0022885333746671677f, 0.004128430504351854f, 0.004695009905844927f, 0.008072084747254848f, 0.011249572038650513f, 0.0033085113391280174f, 0.005685632117092609f, 0.006025327835232019f, 0.005604040343314409f, 0.0033237580209970474f, 0.003800236852839589f, 0.002841281471773982f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004125833511352539f, 0.004421834833920002f, 0.0016766770277172327f, 0.003719183849170804f, 0.0051565589383244514f, 0.004356250632554293f, 0.0018726987764239311f, 0.0034379593562334776f, 0.0017740464536473155f, 0.0034796667750924826f, 0.004259159322828054f, 0.003592046210542321f, 0.004776159767061472f, 0.0031962785869836807f, 0.0025479018222540617f, 0.0033463810104876757f, 0.004299435764551163f, 0.0036630667746067047f, 0.003328988328576088f, 0.004516064189374447f, 0.0049633909948170185f, 0.00472854683175683f, 0.0030868996400386095f, 0.0034365132451057434f, 0.0049854847602546215f, 0.0021295263431966305f, 0.0018440099665895104f, 0.0033610158134251833f, 0.0019074290757998824f, 0.0032353857532143593f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005112092476338148f, 0.0005935250082984567f, 0.0006839239504188299f, 0.0007831467082723975f, 0.0008976889657787979f, 0.0005810462171211839f, 0.0005576133262366056f, 0.0009602375794202089f, 0.000722368189599365f, 0.0006112672854214907f, 0.0007186242728494108f, 0.001164933550171554f, 0.0005013548070564866f, 0.0008258032030425966f, 0.00044940889347344637f, 0.0007064509554766119f, 0.0004852623678743839f, 0.0006182251963764429f, 0.0006614293670281768f, 0.0010103856911882758f, 0.0007533316966146231f, 0.000719358678907156f, 0.0008406866108998656f, 0.0006788180908188224f, 0.0007656110101379454f, 0.0006684939144179225f, 0.000511349062435329f, 0.0007445854134857655f, 0.0005883962148800492f, 0.0004594675556290895f, 0.0005296859890222549f, 0.0007913689478300512f, 0.0005860705859959126f, 0.000941772828809917f, 0.0006914871628396213f, 0.0006128485547378659f, 0.0006050735828466713f, 0.0004732137022074312f, 0.0007465646485798061f, 0.0006144101498648524f, 0.0005865457933396101f, 0.0006249535363167524f, 0.000683116028085351f, 0.0009435162064619362f, 0.0006165085942484438f, 0.0005579165299423039f, 0.0006726408610120416f, 0.000659563927911222f, 0.0012271004961803555f, 0.0005795236211270094f, 0.0006194967427290976f, 0.000603355176281184f, 0.0005987187614664435f, 0.0005503584980033338f, 0.0006469138897955418f, 0.0006645246176049113f, 0.0005380632937885821f, 0.0009358186507597566f, 0.0005172215751372278f, 0.0005955048836767673f, 0.0006102779880166054f, 0.0005894402856938541f, 0.0008642566972412169f, 0.0006598603795282543f, 0.0007581443060189486f, 0.00047197233652696013f, 0.000643198611214757f, 0.0007103917305357754f, 0.000542084570042789f, 0.0007176393992267549f, 0.00047087910934351385f, 0.000676032854244113f, 0.0007198392413556576f, 0.0006293267360888422f, 0.0008707137312740088f, 0.0005158528801985085f, 0.0007752918172627687f, 0.0007151184254325926f, 0.00047938383067958057f, 0.0006885776529088616f, 0.0003829230845440179f, 0.0007487999391742051f, 0.0007815195131115615f, 0.0006130513502284884f, 0.0004679207340814173f, 0.0007157512591220438f, 0.0004513677558861673f, 0.0005694411811418831f, 0.0008066489244811237f, 0.0010329924989491701f, 0.0007094972534105182f, 0.0006694412440992892f, 0.0006693596369586885f, 0.0006788697210140526f, 0.0004002355271950364f, 0.0010563533287495375f, 0.0006484909681603312f, 0.0007512480369769037f, 0.0005934957880526781f, 0.0005604109028354287f, 0.0005146095645613968f, 0.0007687034667469561f, 0.0009363959543406963f, 0.0005299692275002599f, 0.0008706508087925613f, 0.0006588844116777182f, 0.000602749059908092f, 0.000640051846858114f, 0.0007910326239652932f, 0.0009763625566847622f, 0.0005146646872162819f, 0.0009572498383931816f, 0.0009364108555018902f, 0.0007321458542719483f, 0.0006920027080923319f, 0.0006874693790450692f, 0.000605838664341718f, 0.0006726901046931744f, 0.0009420138085260987f, 0.0007825000793673098f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004632171709090471f, 0.006860706955194473f, 0.005121688358485699f, 0.005452453624457121f, 0.004427540581673384f, 0.005475382786244154f, 0.005251751746982336f, 0.003997963387519121f, 0.004372377879917622f, 0.00469984021037817f, 0.005301111843436956f, 0.0037903189659118652f, 0.0034425274934619665f, 0.004249372985213995f, 0.0040237572975456715f, 0.003761101048439741f, 0.005509515758603811f, 0.00364514347165823f, 0.005567644257098436f, 0.0032654849346727133f, 0.004858266096562147f, 0.00474696746096015f, 0.0038964480627328157f, 0.004307508934289217f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015787753509357572f, 0.0018493173411116004f, 0.001776252523995936f, 0.0015735612250864506f, 0.0010573928011581302f, 0.0021659336052834988f, 0.002136547351256013f, 0.002275357721373439f, 0.0025679764803498983f, 0.0026211210060864687f, 0.0017005236586555839f, 0.002307769376784563f, 0.0023595455568283796f, 0.0019873431883752346f, 0.002003384754061699f, 0.0026948549784719944f, 0.0019177012145519257f, 0.003081317525357008f, 0.0015119859017431736f, 0.0017926811706274748f, 0.0017450316809117794f, 0.0019153956091031432f, 0.0013332109665498137f, 0.002504718955606222f, 0.001746873022057116f, 0.001469680923037231f, 0.0025508578401058912f, 0.0019186903955414891f, 0.0019753205124288797f, 0.0015413688961416483f, 0.0016646457370370626f, 0.0020481848623603582f, 0.00215171929448843f, 0.002097024815157056f, 0.0014818342169746757f, 0.001739239552989602f, 0.0019780078437179327f, 0.0019713635556399822f, 0.001218831050209701f, 0.0014171561924740672f, 0.0025014218408614397f, 0.0008980726706795394f, 0.0019500303314998746f, 0.001479570521041751f, 0.0019208852900192142f, 0.001762357191182673f, 0.0021551535464823246f, 0.002276079263538122f, 0.001976303057745099f, 0.0014423617394641042f, 0.002087030094116926f, 0.002768812468275428f, 0.0030996741261333227f, 0.0016369911609217525f, 0.0023116690572351217f, 0.001397244050167501f, 0.0009749900782480836f, 0.002104602986946702f, 0.0015118325827643275f, 0.0017051600152626634f, 0.0019424178171902895f, 0.0011802285443991423f, 0.0017883602995425463f, 0.001961993984878063f, 0.001403264468535781f, 0.001565236714668572f, 0.00152963912114501f, 0.0016080520581454039f, 0.0025608777068555355f, 0.0018189256079494953f, 0.0009339271928183734f, 0.0015606745146214962f, 0.0015055882977321744f, 0.0019182686228305101f, 0.0016371646197512746f, 0.0019394231494516134f, 0.0015640254132449627f, 0.0018348648445680737f, 0.001659961766563356f, 0.0020074620842933655f, 0.0009861269500106573f, 0.0021807376760989428f, 0.0027429666370153427f, 0.002774988766759634f, 0.001867947750724852f, 0.002316809259355068f, 0.0022948943078517914f, 0.001720195054076612f, 0.0012431996874511242f, 0.0023325327783823013f, 0.0013425953220576048f, 0.0035722965840250254f, 0.0014791483990848064f, 0.002097209682688117f, 0.001825736602768302f, 0.0022586865816265345f, 0.0016666112933307886f, 0.0010822860058397055f, 0.0024002057034522295f, 0.0017642098246142268f, 0.0025901126209646463f, 0.002075875410810113f, 0.0034444730263203382f, 0.0024619370233267546f, 0.001583905192092061f, 0.001725141191855073f, 0.001428204239346087f, 0.0027142830658704042f, 0.0026044172700494528f, 0.0014030997408553958f, 0.002070948015898466f, 0.00118718680460006f, 0.0012639426859095693f, 0.0018434590892866254f, 0.0013719290727749467f, 0.001438890234567225f, 0.0011806749971583486f, 0.0012641313951462507f, 0.0016342755407094955f, 0.00182820251211524f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0050567868165671825f, 0.002014519413933158f, 0.0034164946991950274f, 0.00732416519895196f, 0.008815759792923927f, 0.008274760097265244f, 0.003265662584453821f, 0.004407964646816254f, 0.003460631472989917f, 0.0028890492394566536f, 0.0034462185576558113f, 0.004691130015999079f, 0.004009852651506662f, 0.005207159090787172f, 0.007317293435335159f, 0.004371499177068472f, 0.004805939272046089f, 0.0034435491543263197f, 0.004588987212628126f, 0.00346078141592443f, 0.003658982692286372f, 0.0030795729253441095f, 0.012977181002497673f, 0.0033729071728885174f, 0.003807509783655405f, 0.0033123348839581013f, 0.002908166265115142f, 0.0043015144765377045f, 0.004223617725074291f, 0.007809762377291918f, 0.006191420368850231f, 0.004564903676509857f, 0.007568255066871643f, 0.004070809110999107f, 0.0035460563376545906f, 0.005049731116741896f, 0.006174918729811907f, 0.005331453867256641f, 0.012744457460939884f, 0.0025676097720861435f, 0.002941882936283946f, 0.007121183443814516f, 0.005956267938017845f, 0.00418286956846714f, 0.0020586627069860697f, 0.008735992014408112f, 0.006070571020245552f, 0.005486130714416504f, 0.006225275341421366f, 0.00473736971616745f, 0.004358314443379641f, 0.0031342429574579f, 0.0024238666519522667f, 0.004163254052400589f, 0.006118650082498789f, 0.006074497941881418f, 0.008484979160130024f, 0.003719142870977521f, 0.004884021822363138f, 0.0033650801051408052f, 0.0041087958961725235f, 0.015105965547263622f, 0.002020490588620305f, 0.003358457935974002f, 0.004249385558068752f, 0.002401011763140559f, 0.00418124021962285f, 0.0038981293328106403f, 0.0061968411318957806f, 0.008111233823001385f, 0.015289092436432838f, 0.004372905474156141f, 0.004246036987751722f, 0.004384045023471117f, 0.00394338509067893f, 0.004384771455079317f, 0.0039423927664756775f, 0.004242732189595699f, 0.0028010839596390724f, 0.002827143296599388f, 0.010013961233198643f, 0.008219344541430473f, 0.004615692421793938f, 0.0016256649978458881f, 0.005053043365478516f, 0.0035157043021172285f, 0.0030769319273531437f, 0.00606082659214735f, 0.006733604706823826f, 0.003253198228776455f, 0.003394077764824033f, 0.003226169152185321f, 0.006272678263485432f, 0.0038563066627830267f, 0.007659970782697201f, 0.002800408750772476f, 0.003409414552152157f, 0.003798295743763447f, 0.00438945135101676f, 0.00386064569465816f, 0.004800400696694851f, 0.00764344772323966f, 0.003966337535530329f, 0.007947426289319992f, 0.008435646072030067f, 0.010469276458024979f, 0.008615111000835896f, 0.0021609654650092125f, 0.0034678413067013025f, 0.0030824742279946804f, 0.0018674503080546856f, 0.013520030304789543f, 0.007242527324706316f, 0.0030996419955044985f, 0.008578557521104813f, 0.006131222005933523f, 0.027508972212672234f, 0.005298187956213951f, 0.0035976716317236423f, 0.006457046139985323f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004063464235514402f, 0.0018323460826650262f, 0.002179117873311043f, 0.002076252130791545f, 0.0037742555141448975f, 0.0033631068654358387f, 0.0018918788991868496f, 0.0039783017709851265f, 0.004066950175911188f, 0.002058023354038596f, 0.0042835501953959465f, 0.003645131131634116f, 0.0020900131203234196f, 0.004795175977051258f, 0.002115163253620267f, 0.0021821199916303158f, 0.003413646249100566f, 0.003465853398665786f, 0.003665287047624588f, 0.004272372927516699f, 0.002201014431193471f, 0.003792493836954236f, 0.00408526323735714f, 0.004987427499145269f, 0.003960269503295422f, 0.004002643283456564f, 0.0035130551550537348f, 0.00416629109531641f, 0.0044939350336790085f, 0.0033379762899130583f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007497076294384897f, 0.0005706548690795898f, 0.0005712526617571712f, 0.0006104218191467226f, 0.0006083385669626296f, 0.0006726101855747402f, 0.0006836501997895539f, 0.0006159170297905803f, 0.0005319315241649747f, 0.0004906512913294137f, 0.0006399092962965369f, 0.0008861421956680715f, 0.0005302901845425367f, 0.0006259934743866324f, 0.0006968939560465515f, 0.0005949935293756425f, 0.0008072596974670887f, 0.00048550008796155453f, 0.0005265039508230984f, 0.0005830777809023857f, 0.0005547875771299005f, 0.0007456431048922241f, 0.0004668734618462622f, 0.0005781511426903307f, 0.0005999321583658457f, 0.0005132590304128826f, 0.000752498977817595f, 0.0006925498601049185f, 0.000832021702080965f, 0.00043255244963802397f, 0.0006627137190662324f, 0.0007779847364872694f, 0.0006465998012572527f, 0.0009695912594906986f, 0.0004906212561763823f, 0.0005255712894722819f, 0.000596349302213639f, 0.0007698431145399809f, 0.0006792218191549182f, 0.000784353178460151f, 0.0007537388009950519f, 0.0006753896013833582f, 0.0009635594324208796f, 0.0006014464306645095f, 0.0008216730202548206f, 0.0005876764189451933f, 0.000785685726441443f, 0.0006567534292116761f, 0.0006260664667934179f, 0.0007477599428966641f, 0.0004436445015016943f, 0.0006175372400321066f, 0.0007019478944130242f, 0.00036760064540430903f, 0.0007950448780320585f, 0.00070126325590536f, 0.0004911880823783576f, 0.0004051247669849545f, 0.000525575247593224f, 0.0007353093824349344f, 0.0005915691726841033f, 0.0008084395667538047f, 0.0006333370693027973f, 0.0006436474504880607f, 0.0006323158740997314f, 0.000552588258869946f, 0.0006457375711761415f, 0.0008024093112908304f, 0.0006107530789449811f, 0.0009303890983574092f, 0.0008313104044646025f, 0.0006717878277413547f, 0.0005801371298730373f, 0.0007263818988576531f, 0.00044505964615382254f, 0.0008182202000170946f, 0.00047165315481834114f, 0.0006899042055010796f, 0.0005504621076397598f, 0.0006766205769963562f, 0.000656191143207252f, 0.0008338822517544031f, 0.000600974599365145f, 0.0008007669821381569f, 0.0007341736927628517f, 0.0009527349029667675f, 0.000806083669885993f, 0.0008341300417669117f, 0.0008293269784189761f, 0.0006980483885854483f, 0.0006114990101195872f, 0.0008500919211655855f, 0.0005597581621259451f, 0.0006312940968200564f, 0.0007700523128733039f, 0.0007181677501648664f, 0.0010511958971619606f, 0.000985044869594276f, 0.0006876481347717345f, 0.0005299104377627373f, 0.0006553390994668007f, 0.0005646118661388755f, 0.0008502406417392194f, 0.0007993051549419761f, 0.0006626772228628397f, 0.0006760224350728095f, 0.000563282344955951f, 0.0006625541136600077f, 0.0006243419484235346f, 0.0006186386453919113f, 0.0009157945169135928f, 0.0007456274470314384f, 0.0007933195447549224f, 0.0005538261611945927f, 0.000599354796577245f, 0.0005580582073889673f, 0.0007234058575704694f, 0.0005701491609215736f, 0.0005281802732497454f, 0.0006938512669876218f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004719266202300787f, 0.003388409735634923f, 0.0038057141937315464f, 0.004244765732437372f, 0.004854869097471237f, 0.003215754870325327f, 0.004018958192318678f, 0.0033333792816847563f, 0.003995475824922323f, 0.004785500001162291f, 0.003690622979775071f, 0.003908749204128981f, 0.003920591436326504f, 0.004444560036063194f, 0.004254255909472704f, 0.0032269200310111046f, 0.0044106896966695786f, 0.0032473772298544645f, 0.0037147863768041134f, 0.0058654858730733395f, 0.004916787147521973f, 0.004428268410265446f, 0.0043507907539606094f, 0.004781559109687805f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001640290836803615f, 0.0012916300911456347f, 0.0015553472330793738f, 0.0012066933559253812f, 0.0017270242096856236f, 0.002011575037613511f, 0.0016336007975041866f, 0.001910050050355494f, 0.0014850635780021548f, 0.001856245449744165f, 0.0023171536158770323f, 0.0015658759512007236f, 0.0018838533433154225f, 0.001127603929489851f, 0.0011124334996566176f, 0.001909809187054634f, 0.0013577531790360808f, 0.0016686269082129002f, 0.0015145373763516545f, 0.001968469237908721f, 0.0012968686642125249f, 0.0014074090868234634f, 0.0010462159989401698f, 0.0017249641241505742f, 0.0014287205412983894f, 0.001402664347551763f, 0.0020246258936822414f, 0.0014412954915314913f, 0.0017551350174471736f, 0.0018091559177264571f, 0.0015736168716102839f, 0.0024289553984999657f, 0.0020217886194586754f, 0.0012116099242120981f, 0.0010986358392983675f, 0.0015955754788592458f, 0.0016116651240736246f, 0.0013719568960368633f, 0.001197164529003203f, 0.0022646025754511356f, 0.0018304695840924978f, 0.0012410227209329605f, 0.0015194364823400974f, 0.0017200943548232317f, 0.001501707942225039f, 0.001318395254202187f, 0.0013435084838420153f, 0.0014330949634313583f, 0.0013223385903984308f, 0.0020316194277256727f, 0.0016473130090162158f, 0.002180743496865034f, 0.0013788490323349833f, 0.0019336796831339598f, 0.0019179764203727245f, 0.0028449485544115305f, 0.002271012170240283f, 0.00184748531319201f, 0.0011959450785070658f, 0.0016855994472280145f, 0.0017730403924360871f, 0.0016750453505665064f, 0.0015105073107406497f, 0.0021227963734418154f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005169953219592571f, 0.00588609091937542f, 0.00556195480749011f, 0.004259530920535326f, 0.0017177325207740068f, 0.0026177894324064255f, 0.0028424174524843693f, 0.0033566916827112436f, 0.005328347906470299f, 0.003964091185480356f, 0.0035510538145899773f, 0.007854675874114037f, 0.0049758064560592175f, 0.005554764997214079f, 0.00382068008184433f, 0.003932363353669643f, 0.00528032798320055f, 0.002191543113440275f, 0.007848704233765602f, 0.0039702169597148895f, 0.006989903748035431f, 0.002785999793559313f, 0.008143792860209942f, 0.002831896534189582f, 0.0032417592592537403f, 0.0036554797552525997f, 0.0026861773803830147f, 0.0019142798846587539f, 0.005249340087175369f, 0.0038211760111153126f, 0.007119465619325638f, 0.004317074548453093f, 0.0023138695396482944f, 0.010607555508613586f, 0.0034488774836063385f, 0.003885886864736676f, 0.004443312529474497f, 0.0036742491647601128f, 0.004539660643786192f, 0.003091265680268407f, 0.002205576514825225f, 0.002600939478725195f, 0.005551592912524939f, 0.0059792520478367805f, 0.0036579011939466f, 0.004010003060102463f, 0.001966121606528759f, 0.0033509950153529644f, 0.00493075605481863f, 0.0036479767877608538f, 0.004766456317156553f, 0.002212758408859372f, 0.004186637233942747f, 0.005293210037052631f, 0.003925141878426075f, 0.003270104294642806f, 0.0028684367425739765f, 0.0027383959386497736f, 0.0047861491329967976f, 0.0036379429511725903f, 0.0076110707595944405f, 0.004015558399260044f, 0.004852233454585075f, 0.00227535143494606f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0027837976813316345f, 0.0024260319769382477f, 0.002896286081522703f, 0.005679967813193798f, 0.004123578313738108f, 0.004463026765733957f, 0.003639376722276211f, 0.004455841612070799f, 0.0032259344588965178f, 0.0023875776678323746f, 0.004235777538269758f, 0.0036056835670024157f, 0.003984623122960329f, 0.004460218362510204f, 0.004751925356686115f, 0.002990658162161708f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004901953507214785f, 0.0006063267355784774f, 0.0007464796653948724f, 0.0007684143492951989f, 0.000735447567421943f, 0.0004716237017419189f, 0.0005669462261721492f, 0.000775619235355407f, 0.0006035015103407204f, 0.0005722735077142715f, 0.0007032977882772684f, 0.0004714318783953786f, 0.000659659446682781f, 0.0005594806279987097f, 0.0006891704397276044f, 0.0007268454064615071f, 0.0007374614360742271f, 0.0006515494314953685f, 0.000568749790545553f, 0.0007568737491965294f, 0.0006097445730119944f, 0.0004316587292123586f, 0.0007733074598945677f, 0.0008866713615134358f, 0.0005706119700334966f, 0.00044575065840035677f, 0.0006056854617781937f, 0.0005380332586355507f, 0.0006490363157354295f, 0.001073573948815465f, 0.0004236966196913272f, 0.0005665920907631516f, 0.0006041908054612577f, 0.0006941023748368025f, 0.0005686160293407738f, 0.000517232168931514f, 0.0006606976967304945f, 0.0009909578366205096f, 0.0005507597816176713f, 0.0006453701644204557f, 0.0004696807009167969f, 0.0007316399132832885f, 0.0006752884946763515f, 0.0005833276081830263f, 0.0007086634286679327f, 0.0006422488950192928f, 0.0005328099359758198f, 0.0007572855683974922f, 0.0006048023351468146f, 0.0006315517239272594f, 0.0006531758117489517f, 0.0010556657798588276f, 0.0006299717351794243f, 0.000570611038710922f, 0.0005459305830299854f, 0.0004498052876442671f, 0.0006084752385504544f, 0.0005096025997772813f, 0.0003856381226796657f, 0.0009170347475446761f, 0.00041012256406247616f, 0.0007903450168669224f, 0.0007163298432715237f, 0.0004310069780331105f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005386722274124622f, 0.007207043934613466f, 0.004892646335065365f, 0.00746592041105032f, 0.004865752998739481f, 0.0058369324542582035f, 0.004499171394854784f, 0.007199189625680447f, 0.005349879153072834f, 0.007511623203754425f, 0.00587559025734663f, 0.0057583097368478775f, 0.0065966383554041386f, 0.004923766013234854f, 0.006728203035891056f, 0.005341355223208666f, 0.004808473866432905f, 0.006564004346728325f, 0.006139565259218216f, 0.005168532487004995f, 0.0070877717807888985f, 0.006080346181988716f, 0.007460571825504303f, 0.005942655261605978f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012757312506437302f, 0.0015401304699480534f, 0.0011712328996509314f, 0.0017563096480444074f, 0.002185644581913948f, 0.001277773641049862f, 0.0011801238870248199f, 0.001978431362658739f, 0.0012083929032087326f, 0.0015241227811202407f, 0.0008791793952696025f, 0.0014846340054646134f, 0.0022542444057762623f, 0.001333301654085517f, 0.001461770967580378f, 0.002185475779697299f, 0.0014766940148547292f, 0.001500153448432684f, 0.001746131805703044f, 0.0013601490063592792f, 0.001600302872247994f, 0.0009656716138124466f, 0.0013569619040936232f, 0.0013688791077584028f, 0.0011659316951408982f, 0.0010777113493531942f, 0.0010760013246908784f, 0.0012711265590041876f, 0.0018742477986961603f, 0.001687578042037785f, 0.001713226898573339f, 0.0012147475499659777f, 0.001999942120164633f, 0.0013072286965325475f, 0.0008909043972380459f, 0.002468927763402462f, 0.0016348573844879866f, 0.001359386369585991f, 0.0012948699295520782f, 0.0010590119054540992f, 0.0017103577265515924f, 0.0014670360833406448f, 0.0009481924353167415f, 0.0020471143070608377f, 0.001245128340087831f, 0.0012542854528874159f, 0.0008556519751437008f, 0.0011326376115903258f, 0.0008004112169146538f, 0.0012992373667657375f, 0.0019958154298365116f, 0.0015243719099089503f, 0.0015493700047954917f, 0.0014051245525479317f, 0.0014491964830085635f, 0.0008744950755499303f, 0.0018967234063893557f, 0.0014166708569973707f, 0.0014105280861258507f, 0.0014739978360012174f, 0.00195659464225173f, 0.0012349003227427602f, 0.000884189095813781f, 0.0007660133996978402f, 0.0020280510652810335f, 0.002039036713540554f, 0.0016466157976537943f, 0.0009988592937588692f, 0.0015077251009643078f, 0.0015734345652163029f, 0.001593104680068791f, 0.0012370727490633726f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005173306446522474f, 0.0038920375518500805f, 0.005000544246286154f, 0.003640112467110157f, 0.0025039000902324915f, 0.0037964321672916412f, 0.007870940491557121f, 0.001776800025254488f, 0.0029314104467630386f, 0.004270980134606361f, 0.005316681228578091f, 0.0036124824546277523f, 0.00461340369656682f, 0.003797207958996296f, 0.004645299632102251f, 0.0025372023228555918f, 0.0035579351242631674f, 0.00425515603274107f, 0.0027096085250377655f, 0.005796109791845083f, 0.004098127130419016f, 0.004895535297691822f, 0.004451977554708719f, 0.003410285571590066f, 0.004453570116311312f, 0.007809102535247803f, 0.00714712543413043f, 0.0022875522263348103f, 0.003129740944132209f, 0.005856122821569443f, 0.007899513468146324f, 0.0027609667740762234f, 0.0016233284259214997f, 0.003271650755777955f, 0.006131577771157026f, 0.003526664339005947f, 0.00548025406897068f, 0.0033740131184458733f, 0.003023579018190503f, 0.004143933765590191f, 0.0026458047796040773f, 0.0033488068729639053f, 0.01742827333509922f, 0.00412179296836257f, 0.0077585335820913315f, 0.003911404404789209f, 0.015104767866432667f, 0.005826102569699287f, 0.007983284071087837f, 0.00810085516422987f, 0.005251895170658827f, 0.00396758783608675f, 0.005828407127410173f, 0.006215677596628666f, 0.002094259485602379f, 0.007547867484390736f, 0.0025664176791906357f, 0.0038236610125750303f, 0.003519904101267457f, 0.005036179907619953f, 0.0029838252812623978f, 0.006877287290990353f, 0.011303508654236794f, 0.012114286422729492f, 0.0026372859720140696f, 0.0032014702446758747f, 0.0030405642464756966f, 0.003893327433615923f, 0.0022300868295133114f, 0.004640314262360334f, 0.004620479419827461f, 0.005337740760296583f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002134415553882718f, 0.0035327288787811995f, 0.002709329593926668f, 0.003323177807033062f, 0.002477956237271428f, 0.0036879582330584526f, 0.004064029548317194f, 0.002386595821008086f, 0.004960741847753525f, 0.0024357116781175137f, 0.004316148813813925f, 0.003781791776418686f, 0.0028432542458176613f, 0.005132460966706276f, 0.0021279712673276663f, 0.0028448710218071938f, 0.002458997303619981f, 0.0044097695499658585f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00040440441807731986f, 0.0006104916683398187f, 0.0005863581318408251f, 0.0005619313451461494f, 0.0004970247973687947f, 0.0006421937141567469f, 0.0008206179481931031f, 0.00038873794255778193f, 0.000882976280990988f, 0.0006222314550541341f, 0.0004211415071040392f, 0.0006793664069846272f, 0.0006355743389576674f, 0.000721318123396486f, 0.0006273205508477986f, 0.0005354033201001585f, 0.000894234050065279f, 0.0008150124340318143f, 0.0006179893389344215f, 0.0006491492968052626f, 0.0008731376728974283f, 0.0006806927267462015f, 0.000742751348298043f, 0.0005002765101380646f, 0.0007357980357483029f, 0.0006935005076229572f, 0.0008611639495939016f, 0.0007597810472361743f, 0.0008938995888456702f, 0.0004969867877662182f, 0.0008088146569207311f, 0.0006709513254463673f, 0.000801032583694905f, 0.0005285680526867509f, 0.0003355368389748037f, 0.0004875710583291948f, 0.0004817413864657283f, 0.00041142612462863326f, 0.0008085460285656154f, 0.000709087064024061f, 0.0004647504829335958f, 0.0005903466371819377f, 0.0008403817773796618f, 0.0005255078431218863f, 0.0007052748114801943f, 0.0006759294192306697f, 0.0007725207251496613f, 0.0005748241674154997f, 0.0004998063668608665f, 0.0008482934790663421f, 0.0007152481703087687f, 0.0005342969088815153f, 0.0005522146238945425f, 0.0004109180881641805f, 0.0006253141327761114f, 0.0006433213711716235f, 0.0004748030623886734f, 0.0009453308884985745f, 0.0005790198338218033f, 0.0007201040862128139f, 0.0005122506991028786f, 0.00042075294186361134f, 0.0006601203349418938f, 0.0004685331950895488f, 0.0007828993257135153f, 0.000710385967977345f, 0.0007499685743823647f, 0.0006835180683992803f, 0.0008444160339422524f, 0.0005225338391028345f, 0.0004983581020496786f, 0.0005309398984536529f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0063530695624649525f, 0.004347199108451605f, 0.004313770681619644f, 0.004635276738554239f, 0.0054725720547139645f, 0.007140770088881254f, 0.006452471483498812f, 0.004761433694511652f, 0.003569376887753606f, 0.007990310899913311f, 0.005923388060182333f, 0.0063164979219436646f, 0.005481930915266275f, 0.004627523012459278f, 0.0035864044912159443f, 0.006090341601520777f, 0.005345019977539778f, 0.005244093481451273f, 0.005525433458387852f, 0.005259948782622814f, 0.00870985072106123f, 0.005656827706843615f, 0.004745011683553457f, 0.004247777163982391f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009959465824067593f, 0.0010969113791361451f, 0.0010047225514426827f, 0.0013350935187190771f, 0.0014110211050137877f, 0.000989336404018104f, 0.001346554490737617f, 0.001707916148006916f, 0.001003238488920033f, 0.001575390575453639f, 0.0009658649796620011f, 0.0009933548280969262f, 0.0011745431693270802f, 0.0014502308331429958f, 0.0014530654298141599f, 0.0016269192565232515f, 0.001692993682809174f, 0.0011129871709272265f, 0.0009416915127076209f, 0.0019565841648727655f, 0.001420901040546596f, 0.0010298131965100765f, 0.0015201503410935402f, 0.0014962414279580116f, 0.0016818814910948277f, 0.0007635172223672271f, 0.0012379103573039174f, 0.001116391969844699f, 0.0009098296868614852f, 0.0010343968169763684f, 0.0014738499885424972f, 0.0010486269602552056f, 0.0012933752732351422f, 0.0013678936520591378f, 0.0016810280503705144f, 0.0011236679274588823f, 0.000915148644708097f, 0.0014434834010899067f, 0.0012034806422889233f, 0.0009137755841948092f, 0.001232862239703536f, 0.0014362757792696357f, 0.0009712420869618654f, 0.000870805699378252f, 0.0011651976965367794f, 0.0008829551516100764f, 0.0010795921552926302f, 0.001140517764724791f, 0.0013256537495180964f, 0.0012561579933390021f, 0.0009233638411387801f, 0.0010816904250532389f, 0.001216587028466165f, 0.001047843019478023f, 0.000873947748914361f, 0.0014098281972110271f, 0.0011164704337716103f, 0.0009921409655362368f, 0.0008285416988655925f, 0.0011901595862582326f, 0.0011625817278400064f, 0.0010043642250820994f, 0.0008180385921150446f, 0.0010873303981497884f, 0.0015145983779802918f, 0.0013404898345470428f, 0.0008535012602806091f, 0.0011992489453405142f, 0.001137042767368257f, 0.0014103890862315893f, 0.0005994731327518821f, 0.0013326273765414953f, 0.001414238242432475f, 0.0008295821608044207f, 0.0011158155975863338f, 0.0009372601052746177f, 0.0012855714885517955f, 0.0010881779016926885f, 0.001425081747584045f, 0.0011694702552631497f, 0.0009106638026423752f, 0.0013133562169969082f, 0.0009146312368102372f, 0.0010299936402589083f, 0.0013543755048885942f, 0.0014188311761245131f, 0.001460381899960339f, 0.0013459970941767097f, 0.0013188838493078947f, 0.0010332276578992605f, 0.001352919265627861f, 0.0015293810283765197f, 0.0010444492800161242f, 0.0010547346901148558f, 0.0011531549971550703f, 0.0014270226238295436f, 0.0017719387542456388f, 0.001084128045476973f, 0.0012674371246248484f, 0.0009624303202144802f, 0.0011193067766726017f, 0.0014586156466975808f, 0.0015622947830706835f, 0.0014183979947119951f, 0.0008374443277716637f, 0.0017945533618330956f, 0.0012740944512188435f, 0.0009739363449625671f, 0.0024477182887494564f, 0.0008787919068709016f, 0.00149619544390589f, 0.0006416926044039428f, 0.0009457910200580955f, 0.0019447584636509418f, 0.0011290174443274736f, 0.0009595014271326363f, 0.0016271666390821338f, 0.0012474433751776814f, 0.0010306837502866983f, 0.000988884479738772f, 0.001329860300756991f, 0.0008716327720321715f, 0.001216782140545547f, 0.001157137332484126f, 0.0008083975408226252f, 0.001537123927846551f, 0.0015748124569654465f, 0.001026302925311029f, 0.001236903597600758f, 0.0010286584729328752f, 0.0012795799411833286f, 0.001790500245988369f, 0.0011590757640078664f, 0.0008967291796579957f, 0.0012272767489776015f, 0.0012951743556186557f, 0.0015351956244558096f, 0.0011719948379322886f, 0.0022063127253204584f, 0.0011475058272480965f, 0.0008613017853349447f, 0.0013015030417591333f, 0.0017613748786970973f, 0.0016706848982721567f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007058622781187296f, 0.0074626547284424305f, 0.006562752183526754f, 0.0030808355659246445f, 0.0027618438471108675f, 0.00348072056658566f, 0.0035130891483277082f, 0.0025573524180799723f, 0.006188047118484974f, 0.00411323131993413f, 0.005893117748200893f, 0.007132953032851219f, 0.006338397040963173f, 0.0030142248142510653f, 0.0023744055069983006f, 0.0022620107047259808f, 0.0023035244084894657f, 0.0030601629987359047f, 0.010161996819078922f, 0.001937463996000588f, 0.0030739319045096636f, 0.0036436510272324085f, 0.0028763720765709877f, 0.0025621717795729637f, 0.0051102726720273495f, 0.019292786717414856f, 0.002558233682066202f, 0.00593597861006856f, 0.004577357321977615f, 0.003135698614642024f, 0.0035796621814370155f, 0.005508601665496826f, 0.0035196985118091106f, 0.004192404914647341f, 0.0033329115249216557f, 0.006238872185349464f, 0.006791492458432913f, 0.004120874218642712f, 0.005142874550074339f, 0.003723838832229376f, 0.00292570679448545f, 0.004593785386532545f, 0.005574398208409548f, 0.007487282622605562f, 0.00337336678057909f, 0.004409676417708397f, 0.00450789975002408f, 0.005060424562543631f, 0.004322206135839224f, 0.004062720574438572f, 0.005213238764554262f, 0.004735333379358053f, 0.003635469125583768f, 0.007781351916491985f, 0.006197518669068813f, 0.002605022396892309f, 0.004934022668749094f, 0.014390520751476288f, 0.0054922145791351795f, 0.004604260437190533f, 0.004576210863888264f, 0.005064570810645819f, 0.0035111273173242807f, 0.006838083732873201f, 0.002199683804064989f, 0.0042870850302278996f, 0.0040065934881567955f, 0.005514851771295071f, 0.0042112404480576515f, 0.0031650487799197435f, 0.009706268087029457f, 0.004616474267095327f, 0.0030389386229217052f, 0.01761728525161743f, 0.0022001992911100388f, 0.0056265355087816715f, 0.002746501239016652f, 0.005373628810048103f, 0.003487318055704236f, 0.0029318768065422773f, 0.004586915485560894f, 0.0038137866649776697f, 0.008046116679906845f, 0.0075921108946204185f, 0.0036194329150021076f, 0.006453386042267084f, 0.0036870811600238085f, 0.00240103667601943f, 0.005488628521561623f, 0.003645553020760417f, 0.003427277784794569f, 0.0015302625251933932f, 0.0026620454154908657f, 0.003956967499107122f, 0.005567092448472977f, 0.0023421940859407187f, 0.0026323306374251842f, 0.0020719878375530243f, 0.0041379439644515514f, 0.0052535198628902435f, 0.004421512596309185f, 0.0038052848540246487f, 0.005271607078611851f, 0.0024032858200371265f, 0.006152333691716194f, 0.002789235906675458f, 0.005910117644816637f, 0.004326121415942907f, 0.002526388270780444f, 0.009561163373291492f, 0.0034888579975813627f, 0.006786377634853125f, 0.0038110532332211733f, 0.002709389431402087f, 0.007498074322938919f, 0.003885642858222127f, 0.0037520413752645254f, 0.005519213620573282f, 0.004654021468013525f, 0.005497296806424856f, 0.0021949484944343567f, 0.012196470983326435f, 0.004148458130657673f, 0.006448347587138414f, 0.006763842422515154f, 0.004064318258315325f, 0.0021361522376537323f, 0.004795446991920471f, 0.005243299063295126f, 0.0036708489060401917f, 0.0036175826098769903f, 0.0036642621271312237f, 0.002299584448337555f, 0.011564319021999836f, 0.003947630524635315f, 0.0030735908076167107f, 0.00421460485085845f, 0.003654913976788521f, 0.004763378296047449f, 0.0021179947070777416f, 0.006085929926484823f, 0.004170498810708523f, 0.002560507506132126f, 0.003919338341802359f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036819283850491047f, 0.004242865368723869f, 0.0019408105872571468f, 0.004398250486701727f, 0.004350527189671993f, 0.0033208222594112158f, 0.004285460337996483f, 0.0035045836120843887f, 0.00302709243260324f, 0.0019128642743453383f, 0.0035720800515264273f, 0.003171608317643404f, 0.004883944988250732f, 0.003951759077608585f, 0.0017817929619923234f, 0.004584599751979113f, 0.003907295409590006f, 0.0015928586944937706f, 0.0020066576544195414f, 0.004572110250592232f, 0.001717567560262978f, 0.0038462872616946697f, 0.0041487328708171844f, 0.003291777800768614f, 0.0035892101004719734f, 0.001954510807991028f, 0.0032478042412549257f, 0.0037889238446950912f, 0.0017151556676253676f, 0.0037798357661813498f, 0.001885531353764236f, 0.0036305738613009453f, 0.0032279985025525093f, 0.00431117694824934f, 0.004722223151475191f, 0.003931391518563032f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007001372869126499f, 0.0007300568977370858f, 0.0004650704504456371f, 0.000691984489094466f, 0.0005085556767880917f, 0.0006964824278838933f, 0.0007901642238721251f, 0.000608015398029238f, 0.0004963480168953538f, 0.0006871306686662138f, 0.0005732145509682596f, 0.001003131503239274f, 0.00046476282295770943f, 0.0005181376473046839f, 0.0006582041969522834f, 0.0007046604296192527f, 0.00046882464084774256f, 0.0005795506876893342f, 0.000653173541650176f, 0.00092627591220662f, 0.0006418643170036376f, 0.000653476978186518f, 0.0005595076363533735f, 0.0005888359737582505f, 0.0008156244293786585f, 0.0003936164721380919f, 0.0005085073062218726f, 0.0005726181552745402f, 0.0005266322987154126f, 0.0008588554919697344f, 0.000766410434152931f, 0.0005228150403127074f, 0.0006418519769795239f, 0.0011420227820053697f, 0.0006214840104803443f, 0.0008906225557439029f, 0.0006060788873583078f, 0.0007245553424581885f, 0.001013136119581759f, 0.0006639545899815857f, 0.0006812721258029342f, 0.0007730270735919476f, 0.0008648594375699759f, 0.0008560038986615837f, 0.0005016487557440996f, 0.0009201225475408137f, 0.0004994805785827339f, 0.0006511699757538736f, 0.00047631203779019415f, 0.0007818182930350304f, 0.0009154633153229952f, 0.0007139787194319069f, 0.0006034417892806232f, 0.0007627513259649277f, 0.0008441696409136057f, 0.0005738373729400337f, 0.0006166287930682302f, 0.0009159726905636489f, 0.000739361101295799f, 0.0007770389784127474f, 0.0009055185946635902f, 0.0005481191910803318f, 0.0005151530494913459f, 0.0006726496503688395f, 0.0006718843360431492f, 0.0008594368700869381f, 0.0004420899203978479f, 0.0005108654731884599f, 0.0008137334953062236f, 0.0005849427543580532f, 0.0006517932051792741f, 0.0009041206212714314f, 0.0006590558332391083f, 0.0006780014955438673f, 0.0006332743214443326f, 0.0006184860249049962f, 0.0008002514368854463f, 0.0007913659792393446f, 0.0009285453706979752f, 0.0008056660881265998f, 0.0007137390202842653f, 0.0008186929044313729f, 0.0006158553878776729f, 0.0007363503100350499f, 0.0006564060458913445f, 0.0009393729851581156f, 0.0008291347185149789f, 0.0006706562708131969f, 0.0005392333259806037f, 0.0005500141996890306f, 0.0006649592542089522f, 0.0006021217559464276f, 0.0005341727519407868f, 0.00047596264630556107f, 0.0006087688961997628f, 0.0005608209758065641f, 0.0008275851141661406f, 0.0005399732035584748f, 0.0007808760274201632f, 0.0006526686483994126f, 0.0007040190394036472f, 0.00047124785487540066f, 0.0004900404019281268f, 0.0006137228338047862f, 0.0008282916387543082f, 0.0008841468370519578f, 0.0006686618435196579f, 0.0004740786098409444f, 0.00042460369877517223f, 0.0007642490090802312f, 0.0005282550118863583f, 0.0004840078763663769f, 0.0005696386215277016f, 0.0004768630606122315f, 0.0007159634842537344f, 0.0007263679872266948f, 0.0007595340721309185f, 0.0005741099594160914f, 0.0006157277966849506f, 0.000728140352293849f, 0.0007612237241119146f, 0.0005435168277472258f, 0.0005132095539011061f, 0.00035204176674596965f, 0.0004808853555005044f, 0.000539117434527725f, 0.0005976621177978814f, 0.0006993800634518266f, 0.0004559663066174835f, 0.000989621737971902f, 0.0005910872132517397f, 0.0007990909507498145f, 0.0006505651981569827f, 0.00041400312329642475f, 0.0004399442987050861f, 0.0006749727763235569f, 0.0009207930415868759f, 0.0005951042403467f, 0.0008383060339838266f, 0.0007296081748791039f, 0.0008296582964248955f, 0.0004946704139001667f, 0.0003974643477704376f, 0.0005762546788901091f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004233336076140404f, 0.004980666562914848f, 0.004738668445497751f, 0.005286731757223606f, 0.006435133051127195f, 0.007651544641703367f, 0.00363301788456738f, 0.004875824321061373f, 0.006443620193749666f, 0.0051272232085466385f, 0.005032686982303858f, 0.003781726351007819f, 0.005313848610967398f, 0.005156175699084997f, 0.006650831550359726f, 0.004690734203904867f, 0.004051032941788435f, 0.004956094082444906f, 0.00486375018954277f, 0.004652953241020441f, 0.004068541340529919f, 0.006073717027902603f, 0.006308202166110277f, 0.005851644091308117f, 0.0037727057933807373f, 0.005240388680249453f, 0.004503724165260792f, 0.00460986141115427f, 0.005408738274127245f, 0.004268503747880459f, 0.004678771831095219f, 0.004746818449348211f, 0.006572345737367868f, 0.004590149037539959f, 0.0073793320916593075f, 0.005074750632047653f, 0.003644683863967657f, 0.004028894938528538f, 0.004475071094930172f, 0.0039051403291523457f, 0.005601408891379833f, 0.004963654093444347f, 0.0043639251962304115f, 0.005567145999521017f, 0.005137492902576923f, 0.005634113680571318f, 0.004295559599995613f, 0.0045325434766709805f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012425583554431796f, 0.0024435343220829964f, 0.0014557037502527237f, 0.0019320271676406264f, 0.0016591685125604272f, 0.0012129208771511912f, 0.001233336515724659f, 0.002237707609310746f, 0.0016634855419397354f, 0.001991002354770899f, 0.0021515933331102133f, 0.0010229607578366995f, 0.0026718948502093554f, 0.0024964208714663982f, 0.0014023620169609785f, 0.0010580323869362473f, 0.0020538163371384144f, 0.0018752713222056627f, 0.0017552787903696299f, 0.001763839041814208f, 0.0018302124226465821f, 0.0009746268624439836f, 0.0017305042129009962f, 0.0013131382875144482f, 0.0014364930102601647f, 0.0015717522474005818f, 0.0016371333040297031f, 0.0014458609512075782f, 0.0025615356862545013f, 0.00220077158883214f, 0.0014914696803316474f, 0.0016819805605337024f, 0.0023869327269494534f, 0.001798902521841228f, 0.0029319257009774446f, 0.0016263962024822831f, 0.000988776097074151f, 0.0011787057155743241f, 0.0014083494897931814f, 0.0014060368994250894f, 0.0018695760518312454f, 0.0018554531270638108f, 0.001007135841064155f, 0.0018967873184010386f, 0.0016446767840534449f, 0.002162393182516098f, 0.0024824561551213264f, 0.002187290694564581f, 0.0013690093765035272f, 0.0025245435535907745f, 0.0018119795713573694f, 0.002195371314883232f, 0.0012285944540053606f, 0.0012694403994828463f, 0.001950594480149448f, 0.0022084135562181473f, 0.0016475232550874352f, 0.0008597871637903154f, 0.001871007727459073f, 0.001461367472074926f, 0.0022123572416603565f, 0.001965406583622098f, 0.0015719527145847678f, 0.0013101596850901842f, 0.0011164875468239188f, 0.0018663916271179914f, 0.0017673677066341043f, 0.001210903748869896f, 0.0015338482335209846f, 0.0018051322549581528f, 0.002295273821800947f, 0.002363125793635845f, 0.0015304177068173885f, 0.0030950945802032948f, 0.0018838740652427077f, 0.0023149619810283184f, 0.0019753058440983295f, 0.0012267515994608402f, 0.0022941494826227427f, 0.0016423003980889916f, 0.0017137187533080578f, 0.001711913850158453f, 0.0018745625857263803f, 0.0016467010136693716f, 0.002400713972747326f, 0.00191530492156744f, 0.001380773144774139f, 0.001870922395028174f, 0.0018258055206388235f, 0.0017366784159094095f, 0.002057798905298114f, 0.0013346306513994932f, 0.002395897638052702f, 0.0017790707061067224f, 0.0011055166833102703f, 0.0009697265340946615f, 0.0009061013697646558f, 0.0026580654084682465f, 0.0010121357627213001f, 0.001176959602162242f, 0.0015805514995008707f, 0.001922706258483231f, 0.002193159656599164f, 0.0011965971207246184f, 0.002274775644764304f, 0.003005251521244645f, 0.0014208323555067182f, 0.0022273529320955276f, 0.0015849717892706394f, 0.0021650393027812243f, 0.002461279509589076f, 0.0017262218752875924f, 0.0008916271617636085f, 0.0018865590682253242f, 0.0018052163068205118f, 0.001839359407313168f, 0.0014411958400160074f, 0.0024645619560033083f, 0.0021509784273803234f, 0.0020291791297495365f, 0.002536774380132556f, 0.0020999715197831392f, 0.0024574818089604378f, 0.0016622800612822175f, 0.0017172551015391946f, 0.0015104430494830012f, 0.0013021879130974412f, 0.0018650263082236052f, 0.0018206421518698335f, 0.001515098731033504f, 0.0027702455408871174f, 0.002698718337342143f, 0.0016190620372071862f, 0.0014740104088559747f, 0.002104284707456827f, 0.003711576573550701f, 0.0015191157581284642f, 0.002634150441735983f, 0.0015458296984434128f, 0.002871514530852437f, 0.0012213911395519972f, 0.00218827067874372f, 0.0012787532759830356f, 0.0015785008436068892f, 0.0012623317306861281f, 0.0014456077478826046f, 0.0014641083544120193f, 0.0016423773486167192f, 0.0019706464372575283f, 0.0022604414261877537f, 0.0026126261800527573f, 0.0016292008804157376f, 0.0022076100576668978f, 0.0019373376853764057f, 0.0015357746742665768f, 0.00213228608481586f, 0.001488507492467761f, 0.0012467188062146306f, 0.001578083960339427f, 0.0016472298884764314f, 0.0015001875581219792f, 0.001963821705430746f, 0.0015198433538898826f, 0.0012913848040625453f, 0.0014718519523739815f, 0.0014110017800703645f, 0.0017387656262144446f, 0.0014950239565223455f, 0.0015051508089527488f, 0.0019166429992765188f, 0.0028708172030746937f, 0.0013170988531783223f, 0.0018861489370465279f, 0.0022094498854130507f, 0.002630913630127907f, 0.0018289891304448247f, 0.0008844197145663202f, 0.0024196263402700424f, 0.001530913752503693f, 0.002020563231781125f, 0.00104146811645478f, 0.0027618552558124065f, 0.0013804715126752853f, 0.0013610970927402377f, 0.0026078876107931137f, 0.0018461690051481128f, 0.0014028867008164525f, 0.0007564297993667424f, 0.001889702514745295f, 0.0020878787618130445f, 0.0015505315968766809f, 0.0014492780901491642f, 0.0014513953356072307f, 0.001512765185907483f, 0.0019665805157274008f, 0.001736707054078579f, 0.0013424421194940805f, 0.0016914671286940575f, 0.0023380969651043415f, 0.0016479927580803633f, 0.0010982450330629945f, 0.0017733945278450847f, 0.001973132137209177f, 0.0008233193075284362f, 0.0014471019385382533f, 0.0018359057139605284f, 0.0016355026746168733f, 0.0013045351952314377f, 0.0014377065235748887f, 0.0016970227006822824f, 0.003359495662152767f, 0.0008220953168347478f, 0.0017756297020241618f, 0.0018772860057651997f, 0.002533065853640437f, 0.0016858835006132722f, 0.0005602785386145115f, 0.0016501889331266284f, 0.0017051863251253963f, 0.001475903787650168f, 0.0011787262046709657f, 0.0012815730879083276f, 0.001071411999873817f, 0.0013598126824945211f, 0.0020837299525737762f, 0.001902948715724051f, 0.002673710696399212f, 0.002006493741646409f, 0.002666822401806712f, 0.0019286016467958689f, 0.001951593323610723f, 0.0010668806498870254f, 0.0017732803244143724f, 0.0008205587510019541f, 0.0016979164211079478f, 0.002154113259166479f, 0.0022675658110529184f, 0.0012876936234533787f, 0.0016317114932462573f, 0.0017853842582553625f, 0.001695387763902545f, 0.0016252215718850493f, 0.0018009484047070146f, 0.001795780612155795f, 0.0017340511549264193f, 0.0017582301516085863f, 0.000913921045139432f, 0.0020454865880310535f, 0.002370808506384492f, 0.0013837894657626748f, 0.0013763181632384658f, 0.0030390038155019283f, 0.0012857327237725258f, 0.0014125341549515724f, 0.0015796569641679525f, 0.002147550694644451f, 0.0021600208710879087f, 0.0019464571960270405f, 0.001503518084064126f, 0.0015936275012791157f, 0.0017266761278733611f, 0.001864610705524683f, 0.0015533313853666186f, 0.0015054979594424367f, 0.0032048881985247135f, 0.001292798900976777f, 0.0017168737249448895f, 0.0019547189585864544f, 0.0026684501208364964f, 0.001866482081823051f, 0.0015929470537230372f, 0.001143070519901812f, 0.0011635717237368226f, 0.0020259579177945852f, 0.0015164036303758621f, 0.0022828758228570223f, 0.0016145119443535805f, 0.002183980541303754f, 0.0019977441988885403f, 0.001457886304706335f, 0.001645250478759408f, 0.0013262779684737325f, 0.002649509347975254f, 0.0013802245957776904f, 0.0016676958184689283f, 0.0016408783849328756f, 0.001163547276519239f, 0.0014499194221571088f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005426494404673576f, 0.0035130553878843784f, 0.01114899292588234f, 0.007860856130719185f, 0.004398595541715622f, 0.006494209636002779f, 0.00381287164054811f, 0.002573940670117736f, 0.0028603754471987486f, 0.0025384346954524517f, 0.004437507130205631f, 0.012321765534579754f, 0.0032638299744576216f, 0.003391857957467437f, 0.007603876758366823f, 0.006301772315055132f, 0.006932782009243965f, 0.00467641418799758f, 0.0052371821366250515f, 0.0031223490368574858f, 0.003443857654929161f, 0.004576731473207474f, 0.0032703550532460213f, 0.005727414973080158f, 0.0043604676611721516f, 0.006133486516773701f, 0.0029378063045442104f, 0.0033747877459973097f, 0.0037859375588595867f, 0.0030366755090653896f, 0.006379284895956516f, 0.010730586014688015f, 0.00452645868062973f, 0.0028231185860931873f, 0.003285907907411456f, 0.005967914126813412f, 0.006339900195598602f, 0.0032715625129640102f, 0.006045131012797356f, 0.005079244263470173f, 0.00360848312266171f, 0.0037740301340818405f, 0.00540043693035841f, 0.0037189004942774773f, 0.00327310455031693f, 0.0029259733855724335f, 0.0020873360335826874f, 0.003837836440652609f, 0.0051218974404037f, 0.005122384987771511f, 0.004012234974652529f, 0.0030550367664545774f, 0.007725653238594532f, 0.006386019289493561f, 0.005019169766455889f, 0.0029350745026022196f, 0.002289738040417433f, 0.01269480399787426f, 0.0027614538557827473f, 0.007574296556413174f, 0.0031856733839958906f, 0.0036360507365316153f, 0.0047459411434829235f, 0.0071782879531383514f, 0.011820845305919647f, 0.0036682456266134977f, 0.003661397146061063f, 0.002586466260254383f, 0.0040017529390752316f, 0.001451963442377746f, 0.00222982419654727f, 0.0028302299324423075f, 0.005052429158240557f, 0.0034044247586280107f, 0.002893264638260007f, 0.0019328932976350188f, 0.0028710949700325727f, 0.007084343582391739f, 0.003348167287185788f, 0.002807578770443797f, 0.0030947381164878607f, 0.0029637247789651155f, 0.003981414716690779f, 0.0040280879475176334f, 0.004318700172007084f, 0.001713077537715435f, 0.003465506946668029f, 0.003672512713819742f, 0.0026390464045107365f, 0.0037516725715249777f, 0.004594814032316208f, 0.004692693240940571f, 0.001972768222913146f, 0.0036762042436748743f, 0.0064969900995492935f, 0.0264456607401371f, 0.009377148002386093f, 0.005100006237626076f, 0.020938856527209282f, 0.01952856034040451f, 0.004945637658238411f, 0.005629978608340025f, 0.0023448755964636803f, 0.010657008737325668f, 0.005643229000270367f, 0.0031183273531496525f, 0.007044848520308733f, 0.004740600008517504f, 0.002820748370140791f, 0.006290364544838667f, 0.003395303152501583f, 0.003628496313467622f, 0.004860663320869207f, 0.0034574803430587053f, 0.005501945503056049f, 0.003183784894645214f, 0.008167277090251446f, 0.005308637861162424f, 0.0028752554208040237f, 0.004494864959269762f, 0.0026916973292827606f, 0.005197304300963879f, 0.002348946640267968f, 0.003739242907613516f, 0.005263224709779024f, 0.007556476164609194f, 0.005580552387982607f, 0.00288937846198678f, 0.005396484863013029f, 0.005287155508995056f, 0.002258255146443844f, 0.0030678450129926205f, 0.004482996184378862f, 0.010149594396352768f, 0.0026589841581881046f, 0.003106535179540515f, 0.0023780411574989557f, 0.0025348737835884094f, 0.0031485888175666332f, 0.003418581560254097f, 0.007918884977698326f, 0.0034814155660569668f, 0.006702412385493517f, 0.0021521456073969603f, 0.006026085931807756f, 0.0034405773039907217f, 0.003070044331252575f, 0.0044135903008282185f, 0.003281915560364723f, 0.0029990142211318016f, 0.0028296334203332663f, 0.00519617460668087f, 0.0069611105136573315f, 0.005242951214313507f, 0.0030769635923206806f, 0.0023286889772862196f, 0.003634600667282939f, 0.010969511233270168f, 0.005916856229305267f, 0.0028033240232616663f, 0.005587756633758545f, 0.0019667157903313637f, 0.006051739677786827f, 0.005693331826478243f, 0.005877492483705282f, 0.004807694815099239f, 0.001919075264595449f, 0.003737315069884062f, 0.00436154380440712f, 0.0032215232495218515f, 0.0017735544824972749f, 0.008547055535018444f, 0.002739498158916831f, 0.0034659591037780046f, 0.0029383087530732155f, 0.0051575773395597935f, 0.018631432205438614f, 0.004322681576013565f, 0.004292670637369156f, 0.003182759042829275f, 0.012428437359631062f, 0.003938023932278156f, 0.020285507664084435f, 0.0038889958523213863f, 0.0036145616322755814f, 0.00482505327090621f, 0.0035240487195551395f, 0.022775322198867798f, 0.004463218152523041f, 0.003705606097355485f, 0.004769261926412582f, 0.0060215117409825325f, 0.00253745773807168f, 0.0037198287900537252f, 0.0028169681318104267f, 0.0032595922239124775f, 0.007687630131840706f, 0.004273023921996355f, 0.0026328014209866524f, 0.005477859638631344f, 0.014653622172772884f, 0.005385520402342081f, 0.0035824785009026527f, 0.010220404714345932f, 0.005341410171240568f, 0.0038046406116336584f, 0.0051765297539532185f, 0.004984365310519934f, 0.003127690404653549f, 0.0050933039747178555f, 0.004800477530807257f, 0.008848970755934715f, 0.011987486854195595f, 0.004353038966655731f, 0.004830918740481138f, 0.004183794371783733f, 0.023663615807890892f, 0.005368341691792011f, 0.0018404131988063455f, 0.0027825632132589817f, 0.008048100396990776f, 0.007109375670552254f, 0.0051763709634542465f, 0.004555249586701393f, 0.003872490953654051f, 0.002600015141069889f, 0.0033121693413704634f, 0.0033164157066494226f, 0.0038868009578436613f, 0.0045011877082288265f, 0.0044601294212043285f, 0.0050869109109044075f, 0.005562783684581518f, 0.015393601730465889f, 0.004674700554460287f, 0.00587151013314724f, 0.0030543978791683912f, 0.01565711572766304f, 0.004206625744700432f, 0.0048910691402852535f, 0.0032139059621840715f, 0.003196262987330556f, 0.003164235269650817f, 0.003661693772301078f, 0.005332036875188351f, 0.004981777165085077f, 0.012888776138424873f, 0.003029508050531149f, 0.002225054893642664f, 0.004290030337870121f, 0.008066310547292233f, 0.0024955077096819878f, 0.00568049680441618f, 0.013976966962218285f, 0.004983268678188324f, 0.003098377026617527f, 0.003203293541446328f, 0.006139687728136778f, 0.002709905384108424f, 0.004067308735102415f, 0.004695093259215355f, 0.004375522490590811f, 0.005129118449985981f, 0.0036036777310073376f, 0.0027353274635970592f, 0.0058281309902668f, 0.003235898446291685f, 0.00356072629801929f, 0.00245822686702013f, 0.0038385498337447643f, 0.0027180365286767483f, 0.00983427558094263f, 0.00374876637943089f, 0.0036161160096526146f, 0.0040694959461688995f, 0.0025832909159362316f, 0.004241214133799076f, 0.0039033431094139814f, 0.008237375877797604f, 0.006858014035969973f, 0.0030568446964025497f, 0.0037563308142125607f, 0.004263326525688171f, 0.009962341748178005f, 0.004629170056432486f, 0.008291625417768955f, 0.011970640160143375f, 0.006155079230666161f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035936145577579737f, 0.0011962985154241323f, 0.001285363221541047f, 0.0017807417316362262f, 0.0015720828669145703f, 0.0035563474521040916f, 0.001176486606709659f, 0.0011949535692110658f, 0.0014304443029686809f, 0.005371298640966415f, 0.004261135123670101f, 0.0034420958254486322f, 0.004820752888917923f, 0.003957211039960384f, 0.001586419646628201f, 0.0014839867362752557f, 0.0041719889268279076f, 0.0037497258745133877f, 0.0038254971150308847f, 0.001210512244142592f, 0.00324968877248466f, 0.001537629752419889f, 0.0016261230921372771f, 0.0021001833956688643f, 0.0012048475909978151f, 0.00382676487788558f, 0.0016435052966699004f, 0.0044991616159677505f, 0.00114604108966887f, 0.0036136654671281576f, 0.004481615498661995f, 0.0011788717238232493f, 0.005441587883979082f, 0.0012080027954652905f, 0.0013260451378300786f, 0.00215680873952806f, 0.0014288524398580194f, 0.003671791637316346f, 0.0012950464151799679f, 0.001392513164319098f, 0.0034204181283712387f, 0.005469421856105328f, 0.0016498275799676776f, 0.0045571220107376575f, 0.0011585961328819394f, 0.001854970003478229f, 0.0037474418058991432f, 0.004439862910658121f, 0.001356548280455172f, 0.0014223259640857577f, 0.001212786533869803f, 0.003108421340584755f, 0.0012898040004074574f, 0.0011495347134768963f, 0.0013590214075520635f, 0.0014528734609484673f, 0.0036147807259112597f, 0.0049988445825874805f, 0.0022302207071334124f, 0.0015221460489556193f, 0.001485218177549541f, 0.00416827155277133f, 0.0036687124520540237f, 0.00504387728869915f, 0.0014450319577008486f, 0.0033270646817982197f, 0.0013217709492892027f, 0.0021002867724746466f, 0.0038801401387900114f, 0.001174581702798605f, 0.0038027577102184296f, 0.004003371577709913f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007499920320697129f, 0.0006746435537934303f, 0.0006067908252589405f, 0.0006791064515709877f, 0.0006253326428122818f, 0.0005645857308991253f, 0.0005632381653413177f, 0.0005949854385107756f, 0.0006539981695823371f, 0.0004526958509813994f, 0.0006364221917465329f, 0.0007316756527870893f, 0.00043293190537951887f, 0.00044769374653697014f, 0.0005811198498122394f, 0.0006407022592611611f, 0.0006958264857530594f, 0.0007441961788572371f, 0.0005957175744697452f, 0.0006257626228034496f, 0.0006616931641474366f, 0.0008473644265905023f, 0.0003570010303519666f, 0.0007436540327034891f, 0.0005969054764136672f, 0.0004580634704325348f, 0.0006483126780949533f, 0.0008444898412562907f, 0.0007550035370513797f, 0.0007053340668790042f, 0.0006466170307248831f, 0.0005899702082388103f, 0.0009360249387100339f, 0.000703154772054404f, 0.00038935261545702815f, 0.0006230744766071439f, 0.00042152247624471784f, 0.0004412114794831723f, 0.0006055166013538837f, 0.0008257550653070211f, 0.00048731983406469226f, 0.0007467358955182135f, 0.0006669214926660061f, 0.0006205853424035013f, 0.00047109281877055764f, 0.0004756124981213361f, 0.0006650525610893965f, 0.0005759167252108455f, 0.0008128985646180809f, 0.000641221646219492f, 0.0006035412079654634f, 0.0005282399361021817f, 0.0005893921479582787f, 0.0007412353297695518f, 0.0006519983289763331f, 0.0004988361033611f, 0.0008136739488691092f, 0.0006429611821658909f, 0.000594913202803582f, 0.0006963546620681882f, 0.0007601260440424085f, 0.0005223845364525914f, 0.000601368781644851f, 0.0006506690988317132f, 0.0006423960439860821f, 0.0007767274510115385f, 0.0007723351009190083f, 0.00042649099486880004f, 0.000588101043831557f, 0.0005903182318434119f, 0.0005941230338066816f, 0.000516561500262469f, 0.0008142594597302377f, 0.000659649376757443f, 0.0006757195224054158f, 0.00045908268657512963f, 0.0006508662481792271f, 0.0008406136184930801f, 0.00045554296229965985f, 0.0004290618817321956f, 0.000489712692797184f, 0.00033531797816976905f, 0.0005589939537458122f, 0.0008560400456190109f, 0.0006638148333877325f, 0.0005339525523595512f, 0.0004697245021816343f, 0.0006839968846179545f, 0.00047708736383356154f, 0.0006372773204930127f, 0.00038006040267646313f, 0.0005303529324010015f, 0.0006951744435355067f, 0.0006699000368826091f, 0.001067807781510055f, 0.0006605869275517762f, 0.0007832971750758588f, 0.0008447269792668521f, 0.0006644234526902437f, 0.0005972842336632311f, 0.0007307531195692718f, 0.000752483494579792f, 0.0005935289082117379f, 0.0009105963981710374f, 0.000699421507306397f, 0.000543979462236166f, 0.0006586072267964482f, 0.0007819290040060878f, 0.0005131501820869744f, 0.0007090663420967758f, 0.000644875515718013f, 0.0003766573790926486f, 0.0006115302094258368f, 0.00059207045705989f, 0.00047527209972031415f, 0.0007444654474966228f, 0.0006283986731432378f, 0.0007541524828411639f, 0.0005414013285189867f, 0.0007118670037016273f, 0.0005250097019597888f, 0.0007091719307936728f, 0.0006363053689710796f, 0.0004500400391407311f, 0.0008016101783141494f, 0.00041537327342666686f, 0.0010335284750908613f, 0.0006400604033842683f, 0.0007322425371967256f, 0.0006395626696757972f, 0.0005953547661192715f, 0.0007687490433454514f, 0.0006891255616210401f, 0.0006425497704185545f, 0.0005766371614299715f, 0.0004748030914925039f, 0.0005108696641400456f, 0.0010913382284343243f, 0.0006036475533619523f, 0.00044389604590833187f, 0.0010125288972631097f, 0.0005277781747281551f, 0.0005868110456503928f, 0.0005619152798317373f, 0.0005241810576990247f, 0.0007768734358251095f, 0.0004095511685591191f, 0.0005700681358575821f, 0.0005728280520997941f, 0.0005119754350744188f, 0.0006360276020132005f, 0.0005869727465324104f, 0.0009897687705233693f, 0.0005862617981620133f, 0.0004644848813768476f, 0.0005835324991494417f, 0.00033070927020162344f, 0.0005489423056133091f, 0.0004161829419899732f, 0.0005288316169753671f, 0.0007814985583536327f, 0.0004655755474232137f, 0.0005881678662262857f, 0.00047420835471712053f, 0.0006519316229969263f, 0.0005633935797959566f, 0.0005565522005781531f, 0.0005919869290664792f, 0.0005438944208435714f, 0.0006271039601415396f, 0.0005690891994163394f, 0.0007558568031527102f, 0.0004805713251698762f, 0.0006568997632712126f, 0.0005919845425523818f, 0.000574967882130295f, 0.0005145815084688365f, 0.0005658217705786228f, 0.0008151888032443821f, 0.0005386091070249677f, 0.0004940696526318789f, 0.000538371445145458f, 0.0005618593422695994f, 0.0006675067124888301f, 0.0005845981067977846f, 0.00047077686758711934f, 0.00041220930870622396f, 0.000646373606286943f, 0.000544253212865442f, 0.000776005326770246f, 0.00039468504837714136f, 0.0007715926039963961f, 0.0007134740590117872f, 0.0005047186859883368f, 0.0005735530285164714f, 0.0005412522004917264f, 0.0005557637196034193f, 0.0006763261626474559f, 0.0005741651402786374f, 0.000713334942702204f, 0.0005929508479312062f, 0.000638532976154238f, 0.0006691517774015665f, 0.0006329476600512862f, 0.000683975697029382f, 0.0007610273314639926f, 0.00034609719295985997f, 0.000631810980848968f, 0.0006870230427011847f, 0.0005232541006989777f, 0.0006797406822443008f, 0.0009237406775355339f, 0.0006653462769463658f, 0.0005919995019212365f, 0.0007999808876775205f, 0.000507282093167305f, 0.0008436540956608951f, 0.0006414185627363622f, 0.0004528870922513306f, 0.0005817097262479365f, 0.0007551657035946846f, 0.000596202677115798f, 0.0005827925051562488f, 0.0006646614638157189f, 0.00047226535389199853f, 0.0007257451652549207f, 0.0005766246467828751f, 0.0007457530009560287f, 0.00064271898008883f, 0.0006941460887901485f, 0.0006290574092417955f, 0.0004990496090613306f, 0.0006929608061909676f, 0.0006858406122773886f, 0.00061205611564219f, 0.0007546087726950645f, 0.0006124436622485518f, 0.0004522736999206245f, 0.0005062350537627935f, 0.0007804870838299394f, 0.000616864359471947f, 0.00045023715938441455f, 0.0006138982716947794f, 0.0005726576782763004f, 0.000507100485265255f, 0.00046977237798273563f, 0.000576543330680579f, 0.0007145838462747633f, 0.0006455613183788955f, 0.0006147706299088895f, 0.0005720203625969589f, 0.0009626069804653525f, 0.0005615862901322544f, 0.000670858018565923f, 0.000783572148066014f, 0.0005574976676143706f, 0.0007415908039547503f, 0.0006602441426366568f, 0.0005122773582115769f, 0.0008670337265357375f, 0.0004958387580700219f, 0.0005358956404961646f, 0.0007164035923779011f, 0.00046525633661076427f, 0.0005439797532744706f, 0.0005463889101520181f, 0.00040872450335882604f, 0.0006373535725288093f, 0.000601224834099412f, 0.0003369282349012792f, 0.0008125483291223645f, 0.0008031220640987158f, 0.000540710287168622f, 0.0004589453455992043f, 0.000496712455060333f, 0.0006575164734385908f, 0.0006936498684808612f, 0.00040386352338828146f, 0.0004733555833809078f, 0.000486068514874205f, 0.0004747188067995012f, 0.0006875822436995804f, 0.0007811360410414636f, 0.0006732869660481811f, 0.0005016939248889685f, 0.0005198359140194952f, 0.00065857038134709f, 0.0005320913041941822f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003755429061129689f, 0.0032050302252173424f, 0.003605231177061796f, 0.0037383693270385265f, 0.0039184438064694405f, 0.002668374218046665f, 0.003528524423018098f, 0.004174498375505209f, 0.0037153507582843304f, 0.0033645278308540583f, 0.003070765407755971f, 0.003783632768318057f, 0.003236764343455434f, 0.002705985214561224f, 0.002606792375445366f, 0.00329978228546679f, 0.0035515273921191692f, 0.0038860919885337353f, 0.0038079367950558662f, 0.0033066286705434322f, 0.0033086875919252634f, 0.00316085247322917f, 0.004399028606712818f, 0.004108814522624016f, 0.0034015823621302843f, 0.00315957167185843f, 0.0029378971084952354f, 0.0028773073572665453f, 0.0034594933968037367f, 0.0026608488988131285f, 0.002746084239333868f, 0.0030822688713669777f, 0.004048635251820087f, 0.004253847990185022f, 0.003339746268466115f, 0.003976263105869293f, 0.003679902758449316f, 0.002871830016374588f, 0.0031778127886354923f, 0.003765961853787303f, 0.003578989999368787f, 0.004505178891122341f, 0.0030796194914728403f, 0.002771856961771846f, 0.0035194491501897573f, 0.003266762476414442f, 0.0032574255019426346f, 0.003049633465707302f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017306440277025104f, 0.0010640117106959224f, 0.0011980922427028418f, 0.00200523529201746f, 0.000982869416475296f, 0.0009444245370104909f, 0.0009712436003610492f, 0.0020274852868169546f, 0.0020986043382436037f, 0.001589317573234439f, 0.001066944096237421f, 0.0010511672589927912f, 0.0011962447315454483f, 0.002155530033633113f, 0.0012028279015794396f, 0.0015039404388517141f, 0.0018412615172564983f, 0.0014803914818912745f, 0.0007129302248358727f, 0.0027046173345297575f, 0.0013856273144483566f, 0.0011382632656022906f, 0.0009164688526652753f, 0.0011151887010782957f, 0.0019017676822841167f, 0.0022870234679430723f, 0.0016538123600184917f, 0.0015397220849990845f, 0.0010919065680354834f, 0.000960647186730057f, 0.000866076850797981f, 0.0015869353665038943f, 0.0010994294425472617f, 0.0009188367403112352f, 0.0009512011311016977f, 0.0010773622198030353f, 0.00045082555152475834f, 0.0016967725241556764f, 0.001186707173474133f, 0.0006570258410647511f, 0.0010272692888975143f, 0.0010613141348585486f, 0.0016678671818226576f, 0.0014156780671328306f, 0.0017688452498987317f, 0.0009084925404749811f, 0.0009239953360520303f, 0.0009528771624900401f, 0.000816648593172431f, 0.0013234231155365705f, 0.0010421999031677842f, 0.0012081600725650787f, 0.0016769584035500884f, 0.0006956506404094398f, 0.0012960743624716997f, 0.0012188649270683527f, 0.0011945621808990836f, 0.0009459542925469577f, 0.0009761652327142656f, 0.0006600867491215467f, 0.0012223318917676806f, 0.0019746804609894753f, 0.0008557621040381491f, 0.0012918958673253655f, 0.0009061708697117865f, 0.0015823529101908207f, 0.001304197940044105f, 0.001225506654009223f, 0.0020645654294639826f, 0.0010194857604801655f, 0.0007222741260193288f, 0.0006612216238863766f, 0.001609351602382958f, 0.001184440916404128f, 0.002366951433941722f, 0.0016448041424155235f, 0.002222674200311303f, 0.001418911968357861f, 0.0012829704210162163f, 0.0004613649216480553f, 0.000934231502469629f, 0.0007376337889581919f, 0.000776407599914819f, 0.001575459260493517f, 0.0008977027027867734f, 0.0014458732912316918f, 0.001254194532521069f, 0.0007235033554024994f, 0.0009542485349811614f, 0.0011403578100726008f, 0.0010671155760064721f, 0.00127982790581882f, 0.0012735279742628336f, 0.0009544232743792236f, 0.0010506163816899061f, 0.0009681125520728528f, 0.0013602733379229903f, 0.0011690679239109159f, 0.0013892046408727765f, 0.0011630286462605f, 0.0009373634820804f, 0.0013386495411396027f, 0.0013680659467354417f, 0.0016847432125359774f, 0.0013821858447045088f, 0.0005945002194494009f, 0.0016225744038820267f, 0.0013169230660423636f, 0.0011098738759756088f, 0.0011037008371204138f, 0.0011943631106987596f, 0.001345167402178049f, 0.0008427026914432645f, 0.0018054216634482145f, 0.001645008916966617f, 0.00048475569928996265f, 0.000769938575103879f, 0.0014409007271751761f, 0.001356321619823575f, 0.001409817487001419f, 0.0008986009052023292f, 0.0014255126006901264f, 0.0012651709839701653f, 0.0013022774364799261f, 0.0010500421049073339f, 0.0015565291978418827f, 0.0007449030526913702f, 0.0019391827518120408f, 0.000889994204044342f, 0.001274831942282617f, 0.0013610912719741464f, 0.0011061725672334433f, 0.0013434744905680418f, 0.0013789746444672346f, 0.0015564875211566687f, 0.0012769713066518307f, 0.0011310508707538247f, 0.0008323846268467605f, 0.0006734621128998697f, 0.0008720251498743892f, 0.0016300793504342437f, 0.0016939815832301974f, 0.0020611220970749855f, 0.0012365648290142417f, 0.0013754585525020957f, 0.0010099344654008746f, 0.0006787992315366864f, 0.0011051822220906615f, 0.0008309507975354791f, 0.0009686949197202921f, 0.0009985626675188541f, 0.0016009501414373517f, 0.0015094493282958865f, 0.0005935257067903876f, 0.001075619482435286f, 0.00102445506490767f, 0.0009703029063530266f, 0.0013549738796427846f, 0.0010867759119719267f, 0.0010497054317966104f, 0.00089662941172719f, 0.0015598982572555542f, 0.0023357663303613663f, 0.0009076764690689743f, 0.0018152554985135794f, 0.0008767811814323068f, 0.0010764026083052158f, 0.0017672301037237048f, 0.0014856875641271472f, 0.0015490830410271883f, 0.00169284176081419f, 0.0012745419517159462f, 0.000908741494640708f, 0.001217055949382484f, 0.0020191159565001726f, 0.0015598954632878304f, 0.0013692585052922368f, 0.0009352656779810786f, 0.0012451274087652564f, 0.0010727894259616733f, 0.0005524983862414956f, 0.0013220962136983871f, 0.0013212441699579358f, 0.0010981240775436163f, 0.0013829376548528671f, 0.001181647414341569f, 0.001269756117835641f, 0.0008087896858341992f, 0.0016699478728696704f, 0.0014141119318082929f, 0.0010542672825977206f, 0.0013830328825861216f, 0.000958470453042537f, 0.0006093108095228672f, 0.0013872090494260192f, 0.0017395965987816453f, 0.0011220249580219388f, 0.0015792654594406486f, 0.001326730358414352f, 0.0014383584493771195f, 0.0017344269435852766f, 0.0009633408044464886f, 0.0009140534675680101f, 0.0017855061450973153f, 0.0011780532076954842f, 0.0012235179310664535f, 0.0013019717298448086f, 0.0009561378392390907f, 0.0013691572239622474f, 0.0019107775297015905f, 0.0019858963787555695f, 0.0011902648257091641f, 0.0014222671743482351f, 0.0012200301280245185f, 0.0013447562232613564f, 0.001251061330549419f, 0.001707770279608667f, 0.0009235694305971265f, 0.0010843909112736583f, 0.0018873218214139342f, 0.0019472596468403935f, 0.0012958927545696497f, 0.0015429507475346327f, 0.0009098491282202303f, 0.0017724594799801707f, 0.001404176582582295f, 0.001944134826771915f, 0.000919574114959687f, 0.001840348239056766f, 0.0015199886402115226f, 0.001371337566524744f, 0.0011702821357175708f, 0.0006822250434197485f, 0.0013874261640012264f, 0.0012381823034957051f, 0.0012261847732588649f, 0.0016549354186281562f, 0.0011720588663592935f, 0.0010945211397483945f, 0.0019585005939006805f, 0.0013629121240228415f, 0.0009962416952475905f, 0.0006841893191449344f, 0.0012248677667230368f, 0.0013404409401118755f, 0.0009286957792937756f, 0.0004728851199615747f, 0.0011400450021028519f, 0.0008958647958934307f, 0.0011467734584584832f, 0.0006564020877704024f, 0.0013954989844933152f, 0.0012091784738004208f, 0.0006504955235868692f, 0.0012364035937935114f, 0.0018384249415248632f, 0.001162735279649496f, 0.0013899827608838677f, 0.0014814770547673106f, 0.0014587074983865023f, 0.0007487352122552693f, 0.001838472206145525f, 0.0014533575158566236f, 0.0007527489215135574f, 0.0013826328795403242f, 0.0010526945115998387f, 0.0012778971577063203f, 0.0015672000590711832f, 0.0009670078288763762f, 0.0008350035059265792f, 0.0018904405878856778f, 0.0010246012825518847f, 0.001221878337673843f, 0.0008069356554187834f, 0.0015544039197266102f, 0.0016375716077163815f, 0.0010891734855249524f, 0.0013675292721018195f, 0.0013461828930303454f, 0.0013950748834758997f, 0.0009444821043871343f, 0.0014822481898590922f, 0.001588847953826189f, 0.0011005614651367068f, 0.0011794138699769974f, 0.002018032828345895f, 0.0009331287583336234f, 0.0014612075174227357f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006482395809143782f, 0.004314216785132885f, 0.003295530565083027f, 0.002219949383288622f, 0.006529273930937052f, 0.0057678623124957085f, 0.006818701047450304f, 0.0027096362318843603f, 0.0034427966456860304f, 0.004321929067373276f, 0.03688713535666466f, 0.003037997055798769f, 0.0038260254077613354f, 0.003614551853388548f, 0.007959576323628426f, 0.00608173618093133f, 0.004000436048954725f, 0.003932866267859936f, 0.007884155958890915f, 0.0027417216915637255f, 0.002223772695288062f, 0.0020740411709994078f, 0.006688169203698635f, 0.004177591297775507f, 0.004636477679014206f, 0.002679237397387624f, 0.0016309304628521204f, 0.0021757795475423336f, 0.003541596233844757f, 0.008908228017389774f, 0.004744752775877714f, 0.0021369392052292824f, 0.004402022808790207f, 0.0028081994969397783f, 0.012343677692115307f, 0.0036211078986525536f, 0.07276483625173569f, 0.0022663732524961233f, 0.007035842631012201f, 0.010753199458122253f, 0.005216710269451141f, 0.006376327946782112f, 0.0031497864983975887f, 0.0033244790975004435f, 0.005199697334319353f, 0.0034211298916488886f, 0.004870950244367123f, 0.004784374497830868f, 0.0033902672585099936f, 0.0044037289917469025f, 0.00516091100871563f, 0.0029679564759135246f, 0.0018398180836811662f, 0.010704800486564636f, 0.0023563539143651724f, 0.004101039841771126f, 0.0030849080067127943f, 0.018416274338960648f, 0.006700512487441301f, 0.005778666120022535f, 0.00429821852594614f, 0.0024103480391204357f, 0.007592633366584778f, 0.008136231452226639f, 0.0039270296692848206f, 0.0029691464733332396f, 0.003056067042052746f, 0.003128685988485813f, 0.005242788232862949f, 0.001992636825889349f, 0.005089317914098501f, 0.010596979409456253f, 0.00246230885386467f, 0.004694259259849787f, 0.0030533329118043184f, 0.005073390435427427f, 0.002445562044158578f, 0.0023704327177256346f, 0.005492124240845442f, 0.007048147730529308f, 0.002850134391337633f, 0.004708983935415745f, 0.006087315268814564f, 0.007259797770529985f, 0.0040991101413965225f, 0.0030836889054626226f, 0.004422162659466267f, 0.0075485981069505215f, 0.002704292070120573f, 0.0037165505345910788f, 0.004588122479617596f, 0.002678414573892951f, 0.003008581232279539f, 0.0070899431593716145f, 0.002252947771921754f, 0.007699834182858467f, 0.005945377517491579f, 0.003671856364235282f, 0.004147921688854694f, 0.005263328552246094f, 0.013646041043102741f, 0.002783802803605795f, 0.003792922245338559f, 0.005034199915826321f, 0.003173431847244501f, 0.010393594391644001f, 0.0037983558140695095f, 0.0028073100838810205f, 0.002491507912054658f, 0.0029872944578528404f, 0.014687571674585342f, 0.005967564415186644f, 0.007246111985296011f, 0.005724248941987753f, 0.0037149840500205755f, 0.037233058363199234f, 0.004973681643605232f, 0.0018504875479266047f, 0.00497864093631506f, 0.002647258574143052f, 0.00842857826501131f, 0.0043513718992471695f, 0.007258954923599958f, 0.002235343912616372f, 0.005169232375919819f, 0.006276000291109085f, 0.004616935737431049f, 0.005855030845850706f, 0.0028371692169457674f, 0.005190847907215357f, 0.005001019220799208f, 0.002340184524655342f, 0.005177770275622606f, 0.0038624934386461973f, 0.003597537288442254f, 0.005973224062472582f, 0.005549072287976742f, 0.021315500140190125f, 0.01785673387348652f, 0.0025331059005111456f, 0.0037035581190139055f, 0.0027612599078565836f, 0.0035267674829810858f, 0.005004568491131067f, 0.0035848217085003853f, 0.004271642304956913f, 0.00530583132058382f, 0.0021126337815076113f, 0.004757327493280172f, 0.006696443539112806f, 0.003589245257899165f, 0.003624922828748822f, 0.002695535309612751f, 0.022201379761099815f, 0.007159386295825243f, 0.002509115496650338f, 0.01148458942770958f, 0.0020942860282957554f, 0.00297598447650671f, 0.005547695327550173f, 0.017159974202513695f, 0.0034056443255394697f, 0.002115641487762332f, 0.01355697587132454f, 0.003222220577299595f, 0.005742697510868311f, 0.007530980743467808f, 0.002514886436983943f, 0.0017986369784921408f, 0.0037035879213362932f, 0.004486154764890671f, 0.0025461004115641117f, 0.007317011244595051f, 0.0093921460211277f, 0.003237463068217039f, 0.0035641237627714872f, 0.003921556752175093f, 0.0053597912192344666f, 0.004734101239591837f, 0.005403265822678804f, 0.020390884950757027f, 0.005091853905469179f, 0.00395373348146677f, 0.0027761764358729124f, 0.001817585900425911f, 0.0016400909516960382f, 0.004855702165514231f, 0.005147985182702541f, 0.002627419074997306f, 0.002903585322201252f, 0.00813383236527443f, 0.003924937918782234f, 0.007470621261745691f, 0.018523111939430237f, 0.002983488142490387f, 0.00289424997754395f, 0.002606164664030075f, 0.003517912933602929f, 0.0029705644119530916f, 0.004583392757922411f, 0.0048995595425367355f, 0.0030169403180480003f, 0.00644998624920845f, 0.00285283662378788f, 0.0063955336809158325f, 0.004051947500556707f, 0.004404393490403891f, 0.007794157601892948f, 0.006862566340714693f, 0.0016642090631648898f, 0.0032963654957711697f, 0.0037876770365983248f, 0.003629247657954693f, 0.002819282468408346f, 0.0031445412896573544f, 0.02125929854810238f, 0.001716315746307373f, 0.00472124433144927f, 0.004157044924795628f, 0.002396398689597845f, 0.0036106768529862165f, 0.010180349461734295f, 0.0025323869194835424f, 0.003009787295013666f, 0.0018622141797095537f, 0.0019876372534781694f, 0.0038670587819069624f, 0.010822883807122707f, 0.004163234960287809f, 0.0027862368151545525f, 0.008184472098946571f, 0.005829269997775555f, 0.011535772122442722f, 0.005563471931964159f, 0.003469421761110425f, 0.004398818593472242f, 0.0024344974663108587f, 0.002815647516399622f, 0.005769355688244104f, 0.005878292955458164f, 0.003509861184284091f, 0.006889446172863245f, 0.015931520611047745f, 0.002574046840891242f, 0.0025897969026118517f, 0.002856943989172578f, 0.03471342474222183f, 0.003552789334207773f, 0.0041723791509866714f, 0.007825812324881554f, 0.011819732375442982f, 0.003709920682013035f, 0.0023997011594474316f, 0.004602058790624142f, 0.008274455554783344f, 0.004934392869472504f, 0.002827869961038232f, 0.0029577685054391623f, 0.003392859362065792f, 0.003388986922800541f, 0.004431076813489199f, 0.0025304246228188276f, 0.0026757942978292704f, 0.004465621430426836f, 0.0022237610537558794f, 0.007198356091976166f, 0.005146573297679424f, 0.00518911425024271f, 0.00398184172809124f, 0.01367279514670372f, 0.0034789573401212692f, 0.0027249192353338003f, 0.0012135757133364677f, 0.0076215812005102634f, 0.003431569552049041f, 0.004268321208655834f, 0.005101810675114393f, 0.003974804189056158f, 0.0029072456527501345f, 0.004802837502211332f, 0.007110705133527517f, 0.002622750587761402f, 0.002603102708235383f, 0.0028165895491838455f, 0.0019014355493709445f, 0.002247963100671768f, 0.00749617675319314f, 0.002626588102430105f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013495569583028555f, 0.0042194826528429985f, 0.004375646822154522f, 0.005327160935848951f, 0.0014390466967597604f, 0.004131520166993141f, 0.004747205879539251f, 0.003701196052134037f, 0.0015070666559040546f, 0.003907819744199514f, 0.001909300102852285f, 0.001619058777578175f, 0.0014528564643114805f, 0.002919655293226242f, 0.0035349030513316393f, 0.0014495633076876402f, 0.003497046884149313f, 0.0012770947068929672f, 0.0010805807542055845f, 0.003062336938455701f, 0.002802841132506728f, 0.003856948111206293f, 0.001235361909493804f, 0.004520000424236059f, 0.0031452577095478773f, 0.001382391550578177f, 0.001596243935637176f, 0.0048990617506206036f, 0.003231277922168374f, 0.001285588601604104f, 0.0014503749553114176f, 0.0012789869215339422f, 0.0029091162141412497f, 0.004158251453191042f, 0.0023248340003192425f, 0.0019740730058401823f, 0.0032886771950870752f, 0.0017118386458605528f, 0.0017855990445241332f, 0.0021780726965516806f, 0.0036096025723963976f, 0.003967806231230497f, 0.005944718141108751f, 0.0062879533506929874f, 0.002132912166416645f, 0.001287529245018959f, 0.0012886421754956245f, 0.0017036756034940481f, 0.0011735025327652693f, 0.0021431203931570053f, 0.0012194946175441146f, 0.001879025250673294f, 0.003947759512811899f, 0.0013859758619219065f, 0.004662632010877132f, 0.003356852335855365f, 0.004400435835123062f, 0.004299027379602194f, 0.003044720273464918f, 0.004226719494909048f, 0.0028727862518280745f, 0.0031969978008419275f, 0.004928384907543659f, 0.0011772677535191178f, 0.003524484345689416f, 0.0014129872433841228f, 0.0012232413282617927f, 0.005169391632080078f, 0.0013116674963384867f, 0.0029317657463252544f, 0.00345007237046957f, 0.001676344545558095f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006896231207065284f, 0.0006606900133192539f, 0.0005954895168542862f, 0.0004937319317832589f, 0.0007356622372753918f, 0.0006123575149103999f, 0.0005612501408904791f, 0.0005748161347582936f, 0.000666635693050921f, 0.0004181147087365389f, 0.0007216461817733943f, 0.0004460033087525517f, 0.0006554516730830073f, 0.0007677617250010371f, 0.0009468793869018555f, 0.000570939970202744f, 0.0006652327137999237f, 0.0005661723553203046f, 0.0005550347850658f, 0.0006915751146152616f, 0.00043817187543027103f, 0.00042761291842907667f, 0.0007592910551466048f, 0.0004929270944558084f, 0.0005350387073121965f, 0.0007850765832699835f, 0.0004868167161475867f, 0.0006151613779366016f, 0.0005966637399978936f, 0.0006216989713720977f, 0.0006102257175371051f, 0.000513008504640311f, 0.0006801403360441327f, 0.0005186816561035812f, 0.0003589591069612652f, 0.0006436238181777298f, 0.0006277879001572728f, 0.0005330583662725985f, 0.00043684369302354753f, 0.0008750665583647788f, 0.0007233776850625873f, 0.0005678605521097779f, 0.0005919328541494906f, 0.0008402624516747892f, 0.0005284291692078114f, 0.0005608648061752319f, 0.0004963473184034228f, 0.000581683125346899f, 0.0005266491207294166f, 0.00038082580431364477f, 0.0007986851851455867f, 0.0006575396400876343f, 0.0005621425225399435f, 0.0006722834659740329f, 0.0006212891894392669f, 0.0005820922669954598f, 0.0005866720457561314f, 0.0007968934369273484f, 0.0006849851924926043f, 0.0005369259743019938f, 0.0003818448749370873f, 0.000640311511233449f, 0.0007342442986555398f, 0.0006602079374715686f, 0.0005996088148094714f, 0.0005479731480590999f, 0.0005136376130394638f, 0.0007561980746686459f, 0.0007966393604874611f, 0.00042433111229911447f, 0.00048310283455066383f, 0.0004852917918469757f, 0.0007534832111559808f, 0.0003965015639550984f, 0.0009698850335553288f, 0.0011193105019629002f, 0.000852753990329802f, 0.000661118479911238f, 0.0006794020300731063f, 0.0006687307613901794f, 0.000540314766112715f, 0.0007034567533992231f, 0.0006161481142044067f, 0.000900580664165318f, 0.0009081216412596405f, 0.0004018618492409587f, 0.0009380496339872479f, 0.0008270678808912635f, 0.0005393398460000753f, 0.0006592469871975482f, 0.0004407285596244037f, 0.0005673948326148093f, 0.0005878061056137085f, 0.0004819410969503224f, 0.0006941320607438684f, 0.0006658593192696571f, 0.0007223845459520817f, 0.0006749293534085155f, 0.0008344703237526119f, 0.0005214501288719475f, 0.00042586986091919243f, 0.00048147732741199434f, 0.0007836272707208991f, 0.0007492557633668184f, 0.0005026274011470377f, 0.000518812274094671f, 0.0004655208613257855f, 0.00047841478954069316f, 0.0004758457944262773f, 0.0007350009982474148f, 0.0006568402168340981f, 0.0006162411300465465f, 0.0005909595056436956f, 0.0006493154796771705f, 0.0006127246888354421f, 0.0008041043765842915f, 0.000617294164840132f, 0.0005753505975008011f, 0.0007773838005959988f, 0.0005493503995239735f, 0.0006668808637186885f, 0.0006495251436717808f, 0.0007985030533745885f, 0.0009095352725125849f, 0.0008615078986622393f, 0.0007720706635154784f, 0.0007567764259874821f, 0.0006979292957112193f, 0.0005919763934798539f, 0.0005207292851991951f, 0.0007291004294529557f, 0.0005278178141452372f, 0.0006409177440218627f, 0.0007392084808088839f, 0.000516201020218432f, 0.0007463594665750861f, 0.0005742667126469314f, 0.0004452125867828727f, 0.0007048058323562145f, 0.0006915095145814121f, 0.0007650689803995192f, 0.0009002475417219102f, 0.0007106235716491938f, 0.000383949838578701f, 0.0005767722614109516f, 0.00061625218950212f, 0.0006448348867706954f, 0.0006480187876150012f, 0.0008276320877484977f, 0.0006080264574848115f, 0.0005171940429136157f, 0.0006849634810350835f, 0.000805152056273073f, 0.0007549413712695241f, 0.0005345317767933011f, 0.0006578778848052025f, 0.000702036137226969f, 0.0005393133033066988f, 0.0008167067426256835f, 0.0008204637560993433f, 0.000615495431702584f, 0.0005991018260829151f, 0.00055509596131742f, 0.0006270339945331216f, 0.0006677668425254524f, 0.0006730926688760519f, 0.000531251251231879f, 0.0004878111940342933f, 0.00036864049616269767f, 0.0005220122402533889f, 0.0005119634442962706f, 0.0005889424355700612f, 0.0009625032544136047f, 0.000769702426623553f, 0.0006087025976739824f, 0.0005232040421105921f, 0.00048732926370576024f, 0.000644549960270524f, 0.0006131711998023093f, 0.000501838221680373f, 0.0006317809456959367f, 0.0004606477450579405f, 0.0006336956284940243f, 0.0003790186601690948f, 0.0004868796677328646f, 0.00045835573109798133f, 0.0005068135214969516f, 0.0009565268992446363f, 0.0005149792996235192f, 0.0008733272552490234f, 0.0005730638513341546f, 0.0005936211673542857f, 0.0005613352404907346f, 0.000630860507953912f, 0.0007090489962138236f, 0.0005137299885973334f, 0.0006501305033452809f, 0.0007043577497825027f, 0.0006437514093704522f, 0.0008325602975673974f, 0.0007253566291183233f, 0.0005071978084743023f, 0.0005351594882085919f, 0.0007417332963086665f, 0.0006583442445844412f, 0.0004174365021754056f, 0.0005517048412002623f, 0.0007836780278012156f, 0.0007217936799861491f, 0.0006284940172918141f, 0.000709991087205708f, 0.00046034835395403206f, 0.0004677966935560107f, 0.00043238114449195564f, 0.0005584900500252843f, 0.0006180501077324152f, 0.0006025219918228686f, 0.0005496279918588698f, 0.0006614564335905015f, 0.00032533323974348605f, 0.0006892579840496182f, 0.0008107085595838726f, 0.0007306099287234247f, 0.0005977321416139603f, 0.0003951538819819689f, 0.0005525737651623785f, 0.0005410381127148867f, 0.0008581869187764823f, 0.0005738738109357655f, 0.0004674363590311259f, 0.0005187263595871627f, 0.0008283039787784219f, 0.0005522058927454054f, 0.0005783845554105937f, 0.0006293803453445435f, 0.0006580639746971428f, 0.0004647374735213816f, 0.00044142219121567905f, 0.0007594624767079949f, 0.0007455392624251544f, 0.0007372951949946582f, 0.0005381351220421493f, 0.0006362404092215002f, 0.0007665054872632027f, 0.000544135516975075f, 0.0003986095543950796f, 0.0006920612649992108f, 0.0008584157912991941f, 0.0006138092139735818f, 0.0007130555459298193f, 0.0006700986996293068f, 0.000693302252329886f, 0.00038642820436507463f, 0.0009052390232682228f, 0.0006313174962997437f, 0.0007429126999340951f, 0.0005340359639376402f, 0.000636313809081912f, 0.0006154701113700867f, 0.0006769043393433094f, 0.0006819068221375346f, 0.000686411454807967f, 0.0008027500007301569f, 0.0004089432186447084f, 0.00048726843670010567f, 0.0004912016447633505f, 0.0006005230825394392f, 0.0005069629405625165f, 0.0006754596834070981f, 0.000560892978683114f, 0.0008165129111148417f, 0.00047929532593116164f, 0.0005140987341292202f, 0.0004980353405699134f, 0.0005788407288491726f, 0.0007111047743819654f, 0.00047238243860192597f, 0.0009056121343746781f, 0.0006251544691622257f, 0.0008868698496371508f, 0.00056294328533113f, 0.0006234365282580256f, 0.0005521815037354827f, 0.0007220321567729115f, 0.0004921433865092695f, 0.0005642215837724507f, 0.0007299011922441423f, 0.00041569332825019956f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015369459288194776f, 0.002031521173194051f, 0.0026017422787845135f, 0.001778959995135665f, 0.002208680147305131f, 0.0020419589709490538f, 0.002546706236898899f, 0.0019885145593434572f, 0.0026720210444182158f, 0.0025093720760196447f, 0.0034905686043202877f, 0.0015799020184203982f, 0.002406865358352661f, 0.002533986698836088f, 0.001979151042178273f, 0.002676387084648013f, 0.0022626304998993874f, 0.0024818500969558954f, 0.0024141529574990273f, 0.002572942292317748f, 0.0025864173658192158f, 0.0026627262122929096f, 0.002721677767112851f, 0.002844869391992688f, 0.002527815755456686f, 0.002849229844287038f, 0.001995868282392621f, 0.001484345062635839f, 0.002379039069637656f, 0.0018817705567926168f, 0.002878243336454034f, 0.0025545796379446983f, 0.0025853735860437155f, 0.0027144914492964745f, 0.0023440991062670946f, 0.0018772647017613053f, 0.0048606921918690205f, 0.003040798008441925f, 0.0032695147674530745f, 0.0014568435726687312f, 0.0015568382805213332f, 0.002417996758595109f, 0.002067780587822199f, 0.001865054597146809f, 0.002266735304147005f, 0.002556632040068507f, 0.0018438845872879028f, 0.0032141711562871933f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004628346359822899f, 0.000906542525626719f, 0.0006070000817999244f, 0.0009604856022633612f, 0.0007485119276680052f, 0.000700705568306148f, 0.0007706632604822516f, 0.0007757101557217538f, 0.0006058427388779819f, 0.0007846784428693354f, 0.000623069005087018f, 0.00035711389500647783f, 0.0007297286647371948f, 0.00047576945507898927f, 0.0007522853557020426f, 0.0006983187631703913f, 0.0007042052457109094f, 0.0005940338014625013f, 0.0005365884862840176f, 0.0004622017440851778f, 0.0012371024349704385f, 0.0006371773197315633f, 0.0006467086495831609f, 0.0005139888380654156f, 0.0008334860322065651f, 0.0008953805081546307f, 0.0005253028939478099f, 0.0008835208136588335f, 0.0007887865067459643f, 0.0007405903306789696f, 0.000767278834246099f, 0.0007049343548715115f, 0.0007171386387199163f, 0.0007319743162952363f, 0.0007769182557240129f, 0.0007279155543074012f, 0.000467933074105531f, 0.0006462684832513332f, 0.0011921210680156946f, 0.0005590029177255929f, 0.0004115812189411372f, 0.0004664581792894751f, 0.0007500315550714731f, 0.0006577441818080842f, 0.0006730133318342268f, 0.0008328437688760459f, 0.0007700317073613405f, 0.0007871742127463222f, 0.0011983041185885668f, 0.0007491920259781182f, 0.0005815433687530458f, 0.0008075130172073841f, 0.0008261680486612022f, 0.0003996741434093565f, 0.000479144073324278f, 0.000642328814137727f, 0.0006687759305350482f, 0.0012172372080385685f, 0.0007655835361219943f, 0.0006639455677941442f, 0.0006033310783095658f, 0.0006408655899576843f, 0.0007611809414811432f, 0.0009698006906546652f, 0.0006806181045249104f, 0.0007260930724442005f, 0.0006222395459190011f, 0.00061559968162328f, 0.0010190984467044473f, 0.0007857120363041759f, 0.0007975042681209743f, 0.0005958431283943355f, 0.0005069239996373653f, 0.0005683225463144481f, 0.0006761960103176534f, 0.0008888913434930146f, 0.0005224077613092959f, 0.0006097157020121813f, 0.0006935973651707172f, 0.0009459821158088744f, 0.0007712755468674004f, 0.0006907184142619371f, 0.0009007269400171936f, 0.0007683412986807525f, 0.0009534533601254225f, 0.0006932272226549685f, 0.0006817918620072305f, 0.0008480908581987023f, 0.0007476079044863582f, 0.0008154749521054327f, 0.0007185029680840671f, 0.0007135263294912875f, 0.0008900089305825531f, 0.0007033334113657475f, 0.0006682469393126667f, 0.000574230682104826f, 0.0007125596166588366f, 0.0005591163062490523f, 0.0005339972558431327f, 0.0006197671755217016f, 0.0006435104878619313f, 0.0008165273466147482f, 0.0006122399354353547f, 0.0009444202878512442f, 0.0007133373874239624f, 0.0011011441238224506f, 0.0006004010792821646f, 0.0006047965143807232f, 0.00098427664488554f, 0.0005976322572678328f, 0.000833423575386405f, 0.0008283803472295403f, 0.000541054701898247f, 0.0004596014623530209f, 0.0008510646875947714f, 0.0007222298299893737f, 0.0006702906684949994f, 0.0008360720821656287f, 0.0006717715878039598f, 0.0006958003505133092f, 0.0006967150256969035f, 0.0007314216927625239f, 0.0008961607236415148f, 0.00044694801908917725f, 0.000715936825145036f, 0.0006258213543333113f, 0.0007006449159234762f, 0.0005156401311978698f, 0.0006937497528269887f, 0.0008883969276212156f, 0.0007932914886623621f, 0.0010084015084430575f, 0.0006489675724878907f, 0.0007626895094290376f, 0.0007210210314951837f, 0.0006922631291672587f, 0.0007152751786634326f, 0.00089445267803967f, 0.0005787018453702331f, 0.0007815192802809179f, 0.0007059419294819236f, 0.0007008902612142265f, 0.0004757834831252694f, 0.0006939247832633555f, 0.00044701018487103283f, 0.0006798127433285117f, 0.000570605625398457f, 0.0006802286952733994f, 0.0004739290743600577f, 0.0005546562606468797f, 0.0007481847424060106f, 0.0007969653815962374f, 0.0009391847997903824f, 0.0004666111490223557f, 0.0006619126652367413f, 0.0005724038928747177f, 0.0007163131376728415f, 0.0007007053936831653f, 0.0010548605350777507f, 0.000545112241525203f, 0.0006323427660390735f, 0.0004875254235230386f, 0.0008693606941960752f, 0.0007300217403098941f, 0.0005229992093518376f, 0.0010014893487095833f, 0.0009344012942165136f, 0.0008102039573714137f, 0.0010885039810091257f, 0.00047970135346986353f, 0.0007650093175470829f, 0.000814759754575789f, 0.0006466322811320424f, 0.0009190982091240585f, 0.000724971410818398f, 0.0009073440451174974f, 0.000560348795261234f, 0.000691577501129359f, 0.00059298932319507f, 0.0006982311024330556f, 0.00047426982200704515f, 0.0007978800567798316f, 0.000674089475069195f, 0.001073113875463605f, 0.0007350167143158615f, 0.0006641498184762895f, 0.0007177533698268235f, 0.0008015311323106289f, 0.0007358338916674256f, 0.0007516816258430481f, 0.00048252608394250274f, 0.0006864662282168865f, 0.0007980685913935304f, 0.000573786033783108f, 0.0007558070938102901f, 0.0007770415977574885f, 0.0007904920494183898f, 0.0007373664993792772f, 0.000547114119399339f, 0.0008343787048943341f, 0.0007666592136956751f, 0.0009275575284846127f, 0.0005731831188313663f, 0.0005313137662597001f, 0.0009388878243044019f, 0.0005735430167987943f, 0.0008508115424774587f, 0.0010284067830070853f, 0.00048540919669903815f, 0.000505303789395839f, 0.0006360482657328248f, 0.0006741209072060883f, 0.0008059131214395165f, 0.0009216557955369353f, 0.0008769112755544484f, 0.0006129560060799122f, 0.00031906794174574316f, 0.0006527501391246915f, 0.0006335789221338928f, 0.0007346924976445735f, 0.0006712891045026481f, 0.0005459385574795306f, 0.0007155921193771064f, 0.0006827255128882825f, 0.0007344523328356445f, 0.0004891285207122564f, 0.0006762618431821465f, 0.0006886754999868572f, 0.0003907027712557465f, 0.0006010420038364828f, 0.0005485293222591281f, 0.0009562920895405114f, 0.0007394728600047529f, 0.0005248272209428251f, 0.0011707281228154898f, 0.000771635037381202f, 0.0008767259423620999f, 0.0004728040948975831f, 0.0003843179438263178f, 0.0005404336843639612f, 0.0007161035900935531f, 0.0006721169920638204f, 0.0006730922614224255f, 0.0006222082884050906f, 0.0007627536542713642f, 0.0009316966752521694f, 0.0006893754471093416f, 0.0006649392889812589f, 0.0005536845419555902f, 0.00040817749686539173f, 0.000923272455111146f, 0.0005828101420775056f, 0.0010045035742223263f, 0.0007038806797936559f, 0.0009904056787490845f, 0.0008817682974040508f, 0.0008250809623859823f, 0.0004270389035809785f, 0.0007851860136725008f, 0.0005202401662245393f, 0.0007135194027796388f, 0.0006380247068591416f, 0.0005595535621978343f, 0.000554728670977056f, 0.0005266098887659609f, 0.0007179006352089345f, 0.0008081835112534463f, 0.0007129356963559985f, 0.0005696362932212651f, 0.0006462784949690104f, 0.0006328064482659101f, 0.0005172751261852682f, 0.0009111596154980361f, 0.0006850895006209612f, 0.0006831534556113183f, 0.0006823001895099878f, 0.0012866839533671737f, 0.0006617968901991844f, 0.0004490831051953137f, 0.0006244171527214348f, 0.0006906599155627191f, 0.0005245268112048507f, 0.0009797189850360155f, 0.0008167328196577728f, 0.000625964836217463f, 0.0006431598449125886f, 0.0007339912699535489f, 0.0006750355241820216f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033957690466195345f, 0.004390242975205183f, 0.0023986012674868107f, 0.003118363907560706f, 0.0021378693636506796f, 0.0025482052005827427f, 0.0010461194906383753f, 0.002679061144590378f, 0.002918166806921363f, 0.001893520588055253f, 0.0038681928999722004f, 0.0033568048384040594f, 0.0014193336246535182f, 0.0017343581421300769f, 0.0028995720203965902f, 0.0011991879437118769f, 0.0012309333542361856f, 0.0007649557082913816f, 0.002854165155440569f, 0.0011647073552012444f, 0.0006940367165952921f, 0.001676721265539527f, 0.002300172345712781f, 0.004564735572785139f, 0.0010850596008822322f, 0.00300410995259881f, 0.0037048475351184607f, 0.003742184257134795f, 0.002886980539187789f, 0.0025298926047980785f, 0.0006545728538185358f, 0.000760482857003808f, 0.0022532311268150806f, 0.0007611372275277972f, 0.0026900789234787226f, 0.002465017605572939f, 0.002395911142230034f, 0.0010689926566556096f, 0.0029238415881991386f, 0.0006120637408457696f, 0.0006701609818264842f, 0.0028228824958205223f, 0.003045126562938094f, 0.003439359599724412f, 0.0006098282756283879f, 0.0008046825532801449f, 0.0017831913428381085f, 0.002767600817605853f, 0.003928584046661854f, 0.003021650016307831f, 0.0047352989204227924f, 0.0012376634404063225f, 0.0006221912917681038f, 0.0017756983870640397f, 0.002828989177942276f, 0.0010626781731843948f, 0.0014771141577512026f, 0.0032634965609759092f, 0.000696252565830946f, 0.002279226668179035f, 0.000781575741712004f, 0.002874483121559024f, 0.003087979042902589f, 0.0010025668889284134f, 0.001066855271346867f, 0.0029335664585232735f, 0.0006522979238070548f, 0.001647801953367889f, 0.0028142340015619993f, 0.0010187918087467551f, 0.002270616590976715f, 0.000621626793872565f, 0.0007054393063299358f, 0.0007409054669551551f, 0.0008770091808401048f, 0.0025362130254507065f, 0.0033016707748174667f, 0.00307444971986115f, 0.002282397821545601f, 0.0013017522869631648f, 0.0029378654435276985f, 0.0014969382900744677f, 0.0007969550206325948f, 0.0031596568878740072f, 0.0028507625684142113f, 0.0023287208750844f, 0.0022322237491607666f, 0.002795393578708172f, 0.0032992952037602663f, 0.002727090148255229f, 0.001300294534303248f, 0.004061589017510414f, 0.0031184814870357513f, 0.003534694667905569f, 0.0007042120560072362f, 0.0006712310714647174f, 0.0015140679897740483f, 0.0027471575886011124f, 0.0031660408712923527f, 0.0036945303436368704f, 0.0007933969027362764f, 0.0005913333734497428f, 0.0027954443357884884f, 0.0031092341523617506f, 0.0025872928090393543f, 0.0009852293878793716f, 0.0026095861103385687f, 0.0007087969570420682f, 0.0024059140123426914f, 0.0027940748259425163f, 0.002348469803109765f, 0.0007762597524560988f, 0.0008495411020703614f, 0.002613160526379943f, 0.001984913134947419f, 0.003152831457555294f, 0.0008741188794374466f, 0.002972652902826667f, 0.002583625726401806f, 0.0005528679466806352f, 0.0014219810254871845f, 0.002846729476004839f, 0.0010117411147803068f, 0.0007388069643639028f, 0.002204667776823044f, 0.0026814755983650684f, 0.0035841651260852814f, 0.0005365156685002148f, 0.0017845897236838937f, 0.0005905146826989949f, 0.002726829145103693f, 0.0009985353099182248f, 0.004810282960534096f, 0.0023823229130357504f, 0.003915749024599791f, 0.0012082807952538133f, 0.0024987165816128254f, 0.0005854241317138076f, 0.0011072499910369515f, 0.0011937359813600779f, 0.0030868379399180412f, 0.0008761105709709227f, 0.0034976124297827482f, 0.0005902242264710367f, 0.0006736985524185002f, 0.0006101889302954078f, 0.003076936351135373f, 0.0009542849147692323f, 0.0007731210789643228f, 0.000792575825471431f, 0.0007915644091553986f, 0.0020544854924082756f, 0.0024981750175356865f, 0.00289525487460196f, 0.0021299722138792276f, 0.0034690864849835634f, 0.0005224721389822662f, 0.0005704032373614609f, 0.0007146645220927894f, 0.003967381548136473f, 0.0033882255665957928f, 0.0027290871366858482f, 0.002890142612159252f, 0.002453587017953396f, 0.0006699398509226739f, 0.0030624414794147015f, 0.0007249699556268752f, 0.001455739140510559f, 0.0022216951474547386f, 0.003177712904289365f, 0.0033017012756317854f, 0.002610214054584503f, 0.0036335105542093515f, 0.001682017114944756f, 0.0022430014796555042f, 0.0017687034560367465f, 0.003041171468794346f, 0.0012145552318543196f, 0.0006314868805930018f, 0.0008705847430974245f, 0.0031270149629563093f, 0.0013010824332013726f, 0.0009468159405514598f, 0.0005290108965709805f, 0.0024128726217895746f, 0.000689772772602737f, 0.0005776369944214821f, 0.004491931293159723f, 0.003097164910286665f, 0.0028240664396435022f, 0.003067297860980034f, 0.0006069405353628099f, 0.0010661670239642262f, 0.0007090564467944205f, 0.0006967979716137052f, 0.004696546588093042f, 0.0032057687640190125f, 0.003799652447924018f, 0.002626069588586688f, 0.0026698759756982327f, 0.0035265579354017973f, 0.0014683245681226254f, 0.003207006026059389f, 0.002983944257721305f, 0.0034754364751279354f, 0.000732298765797168f, 0.0029518171213567257f, 0.0007914346060715616f, 0.0020936427172273397f, 0.0006036391714587808f, 0.001567072351463139f, 0.002265236573293805f, 0.000556680781301111f, 0.0013473568251356483f, 0.0025264115538448095f, 0.0031754940282553434f, 0.0036794254556298256f, 0.0007251499337144196f, 0.0006167072569951415f, 0.0021513844840228558f, 0.002953264629468322f, 0.0027796407230198383f, 0.0028665598947554827f, 0.0036404384300112724f, 0.003122359747067094f, 0.0020989798940718174f, 0.0013601818354800344f, 0.002814669394865632f, 0.00095365074230358f, 0.0005686698714271188f, 0.003815458621829748f, 0.0014391562435775995f, 0.002811918267980218f, 0.0008147391490638256f, 0.0007828341913409531f, 0.0027332755271345377f, 0.0027582840994000435f, 0.0013274544617161155f, 0.0019523046212270856f, 0.0029829731211066246f, 0.0008709601243026555f, 0.0008427719003520906f, 0.0033866409212350845f, 0.0031990704592317343f, 0.00384153937920928f, 0.0037009823136031628f, 0.0006621539941988885f, 0.004053283482789993f, 0.003811000846326351f, 0.0026633553206920624f, 0.0007211519405245781f, 0.0015856185927987099f, 0.0005519777187146246f, 0.003156194929033518f, 0.0015033296076580882f, 0.0024741902016103268f, 0.00281770178116858f, 0.0007157718646340072f, 0.0005610864609479904f, 0.0014490343164652586f, 0.0028925419319421053f, 0.0006728011649101973f, 0.003599392483010888f, 0.0027119701262563467f, 0.0026785440277308226f, 0.0033329552970826626f, 0.0034809403587132692f, 0.0027571660466492176f, 0.0024916825350373983f, 0.0029943182598799467f, 0.0009685049881227314f, 0.003235799027606845f, 0.0025377406273037195f, 0.0024689380079507828f, 0.003263836959376931f, 0.0036109767388552427f, 0.003255954012274742f, 0.0009681847295723855f, 0.0008496424416080117f, 0.0005434558843262494f, 0.0019459141185507178f, 0.0007937174523249269f, 0.003053682390600443f, 0.0025600106455385685f, 0.004106177017092705f, 0.0005788527778349817f, 0.0028248585294932127f, 0.0017499286914244294f, 0.0007965497788973153f, 0.004068460781127214f, 0.000775056891143322f, 0.0021496585104614496f, 0.0012471989030018449f, 0.0007697396213188767f, 0.00301475846208632f, 0.0012377809034660459f, 0.0033937396947294474f, 0.0033249608241021633f, 0.0006186457467265427f, 0.0006560441688634455f, 0.0006393677904270589f, 0.0015092456014826894f, 0.0011730603873729706f, 0.0006773437489755452f, 0.002748889848589897f, 0.0007028284016996622f, 0.002799373120069504f, 0.004034570883959532f, 0.0030934500973671675f, 0.0009180640336126089f, 0.0010212513152509928f, 0.0008412830648012459f, 0.0031720795668661594f, 0.0007791871321387589f, 0.0006371723720803857f, 0.0007402882911264896f, 0.0035325237549841404f, 0.00270971842110157f, 0.0006306801224127412f, 0.002922131447121501f, 0.0022162941750139f, 0.002488445956259966f, 0.00460060965269804f, 0.0011568745831027627f, 0.0034595851320773363f, 0.0006489281659014523f, 0.0007784466724842787f, 0.002538972534239292f, 0.003155831713229418f, 0.0012793511850759387f, 0.0014352777507156134f, 0.0030295830219984055f, 0.0017042049439623952f, 0.0025176105555146933f, 0.0024478896521031857f, 0.002159580821171403f, 0.0024494172539561987f, 0.003754227189347148f, 0.003023398807272315f, 0.0030386163853108883f, 0.0025159006472676992f, 0.0009567197994329035f, 0.002085005631670356f, 0.0032490973826497793f, 0.0007989109144546092f, 0.002713784109801054f, 0.0007394394488073885f, 0.0006034842226654291f, 0.0007744770846329629f, 0.0005714688450098038f, 0.002963679376989603f, 0.0009230108116753399f, 0.0007989124278537929f, 0.002607146743685007f, 0.001198530662804842f, 0.0019100644858554006f, 0.000999892596155405f, 0.0009825038723647594f, 0.0006501547759398818f, 0.0026002537924796343f, 0.0013896403834223747f, 0.0007771488162688911f, 0.0006850002100691199f, 0.0022909059189260006f, 0.0006153956637717783f, 0.0007177850347943604f, 0.0007066637044772506f, 0.0006519739399664104f, 0.0015407068422064185f, 0.0013506654649972916f, 0.0012909952783957124f, 0.002264506183564663f, 0.00295456126332283f, 0.0016219812678173184f, 0.0038426590617746115f, 0.003102717688307166f, 0.0006212908192537725f, 0.0031317498069256544f, 0.0008084707660600543f, 0.000584305904339999f, 0.0007199757965281606f, 0.0027136756107211113f, 0.0024015987291932106f, 0.002823540475219488f, 0.0013350008521229029f, 0.0007089708233252168f, 0.0009503496112301946f, 0.0011125144083052874f, 0.0024629225954413414f, 0.0035262980964034796f, 0.0011033039772883058f, 0.0005956862587481737f, 0.002784387907013297f, 0.0027971630915999413f, 0.0006614607991650701f, 0.0006010128417983651f, 0.003049461869522929f, 0.0025526501704007387f, 0.003158431500196457f, 0.0008989006164483726f, 0.0010136994533240795f, 0.0006744810380041599f, 0.0010549098951742053f, 0.0014442687388509512f, 0.001972871134057641f, 0.0031565388198941946f, 0.0006262526148930192f, 0.002470101695507765f, 0.0022576376795768738f, 0.0034139223862439394f, 0.0032065424602478743f, 0.003832248505204916f, 0.0007671887869946659f, 0.0007820708560757339f, 0.0005542989238165319f, 0.0028823961038142443f, 0.002629541326314211f, 0.0012986543588340282f, 0.000650612695608288f, 0.0005788034177385271f, 0.0019754497334361076f, 0.0011671797838062048f, 0.0034695882350206375f, 0.001407115370966494f, 0.0009160627378150821f, 0.0009475047118030488f, 0.003119248664006591f, 0.0008505023433826864f, 0.0023827250115573406f, 0.00317243579775095f, 0.00328305852599442f, 0.0006881666486151516f, 0.0029381094500422478f, 0.0010107028065249324f, 0.002482956275343895f, 0.0019338587298989296f, 0.0011159537825733423f, 0.0022768022026866674f, 0.0025605519767850637f, 0.002595220459625125f, 0.0031013682018965483f, 0.0007871898706071079f, 0.0005751036223955452f, 0.0034322147257626057f, 0.0007908277329988778f, 0.0006670190487056971f, 0.0032030832953751087f, 0.0005292787100188434f, 0.004054264631122351f, 0.000725592952221632f, 0.000646282802335918f, 0.0029597829561680555f, 0.0030741363298147917f, 0.003256537253037095f, 0.004030454903841019f, 0.002655984601005912f, 0.002765511628240347f, 0.0010120151564478874f, 0.0031021751929074526f, 0.0007714624516665936f, 0.0029665587935596704f, 0.003218249185010791f, 0.0006449620123021305f, 0.0020549835171550512f, 0.0027577909640967846f, 0.0026490786112844944f, 0.0009986190125346184f, 0.0007001694175414741f, 0.0008188190404325724f, 0.0008084275759756565f, 0.0028407832141965628f, 0.002455509966239333f, 0.0007773978868499398f, 0.001748634153045714f, 0.0025034339632838964f, 0.0006938468432053924f, 0.0007685961318202317f, 0.0032802196219563484f, 0.00330633157864213f, 0.0006384765729308128f, 0.0007577346987091005f, 0.0012350402539595962f, 0.0028093215078115463f, 0.0031431361567229033f, 0.0008612482342869043f, 0.0010864043142646551f, 0.0008485278813168406f, 0.0027384294662624598f, 0.002821165369823575f, 0.002879263600334525f, 0.0008124607848003507f, 0.0007435505394823849f, 0.0008360504289157689f, 0.003998542204499245f, 0.0025088905822485685f, 0.004163277335464954f, 0.0024430796038359404f, 0.003689452772960067f, 0.002935508033260703f, 0.0007079842034727335f, 0.003544138977304101f, 0.0031928052194416523f, 0.000890157010871917f, 0.002996585099026561f, 0.0009963056072592735f, 0.0007757814601063728f, 0.0028928020037710667f, 0.0007942650117911398f, 0.0030857643578201532f, 0.004282264970242977f, 0.0005717825260944664f, 0.0025534038431942463f, 0.0018315429333597422f, 0.002969270572066307f, 0.0033951543737202883f, 0.0024612692650407553f, 0.0033293713349848986f, 0.0008355436730198562f, 0.0023127396125346422f, 0.0034249473828822374f, 0.00452629616484046f, 0.0006372142233885825f, 0.002583432476967573f, 0.0016753498930484056f, 0.003396219341084361f, 0.0007324666366912425f, 0.0030792688485234976f, 0.0018830490298569202f, 0.0029549661558121443f, 0.004211544059216976f, 0.003343883203342557f, 0.0038523422554135323f, 0.002742947079241276f, 0.0029900451190769672f, 0.0007855375879444182f, 0.003122870111837983f, 0.000690629065502435f, 0.0030282402876764536f, 0.0007512600277550519f, 0.0031549364794045687f, 0.0016668728785589337f, 0.001463023480027914f, 0.0017416031332686543f, 0.003961958456784487f, 0.0005560129648074508f, 0.0033958738204091787f, 0.0019675360526889563f, 0.002722575096413493f, 0.002116995397955179f, 0.004014306236058474f, 0.0006201773649081588f, 0.0009221516083925962f, 0.002540601184591651f, 0.0018866538302972913f, 0.0006377872196026146f, 0.0007462893845513463f, 0.0019782662857323885f, 0.0038129554595798254f, 0.0008593674283474684f, 0.0027205643709748983f, 0.0006444667815230787f, 0.0007345155463553965f, 0.0007647568709217012f, 0.0006586730596609414f, 0.0046211169101297855f, 0.001425344729796052f, 0.0021834278013557196f, 0.0007613828056491911f, 0.002471830230206251f, 0.0024204892106354237f, 0.0022082754876464605f, 0.002448309911414981f, 0.002966304076835513f, 0.00335848075337708f, 0.0015582236228510737f, 0.003026653081178665f, 0.0027963428292423487f, 0.000739461334887892f, 0.002508970443159342f, 0.0007777494611218572f, 0.004224119707942009f, 0.002818300388753414f, 0.0009656958864070475f, 0.002236227737739682f, 0.002947394037619233f, 0.002056060591712594f, 0.0011115751694887877f, 0.002407399006187916f, 0.0022345867473632097f, 0.0030928070191293955f, 0.0026947390288114548f, 0.0030978911090642214f, 0.0039005971048027277f, 0.0006649638526141644f, 0.0028647135477513075f, 0.0005926586454734206f, 0.0009081408497877419f, 0.0016629179008305073f, 0.0029837116599082947f, 0.001481418963521719f, 0.0008328271214850247f, 0.0007593658519908786f, 0.002595280995592475f, 0.0005947668105363846f, 0.0024395587388426065f, 0.0026705185882747173f, 0.0021043047308921814f, 0.002291977871209383f, 0.0031017593573778868f, 0.002897049766033888f, 0.0028382723685353994f, 0.0025843153707683086f, 0.004330542404204607f, 0.0012956199934706092f, 0.0009581361664459109f, 0.001657898654229939f, 0.002900388091802597f, 0.002410412300378084f, 0.000767745659686625f, 0.0006098544108681381f, 0.0028590045403689146f, 0.004058733582496643f, 0.000815981940831989f, 0.003732483135536313f, 0.0008992086513899267f, 0.0007149568409658968f, 0.0030614668503403664f, 0.0015805450966581702f, 0.0007590089808218181f, 0.003100414527580142f, 0.002576245693489909f, 0.002529800869524479f, 0.0006377482204698026f, 0.0033544034231454134f, 0.0030358033254742622f, 0.0014881666284054518f, 0.0030692811124026775f, 0.0006644427194260061f, 0.0007625321159139276f, 0.0008635517442598939f, 0.0006993574788793921f, 0.00110535672865808f, 0.0038377931341528893f, 0.0006126034422777593f, 0.00290291802957654f, 0.0020113002974539995f, 0.002530114958062768f, 0.002955762902274728f, 0.002686921739950776f, 0.0017227056669071317f, 0.0032121543772518635f, 0.0025157746858894825f, 0.003961469978094101f, 0.0012255929177626967f, 0.002186909783631563f, 0.0027856070082634687f, 0.003423912450671196f, 0.0030587196815758944f, 0.0006535169086419046f, 0.00172964867670089f, 0.0008898726082406938f, 0.0025572392623871565f, 0.0026627820916473866f, 0.0036090367939323187f, 0.0017851797165349126f, 0.0025315287057310343f, 0.003885534591972828f, 0.00275335181504488f, 0.0006071061943657696f, 0.0009958917507901788f, 0.002628511283546686f, 0.0025148186832666397f, 0.0024704192765057087f, 0.0025955180171877146f, 0.002316185273230076f, 0.0027127608191221952f, 0.0026124357245862484f, 0.003287840634584427f, 0.0013684694422408938f, 0.0007056855829432607f, 0.0006115465657785535f, 0.003444419242441654f, 0.000633937306702137f, 0.0036312625743448734f, 0.003480745479464531f, 0.002891462529078126f, 0.002515927655622363f, 0.0027325781993567944f, 0.0037007895298302174f, 0.0033522946760058403f, 0.0005959878908470273f, 0.0007899231859482825f, 0.003141694935038686f, 0.0007319063879549503f, 0.0027811399195343256f, 0.0009679332142695785f, 0.0027659833431243896f, 0.0019828523509204388f, 0.003769869217649102f, 0.0008417400531470776f, 0.0028992595616728067f, 0.0011399624636396766f, 0.0034000789746642113f, 0.0032029703725129366f, 0.0029074973426759243f, 0.004121706821024418f, 0.0007320946897380054f, 0.003029199317097664f, 0.0013512885197997093f, 0.0007595987990498543f, 0.0031054620631039143f, 0.005006192252039909f, 0.004028938245028257f, 0.0006564002251252532f, 0.002597643993794918f, 0.0034059672616422176f, 0.0007573236362077296f, 0.0007073478191159666f, 0.0021100786980241537f, 0.0007916067261248827f, 0.0009083909681066871f, 0.0008668294758535922f, 0.0021930814255028963f, 0.000922655570320785f, 0.001060423906892538f, 0.003347556572407484f, 0.0038233487866818905f, 0.0031313521321862936f, 0.0006789143080823123f, 0.0009724906412884593f, 0.0008038475643843412f, 0.0018506686901673675f, 0.0011053230846300721f, 0.0028516659513115883f, 0.0007641097181476653f, 0.0029296353459358215f, 0.0015875869430601597f, 0.002243546536192298f, 0.0007594393100589514f, 0.0037054072599858046f, 0.000635396980214864f, 0.0038428877014666796f, 0.002738457638770342f, 0.0007122418028302491f, 0.0006221544463187456f, 0.003713071346282959f, 0.003473707940429449f, 0.002985453698784113f, 0.003155635204166174f, 0.0008910428732633591f, 0.0013889942783862352f, 0.002551252720877528f, 0.0006061965832486749f, 0.0019471959676593542f, 0.0042268056422472f, 0.001915298867970705f, 0.0008163380553014576f, 0.0029674828983843327f, 0.003019429510459304f, 0.0035100600216537714f, 0.0007600104436278343f, 0.003016555216163397f, 0.0027332021854817867f, 0.0009930405067279935f, 0.0007781268213875592f, 0.0009753938065841794f, 0.0007186603033915162f, 0.0030403032433241606f, 0.001067127101123333f, 0.0015087955398485065f, 0.0007487481343559921f, 0.0038063714746385813f, 0.0007759392028674483f, 0.0010535409674048424f, 0.002904935274273157f, 0.0012327871518209577f, 0.0035698649007827044f, 0.00063732621492818f, 0.002688318258151412f, 0.0031285497825592756f, 0.003724592737853527f, 0.0007243228028528392f, 0.002138494746759534f, 0.002687574364244938f, 0.00283870124258101f, 0.002864512149244547f, 0.003716998966410756f, 0.0019250332843512297f, 0.001293966663070023f, 0.0026745807845145464f, 0.0015530723612755537f, 0.002589430892840028f, 0.0028977827169001102f, 0.0005492853815667331f, 0.003567806212231517f, 0.0017629631329327822f, 0.004032808355987072f, 0.0023141850251704454f, 0.0007143604452721775f, 0.002841990441083908f, 0.0028353037778288126f, 0.0027640603948384523f, 0.0026312535628676414f, 0.0031148595735430717f, 0.0006597044412046671f, 0.0010649517644196749f, 0.0033659511245787144f, 0.0024356269277632236f, 0.0013124363031238317f, 0.0005959615227766335f, 0.000710696040187031f, 0.0030919064301997423f, 0.0007158775697462261f, 0.0025620185770094395f, 0.0007369561935774982f, 0.0005331425927579403f, 0.0017235332634299994f, 0.0012728656874969602f, 0.002989360364153981f, 0.0031565420795232058f, 0.0011498065432533622f, 0.0005987632903270423f, 0.0008474126807413995f, 0.0026807712856680155f, 0.0022422433830797672f, 0.0016239620745182037f, 0.0035755394492298365f, 0.0026762268971651793f, 0.0007148839649744332f, 0.0024337575305253267f, 0.0006840624264441431f, 0.0032214943785220385f, 0.0030907834880053997f, 0.0006847130716778338f, 0.0024626082740724087f, 0.0007284647435881197f, 0.000630249734967947f, 0.0031418397556990385f, 0.001764641609042883f, 0.002667991677299142f, 0.0025011063553392887f, 0.0010611001634970307f, 0.0014096093364059925f, 0.0006244458490982652f, 0.002534995786845684f, 0.003383803879842162f, 0.00263871718198061f, 0.003136166837066412f, 0.0031368061900138855f, 0.0006394747761078179f, 0.0034907867666333914f, 0.0007493162411265075f, 0.001236852491274476f, 0.0010101113002747297f, 0.002198567846789956f, 0.003162495559081435f, 0.0013461210764944553f, 0.0007896065362729132f, 0.0020900368690490723f, 0.0014513747300952673f, 0.0031139031052589417f, 0.0030909720808267593f, 0.0009132232517004013f, 0.0008642614702694118f, 0.0027690588030964136f, 0.0028387766797095537f, 0.0023202726151794195f, 0.0025226606521755457f, 0.003477750811725855f, 0.00298364763148129f, 0.0006735899951308966f, 0.0007246360182762146f, 0.0027506714686751366f, 0.0030807550065219402f, 0.002350073540583253f, 0.0005854176124557853f, 0.0006454904214479029f, 0.0006540410104207695f, 0.0038583853747695684f, 0.0028427147772163153f, 0.0006834415253251791f, 0.003113327780738473f, 0.0021431967616081238f, 0.003278367454186082f, 0.0026212851516902447f, 0.003398086642846465f, 0.001069851452484727f, 0.0006578561151400208f, 0.0023384024389088154f, 0.001957567175850272f, 0.0034651297610253096f, 0.0023711416870355606f, 0.0028866466600447893f, 0.001702821347862482f, 0.0008023083209991455f, 0.0025682151317596436f, 0.004814231302589178f, 0.002088308334350586f, 0.0009506569476798177f, 0.0021737867500633f, 0.003614709945395589f, 0.00276307319290936f, 0.001173212192952633f, 0.0008430449524894357f, 0.003882018383592367f, 0.0027672320138663054f, 0.0031926315277814865f, 0.001489527989178896f, 0.0030803880654275417f, 0.0035358923487365246f, 0.0006020303117111325f, 0.003110261168330908f, 0.0025319254491478205f, 0.0008900628890842199f, 0.0007475072052329779f, 0.0006392783252522349f, 0.0007646357989870012f, 0.0007224419387057424f, 0.002331263618543744f, 0.0010885130614042282f, 0.002008970594033599f, 0.0006861052825115621f, 0.0007112026796676219f, 0.0023026177659630775f, 0.002817202126607299f, 0.0017746196826919913f, 0.0008857776992954314f, 0.0009719048975966871f, 0.0028303328435868025f, 0.000662311795167625f, 0.0009761966648511589f, 0.0005784920649603009f, 0.0031371486838907003f, 0.000900419254321605f, 0.002069998299703002f, 0.0007714835228398442f, 0.003047881182283163f, 0.002565341768786311f, 0.0026135973166674376f, 0.0006110285758040845f, 0.0012429318157956004f, 0.002343712840229273f, 0.000949005305301398f, 0.0034351081121712923f, 0.0030935145914554596f, 0.0007983585819602013f, 0.000825133582111448f, 0.003575746202841401f, 0.0008042322588153183f, 0.00273711234331131f, 0.0037530057597905397f, 0.002879879903048277f, 0.0024043007288128138f, 0.002425924176350236f, 0.0018604277865961194f, 0.0028031908441334963f, 0.0006614314625039697f, 0.0023699463345110416f, 0.0006744574056938291f, 0.0018035249086096883f, 0.0013697240501642227f, 0.0008385437540709972f, 0.0010446173837408423f, 0.0023759854957461357f, 0.003589024068787694f, 0.0034401360899209976f, 0.0028593866154551506f, 0.0032458158675581217f, 0.001384382019750774f, 0.0014107681345194578f, 0.0030662284698337317f, 0.0030443579889833927f, 0.0037824504543095827f, 0.003410430857911706f, 0.0011077327653765678f, 0.0006722008110955358f, 0.0011901739053428173f, 0.004624773748219013f, 0.0034693332854658365f, 0.0007948033162392676f, 0.0026419791392982006f, 0.0007719201385043561f, 0.0013761183945462108f, 0.003910551313310862f, 0.0009179568733088672f, 0.0006455043330788612f, 0.0006396088865585625f, 0.003281668294221163f, 0.0036734521854668856f, 0.0017176660476252437f, 0.0036038884427398443f, 0.004884007852524519f, 0.0006884736940264702f, 0.0005273232818581164f, 0.0023369821719825268f, 0.0006387174944393337f, 0.0028358048293739557f, 0.0032480370718985796f, 0.0024546608328819275f, 0.0013771761441603303f, 0.0027719091158360243f, 0.0008070676703937352f, 0.0014880746603012085f, 0.00072149105835706f, 0.0017957002855837345f, 0.0006158151663839817f, 0.001610643696039915f, 0.0005560849676840007f, 0.0007159172091633081f, 0.0021371489856392145f, 0.0007049033883959055f, 0.0030462434515357018f, 0.004368481691926718f, 0.0006205217796377838f, 0.0027851341292262077f, 0.0032981394324451685f, 0.0006779843824915588f, 0.0013767580967396498f, 0.00237318710424006f, 0.0025175430346280336f, 0.004049365874379873f, 0.001091026235371828f, 0.002995522227138281f, 0.002672698814421892f, 0.003106993157416582f, 0.0026619008276611567f, 0.0007093886379152536f, 0.0011397941270843148f, 0.0006190671119838953f, 0.0028882164042443037f, 0.004133055917918682f, 0.0013087932020425797f, 0.002112812362611294f, 0.001516370684839785f, 0.0038904862012714148f, 0.00204660976305604f, 0.0030292561277747154f, 0.0008024456328712404f, 0.0005560053396038711f, 0.0029674735851585865f, 0.0030022922437638044f, 0.0016272676875814795f, 0.0006339981919154525f, 0.0024271681904792786f, 0.0029274814296513796f, 0.0028018727898597717f, 0.002805070485919714f, 0.0020665600895881653f, 0.0006259060464799404f, 0.0006222141091711819f, 0.0030471463687717915f, 0.0007178887608461082f, 0.003931920975446701f, 0.0031009719241410494f, 0.0007984148105606437f, 0.0023181899450719357f, 0.0005445253918878734f, 0.0006404044106602669f, 0.0031782614532858133f, 0.0036479064729064703f, 0.0006938278093002737f, 0.0023094958160072565f, 0.0012761135585606098f, 0.0007194260833784938f, 0.001690535806119442f, 0.0007048756233416498f, 0.0006151417037472129f, 0.003963443450629711f, 0.0033794231712818146f, 0.0017794796731323004f, 0.0030627672094851732f, 0.0018655483145266771f, 0.002976412419229746f, 0.00266835349611938f, 0.000689295819029212f, 0.0045573171228170395f, 0.002137830713763833f, 0.0031456435099244118f, 0.001059116329997778f, 0.0035174351651221514f, 0.0021643175277858973f, 0.0036585647612810135f, 0.0018452340736985207f, 0.0007525477558374405f, 0.0028540627099573612f, 0.0011574033414945006f, 0.0035356071311980486f, 0.0007407610537484288f, 0.0032075901981443167f, 0.0007828809903003275f, 0.002028105780482292f, 0.002865595743060112f, 0.0032894855830818415f, 0.0007996775675565004f, 0.0007149320445023477f, 0.002317956415936351f, 0.0007334438851103187f, 0.003077401779592037f, 0.00293924892321229f, 0.0028503311332315207f, 0.0005551729118451476f, 0.0014052283950150013f, 0.002796915592625737f, 0.0008049029274843633f, 0.0028114202432334423f, 0.0008869905141182244f, 0.0007428635144606233f, 0.002893665339797735f, 0.0020246461499482393f, 0.0033911841455847025f, 0.0030839114915579557f, 0.0009605413652025163f, 0.0021242941729724407f, 0.0024998278822749853f, 0.0010234697256237268f, 0.003289445536211133f, 0.0030211794655770063f, 0.0006513064145110548f, 0.00152979523409158f, 0.0005772666190750897f, 0.0007793724071234465f, 0.0006596720195375383f, 0.002749325940385461f, 0.0036062728613615036f, 0.0034725144505500793f, 0.0018153543351218104f, 0.0007212521159090102f, 0.0015926420455798507f, 0.0005716470186598599f, 0.0031839990988373756f, 0.002432441571727395f, 0.0014774877345189452f, 0.004011575598269701f, 0.004001028835773468f, 0.0012276263441890478f, 0.0025533626321703196f, 0.0030277783516794443f, 0.002550944220274687f, 0.0026552705094218254f, 0.001956657273694873f, 0.0024261956568807364f, 0.0038397484458982944f, 0.0006469778600148857f, 0.0021468286868184805f, 0.0009121056064032018f, 0.0007123450050130486f, 0.003132833633571863f, 0.0026262670289725065f, 0.0007907132967375219f, 0.0025537237524986267f, 0.0006601970526389778f, 0.001053003128618002f, 0.0008292190614156425f, 0.0029946472495794296f, 0.0009731277823448181f, 0.0006562514463439584f, 0.002822631737217307f, 0.0008679298334755003f, 0.0025781968142837286f, 0.002829725155606866f, 0.003241218626499176f, 0.0027672259602695704f, 0.0007340509328059852f, 0.0033749870490282774f, 0.002645595697686076f, 0.0021605568472296f, 0.003196524456143379f, 0.003121771849691868f, 0.000637340999674052f, 0.003529550740495324f, 0.002740815980359912f, 0.0013736624969169497f, 0.001414402504451573f, 0.0006125557119958103f, 0.0009225884568877518f, 0.0005852144677191973f, 0.0008547341567464173f, 0.00315872416831553f, 0.003749689320102334f, 0.0034579236526042223f, 0.002841019770130515f, 0.003084806725382805f, 0.0025626481510698795f, 0.0028138025663793087f, 0.0009279386722482741f, 0.0007727639167569578f, 0.003343001240864396f, 0.0005716882296837866f, 0.0024366197176277637f, 0.0033736564218997955f, 0.0025367981288582087f, 0.0006047924980521202f, 0.0005635879351757467f, 0.0009827043395489454f, 0.0006098899175412953f, 0.0018474641256034374f, 0.003956683445721865f, 0.0010502309305593371f, 0.0028277793899178505f, 0.0030809668824076653f, 0.0024369063321501017f, 0.002291816519573331f, 0.0012597948079928756f, 0.0006816309760324657f, 0.002837598090991378f, 0.0029546539299190044f, 0.0036787099670618773f, 0.0034842530731111765f, 0.0035367144737392664f, 0.0024628974497318268f, 0.003076374065130949f, 0.0032712228130549192f, 0.0005304777878336608f, 0.0032170102931559086f, 0.0029272406827658415f, 0.0039763604290783405f, 0.0015918049030005932f, 0.00272960658185184f, 0.0011326185194775462f, 0.0028094244189560413f, 0.002128918655216694f, 0.002590086543932557f, 0.004608107265084982f, 0.002652229741215706f, 0.001051188912242651f, 0.0005580761353485286f, 0.0006628262344747782f, 0.002857171231880784f, 0.00279235583730042f, 0.0006566452793776989f, 0.0038072741590440273f, 0.0006977968732826412f, 0.0031141198705881834f, 0.0007436013547703624f, 0.0007220465340651572f, 0.0007531229057349265f, 0.0036879912950098515f, 0.0021788845770061016f, 0.0022963122464716434f, 0.0027764681726694107f, 0.000922595092561096f, 0.0029633468948304653f, 0.0008291812846437097f, 0.0032628574408590794f, 0.002950344467535615f, 0.0019089874112978578f, 0.0007394190179184079f, 0.003654422238469124f, 0.0028565083630383015f, 0.0006030954536981881f, 0.0032595335505902767f, 0.0008922565029934049f, 0.0027000342961400747f, 0.0035806598607450724f, 0.002739200834184885f, 0.0019226917065680027f, 0.0008471921319141984f, 0.0018662334186956286f, 0.0009105275967158377f, 0.000783009163569659f, 0.0011327789397910237f, 0.0007097458583302796f, 0.0040260725654661655f, 0.002878218423575163f, 0.002626243745908141f, 0.0006151855923235416f, 0.0028152891900390387f, 0.0026184224989265203f, 0.000738831702619791f, 0.0033841843251138926f, 0.0025784450117498636f, 0.002641830826178193f, 0.000753768952563405f, 0.0013019124744459987f, 0.0009916649432852864f, 0.001964450813829899f, 0.001133493147790432f, 0.0008934265933930874f, 0.0028876771684736013f, 0.0020626182667911053f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 11,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0049698068760335445f, 0.014262440614402294f, 0.004044379573315382f, 0.004911615047603846f, 0.004849189426749945f, 0.008530329912900925f, 0.007377436384558678f, 0.009800299070775509f, 0.009502279572188854f, 0.008176066912710667f, 0.007600882090628147f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #177 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #178 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #179 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #180 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #181 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #182 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #183 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #184 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #185 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #186 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #187 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #188 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #189 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #190 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #196 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch1, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_scratch1_array, &conv2d_70_scratch1_array_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_scratch0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 1584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1584, 1584),
  1, &conv2d_71_scratch0_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_scratch0, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_75_scratch0_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_77_scratch0_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch1, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_scratch1_array, &conv2d_77_scratch1_array_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch0, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch1, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_scratch1_array, &conv2d_79_scratch1_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_scratch0, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_80_scratch0_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_scratch0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_84_scratch0_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch0, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_86_scratch0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch1, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_scratch1_array, &conv2d_86_scratch1_array_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch0, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_87_scratch0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch1, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_scratch1_array, &conv2d_87_scratch1_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch0, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_89_scratch0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch1, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_scratch1_array, &conv2d_89_scratch1_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_scratch0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_90_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_scratch0, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_94_scratch0_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch0, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_96_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch1, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_scratch1_array, &conv2d_96_scratch1_array_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch0, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 13952, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13952, 13952),
  1, &conv2d_98_scratch0_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch1, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_scratch1_array, &conv2d_98_scratch1_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 5230, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5230, 5230),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
  1, &nl_101_scratch0_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_pad_before_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_3_pad_before_output_array, &conv2d_3_pad_before_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_output_array, &conv2d_3_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  pool_4_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &pool_4_output_array, &pool_4_output_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2, 2),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &conv2d_6_output_array, &conv2d_6_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &eltwise_7_output_array, &eltwise_7_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_9_output, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &eltwise_9_output_array, &eltwise_9_output_array_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_pad_before_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 58, 58), AI_STRIDE_INIT(4, 1, 1, 40, 2320),
  1, &conv2d_12_pad_before_output_array, &conv2d_12_pad_before_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_pad_before_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 30, 30), AI_STRIDE_INIT(4, 1, 1, 48, 1440),
  1, &conv2d_15_pad_before_output_array, &conv2d_15_pad_before_output_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  nl_33_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_33_output_array, &nl_33_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_34_output_array, &eltwise_34_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  65, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  pool_39_output, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_39_output_array, &pool_39_output_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_output_array, &conv2d_40_output_array_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_42_output, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_42_output_array, &eltwise_42_output_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  nl_43_output, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_44_output, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_44_output_array, &eltwise_44_output_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_output_array, &conv2d_47_output_array_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  pool_49_output, AI_STATIC,
  77, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &pool_49_output_array, &pool_49_output_array_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_52_output, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &eltwise_52_output_array, &eltwise_52_output_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  nl_53_output, AI_STATIC,
  81, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_54_output, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  83, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_56_output, AI_STATIC,
  84, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_56_output_array, &eltwise_56_output_array_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_output, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_output_array, &conv2d_58_output_array_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  pool_59_output, AI_STATIC,
  87, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &pool_59_output_array, &pool_59_output_array_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 1, 1, 18, 18),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_output, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_61_output_array, &conv2d_61_output_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_62_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &eltwise_62_output_array, &eltwise_62_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  nl_63_output, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &nl_63_output_array, &nl_63_output_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_64_output, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &eltwise_64_output_array, &eltwise_64_output_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_66_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_66_output_array, &eltwise_66_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_output, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_output_array, &conv2d_68_output_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  pool_69_output, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &pool_69_output_array, &pool_69_output_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_output, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_71_output_array, &conv2d_71_output_array_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_72_output, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &eltwise_72_output_array, &eltwise_72_output_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  nl_73_output, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &nl_73_output_array, &nl_73_output_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_74_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &eltwise_74_output_array, &eltwise_74_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_output, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_75_output_array, &conv2d_75_output_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_output, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_output_array, &conv2d_77_output_array_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  pool_78_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_78_output_array, &pool_78_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_output, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_80_output_array, &conv2d_80_output_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_81_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_81_output_array, &eltwise_81_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  nl_82_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_82_output_array, &nl_82_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_83_output, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_83_output_array, &eltwise_83_output_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_84_output_array, &conv2d_84_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_85_output, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_85_output_array, &eltwise_85_output_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_output, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_output_array, &conv2d_86_output_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_output, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_output_array, &conv2d_87_output_array_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  pool_88_output, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_88_output_array, &pool_88_output_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_output, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_output_array, &conv2d_89_output_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_output, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_90_output_array, &conv2d_90_output_array_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_91_output, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_91_output_array, &eltwise_91_output_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  nl_92_output, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_92_output_array, &nl_92_output_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_93_output, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_93_output_array, &eltwise_93_output_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_output, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_94_output_array, &conv2d_94_output_array_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_95_output, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_95_output_array, &eltwise_95_output_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_output, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_output_array, &conv2d_96_output_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  pool_97_output, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_97_output_array, &pool_97_output_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_output, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_output_array, &conv2d_98_output_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_output, AI_STATIC,
  127, 0x1,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1, 11, 11),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  128, 0x1,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1, 11, 11),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  129, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
  1, &conversion_102_output_array, NULL)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  142, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  143, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 2), AI_STRIDE_INIT(4, 1, 8, 16, 16),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  146, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  147, 0x1,
  AI_SHAPE_INIT(4, 2, 1, 1, 8), AI_STRIDE_INIT(4, 1, 2, 16, 16),
  1, &conv2d_6_weights_array, &conv2d_6_weights_array_intq)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  148, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  149, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  150, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  151, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 1, 8, 320, 320),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  152, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  153, 0x1,
  AI_SHAPE_INIT(4, 40, 3, 3, 1), AI_STRIDE_INIT(4, 1, 40, 40, 120),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  154, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  155, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  156, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  157, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  158, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  159, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  160, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  161, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  162, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  163, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  164, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  165, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  166, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  167, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  168, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  169, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  170, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  171, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 24), AI_STRIDE_INIT(4, 1, 48, 1152, 1152),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  172, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  173, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  174, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  175, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  176, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  177, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  178, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  179, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  180, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  181, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  182, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  183, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  184, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  185, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  186, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  187, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  188, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  189, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  190, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  191, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 64), AI_STRIDE_INIT(4, 1, 24, 1536, 1536),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  195, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  197, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  201, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 24), AI_STRIDE_INIT(4, 1, 64, 1536, 1536),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 72), AI_STRIDE_INIT(4, 1, 24, 1728, 1728),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 72, 5, 5, 1), AI_STRIDE_INIT(4, 1, 72, 72, 360),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  206, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 18), AI_STRIDE_INIT(4, 1, 72, 1296, 1296),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  208, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 18, 1, 1, 72), AI_STRIDE_INIT(4, 1, 18, 1296, 1296),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  210, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 24), AI_STRIDE_INIT(4, 1, 72, 1728, 1728),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  214, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_weights, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 144, 5, 5, 1), AI_STRIDE_INIT(4, 1, 144, 144, 720),
  1, &conv2d_68_weights_array, &conv2d_68_weights_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_bias, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_68_bias_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 36), AI_STRIDE_INIT(4, 1, 144, 5184, 5184),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  218, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_weights, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 36, 1, 1, 144), AI_STRIDE_INIT(4, 1, 36, 5184, 5184),
  1, &conv2d_71_weights_array, &conv2d_71_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_71_bias_array, NULL)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_weights, AI_STATIC,
  221, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 48), AI_STRIDE_INIT(4, 1, 144, 6912, 6912),
  1, &conv2d_75_weights_array, &conv2d_75_weights_array_intq)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_bias, AI_STATIC,
  222, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_75_bias_array, NULL)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  224, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_weights, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_77_weights_array, &conv2d_77_weights_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_bias, AI_STATIC,
  226, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_77_bias_array, NULL)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  228, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_weights, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_80_weights_array, &conv2d_80_weights_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_bias, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_80_bias_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_weights, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_84_weights_array, &conv2d_84_weights_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_bias, AI_STATIC,
  232, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_84_bias_array, NULL)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_weights, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_86_weights_array, &conv2d_86_weights_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_bias, AI_STATIC,
  234, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_86_bias_array, NULL)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_weights, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_87_weights_array, &conv2d_87_weights_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_bias, AI_STATIC,
  236, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_87_bias_array, NULL)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_weights, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_89_weights_array, &conv2d_89_weights_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_bias, AI_STATIC,
  238, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_89_bias_array, NULL)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_weights, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_90_weights_array, &conv2d_90_weights_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_bias, AI_STATIC,
  240, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_90_bias_array, NULL)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_weights, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_94_weights_array, &conv2d_94_weights_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_bias, AI_STATIC,
  242, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_94_bias_array, NULL)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_weights, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_96_weights_array, &conv2d_96_weights_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_bias, AI_STATIC,
  244, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_96_bias_array, NULL)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_weights, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 1280), AI_STRIDE_INIT(4, 1, 288, 368640, 368640),
  1, &conv2d_98_weights_array, &conv2d_98_weights_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_bias, AI_STATIC,
  246, 0x0,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 4, 4, 5120, 5120),
  1, &conv2d_98_bias_array, NULL)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_weights, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1280, 1, 1, 11), AI_STRIDE_INIT(4, 1, 1280, 14080, 14080),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  249, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  251, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  253, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  254, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_array_intq)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  255, 0x0,
  AI_SHAPE_INIT(4, 1, 52, 1, 1), AI_STRIDE_INIT(4, 1, 1, 52, 52),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #256 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  256, 0x0,
  AI_SHAPE_INIT(4, 1, 88, 1, 1), AI_STRIDE_INIT(4, 1, 1, 88, 88),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #257 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  257, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #258 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  258, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #259 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  259, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #260 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  260, 0x0,
  AI_SHAPE_INIT(4, 1, 1481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1481, 1481),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #261 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  261, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #262 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  262, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #263 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  263, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #264 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  264, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #265 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  265, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #266 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  266, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #267 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  267, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #268 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  268, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #269 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  269, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #270 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  270, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #271 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  271, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #272 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  272, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #273 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  273, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #274 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  274, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #275 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  275, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #276 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  276, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #277 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  277, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #278 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  278, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #279 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  279, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #280 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  280, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #281 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  281, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #282 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  282, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #283 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  283, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #284 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  284, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #285 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  285, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #286 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  286, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #287 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  287, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #288 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  288, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #289 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  289, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #290 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  290, 0x0,
  AI_SHAPE_INIT(4, 1, 736, 1, 1), AI_STRIDE_INIT(4, 1, 1, 736, 736),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #291 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  291, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #292 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  292, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #293 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  293, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #294 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  294, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #295 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  295, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #296 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  296, 0x0,
  AI_SHAPE_INIT(4, 1, 496, 1, 1), AI_STRIDE_INIT(4, 1, 1, 496, 496),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #297 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  297, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #298 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  298, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #299 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  299, 0x0,
  AI_SHAPE_INIT(4, 1, 6121, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6121, 6121),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #300 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch1, AI_STATIC,
  300, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_scratch1_array, &conv2d_58_scratch1_array_intq)

/* Tensor #301 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  301, 0x0,
  AI_SHAPE_INIT(4, 1, 468, 1, 1), AI_STRIDE_INIT(4, 1, 1, 468, 468),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #302 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  302, 0x0,
  AI_SHAPE_INIT(4, 1, 792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 792, 792),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #303 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  303, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #304 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  304, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #305 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  305, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #306 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch0, AI_STATIC,
  306, 0x0,
  AI_SHAPE_INIT(4, 1, 12241, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12241, 12241),
  1, &conv2d_68_scratch0_array, NULL)

/* Tensor #307 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch1, AI_STATIC,
  307, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_scratch1_array, &conv2d_68_scratch1_array_intq)

/* Tensor #308 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  308, 0x0,
  AI_SHAPE_INIT(4, 1, 936, 1, 1), AI_STRIDE_INIT(4, 1, 1, 936, 936),
  1, &conv2d_70_scratch0_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_102_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_102_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_102_layer, 102,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &conversion_102_chain,
  NULL, &conversion_102_layer, AI_STATIC, 
)


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1802417152, 25, -62 };
AI_ARRAY_OBJ_DECLARE(
    nl_101_nl_params, AI_ARRAY_FORMAT_S32,
    nl_101_nl_params_data, nl_101_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_101_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  nl_101_layer, 101,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm_integer,
  &nl_101_chain,
  NULL, &conversion_102_layer, AI_STATIC, 
  .nl_params = &nl_101_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_99_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_98_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_99_weights, &conv2d_99_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_99_layer, 99,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_99_chain,
  NULL, &nl_101_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_98_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_97_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_98_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_98_weights, &conv2d_98_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_98_scratch0, &conv2d_98_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_98_layer, 98,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_98_chain,
  NULL, &conv2d_99_layer, AI_STATIC, 
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
  pool_97_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_96_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_97_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_97_layer, 97,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_97_chain,
  NULL, &conv2d_98_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_96_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_95_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_96_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_96_weights, &conv2d_96_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_96_scratch0, &conv2d_96_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_96_layer, 96,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_96_chain,
  NULL, &pool_97_layer, AI_STATIC, 
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
  eltwise_95_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_85_output, &conv2d_94_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_95_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_95_layer, 95,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_95_chain,
  NULL, &conv2d_96_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_94_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_93_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_94_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_94_weights, &conv2d_94_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_94_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_94_layer, 94,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_94_chain,
  NULL, &eltwise_95_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_93_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_87_output, &nl_92_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_93_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_93_layer, 93,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_93_chain,
  NULL, &conv2d_94_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -121, -118, -115, -112, -108, -105, -102, -99, -95, -92, -89, -86, -82, -79, -76, -73, -69, -66, -63, -59, -56, -53, -50, -46, -43, -40, -37, -33, -30, -27, -24, -20, -17, -14, -11, -7, -4, -1, 3, 6, 9, 12, 16, 19, 22, 25, 29, 32, 35, 38, 42, 45, 48, 51, 55, 58, 61, 65, 68, 71, 74, 78, 81, 84, 87, 91, 94, 97, 100, 104, 107, 110, 113, 117, 120, 123, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_92_nl_params, AI_ARRAY_FORMAT_S8,
    nl_92_nl_params_data, nl_92_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_92_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_91_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_92_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_92_layer, 92,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_92_chain,
  NULL, &eltwise_93_layer, AI_STATIC, 
  .nl_params = &nl_92_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_91_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_90_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_91_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_91_layer, 91,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_91_chain,
  NULL, &nl_92_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_90_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_89_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_90_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_90_weights, &conv2d_90_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_90_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_90_layer, 90,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_90_chain,
  NULL, &eltwise_91_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_89_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_88_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_89_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_89_weights, &conv2d_89_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_89_scratch0, &conv2d_89_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_89_layer, 89,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_89_chain,
  NULL, &conv2d_90_layer, AI_STATIC, 
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
  pool_88_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_87_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_88_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_88_layer, 88,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_88_chain,
  NULL, &conv2d_89_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_87_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_86_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_87_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_87_weights, &conv2d_87_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_87_scratch0, &conv2d_87_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_87_layer, 87,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_87_chain,
  NULL, &pool_88_layer, AI_STATIC, 
  .groups = 288, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_86_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_85_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_86_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_86_weights, &conv2d_86_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_86_scratch0, &conv2d_86_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_86_layer, 86,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_86_chain,
  NULL, &conv2d_87_layer, AI_STATIC, 
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
  eltwise_85_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_75_output, &conv2d_84_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_85_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_85_layer, 85,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_85_chain,
  NULL, &conv2d_86_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_84_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_83_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_84_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_84_weights, &conv2d_84_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_84_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_84_layer, 84,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_84_chain,
  NULL, &eltwise_85_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_83_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_77_output, &nl_82_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_83_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_83_layer, 83,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_83_chain,
  NULL, &conv2d_84_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -121, -117, -114, -110, -106, -103, -99, -95, -92, -88, -85, -81, -77, -74, -70, -67, -63, -59, -56, -52, -49, -45, -41, -38, -34, -30, -27, -23, -20, -16, -12, -9, -5, -2, 2, 6, 9, 13, 16, 20, 24, 27, 31, 35, 38, 42, 45, 49, 53, 56, 60, 63, 67, 71, 74, 78, 82, 85, 89, 92, 96, 100, 103, 107, 110, 114, 118, 121, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_82_nl_params, AI_ARRAY_FORMAT_S8,
    nl_82_nl_params_data, nl_82_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_82_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_81_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_82_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_82_layer, 82,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_82_chain,
  NULL, &eltwise_83_layer, AI_STATIC, 
  .nl_params = &nl_82_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_81_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_80_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_81_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_81_layer, 81,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_81_chain,
  NULL, &nl_82_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_80_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_80_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_80_weights, &conv2d_80_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_80_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_80_layer, 80,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_80_chain,
  NULL, &eltwise_81_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_79_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_78_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_79_weights, &conv2d_79_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_79_scratch0, &conv2d_79_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_79_layer, 79,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_79_chain,
  NULL, &conv2d_80_layer, AI_STATIC, 
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
  pool_78_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_78_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_78_layer, 78,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_78_chain,
  NULL, &conv2d_79_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_77_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_77_weights, &conv2d_77_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_77_scratch0, &conv2d_77_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_77_layer, 77,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_77_chain,
  NULL, &pool_78_layer, AI_STATIC, 
  .groups = 288, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_76_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_76_weights, &conv2d_76_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_76_scratch0, &conv2d_76_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_76_layer, 76,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_76_chain,
  NULL, &conv2d_77_layer, AI_STATIC, 
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
  conv2d_75_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_74_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_75_weights, &conv2d_75_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_75_layer, 75,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_75_chain,
  NULL, &conv2d_76_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_74_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_68_output, &nl_73_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_74_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_74_layer, 74,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_74_chain,
  NULL, &conv2d_75_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -123, -121, -119, -116, -114, -112, -110, -107, -105, -103, -100, -98, -96, -93, -91, -89, -87, -84, -82, -80, -77, -75, -73, -70, -68, -66, -64, -61, -59, -57, -54, -52, -50, -47, -45, -43, -40, -38, -36, -34, -31, -29, -27, -24, -22, -20, -17, -15, -13, -11, -8, -6, -4, -1, 1, 3, 6, 8, 10, 12, 15, 17, 19, 22, 24, 26, 29, 31, 33, 36, 38, 40, 42, 45, 47, 49, 52, 54, 56, 59, 61, 63, 65, 68, 70, 72, 75, 77, 79, 82, 84, 86, 88, 91, 93, 95, 98, 100, 102, 105, 107, 109, 112, 114, 116, 118, 121, 123, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_73_nl_params, AI_ARRAY_FORMAT_S8,
    nl_73_nl_params_data, nl_73_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_73_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_72_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_73_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_73_layer, 73,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_73_chain,
  NULL, &eltwise_74_layer, AI_STATIC, 
  .nl_params = &nl_73_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_72_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_71_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_72_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_72_layer, 72,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_72_chain,
  NULL, &nl_73_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_71_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_71_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_71_weights, &conv2d_71_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_71_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_71_layer, 71,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_71_chain,
  NULL, &eltwise_72_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_70_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_70_weights, &conv2d_70_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_70_scratch0, &conv2d_70_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_70_layer, 70,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_70_chain,
  NULL, &conv2d_71_layer, AI_STATIC, 
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
  pool_69_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_69_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_69_layer, 69,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_69_chain,
  NULL, &conv2d_70_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_68_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_68_weights, &conv2d_68_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_68_scratch0, &conv2d_68_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_68_layer, 68,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_68_chain,
  NULL, &pool_69_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_67_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_67_weights, &conv2d_67_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_67_scratch0, &conv2d_67_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_67_layer, 67,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_67_chain,
  NULL, &conv2d_68_layer, AI_STATIC, 
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
  eltwise_66_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_56_output, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_66_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_66_layer, 66,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_66_chain,
  NULL, &conv2d_67_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_65_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_65_weights, &conv2d_65_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_65_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_65_chain,
  NULL, &eltwise_66_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_64_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_output, &nl_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_64_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_64_layer, 64,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_64_chain,
  NULL, &conv2d_65_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_63_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -119, -117, -116, -115, -113, -112, -111, -109, -108, -107, -105, -104, -103, -101, -100, -99, -97, -96, -95, -93, -92, -91, -89, -88, -87, -85, -84, -83, -81, -80, -79, -78, -76, -75, -74, -72, -71, -70, -68, -67, -66, -64, -63, -62, -60, -59, -58, -56, -55, -54, -52, -51, -50, -48, -47, -46, -44, -43, -42, -40, -39, -38, -36, -35, -34, -32, -31, -30, -28, -27, -26, -24, -23, -22, -20, -19, -18, -16, -15, -14, -12, -11, -10, -8, -7, -6, -4, -3, -2, 0, 1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 16, 17, 18, 20, 21, 22, 23, 25, 26, 27, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 55, 57, 58, 59, 61, 62, 63, 65, 66, 67, 69, 70, 71, 73, 74, 75, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89, 90, 91, 93, 94, 95, 97, 98, 99, 101, 102, 103, 105, 106, 107, 109, 110, 111, 113, 114, 115, 117, 118, 119, 120, 122, 123, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_63_nl_params, AI_ARRAY_FORMAT_S8,
    nl_63_nl_params_data, nl_63_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_63_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_63_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_63_layer, 63,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_63_chain,
  NULL, &eltwise_64_layer, AI_STATIC, 
  .nl_params = &nl_63_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_62_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_61_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_62_layer, 62,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_62_chain,
  NULL, &nl_63_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_61_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_61_weights, &conv2d_61_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_61_layer, 61,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_61_chain,
  NULL, &eltwise_62_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_60_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_60_weights, &conv2d_60_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_60_layer, 60,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_60_chain,
  NULL, &conv2d_61_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_59_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_59_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_59_layer, 59,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_58_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_58_weights, &conv2d_58_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_scratch0, &conv2d_58_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_58_layer, 58,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_58_chain,
  NULL, &pool_59_layer, AI_STATIC, 
  .groups = 72, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_57_weights, &conv2d_57_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_57_scratch0, &conv2d_57_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_layer, 57,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_57_chain,
  NULL, &conv2d_58_layer, AI_STATIC, 
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
  eltwise_56_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_46_output, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_56_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_56_layer, 56,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_56_chain,
  NULL, &conv2d_57_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
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
  NULL, &eltwise_56_layer, AI_STATIC, 
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -127, -126, -125, -124, -123, -122, -121, -120, -119, -118, -117, -116, -115, -114, -113, -112, -111, -110, -109, -108, -107, -106, -105, -104, -103, -102, -101, -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_51_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4),
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_50_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_50_chain,
  NULL, &conv2d_51_layer, AI_STATIC, 
  .groups = 1, 
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
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -121, -119, -118, -116, -114, -113, -111, -109, -107, -106, -104, -102, -101, -99, -97, -95, -94, -92, -90, -89, -87, -85, -83, -82, -80, -78, -76, -75, -73, -71, -70, -68, -66, -64, -63, -61, -59, -58, -56, -54, -52, -51, -49, -47, -46, -44, -42, -40, -39, -37, -35, -34, -32, -30, -28, -27, -25, -23, -22, -20, -18, -16, -15, -13, -11, -10, -8, -6, -4, -3, -1, 1, 3, 4, 6, 8, 9, 11, 13, 15, 16, 18, 20, 21, 23, 25, 27, 28, 30, 32, 33, 35, 37, 39, 40, 42, 44, 45, 47, 49, 51, 52, 54, 56, 57, 59, 61, 63, 64, 66, 68, 69, 71, 73, 75, 76, 78, 80, 81, 83, 85, 87, 88, 90, 92, 94, 95, 97, 99, 100, 102, 104, 106, 107, 109, 111, 112, 114, 116, 118, 119, 121, 123, 124, 126 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_41_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3),
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
  .groups = 120, 
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -116, -113, -110, -107, -104, -101, -99, -96, -93, -90, -87, -84, -81, -78, -75, -72, -69, -66, -63, -60, -57, -54, -51, -48, -45, -43, -40, -37, -34, -31, -28, -25, -22, -19, -16, -13, -10, -7, -4, -1, 2, 5, 8, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61, 64, 66, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99, 102, 105, 108, 111, 114, 117, 120, 122, 125, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_31_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2),
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
  .groups = 120, 
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


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -122, -121, -119, -118, -117, -115, -114, -112, -111, -109, -108, -107, -105, -104, -102, -101, -99, -98, -97, -95, -94, -92, -91, -89, -88, -87, -85, -84, -82, -81, -79, -78, -76, -75, -74, -72, -71, -69, -68, -66, -65, -64, -62, -61, -59, -58, -56, -55, -54, -52, -51, -49, -48, -46, -45, -44, -42, -41, -39, -38, -36, -35, -34, -32, -31, -29, -28, -26, -25, -24, -22, -21, -19, -18, -16, -15, -14, -12, -11, -9, -8, -6, -5, -4, -2, -1, 1, 2, 4, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 19, 21, 22, 24, 25, 27, 28, 29, 31, 32, 34, 35, 37, 38, 39, 41, 42, 44, 45, 47, 48, 49, 51, 52, 54, 55, 57, 58, 59, 61, 62, 64, 65, 67, 68, 69, 71, 72, 74, 75, 77, 78, 79, 81, 82, 84, 85, 87, 88, 89, 91, 92, 94, 95, 97, 98, 99, 101, 102, 104, 105, 107, 108, 110, 111, 112, 114, 115, 117, 118, 120, 121, 122, 124, 125, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_22_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1),
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_scratch0, &conv2d_15_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_15_chain,
  NULL, &conv2d_16_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_15_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_15_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_15_pad_before_value_data, conv2d_15_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_pad_before_layer, 15,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_15_pad_before_chain,
  NULL, &conv2d_15_layer, AI_STATIC, 
  .value = &conv2d_15_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_14_weights, &conv2d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_14_scratch0, &conv2d_14_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_14_chain,
  NULL, &conv2d_15_pad_before_layer, AI_STATIC, 
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
  NULL, &conv2d_14_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, &conv2d_12_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_12_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .groups = 40, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_12_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_12_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_12_pad_before_value_data, conv2d_12_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_pad_before_layer, 12,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_12_pad_before_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .value = &conv2d_12_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, &conv2d_11_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_11_chain,
  NULL, &conv2d_12_pad_before_layer, AI_STATIC, 
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
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_10_chain,
  NULL, &conv2d_11_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_output, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_9_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_9_layer, 9,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_9_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_6_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_7_layer, 7,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_7_chain,
  NULL, &eltwise_9_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 6,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_6_chain,
  NULL, &eltwise_7_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_5_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_4_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_4_layer, 4,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_4_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(56, 56), 
  .pool_stride = AI_SHAPE_2D_INIT(56, 56), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_scratch0, &conv2d_3_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_3_chain,
  NULL, &pool_4_layer, AI_STATIC, 
  .groups = 8, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_3_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_3_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_3_pad_before_value_data, conv2d_3_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_pad_before_layer, 3,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_3_pad_before_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .value = &conv2d_3_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, &conv2d_2_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_2_chain,
  NULL, &conv2d_3_pad_before_layer, AI_STATIC, 
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
  NULL, &conv2d_2_layer, AI_STATIC, 
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 651296, 1, 1),
    651296, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
    156600, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_102_output),
  &conversion_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 651296, 1, 1),
      651296, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
      156600, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_102_output),
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
    
    conv2d_2_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 104864);
    conv2d_2_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 104864);
    
    conv2d_2_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 3616);
    conv2d_2_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 3616);
    
    conv2d_2_output_array.data = AI_PTR(g_network_activations_map[0] + 3616);
    conv2d_2_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3616);
    
    conv2d_3_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_3_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_3_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 103968);
    conv2d_3_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 103968);
    
    conv2d_3_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 104268);
    conv2d_3_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 104268);
    
    conv2d_3_output_array.data = AI_PTR(g_network_activations_map[0] + 129356);
    conv2d_3_output_array.data_start = AI_PTR(g_network_activations_map[0] + 129356);
    
    pool_4_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_4_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 8);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 8);
    
    conv2d_5_output_array.data = AI_PTR(g_network_activations_map[0] + 60);
    conv2d_5_output_array.data_start = AI_PTR(g_network_activations_map[0] + 60);
    
    conv2d_6_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_6_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_6_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_6_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_7_output_array.data = AI_PTR(g_network_activations_map[0] + 8);
    eltwise_7_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8);
    
    eltwise_9_output_array.data = AI_PTR(g_network_activations_map[0] + 16);
    eltwise_9_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16);
    
    conv2d_10_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 25104);
    conv2d_10_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 25104);
    
    conv2d_10_output_array.data = AI_PTR(g_network_activations_map[0] + 131512);
    conv2d_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 131512);
    
    conv2d_11_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_11_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 28920);
    conv2d_11_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 28920);
    
    conv2d_11_output_array.data = AI_PTR(g_network_activations_map[0] + 28920);
    conv2d_11_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28920);
    
    conv2d_12_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 19800);
    conv2d_12_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19800);
    
    conv2d_12_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_12_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_12_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 18680);
    conv2d_12_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 18680);
    
    conv2d_12_output_array.data = AI_PTR(g_network_activations_map[0] + 18680);
    conv2d_12_output_array.data_start = AI_PTR(g_network_activations_map[0] + 18680);
    
    conv2d_13_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_13_output_array.data = AI_PTR(g_network_activations_map[0] + 320);
    conv2d_13_output_array.data_start = AI_PTR(g_network_activations_map[0] + 320);
    
    conv2d_14_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_14_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_14_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 13408);
    conv2d_14_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 13408);
    
    conv2d_14_output_array.data = AI_PTR(g_network_activations_map[0] + 51040);
    conv2d_14_output_array.data_start = AI_PTR(g_network_activations_map[0] + 51040);
    
    conv2d_15_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 88672);
    conv2d_15_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 88672);
    
    conv2d_15_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_15_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_15_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14644);
    conv2d_15_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14644);
    
    conv2d_15_output_array.data = AI_PTR(g_network_activations_map[0] + 87328);
    conv2d_15_output_array.data_start = AI_PTR(g_network_activations_map[0] + 87328);
    
    conv2d_16_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_16_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_16_output_array.data = AI_PTR(g_network_activations_map[0] + 13216);
    conv2d_16_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13216);
    
    eltwise_17_output_array.data = AI_PTR(g_network_activations_map[0] + 25760);
    eltwise_17_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25760);
    
    conv2d_18_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_18_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_18_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 38304);
    conv2d_18_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 38304);
    
    conv2d_18_output_array.data = AI_PTR(g_network_activations_map[0] + 75936);
    conv2d_18_output_array.data_start = AI_PTR(g_network_activations_map[0] + 75936);
    
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
    
    conv2d_26_output_array.data = AI_PTR(g_network_activations_map[0] + 9888);
    conv2d_26_output_array.data_start = AI_PTR(g_network_activations_map[0] + 9888);
    
    conv2d_27_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_27_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_27_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    conv2d_27_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_27_output_array.data = AI_PTR(g_network_activations_map[0] + 38112);
    conv2d_27_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38112);
    
    conv2d_28_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    conv2d_28_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_28_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 61632);
    conv2d_28_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 61632);
    
    conv2d_28_output_array.data = AI_PTR(g_network_activations_map[0] + 85152);
    conv2d_28_output_array.data_start = AI_PTR(g_network_activations_map[0] + 85152);
    
    pool_29_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_29_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_30_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_30_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_30_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_30_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_30_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_30_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_31_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_31_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
    conv2d_31_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_31_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_32_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_32_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_33_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_33_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_34_output_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    eltwise_34_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_35_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_35_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_35_output_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_35_output_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    eltwise_36_output_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    eltwise_36_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_37_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_37_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_37_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    conv2d_37_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_37_output_array.data = AI_PTR(g_network_activations_map[0] + 42816);
    conv2d_37_output_array.data_start = AI_PTR(g_network_activations_map[0] + 42816);
    
    conv2d_38_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_38_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_38_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    conv2d_38_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_38_output_array.data = AI_PTR(g_network_activations_map[0] + 66336);
    conv2d_38_output_array.data_start = AI_PTR(g_network_activations_map[0] + 66336);
    
    pool_39_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_39_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_40_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_40_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_40_output_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_41_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_41_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_42_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_42_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_43_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_43_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_44_output_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    eltwise_44_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_45_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_45_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_45_output_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_45_output_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    eltwise_46_output_array.data = AI_PTR(g_network_activations_map[0] + 5424);
    eltwise_46_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5424);
    
    conv2d_47_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_47_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_47_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    conv2d_47_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_47_output_array.data = AI_PTR(g_network_activations_map[0] + 22672);
    conv2d_47_output_array.data_start = AI_PTR(g_network_activations_map[0] + 22672);
    
    conv2d_48_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    conv2d_48_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_48_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 35216);
    conv2d_48_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 35216);
    
    conv2d_48_output_array.data = AI_PTR(g_network_activations_map[0] + 47760);
    conv2d_48_output_array.data_start = AI_PTR(g_network_activations_map[0] + 47760);
    
    pool_49_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_49_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_50_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_50_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_50_output_array.data = AI_PTR(g_network_activations_map[0] + 480);
    conv2d_50_output_array.data_start = AI_PTR(g_network_activations_map[0] + 480);
    
    conv2d_51_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_51_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    conv2d_51_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_51_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_52_output_array.data = AI_PTR(g_network_activations_map[0] + 64);
    eltwise_52_output_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    nl_53_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_53_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_54_output_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    eltwise_54_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_55_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_55_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_55_output_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_55_output_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    eltwise_56_output_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    eltwise_56_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_57_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_57_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_57_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    conv2d_57_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_57_output_array.data = AI_PTR(g_network_activations_map[0] + 28944);
    conv2d_57_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28944);
    
    conv2d_58_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_58_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_58_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    conv2d_58_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_58_output_array.data = AI_PTR(g_network_activations_map[0] + 43056);
    conv2d_58_output_array.data_start = AI_PTR(g_network_activations_map[0] + 43056);
    
    pool_59_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_59_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_60_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 72);
    conv2d_60_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 72);
    
    conv2d_60_output_array.data = AI_PTR(g_network_activations_map[0] + 540);
    conv2d_60_output_array.data_start = AI_PTR(g_network_activations_map[0] + 540);
    
    conv2d_61_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 560);
    conv2d_61_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 560);
    
    conv2d_61_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_61_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_62_output_array.data = AI_PTR(g_network_activations_map[0] + 72);
    eltwise_62_output_array.data_start = AI_PTR(g_network_activations_map[0] + 72);
    
    nl_63_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_63_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_64_output_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    eltwise_64_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_65_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_65_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_65_output_array.data = AI_PTR(g_network_activations_map[0] + 528);
    conv2d_65_output_array.data_start = AI_PTR(g_network_activations_map[0] + 528);
    
    eltwise_66_output_array.data = AI_PTR(g_network_activations_map[0] + 5232);
    eltwise_66_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5232);
    
    conv2d_67_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_67_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_67_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 9936);
    conv2d_67_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 9936);
    
    conv2d_67_output_array.data = AI_PTR(g_network_activations_map[0] + 38160);
    conv2d_67_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38160);
    
    conv2d_68_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_68_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_68_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 12244);
    conv2d_68_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 12244);
    
    conv2d_68_output_array.data = AI_PTR(g_network_activations_map[0] + 19300);
    conv2d_68_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19300);
    
    pool_69_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_69_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_70_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 144);
    conv2d_70_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_70_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 1080);
    conv2d_70_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 1080);
    
    conv2d_70_output_array.data = AI_PTR(g_network_activations_map[0] + 1116);
    conv2d_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1116);
    
    conv2d_71_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1152);
    conv2d_71_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1152);
    
    conv2d_71_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_71_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_72_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    eltwise_72_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    nl_73_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_73_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_74_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    eltwise_74_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_75_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 7200);
    conv2d_75_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 7200);
    
    conv2d_75_output_array.data = AI_PTR(g_network_activations_map[0] + 8256);
    conv2d_75_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8256);
    
    conv2d_76_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_76_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_76_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    conv2d_76_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_76_output_array.data = AI_PTR(g_network_activations_map[0] + 24720);
    conv2d_76_output_array.data_start = AI_PTR(g_network_activations_map[0] + 24720);
    
    conv2d_77_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 38832);
    conv2d_77_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 38832);
    
    conv2d_77_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    conv2d_77_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_77_output_array.data = AI_PTR(g_network_activations_map[0] + 63316);
    conv2d_77_output_array.data_start = AI_PTR(g_network_activations_map[0] + 63316);
    
    pool_78_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_78_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_79_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_79_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_79_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 2160);
    conv2d_79_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 2160);
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 2232);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2232);
    
    conv2d_80_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 2304);
    conv2d_80_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 2304);
    
    conv2d_80_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_80_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_81_output_array.data = AI_PTR(g_network_activations_map[0] + 288);
    eltwise_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    nl_82_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_82_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_83_output_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    eltwise_83_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_84_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_84_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_84_output_array.data = AI_PTR(g_network_activations_map[0] + 1632);
    conv2d_84_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1632);
    
    eltwise_85_output_array.data = AI_PTR(g_network_activations_map[0] + 3984);
    eltwise_85_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3984);
    
    conv2d_86_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_86_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_86_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_86_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_86_output_array.data = AI_PTR(g_network_activations_map[0] + 20448);
    conv2d_86_output_array.data_start = AI_PTR(g_network_activations_map[0] + 20448);
    
    conv2d_87_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 34560);
    conv2d_87_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 34560);
    
    conv2d_87_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_87_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_87_output_array.data = AI_PTR(g_network_activations_map[0] + 59044);
    conv2d_87_output_array.data_start = AI_PTR(g_network_activations_map[0] + 59044);
    
    pool_88_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_88_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_89_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_89_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_89_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 2160);
    conv2d_89_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 2160);
    
    conv2d_89_output_array.data = AI_PTR(g_network_activations_map[0] + 2232);
    conv2d_89_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2232);
    
    conv2d_90_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_90_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_90_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_90_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_91_output_array.data = AI_PTR(g_network_activations_map[0] + 288);
    eltwise_91_output_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    nl_92_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_92_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_93_output_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    eltwise_93_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_94_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_94_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_94_output_array.data = AI_PTR(g_network_activations_map[0] + 1632);
    conv2d_94_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1632);
    
    eltwise_95_output_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    eltwise_95_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_96_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_96_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_96_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8688);
    conv2d_96_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8688);
    
    conv2d_96_output_array.data = AI_PTR(g_network_activations_map[0] + 22800);
    conv2d_96_output_array.data_start = AI_PTR(g_network_activations_map[0] + 22800);
    
    pool_97_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_97_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_98_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_98_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_98_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14240);
    conv2d_98_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14240);
    
    conv2d_98_output_array.data = AI_PTR(g_network_activations_map[0] + 15520);
    conv2d_98_output_array.data_start = AI_PTR(g_network_activations_map[0] + 15520);
    
    conv2d_99_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_99_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 5232);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5232);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 44);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44);
    
    conversion_102_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conversion_102_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
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
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.data = AI_PTR(g_network_weights_map[0] + 0);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.data_start = AI_PTR(g_network_weights_map[0] + 0);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.data = AI_PTR(g_network_weights_map[0] + 4);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.data_start = AI_PTR(g_network_weights_map[0] + 4);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.data = AI_PTR(g_network_weights_map[0] + 8);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.data_start = AI_PTR(g_network_weights_map[0] + 8);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.data = AI_PTR(g_network_weights_map[0] + 12);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.data_start = AI_PTR(g_network_weights_map[0] + 12);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.data = AI_PTR(g_network_weights_map[0] + 16);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.data_start = AI_PTR(g_network_weights_map[0] + 16);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.data = AI_PTR(g_network_weights_map[0] + 20);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.data_start = AI_PTR(g_network_weights_map[0] + 20);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.data = AI_PTR(g_network_weights_map[0] + 24);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.data_start = AI_PTR(g_network_weights_map[0] + 24);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.data = AI_PTR(g_network_weights_map[0] + 28);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.data_start = AI_PTR(g_network_weights_map[0] + 28);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.data = AI_PTR(g_network_weights_map[0] + 32);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.data_start = AI_PTR(g_network_weights_map[0] + 32);
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_network_weights_map[0] + 36);
    conv2d_1_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 36);
    
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_network_weights_map[0] + 252);
    conv2d_1_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 252);
    
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(g_network_weights_map[0] + 284);
    conv2d_2_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 284);
    
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(g_network_weights_map[0] + 348);
    conv2d_2_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 348);
    
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(g_network_weights_map[0] + 380);
    conv2d_3_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 380);
    
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(g_network_weights_map[0] + 452);
    conv2d_3_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 452);
    
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(g_network_weights_map[0] + 484);
    conv2d_5_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 484);
    
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(g_network_weights_map[0] + 500);
    conv2d_5_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 500);
    
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(g_network_weights_map[0] + 508);
    conv2d_6_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 508);
    
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(g_network_weights_map[0] + 524);
    conv2d_6_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 524);
    
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(g_network_weights_map[0] + 556);
    conv2d_10_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 556);
    
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(g_network_weights_map[0] + 620);
    conv2d_10_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 620);
    
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(g_network_weights_map[0] + 652);
    conv2d_11_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 652);
    
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(g_network_weights_map[0] + 972);
    conv2d_11_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 972);
    
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(g_network_weights_map[0] + 1132);
    conv2d_12_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1132);
    
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(g_network_weights_map[0] + 1492);
    conv2d_12_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1492);
    
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(g_network_weights_map[0] + 1652);
    conv2d_13_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1652);
    
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(g_network_weights_map[0] + 2292);
    conv2d_13_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 2292);
    
    conv2d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_weights_array.data = AI_PTR(g_network_weights_map[0] + 2356);
    conv2d_14_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2356);
    
    conv2d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_bias_array.data = AI_PTR(g_network_weights_map[0] + 3124);
    conv2d_14_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3124);
    
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(g_network_weights_map[0] + 3316);
    conv2d_15_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3316);
    
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(g_network_weights_map[0] + 3748);
    conv2d_15_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3748);
    
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(g_network_weights_map[0] + 3940);
    conv2d_16_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3940);
    
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(g_network_weights_map[0] + 4708);
    conv2d_16_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 4708);
    
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(g_network_weights_map[0] + 4772);
    conv2d_18_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 4772);
    
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(g_network_weights_map[0] + 5540);
    conv2d_18_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5540);
    
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(g_network_weights_map[0] + 5732);
    conv2d_19_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5732);
    
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(g_network_weights_map[0] + 6932);
    conv2d_19_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 6932);
    
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(g_network_weights_map[0] + 7124);
    conv2d_21_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7124);
    
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(g_network_weights_map[0] + 7700);
    conv2d_21_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 7700);
    
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(g_network_weights_map[0] + 7748);
    conv2d_22_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7748);
    
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(g_network_weights_map[0] + 8324);
    conv2d_22_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 8324);
    
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(g_network_weights_map[0] + 8516);
    conv2d_26_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 8516);
    
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(g_network_weights_map[0] + 9668);
    conv2d_26_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9668);
    
    conv2d_27_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_weights_array.data = AI_PTR(g_network_weights_map[0] + 9764);
    conv2d_27_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9764);
    
    conv2d_27_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_bias_array.data = AI_PTR(g_network_weights_map[0] + 12644);
    conv2d_27_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 12644);
    
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(g_network_weights_map[0] + 13124);
    conv2d_28_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 13124);
    
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(g_network_weights_map[0] + 16124);
    conv2d_28_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 16124);
    
    conv2d_30_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_weights_array.data = AI_PTR(g_network_weights_map[0] + 16604);
    conv2d_30_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 16604);
    
    conv2d_30_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_bias_array.data = AI_PTR(g_network_weights_map[0] + 20204);
    conv2d_30_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 20204);
    
    conv2d_31_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_weights_array.data = AI_PTR(g_network_weights_map[0] + 20324);
    conv2d_31_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 20324);
    
    conv2d_31_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_bias_array.data = AI_PTR(g_network_weights_map[0] + 23924);
    conv2d_31_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 23924);
    
    conv2d_35_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_weights_array.data = AI_PTR(g_network_weights_map[0] + 24404);
    conv2d_35_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 24404);
    
    conv2d_35_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_bias_array.data = AI_PTR(g_network_weights_map[0] + 27284);
    conv2d_35_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 27284);
    
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(g_network_weights_map[0] + 27380);
    conv2d_37_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 27380);
    
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(g_network_weights_map[0] + 30260);
    conv2d_37_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 30260);
    
    conv2d_38_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_weights_array.data = AI_PTR(g_network_weights_map[0] + 30740);
    conv2d_38_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 30740);
    
    conv2d_38_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_bias_array.data = AI_PTR(g_network_weights_map[0] + 33740);
    conv2d_38_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 33740);
    
    conv2d_40_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_weights_array.data = AI_PTR(g_network_weights_map[0] + 34220);
    conv2d_40_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 34220);
    
    conv2d_40_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_bias_array.data = AI_PTR(g_network_weights_map[0] + 37820);
    conv2d_40_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 37820);
    
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(g_network_weights_map[0] + 37940);
    conv2d_41_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 37940);
    
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(g_network_weights_map[0] + 41540);
    conv2d_41_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 41540);
    
    conv2d_45_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_weights_array.data = AI_PTR(g_network_weights_map[0] + 42020);
    conv2d_45_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 42020);
    
    conv2d_45_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_bias_array.data = AI_PTR(g_network_weights_map[0] + 44900);
    conv2d_45_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 44900);
    
    conv2d_47_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_weights_array.data = AI_PTR(g_network_weights_map[0] + 44996);
    conv2d_47_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 44996);
    
    conv2d_47_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_bias_array.data = AI_PTR(g_network_weights_map[0] + 46532);
    conv2d_47_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 46532);
    
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(g_network_weights_map[0] + 46788);
    conv2d_48_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 46788);
    
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(g_network_weights_map[0] + 48388);
    conv2d_48_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 48388);
    
    conv2d_50_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_weights_array.data = AI_PTR(g_network_weights_map[0] + 48644);
    conv2d_50_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 48644);
    
    conv2d_50_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_bias_array.data = AI_PTR(g_network_weights_map[0] + 49668);
    conv2d_50_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 49668);
    
    conv2d_51_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_weights_array.data = AI_PTR(g_network_weights_map[0] + 49732);
    conv2d_51_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 49732);
    
    conv2d_51_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_bias_array.data = AI_PTR(g_network_weights_map[0] + 50756);
    conv2d_51_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 50756);
    
    conv2d_55_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_weights_array.data = AI_PTR(g_network_weights_map[0] + 51012);
    conv2d_55_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 51012);
    
    conv2d_55_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_bias_array.data = AI_PTR(g_network_weights_map[0] + 52548);
    conv2d_55_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 52548);
    
    conv2d_57_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_weights_array.data = AI_PTR(g_network_weights_map[0] + 52644);
    conv2d_57_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 52644);
    
    conv2d_57_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_bias_array.data = AI_PTR(g_network_weights_map[0] + 54372);
    conv2d_57_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 54372);
    
    conv2d_58_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_weights_array.data = AI_PTR(g_network_weights_map[0] + 54660);
    conv2d_58_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 54660);
    
    conv2d_58_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_bias_array.data = AI_PTR(g_network_weights_map[0] + 56460);
    conv2d_58_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 56460);
    
    conv2d_60_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_weights_array.data = AI_PTR(g_network_weights_map[0] + 56748);
    conv2d_60_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 56748);
    
    conv2d_60_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_bias_array.data = AI_PTR(g_network_weights_map[0] + 58044);
    conv2d_60_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 58044);
    
    conv2d_61_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_weights_array.data = AI_PTR(g_network_weights_map[0] + 58116);
    conv2d_61_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 58116);
    
    conv2d_61_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_bias_array.data = AI_PTR(g_network_weights_map[0] + 59412);
    conv2d_61_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 59412);
    
    conv2d_65_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_weights_array.data = AI_PTR(g_network_weights_map[0] + 59700);
    conv2d_65_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 59700);
    
    conv2d_65_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_bias_array.data = AI_PTR(g_network_weights_map[0] + 61428);
    conv2d_65_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 61428);
    
    conv2d_67_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_weights_array.data = AI_PTR(g_network_weights_map[0] + 61524);
    conv2d_67_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 61524);
    
    conv2d_67_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_bias_array.data = AI_PTR(g_network_weights_map[0] + 64980);
    conv2d_67_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 64980);
    
    conv2d_68_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_68_weights_array.data = AI_PTR(g_network_weights_map[0] + 65556);
    conv2d_68_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 65556);
    
    conv2d_68_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_68_bias_array.data = AI_PTR(g_network_weights_map[0] + 69156);
    conv2d_68_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 69156);
    
    conv2d_70_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_weights_array.data = AI_PTR(g_network_weights_map[0] + 69732);
    conv2d_70_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 69732);
    
    conv2d_70_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_bias_array.data = AI_PTR(g_network_weights_map[0] + 74916);
    conv2d_70_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 74916);
    
    conv2d_71_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_71_weights_array.data = AI_PTR(g_network_weights_map[0] + 75060);
    conv2d_71_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 75060);
    
    conv2d_71_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_71_bias_array.data = AI_PTR(g_network_weights_map[0] + 80244);
    conv2d_71_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 80244);
    
    conv2d_75_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_75_weights_array.data = AI_PTR(g_network_weights_map[0] + 80820);
    conv2d_75_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 80820);
    
    conv2d_75_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_75_bias_array.data = AI_PTR(g_network_weights_map[0] + 87732);
    conv2d_75_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 87732);
    
    conv2d_76_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_weights_array.data = AI_PTR(g_network_weights_map[0] + 87924);
    conv2d_76_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 87924);
    
    conv2d_76_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_bias_array.data = AI_PTR(g_network_weights_map[0] + 101748);
    conv2d_76_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 101748);
    
    conv2d_77_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_77_weights_array.data = AI_PTR(g_network_weights_map[0] + 102900);
    conv2d_77_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 102900);
    
    conv2d_77_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_77_bias_array.data = AI_PTR(g_network_weights_map[0] + 110100);
    conv2d_77_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 110100);
    
    conv2d_79_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_weights_array.data = AI_PTR(g_network_weights_map[0] + 111252);
    conv2d_79_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 111252);
    
    conv2d_79_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 131988);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 131988);
    
    conv2d_80_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_80_weights_array.data = AI_PTR(g_network_weights_map[0] + 132276);
    conv2d_80_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 132276);
    
    conv2d_80_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_80_bias_array.data = AI_PTR(g_network_weights_map[0] + 153012);
    conv2d_80_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 153012);
    
    conv2d_84_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_84_weights_array.data = AI_PTR(g_network_weights_map[0] + 154164);
    conv2d_84_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 154164);
    
    conv2d_84_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_84_bias_array.data = AI_PTR(g_network_weights_map[0] + 167988);
    conv2d_84_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 167988);
    
    conv2d_86_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_86_weights_array.data = AI_PTR(g_network_weights_map[0] + 168180);
    conv2d_86_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 168180);
    
    conv2d_86_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_86_bias_array.data = AI_PTR(g_network_weights_map[0] + 182004);
    conv2d_86_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 182004);
    
    conv2d_87_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_87_weights_array.data = AI_PTR(g_network_weights_map[0] + 183156);
    conv2d_87_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 183156);
    
    conv2d_87_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_87_bias_array.data = AI_PTR(g_network_weights_map[0] + 190356);
    conv2d_87_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 190356);
    
    conv2d_89_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_89_weights_array.data = AI_PTR(g_network_weights_map[0] + 191508);
    conv2d_89_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 191508);
    
    conv2d_89_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_89_bias_array.data = AI_PTR(g_network_weights_map[0] + 212244);
    conv2d_89_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 212244);
    
    conv2d_90_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_90_weights_array.data = AI_PTR(g_network_weights_map[0] + 212532);
    conv2d_90_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 212532);
    
    conv2d_90_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_90_bias_array.data = AI_PTR(g_network_weights_map[0] + 233268);
    conv2d_90_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 233268);
    
    conv2d_94_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_94_weights_array.data = AI_PTR(g_network_weights_map[0] + 234420);
    conv2d_94_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 234420);
    
    conv2d_94_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_94_bias_array.data = AI_PTR(g_network_weights_map[0] + 248244);
    conv2d_94_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 248244);
    
    conv2d_96_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_96_weights_array.data = AI_PTR(g_network_weights_map[0] + 248436);
    conv2d_96_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 248436);
    
    conv2d_96_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_96_bias_array.data = AI_PTR(g_network_weights_map[0] + 262260);
    conv2d_96_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 262260);
    
    conv2d_98_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_98_weights_array.data = AI_PTR(g_network_weights_map[0] + 263412);
    conv2d_98_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 263412);
    
    conv2d_98_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_98_bias_array.data = AI_PTR(g_network_weights_map[0] + 632052);
    conv2d_98_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 632052);
    
    conv2d_99_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_weights_array.data = AI_PTR(g_network_weights_map[0] + 637172);
    conv2d_99_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 637172);
    
    conv2d_99_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 651252);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 651252);
    
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
      
      .n_macc            = 20139830,
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
      
      .n_macc            = 20139830,
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

