/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Fri Jan 10 22:45:44 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "120fc380764e878feb24d5d4677732ed"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Fri Jan 10 22:45:44 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1584, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13952, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5160, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  pool_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 134560, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 43200, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  pool_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  pool_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  pool_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  pool_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  nl_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  pool_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  nl_82_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_83_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_85_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  pool_88_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_91_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  nl_92_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_93_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_95_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  pool_97_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 4, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 360, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1800, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 18, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 36, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6912, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 368640, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1280, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5120, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 52, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 88, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#256 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#257 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#258 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1481, AI_STATIC)
/* Array#259 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#260 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#261 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#262 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#263 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#264 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#265 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#266 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#267 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#268 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#269 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#270 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#271 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#272 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#273 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#274 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#275 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#276 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#277 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#278 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#279 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#280 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#281 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#282 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#283 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#284 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#285 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#286 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#287 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#288 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 736, AI_STATIC)
/* Array#289 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#290 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#291 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#292 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#293 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#294 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 496, AI_STATIC)
/* Array#295 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#296 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#297 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6121, AI_STATIC)
/* Array#298 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#299 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 468, AI_STATIC)
/* Array#300 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 792, AI_STATIC)
/* Array#301 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#302 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#303 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#304 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12241, AI_STATIC)
/* Array#305 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#306 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 936, AI_STATIC)
/* Array#307 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019926796667277813f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022304945159703493f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022304945159703493f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012360572814941406f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08461859822273254f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07514509558677673f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11293543130159378f),
    AI_PACK_INTQ_ZP(12)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13993707299232483f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.017890358343720436f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004612850025296211f),
    AI_PACK_INTQ_ZP(-90)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004612850025296211f),
    AI_PACK_INTQ_ZP(-90)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02278098277747631f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0856543779373169f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01736718788743019f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005370347294956446f),
    AI_PACK_INTQ_ZP(-59)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005370347294956446f),
    AI_PACK_INTQ_ZP(-59)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08084597438573837f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12080962210893631f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008924556896090508f),
    AI_PACK_INTQ_ZP(15)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008924556896090508f),
    AI_PACK_INTQ_ZP(15)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08810809254646301f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.16863590478897095f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.021619290113449097f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005147817078977823f),
    AI_PACK_INTQ_ZP(-67)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005147817078977823f),
    AI_PACK_INTQ_ZP(-67)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09034650027751923f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.19274403154850006f),
    AI_PACK_INTQ_ZP(15)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012556828558444977f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003752777585759759f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003752777585759759f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.019911637529730797f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07363852858543396f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.21195745468139648f),
    AI_PACK_INTQ_ZP(20)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008093192242085934f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008093192242085934f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09072156995534897f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0101222675293684f),
    AI_PACK_INTQ_ZP(28)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0101222675293684f),
    AI_PACK_INTQ_ZP(28)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_82_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_83_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07662401348352432f),
    AI_PACK_INTQ_ZP(11)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1475021094083786f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_88_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012954771518707275f),
    AI_PACK_INTQ_ZP(50)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012954771518707275f),
    AI_PACK_INTQ_ZP(50)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_92_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_93_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06859485059976578f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.2070167064666748f),
    AI_PACK_INTQ_ZP(1)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_97_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01692071370780468f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.22285012900829315f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_101_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012954771518707275f),
    AI_PACK_INTQ_ZP(50)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0101222675293684f),
    AI_PACK_INTQ_ZP(28)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008093192242085934f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003752777585759759f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005147817078977823f),
    AI_PACK_INTQ_ZP(-67)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008924556896090508f),
    AI_PACK_INTQ_ZP(15)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005370347294956446f),
    AI_PACK_INTQ_ZP(-59)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004612850025296211f),
    AI_PACK_INTQ_ZP(-90)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022304945159703493f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010517403483390808f, 0.020000023767352104f, 0.010946589522063732f, 0.005355414003133774f, 0.007938763126730919f, 0.011356974020600319f, 0.005072899162769318f, 0.006873460486531258f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006108141969889402f, 0.003716258564963937f, 0.005611236672848463f, 0.010508463717997074f, 0.006342882756143808f, 0.008415436372160912f, 0.0065154703333973885f, 0.008952206932008266f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01795564964413643f, 0.009388764388859272f, 0.004363612737506628f, 0.005974108818918467f, 0.0047374083660542965f, 0.013638315722346306f, 0.006389117334038019f, 0.011979427188634872f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004563123919069767f, 0.0065972087904810905f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010657522361725569f, 0.0010936501203104854f, 0.000775149033870548f, 0.0006164458463899791f, 0.0006818243418820202f, 0.0007750869262963533f, 0.0010042606154456735f, 0.0005106147727929056f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016020039096474648f, 0.01082043256610632f, 0.012498048134148121f, 0.016610246151685715f, 0.008960094302892685f, 0.016151877120137215f, 0.017813000828027725f, 0.014834553934633732f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004878792446106672f, 0.0045461044646799564f, 0.004410741850733757f, 0.007679604459553957f, 0.0021385985892266035f, 0.00559627590700984f, 0.011980264447629452f, 0.005117073655128479f, 0.004522815812379122f, 0.004417668096721172f, 0.003006467828527093f, 0.004409929737448692f, 0.003108929144218564f, 0.006549306679517031f, 0.004644839093089104f, 0.008312081918120384f, 0.0038495126646012068f, 0.006081658881157637f, 0.0047687385231256485f, 0.0033656961750239134f, 0.008173836395144463f, 0.004763973411172628f, 0.004493226762861013f, 0.004104215186089277f, 0.004660292994230986f, 0.004613679833710194f, 0.006839368492364883f, 0.004914612974971533f, 0.006776722148060799f, 0.004342643544077873f, 0.0037479011807590723f, 0.005481997039169073f, 0.004416625946760178f, 0.0025834552943706512f, 0.005521402694284916f, 0.003160485764965415f, 0.0026005448307842016f, 0.008396677672863007f, 0.002976413117721677f, 0.004764172248542309f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008008363656699657f, 0.01140859629958868f, 0.003577811410650611f, 0.0064723608084023f, 0.008963375352323055f, 0.007769871968775988f, 0.005950958468019962f, 0.007916795089840889f, 0.006808980833739042f, 0.010062063112854958f, 0.003106042044237256f, 0.02132554166018963f, 0.002915521152317524f, 0.004092922434210777f, 0.01394573226571083f, 0.005418653134256601f, 0.02187175489962101f, 0.006287280935794115f, 0.008050667122006416f, 0.0073300497606396675f, 0.004506366793066263f, 0.0074927774257957935f, 0.008216372691094875f, 0.01878220960497856f, 0.0039414167404174805f, 0.005534007214009762f, 0.004116884432733059f, 0.00577522162348032f, 0.0055934046395123005f, 0.009239963255822659f, 0.0052152653224766254f, 0.004813456442207098f, 0.004180901683866978f, 0.012075797654688358f, 0.016052016988396645f, 0.018339933827519417f, 0.00836854800581932f, 0.004518324974924326f, 0.016311395913362503f, 0.010654428973793983f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0033301133662462234f, 0.0028876846190541983f, 0.003837849711999297f, 0.002542818197980523f, 0.002839528489857912f, 0.004331310745328665f, 0.003668534103780985f, 0.004540135618299246f, 0.0027760351076722145f, 0.002614071825519204f, 0.003481182036921382f, 0.004490132909268141f, 0.0031596552580595016f, 0.0029560721013695f, 0.0037420906592160463f, 0.002905201865360141f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004751077853143215f, 0.004178555682301521f, 0.0027940417639911175f, 0.0021451422944664955f, 0.003720314707607031f, 0.005305234808474779f, 0.003311511594802141f, 0.0025565647520124912f, 0.0023783971555531025f, 0.0038803170900791883f, 0.00368913309648633f, 0.003736101556569338f, 0.0029121742118149996f, 0.0027142155449837446f, 0.0019741924479603767f, 0.00247934996150434f, 0.0031694858334958553f, 0.0023160306736826897f, 0.0030774336773902178f, 0.00250577786937356f, 0.00383613258600235f, 0.004665818531066179f, 0.00399742042645812f, 0.0021645103115588427f, 0.0032844478264451027f, 0.0027106385678052902f, 0.003140508895739913f, 0.0031127489637583494f, 0.0029895727057009935f, 0.00251552346162498f, 0.0027297402266412973f, 0.004896075930446386f, 0.002404887694865465f, 0.004645742941647768f, 0.0025272464845329523f, 0.004008135758340359f, 0.0029655741527676582f, 0.0020541823469102383f, 0.0019036842277273536f, 0.0026075171772390604f, 0.0027431363705545664f, 0.0033426876179873943f, 0.002966416534036398f, 0.0032286636997014284f, 0.0035581283736974f, 0.0013940163189545274f, 0.003207905450835824f, 0.005302794743329287f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006075193174183369f, 0.009710067883133888f, 0.004584756679832935f, 0.004079138394445181f, 0.006263095419853926f, 0.008364799432456493f, 0.006303451955318451f, 0.010324208997189999f, 0.005832210648804903f, 0.0026328882668167353f, 0.00518774101510644f, 0.008578773587942123f, 0.003518388606607914f, 0.0029649988282471895f, 0.013154426589608192f, 0.00480897631496191f, 0.009961257688701153f, 0.014599690213799477f, 0.02278633415699005f, 0.003675720887258649f, 0.007795877754688263f, 0.010187048465013504f, 0.009464021772146225f, 0.009735625237226486f, 0.007046510465443134f, 0.005733807571232319f, 0.020806634798645973f, 0.007038048934191465f, 0.00919142086058855f, 0.013974535278975964f, 0.005488596856594086f, 0.01410521287471056f, 0.0069871582090854645f, 0.003197525627911091f, 0.0035181399434804916f, 0.008203943260014057f, 0.008047007955610752f, 0.008104640990495682f, 0.013266944326460361f, 0.017127269878983498f, 0.01652691327035427f, 0.02585686184465885f, 0.0055576167069375515f, 0.010123009793460369f, 0.0027945751789957285f, 0.010589846409857273f, 0.007351579610258341f, 0.008781637996435165f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005103051662445068f, 0.0033630472607910633f, 0.0034088450483977795f, 0.005906569305807352f, 0.003795801429077983f, 0.00465977331623435f, 0.004847625270485878f, 0.0035212894435971975f, 0.004456572234630585f, 0.0060476684011518955f, 0.0035457895137369633f, 0.0034459056332707405f, 0.0028144451789557934f, 0.003579785581678152f, 0.003818633733317256f, 0.0037428615614771843f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028451252728700638f, 0.0016342141898348927f, 0.0018826210871338844f, 0.002141995122656226f, 0.0017594259697943926f, 0.00151246867608279f, 0.002006849506869912f, 0.0017371673602610826f, 0.0020480838138610125f, 0.002607816131785512f, 0.0023635472171008587f, 0.0019675178918987513f, 0.0019527917029336095f, 0.002237372100353241f, 0.0022681239061057568f, 0.002269238466396928f, 0.0020701673347502947f, 0.0010817500296980143f, 0.0023534970823675394f, 0.0026328833773732185f, 0.002089069224894047f, 0.001986012328416109f, 0.0028204910922795534f, 0.001888834754936397f, 0.0011574547970667481f, 0.0013338393764570355f, 0.0037400557193905115f, 0.0018172793788835406f, 0.0008766953251324594f, 0.0019923802465200424f, 0.002858884399756789f, 0.0015330772148445249f, 0.0028134011663496494f, 0.0010481418576091528f, 0.0015983048360794783f, 0.0029728980734944344f, 0.001081788563169539f, 0.0027973223477602005f, 0.0024386674631386995f, 0.002254490740597248f, 0.0025993618182837963f, 0.0024554228875786066f, 0.0037669665180146694f, 0.00246787560172379f, 0.0026221771258860826f, 0.0017613583477213979f, 0.0008788582636043429f, 0.002573175821453333f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003504670225083828f, 0.0036727420520037413f, 0.0043222177773714066f, 0.0038690606597810984f, 0.006912191864103079f, 0.0038605714216828346f, 0.0030777074862271547f, 0.0023994578514248133f, 0.004398076795041561f, 0.00336372759193182f, 0.007015528157353401f, 0.001444885041564703f, 0.0035877209156751633f, 0.0032913051545619965f, 0.006032033357769251f, 0.001937315333634615f, 0.004387755878269672f, 0.00535808177664876f, 0.0037686016876250505f, 0.0031584040261805058f, 0.0032600907143205404f, 0.0017283016350120306f, 0.0034448306541889906f, 0.005009594839066267f, 0.006753680296242237f, 0.002701221965253353f, 0.0028425075579434633f, 0.002458523726090789f, 0.006761095952242613f, 0.002400053897872567f, 0.0025363247841596603f, 0.0017678337171673775f, 0.001786522101610899f, 0.002277403138577938f, 0.0033497458789497614f, 0.001979619963094592f, 0.001440907479263842f, 0.0025926283560693264f, 0.0025876511353999376f, 0.0019136193441227078f, 0.0024979934096336365f, 0.0031448262743651867f, 0.0021099073346704245f, 0.0023461245000362396f, 0.005285469815135002f, 0.0022715700324624777f, 0.009025790728628635f, 0.0049575394950807095f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030650843400508165f, 0.0033194825518876314f, 0.003131954465061426f, 0.0032678383868187666f, 0.0026250428054481745f, 0.003061062889173627f, 0.002448726212605834f, 0.00408709142357111f, 0.0035684716422110796f, 0.003379919333383441f, 0.003334084991365671f, 0.0036957738921046257f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006798181566409767f, 0.0006017346167936921f, 0.0006430679932236671f, 0.0004900864441879094f, 0.0004359442391432822f, 0.000814808823633939f, 0.0005580754368565977f, 0.0006503381300717592f, 0.0006265775300562382f, 0.0006750671309418976f, 0.0005481360713019967f, 0.0005764561938121915f, 0.000493361905682832f, 0.0005216967547312379f, 0.0005053298082202673f, 0.0006070795934647322f, 0.0006613096338696778f, 0.0006798030226491392f, 0.0006888821953907609f, 0.00047603645361959934f, 0.0006914855912327766f, 0.0005329321138560772f, 0.0003733515623025596f, 0.000471934414235875f, 0.000755094108171761f, 0.0004701967700384557f, 0.0005360714858397841f, 0.00048689907998777926f, 0.00048044565482996404f, 0.0006249893340282142f, 0.0005063085700385273f, 0.00039490804192610085f, 0.00040436681592836976f, 0.0004835474246647209f, 0.0006778356619179249f, 0.0005903368000872433f, 0.0007779925363138318f, 0.0004252718645147979f, 0.0005996205727569759f, 0.0007829532842151821f, 0.0004204879223834723f, 0.00047119983355514705f, 0.0005341849755495787f, 0.0004895690362900496f, 0.000800715817604214f, 0.0004711133078671992f, 0.000573460478335619f, 0.000547425530385226f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0072687892243266106f, 0.009959726594388485f, 0.008781435899436474f, 0.00620513828471303f, 0.005493772681802511f, 0.006266947835683823f, 0.007916547358036041f, 0.009954802691936493f, 0.008159053511917591f, 0.007746315095573664f, 0.008989788591861725f, 0.009775304235517979f, 0.007157142739742994f, 0.00964939035475254f, 0.007076005917042494f, 0.009694095700979233f, 0.010100098326802254f, 0.010118316859006882f, 0.009556427597999573f, 0.008839799091219902f, 0.007371149957180023f, 0.007361690979450941f, 0.00875667855143547f, 0.008620064705610275f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024779175873845816f, 0.003604985773563385f, 0.0022205051500350237f, 0.003490778850391507f, 0.0025655394420027733f, 0.002822853857651353f, 0.0042177531868219376f, 0.0026522690895944834f, 0.002031207550317049f, 0.002413632581010461f, 0.003716975450515747f, 0.0032633726950734854f, 0.002731512999162078f, 0.0030781130772083998f, 0.0018315057968720794f, 0.0036455115769058466f, 0.0020961740519851446f, 0.001857877359725535f, 0.003540553618222475f, 0.002312521217390895f, 0.003522498533129692f, 0.002791509497910738f, 0.0018268316052854061f, 0.003738410770893097f, 0.002362957689911127f, 0.003528365632519126f, 0.002689813496544957f, 0.0034884470514953136f, 0.0022834448609501123f, 0.0018332035979256034f, 0.002139841439202428f, 0.002437231596559286f, 0.0021796147339046f, 0.0012260096846148372f, 0.003072921186685562f, 0.0022678624372929335f, 0.0032526282593607903f, 0.003123389557003975f, 0.002153674140572548f, 0.0018625528318807483f, 0.002584508154541254f, 0.0018453773809596896f, 0.003368380945175886f, 0.0023486032150685787f, 0.0038413743022829294f, 0.0032055049668997526f, 0.003193242009729147f, 0.0020143957808613777f, 0.0014681128086522222f, 0.0031346434261649847f, 0.0015703936805948615f, 0.0032073459587991238f, 0.0020754137076437473f, 0.0023502709809690714f, 0.0026631986256688833f, 0.002489472273737192f, 0.005369015969336033f, 0.0037525203078985214f, 0.004999980330467224f, 0.0014303169446066022f, 0.0018850329797714949f, 0.0029359152540564537f, 0.003101001726463437f, 0.001979972468689084f, 0.0029541279654949903f, 0.00274827447719872f, 0.0016300086863338947f, 0.002084268955513835f, 0.0021969457156956196f, 0.003350753802806139f, 0.002382994396612048f, 0.002665082225576043f, 0.0032192834187299013f, 0.005036140792071819f, 0.0017345196101814508f, 0.001517389784567058f, 0.0014987108297646046f, 0.00407254695892334f, 0.002407593885436654f, 0.002834897255524993f, 0.0025419562589377165f, 0.0022296984679996967f, 0.002914540935307741f, 0.0031421517487615347f, 0.0024674530141055584f, 0.003153145546093583f, 0.0030936389230191708f, 0.00238416506908834f, 0.001789561123587191f, 0.002363179111853242f, 0.0018545138882473111f, 0.0032101853284984827f, 0.0026364040095359087f, 0.0036210520192980766f, 0.0019596924539655447f, 0.003331454237923026f, 0.0017246522475033998f, 0.002231165301054716f, 0.003042682074010372f, 0.0025536383036524057f, 0.0035307244397699833f, 0.002319120801985264f, 0.0020343095529824495f, 0.0027200039476156235f, 0.002786424942314625f, 0.0032022176310420036f, 0.001668558456003666f, 0.0034340661950409412f, 0.004203419201076031f, 0.003235842566937208f, 0.0019149925792589784f, 0.0024447240866720676f, 0.0033331532031297684f, 0.0019376750569790602f, 0.0029250001534819603f, 0.0033512043301016092f, 0.003815818578004837f, 0.002330221701413393f, 0.0024608091916888952f, 0.0018783498089760542f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005771500524133444f, 0.004096959251910448f, 0.0038247634656727314f, 0.003768090857192874f, 0.002781827934086323f, 0.004035368096083403f, 0.003376907203346491f, 0.00391402468085289f, 0.0024083061143755913f, 0.005764095578342676f, 0.002202521078288555f, 0.002417673822492361f, 0.003340482944622636f, 0.0043314010836184025f, 0.006774937734007835f, 0.0026735083665698767f, 0.0027940194122493267f, 0.004996409174054861f, 0.005410962738096714f, 0.005002603400498629f, 0.004265469498932362f, 0.004072709009051323f, 0.006946358364075422f, 0.008039500564336777f, 0.003622132819145918f, 0.002949526533484459f, 0.006133596878498793f, 0.003009606385603547f, 0.004223129246383905f, 0.004654891323298216f, 0.005339839495718479f, 0.002415197668597102f, 0.002185302320867777f, 0.005104999523609877f, 0.003786280984058976f, 0.0033378724474459887f, 0.0016231717308983207f, 0.0038252908270806074f, 0.002662445418536663f, 0.006565565709024668f, 0.0047998735681176186f, 0.00284884893335402f, 0.0045714895240962505f, 0.0034250281751155853f, 0.0029574965592473745f, 0.004535720217972994f, 0.004973223898559809f, 0.0023166853934526443f, 0.005316276103258133f, 0.007807194720953703f, 0.007210652809590101f, 0.002313723787665367f, 0.003426340175792575f, 0.007792167831212282f, 0.004235925152897835f, 0.0031544985249638557f, 0.00165917060803622f, 0.0037534658331424f, 0.0020496370270848274f, 0.007673146668821573f, 0.001908223028294742f, 0.0040842220187187195f, 0.003301568329334259f, 0.004172745626419783f, 0.0036661559715867043f, 0.0025001210160553455f, 0.005676401313394308f, 0.004980321973562241f, 0.003087598830461502f, 0.004335599951446056f, 0.0029088326264172792f, 0.0031365614850074053f, 0.0038171259220689535f, 0.00559129286557436f, 0.0043586925603449345f, 0.004107465036213398f, 0.0032989573664963245f, 0.0025489386171102524f, 0.009350948967039585f, 0.0029409299604594707f, 0.0051476010121405125f, 0.005139975808560848f, 0.00286933034658432f, 0.0068541597574949265f, 0.005892613437026739f, 0.004074123688042164f, 0.003254964016377926f, 0.004840509034693241f, 0.0025486291851848364f, 0.0033409972675144672f, 0.003738546743988991f, 0.0030879105906933546f, 0.004131433088332415f, 0.005236565135419369f, 0.0058011398650705814f, 0.0030225475784391165f, 0.005706142634153366f, 0.003002515761181712f, 0.00564139848574996f, 0.007917226292192936f, 0.0024086672347038984f, 0.002280966844409704f, 0.0037936819717288017f, 0.0048958067782223225f, 0.005752245429903269f, 0.006223865319043398f, 0.004967355635017157f, 0.004855725914239883f, 0.003803810803219676f, 0.0022472040727734566f, 0.00464799115434289f, 0.003940948285162449f, 0.005583994090557098f, 0.002286852803081274f, 0.003777200821787119f, 0.008781468495726585f, 0.004388847388327122f, 0.0034822896122932434f, 0.00505875376984477f, 0.0021921785082668066f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00233229948207736f, 0.003212646348401904f, 0.0015747231664136052f, 0.00268468982540071f, 0.002616395941004157f, 0.0024778929073363543f, 0.003157824045047164f, 0.00243920530192554f, 0.0019375483971089125f, 0.0030375230126082897f, 0.0018230582354590297f, 0.0020954585634171963f, 0.001959552289918065f, 0.0025685459841042757f, 0.002606831956654787f, 0.0022689823526889086f, 0.0017048249719664454f, 0.002829263685271144f, 0.004358990583568811f, 0.0019526735413819551f, 0.002562023000791669f, 0.003175947116687894f, 0.0030073667876422405f, 0.002453770488500595f, 0.0021204648073762655f, 0.003472625743597746f, 0.00184746109880507f, 0.002489883918315172f, 0.00206580338999629f, 0.0017404978862032294f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00045649975072592497f, 0.00049352808855474f, 0.0003098392626270652f, 0.0005985042080283165f, 0.0004680989368353039f, 0.0004373897681944072f, 0.0005821255617775023f, 0.00036988724605180323f, 0.0005888472660444677f, 0.0004844469949603081f, 0.00047038300544954836f, 0.00038714444963261485f, 0.000497797504067421f, 0.0003607001854106784f, 0.0004630381299648434f, 0.0004107124696020037f, 0.0004897799808532f, 0.00044611332123167813f, 0.0005000679520890117f, 0.00042389341979287565f, 0.00032736980938352644f, 0.0002806241682264954f, 0.0004323456669226289f, 0.00044917582999914885f, 0.0005622106837108731f, 0.0004028234980069101f, 0.000474931497592479f, 0.0004840001347474754f, 0.0004234899242874235f, 0.0007493392913602293f, 0.0003679667424876243f, 0.00034688247251324356f, 0.00042840492096729577f, 0.00042009350727312267f, 0.00039817465585656464f, 0.0005540999700315297f, 0.0003989669494330883f, 0.00041271571535617113f, 0.0004248065233696252f, 0.0005249888636171818f, 0.0005049890605732799f, 0.0006090484093874693f, 0.00033435598015785217f, 0.0006806122255511582f, 0.0004183216660749167f, 0.0004277540429029614f, 0.0005117305554449558f, 0.00035234729875810444f, 0.00038307381328195333f, 0.000539843924343586f, 0.00042895402293652296f, 0.00041565613355487585f, 0.0006912785465829074f, 0.0004752832173835486f, 0.0005266005755402148f, 0.0005035809008404613f, 0.0006452201050706208f, 0.00033908814657479525f, 0.0003881176235154271f, 0.00031389269861392677f, 0.0003714531194418669f, 0.000317877100314945f, 0.00041656268876977265f, 0.00037133455043658614f, 0.0004382022889330983f, 0.0004881719942204654f, 0.0006643413798883557f, 0.0003866977640427649f, 0.0005102935247123241f, 0.0003631598665378988f, 0.00046466776984743774f, 0.00034909098758362234f, 0.00040814513340592384f, 0.0004232210631016642f, 0.00039984556497074664f, 0.000854774727486074f, 0.00033274185261689126f, 0.00045466492883861065f, 0.000534558086656034f, 0.0005515306256711483f, 0.00032666497281752527f, 0.00045268898247741163f, 0.00047526496928185225f, 0.0005006759311072528f, 0.00034875600249506533f, 0.0003522483166307211f, 0.00044129876187071204f, 0.0004020438063889742f, 0.0004273723461665213f, 0.000575160956941545f, 0.0003623889933805913f, 0.00032320647733286023f, 0.0004242987197358161f, 0.00048661153414286673f, 0.0005149305798113346f, 0.00047740928130224347f, 0.0009473382378928363f, 0.0005441807443276048f, 0.00045776969636790454f, 0.00039010850014165044f, 0.0005766208632849157f, 0.000519037595950067f, 0.00040394088136963546f, 0.0004804731288459152f, 0.00044627272291108966f, 0.000388931977795437f, 0.000493385421577841f, 0.0005870948662050068f, 0.0004622024134732783f, 0.00035497191129252315f, 0.00043268053559586406f, 0.00046036983258090913f, 0.00038854245212860405f, 0.0004101042286492884f, 0.00042797692003659904f, 0.0004182136326562613f, 0.0005095771630294621f, 0.0004433076537679881f, 0.0005104182055220008f, 0.0003696000494528562f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003317146096378565f, 0.003445312147960067f, 0.002828577533364296f, 0.009365608915686607f, 0.0027189578395336866f, 0.00399022689089179f, 0.007368932943791151f, 0.004979712422937155f, 0.0046266610734164715f, 0.0037070715334266424f, 0.00583433173596859f, 0.004134447779506445f, 0.002476619090884924f, 0.00533437542617321f, 0.0045000300742685795f, 0.003713255748152733f, 0.004400470294058323f, 0.004106598906219006f, 0.004044665489345789f, 0.003696138272061944f, 0.005547977518290281f, 0.004452228546142578f, 0.003470606403425336f, 0.003091247286647558f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002144819125533104f, 0.0023846374824643135f, 0.0017530974000692368f, 0.0018754672491922975f, 0.002204282907769084f, 0.002923908643424511f, 0.0018357440130785108f, 0.0018052468076348305f, 0.0012965777423232794f, 0.0022966910619288683f, 0.0017529812175780535f, 0.002100493060424924f, 0.001383248483762145f, 0.00202762009575963f, 0.0018893349915742874f, 0.0018679299391806126f, 0.0015731920721009374f, 0.002547551179304719f, 0.0022246025037020445f, 0.0022528148256242275f, 0.001758515601977706f, 0.0016190062742680311f, 0.0016839064192026854f, 0.0019017943413928151f, 0.0017133548390120268f, 0.002256046049296856f, 0.0016304724849760532f, 0.0015458289999514818f, 0.0015938739525154233f, 0.001581102958880365f, 0.0014316439628601074f, 0.001807898050174117f, 0.0031509464606642723f, 0.002716167364269495f, 0.0020520559046417475f, 0.0015760979149490595f, 0.0022694654762744904f, 0.002717289375141263f, 0.0012603329960256815f, 0.0022157987114042044f, 0.0017908998997882009f, 0.002439126605167985f, 0.002301769331097603f, 0.001719529740512371f, 0.002820907859131694f, 0.0029995045624673367f, 0.0016868964303284883f, 0.0017240782035514712f, 0.0024732386227697134f, 0.0021015475504100323f, 0.0022975062020123005f, 0.0020444500260055065f, 0.0028193104080855846f, 0.0014817630872130394f, 0.0017149988561868668f, 0.0024335472844541073f, 0.002000438515096903f, 0.0019301859429106116f, 0.0024782505352050066f, 0.0017847762210294604f, 0.0019500592024996877f, 0.001967421267181635f, 0.0015682006487622857f, 0.001478885649703443f, 0.001912241568788886f, 0.001803651568479836f, 0.0014675009297206998f, 0.0015909718349575996f, 0.0021716770716011524f, 0.0011913509806618094f, 0.0017317540477961302f, 0.0018908560741692781f, 0.0015355012146756053f, 0.0018625477096065879f, 0.0010568929137662053f, 0.0016845702193677425f, 0.002370021538808942f, 0.0018628690158948302f, 0.0012870968785136938f, 0.0025200091768056154f, 0.002257893094792962f, 0.0022609280422329903f, 0.002292887307703495f, 0.0027063670568168163f, 0.0022036093287169933f, 0.0021257437765598297f, 0.001874520443379879f, 0.0014555599773302674f, 0.001179831800982356f, 0.0020960653200745583f, 0.0016146058915182948f, 0.0015859650447964668f, 0.001778166857548058f, 0.0012980927713215351f, 0.0009042483288794756f, 0.001414544298313558f, 0.0016856782604008913f, 0.0024287973064929247f, 0.0019215925130993128f, 0.002230689860880375f, 0.002040867693722248f, 0.0024836906231939793f, 0.00204822258092463f, 0.0018304737750440836f, 0.0019659835379570723f, 0.0020829360000789165f, 0.002217693254351616f, 0.001654740422964096f, 0.002444222802296281f, 0.0018978409934788942f, 0.0019181492971256375f, 0.001848038868047297f, 0.002232771832495928f, 0.001800259342417121f, 0.002089155139401555f, 0.002388154389336705f, 0.0016587951686233282f, 0.002374479314312339f, 0.0024994495324790478f, 0.0018582497723400593f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004500845447182655f, 0.002484576776623726f, 0.002419915283098817f, 0.002142553450539708f, 0.00504743168130517f, 0.004671843722462654f, 0.004875513259321451f, 0.00451039569452405f, 0.005603681784123182f, 0.00330729759298265f, 0.002852405421435833f, 0.00441731745377183f, 0.0017153122462332249f, 0.0029965899884700775f, 0.001414506696164608f, 0.00392335606738925f, 0.0023990271147340536f, 0.0050971913151443005f, 0.0036658220924437046f, 0.002032692078500986f, 0.007036137394607067f, 0.002746236277744174f, 0.003474875120446086f, 0.0041634622029960155f, 0.0022869426757097244f, 0.002707862760871649f, 0.003953610546886921f, 0.0036584811750799417f, 0.00268871639855206f, 0.00207202835008502f, 0.0031577409245073795f, 0.0029013282619416714f, 0.004909715615212917f, 0.0035767683293670416f, 0.008533256128430367f, 0.0013705346500501037f, 0.004934370052069426f, 0.0031212156172841787f, 0.0016272813081741333f, 0.003997410647571087f, 0.004163678735494614f, 0.0051533011719584465f, 0.00406169006600976f, 0.0016551095759496093f, 0.0037716298829764128f, 0.004142303019762039f, 0.004830016754567623f, 0.0027465771418064833f, 0.004027641378343105f, 0.006087774410843849f, 0.004013400990515947f, 0.001962238224223256f, 0.0031035910360515118f, 0.005303281359374523f, 0.004767182748764753f, 0.004561139270663261f, 0.004970204550772905f, 0.005370865575969219f, 0.0029336342122405767f, 0.003828371874988079f, 0.004944933578372002f, 0.0019193021580576897f, 0.0022552707232534885f, 0.0024617870803922415f, 0.002011236036196351f, 0.0046210456639528275f, 0.004833793733268976f, 0.004011007957160473f, 0.0030082149896770716f, 0.0020487054716795683f, 0.002721537137404084f, 0.004240557085722685f, 0.0019284082809463143f, 0.004734043963253498f, 0.004059311468154192f, 0.002151697874069214f, 0.00513587286695838f, 0.0039430116303265095f, 0.0019681123085319996f, 0.0021823965944349766f, 0.007033441681414843f, 0.0021552087273448706f, 0.0025737229734659195f, 0.0029865081887692213f, 0.00695329112932086f, 0.0030142345931380987f, 0.0044255745597183704f, 0.0038748725783079863f, 0.00781535916030407f, 0.004474481102079153f, 0.0036105040926486254f, 0.0034621157683432102f, 0.004570161458104849f, 0.0018565673381090164f, 0.004582194611430168f, 0.004230777267366648f, 0.0024539532605558634f, 0.005937941372394562f, 0.004893606994301081f, 0.0032142733689397573f, 0.005998627748340368f, 0.004183682147413492f, 0.003650299971923232f, 0.005583050195127726f, 0.0046593667939305305f, 0.0033949848730117083f, 0.001891284598968923f, 0.006228605750948191f, 0.0068970234133303165f, 0.004976088181138039f, 0.005735974293202162f, 0.0072944872081279755f, 0.006078118458390236f, 0.0038147347513586283f, 0.004107997752726078f, 0.002416039351373911f, 0.0030164336785674095f, 0.005488064140081406f, 0.0037202611565589905f, 0.0028387540951371193f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018692818703129888f, 0.0033224469516426325f, 0.0034380319993942976f, 0.0017935078358277678f, 0.002468385500833392f, 0.0032366744708269835f, 0.0018530146917328238f, 0.0021166738588362932f, 0.00242547201924026f, 0.0019434946589171886f, 0.0021689569111913443f, 0.001975117949768901f, 0.0017183999298140407f, 0.0031768097542226315f, 0.001776391640305519f, 0.0035041747614741325f, 0.002956585492938757f, 0.001826058840379119f, 0.0020709370728582144f, 0.00178403384052217f, 0.00252627395093441f, 0.003025865415111184f, 0.002842570887878537f, 0.0018186211818829179f, 0.0035618585534393787f, 0.002295567886903882f, 0.002408243715763092f, 0.0018711581360548735f, 0.00227417703717947f, 0.001698410022072494f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004032431752420962f, 0.0005124686285853386f, 0.0005084676668047905f, 0.00046840999857522547f, 0.00041394642903469503f, 0.0005134096136316657f, 0.0002989839995279908f, 0.000417601375374943f, 0.00045172363752499223f, 0.0003632201114669442f, 0.000657878234051168f, 0.00035110663156956434f, 0.00046677555656060576f, 0.0004624338180292398f, 0.00032483760151080787f, 0.00031809540814720094f, 0.0005365154356695712f, 0.0005477071390487254f, 0.0003173876029904932f, 0.0003686601994559169f, 0.0004056488978676498f, 0.0004884273512288928f, 0.0003988338867202401f, 0.0004412965208757669f, 0.00046471614041365683f, 0.0006041264859959483f, 0.000477081659482792f, 0.0005910065956413746f, 0.00045235370635055006f, 0.000721834076102823f, 0.000389209104469046f, 0.0003439401334617287f, 0.00042282784124836326f, 0.000460036942968145f, 0.0006378082325682044f, 0.0003925744676962495f, 0.00043095790897496045f, 0.000370968715287745f, 0.00040838096174411476f, 0.00048523012083023787f, 0.0003725998685695231f, 0.0005413612234406173f, 0.0004004090733360499f, 0.0003966543299611658f, 0.0005003877449780703f, 0.0003572234127204865f, 0.0004785034980159253f, 0.0003129250544589013f, 0.0003330708423163742f, 0.0003542306076269597f, 0.0004314705147407949f, 0.00038778773159720004f, 0.0003541111946105957f, 0.0004277962143532932f, 0.00044840050395578146f, 0.0005080405971966684f, 0.0003938230511266738f, 0.0003908525104634464f, 0.00043213434400968254f, 0.0004355706332717091f, 0.0005612316308543086f, 0.00030412295018322766f, 0.00037818436976522207f, 0.00034203872201032937f, 0.0003247597487643361f, 0.0003704774135258049f, 0.00048869289457798f, 0.0003734685305971652f, 0.000516551430337131f, 0.0003449679643381387f, 0.0006534762214869261f, 0.00041096637141890824f, 0.0005028172745369375f, 0.0005025643622502685f, 0.0004961670492775738f, 0.0003082916955463588f, 0.0004008596879430115f, 0.0003566298692021519f, 0.00045552855590358377f, 0.0004660732811316848f, 0.0004932832671329379f, 0.0005486003938131034f, 0.0005136217223480344f, 0.0004986614221706986f, 0.0003693225735332817f, 0.0004834002465941012f, 0.0003855327668134123f, 0.0004388954257592559f, 0.00034674894413910806f, 0.0003894651308655739f, 0.00048395528574474156f, 0.00035860497155226767f, 0.00047920452198013663f, 0.0004578860243782401f, 0.0005860647070221603f, 0.0003181112406309694f, 0.0004940919461660087f, 0.00047266995534300804f, 0.00033301697112619877f, 0.0005678178276866674f, 0.0005168123170733452f, 0.00041215235251002014f, 0.00039604163612239063f, 0.00032937611103989184f, 0.00039054895751178265f, 0.0003916751011274755f, 0.0006811057683080435f, 0.0003734923084266484f, 0.0004007040406577289f, 0.0005420088418759406f, 0.0004906481481157243f, 0.0004839214379899204f, 0.0006089935195632279f, 0.0003823967999778688f, 0.0004489643906708807f, 0.00044995779171586037f, 0.00042433280032128096f, 0.000485473865410313f, 0.0004315821861382574f, 0.0005309729604050517f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004668481182307005f, 0.004216478206217289f, 0.0021920748986303806f, 0.005516044795513153f, 0.0036755907349288464f, 0.0040350379422307014f, 0.0031755745876580477f, 0.003731705015525222f, 0.003692308673635125f, 0.005577886942774057f, 0.0032041496597230434f, 0.0033663795329630375f, 0.006064191926270723f, 0.003508009249344468f, 0.004298349376767874f, 0.004219206981360912f, 0.0041227033361792564f, 0.00335693615488708f, 0.0038521462120115757f, 0.0035830566193908453f, 0.004280657973140478f, 0.002893119351938367f, 0.003678970504552126f, 0.0023072385229170322f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017237798310816288f, 0.001318225753493607f, 0.0013721793657168746f, 0.0014894724590703845f, 0.0016979483189061284f, 0.0018348501762375236f, 0.0012615913292393088f, 0.0016358345746994019f, 0.001406327006407082f, 0.0015758371446281672f, 0.0018066831398755312f, 0.001958605134859681f, 0.0013072718866169453f, 0.0020034925546497107f, 0.0011683972552418709f, 0.0014009035658091307f, 0.0011339575285091996f, 0.0014560080599039793f, 0.001636375323869288f, 0.0008957633399404585f, 0.0018270733999088407f, 0.0010369286173954606f, 0.001181271974928677f, 0.0009893879760056734f, 0.0012121755862608552f, 0.0017047524452209473f, 0.0016218795208260417f, 0.002005133545026183f, 0.0024738353677093983f, 0.0017112684436142445f, 0.0013261163840070367f, 0.001870837644673884f, 0.0017537708627060056f, 0.0014941443223506212f, 0.001294847228564322f, 0.0011744406074285507f, 0.0014358327025547624f, 0.0014342283830046654f, 0.0012868683552369475f, 0.0018761887913569808f, 0.001008316408842802f, 0.0011966380989179015f, 0.001889837090857327f, 0.0018982458859682083f, 0.00256715202704072f, 0.0018903478048741817f, 0.0020925458520650864f, 0.001971745165064931f, 0.0013630941975861788f, 0.0012378910323604941f, 0.0021741900127381086f, 0.0016342703020200133f, 0.0021839356049895287f, 0.0017952816560864449f, 0.0015264245448634028f, 0.0011119515402242541f, 0.0015051281079649925f, 0.001838851603679359f, 0.001749037066474557f, 0.0018964163027703762f, 0.001724942703731358f, 0.0013464642688632011f, 0.0010199813405051827f, 0.001667679287493229f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0041394405998289585f, 0.00414370559155941f, 0.002831162652000785f, 0.003981520887464285f, 0.002759607508778572f, 0.004785608500242233f, 0.0033472522627562284f, 0.004795688670128584f, 0.0031147929839789867f, 0.003339961636811495f, 0.003577378112822771f, 0.0022855910938233137f, 0.004047913942486048f, 0.007451713550835848f, 0.002574610523879528f, 0.0038455971516668797f, 0.005228838883340359f, 0.0038739964365959167f, 0.0036229491233825684f, 0.010102711617946625f, 0.0028300746344029903f, 0.004830107558518648f, 0.005533799063414335f, 0.0012753959745168686f, 0.0038425414822995663f, 0.004407582338899374f, 0.003273173002526164f, 0.001958714099600911f, 0.001740862149745226f, 0.00403076084330678f, 0.003206299152225256f, 0.005911084823310375f, 0.0027079740539193153f, 0.005546752363443375f, 0.0016228694003075361f, 0.002614411525428295f, 0.004283046815544367f, 0.006497150752693415f, 0.00378113379701972f, 0.001797642675228417f, 0.006203396711498499f, 0.002248522127047181f, 0.0029580018017441034f, 0.002800985239446163f, 0.0055384854786098f, 0.006719688884913921f, 0.0059159849770367146f, 0.005872239824384451f, 0.004846678115427494f, 0.0030502169393002987f, 0.0024500933941453695f, 0.00427943654358387f, 0.0021999154705554247f, 0.006427663378417492f, 0.0021997750736773014f, 0.0017081660917028785f, 0.0018425233429297805f, 0.0022894886787980795f, 0.0024433580692857504f, 0.00233030179515481f, 0.002515288768336177f, 0.005746293347328901f, 0.0034769303165376186f, 0.00374176655896008f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002717763651162386f, 0.002889305120334029f, 0.0036861959379166365f, 0.0026287499349564314f, 0.0035978788509964943f, 0.0031666457653045654f, 0.0033448992762714624f, 0.004017935134470463f, 0.0024212272837758064f, 0.0024085945915430784f, 0.003715762635692954f, 0.00285540334880352f, 0.0025916604790836573f, 0.0029332118574529886f, 0.002666821703314781f, 0.00337049039080739f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005551104550249875f, 0.0004584631242323667f, 0.0006098328158259392f, 0.0004141330427955836f, 0.0005673652631230652f, 0.0005748174735344946f, 0.0004977412172593176f, 0.00046508078230544925f, 0.0006460201693698764f, 0.0005427483702078462f, 0.0005452107870951295f, 0.0003984485229011625f, 0.0005294065340422094f, 0.00041802364285103977f, 0.0006467073690146208f, 0.0005876276409253478f, 0.0009111882536672056f, 0.000480834161862731f, 0.0005038529634475708f, 0.0007094986503943801f, 0.000618119549471885f, 0.00040501615148968995f, 0.0003907812642864883f, 0.00045845506247133017f, 0.0005592264933511615f, 0.0005047600134275854f, 0.0006802938296459615f, 0.00048601350863464177f, 0.0005265463260002434f, 0.0005674475687555969f, 0.0004639181133825332f, 0.00042470733751542866f, 0.0005379576468840241f, 0.0005092051578685641f, 0.00046663402463309467f, 0.0004929354763589799f, 0.0005787788541056216f, 0.00045629224041476846f, 0.0007112161256372929f, 0.0004756082780659199f, 0.00035368255339562893f, 0.00043792006908915937f, 0.0005342349759303033f, 0.00046977720921859145f, 0.0005559101118706167f, 0.000799444445874542f, 0.00041426243842579424f, 0.0004569223092403263f, 0.0006805176963098347f, 0.00041214076918549836f, 0.0005342306103557348f, 0.0006824919255450368f, 0.0003443970635998994f, 0.00045378244249150157f, 0.0004937588819302619f, 0.00047932591405697167f, 0.0004716271359939128f, 0.0003967151860706508f, 0.0005950799095444381f, 0.0005206120549701154f, 0.0004046201065648347f, 0.0006126589723862708f, 0.0004973036120645702f, 0.0004227891913615167f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005907571408897638f, 0.007560094352811575f, 0.006753131281584501f, 0.006303984206169844f, 0.006450507324188948f, 0.00753073999658227f, 0.004190163221210241f, 0.007791374810039997f, 0.005595854017883539f, 0.007181413471698761f, 0.0069341640919446945f, 0.008248120546340942f, 0.006875996943563223f, 0.007161625195294619f, 0.0069684539921581745f, 0.006377434823662043f, 0.005877350922673941f, 0.004875378683209419f, 0.005642132367938757f, 0.006479363422840834f, 0.008107750676572323f, 0.00467271450906992f, 0.005450708791613579f, 0.00524143548682332f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010793795809149742f, 0.0014066401636227965f, 0.0024474747478961945f, 0.0016864457866176963f, 0.0011580920545384288f, 0.0014024381525814533f, 0.0010379949817433953f, 0.0007289634086191654f, 0.0023173962254077196f, 0.0012096656719222665f, 0.001471636351197958f, 0.0009572003036737442f, 0.0015414342051371932f, 0.0010989266447722912f, 0.001338150235824287f, 0.0011925746221095324f, 0.001365403295494616f, 0.0011196588166058064f, 0.0016847364604473114f, 0.0014507571468129754f, 0.001488033216446638f, 0.0011693598935380578f, 0.0010067400289699435f, 0.0012297541834414005f, 0.0012257305206730962f, 0.0012218026677146554f, 0.001399244531057775f, 0.0018814416835084558f, 0.0019026080844923854f, 0.0016539654461666942f, 0.0014039967209100723f, 0.001682046102359891f, 0.0014106201706454158f, 0.001277252333238721f, 0.0016256531234830618f, 0.0012182017089799047f, 0.001093909959308803f, 0.001207411172799766f, 0.0015179184265434742f, 0.001061278977431357f, 0.0015839242842048407f, 0.0013740771682932973f, 0.0012350420001894236f, 0.0016434919089078903f, 0.0010665119625627995f, 0.0014412637101486325f, 0.0014452673494815826f, 0.001527561922557652f, 0.0007464174414053559f, 0.0011406481498852372f, 0.0015821442939341068f, 0.0012756300857290626f, 0.0014913479099050164f, 0.0014223583275452256f, 0.0007627822924405336f, 0.001480286242440343f, 0.0014392196899279952f, 0.0015163301723077893f, 0.0014715812867507339f, 0.0014038888039067388f, 0.0009310966706834733f, 0.0016825920902192593f, 0.001598876784555614f, 0.0013734630774706602f, 0.0020296056754887104f, 0.0015997993759810925f, 0.0015390159096568823f, 0.0011037704534828663f, 0.0013290864881128073f, 0.0008682474144734442f, 0.0009308438748121262f, 0.0011160628637298942f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0020817602053284645f, 0.003067589132115245f, 0.002830821555107832f, 0.002757622394710779f, 0.003942306153476238f, 0.003450458636507392f, 0.0038377081509679556f, 0.002110313391312957f, 0.00386717077344656f, 0.002239196328446269f, 0.003680116031318903f, 0.004422812722623348f, 0.0018765509594231844f, 0.005151432938873768f, 0.0030335274059325457f, 0.002378807868808508f, 0.0030384953133761883f, 0.0023334003053605556f, 0.0026206830516457558f, 0.0021119953598827124f, 0.003220370039343834f, 0.0032305459026247263f, 0.003955823834985495f, 0.003857491072267294f, 0.0027685591485351324f, 0.004683046601712704f, 0.0024149927776306868f, 0.004564923234283924f, 0.005418548826128244f, 0.002957220422104001f, 0.0032084917183965445f, 0.0037397202104330063f, 0.004069741349667311f, 0.0025833509862422943f, 0.00660678930580616f, 0.004256632179021835f, 0.002022665925323963f, 0.0021958379074931145f, 0.0028162223752588034f, 0.001893499749712646f, 0.0029988461174070835f, 0.0029227901250123978f, 0.0017150294734165072f, 0.004124816507101059f, 0.005040233489125967f, 0.007417699787765741f, 0.009414548054337502f, 0.0028867125511169434f, 0.0033717569895088673f, 0.0045593781396746635f, 0.004456815775483847f, 0.0027719985228031874f, 0.0056327641941607f, 0.0035517809446901083f, 0.00685984967276454f, 0.005704218987375498f, 0.0036882562562823296f, 0.0037027914077043533f, 0.0029168562032282352f, 0.006431958172470331f, 0.0025536634493619204f, 0.002163248136639595f, 0.002132994355633855f, 0.003928609192371368f, 0.0021770959720015526f, 0.004071507137268782f, 0.002573395147919655f, 0.004938434809446335f, 0.0031305572483688593f, 0.0025112638249993324f, 0.0043505155481398106f, 0.005823311395943165f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002517704851925373f, 0.0023296638391911983f, 0.0025404817424714565f, 0.0028057489544153214f, 0.0027553571853786707f, 0.0023140041157603264f, 0.0026484080590307713f, 0.002634605625644326f, 0.003101493464782834f, 0.0030832327902317047f, 0.0025922644417732954f, 0.0023484511766582727f, 0.0032919535879045725f, 0.0023364603985100985f, 0.002211499959230423f, 0.0026880737859755754f, 0.002282074885442853f, 0.0024306494742631912f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005433272453956306f, 0.00044229073682799935f, 0.00034218793734908104f, 0.0004133168840780854f, 0.0003678684588521719f, 0.00047131406608968973f, 0.00044116127537563443f, 0.0003765407018363476f, 0.0005307607934810221f, 0.00039149716030806303f, 0.0005115119856782258f, 0.0005009877495467663f, 0.00041475461330264807f, 0.00041976862121373415f, 0.0005293068825267255f, 0.00047597321099601686f, 0.0006458987481892109f, 0.0003384558076504618f, 0.00039217554149217904f, 0.0005003169644623995f, 0.000503850111272186f, 0.0004381178296171129f, 0.00042194273555651307f, 0.0006195091991685331f, 0.0006005169707350433f, 0.0004721897130366415f, 0.00045470340410247445f, 0.000601389619987458f, 0.000386029074434191f, 0.00033253460424020886f, 0.0005921418196521699f, 0.0004624400462489575f, 0.00046884786570444703f, 0.0003926448698621243f, 0.00045279072946868837f, 0.0004208041646052152f, 0.00043545971857383847f, 0.0004042071814183146f, 0.000468894635559991f, 0.0003866224142257124f, 0.0006072574178688228f, 0.0004313171375542879f, 0.0004664503794629127f, 0.0004953894531354308f, 0.0004604613350238651f, 0.0004679197445511818f, 0.0004488225094974041f, 0.00036933942465111613f, 0.0003342264099046588f, 0.0004467315156944096f, 0.0004017464234493673f, 0.00037705202703364193f, 0.0006292411126196384f, 0.00033109812648035586f, 0.00043301552068442106f, 0.0005330127314664423f, 0.0003480363520793617f, 0.00043514330172911286f, 0.00044649283518083394f, 0.0005911852931603789f, 0.0005224138731136918f, 0.0005214298143982887f, 0.0005436089122667909f, 0.0004037513572257012f, 0.000415677553974092f, 0.0005417196080088615f, 0.0005705495714209974f, 0.0006276827189140022f, 0.0003816955431830138f, 0.00040455267298966646f, 0.0004135777708142996f, 0.0004700725548900664f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0050932480953633785f, 0.006352285388857126f, 0.004950319416821003f, 0.005289049353450537f, 0.00582025246694684f, 0.008156555704772472f, 0.006272865459322929f, 0.005875247996300459f, 0.005028010345995426f, 0.00518557196483016f, 0.006707021500915289f, 0.00405387207865715f, 0.005525005981326103f, 0.004924630746245384f, 0.005921714939177036f, 0.006307448260486126f, 0.00751432916149497f, 0.008192390203475952f, 0.0056577022187411785f, 0.0065672434866428375f, 0.008720397017896175f, 0.003987020347267389f, 0.0038643914740532637f, 0.004479392431676388f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018673916347324848f, 0.0006729349843226373f, 0.0014569832710549235f, 0.001114427694119513f, 0.0008690764661878347f, 0.0013832158874720335f, 0.0013302575098350644f, 0.0008974123047664762f, 0.0013313740491867065f, 0.0011470160679891706f, 0.0012770377798005939f, 0.0012525952188298106f, 0.0009337379597127438f, 0.001076592248864472f, 0.0010749363573268056f, 0.0009281977545469999f, 0.0011121348943561316f, 0.0011514780344441533f, 0.0011899799574166536f, 0.0008867736905813217f, 0.0009010749636217952f, 0.0011431281454861164f, 0.0010009785182774067f, 0.0009198353509418666f, 0.0007251048227772117f, 0.0013264452572911978f, 0.001244851853698492f, 0.0014437424251809716f, 0.0009544900385662913f, 0.0011340375058352947f, 0.0012669331626966596f, 0.0015339544042944908f, 0.0008344703819602728f, 0.0009314818307757378f, 0.0012760487152263522f, 0.0009077578433789313f, 0.0008247257792390883f, 0.0009715932537801564f, 0.0011326014064252377f, 0.000793120707385242f, 0.0012251670705154538f, 0.0013052035355940461f, 0.001078624278306961f, 0.0013544383691623807f, 0.0015483732568100095f, 0.0013861312763765454f, 0.001240239362232387f, 0.0012651028810068965f, 0.0012761267134919763f, 0.001113621168769896f, 0.0008445552666671574f, 0.0016651495825499296f, 0.000791730300989002f, 0.0014262304175645113f, 0.0012081086169928312f, 0.0008103775326162577f, 0.0007754029938951135f, 0.0011071297340095043f, 0.0009299825178459287f, 0.0012211037101224065f, 0.0010090140858665109f, 0.0016677130479365587f, 0.0008995227399282157f, 0.0012895433465018868f, 0.0008959849365055561f, 0.0014998354017734528f, 0.000757122237700969f, 0.0007311525987461209f, 0.0009538914891891181f, 0.0007626229198649526f, 0.0009897040436044335f, 0.0011439904337748885f, 0.0011625253828242421f, 0.001090328791178763f, 0.001228508073836565f, 0.001128509407863021f, 0.0012071997625753284f, 0.001084449584595859f, 0.000912945659365505f, 0.0013126420089975f, 0.0007687118486501276f, 0.0018448447808623314f, 0.001210793387144804f, 0.0011865283595398068f, 0.0012787340674549341f, 0.0010660486295819283f, 0.001161804422736168f, 0.0011035003699362278f, 0.0011908935848623514f, 0.0007980078225955367f, 0.0013864021748304367f, 0.001350532053038478f, 0.001035330700688064f, 0.0013358073774725199f, 0.0011123986914753914f, 0.001364045194350183f, 0.0011358966585248709f, 0.0009784952271729708f, 0.000946207030210644f, 0.0010946341790258884f, 0.0008745698141865432f, 0.0005799024947918952f, 0.0013021925697103143f, 0.001054625608958304f, 0.0011853390606120229f, 0.0010202113771811128f, 0.0014549398329108953f, 0.0008863518596626818f, 0.0007030190317891538f, 0.0009639027994126081f, 0.0008833606261759996f, 0.0016134120523929596f, 0.0014241207391023636f, 0.0009478197898715734f, 0.00092135468730703f, 0.001469851122237742f, 0.0009716443601064384f, 0.0011668928200379014f, 0.0013971768785268068f, 0.0013578219804912806f, 0.001199430669657886f, 0.0016372570535168052f, 0.000737389549612999f, 0.0011205478804185987f, 0.0012965640053153038f, 0.0008892054320313036f, 0.0013719889102503657f, 0.0013773110695183277f, 0.0011546709574759007f, 0.0013642768608406186f, 0.0012309941230341792f, 0.0007942412048578262f, 0.0018298012437298894f, 0.0011598585406318307f, 0.0009745420538820326f, 0.0009783876594156027f, 0.001013895496726036f, 0.0009220800711773336f, 0.0011382842203602195f, 0.0008284017676487565f, 0.0010573399486020207f, 0.0011864783009514213f, 0.0008637647260911763f, 0.0011172785889357328f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003122980473563075f, 0.002036259276792407f, 0.004218590445816517f, 0.0022018286399543285f, 0.0039004867430776358f, 0.0037208430003374815f, 0.0028143550734966993f, 0.0019245751900598407f, 0.0034045393113046885f, 0.0051034302450716496f, 0.0024743233807384968f, 0.0022277110256254673f, 0.004392741248011589f, 0.0018450581701472402f, 0.0026671835221350193f, 0.0025706125888973475f, 0.0022599538788199425f, 0.00472651980817318f, 0.002860297681763768f, 0.0021029317285865545f, 0.0018093193648383021f, 0.0015020102728158236f, 0.003449769923463464f, 0.00225126463919878f, 0.0036932704970240593f, 0.0025526138488203287f, 0.0032609363552182913f, 0.002409891225397587f, 0.0020502221304923296f, 0.002309342846274376f, 0.002106001367792487f, 0.0022187840659171343f, 0.0020294126588851213f, 0.0023390715941786766f, 0.0022342244628816843f, 0.005612665321677923f, 0.0025180845987051725f, 0.0031830116640776396f, 0.0027935714460909367f, 0.0024648234248161316f, 0.0027925237081944942f, 0.004832162521779537f, 0.0015955646522343159f, 0.003291515866294503f, 0.0019192369654774666f, 0.0027720967773348093f, 0.0025475281290709972f, 0.003004777943715453f, 0.005090216174721718f, 0.0021527870558202267f, 0.0030513613019138575f, 0.002541482914239168f, 0.00222208583727479f, 0.006113747600466013f, 0.002464564749971032f, 0.002360906219109893f, 0.0031574713066220284f, 0.0020384793169796467f, 0.0020132618956267834f, 0.002842632122337818f, 0.0024713606107980013f, 0.004510972183197737f, 0.003003594931215048f, 0.002557379426434636f, 0.003077080240473151f, 0.002199046779423952f, 0.002222568029537797f, 0.003961150534451008f, 0.0022716564126312733f, 0.0018709506839513779f, 0.005238731857389212f, 0.005301832687109709f, 0.0033287086989730597f, 0.002047392539680004f, 0.005916392896324396f, 0.005086151417344809f, 0.004117489792406559f, 0.0045252093113958836f, 0.001667457283474505f, 0.00349827716127038f, 0.0046934220008552074f, 0.002168304054066539f, 0.0029109313618391752f, 0.0020363545045256615f, 0.003780562896281481f, 0.0020368287805467844f, 0.0039283521473407745f, 0.006270024459809065f, 0.003395610023289919f, 0.003466932801529765f, 0.0038842905778437853f, 0.0030729135032743216f, 0.003951058257371187f, 0.0026437107007950544f, 0.0021763804834336042f, 0.0022118655033409595f, 0.0028014574199914932f, 0.002103490987792611f, 0.0014711231924593449f, 0.0026302682235836983f, 0.0020192593801766634f, 0.005879740696400404f, 0.003977487329393625f, 0.0019872409757226706f, 0.0036158424336463213f, 0.0024227704852819443f, 0.002926677232608199f, 0.001624909695237875f, 0.0027036729734390974f, 0.002711462788283825f, 0.0040062470361590385f, 0.0016856868751347065f, 0.0022642139811068773f, 0.003234650008380413f, 0.0034160190261900425f, 0.001884284894913435f, 0.001819153781980276f, 0.0036041780840605497f, 0.002199883572757244f, 0.002275718143209815f, 0.004684332758188248f, 0.005231758579611778f, 0.0020578172989189625f, 0.002682456048205495f, 0.0025027962401509285f, 0.00512011768296361f, 0.0024737499188631773f, 0.0033904733136296272f, 0.0023586605675518513f, 0.0029456689953804016f, 0.003615421475842595f, 0.00282466784119606f, 0.0028290608897805214f, 0.0016993193421512842f, 0.003343354444950819f, 0.0022576190531253815f, 0.0032433613669127226f, 0.004458785988390446f, 0.0035886459518224f, 0.0043463753536343575f, 0.006030302494764328f, 0.0035758023150265217f, 0.0036805199924856424f, 0.0018035996472463012f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024867297615855932f, 0.0018145620124414563f, 0.003280404955148697f, 0.0025388714857399464f, 0.0018406918970867991f, 0.0033364349510520697f, 0.0017888229340314865f, 0.0025270283222198486f, 0.0020329072140157223f, 0.0016319304704666138f, 0.002083715982735157f, 0.002556626917794347f, 0.001700884778983891f, 0.002246654126793146f, 0.0015437297988682985f, 0.0018563098274171352f, 0.0021727429702878f, 0.0016296773683279753f, 0.0015922579914331436f, 0.002255355706438422f, 0.0014800322242081165f, 0.002660071011632681f, 0.00246258988045156f, 0.00198084837757051f, 0.001696011982858181f, 0.002212991937994957f, 0.0016169777372851968f, 0.001660084119066596f, 0.0016767519991844893f, 0.0028569239657372236f, 0.0017322679050266743f, 0.0036033738870173693f, 0.0027024385053664446f, 0.0021730654407292604f, 0.0023801953066140413f, 0.0019104075618088245f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004760547017212957f, 0.00035005988320335746f, 0.0005911966436542571f, 0.00041625864105299115f, 0.00041166332084685564f, 0.0004397464799694717f, 0.0003721014072652906f, 0.0005071457708254457f, 0.00030119865550659597f, 0.0006147963576950133f, 0.0003785970329772681f, 0.00046549513353966177f, 0.00043346514576114714f, 0.0004678033583331853f, 0.0004095581534784287f, 0.0003612855216488242f, 0.00029188059852458537f, 0.00035736538120545447f, 0.0004024787340313196f, 0.0004555902269203216f, 0.00034742316347546875f, 0.0005349915591068566f, 0.00028938119066879153f, 0.0005538631230592728f, 0.00035771512193605304f, 0.0003375778323970735f, 0.00043747047311626375f, 0.00035891684819944203f, 0.0005227483925409615f, 0.00029142736457288265f, 0.0003482243337202817f, 0.0003881507436744869f, 0.0004111856105737388f, 0.00031555985333397985f, 0.00037782368599437177f, 0.0005261309561319649f, 0.0006117693847045302f, 0.0003899961884599179f, 0.00033796115894801915f, 0.0004550028534140438f, 0.0003887015045620501f, 0.00038284657057374716f, 0.0003476343408692628f, 0.00027137802680954337f, 0.0005537435063160956f, 0.00046957764425314963f, 0.00046826450852677226f, 0.0003594942972995341f, 0.00039920248673297465f, 0.0004428262764122337f, 0.0003553364076651633f, 0.00033465595333836973f, 0.00043382582953199744f, 0.0004747193888761103f, 0.00036635296419262886f, 0.0003981720074079931f, 0.00038315149140544236f, 0.00029863661620765924f, 0.00034293666249141097f, 0.0003018557617906481f, 0.00034777302062138915f, 0.00040643452666699886f, 0.00033188745146617293f, 0.0004769270890392363f, 0.0003003984165843576f, 0.0002930688497144729f, 0.0003993990831077099f, 0.00040711695328354836f, 0.0003664717369247228f, 0.00033756677294149995f, 0.00029899037326686084f, 0.0005192242679186165f, 0.0003646773402579129f, 0.0003227016713935882f, 0.00032897916389629245f, 0.00031737989047542214f, 0.00042156517156399786f, 0.0003778861719183624f, 0.0003353535430505872f, 0.0003466821217443794f, 0.00040474042179994285f, 0.00030674945446662605f, 0.00035447810660116374f, 0.00027766753919422626f, 0.0003391787176951766f, 0.00038063270039856434f, 0.0002736723399721086f, 0.00038261417648755014f, 0.00040220070513896644f, 0.0005854998016729951f, 0.0005036598886363208f, 0.0002973420196212828f, 0.00036206780350767076f, 0.000419469055486843f, 0.0005299546173773706f, 0.00041255925316363573f, 0.00033411517506465316f, 0.00026736504514701664f, 0.00036998148425482213f, 0.0004393434792291373f, 0.0003371909260749817f, 0.0006212499574758112f, 0.0004160968819633126f, 0.0002600422012619674f, 0.0003512151015456766f, 0.0003707895812112838f, 0.0005303816287778318f, 0.0003322961856611073f, 0.00048155226977542043f, 0.00034673826303333044f, 0.0003877035924233496f, 0.0003900336450897157f, 0.0004319062572903931f, 0.00065057777101174f, 0.0004143096739426255f, 0.0004780952585861087f, 0.00036293381708674133f, 0.0003306256257928908f, 0.00038127374136820436f, 0.00031306760502047837f, 0.00045784289250150323f, 0.0003574122965801507f, 0.00030424678698182106f, 0.0003057470603380352f, 0.00036299796192906797f, 0.0002996654948219657f, 0.0006242070812731981f, 0.00044847402023151517f, 0.0003896201669704169f, 0.0003712198231369257f, 0.0003476810234133154f, 0.00040114414878189564f, 0.0003452676464803517f, 0.00041359555325470865f, 0.00031837591086514294f, 0.0003386343305464834f, 0.0004632627824321389f, 0.00034339891863055527f, 0.0003120052570011467f, 0.000332962314132601f, 0.0003167286340612918f, 0.0003872140368912369f, 0.0004217437526676804f, 0.00036107920459471643f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002438122406601906f, 0.0034245499409735203f, 0.0019251080229878426f, 0.0018996729049831629f, 0.0033709111157804728f, 0.0018104276387020946f, 0.0032953780610114336f, 0.003059088485315442f, 0.0028341407887637615f, 0.0020637151319533587f, 0.0018644932424649596f, 0.0020633696112781763f, 0.002750609302893281f, 0.002576395170763135f, 0.003140206215903163f, 0.002131200861185789f, 0.003656113985925913f, 0.004051960539072752f, 0.0017040132079273462f, 0.0023476772475987673f, 0.0035804202780127525f, 0.0030875084921717644f, 0.0015400215052068233f, 0.003655889770016074f, 0.001802828279323876f, 0.0031508204992860556f, 0.0018247711705043912f, 0.0013417638838291168f, 0.003030751133337617f, 0.0022303713485598564f, 0.0020316827576607466f, 0.003313139546662569f, 0.0024448272306472063f, 0.0030995476990938187f, 0.003028071252629161f, 0.0025029091630131006f, 0.0035269083455204964f, 0.002417679876089096f, 0.0021408817265182734f, 0.0024964369367808104f, 0.002879532054066658f, 0.0028243509586900473f, 0.0018852031789720058f, 0.0021559190936386585f, 0.0016341602895408869f, 0.002139716874808073f, 0.001592748798429966f, 0.0017798576736822724f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012479533907026052f, 0.0021422235295176506f, 0.002097126329317689f, 0.0012819570256397128f, 0.0013250393094494939f, 0.0019409020897001028f, 0.0008042269619181752f, 0.0008052549092099071f, 0.0009366826270706952f, 0.0017591376090422273f, 0.0020351421553641558f, 0.0009881244041025639f, 0.0007858402677811682f, 0.0015604214277118444f, 0.0014334643492475152f, 0.0009266884881071746f, 0.0013058925978839397f, 0.001177700120024383f, 0.0009284458355978131f, 0.0011052672052755952f, 0.001127630821429193f, 0.0027898612897843122f, 0.0008294516010209918f, 0.002612258540466428f, 0.0014336125459522009f, 0.0015039731515571475f, 0.001686183619312942f, 0.0013113593449816108f, 0.0006953616975806653f, 0.0014385232934728265f, 0.0011440865928307176f, 0.0013700607232749462f, 0.002715046750381589f, 0.0012791326735168695f, 0.0008602885063737631f, 0.001419081469066441f, 0.0018267054110765457f, 0.0010037666652351618f, 0.0008086260058917105f, 0.0023689107038080692f, 0.001586875063367188f, 0.0009544953354634345f, 0.0015339561505243182f, 0.0019050082191824913f, 0.0007536762859672308f, 0.0010005540680140257f, 0.0011857488425448537f, 0.0014178890269249678f, 0.0015176708111539483f, 0.0008797112386673689f, 0.00201651593670249f, 0.0015486503252759576f, 0.0013935337774455547f, 0.0011009450536221266f, 0.0017104428261518478f, 0.0014161067083477974f, 0.0021192210260778666f, 0.0014847882557660341f, 0.001295393449254334f, 0.0009839326376095414f, 0.0012900769943371415f, 0.0011474777711555362f, 0.0015139165334403515f, 0.0014361458597704768f, 0.000994182308204472f, 0.0010531069710850716f, 0.000981129240244627f, 0.0012181585188955069f, 0.0012421965366229415f, 0.001170324976556003f, 0.0013423663331195712f, 0.001268917229026556f, 0.0011169667122885585f, 0.0014458680525422096f, 0.001245303312316537f, 0.0008344903471879661f, 0.001595961395651102f, 0.0012679477222263813f, 0.0016832498367875814f, 0.0007644071592949331f, 0.0018312972970306873f, 0.002237939741462469f, 0.0013623674167320132f, 0.0015557748265564442f, 0.0012712536845356226f, 0.0013263728469610214f, 0.0010626064613461494f, 0.002220059046521783f, 0.0013343925820663571f, 0.001048463862389326f, 0.0013718957779929042f, 0.0008093749638646841f, 0.0008362647495232522f, 0.00239437073469162f, 0.0022601184900850058f, 0.0015859381528571248f, 0.0007160468958318233f, 0.001278399140574038f, 0.0011670698877424002f, 0.000934008858166635f, 0.0010996743803843856f, 0.0008299075998365879f, 0.0011391907464712858f, 0.001033730455674231f, 0.0009297278011217713f, 0.0019232804188504815f, 0.0021242424845695496f, 0.0016240089898929f, 0.0009016027906909585f, 0.0008270757971331477f, 0.0009137348970398307f, 0.002234941814094782f, 0.0012895921245217323f, 0.0012433084193617105f, 0.0009783812565729022f, 0.0009367302409373224f, 0.0015893604140728712f, 0.0012006373144686222f, 0.0023306873627007008f, 0.0020069770980626345f, 0.0016365599585697055f, 0.0012926134513691068f, 0.0014340433990582824f, 0.0012057687854394317f, 0.0012805735459551215f, 0.0011754723964259028f, 0.0019485839875414968f, 0.0014621410518884659f, 0.0014922765549272299f, 0.0008529677288606763f, 0.0020022194366902113f, 0.0012345704017207026f, 0.0016863325145095587f, 0.0012219577329233289f, 0.0012335377978160977f, 0.0009470732184126973f, 0.0011090688640251756f, 0.0009652234730310738f, 0.001154078170657158f, 0.00087115349015221f, 0.000911531038582325f, 0.002739790128543973f, 0.0008370362920686603f, 0.0010257863905280828f, 0.0010922168148681521f, 0.0008966639870777726f, 0.0016558400820940733f, 0.001208318630233407f, 0.0016134617617353797f, 0.0010688321199268103f, 0.001431673183105886f, 0.0013211226323619485f, 0.0016900787595659494f, 0.0007245932356454432f, 0.0007068043923936784f, 0.002175526227802038f, 0.0018935303669422865f, 0.0012791554909199476f, 0.0010291739599779248f, 0.0017340375343337655f, 0.0030896021053195f, 0.0011169561184942722f, 0.0016665759030729532f, 0.0016927631804719567f, 0.0021846110466867685f, 0.002336135134100914f, 0.0006714958581142128f, 0.0017844763351604342f, 0.0015661747893318534f, 0.0011629522778093815f, 0.0014922419795766473f, 0.0013756369007751346f, 0.0009074695990420878f, 0.0034112443681806326f, 0.0011328967520967126f, 0.0018788313027471304f, 0.0013433251297101378f, 0.0008061203989200294f, 0.001764794928021729f, 0.0008600642322562635f, 0.0011488196905702353f, 0.001166883739642799f, 0.0007341268938034773f, 0.0012133191339671612f, 0.0012494147522374988f, 0.0008744821534492075f, 0.000908794580027461f, 0.0009032730013132095f, 0.0018496682168915868f, 0.0014215671690180898f, 0.0008967911126092076f, 0.001775468117557466f, 0.0010296886321157217f, 0.0009656455949880183f, 0.0007998465443961322f, 0.0018686294788494706f, 0.0010885309893637896f, 0.0017813150770962238f, 0.001759429695084691f, 0.0022125854156911373f, 0.0017970637418329716f, 0.001020644442178309f, 0.000866540358401835f, 0.0016848030500113964f, 0.001018425915390253f, 0.0010110525181517005f, 0.0014819410862401128f, 0.0009620646596886218f, 0.0011888144072145224f, 0.001047021010890603f, 0.0013091242872178555f, 0.0016537937335669994f, 0.00161366059910506f, 0.0012078644940629601f, 0.0013534429017454386f, 0.0009925634367391467f, 0.001016393187455833f, 0.0012307125143706799f, 0.0008587018237449229f, 0.0011913335183635354f, 0.0013644755817949772f, 0.002866867696866393f, 0.0013450036058202386f, 0.0014989034971222281f, 0.00125510070938617f, 0.0009781160624697804f, 0.0012911842204630375f, 0.0011445777490735054f, 0.0012757699005305767f, 0.0009716611821204424f, 0.003452550619840622f, 0.0011570806382223964f, 0.0010614576749503613f, 0.00285573722794652f, 0.0018112616380676627f, 0.002437091199681163f, 0.0011261107865720987f, 0.0009105873177759349f, 0.0019543850794434547f, 0.0007330384105443954f, 0.001173423952423036f, 0.0015672672307118773f, 0.0015421052230522037f, 0.0018477964913472533f, 0.0029368901159614325f, 0.0013259307015687227f, 0.0007157992222346365f, 0.002058441983535886f, 0.001221954938955605f, 0.0010138185461983085f, 0.0014396909391507506f, 0.0017013013130053878f, 0.0016369458753615618f, 0.001055361470207572f, 0.0011351832654327154f, 0.001503671519458294f, 0.0012312906328588724f, 0.0013231764314696193f, 0.001214064541272819f, 0.0014380175853148103f, 0.0013868234818801284f, 0.0015569664537906647f, 0.001174531178548932f, 0.0008414038456976414f, 0.0009384275181218982f, 0.0008528457256034017f, 0.0009496507118456066f, 0.0010874313302338123f, 0.0011109777260571718f, 0.0008436727803200483f, 0.0019222686532884836f, 0.001813709270209074f, 0.0008380534709431231f, 0.0019295704551041126f, 0.002295952057465911f, 0.0014868443831801414f, 0.0013169458834454417f, 0.0019734131637960672f, 0.0013428336242213845f, 0.0015320071252062917f, 0.001677673077210784f, 0.0010153331095352769f, 0.0015889108180999756f, 0.0015613497234880924f, 0.0008429279550909996f, 0.0010635479120537639f, 0.001162941218353808f, 0.0018001385033130646f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002813554834574461f, 0.00341297616250813f, 0.0036366290878504515f, 0.0024910885840654373f, 0.0025001056492328644f, 0.0026297355070710182f, 0.004292430356144905f, 0.005088788457214832f, 0.004875846207141876f, 0.002948101842775941f, 0.004046719055622816f, 0.005342275835573673f, 0.005973083432763815f, 0.005223496817052364f, 0.0027674357406795025f, 0.0047680968418717384f, 0.003358366433531046f, 0.006757991388440132f, 0.005758676212280989f, 0.004968580789864063f, 0.001998045016080141f, 0.0034407698549330235f, 0.003610419575124979f, 0.003058220259845257f, 0.004276551306247711f, 0.0022347592748701572f, 0.003398297121748328f, 0.0035560298711061478f, 0.003837543074041605f, 0.005751929711550474f, 0.0039292071014642715f, 0.0025610928423702717f, 0.0036759390495717525f, 0.006887331604957581f, 0.005014563445001841f, 0.005988004617393017f, 0.004077858291566372f, 0.00469323480501771f, 0.00302601745352149f, 0.004451179876923561f, 0.002181724179536104f, 0.004497883375734091f, 0.00326096941716969f, 0.004447371233254671f, 0.0020818710327148438f, 0.002587331458926201f, 0.0026348698884248734f, 0.002552339341491461f, 0.002965698717162013f, 0.0016739090206101537f, 0.0019047717796638608f, 0.003520854515954852f, 0.00597772654145956f, 0.00431447010487318f, 0.008550937287509441f, 0.0037805831525474787f, 0.002481963252648711f, 0.0028385177720338106f, 0.002511007944121957f, 0.00908528733998537f, 0.001801990089006722f, 0.01055716723203659f, 0.002638572361320257f, 0.0021426063030958176f, 0.0019051118288189173f, 0.0034516428131610155f, 0.0040377723053097725f, 0.0018150382675230503f, 0.0028313882648944855f, 0.004207161255180836f, 0.002800503745675087f, 0.005042756907641888f, 0.004178371746093035f, 0.0014262833865359426f, 0.004901468753814697f, 0.005119751673191786f, 0.005586640443652868f, 0.008906596340239048f, 0.003302038414403796f, 0.002943251980468631f, 0.004222676157951355f, 0.00440507335588336f, 0.0038856680039316416f, 0.0031789783388376236f, 0.004856501240283251f, 0.00564634520560503f, 0.006090568844228983f, 0.0035624720621854067f, 0.0062989224679768085f, 0.0018139244057238102f, 0.0065038385801017284f, 0.00532411877065897f, 0.004283447749912739f, 0.003784843720495701f, 0.0042786262929439545f, 0.0018584124045446515f, 0.004943071864545345f, 0.003592526074498892f, 0.0022598716896027327f, 0.0077645923011004925f, 0.0026269550435245037f, 0.0017212635139003396f, 0.004847947042435408f, 0.004132112022489309f, 0.004904862493276596f, 0.0027135449927300215f, 0.0027670806739479303f, 0.002468146150931716f, 0.0016679777763783932f, 0.0028267826419323683f, 0.0078885518014431f, 0.0043661827221512794f, 0.002577573759481311f, 0.006349849049001932f, 0.003976232372224331f, 0.004132975824177265f, 0.005128766875714064f, 0.005664767697453499f, 0.0026252209208905697f, 0.0026109616737812757f, 0.004805147647857666f, 0.009047028608620167f, 0.0046210684813559055f, 0.0029510485474020243f, 0.00397399952635169f, 0.0021277591586112976f, 0.003551559755578637f, 0.00326617737300694f, 0.0025988388806581497f, 0.0015965939965099096f, 0.004420780576765537f, 0.004724082071334124f, 0.0035722162574529648f, 0.0054120165295898914f, 0.005216265097260475f, 0.005307340528815985f, 0.0043816836550831795f, 0.003181417938321829f, 0.0018957075662910938f, 0.005761016625910997f, 0.0021675373427569866f, 0.003677756292745471f, 0.004679982550442219f, 0.0038142199628055096f, 0.007551067974418402f, 0.004116678610444069f, 0.005262966733425856f, 0.0043809362687170506f, 0.0030062911100685596f, 0.004786596167832613f, 0.0024626818485558033f, 0.001687559299170971f, 0.007189128547906876f, 0.003823426552116871f, 0.0013302653096616268f, 0.0048995777033269405f, 0.0041026039980351925f, 0.0047600907273590565f, 0.0019955153111368418f, 0.002892092801630497f, 0.005716974847018719f, 0.002807595068588853f, 0.0055274502374231815f, 0.0033689711708575487f, 0.005682875867933035f, 0.003949380945414305f, 0.005141948815435171f, 0.0027513920795172453f, 0.0033172541297972202f, 0.0031214659102261066f, 0.0027234347071498632f, 0.005556510295718908f, 0.004210734739899635f, 0.0025932141579687595f, 0.003437158651649952f, 0.002870486117899418f, 0.0037485582288354635f, 0.004873850382864475f, 0.005597569048404694f, 0.004502767231315374f, 0.004016601946204901f, 0.002040646970272064f, 0.005145297851413488f, 0.004463421646505594f, 0.005485926289111376f, 0.007214844226837158f, 0.004668206442147493f, 0.0032800398766994476f, 0.003761333879083395f, 0.0024152840487658978f, 0.0026572230271995068f, 0.0032306546345353127f, 0.0032574215438216925f, 0.00659255450591445f, 0.004274904262274504f, 0.005843949504196644f, 0.0021190131083130836f, 0.002402934245765209f, 0.004280412569642067f, 0.0026326614897698164f, 0.005272369831800461f, 0.00447036512196064f, 0.004252553451806307f, 0.00486769201233983f, 0.0017804232193157077f, 0.0054017030633986f, 0.005845758132636547f, 0.003930974751710892f, 0.004664608743041754f, 0.0034726134035736322f, 0.0037221205420792103f, 0.006890539545565844f, 0.003447256051003933f, 0.004620490130037069f, 0.007186759263277054f, 0.004868591204285622f, 0.008422172628343105f, 0.002005560789257288f, 0.005297177005559206f, 0.0020224221516400576f, 0.0066972956992685795f, 0.0034661300014704466f, 0.006610541604459286f, 0.0020285118371248245f, 0.0032016548793762922f, 0.0049871401861310005f, 0.007598209660500288f, 0.004790130537003279f, 0.004651734139770269f, 0.005683363415300846f, 0.005258879158645868f, 0.005986479576677084f, 0.005122215952724218f, 0.0019507005345076323f, 0.002777739195153117f, 0.0035197874531149864f, 0.004520213231444359f, 0.005237836390733719f, 0.0022633131593465805f, 0.003619955386966467f, 0.0025544739328324795f, 0.002149696461856365f, 0.0024037521798163652f, 0.0030808853916823864f, 0.003585485043004155f, 0.002094835974276066f, 0.0038655996322631836f, 0.003571552224457264f, 0.008212357759475708f, 0.003867881139740348f, 0.0030454089865088463f, 0.003446018323302269f, 0.003642747411504388f, 0.005138153675943613f, 0.005526567343622446f, 0.004585815593600273f, 0.0037086030934005976f, 0.005737025290727615f, 0.002172748325392604f, 0.004490012302994728f, 0.007519073784351349f, 0.0033319939393550158f, 0.0034328503534197807f, 0.003429766744375229f, 0.0028122926596552134f, 0.00560142332687974f, 0.002317186910659075f, 0.007537657395005226f, 0.0036938900593668222f, 0.004053464159369469f, 0.0046551707200706005f, 0.0029320544563233852f, 0.0023927700240164995f, 0.004830940160900354f, 0.004327407572418451f, 0.006098432932049036f, 0.0017910863971337676f, 0.004633065313100815f, 0.004891376942396164f, 0.004406455438584089f, 0.0037608547136187553f, 0.005375822074711323f, 0.003385176183655858f, 0.003207084257155657f, 0.0046646264381706715f, 0.0063181351870298386f, 0.00461312010884285f, 0.006298961583524942f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0014760500052943826f, 0.0012691507581621408f, 0.0010701995342969894f, 0.0015964129706844687f, 0.0010937455808743834f, 0.0011624002363532782f, 0.0015035051619634032f, 0.001165871974080801f, 0.001141051296144724f, 0.0011054488131776452f, 0.0014684103662148118f, 0.0015121279284358025f, 0.0017583573935553432f, 0.0015533262630924582f, 0.0011435261694714427f, 0.0021877335384488106f, 0.0015700096264481544f, 0.001932104118168354f, 0.0020908494479954243f, 0.0010874802246689796f, 0.0010711299255490303f, 0.0020267381332814693f, 0.001796707627363503f, 0.001313661807216704f, 0.0010438896715641022f, 0.0010809600353240967f, 0.0011977961985394359f, 0.0012724197003990412f, 0.0016964504029601812f, 0.0011859132209792733f, 0.0012212238507345319f, 0.0011801781365647912f, 0.0011614974355325103f, 0.0021825141739100218f, 0.0016167497960850596f, 0.0011519502149894834f, 0.0025031634140759706f, 0.0014111190102994442f, 0.0015010307542979717f, 0.0011695283465087414f, 0.001763739506714046f, 0.001136051258072257f, 0.0012241919757798314f, 0.0011281208135187626f, 0.0012075724080204964f, 0.0015315688215196133f, 0.0011680483585223556f, 0.001211033551953733f, 0.001535279443487525f, 0.0012165587395429611f, 0.001740962383337319f, 0.0013948231935501099f, 0.0011420275550335646f, 0.0012814824003726244f, 0.0013941213255748153f, 0.0011662429897114635f, 0.0013989225262776017f, 0.0012105172500014305f, 0.0020299970638006926f, 0.001766755129210651f, 0.001923327916301787f, 0.001737231737934053f, 0.0018645556410774589f, 0.001418704749085009f, 0.0011292073177173734f, 0.0017355179879814386f, 0.0016873092390596867f, 0.002311229007318616f, 0.0011133785592392087f, 0.0011713666608557105f, 0.00109785923268646f, 0.001386934658512473f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0002928556059487164f, 0.00035146655864082277f, 0.0003450751828495413f, 0.00039569419459439814f, 0.000460740237031132f, 0.0003027446218766272f, 0.0002471340703777969f, 0.00020394014427438378f, 0.00028051924891769886f, 0.00023687718203291297f, 0.0003140602493658662f, 0.00022697134409099817f, 0.00039344310062006116f, 0.0004027985269203782f, 0.0002817647473420948f, 0.00025523791555315256f, 0.00032811719574965537f, 0.00048230247921310365f, 0.00035457624471746385f, 0.00023972745111677796f, 0.00032853434095159173f, 0.0002740653872024268f, 0.0002602181339170784f, 0.00027232590946368873f, 0.0003089997626375407f, 0.00025873188860714436f, 0.0003474785480648279f, 0.00022405698837246746f, 0.0002376343763899058f, 0.00033696333412081003f, 0.00028343478334136307f, 0.00028749206103384495f, 0.0002404513506917283f, 0.00024334310728590935f, 0.00037607282865792513f, 0.0002823719405569136f, 0.00026846755645237863f, 0.00035829495755024254f, 0.00027244328521192074f, 0.00028151494916528463f, 0.00032302862382493913f, 0.00025050784461200237f, 0.00034858001163229346f, 0.00027639998006634414f, 0.0003403987502679229f, 0.0003329436294734478f, 0.00027330199372954667f, 0.00048352108569815755f, 0.00024089106591418386f, 0.00027110520750284195f, 0.00027177133597433567f, 0.00026187143521383405f, 0.00026003801031038165f, 0.0003293385962024331f, 0.00029547075973823667f, 0.0002184961485909298f, 0.00029202335281297565f, 0.0003211872244719416f, 0.00023716047871857882f, 0.00039911214844323695f, 0.000238548731431365f, 0.00027416052762418985f, 0.0003032847889699042f, 0.00023821387731004506f, 0.00031377619598060846f, 0.00025704025756567717f, 0.00022678019013255835f, 0.00036101380828768015f, 0.0003853665548376739f, 0.00027988708461634815f, 0.00027036230312660336f, 0.00025689738686196506f, 0.00025595747865736485f, 0.00030606245854869485f, 0.0002812880848068744f, 0.00021001689310651273f, 0.0003021745360456407f, 0.0003341817937325686f, 0.00040644200635142624f, 0.0003069487283937633f, 0.00042707601096481085f, 0.00033545089536346495f, 0.0002987767802551389f, 0.0003573928552214056f, 0.00023482379037886858f, 0.00021049824135843664f, 0.0003217880439478904f, 0.0002607974165584892f, 0.00046456180280074477f, 0.0002925099979620427f, 0.0002647967776283622f, 0.0002473525528330356f, 0.0002830724115483463f, 0.0003414986713323742f, 0.0002646871726028621f, 0.0003142973582725972f, 0.00026890155277214944f, 0.0002472301130183041f, 0.0002754849847406149f, 0.00026180624263361096f, 0.0002886556903831661f, 0.0003840518184006214f, 0.00033377291401848197f, 0.00033149588853120804f, 0.0002357126650167629f, 0.0002888240560423583f, 0.0002427979197818786f, 0.00027499525458551943f, 0.00027872377540916204f, 0.00027263115043751895f, 0.0002678269811440259f, 0.00023154546215664595f, 0.0002599770959932357f, 0.0002932159695774317f, 0.00027301753289066255f, 0.00028725623269565403f, 0.00024216419842559844f, 0.0002215757267549634f, 0.00031631538877263665f, 0.00030094163957983255f, 0.00031021874747239053f, 0.0003389820922166109f, 0.00034611605224199593f, 0.00030452266219072044f, 0.00027561633032746613f, 0.0003393922816030681f, 0.00029980417457409203f, 0.000273797195404768f, 0.00022773491218686104f, 0.0003836004761978984f, 0.00028212618781253695f, 0.00030975285335443914f, 0.0003394184750504792f, 0.00024327944265678525f, 0.00026911249733529985f, 0.00032285103225149214f, 0.00024358302471227944f, 0.00028615494375117123f, 0.00025566070689819753f, 0.0002702927158679813f, 0.00022681451810058206f, 0.0002766715770121664f, 0.00023479523952119052f, 0.00026420201174914837f, 0.0002693941933102906f, 0.000242112873820588f, 0.00037380875437520444f, 0.00026040957891382277f, 0.0003374035586602986f, 0.0003313086344860494f, 0.0003178007318638265f, 0.0003324500285089016f, 0.0002741091884672642f, 0.00022125575924292207f, 0.00025720655685290694f, 0.00031723352731205523f, 0.000278950814390555f, 0.0002697242598515004f, 0.0002836362982634455f, 0.00030297046760097146f, 0.0003013706882484257f, 0.00022618456569034606f, 0.00025170602020807564f, 0.00029644285677932203f, 0.000381836318410933f, 0.00035648338962346315f, 0.0002228350203949958f, 0.0002226200158474967f, 0.0004112404421903193f, 0.0003212011361028999f, 0.0002503134310245514f, 0.0003273300244472921f, 0.00024573414702899754f, 0.000218642147956416f, 0.0003111104015260935f, 0.00036300718784332275f, 0.00029850128339603543f, 0.0002081985876429826f, 0.0004230468475725502f, 0.0002795376640278846f, 0.0002681512269191444f, 0.00022121921938378364f, 0.0002461453259456903f, 0.0003129355900455266f, 0.00036995625123381615f, 0.00026426010299474f, 0.0003246275009587407f, 0.0002423057158011943f, 0.0003756034711841494f, 0.00030463060829788446f, 0.0002551008074078709f, 0.0002913718344643712f, 0.00026237592101097107f, 0.00036370058660395443f, 0.00022742096916772425f, 0.0002698015596251935f, 0.00036257924512028694f, 0.0003246322739869356f, 0.0003663195238914341f, 0.00021585894864983857f, 0.000389994092984125f, 0.00028200328233651817f, 0.00032135186484083533f, 0.00043424940668046474f, 0.0002803228853736073f, 0.0003104826027993113f, 0.0003753132768906653f, 0.00039224253850989044f, 0.0002535482926759869f, 0.00034749682527035475f, 0.00028284042491577566f, 0.000310739065753296f, 0.0003161965578328818f, 0.00038262034649960697f, 0.00025258949608542025f, 0.00027140587917529047f, 0.00023555621737614274f, 0.0004188024904578924f, 0.00024766926071606576f, 0.0003000727738253772f, 0.00028573686722666025f, 0.00026997001259587705f, 0.0003716848441399634f, 0.0004112175665795803f, 0.0004676708485931158f, 0.0003170976124238223f, 0.0002908763417508453f, 0.00031142844818532467f, 0.00023936203797347844f, 0.00025273553910665214f, 0.00022942110081203282f, 0.0002561149885877967f, 0.0003641498333308846f, 0.0002859650703612715f, 0.0002801136579364538f, 0.00031680078245699406f, 0.0002615418052300811f, 0.00026273378171026707f, 0.0002766985562629998f, 0.0002293345023645088f, 0.00023467608843930066f, 0.00031122539076022804f, 0.00022301854914985597f, 0.00036757017369382083f, 0.0003357651294209063f, 0.0003149871772620827f, 0.00026371367857791483f, 0.0002822556416504085f, 0.00035335475695319474f, 0.0002861190296243876f, 0.0002843238471541554f, 0.00036431706394068897f, 0.00035333726555109024f, 0.0003351735358592123f, 0.0003535390424076468f, 0.00024770377785898745f, 0.0002772541483864188f, 0.0004534774925559759f, 0.0002143642632290721f, 0.00026246727793477476f, 0.00033793156035244465f, 0.00034343957668170333f, 0.00034020416205748916f, 0.00030167706427164376f, 0.0002686305670067668f, 0.00032301867031492293f, 0.00034636081545613706f, 0.0003180829808115959f, 0.00025939353508874774f, 0.00027848625904880464f, 0.0003087297372985631f, 0.0002949323388747871f, 0.0003515496791806072f, 0.00029863452073186636f, 0.0002584998437669128f, 0.0002944073348771781f, 0.00031661137472838163f, 0.00023889023577794433f, 0.00036958669079467654f, 0.00031352631049230695f, 0.0003161548520438373f, 0.0002434560883557424f, 0.00034076074371114373f, 0.0002777900081127882f, 0.00022149102005641907f, 0.0002950006164610386f, 0.00022407184587791562f, 0.00025564804673194885f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010968141723424196f, 0.0010484851663932204f, 0.0008727136300876737f, 0.0004142169782426208f, 0.001043097348883748f, 0.0006900584558025002f, 0.0007023893413133919f, 0.0006819113623350859f, 0.0005822332459501922f, 0.0004964913241565228f, 0.0014983154833316803f, 0.000890811556018889f, 0.0007971308659762144f, 0.0006874367827549577f, 0.0005126140313223004f, 0.0007436021696776152f, 0.0006429208442568779f, 0.00038482461241073906f, 0.0005880814860574901f, 0.0007198740495368838f, 0.0003721203247550875f, 0.00041159792453981936f, 0.0006952250842005014f, 0.0005601761513389647f, 0.0006174036534503102f, 0.00043610591092146933f, 0.0006657943595200777f, 0.0005977204418741167f, 0.000949270382989198f, 0.0006138357566669583f, 0.000517593405675143f, 0.0006095897988416255f, 0.0007014552829787135f, 0.00044765538768842816f, 0.000398099742596969f, 0.0005056082154624164f, 0.000446164543973282f, 0.0004270023200660944f, 0.0008267361554317176f, 0.0004146006249357015f, 0.0003965264477301389f, 0.0005634056287817657f, 0.0005473726196214557f, 0.000540613429620862f, 0.0005279817851260304f, 0.0004773314867634326f, 0.0006073373951949179f, 0.0007732297526672482f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010239917319267988f, 0.0004500737995840609f, 0.0005223563057370484f, 0.001154856407083571f, 0.001221516984514892f, 0.001249414519406855f, 0.0016843731282278895f, 0.0007766634807921946f, 0.0005863018450327218f, 0.000566903967410326f, 0.00094112369697541f, 0.0014131360221654177f, 0.001846429193392396f, 0.0006736516370438039f, 0.0007589481538161635f, 0.0008558739791624248f, 0.0005422660033218563f, 0.0019468205282464623f, 0.0005893479683436453f, 0.0005198862636461854f, 0.0005828211433254182f, 0.0011669087689369917f, 0.0006314761703833938f, 0.0008425872656516731f, 0.0009462927118875086f, 0.000660168007016182f, 0.0007758556748740375f, 0.0011258971644565463f, 0.0007789527298882604f, 0.0006455189432017505f, 0.0009437145781703293f, 0.001097516855224967f, 0.0009505456546321511f, 0.0007793108234182f, 0.001349864760413766f, 0.0010197320953011513f, 0.0011306152446195483f, 0.0009489036747254431f, 0.0011109499027952552f, 0.001310453750193119f, 0.0005341024952940643f, 0.0006539794849231839f, 0.0013660291442647576f, 0.0007346199126914144f, 0.0005544915911741555f, 0.0006173757719807327f, 0.0010113336611539125f, 0.0006441993755288422f, 0.0005772198783233762f, 0.001342289731837809f, 0.0008520184201188385f, 0.0010743755847215652f, 0.001062367926351726f, 0.0008616055711172521f, 0.0013750412035733461f, 0.0005379326175898314f, 0.0006353274220600724f, 0.000719259143806994f, 0.0005313059664331377f, 0.0009588506072759628f, 0.0008732127607800066f, 0.0005754873855039477f, 0.0017084089340642095f, 0.0006827195757068694f, 0.001102619105949998f, 0.0010483743390068412f, 0.001123945228755474f, 0.0011257455917075276f, 0.0007257806719280779f, 0.0012570831459015608f, 0.0009034463437274098f, 0.0016912018181756139f, 0.0012104414636269212f, 0.0010551739251241088f, 0.0010598410153761506f, 0.0010353734251111746f, 0.0015522933099418879f, 0.0012915184488520026f, 0.0008752321009524167f, 0.0011645258637145162f, 0.0009064714540727437f, 0.0008478306699544191f, 0.0010159927187487483f, 0.001334813074208796f, 0.0015044657047837973f, 0.0007402722258120775f, 0.0008957173558883369f, 0.0007342031458392739f, 0.0009749213932082057f, 0.0011826343834400177f, 0.0006122702616266906f, 0.0015333089977502823f, 0.0009559999452903867f, 0.0005783540545962751f, 0.0006260680384002626f, 0.0011284281499683857f, 0.0014224958140403032f, 0.0005380206857807934f, 0.0007837655721232295f, 0.0011234008707106113f, 0.000931191083509475f, 0.0012681670486927032f, 0.0007875096052885056f, 0.0007401271723210812f, 0.0006869471399113536f, 0.0021800692193210125f, 0.0010637969244271517f, 0.0006111691473051906f, 0.0005380910588428378f, 0.0024729662109166384f, 0.0005712208803743124f, 0.000905941182281822f, 0.0008392640156671405f, 0.001025965204462409f, 0.000763626245316118f, 0.0010764009784907103f, 0.0008173278765752912f, 0.0006027352064847946f, 0.0014487872831523418f, 0.0007624534191563725f, 0.0009383226279169321f, 0.001176304416731f, 0.001482590101659298f, 0.0007875292212702334f, 0.0007961482042446733f, 0.0007576473290100694f, 0.0011603613384068012f, 0.0009259941871277988f, 0.0010120614897459745f, 0.0009134092833846807f, 0.0012520664604380727f, 0.0006457551498897374f, 0.000528855191078037f, 0.0004954205942340195f, 0.0007192540215328336f, 0.0007568529690615833f, 0.0007950481958687305f, 0.0005463182460516691f, 0.0007774108089506626f, 0.0006998346070758998f, 0.0011824904941022396f, 0.0006581866764463484f, 0.0005160013097338378f, 0.0013799067819491029f, 0.0009681274532340467f, 0.0018779505044221878f, 0.0007138064247556031f, 0.0006311522447504103f, 0.0006741178222000599f, 0.0008345864480361342f, 0.0007225744193419814f, 0.0009975015418604016f, 0.0008998008561320603f, 0.0011108055477961898f, 0.0005889235180802643f, 0.00038905959809198976f, 0.0009715725900605321f, 0.0005828524590469897f, 0.0008950285846367478f, 0.0009014270035549998f, 0.000791730941273272f, 0.0005211576353758574f, 0.0008724572253413498f, 0.0011113123036921024f, 0.0007540725055150688f, 0.000605925393756479f, 0.0005643324111588299f, 0.0007773868856020272f, 0.0007734153186902404f, 0.0011260166065767407f, 0.0005104397423565388f, 0.0005110597121529281f, 0.001067848177626729f, 0.0008878476219251752f, 0.0005622312310151756f, 0.0007489671115763485f, 0.0007718494744040072f, 0.0012925106566399336f, 0.0009742593974806368f, 0.0006628212868236005f, 0.0014887516153976321f, 0.001535697840154171f, 0.0006686687120236456f, 0.0006705258856527507f, 0.0013158596120774746f, 0.0008279303438030183f, 0.0011478166561573744f, 0.0017830249853432178f, 0.0007060497882775962f, 0.0012549470411613584f, 0.0009422635193914175f, 0.000864790694322437f, 0.0006901004817336798f, 0.001155771198682487f, 0.0005551552749238908f, 0.0004756081907544285f, 0.0014860494993627071f, 0.0009385066805407405f, 0.0014816856710240245f, 0.0008197157876566052f, 0.0007648314931429923f, 0.001033805892802775f, 0.0007102555246092379f, 0.0010164924897253513f, 0.000699259340763092f, 0.0008739404729567468f, 0.0006856169202364981f, 0.0012212067376822233f, 0.0011200698791071773f, 0.001405686722137034f, 0.0016065003583207726f, 0.0011261118343099952f, 0.0008107790490612388f, 0.0005842123064212501f, 0.0006809218320995569f, 0.0009241466177627444f, 0.0013236402301117778f, 0.00041353265987709165f, 0.0005822596722282469f, 0.0012696513440459967f, 0.0007608171436004341f, 0.0006673329626210034f, 0.0010623158887028694f, 0.0011000712402164936f, 0.0006527765071950853f, 0.0005023307166993618f, 0.0011523746652528644f, 0.001235653180629015f, 0.0005295457085594535f, 0.0013826190261170268f, 0.0012595034204423428f, 0.0008617391576990485f, 0.0007685433956794441f, 0.0007676224340684712f, 0.0008641360909678042f, 0.0010137526551261544f, 0.000756904250010848f, 0.001244441489689052f, 0.0008904425194486976f, 0.001191109186038375f, 0.0008631855598650873f, 0.00086508400272578f, 0.0006936817662790418f, 0.0015412832144647837f, 0.0013197411317378283f, 0.000767995894420892f, 0.0006437005358748138f, 0.0013418605085462332f, 0.0008817539201118052f, 0.001265276107005775f, 0.0005275541334412992f, 0.0006125131039880216f, 0.0018547510262578726f, 0.0007999507361091673f, 0.0013193966588005424f, 0.0010313361417502165f, 0.0017675510607659817f, 0.000673177361022681f, 0.0004750091175083071f, 0.000914715405087918f, 0.0006640670471824706f, 0.0008998348494060338f, 0.000877072277944535f, 0.0007277635158970952f, 0.0010770639637485147f, 0.0006828437908552587f, 0.0016380262095481157f, 0.0009537816513329744f, 0.0007921226788312197f, 0.0013447483070194721f, 0.0006719298544339836f, 0.0009101852192543447f, 0.0020099293906241655f, 0.0010102181695401669f, 0.0009533275733701885f, 0.0007297280826605856f, 0.0009690140141174197f, 0.0012745686108246446f, 0.00127918622456491f, 0.0005802286323159933f, 0.0006283235852606595f, 0.0022674764040857553f, 0.002161251148208976f, 0.0008197561837732792f, 0.0005523590953089297f, 0.0011583906598389149f, 0.0011313077993690968f, 0.0008203992038033903f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004946772940456867f, 0.0015688127605244517f, 0.010463356971740723f, 0.0045384070836007595f, 0.005316828843206167f, 0.0037586530670523643f, 0.0028802359011024237f, 0.001687805401161313f, 0.0027171552646905184f, 0.00902772881090641f, 0.011755825951695442f, 0.0051572746597230434f, 0.0033088489435613155f, 0.0025540762580931187f, 0.003392308484762907f, 0.004758519120514393f, 0.002678454155102372f, 0.005734254606068134f, 0.005398795008659363f, 0.004634339828044176f, 0.0029590707272291183f, 0.002781820250675082f, 0.001818196033127606f, 0.008548472076654434f, 0.00876334123313427f, 0.001558751449920237f, 0.003537362441420555f, 0.00799985509365797f, 0.008018460124731064f, 0.004837446380406618f, 0.0032312411349266768f, 0.0024189550895243883f, 0.0031355980318039656f, 0.004424086771905422f, 0.006194152869284153f, 0.0038258759304881096f, 0.004065446089953184f, 0.004541529808193445f, 0.00209042034111917f, 0.004692743066698313f, 0.0032871561124920845f, 0.0033101928420364857f, 0.0035926131531596184f, 0.004461389034986496f, 0.0034356394317001104f, 0.005584667902439833f, 0.005508758127689362f, 0.0028604045510292053f, 0.0016792028909549117f, 0.003327687969431281f, 0.001820434583351016f, 0.004328265320509672f, 0.009059506468474865f, 0.0026912621688097715f, 0.0037385837640613317f, 0.004478518385440111f, 0.009637867100536823f, 0.010670841671526432f, 0.0020078513771295547f, 0.0035449599381536245f, 0.005962273571640253f, 0.003855322254821658f, 0.0033573289401829243f, 0.0033108966890722513f, 0.0029522469267249107f, 0.008669472299516201f, 0.002538577886298299f, 0.0036674831062555313f, 0.0020012459717690945f, 0.004407020751386881f, 0.0018924461910501122f, 0.002322091255337f, 0.0022396438289433718f, 0.0027893180958926678f, 0.0028054823633283377f, 0.004185625351965427f, 0.00405261293053627f, 0.005616440903395414f, 0.0030587329529225826f, 0.007013590540736914f, 0.008498970419168472f, 0.001491236500442028f, 0.0033139409497380257f, 0.007014890667051077f, 0.002768168691545725f, 0.0024269972927868366f, 0.002833693753927946f, 0.005678344052284956f, 0.0070958794094622135f, 0.0058244261890649796f, 0.0031812326051294804f, 0.0035024669487029314f, 0.005292702000588179f, 0.0053830877877771854f, 0.004178151488304138f, 0.0037859217263758183f, 0.003559360047802329f, 0.004220397211611271f, 0.008411785587668419f, 0.004115323070436716f, 0.0034774502273648977f, 0.005224353633821011f, 0.0015703821554780006f, 0.0015419783303514123f, 0.0016966639086604118f, 0.003084216732531786f, 0.0057698870077729225f, 0.0025823775213211775f, 0.0032432659063488245f, 0.0034483440686017275f, 0.0023638636339455843f, 0.003414805280044675f, 0.0033202392514795065f, 0.004621981177479029f, 0.006775685120373964f, 0.0037495300639420748f, 0.003114696592092514f, 0.002302210545167327f, 0.002684007165953517f, 0.006530528422445059f, 0.007410252466797829f, 0.004980399273335934f, 0.006070822011679411f, 0.0016992250457406044f, 0.0027434597723186016f, 0.002863609232008457f, 0.002511459169909358f, 0.0034336354583501816f, 0.0019290813943371177f, 0.005782288033515215f, 0.007395435590296984f, 0.0015074355760589242f, 0.012786982581019402f, 0.0015308504225686193f, 0.0028399131260812283f, 0.009159808047115803f, 0.004186299629509449f, 0.0038706890773028135f, 0.007886683568358421f, 0.0023888181895017624f, 0.004204110242426395f, 0.006894818507134914f, 0.0036551347002387047f, 0.0044438946060836315f, 0.007077658548951149f, 0.00575680797919631f, 0.008695298805832863f, 0.004136647097766399f, 0.004429731518030167f, 0.01338296290487051f, 0.0031354136299341917f, 0.005081489682197571f, 0.006297297775745392f, 0.005703918170183897f, 0.0017828106647357345f, 0.004460234194993973f, 0.0031952562276273966f, 0.004923103377223015f, 0.002087014028802514f, 0.001994553953409195f, 0.005537788849323988f, 0.002141837729141116f, 0.0012431711656972766f, 0.00645102746784687f, 0.0014257370494306087f, 0.0028356160037219524f, 0.003923638258129358f, 0.0023476802743971348f, 0.009629445150494576f, 0.0028562794905155897f, 0.009759298525750637f, 0.004647266585379839f, 0.006164786405861378f, 0.007612920366227627f, 0.00317975040525198f, 0.0043892706744372845f, 0.002559677232056856f, 0.002141932724043727f, 0.011920325458049774f, 0.005588138476014137f, 0.006249560043215752f, 0.003017479320988059f, 0.004176638089120388f, 0.0024686320684850216f, 0.00578141026198864f, 0.004482408054172993f, 0.0037247019354254007f, 0.0032131350599229336f, 0.0036133360117673874f, 0.006365673616528511f, 0.004763706121593714f, 0.008409794420003891f, 0.00791912991553545f, 0.0031734516378492117f, 0.0038156991358846426f, 0.011220399290323257f, 0.0028753536753356457f, 0.0034954219590872526f, 0.005457407794892788f, 0.009426232427358627f, 0.004060348030179739f, 0.008928844705224037f, 0.00219424138776958f, 0.007449991535395384f, 0.0033712941221892834f, 0.002160760574042797f, 0.001789915026165545f, 0.008678215555846691f, 0.0016837265575304627f, 0.00270243757404387f, 0.010817205533385277f, 0.001637522829696536f, 0.0028643629048019648f, 0.0013650705805048347f, 0.005821200553327799f, 0.0042152442038059235f, 0.0050835576839745045f, 0.00174299580976367f, 0.0035650604404509068f, 0.003690093057230115f, 0.0019170292653143406f, 0.004774054046720266f, 0.0056089600548148155f, 0.004063440021127462f, 0.004462888464331627f, 0.0038701852317899466f, 0.001608730759471655f, 0.0071444325149059296f, 0.0018998596351593733f, 0.002286317525431514f, 0.0022832266986370087f, 0.004704569466412067f, 0.0022652072366327047f, 0.007339276373386383f, 0.008067606016993523f, 0.005306260194629431f, 0.001771571347489953f, 0.005119798239320517f, 0.00229153735563159f, 0.0012720233062282205f, 0.0038887422997504473f, 0.00320994108915329f, 0.004302568268030882f, 0.004608924500644207f, 0.0029905657283961773f, 0.001787786721251905f, 0.009383363649249077f, 0.0023913460317999125f, 0.002238168381154537f, 0.007303227204829454f, 0.0068749431520700455f, 0.0015796604566276073f, 0.004871681798249483f, 0.003963025286793709f, 0.004422403406351805f, 0.008315976709127426f, 0.002087098080664873f, 0.007378747221082449f, 0.005201602820307016f, 0.009622630663216114f, 0.005755205173045397f, 0.008909789845347404f, 0.002190991071984172f, 0.0019180246163159609f, 0.0066428217105567455f, 0.004058818332850933f, 0.005165426526218653f, 0.009467750787734985f, 0.004312094766646624f, 0.002522540744394064f, 0.002480607246980071f, 0.00753420265391469f, 0.0035499969962984324f, 0.007005773019045591f, 0.003909068647772074f, 0.005901428870856762f, 0.001886098994873464f, 0.003622805466875434f, 0.0020803678780794144f, 0.004041159991174936f, 0.005797665566205978f, 0.0023922338150441647f, 0.005326059181243181f, 0.008354810066521168f, 0.0016618254594504833f, 0.003423150395974517f, 0.0035210372880101204f, 0.005384305026382208f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017834798200055957f, 0.0012364306021481752f, 0.0012980606406927109f, 0.001148660434409976f, 0.0010566147975623608f, 0.001429049065336585f, 0.0014194949762895703f, 0.0011349349515512586f, 0.0014192672679200768f, 0.0011355590540915728f, 0.001519993762485683f, 0.0012448520865291357f, 0.0015516543062403798f, 0.001425722031854093f, 0.0011434238404035568f, 0.0011198309948667884f, 0.0011055013164877892f, 0.001176736201159656f, 0.0010112373856827617f, 0.0011884310515597463f, 0.001648290315642953f, 0.0013285817112773657f, 0.0018421475542709231f, 0.0011242649052292109f, 0.0018590781837701797f, 0.0011398032074794173f, 0.0011493393685668707f, 0.0014919377863407135f, 0.0016028473619371653f, 0.0011155024403706193f, 0.0011185149196535349f, 0.0010844486532732844f, 0.0010834583081305027f, 0.00113864173181355f, 0.0012250194558873773f, 0.0013758426066488028f, 0.0014544558944180608f, 0.0018745900597423315f, 0.0022431660909205675f, 0.0021082183811813593f, 0.0014101900160312653f, 0.0011920457473024726f, 0.0020930124446749687f, 0.0011334713781252503f, 0.0013914820738136768f, 0.0012224670499563217f, 0.0010714546078816056f, 0.0012101558968424797f, 0.0011206098133698106f, 0.0016822739271447062f, 0.0011235882993787527f, 0.0011221085442230105f, 0.0010999112855643034f, 0.0011802376247942448f, 0.001949220197275281f, 0.001135560916736722f, 0.0012495856499299407f, 0.0015313004842028022f, 0.0011013828916475177f, 0.0016722296131774783f, 0.0018937065033242106f, 0.0011442096438258886f, 0.0017933003837242723f, 0.0015042185550555587f, 0.0011572879739105701f, 0.0015442798612639308f, 0.0014440972590819001f, 0.001648455741815269f, 0.001136457547545433f, 0.0015353438211604953f, 0.0011591730872169137f, 0.0014277639565989375f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000252715457463637f, 0.00027311829035170376f, 0.00026364397490397096f, 0.00033080176217481494f, 0.0005009599844925106f, 0.00035614127409644425f, 0.00023087840236257762f, 0.0005092524224892259f, 0.00022668165911454707f, 0.0002383619430474937f, 0.00022534279560204595f, 0.0002421974204480648f, 0.00021101893798913807f, 0.00021632565767504275f, 0.000278239807812497f, 0.00025411907699890435f, 0.0003377402026671916f, 0.0002214624546468258f, 0.00033183032064698637f, 0.00020681183377746493f, 0.00021054025273770094f, 0.0002206461358582601f, 0.00026854415773414075f, 0.000280701118754223f, 0.00026382613577879965f, 0.0002309383562533185f, 0.0002454312634654343f, 0.0002360907819820568f, 0.0002946074237115681f, 0.0002541734429541975f, 0.00026218456332571805f, 0.0002630006638355553f, 0.00023290760873351246f, 0.00034050687099806964f, 0.00022780837025493383f, 0.000244326947722584f, 0.0003450640360824764f, 0.00021282922534737736f, 0.0002634566044434905f, 0.000276307255262509f, 0.0003001482109539211f, 0.00023417836928274482f, 0.0002494643267709762f, 0.000296702201012522f, 0.000252687867032364f, 0.00021264558017719537f, 0.00025757428375072777f, 0.00030228376272134483f, 0.0003332314663566649f, 0.0003119872126262635f, 0.00020370425772853196f, 0.00025149964494630694f, 0.0003096068976446986f, 0.0002693531569093466f, 0.0003249172295909375f, 0.00036207394441589713f, 0.00028814864344894886f, 0.00026432969025336206f, 0.00031265377765521407f, 0.00020971523190382868f, 0.0003409705823287368f, 0.00027205763035453856f, 0.00023465065169148147f, 0.00021378301607910544f, 0.0003239201905671507f, 0.00028089183615520597f, 0.00028531128191389143f, 0.000373190880054608f, 0.0003338684618938714f, 0.00021433028450701386f, 0.0003790078917518258f, 0.0002280236512888223f, 0.00025787309277802706f, 0.00029151467606425285f, 0.00022375694243237376f, 0.00023826109827496111f, 0.0002658805751707405f, 0.00033908552723005414f, 0.00028333967202343047f, 0.0002574610698502511f, 0.0002860742388293147f, 0.0003394186496734619f, 0.00033578352304175496f, 0.00037099362816661596f, 0.00027472234796732664f, 0.00023828718985896558f, 0.00020578459952957928f, 0.00047871493734419346f, 0.00028184326947666705f, 0.00030358892399817705f, 0.00035494068288244307f, 0.00023311321274377406f, 0.0003477133286651224f, 0.00022408939548768103f, 0.0002350013528484851f, 0.0003019282594323158f, 0.0002555203973315656f, 0.00024771783500909805f, 0.0003198163176421076f, 0.00030336936470121145f, 0.0002664307539816946f, 0.00024211689014919102f, 0.00046659933286719024f, 0.0003835837705992162f, 0.000313236698275432f, 0.0003028153150808066f, 0.0003228086861781776f, 0.0002098511322401464f, 0.00029471598099917173f, 0.00029899016954004765f, 0.00021955843840260059f, 0.0003423818270675838f, 0.00021386278967838734f, 0.0002517693501431495f, 0.00028106835088692605f, 0.00023246166529133916f, 0.0002832724421750754f, 0.00026358262402936816f, 0.00034391231019981205f, 0.0004436489543877542f, 0.0003273288020864129f, 0.00031469817622564733f, 0.0003352843050379306f, 0.0002713566937018186f, 0.0002204993652412668f, 0.0003492655523587018f, 0.00030448284815065563f, 0.00028639534139074385f, 0.0003481530293356627f, 0.00032019626814872026f, 0.00028297636890783906f, 0.0004055383615195751f, 0.0002752594882622361f, 0.000255193212069571f, 0.00023761727788951248f, 0.00032083148835226893f, 0.00026637030532583594f, 0.0002752626605797559f, 0.00032966042635962367f, 0.00021030336210969836f, 0.0002827701682690531f, 0.00033440178958699107f, 0.00022458979219663888f, 0.0003217985213268548f, 0.00021754801855422556f, 0.0002734943409450352f, 0.0002258051827084273f, 0.000283830362604931f, 0.00022405225900001824f, 0.00053745525656268f, 0.0002331596042495221f, 0.0002977991825900972f, 0.0002456397924106568f, 0.00029402945074252784f, 0.0004157985677011311f, 0.0002224912605015561f, 0.0002582096494734287f, 0.0003552136477082968f, 0.00024661290808580816f, 0.00044098979560658336f, 0.00023325103393290192f, 0.00036607563379220665f, 0.0002537182590458542f, 0.00035102947731502354f, 0.00044099122169427574f, 0.0002776454493869096f, 0.0002167881466448307f, 0.0002109255874529481f, 0.00023077843070495874f, 0.000247706426307559f, 0.00022840699239168316f, 0.00021238911722321063f, 0.00031344438320957124f, 0.0002084312291117385f, 0.00027060791035182774f, 0.00019643036648631096f, 0.0002768083941191435f, 0.00022225049906410277f, 0.0002942846913356334f, 0.00035385796218179166f, 0.0002434660418657586f, 0.00025947022368200123f, 0.00021265815303195268f, 0.0003102252376265824f, 0.0002674228453543037f, 0.0002020338870352134f, 0.0002908768365159631f, 0.0003441759035922587f, 0.00034013300319202244f, 0.0004133934562560171f, 0.0002942487190011889f, 0.00025083916261792183f, 0.00045301520731300116f, 0.000236563355429098f, 0.00024257018230855465f, 0.00037306768354028463f, 0.0002493788779247552f, 0.00034487631637603045f, 0.00031917475280351937f, 0.00034662499092519283f, 0.0003280760138295591f, 0.00024144991766661406f, 0.00041299135773442686f, 0.00026340733165852726f, 0.00024373755150008947f, 0.00025217904476448894f, 0.00044063053792342544f, 0.000302282627671957f, 0.00033121241722255945f, 0.0002991374640259892f, 0.0003181200590915978f, 0.00045194008271209896f, 0.00024807461886666715f, 0.0004674376978073269f, 0.00021573076082859188f, 0.0003740385000128299f, 0.0004070574068464339f, 0.00021683319937437773f, 0.00026978898677043617f, 0.00024430762277916074f, 0.0003303209086880088f, 0.00022513471776619554f, 0.0003101038164459169f, 0.00020928206504322588f, 0.0002720416523516178f, 0.00025032073608599603f, 0.00031018612207844853f, 0.0003252711030654609f, 0.0003780323313549161f, 0.0002744776429608464f, 0.00031511217821389437f, 0.00023248883371707052f, 0.00022271032503340393f, 0.00035347387893125415f, 0.00035306825884617865f, 0.00028897830634377897f, 0.00027335836784914136f, 0.0003546417283359915f, 0.00034690237953327596f, 0.00023906616843305528f, 0.00023713860718999058f, 0.00036073714727535844f, 0.00032450727303512394f, 0.00024115006090141833f, 0.0004627981106750667f, 0.0002971359936054796f, 0.0003165510424878448f, 0.00023012919700704515f, 0.0004105196276213974f, 0.00039525763713754714f, 0.00021352776093408465f, 0.0002930557238869369f, 0.00022685766452923417f, 0.00021993796690367162f, 0.0003960081667173654f, 0.00035077508073300123f, 0.00031641437090002f, 0.0003077473083976656f, 0.00024836676311679184f, 0.00034000774030573666f, 0.00021969908266328275f, 0.00040238903602585196f, 0.00028996801120229065f, 0.00027070590294897556f, 0.00022640057431999594f, 0.00023767861421220005f, 0.00034449988743290305f, 0.00026464200345799327f, 0.000283878471236676f, 0.0002316612662980333f, 0.0002604940382298082f, 0.00033347957651130855f, 0.0002885799331124872f, 0.0003207859699614346f, 0.00022411298414226621f, 0.0002338533813599497f, 0.0003974734281655401f, 0.00045752417645417154f, 0.00021215606830082834f, 0.00021045714674983174f, 0.00020022068929392844f, 0.0003057797730434686f, 0.0003619469644036144f, 0.00026155964587815106f, 0.00045747734839096665f, 0.00029160224949009717f, 0.0002564317546784878f, 0.00023169162159319967f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00045559986028820276f, 0.0007508203852921724f, 0.0010775754926726222f, 0.0004623367276508361f, 0.0006365546141751111f, 0.0018440120620653033f, 0.0005132058868184686f, 0.0006488037179224193f, 0.00046582616050727665f, 0.0008001759415492415f, 0.0003781139967031777f, 0.0011611123336479068f, 0.00034174841130152345f, 0.0008337400504387915f, 0.00037047063233330846f, 0.0007343274774029851f, 0.00047888432163745165f, 0.0004438899050001055f, 0.0005004855920560658f, 0.00039398687658831477f, 0.0005339407944120467f, 0.0003759661631193012f, 0.0006755288341082633f, 0.0004865936061833054f, 0.00045003092964179814f, 0.00033787687425501645f, 0.0007400732138194144f, 0.0008169991197064519f, 0.00088196259457618f, 0.001751583069562912f, 0.001532809459604323f, 0.0006340302061289549f, 0.0007438912871293724f, 0.0007614089990966022f, 0.0003637692134361714f, 0.0003705782874021679f, 0.00037000933662056923f, 0.0007107751443982124f, 0.0004199818358756602f, 0.00048517328104935586f, 0.00037325022276490927f, 0.0006125799263827503f, 0.00045325388782657683f, 0.0008339326595887542f, 0.0006169137777760625f, 0.0006241803639568388f, 0.0007494408055208623f, 0.00043772492790594697f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004538499633781612f, 0.0004965863190591335f, 0.0002793642634060234f, 0.0004838418972212821f, 0.0005102543509565294f, 0.00035599409602582455f, 0.00043251170427538455f, 0.0005481857806444168f, 0.0016945378156378865f, 0.0003985886287409812f, 0.00027501408476382494f, 0.0004216037632431835f, 0.00046568718971684575f, 0.00035512703470885754f, 0.0005340183852240443f, 0.0004779413575306535f, 0.0004644602013286203f, 0.00038459253846667707f, 0.0002298941690241918f, 0.0004742663586512208f, 0.0002956895623356104f, 0.0004884476074948907f, 0.0004072311276104301f, 0.00029325508512556553f, 0.0008978313417173922f, 0.0004085599211975932f, 0.00046909911907278f, 0.0007760001462884247f, 0.0004152109322603792f, 0.0004958606441505253f, 0.0004933247109875083f, 0.0003739616076927632f, 0.0005324732628650963f, 0.0004533236788120121f, 0.0006893017562106252f, 0.00032866469700820744f, 0.0006115681608207524f, 0.0005599825526587665f, 0.00038263900205492973f, 0.00045168036012910306f, 0.0005165204638615251f, 0.0007262359722517431f, 0.00028876151191070676f, 0.00045671843690797687f, 0.0005449505406431854f, 0.0005396133637987077f, 0.00028017815202474594f, 0.00046738891978748143f, 0.00046482912148348987f, 0.0004934805911034346f, 0.0005087259341962636f, 0.00034174282336607575f, 0.0005996898398734629f, 0.0004397999437060207f, 0.0006479171570390463f, 0.0004380508908070624f, 0.00048464740393683314f, 0.00043666534475050867f, 0.0008265401120297611f, 0.0009356866357848048f, 0.000330285431118682f, 0.00037332778447307646f, 0.0004391850088723004f, 0.0003865678736474365f, 0.0005039761308580637f, 0.00040622439701110125f, 0.00047249425551854074f, 0.00043154897866770625f, 0.0005266914959065616f, 0.0014925251016393304f, 0.0009826014284044504f, 0.0005204871413297951f, 0.0003620237694121897f, 0.0011053533526137471f, 0.00041752701508812606f, 0.0004304139001760632f, 0.0007615125505253673f, 0.0009561691549606621f, 0.000805999559815973f, 0.0010284066665917635f, 0.0005811896990053356f, 0.0009314654162153602f, 0.000959519122261554f, 0.0004369603702798486f, 0.00028506858507171273f, 0.0003680446825455874f, 0.0004538796783890575f, 0.0013618223601952195f, 0.00041938922367990017f, 0.000532755977474153f, 0.00046652121818624437f, 0.0004886023234575987f, 0.0005190984229557216f, 0.0004554815241135657f, 0.0010508341947570443f, 0.0011543765431270003f, 0.0007069306448101997f, 0.001292534521780908f, 0.00037430308293551207f, 0.0007781413733027875f, 0.0005785200046375394f, 0.001246546278707683f, 0.000435634603491053f, 0.0004912795848213136f, 0.0006002192967571318f, 0.0003977996821049601f, 0.0005114934174343944f, 0.0010913326404988766f, 0.00045628377120010555f, 0.0009551597177051008f, 0.0006949976086616516f, 0.0008875670609995723f, 0.0003246163541916758f, 0.0006414945819415152f, 0.00045772275188937783f, 0.00045369844883680344f, 0.0005826058913953602f, 0.0006276313797570765f, 0.0003373891522642225f, 0.0003015213878825307f, 0.0009718131041154265f, 0.00043373461812734604f, 0.000548874435480684f, 0.0004170856554992497f, 0.00044003126095049083f, 0.00044747409992851317f, 0.0004473851586226374f, 0.0004444450023584068f, 0.0009536954457871616f, 0.0006822458235546947f, 0.0004741471784655005f, 0.00041632590000517666f, 0.0005757587496191263f, 0.0004522700037341565f, 0.0012179594486951828f, 0.0010632204357534647f, 0.000615009106695652f, 0.0005127514014020562f, 0.00035224956809543073f, 0.0006390137132257223f, 0.00045373811735771596f, 0.0006263917894102633f, 0.0004745147016365081f, 0.00044895141036249697f, 0.0005134509410709143f, 0.0004104120016563684f, 0.0009223111555911601f, 0.0004758878203574568f, 0.00043113643187098205f, 0.00041571303154341877f, 0.0004704665916506201f, 0.0006436247495003045f, 0.00030730298021808267f, 0.00044018865446560085f, 0.0003536406147759408f, 0.0006434451206587255f, 0.0005109013291075826f, 0.00045931097702123225f, 0.0009799021063372493f, 0.000493004044983536f, 0.00043750039185397327f, 0.0004599291132763028f, 0.00045943656004965305f, 0.0004037430917378515f, 0.0006592556601390243f, 0.0005932620260864496f, 0.0005768485134467483f, 0.0010528884595260024f, 0.0004043577064294368f, 0.001602019416168332f, 0.0005308545078150928f, 0.0004674405208788812f, 0.0005047618178650737f, 0.00042988176573999226f, 0.0005698832683265209f, 0.00043376797111704946f, 0.0004807520017493516f, 0.0004577587533276528f, 0.0004279320128262043f, 0.00046713813208043575f, 0.0004874059231951833f, 0.0005479134852066636f, 0.0005777725018560886f, 0.00038667075568810105f, 0.00045529133058153093f, 0.000955418567173183f, 0.0005113928928039968f, 0.00045892843627370894f, 0.0006672585150226951f, 0.0005203760229051113f, 0.0017061441903933883f, 0.0006459729629568756f, 0.0004660903650801629f, 0.00047721443115733564f, 0.0005611057858914137f, 0.00038959685480222106f, 0.0003897703136317432f, 0.0005434589693322778f, 0.0006389982299879193f, 0.0003078966692555696f, 0.00028280445258133113f, 0.00044412389979697764f, 0.0003814983647316694f, 0.00042536662658676505f, 0.0006643897504545748f, 0.00043352809734642506f, 0.0004916710313409567f, 0.0003879812720697373f, 0.0005650377715937793f, 0.00040599823114462197f, 0.0008218172006309032f, 0.0009176295134238899f, 0.0003835562674794346f, 0.0005902875564061105f, 0.00039468155591748655f, 0.0003874764952342957f, 0.0004951824666932225f, 0.00039749129791744053f, 0.001452166005037725f, 0.0004074742319062352f, 0.0002967358159366995f, 0.00039744487730786204f, 0.000524756615050137f, 0.00047609308967366815f, 0.00096992461476475f, 0.0005768893170170486f, 0.00037517782766371965f, 0.0004624770663212985f, 0.00046828744234517217f, 0.0004990120651200414f, 0.0009310435270890594f, 0.0004377325822133571f, 0.00046028621727600694f, 0.00039089631172828376f, 0.0011008569272235036f, 0.0005537556717172265f, 0.0006939152954146266f, 0.0003579540061764419f, 0.00043192936573177576f, 0.00047738468856550753f, 0.00032065308187156916f, 0.0006421152502298355f, 0.0003260000958107412f, 0.0004213523061480373f, 0.000490024161990732f, 0.0004360892635304481f, 0.0003460921288933605f, 0.0004460400086827576f, 0.00037845541373826563f, 0.0006308979936875403f, 0.0011680058669298887f, 0.0002962395374197513f, 0.00042358916834928095f, 0.0004832620907109231f, 0.00048486836021766067f, 0.000500845315400511f, 0.0004336517886258662f, 0.0003138085885439068f, 0.0004348513903096318f, 0.00041208480251953006f, 0.0004977706703357399f, 0.0003289068990852684f, 0.0006065204506739974f, 0.00041391124250367284f, 0.0004831241094507277f, 0.0005045797443017364f, 0.001469302806071937f, 0.00160945241805166f, 0.0004517354827839881f, 0.0006906381458975375f, 0.00039115140680223703f, 0.00034827410127036273f, 0.0004824710194952786f, 0.0006547804223373532f, 0.001009471365250647f, 0.00043007219210267067f, 0.0004938602214679122f, 0.0005799992359243333f, 0.00030701697687618434f, 0.0004218528629280627f, 0.0003154177393298596f, 0.0003750782925635576f, 0.00020244147162884474f, 0.0003239520301576704f, 0.00044032014557160437f, 0.00046166323591023684f, 0.00039137317799031734f, 0.0007622177945449948f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005230503738857806f, 0.0005473243654705584f, 0.0006410375935956836f, 0.0010448095854371786f, 0.0005439821979962289f, 0.0005444162525236607f, 0.0005510330083779991f, 0.000968117848969996f, 0.001360999303869903f, 0.0008552760700695217f, 0.0005491959163919091f, 0.0010592614999040961f, 0.0006683648680336773f, 0.0009697844507172704f, 0.000787881319411099f, 0.0005213242839090526f, 0.0005841335514560342f, 0.0006580398185178638f, 0.0006659540231339633f, 0.0006828932091593742f, 0.0005292034475132823f, 0.0009202930377796292f, 0.0007481059874407947f, 0.0010412484407424927f, 0.0015052208909764886f, 0.0013548964634537697f, 0.0006827096221968532f, 0.0005601485609076917f, 0.0008121594437398016f, 0.0009940472664311528f, 0.0007310243090614676f, 0.0012192593421787024f, 0.0010229387553408742f, 0.0011808921117335558f, 0.0010774667607620358f, 0.0005551356007345021f, 0.0007258123951032758f, 0.0008189150248654187f, 0.0008949376060627401f, 0.001061922637745738f, 0.000585720466915518f, 0.0005473652854561806f, 0.0005755830788984895f, 0.0011881085811182857f, 0.000534809660166502f, 0.0007454869337379932f, 0.0006083431653678417f, 0.0005510705523192883f, 0.0010012885322794318f, 0.0005563172162510455f, 0.0005771632422693074f, 0.000610118149779737f, 0.0006893716636113822f, 0.0006009336793795228f, 0.0009309875895269215f, 0.0007635994697920978f, 0.000623634026851505f, 0.0005640838062390685f, 0.0007622602861374617f, 0.0010636731749400496f, 0.0005721587222069502f, 0.0006019829888828099f, 0.0006213154410943389f, 0.0005334945162758231f, 0.000567523529753089f, 0.0006483609322458506f, 0.0006496153073385358f, 0.0010447634849697351f, 0.0010464699007570744f, 0.0018223386723548174f, 0.0009306349675171077f, 0.0009551324765197933f, 0.0005396042834036052f, 0.0005184702458791435f, 0.0006249226862564683f, 0.0007394756539724767f, 0.0005594417452812195f, 0.0006365093286149204f, 0.0006803810829296708f, 0.0006126611260697246f, 0.0005640879389829934f, 0.0005999296554364264f, 0.0009764861315488815f, 0.0007439549081027508f, 0.000651964102871716f, 0.0006473847897723317f, 0.0006019379943609238f, 0.0006318361265584826f, 0.0006129574030637741f, 0.0005197395803406835f, 0.000724505283869803f, 0.001137348124757409f, 0.0006747377919964492f, 0.0005712175043299794f, 0.0006803737487643957f, 0.0005157841369509697f, 0.0005839889636263251f, 0.0007335970876738429f, 0.001022453885525465f, 0.0007489307899959385f, 0.0008153403759934008f, 0.0006421272410079837f, 0.0005863993428647518f, 0.0005310138803906739f, 0.0011468945303931832f, 0.0005518748657777905f, 0.0005762848886661232f, 0.000539064989425242f, 0.0011256695725023746f, 0.0005248947418294847f, 0.0008539517875760794f, 0.0005747099639847875f, 0.0007715878891758621f, 0.0010089557617902756f, 0.0005885265418328345f, 0.0009222680819220841f, 0.0011340026976540685f, 0.0011328916298225522f, 0.000554499332793057f, 0.0005572729860432446f, 0.00057257927255705f, 0.0011027707951143384f, 0.0010411359835416079f, 0.001013153581880033f, 0.0005682949558831751f, 0.0008409768342971802f, 0.0007660497794859111f, 0.0012957582948729396f, 0.0012868345947936177f, 0.0005587824271060526f, 0.0006085113855078816f, 0.0009334683418273926f, 0.0005335237947292626f, 0.001259179087355733f, 0.0007028509862720966f, 0.0006365236476995051f, 0.0007670967024751008f, 0.000775716092903167f, 0.0008918793173506856f, 0.0005896832444705069f, 0.0006231371080502868f, 0.0005434042541310191f, 0.0009879667777568102f, 0.0012561624171212316f, 0.0006411917856894433f, 0.0005673543782904744f, 0.0005660220631398261f, 0.0006758769159205258f, 0.0006980032194405794f, 0.001334859523922205f, 0.0008651941316202283f, 0.0006538257584907115f, 0.0011463566916063428f, 0.0005564095918089151f, 0.0005343274679034948f, 0.001131018390879035f, 0.0006380484555847943f, 0.0005494982469826937f, 0.0006881806184537709f, 0.0005197511054575443f, 0.000654644682072103f, 0.0005335476016625762f, 0.0005366309196688235f, 0.0007032291614450514f, 0.00055308936862275f, 0.0007431470439769328f, 0.0006188919651322067f, 0.0011216677958145738f, 0.0005586477927863598f, 0.0008888351148925722f, 0.0006091013201512396f, 0.0009119174210354686f, 0.0008802032680250704f, 0.0005666876095347106f, 0.001063331845216453f, 0.000587249465752393f, 0.0005528740002773702f, 0.0007963864482007921f, 0.0009069977095350623f, 0.0004860481130890548f, 0.0011401181109249592f, 0.0006966103101149201f, 0.0007493893499486148f, 0.0006262285751290619f, 0.0005369531572796404f, 0.000879189872648567f, 0.0009781302651390433f, 0.0006072343094274402f, 0.0005235084099695086f, 0.0006017264095135033f, 0.0006329346215352416f, 0.0007879773620516062f, 0.001019938732497394f, 0.0009727134020067751f, 0.0006642586668021977f, 0.0006651071598753333f, 0.0005267985397949815f, 0.0009130667895078659f, 0.0005567910266108811f, 0.0007875915034674108f, 0.0006343928980641067f, 0.000664683582726866f, 0.0006042588502168655f, 0.0006016681436449289f, 0.0007981692324392498f, 0.0008118668920360506f, 0.0010894102742895484f, 0.0005501391715370119f, 0.0014303873758763075f, 0.0006303645204752684f, 0.0005328262923285365f, 0.0005466785514727235f, 0.0005749785923399031f, 0.0005474527715705335f, 0.001254427945241332f, 0.0008782581426203251f, 0.0008378687780350447f, 0.0012546919751912355f, 0.0010876767337322235f, 0.0007229772745631635f, 0.0005396705237217247f, 0.0007391881081275642f, 0.0010548776481300592f, 0.0005915467627346516f, 0.000727981561794877f, 0.0005694882129319012f, 0.0006026481278240681f, 0.0007283341255970299f, 0.0007479339838027954f, 0.0005579352146014571f, 0.0008687556255608797f, 0.0005393402534537017f, 0.0008475553477182984f, 0.0005614574183709919f, 0.0006733948248438537f, 0.001000654767267406f, 0.0006255661137402058f, 0.0007585608400404453f, 0.0007632275810465217f, 0.0005483067943714559f, 0.0010729774367064238f, 0.0007942030788399279f, 0.0006062063621357083f, 0.0008623803150840104f, 0.0008068817551247776f, 0.0009996654698625207f, 0.0006827095057815313f, 0.0006432554218918085f, 0.0009875964606180787f, 0.0008725463994778693f, 0.0006866861367598176f, 0.0007136960630305111f, 0.0010057974141091108f, 0.0010778068099170923f, 0.0011500720866024494f, 0.0005751076387241483f, 0.0011359284399077296f, 0.0014423617394641042f, 0.0008973791263997555f, 0.0006795055232942104f, 0.0005585063481703401f, 0.0005437218933366239f, 0.000972884357906878f, 0.0007212432683445513f, 0.0005810045404359698f, 0.0013611811446025968f, 0.0012277346104383469f, 0.0005959851550869644f, 0.0011366831604391336f, 0.0007094515603967011f, 0.000527711003087461f, 0.0006094617419876158f, 0.0010624853894114494f, 0.0005450287717394531f, 0.0007759106811136007f, 0.0006048762588761747f, 0.0005499953986145556f, 0.000749850703869015f, 0.0011724967043846846f, 0.0006545706419274211f, 0.000523568713106215f, 0.0005952796200290322f, 0.0008887570584192872f, 0.001016046735458076f, 0.0006871169898658991f, 0.0006884136819280684f, 0.0005220472812652588f, 0.0005633771070279181f, 0.000770861457567662f, 0.0005293652066029608f, 0.001016603666357696f, 0.0006576779414899647f, 0.0007533644675277174f, 0.0005848861183039844f, 0.00102305191103369f, 0.0007374385604634881f, 0.0006239045178517699f, 0.001103804912418127f, 0.0009706892305985093f, 0.000672977592330426f, 0.0007022871868684888f, 0.0005481094121932983f, 0.0006554166902787983f, 0.0006488460348919034f, 0.0009179888293147087f, 0.001156432437710464f, 0.0006421503494493663f, 0.0005534962983801961f, 0.0016854467103257775f, 0.0006021319422870874f, 0.0006185863167047501f, 0.0006611894932575524f, 0.000524063128978014f, 0.0006627344409935176f, 0.000764221593271941f, 0.000612026487942785f, 0.0006912320968694985f, 0.0007492589647881687f, 0.0006141791818663478f, 0.0013181266840547323f, 0.001580087817274034f, 0.0009462235029786825f, 0.0014047097647562623f, 0.0006953815463930368f, 0.0011437442153692245f, 0.0012474415125325322f, 0.0005465293070301414f, 0.0006032110541127622f, 0.0006071876268833876f, 0.0005510492483153939f, 0.0005813975003547966f, 0.0011890653986483812f, 0.0005555160460062325f, 0.0005853791953995824f, 0.0005615326808765531f, 0.0010911939898505807f, 0.001200345577672124f, 0.0010472257854416966f, 0.0005824108957313001f, 0.0006399786216206849f, 0.0011352545116096735f, 0.0005333058070391417f, 0.0005315177259035408f, 0.0011589968344196677f, 0.0007303751772269607f, 0.0010425163200125098f, 0.0006363224238157272f, 0.001767945010215044f, 0.0005620519514195621f, 0.001337661175057292f, 0.0008639513398520648f, 0.0008270138641819358f, 0.001232473412528634f, 0.0005502656567841768f, 0.0005291319102980196f, 0.0006525713833980262f, 0.0008727159583941102f, 0.0012270822189748287f, 0.0005844997358508408f, 0.0006709026638418436f, 0.0006368852336890996f, 0.0006304695853032172f, 0.0005658940644934773f, 0.000526389223523438f, 0.0005860807723365724f, 0.0008250038372352719f, 0.0005454892525449395f, 0.0008035731734707952f, 0.0006511012907139957f, 0.0005977920372970402f, 0.0005418038344942033f, 0.0009873451199382544f, 0.0005555041716434062f, 0.0014249257510527968f, 0.0005916683003306389f, 0.001065263757482171f, 0.000626767985522747f, 0.0005509326001629233f, 0.0007679318077862263f, 0.0006989269168116152f, 0.0005320258205756545f, 0.0009496496641077101f, 0.0006053775432519615f, 0.0005976078100502491f, 0.0006170489941723645f, 0.0005907666054554284f, 0.0011361133074387908f, 0.0012619270710274577f, 0.0011206285562366247f, 0.000866177084390074f, 0.0005430687451735139f, 0.0005436621722765267f, 0.0005537375109270215f, 0.0005732843419536948f, 0.0006290514720603824f, 0.0008113888325169683f, 0.0009249582653865218f, 0.000839609419927001f, 0.0008956710225902498f, 0.000876954582054168f, 0.0005797406774945557f, 0.0012528937077149749f, 0.0005290016997605562f, 0.0007087450358085334f, 0.0005945343873463571f, 0.0006237270426936448f, 0.0009948420338332653f, 0.0005506727029569447f, 0.0006139479810371995f, 0.0005317985196597874f, 0.0006430509965866804f, 0.0008407448185607791f, 0.000535879167728126f, 0.0005829438450746238f, 0.0007649467443116009f, 0.001143188215792179f, 0.0012134489370509982f, 0.0006543062045238912f, 0.0005914383800700307f, 0.0008490788750350475f, 0.0013858426827937365f, 0.0006428849301300943f, 0.000783038733061403f, 0.0008975749951787293f, 0.0008474642527289689f, 0.0010111627634614706f, 0.0011612876551225781f, 0.0009987488156184554f, 0.001030251500196755f, 0.000861785258166492f, 0.0005198363214731216f, 0.001215980388224125f, 0.0006391095230355859f, 0.000628105306532234f, 0.0006354114157147706f, 0.0006102593615651131f, 0.0007974382606334984f, 0.0007255095988512039f, 0.0011807949049398303f, 0.0008865754934959114f, 0.0011769215343520045f, 0.0005328774568624794f, 0.0006573862046934664f, 0.0005487901507876813f, 0.0005626081838272512f, 0.0005658000591211021f, 0.0010589149314910173f, 0.0006100630271248519f, 0.0006002822774462402f, 0.0006143659120425582f, 0.0007479937048628926f, 0.000920566322747618f, 0.0008763913065195084f, 0.0006832044455222785f, 0.000647654989734292f, 0.0006945165223442018f, 0.0009981821058318019f, 0.0005283371428959072f, 0.0010512296576052904f, 0.0006973646814003587f, 0.0005465641152113676f, 0.0007544710533693433f, 0.0005204275366850197f, 0.0005576516268774867f, 0.0010718087432906032f, 0.000541774439625442f, 0.0006575342849828303f, 0.0012098208535462618f, 0.0005617362912744284f, 0.0012399133993312716f, 0.0012218925403431058f, 0.0008652796386741102f, 0.0005530830821953714f, 0.0005382692324928939f, 0.0005679235327988863f, 0.0007373535772785544f, 0.0006105104694142938f, 0.0007481712964363396f, 0.0010243251454085112f, 0.0006262718234211206f, 0.0007148475851863623f, 0.0007612263434566557f, 0.00055243558017537f, 0.0005285345250740647f, 0.0005877121002413332f, 0.0013314314419403672f, 0.0007700668065808713f, 0.0010309262434020638f, 0.0005698712193407118f, 0.001465982524678111f, 0.0007395760621875525f, 0.0005341211217455566f, 0.0006688914727419615f, 0.0008156467229127884f, 0.001026852405630052f, 0.0009115275461226702f, 0.0009037883719429374f, 0.0008428514702245593f, 0.0006923693581484258f, 0.0011664985213428736f, 0.0006191572756506503f, 0.0009241059306077659f, 0.0005449826130643487f, 0.0005218505975790322f, 0.0006228680140338838f, 0.0005337940528988838f, 0.0009284211555495858f, 0.00068472302518785f, 0.0009202381479553878f, 0.0005886520375497639f, 0.0005757479812018573f, 0.0011340311029925942f, 0.0005453231860883534f, 0.0006249922444112599f, 0.0005749264964833856f, 0.0011471417965367436f, 0.0005307048559188843f, 0.0005595124093815684f, 0.0005304675432853401f, 0.000532032223418355f, 0.0007879837066866457f, 0.0005430028541013598f, 0.000576473365072161f, 0.000597887730691582f, 0.0006902411696501076f, 0.0006034349789842963f, 0.0005222365143708885f, 0.0006002339068800211f, 0.0005912100896239281f, 0.0007207279559224844f, 0.0008617131388746202f, 0.0009617460309527814f, 0.000611179624684155f, 0.0009440680150873959f, 0.000538015563506633f, 0.0005385266267694533f, 0.0005156893748790026f, 0.0006928622606210411f, 0.0007062602671794593f, 0.0012583074858412147f, 0.0014104037545621395f, 0.0013785621849820018f, 0.0009218605700880289f, 0.000531165802385658f, 0.0006533521227538586f, 0.000570340605918318f, 0.0006629732670262456f, 0.0009015901014208794f, 0.0005829943693242967f, 0.0005862340331077576f, 0.0005173227400518954f, 0.0011554991360753775f, 0.0009289278532378376f, 0.0011841126251965761f, 0.0010450767586007714f, 0.0005482216365635395f, 0.0005974604864604771f, 0.0006988512468524277f, 0.0006543197087012231f, 0.0008582426817156374f, 0.0012397508835420012f, 0.0009302223334088922f, 0.0007128146244212985f, 0.0013226165901869535f, 0.0008728557149879634f, 0.0005631281528621912f, 0.0006516253924928606f, 0.0005276794545352459f, 0.0005594851681962609f, 0.0005555429379455745f, 0.0006562083726748824f, 0.0005618692375719547f, 0.0009307507425546646f, 0.0010525519028306007f, 0.000626717577688396f, 0.0017916716169565916f, 0.0009928969666361809f, 0.0006781413685530424f, 0.001442080014385283f, 0.0009441384463571012f, 0.0006595454178750515f, 0.0006289994926191866f, 0.0005111027276143432f, 0.0011316656600683928f, 0.0005341458600014448f, 0.000993690686300397f, 0.0006350568146444857f, 0.0005271406844258308f, 0.0005799707723781466f, 0.0006268101278692484f, 0.0009052888490259647f, 0.000558934232685715f, 0.0005820782389491796f, 0.0007609129534102976f, 0.0008957479731179774f, 0.0006011712830513716f, 0.0006043691537342966f, 0.0009433149243704975f, 0.0005269916728138924f, 0.0012753561604768038f, 0.0008060719119384885f, 0.0012803085846826434f, 0.0006272202008403838f, 0.0005456826183944941f, 0.0005700730835087597f, 0.0008676480501890182f, 0.0006801445852033794f, 0.0006043979083187878f, 0.000685567909386009f, 0.0008938311948440969f, 0.0005869100568816066f, 0.0006838816916570067f, 0.0014206600608304143f, 0.0007670041522942483f, 0.0008087567402981222f, 0.0007005944498814642f, 0.0009949629893526435f, 0.0006171258282847703f, 0.000645497057121247f, 0.00048664325731806457f, 0.001271793618798256f, 0.0008097211248241365f, 0.0005927555612288415f, 0.0008745944942347705f, 0.0006652672309428453f, 0.0010855015134438872f, 0.0011745059164240956f, 0.0006796145462431014f, 0.0007066381513141096f, 0.0006987621891312301f, 0.0006478510331362486f, 0.000530279939994216f, 0.0007627964951097965f, 0.0008291322155855596f, 0.0008513396605849266f, 0.0006237863563001156f, 0.001212251023389399f, 0.0007224072469398379f, 0.0005277340533211827f, 0.0006262065144255757f, 0.0006912574172019958f, 0.0005103237344883382f, 0.0006264694966375828f, 0.0007386049255728722f, 0.000562982342671603f, 0.0007034348091110587f, 0.0005677469307556748f, 0.0006600294727832079f, 0.000582534063141793f, 0.0006812333012931049f, 0.0007349342340603471f, 0.0005886050639674067f, 0.0008071240154094994f, 0.0005876884679310024f, 0.0009143681381829083f, 0.0009451216319575906f, 0.0007840922917239368f, 0.0006902207969687879f, 0.0006617805920541286f, 0.0012188699329271913f, 0.0005401676753535867f, 0.0008884801645763218f, 0.0007937062764540315f, 0.0006893432582728565f, 0.0007407771772705019f, 0.0009951352840289474f, 0.0014049001038074493f, 0.0006239650538191199f, 0.000625358778052032f, 0.0008594877435825765f, 0.0005752939032390714f, 0.000542744470294565f, 0.0005294555448926985f, 0.0005937961395829916f, 0.000523857946973294f, 0.0009325551800429821f, 0.0006297979271039367f, 0.0016806931234896183f, 0.0005207768408581614f, 0.0005231351824477315f, 0.0006177794421091676f, 0.0006539330934174359f, 0.0006141855265013874f, 0.0005597514100372791f, 0.0007076332694850862f, 0.0006529983365908265f, 0.0005614514811895788f, 0.0008232840918935835f, 0.0007826985674910247f, 0.0009396277600899339f, 0.0008316641324199736f, 0.0013501773355528712f, 0.0007702982984483242f, 0.0007674788357689977f, 0.0006442331941798329f, 0.0011949042091146111f, 0.0011947323800995946f, 0.0007214837823994458f, 0.0008313284488394856f, 0.0006120811449363828f, 0.0005788151756860316f, 0.0006833929219283164f, 0.0007950089639052749f, 0.0006477475981228054f, 0.0005408626748248935f, 0.0008960163104347885f, 0.0005615713889710605f, 0.0013200361281633377f, 0.0005307460087351501f, 0.0005368407582864165f, 0.000572777062188834f, 0.0011461206013336778f, 0.0009341177647002041f, 0.0008703324128873646f, 0.0013081859797239304f, 0.000651675567496568f, 0.0005550833302550018f, 0.0008982949075289071f, 0.0005897296941839159f, 0.0006026442279107869f, 0.0012246416881680489f, 0.0005417035426944494f, 0.0008455716306343675f, 0.0011089324252679944f, 0.0005939636612311006f, 0.0005257800803519785f, 0.0005987604963593185f, 0.0010268661426380277f, 0.0009884940227493644f, 0.0009982922347262502f, 0.000968086184002459f, 0.001155631267465651f, 0.0005482508568093181f, 0.0005736513412557542f, 0.0005363860982470214f, 0.0015719074290245771f, 0.0006026129121892154f, 0.0006113442941568792f, 0.0006724225240759552f, 0.000764093070756644f, 0.0005798147176392376f, 0.0009507124195806682f, 0.0005575730465352535f, 0.0007426918600685894f, 0.0006764819845557213f, 0.0011620033765211701f, 0.0006691318703815341f, 0.0006680700462311506f, 0.0005576237454079092f, 0.0007498973282054067f, 0.0007188215968199074f, 0.0006255447515286505f, 0.0005271604750305414f, 0.0005815646145492792f, 0.0008078469545580447f, 0.0016205256106331944f, 0.000751581450458616f, 0.0008713094284757972f, 0.0006500703748315573f, 0.000575247046072036f, 0.0006065149791538715f, 0.000756292138248682f, 0.0005482012056745589f, 0.0005391112645156682f, 0.0008158765849657357f, 0.0007029767148196697f, 0.0005243968917056918f, 0.0005663840565830469f, 0.0006753653287887573f, 0.0007400115136988461f, 0.000510853948071599f, 0.0011493409983813763f, 0.0006621578359045088f, 0.0007401328766718507f, 0.0005345717654563487f, 0.0005392265738919377f, 0.0007512275478802621f, 0.0005583609454333782f, 0.0007001026533544064f, 0.0005940754199400544f, 0.0005733717698603868f, 0.0011486896546557546f, 0.0008708867826499045f, 0.000556822691578418f, 0.0007799757295288146f, 0.0005364969838410616f, 0.0005807880661450326f, 0.0011511994525790215f, 0.000954449234995991f, 0.0012199702905490994f, 0.0006362631684169173f, 0.0005928405444137752f, 0.000538438034709543f, 0.0008082205313257873f, 0.0009058467112481594f, 0.0005327240214683115f, 0.0007118643261492252f, 0.0008354384917765856f, 0.0010431992122903466f, 0.0008208254585042596f, 0.0006204700330272317f, 0.0007015794399194419f, 0.0005490109324455261f, 0.0006965924985706806f, 0.0006874267128296196f, 0.0005831579910591245f, 0.0005473412456922233f, 0.00093632418429479f, 0.0006179140764288604f, 0.0005054493667557836f, 0.0005306128296069801f, 0.0005818294594064355f, 0.0006017505656927824f, 0.0008183827740140259f, 0.0008912815246731043f, 0.0013466142117977142f, 0.0007727679912932217f, 0.0005590810906141996f, 0.0005140804569236934f, 0.0012175556039437652f, 0.0006237002089619637f, 0.0014865999110043049f, 0.0010196679504588246f, 0.000991891953162849f, 0.0010287058539688587f, 0.0013274542288854718f, 0.0007381783216260374f, 0.0005401148810051382f, 0.0008119909907691181f, 0.0008805746911093593f, 0.0007339587318710983f, 0.0007413235725834966f, 0.0005398113280534744f, 0.0010038719046860933f, 0.0008873106562532485f, 0.0008747645770199597f, 0.000685508013702929f, 0.0005330727435648441f, 0.001575083239004016f, 0.0014989179326221347f, 0.0013830107636749744f, 0.0010644540889188647f, 0.000917515077162534f, 0.0005268036620691419f, 0.0008495596703141928f, 0.0006192648434080184f, 0.0005573960370384157f, 0.0005555346724577248f, 0.000527458090800792f, 0.0005515529774129391f, 0.0007843057974241674f, 0.0005595999537035823f, 0.0011715182336047292f, 0.0011408838909119368f, 0.0005545879248529673f, 0.0008442213875241578f, 0.0006944863125681877f, 0.0005284328944981098f, 0.0005522631690837443f, 0.0014582095900550485f, 0.0008229007944464684f, 0.0005256969598121941f, 0.0011283747153356671f, 0.0009128648089244962f, 0.0005866098799742758f, 0.0005177521961741149f, 0.0005771384458057582f, 0.0007228981703519821f, 0.0008412904571741819f, 0.0005657591973431408f, 0.0005332870641723275f, 0.0005619216244667768f, 0.0006415168754756451f, 0.0008504384895786643f, 0.0007713472587056458f, 0.001239320612512529f, 0.0006603579968214035f, 0.0011106261517852545f, 0.0006992590497247875f, 0.0008311562123708427f, 0.0005266583175398409f, 0.0005880242097191513f, 0.0008425686392001808f, 0.001449369709007442f, 0.0006427280022762716f, 0.0012096724240109324f, 0.0007005380466580391f, 0.000536371604539454f, 0.001072380691766739f, 0.0005580757278949022f, 0.0006765724974684417f, 0.0005978506524115801f, 0.0009983065538108349f, 0.0006433324888348579f, 0.0005959467962384224f, 0.0006750618340447545f, 0.0005773519515059888f, 0.0009302338003180921f, 0.0006065324414521456f, 0.0009255378390662372f, 0.0008028312586247921f, 0.0006056292331777513f, 0.0009083424811251462f, 0.0005972780054435134f, 0.0008795903995633125f, 0.0007123588002286851f, 0.0009141896734945476f, 0.0010297219268977642f, 0.0005574311944656074f, 0.0006011190707795322f, 0.0005308209802024066f, 0.0005824536201544106f, 0.0010809531668201089f, 0.0006411924841813743f, 0.0005598071147687733f, 0.0005867457948625088f, 0.0005224760971032083f, 0.0007456556777469814f, 0.001101616071537137f, 0.0007186211878433824f, 0.000876188394613564f, 0.0007185660069808364f, 0.0006351291667670012f, 0.0006943167536519468f, 0.0006457314011640847f, 0.0009181753848679364f, 0.0005523418658412993f, 0.0008852235041558743f, 0.0005699627217836678f, 0.000991134555079043f, 0.0012065846240147948f, 0.0007302587036974728f, 0.0006689293077215552f, 0.0005288159591145813f, 0.0014859855873510242f, 0.001088672666810453f, 0.0005904827849008143f, 0.0005929552135057747f, 0.001198049751110375f, 0.001067454693838954f, 0.0019687472376972437f, 0.0006023339810781181f, 0.0011017724173143506f, 0.0005785991670563817f, 0.0010688829934224486f, 0.0005594362155534327f, 0.0005507407477125525f, 0.0012080431915819645f, 0.0006485374760814011f, 0.0006319414242170751f, 0.0006891216617077589f, 0.0006551333353854716f, 0.0011037085205316544f, 0.0010987413115799427f, 0.0005734193837270141f, 0.0005430927267298102f, 0.0006640968495048583f, 0.0005712398560717702f, 0.0005741501809097826f, 0.000591201358474791f, 0.0006304376875050366f, 0.0010043735383078456f, 0.000744919350836426f, 0.0006571403355337679f, 0.0009277735371142626f, 0.0005843357066623867f, 0.001242992584593594f, 0.0005534844822250307f, 0.0011787693947553635f, 0.0005551174399442971f, 0.0007079016650095582f, 0.0006012969533912838f, 0.0005965667660348117f, 0.0005400473601184785f, 0.0006904135225340724f, 0.0009032524540089071f, 0.0005676780128851533f, 0.0005626192432828248f, 0.0010632402263581753f, 0.0005264960345812142f, 0.0009290073649026453f, 0.0005322906654328108f, 0.0006051461095921695f, 0.0005518036196008325f, 0.0005711325793527067f, 0.0006711537134833634f, 0.0006048005307093263f, 0.001086210715584457f, 0.0005697679007425904f, 0.0006201333017088473f, 0.0005850840825587511f, 0.0010992295574396849f, 0.0005566573818214238f, 0.0005936297820881009f, 0.0015311844181269407f, 0.0005601877928711474f, 0.0005935828085057437f, 0.0009821878047659993f, 0.0006624663365073502f, 0.0012281035305932164f, 0.0013237216044217348f, 0.0013761313166469336f, 0.0005339159979484975f, 0.0005996079999022186f, 0.0006591225974261761f, 0.0005201597232371569f, 0.0007364441989921033f, 0.0006512682302854955f, 0.0005869974265806377f, 0.0013875758741050959f, 0.000657652853988111f, 0.0007390473037958145f, 0.0008849639561958611f, 0.0005288217798806727f, 0.000971817527897656f, 0.001186984940432012f, 0.0005321400240063667f, 0.0006589891272597015f, 0.0008422632818110287f, 0.0012963134795427322f, 0.0008961737039498985f, 0.0012348491000011563f, 0.0011375134345144033f, 0.0010355515405535698f, 0.0006679361686110497f, 0.000663049693685025f, 0.0006143897771835327f, 0.0008593208040110767f, 0.0012301556998863816f, 0.0014407271519303322f, 0.0009747848962433636f, 0.001223064842633903f, 0.0005746699753217399f, 0.0005611013039015234f, 0.0011057062074542046f, 0.0006719984230585396f, 0.0008314628503285348f, 0.0005488625029101968f, 0.0009880365105345845f, 0.0005298929172568023f, 0.000719142088200897f, 0.0006533024134114385f, 0.0006390883354470134f, 0.0005775595200248063f, 0.0006122355698607862f, 0.0006255338666960597f, 0.0005485123838298023f, 0.0005515156663022935f, 0.0006003492744639516f, 0.0006832372164353728f, 0.0012402796419337392f, 0.0012012532679364085f, 0.000609067443292588f, 0.0014986901078373194f, 0.0008557842229492962f, 0.0005344076780602336f, 0.0005417406791821122f, 0.0005183784523978829f, 0.0012644274393096566f, 0.0009196174214594066f, 0.0007607910083606839f, 0.0005633261171169579f, 0.0007423082715831697f, 0.0007795242127031088f, 0.001347205601632595f, 0.0005456808721646667f, 0.0006443709135055542f, 0.0006975573487579823f, 0.0011035437928512692f, 0.0007265984895639122f, 0.0011879673693329096f, 0.0007159343804232776f, 0.0005406340933404863f, 0.0008976359385997057f, 0.0009390192572027445f, 0.0009023384191095829f, 0.0006912437966093421f, 0.0007943383534438908f, 0.0011659599840641022f, 0.0006503342883661389f, 0.0012861001305282116f, 0.0005439009983092546f, 0.0007320797303691506f, 0.0006711120950058103f, 0.0012082302710041404f, 0.0005358966300264001f, 0.0005849727895110846f, 0.0005697308224625885f, 0.0009300312376581132f, 0.000530088844243437f, 0.0007356296409852803f, 0.0005873710033483803f, 0.0006402936414815485f, 0.0007011064444668591f, 0.0009026136831380427f, 0.0006648964481428266f, 0.0005338272894732654f, 0.0006348377210088074f, 0.0006700518424622715f, 0.0005287873791530728f, 0.0006270403973758221f, 0.0010123003739863634f, 0.0012770865578204393f, 0.00150847970508039f, 0.0007312859524972737f, 0.000710140448063612f, 0.0005290249246172607f, 0.000566372589673847f, 0.0005677773151546717f, 0.0005944657605141401f, 0.0005995631800033152f, 0.00117515679448843f, 0.0005769362905994058f, 0.0005386010743677616f, 0.0007523554377257824f, 0.001151841483078897f, 0.0006704595289193094f, 0.0005690844845958054f, 0.0007074023596942425f, 0.0005684501957148314f, 0.001248719054274261f, 0.0006135792355053127f, 0.0007271977956406772f, 0.0007043253863230348f, 0.0005305613740347326f, 0.0006275751511566341f, 0.0005266754305921495f, 0.000786037475336343f, 0.0006106716464273632f, 0.000621416256763041f, 0.0008217825670726597f, 0.000995155074633658f, 0.0006070110248401761f, 0.0007051538559608161f, 0.0009649400599300861f, 0.0005494413780979812f, 0.001009344938211143f, 0.0008321806672029197f, 0.0012261056108400226f, 0.0005410660523921251f, 0.000583464396186173f, 0.0010149315930902958f, 0.0005672500119544566f, 0.0005622550379484892f, 0.0005953903892077506f, 0.0005373975145630538f, 0.0007732843514531851f, 0.0011089204344898462f, 0.0006280975067056715f, 0.0008281507180072367f, 0.000916237011551857f, 0.0007098984788171947f, 0.0013886515516787767f, 0.0005719638429582119f, 0.0010827797232195735f, 0.0009445538744330406f, 0.0010654545621946454f, 0.0005344728124327958f, 0.0010429699905216694f, 0.0005314321024343371f, 0.0008424025727435946f, 0.0011348556727170944f, 0.0005420413799583912f, 0.0008861275855451822f, 0.0006560920737683773f, 0.0006081150495447218f, 0.0009412691579200327f, 0.0005727439420297742f, 0.0005534222000278533f, 0.0006107219378463924f, 0.0005608511273749173f, 0.00059151352616027f, 0.0006480886368080974f, 0.0005945659358985722f, 0.0005243480554781854f, 0.0005972961080260575f, 0.0005898213712498546f, 0.0005519880214706063f, 0.0006015031831339002f, 0.0007276901160366833f, 0.0005308607942424715f, 0.0006283429684117436f, 0.0006194412126205862f, 0.0008490163600072265f, 0.0013623677659779787f, 0.0009459913708269596f, 0.0009300271631218493f, 0.0008044186397455633f, 0.0005679161986336112f, 0.00110933359246701f, 0.0010441860649734735f, 0.0010462923673912883f, 0.0012585078366100788f, 0.0006629184354096651f, 0.0007550223381258547f, 0.0005843504914082587f, 0.0010498568881303072f, 0.0006711235619150102f, 0.0011785303940996528f, 0.0005254359566606581f, 0.0010879311012104154f, 0.0005290920962579548f, 0.0005864392151124775f, 0.0007748776697553694f, 0.001108855940401554f, 0.0005801337538287044f, 0.0008360667270608246f, 0.0009646588587202132f, 0.0006680891965515912f, 0.0006378504331223667f, 0.0009571797563694417f, 0.0006179861375130713f, 0.0006107747321948409f, 0.0005524897133000195f, 0.0005381395458243787f, 0.0010033199796453118f, 0.0009940426098182797f, 0.0005874971975572407f, 0.0005617556162178516f, 0.0006381747080013156f, 0.000707199505995959f, 0.0006666412809863687f, 0.0008791363216005266f, 0.0005676271975971758f, 0.0005410440498962998f, 0.0007136223139241338f, 0.0007087524281814694f, 0.0008233827538788319f, 0.0011275936849415302f, 0.0007044934318400919f, 0.0005494254874065518f, 0.0006701915990561247f, 0.0009058761643245816f, 0.001226200140081346f, 0.001336899003945291f, 0.0005564304883591831f, 0.0007010725676082075f, 0.0006227730773389339f, 0.0006188199040479958f, 0.0007216029916889966f, 0.0011733660940080881f, 0.0005755790043622255f, 0.0007319594151340425f, 0.0005996415857225657f, 0.0006436612457036972f, 0.0011843910906463861f, 0.0005303461803123355f, 0.0005725046503357589f, 0.0007776495767757297f, 0.0005517589743249118f, 0.000581503554712981f, 0.0009751949110068381f, 0.0005624312907457352f, 0.0005359454080462456f, 0.000849625444971025f, 0.0005564207094721496f, 0.000791445781942457f, 0.0005387742421589792f, 0.0010455612791702151f, 0.001173861208371818f, 0.0006389960180968046f, 0.000989158172160387f, 0.0006296892534010112f, 0.0010185494320467114f, 0.0005314938025549054f, 0.0008427192224189639f, 0.0006480779265984893f, 0.0006337564554996789f, 0.0005239660968072712f, 0.0009496565326116979f, 0.0006269936566241086f, 0.0006379866972565651f, 0.0007099997019395232f, 0.0005515918019227684f, 0.0005887093138881028f, 0.0006991049740463495f, 0.0010396254947409034f, 0.0005873109912499785f, 0.0006714836927130818f, 0.0008049450116232038f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 4,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009718036162666976f, 0.0018917809939011931f, 0.0009537102305330336f, 0.007737860083580017f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #177 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #178 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #179 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #180 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #181 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #182 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #183 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #184 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #185 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #186 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #187 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #188 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #189 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #190 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_scratch0, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 1584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1584, 1584),
  1, &conv2d_71_scratch0_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_scratch0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_75_scratch0_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  3, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch0, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_77_scratch0_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch1, AI_STATIC,
  5, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_scratch1_array, &conv2d_77_scratch1_array_intq)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch0, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch1, AI_STATIC,
  7, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_scratch1_array, &conv2d_79_scratch1_array_intq)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_scratch0, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_80_scratch0_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_scratch0, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_84_scratch0_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_86_scratch0_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch1, AI_STATIC,
  11, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_scratch1_array, &conv2d_86_scratch1_array_intq)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch0, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_87_scratch0_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch1, AI_STATIC,
  13, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_scratch1_array, &conv2d_87_scratch1_array_intq)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch0, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_89_scratch0_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch1, AI_STATIC,
  15, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_scratch1_array, &conv2d_89_scratch1_array_intq)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_scratch0, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_90_scratch0_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_scratch0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_94_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch0, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_96_scratch0_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch1, AI_STATIC,
  19, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_scratch1_array, &conv2d_96_scratch1_array_intq)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch0, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 13952, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13952, 13952),
  1, &conv2d_98_scratch0_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch1, AI_STATIC,
  21, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_scratch1_array, &conv2d_98_scratch1_array_intq)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_scratch0, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 5160, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5160, 5160),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &nl_101_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  24, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_pad_before_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_3_pad_before_output_array, &conv2d_3_pad_before_output_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_output_array, &conv2d_3_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  pool_4_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &pool_4_output_array, &pool_4_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2, 2),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &conv2d_6_output_array, &conv2d_6_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &eltwise_7_output_array, &eltwise_7_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_9_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &eltwise_9_output_array, &eltwise_9_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_pad_before_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 58, 58), AI_STRIDE_INIT(4, 1, 1, 40, 2320),
  1, &conv2d_12_pad_before_output_array, &conv2d_12_pad_before_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_pad_before_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 30, 30), AI_STRIDE_INIT(4, 1, 1, 48, 1440),
  1, &conv2d_15_pad_before_output_array, &conv2d_15_pad_before_output_array_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  nl_33_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_33_output_array, &nl_33_output_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_34_output_array, &eltwise_34_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  65, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  pool_39_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_39_output_array, &pool_39_output_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_output_array, &conv2d_40_output_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_42_output, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_42_output_array, &eltwise_42_output_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  nl_43_output, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_44_output, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_44_output_array, &eltwise_44_output_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_output_array, &conv2d_47_output_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  pool_49_output, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &pool_49_output_array, &pool_49_output_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  77, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_52_output, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &eltwise_52_output_array, &eltwise_52_output_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  nl_53_output, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_54_output, AI_STATIC,
  81, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_56_output, AI_STATIC,
  83, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_56_output_array, &eltwise_56_output_array_intq)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  84, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_output, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_output_array, &conv2d_58_output_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  pool_59_output, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &pool_59_output_array, &pool_59_output_array_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  87, 0x1,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 1, 1, 18, 18),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_output, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_61_output_array, &conv2d_61_output_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_62_output, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &eltwise_62_output_array, &eltwise_62_output_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_64_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &eltwise_64_output_array, &eltwise_64_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_66_output, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_66_output_array, &eltwise_66_output_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_output_array, &conv2d_68_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  pool_69_output, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &pool_69_output_array, &pool_69_output_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_output, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_71_output_array, &conv2d_71_output_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_72_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &eltwise_72_output_array, &eltwise_72_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  nl_73_output, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &nl_73_output_array, &nl_73_output_array_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_74_output, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &eltwise_74_output_array, &eltwise_74_output_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_output, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_75_output_array, &conv2d_75_output_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_output, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_output_array, &conv2d_77_output_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  pool_78_output, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_78_output_array, &pool_78_output_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_80_output_array, &conv2d_80_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_81_output, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_81_output_array, &eltwise_81_output_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  nl_82_output, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_82_output_array, &nl_82_output_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_83_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_83_output_array, &eltwise_83_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_84_output_array, &conv2d_84_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_85_output, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_85_output_array, &eltwise_85_output_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_output_array, &conv2d_86_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_output, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_output_array, &conv2d_87_output_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  pool_88_output, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_88_output_array, &pool_88_output_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_output, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_output_array, &conv2d_89_output_array_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_output, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_90_output_array, &conv2d_90_output_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_91_output, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_91_output_array, &eltwise_91_output_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  nl_92_output, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_92_output_array, &nl_92_output_array_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_93_output, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_93_output_array, &eltwise_93_output_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_output, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_94_output_array, &conv2d_94_output_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_95_output, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_95_output_array, &eltwise_95_output_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_output, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_output_array, &conv2d_96_output_array_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  pool_97_output, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_97_output_array, &pool_97_output_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_output, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_output_array, &conv2d_98_output_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_output, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  127, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conversion_102_output_array, NULL)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8, AI_STATIC,
  128, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  138, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  142, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  143, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 2), AI_STRIDE_INIT(4, 1, 8, 16, 16),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 2, 1, 1, 8), AI_STRIDE_INIT(4, 1, 2, 16, 16),
  1, &conv2d_6_weights_array, &conv2d_6_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  146, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  147, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  148, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  149, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 1, 8, 320, 320),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  150, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  151, 0x1,
  AI_SHAPE_INIT(4, 40, 3, 3, 1), AI_STRIDE_INIT(4, 1, 40, 40, 120),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  152, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  153, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  154, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  155, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  156, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  157, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  158, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  159, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  160, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  161, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  162, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  163, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  164, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  165, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  166, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  167, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  168, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  169, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 24), AI_STRIDE_INIT(4, 1, 48, 1152, 1152),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  170, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  171, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  172, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  173, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  174, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  175, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  176, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  177, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  178, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  179, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  180, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  181, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  182, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  183, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  184, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  185, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  186, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  187, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  188, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  189, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  190, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  191, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 64), AI_STRIDE_INIT(4, 1, 24, 1536, 1536),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  195, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  197, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 24), AI_STRIDE_INIT(4, 1, 64, 1536, 1536),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  201, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 72), AI_STRIDE_INIT(4, 1, 24, 1728, 1728),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 72, 5, 5, 1), AI_STRIDE_INIT(4, 1, 72, 72, 360),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 18), AI_STRIDE_INIT(4, 1, 72, 1296, 1296),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  206, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 18, 1, 1, 72), AI_STRIDE_INIT(4, 1, 18, 1296, 1296),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  208, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 24), AI_STRIDE_INIT(4, 1, 72, 1728, 1728),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  210, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_weights, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 144, 5, 5, 1), AI_STRIDE_INIT(4, 1, 144, 144, 720),
  1, &conv2d_68_weights_array, &conv2d_68_weights_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_bias, AI_STATIC,
  214, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_68_bias_array, NULL)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 36), AI_STRIDE_INIT(4, 1, 144, 5184, 5184),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_weights, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 36, 1, 1, 144), AI_STRIDE_INIT(4, 1, 36, 5184, 5184),
  1, &conv2d_71_weights_array, &conv2d_71_weights_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_bias, AI_STATIC,
  218, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_71_bias_array, NULL)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_weights, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 48), AI_STRIDE_INIT(4, 1, 144, 6912, 6912),
  1, &conv2d_75_weights_array, &conv2d_75_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_75_bias_array, NULL)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  221, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  222, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_weights, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_77_weights_array, &conv2d_77_weights_array_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_bias, AI_STATIC,
  224, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_77_bias_array, NULL)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  226, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_weights, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_80_weights_array, &conv2d_80_weights_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_bias, AI_STATIC,
  228, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_80_bias_array, NULL)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_weights, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_84_weights_array, &conv2d_84_weights_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_bias, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_84_bias_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_weights, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_86_weights_array, &conv2d_86_weights_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_bias, AI_STATIC,
  232, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_86_bias_array, NULL)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_weights, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_87_weights_array, &conv2d_87_weights_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_bias, AI_STATIC,
  234, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_87_bias_array, NULL)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_weights, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_89_weights_array, &conv2d_89_weights_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_bias, AI_STATIC,
  236, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_89_bias_array, NULL)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_weights, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_90_weights_array, &conv2d_90_weights_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_bias, AI_STATIC,
  238, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_90_bias_array, NULL)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_weights, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_94_weights_array, &conv2d_94_weights_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_bias, AI_STATIC,
  240, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_94_bias_array, NULL)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_weights, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_96_weights_array, &conv2d_96_weights_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_bias, AI_STATIC,
  242, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_96_bias_array, NULL)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_weights, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 1280), AI_STRIDE_INIT(4, 1, 288, 368640, 368640),
  1, &conv2d_98_weights_array, &conv2d_98_weights_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_bias, AI_STATIC,
  244, 0x0,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 4, 4, 5120, 5120),
  1, &conv2d_98_bias_array, NULL)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_weights, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 1280, 1, 1, 4), AI_STRIDE_INIT(4, 1, 1280, 5120, 5120),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  246, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  247, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  248, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  249, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  251, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  253, 0x0,
  AI_SHAPE_INIT(4, 1, 52, 1, 1), AI_STRIDE_INIT(4, 1, 1, 52, 52),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  254, 0x0,
  AI_SHAPE_INIT(4, 1, 88, 1, 1), AI_STRIDE_INIT(4, 1, 1, 88, 88),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  255, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #256 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  256, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #257 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  257, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #258 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  258, 0x0,
  AI_SHAPE_INIT(4, 1, 1481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1481, 1481),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #259 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  259, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #260 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  260, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #261 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  261, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #262 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  262, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #263 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  263, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #264 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  264, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #265 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  265, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #266 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  266, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #267 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  267, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #268 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  268, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #269 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  269, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #270 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  270, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #271 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  271, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #272 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  272, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #273 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  273, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #274 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  274, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #275 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  275, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #276 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  276, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #277 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  277, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #278 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  278, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #279 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  279, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #280 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  280, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #281 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  281, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #282 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  282, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #283 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  283, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #284 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  284, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #285 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch1, AI_STATIC,
  285, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_scratch1_array, &conv2d_40_scratch1_array_intq)

/* Tensor #286 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  286, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #287 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  287, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #288 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  288, 0x0,
  AI_SHAPE_INIT(4, 1, 736, 1, 1), AI_STRIDE_INIT(4, 1, 1, 736, 736),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #289 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  289, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #290 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  290, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #291 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  291, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #292 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  292, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #293 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  293, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #294 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  294, 0x0,
  AI_SHAPE_INIT(4, 1, 496, 1, 1), AI_STRIDE_INIT(4, 1, 1, 496, 496),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #295 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  295, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #296 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  296, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #297 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  297, 0x0,
  AI_SHAPE_INIT(4, 1, 6121, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6121, 6121),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #298 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch1, AI_STATIC,
  298, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_scratch1_array, &conv2d_58_scratch1_array_intq)

/* Tensor #299 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  299, 0x0,
  AI_SHAPE_INIT(4, 1, 468, 1, 1), AI_STRIDE_INIT(4, 1, 1, 468, 468),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #300 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  300, 0x0,
  AI_SHAPE_INIT(4, 1, 792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 792, 792),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #301 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  301, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #302 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  302, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #303 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  303, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #304 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch0, AI_STATIC,
  304, 0x0,
  AI_SHAPE_INIT(4, 1, 12241, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12241, 12241),
  1, &conv2d_68_scratch0_array, NULL)

/* Tensor #305 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch1, AI_STATIC,
  305, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_scratch1_array, &conv2d_68_scratch1_array_intq)

/* Tensor #306 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  306, 0x0,
  AI_SHAPE_INIT(4, 1, 936, 1, 1), AI_STRIDE_INIT(4, 1, 1, 936, 936),
  1, &conv2d_70_scratch0_array, NULL)

/* Tensor #307 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch1, AI_STATIC,
  307, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_scratch1_array, &conv2d_70_scratch1_array_intq)



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


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1914268032, 24, -124 };
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


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -121, -118, -115, -111, -108, -105, -102, -98, -95, -92, -88, -85, -82, -78, -75, -72, -69, -65, -62, -59, -55, -52, -49, -45, -42, -39, -36, -32, -29, -26, -22, -19, -16, -12, -9, -6, -2, 1, 4, 7, 11, 14, 17, 21, 24, 27, 31, 34, 37, 40, 44, 47, 50, 54, 57, 60, 64, 67, 70, 74, 77, 80, 83, 87, 90, 93, 97, 100, 103, 107, 110, 113, 116, 120, 123, 126 };
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


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -123, -120, -118, -115, -113, -110, -107, -105, -102, -100, -97, -94, -92, -89, -87, -84, -82, -79, -76, -74, -71, -69, -66, -63, -61, -58, -56, -53, -51, -48, -45, -43, -40, -38, -35, -32, -30, -27, -25, -22, -20, -17, -14, -12, -9, -7, -4, -2, 1, 4, 6, 9, 11, 14, 17, 19, 22, 24, 27, 29, 32, 35, 37, 40, 42, 45, 48, 50, 53, 55, 58, 60, 63, 66, 68, 71, 73, 76, 78, 81, 84, 86, 89, 91, 94, 97, 99, 102, 104, 107, 109, 112, 115, 117, 120, 122, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -118, -116, -114, -111, -109, -107, -105, -103, -101, -99, -97, -95, -93, -91, -89, -87, -85, -83, -81, -78, -76, -74, -72, -70, -68, -66, -64, -62, -60, -58, -56, -54, -52, -50, -48, -45, -43, -41, -39, -37, -35, -33, -31, -29, -27, -25, -23, -21, -19, -17, -14, -12, -10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 14, 16, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 116, 118, 120, 122, 124, 126, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_output, &eltwise_62_output),
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
  NULL, &eltwise_64_layer, AI_STATIC, 
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -119, -117, -116, -115, -114, -112, -111, -110, -108, -107, -106, -104, -103, -102, -100, -99, -98, -96, -95, -94, -93, -91, -90, -89, -87, -86, -85, -83, -82, -81, -79, -78, -77, -75, -74, -73, -72, -70, -69, -68, -66, -65, -64, -62, -61, -60, -58, -57, -56, -54, -53, -52, -51, -49, -48, -47, -45, -44, -43, -41, -40, -39, -37, -36, -35, -33, -32, -31, -30, -28, -27, -26, -24, -23, -22, -20, -19, -18, -16, -15, -14, -12, -11, -10, -9, -7, -6, -5, -3, -2, -1, 1, 2, 3, 5, 6, 7, 9, 10, 11, 12, 14, 15, 16, 18, 19, 20, 22, 23, 24, 26, 27, 28, 30, 31, 32, 33, 35, 36, 37, 39, 40, 41, 43, 44, 45, 47, 48, 49, 51, 52, 53, 54, 56, 57, 58, 60, 61, 62, 64, 65, 66, 68, 69, 70, 72, 73, 74, 75, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89, 90, 91, 93, 94, 95, 96, 98, 99, 100, 102, 103, 104, 106, 107, 108, 110, 111, 112, 114, 115, 116, 117, 119, 120, 121, 123, 124, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -123, -121, -119, -117, -114, -112, -110, -108, -105, -103, -101, -98, -96, -94, -92, -89, -87, -85, -82, -80, -78, -76, -73, -71, -69, -67, -64, -62, -60, -57, -55, -53, -51, -48, -46, -44, -42, -39, -37, -35, -32, -30, -28, -26, -23, -21, -19, -16, -14, -12, -10, -7, -5, -3, -1, 2, 4, 6, 9, 11, 13, 15, 18, 20, 22, 24, 27, 29, 31, 34, 36, 38, 40, 43, 45, 47, 50, 52, 54, 56, 59, 61, 63, 65, 68, 70, 72, 75, 77, 79, 81, 84, 86, 88, 90, 93, 95, 97, 100, 102, 104, 106, 109, 111, 113, 116, 118, 120, 122, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -118, -117, -116, -114, -113, -112, -110, -109, -107, -106, -105, -103, -102, -101, -99, -98, -97, -95, -94, -92, -91, -90, -88, -87, -86, -84, -83, -81, -80, -79, -77, -76, -75, -73, -72, -70, -69, -68, -66, -65, -64, -62, -61, -60, -58, -57, -55, -54, -53, -51, -50, -49, -47, -46, -44, -43, -42, -40, -39, -38, -36, -35, -34, -32, -31, -29, -28, -27, -25, -24, -23, -21, -20, -18, -17, -16, -14, -13, -12, -10, -9, -7, -6, -5, -3, -2, -1, 1, 2, 3, 5, 6, 8, 9, 10, 12, 13, 14, 16, 17, 19, 20, 21, 23, 24, 25, 27, 28, 29, 31, 32, 34, 35, 36, 38, 39, 40, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 56, 57, 58, 60, 61, 62, 64, 65, 66, 68, 69, 71, 72, 73, 75, 76, 77, 79, 80, 82, 83, 84, 86, 87, 88, 90, 91, 92, 94, 95, 97, 98, 99, 101, 102, 103, 105, 106, 108, 109, 110, 112, 113, 114, 116, 117, 118, 120, 121, 123, 124, 125, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_30_chain,
  NULL, &conv2d_31_layer, AI_STATIC, 
  .groups = 1, 
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


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -126, -124, -123, -122, -121, -120, -119, -117, -116, -115, -114, -113, -112, -110, -109, -108, -107, -106, -104, -103, -102, -101, -100, -99, -97, -96, -95, -94, -93, -92, -90, -89, -88, -87, -86, -84, -83, -82, -81, -80, -79, -77, -76, -75, -74, -73, -72, -70, -69, -68, -67, -66, -64, -63, -62, -61, -60, -59, -57, -56, -55, -54, -53, -52, -50, -49, -48, -47, -46, -44, -43, -42, -41, -40, -39, -37, -36, -35, -34, -33, -32, -30, -29, -28, -27, -26, -24, -23, -22, -21, -20, -19, -17, -16, -15, -14, -13, -12, -10, -9, -8, -7, -6, -4, -3, -2, -1, 0, 1, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 36, 37, 38, 39, 40, 41, 43, 44, 45, 46, 47, 48, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 70, 71, 72, 73, 74, 75, 77, 78, 79, 80, 81, 83, 84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 95, 97, 98, 99, 100, 101, 103, 104, 105, 106, 107, 108, 110, 111, 112, 113, 114, 115, 117, 118, 119, 120, 121, 123, 124, 125, 126, 127 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 642308, 1, 1),
    642308, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 642308, 1, 1),
      642308, NULL, NULL)
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
    
    conv2d_30_output_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_30_output_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_31_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_31_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
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
    
    conv2d_40_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_40_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_40_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
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
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 5160);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5160);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 16);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16);
    
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
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 642292);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 642292);
    
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
      
      .n_macc            = 20130672,
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
      
      .n_macc            = 20130672,
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

