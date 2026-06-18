/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Jan 15 11:14:01 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "bc5653f844450c73cd26bb7b39be3ff3"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Wed Jan 15 11:14:01 2025"

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
  NULL, NULL, 5220, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 10, AI_STATIC)
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
  NULL, NULL, 10, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 10, AI_STATIC)
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
  NULL, NULL, 12800, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 10, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 52, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 88, AI_STATIC)
/* Array#256 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#257 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#258 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#259 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1481, AI_STATIC)
/* Array#260 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#261 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#262 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#263 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#264 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#265 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#266 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#267 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#268 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#269 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#270 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#271 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#272 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#273 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#274 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#275 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#276 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#277 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#278 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#279 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#280 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#281 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#282 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#283 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#284 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#285 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#286 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#287 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.017774337902665138f),
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
    AI_PACK_INTQ_SCALE(0.007179688662290573f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029395772144198418f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029395772144198418f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012206237763166428f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07818437367677689f),
    AI_PACK_INTQ_ZP(13)))

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
    AI_PACK_INTQ_SCALE(0.08827973902225494f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.06943326443433762f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10782529413700104f),
    AI_PACK_INTQ_ZP(-11)))

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
    AI_PACK_INTQ_SCALE(0.020390424877405167f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004908613860607147f),
    AI_PACK_INTQ_ZP(-77)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004908613860607147f),
    AI_PACK_INTQ_ZP(-77)))

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
    AI_PACK_INTQ_SCALE(0.08379516750574112f),
    AI_PACK_INTQ_ZP(5)))

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
    AI_PACK_INTQ_SCALE(0.008554486557841301f),
    AI_PACK_INTQ_ZP(10)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008554486557841301f),
    AI_PACK_INTQ_ZP(10)))

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
    AI_PACK_INTQ_SCALE(0.07899327576160431f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11173604428768158f),
    AI_PACK_INTQ_ZP(-1)))

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
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007210189942270517f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007210189942270517f),
    AI_PACK_INTQ_ZP(-12)))

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
    AI_PACK_INTQ_SCALE(0.07307225465774536f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13131095468997955f),
    AI_PACK_INTQ_ZP(1)))

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
    AI_PACK_INTQ_SCALE(0.0158843994140625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007429755758494139f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007429755758494139f),
    AI_PACK_INTQ_ZP(-8)))

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
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0718965083360672f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1519274115562439f),
    AI_PACK_INTQ_ZP(-6)))

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
    AI_PACK_INTQ_SCALE(0.01393738854676485f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004663422703742981f),
    AI_PACK_INTQ_ZP(-87)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004663422703742981f),
    AI_PACK_INTQ_ZP(-87)))

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
    AI_PACK_INTQ_SCALE(0.021107545122504234f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06918462365865707f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.15794333815574646f),
    AI_PACK_INTQ_ZP(-3)))

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
    AI_PACK_INTQ_SCALE(0.0072344527579844f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0072344527579844f),
    AI_PACK_INTQ_ZP(-11)))

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
    AI_PACK_INTQ_SCALE(0.07799764722585678f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.008050862699747086f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008050862699747086f),
    AI_PACK_INTQ_ZP(3)))

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
    AI_PACK_INTQ_SCALE(0.06807021796703339f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1128515899181366f),
    AI_PACK_INTQ_ZP(-5)))

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
    AI_PACK_INTQ_SCALE(0.009549531154334545f),
    AI_PACK_INTQ_ZP(22)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009549531154334545f),
    AI_PACK_INTQ_ZP(22)))

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
    AI_PACK_INTQ_SCALE(0.07849803566932678f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1374092698097229f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.01883547566831112f),
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
    AI_PACK_INTQ_SCALE(0.33441779017448425f),
    AI_PACK_INTQ_ZP(44)))

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
    AI_PACK_INTQ_SCALE(0.009549531154334545f),
    AI_PACK_INTQ_ZP(22)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008050862699747086f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0072344527579844f),
    AI_PACK_INTQ_ZP(-11)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004663422703742981f),
    AI_PACK_INTQ_ZP(-87)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007429755758494139f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007210189942270517f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008554486557841301f),
    AI_PACK_INTQ_ZP(10)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004908613860607147f),
    AI_PACK_INTQ_ZP(-77)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029395772144198418f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0048431395553052425f, 0.009540483355522156f, 0.004952151793986559f, 0.0068679130636155605f, 0.002279242966324091f, 0.005604060832411051f, 0.004898590035736561f, 0.0031454903073608875f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008700532838702202f, 0.0037969292607158422f, 0.013299270533025265f, 0.013426202349364758f, 0.011893427930772305f, 0.007836829870939255f, 0.007824117317795753f, 0.007152124773710966f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007868964225053787f, 0.005942665971815586f, 0.006687498651444912f, 0.00581291364505887f, 0.004022770561277866f, 0.0030875594820827246f, 0.004250026308000088f, 0.007019182667136192f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004814449232071638f, 0.00537760928273201f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015367554733529687f, 0.0010957722552120686f, 0.00032879022182896733f, 0.00018126179929822683f, 0.00026924582198262215f, 0.0003580209449864924f, 0.0010734491515904665f, 0.0008096442907117307f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.018102815374732018f, 0.022298147901892662f, 0.022359775379300117f, 0.01487685926258564f, 0.017460059374570847f, 0.025503287091851234f, 0.01788904331624508f, 0.028259268030524254f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003970379009842873f, 0.0053175357170403f, 0.0045617008581757545f, 0.006057041697204113f, 0.005710665602236986f, 0.004906075075268745f, 0.0034946666564792395f, 0.004377270117402077f, 0.0033366321586072445f, 0.0033951811492443085f, 0.004523774608969688f, 0.004380127880722284f, 0.004805828910320997f, 0.006217852234840393f, 0.005030855070799589f, 0.004850352648645639f, 0.004987742286175489f, 0.0035876857582479715f, 0.003209341550245881f, 0.003270697081461549f, 0.0033228443935513496f, 0.0053465222008526325f, 0.004612387157976627f, 0.003110226709395647f, 0.004329188726842403f, 0.0042977225966751575f, 0.003919709008187056f, 0.0048425039276480675f, 0.006517468485981226f, 0.003838800825178623f, 0.0045636920258402824f, 0.005708551499992609f, 0.0035443955566734076f, 0.0034972939174622297f, 0.0038908773567527533f, 0.0031607411801815033f, 0.005494167562574148f, 0.00944789219647646f, 0.004715513437986374f, 0.003855515969917178f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003745912341400981f, 0.011085694655776024f, 0.004645974840968847f, 0.003347907681018114f, 0.00839326437562704f, 0.005858043674379587f, 0.01776740327477455f, 0.008709877729415894f, 0.0074770161882042885f, 0.010393734090030193f, 0.017519576475024223f, 0.011369309388101101f, 0.00241067330352962f, 0.005097775254398584f, 0.008559719659388065f, 0.00845008809119463f, 0.005604916252195835f, 0.013560386374592781f, 0.016827121376991272f, 0.013192674145102501f, 0.017610127106308937f, 0.007656299974769354f, 0.00667989207431674f, 0.01701001450419426f, 0.00716980267316103f, 0.009607789106667042f, 0.01627127267420292f, 0.006591603625565767f, 0.011344787664711475f, 0.018335966393351555f, 0.014262847602367401f, 0.00706480210646987f, 0.0057543618604540825f, 0.014833326451480389f, 0.006227552890777588f, 0.00576331140473485f, 0.008319118991494179f, 0.0020820419304072857f, 0.015196245163679123f, 0.00595406349748373f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003975238651037216f, 0.004142235964536667f, 0.0030869448091834784f, 0.0040587373077869415f, 0.003439726307988167f, 0.003124298295006156f, 0.004317778628319502f, 0.0040842387825250626f, 0.004924036096781492f, 0.0031820270232856274f, 0.004601913038641214f, 0.0026992587372660637f, 0.0038803922943770885f, 0.002752328058704734f, 0.004166234750300646f, 0.003197109093889594f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019783119205385447f, 0.002976170275360346f, 0.005179489962756634f, 0.003632493317127228f, 0.004182958509773016f, 0.004833881743252277f, 0.0042055342346429825f, 0.002528388286009431f, 0.004389071837067604f, 0.002637366997078061f, 0.002472159918397665f, 0.002322930144146085f, 0.0037646752316504717f, 0.003038235940039158f, 0.0026632105000317097f, 0.004359439481049776f, 0.0030159661546349525f, 0.004552059806883335f, 0.005151696968823671f, 0.0036299496423453093f, 0.0025297089014202356f, 0.004791261628270149f, 0.0024971673265099525f, 0.0028907048981636763f, 0.006832965649664402f, 0.004381030332297087f, 0.004416170530021191f, 0.003028759267181158f, 0.0032607344910502434f, 0.00427610520273447f, 0.003172697499394417f, 0.004183948040008545f, 0.002454078756272793f, 0.002413298701867461f, 0.003431902267038822f, 0.0037755940575152636f, 0.0035606767050921917f, 0.0031598147470504045f, 0.0036331573501229286f, 0.0037926032673567533f, 0.0019707477185875177f, 0.0034790378995239735f, 0.004101362079381943f, 0.005278137046843767f, 0.0027817809022963047f, 0.0032967461738735437f, 0.003393941093236208f, 0.0027963549364358187f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015561464242637157f, 0.0051728105172514915f, 0.004933499731123447f, 0.00837592501193285f, 0.007578085642307997f, 0.00603663781657815f, 0.004909483715891838f, 0.012254105880856514f, 0.003306893864646554f, 0.01575954630970955f, 0.010084998793900013f, 0.005907353945076466f, 0.009168710559606552f, 0.005209917668253183f, 0.011990927159786224f, 0.004252237267792225f, 0.00806531123816967f, 0.00312069826759398f, 0.004475531168282032f, 0.0038274109829217196f, 0.00763079896569252f, 0.005980573128908873f, 0.005390702746808529f, 0.01000411156564951f, 0.005412347614765167f, 0.003023436525836587f, 0.003353002481162548f, 0.007187995593994856f, 0.004017466679215431f, 0.006533329840749502f, 0.00535928038880229f, 0.004414186347275972f, 0.010143446736037731f, 0.006473171059042215f, 0.0034400790464133024f, 0.007585628889501095f, 0.004480029456317425f, 0.008465912193059921f, 0.008948907256126404f, 0.006036249455064535f, 0.008765384554862976f, 0.00939368549734354f, 0.004653856158256531f, 0.006174501962959766f, 0.005248397123068571f, 0.009479873813688755f, 0.00882873684167862f, 0.012196527794003487f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003457937389612198f, 0.0026095365174114704f, 0.002498289104551077f, 0.0028290092013776302f, 0.0034552891738712788f, 0.0028772824443876743f, 0.002983716083690524f, 0.002848373493179679f, 0.003439611289650202f, 0.0031079708132892847f, 0.0027563725598156452f, 0.003626776859164238f, 0.0024817422963678837f, 0.003175957128405571f, 0.0032921559177339077f, 0.003139015519991517f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002112728776410222f, 0.003768846858292818f, 0.0018835854716598988f, 0.0023253019899129868f, 0.0019098931225016713f, 0.002124321646988392f, 0.0025467316154390574f, 0.0028269998729228973f, 0.001372268539853394f, 0.0029209551867097616f, 0.0018228148110210896f, 0.002360197016969323f, 0.002220090012997389f, 0.0023977472446858883f, 0.0029714382253587246f, 0.003050224855542183f, 0.0021568788215517998f, 0.0016840776661410928f, 0.002367266220971942f, 0.00259696738794446f, 0.002416514325886965f, 0.0023389707785099745f, 0.0031556522008031607f, 0.00364837609231472f, 0.0016711809439584613f, 0.002231977880001068f, 0.0030537887942045927f, 0.0024668246041983366f, 0.0025254294741898775f, 0.00415616761893034f, 0.0022909839171916246f, 0.0022276651579886675f, 0.004032918717712164f, 0.0025570362340658903f, 0.0020301775075495243f, 0.0025214441120624542f, 0.0017524773720651865f, 0.0021985641214996576f, 0.00293094664812088f, 0.0029939133673906326f, 0.0017526220763102174f, 0.0015214943559840322f, 0.0025432754773646593f, 0.0027205587830394506f, 0.0016445484943687916f, 0.002299572341144085f, 0.0022872290574014187f, 0.0028990241698920727f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0014313793508335948f, 0.004367738496512175f, 0.0038023502565920353f, 0.0017100584227591753f, 0.007158339023590088f, 0.0022024395875632763f, 0.002475370652973652f, 0.003268344094976783f, 0.005838849116116762f, 0.00349905202165246f, 0.0035336106084287167f, 0.002816032385453582f, 0.003772533731535077f, 0.0028620653320103884f, 0.004344077780842781f, 0.0018231227295473218f, 0.0055705890990793705f, 0.0023013767786324024f, 0.004636364057660103f, 0.002817773027345538f, 0.002793847117573023f, 0.0033527184277772903f, 0.0023242742754518986f, 0.002224311698228121f, 0.0035671626683324575f, 0.0018518667202442884f, 0.00190688984002918f, 0.0033075069077312946f, 0.002124177757650614f, 0.002679212251678109f, 0.004021247383207083f, 0.0034981509670615196f, 0.0023870051372796297f, 0.0020881991367787123f, 0.004246396478265524f, 0.0038990911561995745f, 0.00218986882828176f, 0.005589768756181002f, 0.0028088002000004053f, 0.0057002101093530655f, 0.0042997850105166435f, 0.0051591889932751656f, 0.003222305793315172f, 0.002246046205982566f, 0.003555180737748742f, 0.004299979191273451f, 0.0039441706612706184f, 0.0029521938413381577f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035527520813047886f, 0.003750671399757266f, 0.0044923145323991776f, 0.0042202407494187355f, 0.0032714952249079943f, 0.0038609576877206564f, 0.004249413497745991f, 0.004383185878396034f, 0.004205572884529829f, 0.0036714239977300167f, 0.0036778009962290525f, 0.003946986980736256f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006968206143938005f, 0.0006152471178211272f, 0.0008314653532579541f, 0.0008457335643470287f, 0.0005950550548732281f, 0.0003536338626872748f, 0.0006853333907201886f, 0.0007261303253471851f, 0.001022734446451068f, 0.0006395241944119334f, 0.000763403601013124f, 0.0007063047378323972f, 0.000661148689687252f, 0.0006980118923820555f, 0.0008567390614189208f, 0.0005865924176760018f, 0.0008664430934004486f, 0.0008178753778338432f, 0.0006022987072356045f, 0.0005975529784336686f, 0.0009326075087301433f, 0.0009378946851938963f, 0.0006711794412694871f, 0.0006151652778498828f, 0.0005621045711450279f, 0.0004378418670967221f, 0.0006492778193205595f, 0.0006684557301923633f, 0.00045530759962275624f, 0.0004824683128390461f, 0.0007548406720161438f, 0.000528668868355453f, 0.0007378599257208407f, 0.0005634662229567766f, 0.00038954016054049134f, 0.0007785442285239697f, 0.0007832447299733758f, 0.0006833632360212505f, 0.0007716325344517827f, 0.0005886137369088829f, 0.0008330335258506238f, 0.0005560492281801999f, 0.0006271234015002847f, 0.0005235964781604707f, 0.0006069482769817114f, 0.0007620724500156939f, 0.0005041793920099735f, 0.0006501735188066959f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008489289321005344f, 0.010236960835754871f, 0.00935247354209423f, 0.0063808998093008995f, 0.007964884862303734f, 0.0077570280991494656f, 0.008465494029223919f, 0.007673436775803566f, 0.007348962128162384f, 0.00742745166644454f, 0.009035102091729641f, 0.007069455925375223f, 0.009857898578047752f, 0.008141309022903442f, 0.007779277861118317f, 0.008824808523058891f, 0.01052210945636034f, 0.0075164358131587505f, 0.008295275270938873f, 0.00832737423479557f, 0.008849785663187504f, 0.00945572555065155f, 0.006217331625521183f, 0.007867004722356796f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019889932591468096f, 0.0034392569214105606f, 0.001552219851873815f, 0.002528631594032049f, 0.0027097538113594055f, 0.003106607822701335f, 0.002647463697940111f, 0.002716898685321212f, 0.001758178579621017f, 0.0019845215138047934f, 0.0027690294664353132f, 0.0017813813174143434f, 0.0026552111376076937f, 0.002148520667105913f, 0.0022509086411446333f, 0.003123279893770814f, 0.0026791179552674294f, 0.0022975418251007795f, 0.002783761592581868f, 0.0039453753270208836f, 0.004230549558997154f, 0.0020860680378973484f, 0.002557554980739951f, 0.0014997479738667607f, 0.00339277321472764f, 0.0020538391545414925f, 0.0022000176832079887f, 0.0017330750124529004f, 0.0014840011717751622f, 0.0018704867688938975f, 0.0030594912823289633f, 0.0028492887504398823f, 0.0024929444771260023f, 0.0012040181318297982f, 0.0029590181075036526f, 0.0026952126063406467f, 0.0025109245907515287f, 0.0027074881363660097f, 0.00317057385109365f, 0.0027328121941536665f, 0.0023662864696234465f, 0.003692502388730645f, 0.002272658282890916f, 0.0023455882910639048f, 0.002893750788643956f, 0.0024514594115316868f, 0.0029970738105475903f, 0.0033264323137700558f, 0.0026914544869214296f, 0.002620150102302432f, 0.001946216099895537f, 0.002864676062017679f, 0.0026361981872469187f, 0.002244950970634818f, 0.002865420887246728f, 0.002548420336097479f, 0.002997438656166196f, 0.0015347559237852693f, 0.0018271943554282188f, 0.0025396058335900307f, 0.002892048330977559f, 0.002761347219347954f, 0.0031849013175815344f, 0.0019338332349434495f, 0.003410241799429059f, 0.0021746503189206123f, 0.002573540434241295f, 0.0029932751785963774f, 0.002251348225399852f, 0.0034648263826966286f, 0.003502246458083391f, 0.004125847015529871f, 0.0031634799670428038f, 0.00391967361792922f, 0.0036019624676555395f, 0.002168861450627446f, 0.002367784036323428f, 0.0025192354805767536f, 0.002171008847653866f, 0.002536328276619315f, 0.002685844199731946f, 0.0013742181472480297f, 0.0017846686532720923f, 0.0029677581042051315f, 0.0016132532618939877f, 0.002247908152639866f, 0.002447288017719984f, 0.0024775236379355192f, 0.0022226592991501093f, 0.0017352510476484895f, 0.0022606905549764633f, 0.0020817082840949297f, 0.0024037454277276993f, 0.002193364081904292f, 0.003915209323167801f, 0.0022593794856220484f, 0.0027293162420392036f, 0.002896691905334592f, 0.0018872834043577313f, 0.001985673326998949f, 0.0032237230334430933f, 0.001616457011550665f, 0.002719885902479291f, 0.0028904094360768795f, 0.0017576302634552121f, 0.0032757692970335484f, 0.0024869153276085854f, 0.0019080369966104627f, 0.0018786698346957564f, 0.0027139540761709213f, 0.0016943184891715646f, 0.002636758843436837f, 0.002004098379984498f, 0.0027176218573004007f, 0.002985940547659993f, 0.0029898001812398434f, 0.0031418700236827135f, 0.002725496655330062f, 0.0022557531483471394f, 0.0022785523906350136f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005676905158907175f, 0.004881793633103371f, 0.008772616274654865f, 0.004218882415443659f, 0.0025429194793105125f, 0.0027248209808021784f, 0.006886160001158714f, 0.0030107509810477495f, 0.005481794010847807f, 0.005128831602632999f, 0.002115895738825202f, 0.003619614290073514f, 0.0031210260931402445f, 0.0065299142152071f, 0.00601962860673666f, 0.0029581564012914896f, 0.006472961511462927f, 0.004479666240513325f, 0.002952253445982933f, 0.004163042642176151f, 0.003992566838860512f, 0.0023370434064418077f, 0.0019915823359042406f, 0.006731935776770115f, 0.0027090145740658045f, 0.011425415985286236f, 0.010568522848188877f, 0.007745322771370411f, 0.005254428833723068f, 0.005426645744591951f, 0.003731910604983568f, 0.0029278176371008158f, 0.006729131564497948f, 0.009461983107030392f, 0.005858703050762415f, 0.004560666158795357f, 0.008205479010939598f, 0.00511908670887351f, 0.004578541964292526f, 0.0035842403303831816f, 0.006098822690546513f, 0.0030704017262905836f, 0.004095612559467554f, 0.003244848223403096f, 0.003919427748769522f, 0.00314537831582129f, 0.0052657341584563255f, 0.004292105324566364f, 0.004502038471400738f, 0.004750656895339489f, 0.011096350848674774f, 0.0076667992398142815f, 0.00338359153829515f, 0.0038918813224881887f, 0.006144128739833832f, 0.006554712075740099f, 0.003839889308437705f, 0.00515923323109746f, 0.0053351460956037045f, 0.003600513795390725f, 0.004485866986215115f, 0.0040474398992955685f, 0.004364219028502703f, 0.018811490386724472f, 0.0041248993948102f, 0.008069762028753757f, 0.004170252941548824f, 0.004299634136259556f, 0.0054281833581626415f, 0.004006864503026009f, 0.0038772851694375277f, 0.003389403922483325f, 0.003227279521524906f, 0.003163710469380021f, 0.0040073757991194725f, 0.0027250933926552534f, 0.004644583910703659f, 0.0035143692512065172f, 0.005359077826142311f, 0.0037919203750789165f, 0.004635505378246307f, 0.011677765287458897f, 0.0148931834846735f, 0.005156617145985365f, 0.00659187650308013f, 0.013737501576542854f, 0.007101821713149548f, 0.0052627925761044025f, 0.0025724819861352444f, 0.003600307973101735f, 0.0031412162352353334f, 0.005641886964440346f, 0.005023342091590166f, 0.005137649364769459f, 0.004423429258167744f, 0.0019874221179634333f, 0.004172642249614f, 0.002615298144519329f, 0.009346175007522106f, 0.003993785474449396f, 0.005771870259195566f, 0.006921705324202776f, 0.0019225581781938672f, 0.004379855003207922f, 0.0064239539206027985f, 0.005162714049220085f, 0.004469478968530893f, 0.005837913602590561f, 0.0047427937388420105f, 0.0049607898108661175f, 0.004980920348316431f, 0.004123503342270851f, 0.005196739453822374f, 0.003436142345890403f, 0.004737198818475008f, 0.001766845933161676f, 0.005495110992342234f, 0.005644478835165501f, 0.006012964993715286f, 0.002969815395772457f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004396868869662285f, 0.0029120526742190123f, 0.0019229748286306858f, 0.003999668639153242f, 0.002814513398334384f, 0.004401788581162691f, 0.0018629957921802998f, 0.0032196249812841415f, 0.004196758382022381f, 0.0037531768903136253f, 0.001966036157682538f, 0.003045832272619009f, 0.002382357371971011f, 0.0044300369918346405f, 0.004325638525187969f, 0.002757533686235547f, 0.005701845977455378f, 0.0035988595336675644f, 0.0036494536325335503f, 0.0032628958579152822f, 0.003281275276094675f, 0.0023883928079158068f, 0.0026734312996268272f, 0.001816843170672655f, 0.0037647709250450134f, 0.006035547703504562f, 0.001839109230786562f, 0.003869628068059683f, 0.0038325076457113028f, 0.002122467616572976f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006013597012497485f, 0.0009287165012210608f, 0.0006964042549952865f, 0.0005980467540211976f, 0.0005559612181968987f, 0.0006957593141123652f, 0.0009751897305250168f, 0.0007152831531129777f, 0.0005931778578087687f, 0.0006180385244078934f, 0.0006569500546902418f, 0.0009377360693179071f, 0.0007519446080550551f, 0.0009299186640419066f, 0.0004682352882809937f, 0.0008448089938610792f, 0.0006675754557363689f, 0.0005153044476173818f, 0.0003606246900744736f, 0.0008480024989694357f, 0.000999901327304542f, 0.0005059576942585409f, 0.0007728410419076681f, 0.000575194600969553f, 0.0005053976783528924f, 0.0008389855502173305f, 0.0008000623784027994f, 0.001014426234178245f, 0.0008909829193726182f, 0.0006315896171145141f, 0.000741025316528976f, 0.0009265881963074207f, 0.0005268249078653753f, 0.0010504021774977446f, 0.0007081814692355692f, 0.0005978265544399619f, 0.0005865650018677115f, 0.0005752213764935732f, 0.0005598344723694026f, 0.0006981841288506985f, 0.000632522045634687f, 0.0008368496783077717f, 0.0009671847801655531f, 0.0005463757552206516f, 0.0006493597174994648f, 0.00043376642861403525f, 0.0006955755525268614f, 0.0005542769213207066f, 0.0006585242808796465f, 0.0007090845028869808f, 0.001027829828672111f, 0.0006781024858355522f, 0.0005787842674180865f, 0.0005862194811925292f, 0.0005923480493947864f, 0.0006877338164485991f, 0.0008212177781388164f, 0.0005646972567774355f, 0.0006639051134698093f, 0.0005147476913407445f, 0.0009366990416310728f, 0.0005418081418611109f, 0.0006689352449029684f, 0.0004622113483492285f, 0.0005348943523131311f, 0.0006455032853409648f, 0.0007644983706995845f, 0.0006317270454019308f, 0.0006134375580586493f, 0.00057649688096717f, 0.0006078048027120531f, 0.0006669000722467899f, 0.0006846276810392737f, 0.0006232855375856161f, 0.0009246479603461921f, 0.0007506825495511293f, 0.0006041342276148498f, 0.0007640288094989955f, 0.0005648860824294388f, 0.0005524427979253232f, 0.000529491575434804f, 0.0005293549620546401f, 0.0006146379746496677f, 0.0005162332090549171f, 0.0005333682638593018f, 0.000588335795328021f, 0.0007137514767237008f, 0.0008526473538950086f, 0.0007252314244396985f, 0.0005911004263907671f, 0.0005594255635514855f, 0.0006247737328521907f, 0.0006128789391368628f, 0.0005677926819771528f, 0.0005516877281479537f, 0.0004617608501575887f, 0.0007265544845722616f, 0.0006137553136795759f, 0.000915883865673095f, 0.0005928192404098809f, 0.0006735022761859f, 0.0008280135807581246f, 0.00041506218258291483f, 0.0007256927201524377f, 0.0005664947093464434f, 0.0006835980457253754f, 0.0006579348118975759f, 0.00064074870897457f, 0.0008150277426466346f, 0.0005346154212020338f, 0.0006177067407406867f, 0.0006385096348822117f, 0.0007033129222691059f, 0.0005912805791012943f, 0.0005443317350000143f, 0.0005564455641433597f, 0.0005334379966370761f, 0.0005249724490568042f, 0.0005734024452976882f, 0.0006580324843525887f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005034531932324171f, 0.003836012212559581f, 0.00446139695122838f, 0.004233403131365776f, 0.004967093002051115f, 0.004664957989007235f, 0.005528142210096121f, 0.0039895763620734215f, 0.004837907385081053f, 0.004601289052516222f, 0.0038048517890274525f, 0.005214535631239414f, 0.005156669765710831f, 0.004744612146168947f, 0.0036952400114387274f, 0.005086358170956373f, 0.004500947892665863f, 0.004053601995110512f, 0.005495019257068634f, 0.004544462077319622f, 0.004486788529902697f, 0.005881948862224817f, 0.006935132667422295f, 0.004189788363873959f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001388506731018424f, 0.0016545334365218878f, 0.0021949780639261007f, 0.003445587120950222f, 0.0016861853655427694f, 0.001882229815237224f, 0.0028587759006768465f, 0.0015488333301618695f, 0.001653601648285985f, 0.001480159000493586f, 0.0021917715203016996f, 0.0019173624459654093f, 0.0014835926704108715f, 0.001600197865627706f, 0.001954610925167799f, 0.0022082494106143713f, 0.0018217316828668118f, 0.002393928589299321f, 0.002473327098414302f, 0.0027881732676178217f, 0.0025371338706463575f, 0.0020941663533449173f, 0.0018421531422063708f, 0.002642359584569931f, 0.0018571922555565834f, 0.001859232783317566f, 0.0014877355424687266f, 0.0011519716354086995f, 0.0031105894595384598f, 0.0016374574042856693f, 0.0023453240282833576f, 0.002068036003038287f, 0.0018130758544430137f, 0.0015866251196712255f, 0.001254908973351121f, 0.0016435146098956466f, 0.0014161430299282074f, 0.0016750472132116556f, 0.0019504550145938993f, 0.0014382894150912762f, 0.0021039966959506273f, 0.001602178905159235f, 0.0029491849709302187f, 0.0016213569324463606f, 0.0026389709673821926f, 0.0024413603823632f, 0.0020210514776408672f, 0.001776072196662426f, 0.0017998848343268037f, 0.0019684883300215006f, 0.0019034413853660226f, 0.0015308130532503128f, 0.002489950507879257f, 0.0017147088656201959f, 0.0020941030234098434f, 0.0025997748598456383f, 0.001972825499251485f, 0.0011047020088881254f, 0.001719184685498476f, 0.0019490374252200127f, 0.0018183259526267648f, 0.0012755594216287136f, 0.0017981386044993997f, 0.0015769987367093563f, 0.0019064868101850152f, 0.002386255655437708f, 0.0016630878672003746f, 0.0032163122668862343f, 0.001794707030057907f, 0.001850245869718492f, 0.001995969098061323f, 0.00249641970731318f, 0.0020987342577427626f, 0.0018573154229670763f, 0.0017578714760020375f, 0.001159717096015811f, 0.001771327224560082f, 0.0021713373716920614f, 0.0019143627723678946f, 0.0015661702491343021f, 0.0017888311995193362f, 0.0013108846032992005f, 0.001744873239658773f, 0.0028987398836761713f, 0.0019618943333625793f, 0.002854208229109645f, 0.001769473310559988f, 0.001247005769982934f, 0.0020651191007345915f, 0.0018005045130848885f, 0.0017692414112389088f, 0.001959193730726838f, 0.001397604588419199f, 0.0013386710779741406f, 0.0014527057064697146f, 0.00228829775005579f, 0.0023584032896906137f, 0.0016989841824397445f, 0.0021098109427839518f, 0.002307969843968749f, 0.0012670070864260197f, 0.0015716403722763062f, 0.002147195627912879f, 0.002222248585894704f, 0.0016222960548475385f, 0.0019255877705290914f, 0.0013388101942837238f, 0.00148258067201823f, 0.0012732979375869036f, 0.0012766837608069181f, 0.0021598385646939278f, 0.0018134831916540861f, 0.002217732835561037f, 0.0023738043382763863f, 0.001485369517467916f, 0.0018887213664129376f, 0.0019260188564658165f, 0.001380450208671391f, 0.002795414999127388f, 0.002127232728525996f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004434704780578613f, 0.004369470756500959f, 0.005002912599593401f, 0.002506736433133483f, 0.0032077901996672153f, 0.005233372561633587f, 0.0034314030781388283f, 0.009605173021554947f, 0.0065209087915718555f, 0.005349215120077133f, 0.0025713087525218725f, 0.0033652898855507374f, 0.003390013938769698f, 0.002712191781029105f, 0.0031120204366743565f, 0.004087701439857483f, 0.006762132979929447f, 0.003500086721032858f, 0.003749897237867117f, 0.0022582144010812044f, 0.0037732268683612347f, 0.0036843346897512674f, 0.0068756346590816975f, 0.0033110955264419317f, 0.0048642707988619804f, 0.006584517657756805f, 0.005308286286890507f, 0.00938266608864069f, 0.0047093345783650875f, 0.005682476330548525f, 0.0041359467431902885f, 0.004900343716144562f, 0.0044731684029102325f, 0.0036355454940348864f, 0.006409524939954281f, 0.006956323981285095f, 0.003285685321316123f, 0.008582442067563534f, 0.004852148238569498f, 0.003812065813690424f, 0.007019866723567247f, 0.007563317660242319f, 0.0028517390601336956f, 0.0055231088772416115f, 0.003737939987331629f, 0.0020384748931974173f, 0.005097405984997749f, 0.004240850452333689f, 0.003012268338352442f, 0.0024485078174620867f, 0.005477377213537693f, 0.003308239160105586f, 0.003059378359466791f, 0.008779809810221195f, 0.003481557359918952f, 0.005095608998090029f, 0.005209270399063826f, 0.006816504057496786f, 0.0037554071750491858f, 0.007031883578747511f, 0.004961982369422913f, 0.0073271882720291615f, 0.0042038667015731335f, 0.010419129393994808f, 0.004288600757718086f, 0.003353784093633294f, 0.004152286797761917f, 0.003459907602518797f, 0.005380592774599791f, 0.005185656249523163f, 0.0026145856827497482f, 0.0027605672366917133f, 0.0045864698477089405f, 0.0056482651270926f, 0.0046212938614189625f, 0.012961002066731453f, 0.00396505743265152f, 0.005570318549871445f, 0.004613103345036507f, 0.004973412957042456f, 0.006924315355718136f, 0.01799178123474121f, 0.0044536953791975975f, 0.00204696343280375f, 0.002683699829503894f, 0.0025579100474715233f, 0.0030854165088385344f, 0.0037792755756527185f, 0.005143479909747839f, 0.008190724067389965f, 0.004672751761972904f, 0.002566714072600007f, 0.004758272785693407f, 0.010022405534982681f, 0.005288281943649054f, 0.0033180757891386747f, 0.004752082284539938f, 0.003078291891142726f, 0.004015286918729544f, 0.0036673014983534813f, 0.012009887956082821f, 0.00430384511128068f, 0.003202748019248247f, 0.005432480480521917f, 0.0055913557298481464f, 0.006623683497309685f, 0.00639682449400425f, 0.006019826512783766f, 0.012953067198395729f, 0.004994305316358805f, 0.002486473647877574f, 0.006064342800527811f, 0.00682230805978179f, 0.003584846155717969f, 0.006342627108097076f, 0.006034466437995434f, 0.0024259898345917463f, 0.004908619914203882f, 0.0025677443481981754f, 0.004098611418157816f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004252600483596325f, 0.0019619197119027376f, 0.0028251251205801964f, 0.0038124362472444773f, 0.0031123128719627857f, 0.004337676335126162f, 0.003853599773719907f, 0.0030983700416982174f, 0.004139086697250605f, 0.004163844045251608f, 0.0020959079265594482f, 0.004268809221684933f, 0.0038676480762660503f, 0.0038833217695355415f, 0.001722642919048667f, 0.0035975524224340916f, 0.003452977631241083f, 0.001978863263502717f, 0.0015844752779230475f, 0.0018680274952203035f, 0.001700146938674152f, 0.0018976153805851936f, 0.003946628887206316f, 0.0020209625363349915f, 0.0016881031915545464f, 0.0042143347673118114f, 0.0031591595616191626f, 0.0035663938615471125f, 0.0023925050627440214f, 0.002695896429941058f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00038925596163608134f, 0.0007659501279704273f, 0.0005028784507885575f, 0.0005228628870099783f, 0.0005901096155866981f, 0.0006136823212727904f, 0.000484337069792673f, 0.0006575874285772443f, 0.000671801099088043f, 0.00048517787945456803f, 0.0005100207636132836f, 0.0004866538511123508f, 0.0006113246781751513f, 0.0003973546845372766f, 0.0006340965628623962f, 0.0006581225316040218f, 0.0004997908254154027f, 0.00042487209429964423f, 0.0003602594370022416f, 0.0005497513338923454f, 0.0006545307696796954f, 0.0005093602230772376f, 0.00044087396236136556f, 0.0008185728220269084f, 0.0007713630911894143f, 0.0005325086531229317f, 0.0005273790447972715f, 0.0006088829832151532f, 0.0005595419788733125f, 0.0008996610413305461f, 0.000623435596935451f, 0.0003315074136480689f, 0.0007273709052242339f, 0.0005562642472796142f, 0.0007428133394569159f, 0.0004671411297749728f, 0.0005601523444056511f, 0.00047905833343975246f, 0.0006136249867267907f, 0.0005144230672158301f, 0.0009097832371480763f, 0.000576272199396044f, 0.0005876884097233415f, 0.0005779393832199275f, 0.0007866046507842839f, 0.0006975268479436636f, 0.0005524636944755912f, 0.0006755418726243079f, 0.0005204203189350665f, 0.0005338559276424348f, 0.0012111064279451966f, 0.0006721823010593653f, 0.0005739511107094586f, 0.0007424480863846838f, 0.0005401577218435705f, 0.0004415973962750286f, 0.0008726072846911848f, 0.0007608616724610329f, 0.0007776333950459957f, 0.0005993995000608265f, 0.0007579360390082002f, 0.0006745414575561881f, 0.000759428774472326f, 0.0008842316456139088f, 0.000687028281390667f, 0.00067380559630692f, 0.000776883156504482f, 0.0007727163028903306f, 0.0007021209457889199f, 0.0004240347188897431f, 0.0006074053235352039f, 0.0005719693144783378f, 0.0006327898590825498f, 0.0004954733303748071f, 0.0006285424460656941f, 0.0004581341054290533f, 0.0006057028658688068f, 0.0005542352446354926f, 0.00033095304388552904f, 0.0006359204417094588f, 0.0003738475788850337f, 0.0009305070852860808f, 0.0005099800764583051f, 0.0006266847485676408f, 0.0004925792454741895f, 0.000407412153435871f, 0.00039687170647084713f, 0.0006770513718947768f, 0.0004726488550659269f, 0.0004615307261701673f, 0.000727639184333384f, 0.0005687489756383002f, 0.0007955615874379873f, 0.0007130798767320812f, 0.00040514892316423357f, 0.000523987109772861f, 0.0004482903459575027f, 0.0008882550173439085f, 0.0005259579629637301f, 0.00045861973194405437f, 0.0005998921697027981f, 0.0007848088862374425f, 0.0003796774544753134f, 0.00039849409949965775f, 0.0008163278689607978f, 0.00037798445555381477f, 0.0008189729414880276f, 0.0008413358009420335f, 0.0007374922861345112f, 0.0005309830303303897f, 0.0006675986223854125f, 0.0006129596149548888f, 0.00036552827805280685f, 0.000543067988473922f, 0.000621266954112798f, 0.000525664712768048f, 0.0007428282406181097f, 0.0003893005778081715f, 0.00042442211997695267f, 0.0008414250914938748f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005000153090804815f, 0.00476440042257309f, 0.0055715106427669525f, 0.003644159296527505f, 0.00420301454141736f, 0.003908138256520033f, 0.0038358913734555244f, 0.005983700044453144f, 0.004209030885249376f, 0.004283237271010876f, 0.004361404106020927f, 0.005061355419456959f, 0.003537978045642376f, 0.004471679218113422f, 0.003021610202267766f, 0.003552080364897847f, 0.006115640513598919f, 0.004290441516786814f, 0.0043770065531134605f, 0.0036104642786085606f, 0.003431472461670637f, 0.004641818813979626f, 0.004815247375518084f, 0.002659641206264496f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001835859497077763f, 0.002137810690328479f, 0.001911517116241157f, 0.001288251020014286f, 0.0013875835575163364f, 0.001748509588651359f, 0.0014618851710110903f, 0.0022841193713247776f, 0.0011160699650645256f, 0.0017239610897377133f, 0.0022402938921004534f, 0.001438609091565013f, 0.0011938679963350296f, 0.001846431172452867f, 0.0011155224638059735f, 0.0027899795677512884f, 0.0011655183043330908f, 0.002215920016169548f, 0.0016104361275210977f, 0.001820060540921986f, 0.0015903778839856386f, 0.001699053798802197f, 0.0019911217968910933f, 0.0021354160271584988f, 0.0016026068478822708f, 0.001413657097145915f, 0.0017898289952427149f, 0.0012994249118492007f, 0.0019122730009257793f, 0.0019864244386553764f, 0.0015259742503985763f, 0.0018396730301901698f, 0.0012445858446881175f, 0.0017905302811414003f, 0.0012829730985686183f, 0.0019118888303637505f, 0.0016433951677754521f, 0.0023019618820399046f, 0.0014763857470825315f, 0.0014025565469637513f, 0.002202261472120881f, 0.00192515947856009f, 0.001742008258588612f, 0.000836964522022754f, 0.0016641574911773205f, 0.002290866570547223f, 0.0019361530430614948f, 0.0014027876313775778f, 0.0020602026488631964f, 0.0024838701356202364f, 0.0024459105916321278f, 0.0014549229526892304f, 0.0013047936372458935f, 0.0010743732564151287f, 0.001601990545168519f, 0.0015141596086323261f, 0.0013521431246772408f, 0.0017014496261253953f, 0.0011731713311746716f, 0.001265741535462439f, 0.0015992323169484735f, 0.001511856447905302f, 0.0016420951578766108f, 0.00175807299092412f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00884266011416912f, 0.004078806843608618f, 0.00446961959823966f, 0.008584885857999325f, 0.005049737635999918f, 0.0065357256680727005f, 0.008408495225012302f, 0.002805419033393264f, 0.0079476498067379f, 0.005712341051548719f, 0.0021293293684720993f, 0.005104675889015198f, 0.00656662555411458f, 0.0029989781323820353f, 0.008698219433426857f, 0.002236681990325451f, 0.0038994690403342247f, 0.003170756157487631f, 0.00789390318095684f, 0.003354130545631051f, 0.006506037898361683f, 0.004413188900798559f, 0.007534455042332411f, 0.0024718802887946367f, 0.007194459903985262f, 0.0030351814348250628f, 0.0036173344124108553f, 0.00737849110737443f, 0.00676016416400671f, 0.0028792284429073334f, 0.0076204040087759495f, 0.003527984721586108f, 0.007442374713718891f, 0.0022264807485044003f, 0.005046894773840904f, 0.004216697532683611f, 0.0023815224412828684f, 0.0034556954633444548f, 0.006258793640881777f, 0.0035815269220620394f, 0.005425342358648777f, 0.003229177091270685f, 0.003465045476332307f, 0.010125144384801388f, 0.004141263198107481f, 0.002964838407933712f, 0.002359617268666625f, 0.003619811264798045f, 0.0029502406250685453f, 0.0031076024752110243f, 0.0025153651367872953f, 0.00545418169349432f, 0.006921127438545227f, 0.008192962035536766f, 0.003977839834988117f, 0.0032071685418486595f, 0.008502107113599777f, 0.004077434539794922f, 0.005144280847162008f, 0.007559068966656923f, 0.0032339943572878838f, 0.00577038386836648f, 0.0047097764909267426f, 0.0023511380422860384f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004346209578216076f, 0.002735417801886797f, 0.004784686956554651f, 0.0037760913837701082f, 0.0034116748720407486f, 0.003550719004124403f, 0.0030491764191538095f, 0.0033739437349140644f, 0.003935225307941437f, 0.004429669119417667f, 0.003250381676480174f, 0.0034848337527364492f, 0.0038753373082727194f, 0.0024417389649897814f, 0.003711673663929105f, 0.004424014128744602f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004128437431063503f, 0.0005988963530398905f, 0.0007763499743305147f, 0.000774647924117744f, 0.0007633036002516747f, 0.0008815082255750895f, 0.0007087438134476542f, 0.00047458516201004386f, 0.0007406755466945469f, 0.0004543130344245583f, 0.000684877042658627f, 0.0005418312503024936f, 0.0005523186409845948f, 0.0004073107847943902f, 0.0006352022173814476f, 0.0006292241741903126f, 0.0005245077190920711f, 0.000644916552118957f, 0.0005738104227930307f, 0.0009074921836145222f, 0.0005150082288309932f, 0.00039325570105575025f, 0.0005429306766018271f, 0.001027169986627996f, 0.0005165503243915737f, 0.0007618498057126999f, 0.0005369251593947411f, 0.0006620910135097802f, 0.0005035113426856697f, 0.0006103770574554801f, 0.0006310907774604857f, 0.0006916330894455314f, 0.0008138056728057563f, 0.00042434889473952353f, 0.0006512163672596216f, 0.0006286484422162175f, 0.0008260638569481671f, 0.0008559637353755534f, 0.0005770740681327879f, 0.0006096817087382078f, 0.0006194640882313251f, 0.0006425895844586194f, 0.000591943331528455f, 0.0006117704906500876f, 0.0008073298959061503f, 0.0004615063371602446f, 0.0007395814172923565f, 0.0008142463047988713f, 0.000724321638699621f, 0.0006264692055992782f, 0.000734636269044131f, 0.0007111161830835044f, 0.000757741101551801f, 0.0005206775385886431f, 0.0006080184830352664f, 0.00057373964227736f, 0.0006805542507208884f, 0.0005954523221589625f, 0.0006521057803183794f, 0.0006312477053143084f, 0.0005859155789949f, 0.0008195216068997979f, 0.000704444304574281f, 0.0005892032640986145f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005890291649848223f, 0.006934344302862883f, 0.006947038695216179f, 0.006899222265928984f, 0.0053720371797680855f, 0.005814633797854185f, 0.0076571679674088955f, 0.0076706320978701115f, 0.005029906053096056f, 0.005939708091318607f, 0.005228516645729542f, 0.005567947402596474f, 0.0048711178824305534f, 0.00707556726410985f, 0.00581886013969779f, 0.00528846075758338f, 0.0059453509747982025f, 0.006149401422590017f, 0.007396487984806299f, 0.005688246339559555f, 0.005181795917451382f, 0.00655108829960227f, 0.006268956232815981f, 0.00614197226241231f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015286896377801895f, 0.001575456466525793f, 0.0011586612090468407f, 0.001042608986608684f, 0.0015245582908391953f, 0.001506740227341652f, 0.001393828890286386f, 0.0010129980510100722f, 0.0015998510643839836f, 0.0009073196561075747f, 0.0011413907632231712f, 0.0013091617729514837f, 0.0012095918646082282f, 0.0013145211851224303f, 0.0015433166408911347f, 0.0015627415850758553f, 0.0007647530292160809f, 0.0012617864413186908f, 0.0016077363397926092f, 0.0017638233257457614f, 0.0013715409440919757f, 0.0015394734218716621f, 0.001606972306035459f, 0.0012758721131831408f, 0.0011517676757648587f, 0.001257284078747034f, 0.000963321712333709f, 0.0017743960488587618f, 0.0015785059658810496f, 0.0016626827418804169f, 0.0016106849070638418f, 0.0011787237599492073f, 0.0013831515097990632f, 0.0011879014782607555f, 0.001348799909465015f, 0.0006967511726543307f, 0.0012893563834950328f, 0.0007900199852883816f, 0.0010194550268352032f, 0.0010255594970658422f, 0.0023757482413202524f, 0.0013190743047744036f, 0.0012417422840371728f, 0.0023993863724172115f, 0.0015882543521001935f, 0.0015903559979051352f, 0.0011578698176890612f, 0.0010229614563286304f, 0.0010557572823017836f, 0.0011883757542818785f, 0.0013485519448295236f, 0.001464678207412362f, 0.0014524692669510841f, 0.0022819521836936474f, 0.0010624745627865195f, 0.0009645406389608979f, 0.0017394981114193797f, 0.0009528910741209984f, 0.0013149704318493605f, 0.0015541381435468793f, 0.0019886346999555826f, 0.0014352566795423627f, 0.001339102745987475f, 0.002187307458370924f, 0.0016832527471706271f, 0.0011712544364854693f, 0.0014921912224963307f, 0.0014630729565396905f, 0.0017451690509915352f, 0.001495179021731019f, 0.0011632583336904645f, 0.001261673984117806f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005780352745205164f, 0.002477383241057396f, 0.008328848518431187f, 0.003288793843239546f, 0.0041047330014407635f, 0.0026817647740244865f, 0.0023854910396039486f, 0.007173648104071617f, 0.002530280500650406f, 0.00859589409083128f, 0.0069038150832057f, 0.007566952612251043f, 0.004851229954510927f, 0.00261450232937932f, 0.0042520989663898945f, 0.003916159272193909f, 0.013695321045815945f, 0.005741094704717398f, 0.0030045548919588327f, 0.004436969757080078f, 0.0035370870027691126f, 0.0026858514174818993f, 0.0015403974102810025f, 0.007629939820617437f, 0.007383944001048803f, 0.005120586138218641f, 0.007794412784278393f, 0.0032223896123468876f, 0.002680353354662657f, 0.0020192908123135567f, 0.00276195234619081f, 0.0019646596629172564f, 0.004065088927745819f, 0.005981128197163343f, 0.002560814144089818f, 0.010705775581300259f, 0.0031540547497570515f, 0.004170700907707214f, 0.004967504646629095f, 0.011636261828243732f, 0.003511375980451703f, 0.005934106186032295f, 0.005529290996491909f, 0.0021403313148766756f, 0.0024969603400677443f, 0.005983063485473394f, 0.005799153819680214f, 0.005692590959370136f, 0.004687767941504717f, 0.009159456007182598f, 0.004878746345639229f, 0.004417956341058016f, 0.007904790341854095f, 0.0023161559365689754f, 0.004283765330910683f, 0.007742724381387234f, 0.002615801990032196f, 0.010028686374425888f, 0.00460518803447485f, 0.0028586285188794136f, 0.0030219433829188347f, 0.0048678540624678135f, 0.003973548766225576f, 0.004205797333270311f, 0.0027239620685577393f, 0.005887799896299839f, 0.007141132839024067f, 0.004054269753396511f, 0.002157284412533045f, 0.007336329203099012f, 0.003630358027294278f, 0.003951006103307009f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002536294749006629f, 0.00514178304001689f, 0.003049807855859399f, 0.0035979978274554014f, 0.003657373832538724f, 0.00457817642018199f, 0.003641179297119379f, 0.0026085779536515474f, 0.0030731370206922293f, 0.0029694223776459694f, 0.003987092990428209f, 0.003004390047863126f, 0.003565337276086211f, 0.0033825396094471216f, 0.002557275118306279f, 0.003990526311099529f, 0.0027006641030311584f, 0.0033686573151499033f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004944894462823868f, 0.0005695046856999397f, 0.0005949391052126884f, 0.0005966714234091341f, 0.000695495109539479f, 0.00052183325169608f, 0.0008246557554230094f, 0.0006998052704147995f, 0.0006447135820053518f, 0.000556831480935216f, 0.0007415040163323283f, 0.0004864362417720258f, 0.0005890753236599267f, 0.0005043862038291991f, 0.0005809972062706947f, 0.0007098247879184783f, 0.0004915089230053127f, 0.0004786689532920718f, 0.0006161708733998239f, 0.0005871843313798308f, 0.0006672443705610931f, 0.0004699099517893046f, 0.0007078097551129758f, 0.0007653646753169596f, 0.0006826758617535233f, 0.0006308412994258106f, 0.0007118847570382059f, 0.0006810094346292317f, 0.0004646489105653018f, 0.0006260419613681734f, 0.0006345177534967661f, 0.0004704767488874495f, 0.0005342357326298952f, 0.0004904478555545211f, 0.000663040904328227f, 0.0005316001479513943f, 0.0004909035633318126f, 0.0007316244300454855f, 0.0007465262897312641f, 0.0004376873839646578f, 0.0007972787134349346f, 0.000556037062779069f, 0.0009831773350015283f, 0.0005385993281379342f, 0.0004246462485753f, 0.0004909705021418631f, 0.00041880967910401523f, 0.0005124689196236432f, 0.0006149305845610797f, 0.0004604530113283545f, 0.0006091411341913044f, 0.0006278743967413902f, 0.0007038569892756641f, 0.0004532151506282389f, 0.0006629645940847695f, 0.0005499590770341456f, 0.0005732404533773661f, 0.0006926041096448898f, 0.0006480083684436977f, 0.0004906601388938725f, 0.0008090678020380437f, 0.0004406381049193442f, 0.0007602576515637338f, 0.0005586569313891232f, 0.0006932165124453604f, 0.0008686613291501999f, 0.0005932778003625572f, 0.0008302871719934046f, 0.0004208290483802557f, 0.0005459737149067223f, 0.0006257236236706376f, 0.000655733747407794f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0073214140720665455f, 0.005450601223856211f, 0.005234887823462486f, 0.007419282104820013f, 0.005661483854055405f, 0.007934598252177238f, 0.007283677812665701f, 0.005544358864426613f, 0.0057794502936303616f, 0.007099198177456856f, 0.005354967899620533f, 0.006118670105934143f, 0.0069481851533055305f, 0.005099551286548376f, 0.005837058648467064f, 0.006504564546048641f, 0.007913780398666859f, 0.005640880204737186f, 0.005887616891413927f, 0.0047235023230314255f, 0.005633282940834761f, 0.006169616710394621f, 0.006122549995779991f, 0.0036939436104148626f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013096679467707872f, 0.0019780707079917192f, 0.0017759111942723393f, 0.0014981202548369765f, 0.000987143605016172f, 0.0012876277323812246f, 0.001166225061751902f, 0.0011998529080301523f, 0.0009342818520963192f, 0.0009722763206809759f, 0.0014193078968673944f, 0.0019708173349499702f, 0.0008353708544746041f, 0.0009356927475892007f, 0.0006864207680337131f, 0.0011749900877475739f, 0.0013434565626084805f, 0.0015170312253758311f, 0.001715595368295908f, 0.001048117526806891f, 0.0011985229793936014f, 0.0017460694070905447f, 0.0009345710277557373f, 0.0015326273860409856f, 0.0018175244331359863f, 0.001708943280391395f, 0.0011077929520979524f, 0.0006524829077534378f, 0.0006918892613612115f, 0.0012393184006214142f, 0.0013100014766678214f, 0.0020293588750064373f, 0.0012342276750132442f, 0.000892512733116746f, 0.0015339787350967526f, 0.0007924955571070313f, 0.0014393195742741227f, 0.0015526568749919534f, 0.001254669507034123f, 0.0011665265774354339f, 0.0013747025514021516f, 0.0010123008396476507f, 0.0010505490936338902f, 0.001377241569571197f, 0.0016596182249486446f, 0.0016556329792365432f, 0.0016031317645683885f, 0.0012009156635031104f, 0.0008218493894673884f, 0.0013492550933733582f, 0.001197634031996131f, 0.0015528766671195626f, 0.0009303329861722887f, 0.0010969246504828334f, 0.0015029390342533588f, 0.0017859734361991286f, 0.0014940915862098336f, 0.0009442244772799313f, 0.0015017236582934856f, 0.0006837768596597016f, 0.0020550955086946487f, 0.0017618887359276414f, 0.001281922566704452f, 0.0011028738226741552f, 0.0013772023376077414f, 0.0010984819382429123f, 0.0012841759016737342f, 0.0013419503811746836f, 0.0012113263364881277f, 0.0009367161546833813f, 0.001187648973427713f, 0.001128310919739306f, 0.0013062719954177737f, 0.0014010939048603177f, 0.0013637765077874064f, 0.0013565215049311519f, 0.0021180950570851564f, 0.001144380308687687f, 0.0018105601193383336f, 0.0013068194966763258f, 0.0013248724862933159f, 0.0015340400859713554f, 0.0011282498016953468f, 0.0014992220094427466f, 0.0010457680327817798f, 0.0012370678596198559f, 0.0011363124940544367f, 0.002012326382100582f, 0.0012442099396139383f, 0.0011499810498207808f, 0.0012971221003681421f, 0.0010584952542558312f, 0.0007770770462229848f, 0.0014264582423493266f, 0.0006123389466665685f, 0.0013299661222845316f, 0.0015677543124184012f, 0.0011567248729988933f, 0.0011310186237096786f, 0.001393816783092916f, 0.0012666378170251846f, 0.0012349039316177368f, 0.001211686059832573f, 0.0011497022351250052f, 0.001202961546368897f, 0.0011706058867275715f, 0.0010811936808750033f, 0.001310835243202746f, 0.0011055141221731901f, 0.001325337216258049f, 0.0012394883669912815f, 0.001130834687501192f, 0.0012890816433355212f, 0.001057939138263464f, 0.0009435889078304172f, 0.0012721639359369874f, 0.001262524863705039f, 0.0008678919984959066f, 0.0010563501855358481f, 0.0010632178746163845f, 0.0019461183110252023f, 0.0012358936946839094f, 0.001191491144709289f, 0.00116793776396662f, 0.0013161089736968279f, 0.0012458114651963115f, 0.0011114401277154684f, 0.0007549186702817678f, 0.0009474399266764522f, 0.0014966391026973724f, 0.0013151817256584764f, 0.0010377959115430713f, 0.0010904574301093817f, 0.0009207178954966366f, 0.0011832548771053553f, 0.00126129318960011f, 0.0013339808210730553f, 0.0012329923920333385f, 0.001381878973916173f, 0.0016707406612113118f, 0.0015901199076324701f, 0.0018736738711595535f, 0.0012000027345493436f, 0.0012032300001010299f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003204133128747344f, 0.002981074620038271f, 0.0037006994243711233f, 0.0035745659843087196f, 0.0029867684934288263f, 0.0032322045881301165f, 0.005548382643610239f, 0.0033874157816171646f, 0.0054170903749763966f, 0.0032789986580610275f, 0.004353728145360947f, 0.0037535540759563446f, 0.008619430474936962f, 0.0035516717471182346f, 0.013353773392736912f, 0.0024838303215801716f, 0.0027158609591424465f, 0.0035165075678378344f, 0.004655493423342705f, 0.0038933795876801014f, 0.0054975575767457485f, 0.001739709754474461f, 0.007798958104103804f, 0.002770530292764306f, 0.0032597784884274006f, 0.004453512839972973f, 0.003117635380476713f, 0.014001676812767982f, 0.008751538582146168f, 0.0032942993566393852f, 0.0039041393902152777f, 0.0032630732748657465f, 0.004846361931413412f, 0.007892196998000145f, 0.0019754201639443636f, 0.005886952392756939f, 0.0050839874893426895f, 0.003816379467025399f, 0.004801291506737471f, 0.006358061917126179f, 0.0030572335235774517f, 0.0035067154094576836f, 0.005825419910252094f, 0.0021187313832342625f, 0.0020435377955436707f, 0.0024937463458627462f, 0.003052913350984454f, 0.003617676207795739f, 0.008232489228248596f, 0.004217538516968489f, 0.003498406382277608f, 0.004196007736027241f, 0.00567195750772953f, 0.002975440351292491f, 0.0035688383504748344f, 0.0035418160259723663f, 0.0023780770134180784f, 0.0069032409228384495f, 0.0026598176918923855f, 0.0077897245064377785f, 0.002566477982327342f, 0.002470731269568205f, 0.005198173690587282f, 0.0030852335039526224f, 0.003629171522334218f, 0.003649985184893012f, 0.0036403543781489134f, 0.0033084989991039038f, 0.00448477640748024f, 0.004263342823833227f, 0.007953925058245659f, 0.0028585337568074465f, 0.002976766088977456f, 0.004119332414120436f, 0.0029091767501085997f, 0.008030270226299763f, 0.0032139711547642946f, 0.003379682544618845f, 0.002588969189673662f, 0.0031211869791150093f, 0.0033331403974443674f, 0.002630719216540456f, 0.0025895466096699238f, 0.005288338288664818f, 0.0027945851907134056f, 0.003080330789089203f, 0.0035085587296634912f, 0.002482662908732891f, 0.007371330633759499f, 0.00566520681604743f, 0.002493055770173669f, 0.005980900023132563f, 0.0074393730610609055f, 0.003095200750976801f, 0.010450783185660839f, 0.006456612143665552f, 0.0054834079928696156f, 0.0033461193088442087f, 0.003539799712598324f, 0.002033629920333624f, 0.003496973542496562f, 0.005532823968678713f, 0.012121343053877354f, 0.006504648365080357f, 0.002510554390028119f, 0.005003752186894417f, 0.00630605686455965f, 0.0030002789571881294f, 0.006090008188039064f, 0.005421412643045187f, 0.0056673758663237095f, 0.004642612766474485f, 0.004120917990803719f, 0.003837333992123604f, 0.004301673267036676f, 0.0037528357934206724f, 0.004192530643194914f, 0.006560936104506254f, 0.004776446148753166f, 0.004264196380972862f, 0.0020620396826416254f, 0.0038010193966329098f, 0.004502620082348585f, 0.0041026342660188675f, 0.0056192209012806416f, 0.004755701869726181f, 0.004026911687105894f, 0.008649489842355251f, 0.004450096748769283f, 0.003762500360608101f, 0.0032669557258486748f, 0.004446362145245075f, 0.005635301116853952f, 0.007726430427283049f, 0.006611201446503401f, 0.004151497036218643f, 0.003726884024217725f, 0.00692254351451993f, 0.006486969068646431f, 0.0027137824799865484f, 0.0015881441067904234f, 0.004241070244461298f, 0.004099180456250906f, 0.003359448164701462f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031163499224931f, 0.0018250674474984407f, 0.0035275404807180166f, 0.0034997891634702682f, 0.0019219976384192705f, 0.0028450742829591036f, 0.0015222389483824372f, 0.002507653785869479f, 0.0029800934717059135f, 0.001877897186204791f, 0.0029043362010270357f, 0.0033928542397916317f, 0.0031523345969617367f, 0.0037449393421411514f, 0.0016001536278054118f, 0.003276777220889926f, 0.004572358913719654f, 0.0016562645323574543f, 0.0019636317156255245f, 0.00239146058447659f, 0.003856748342514038f, 0.0038876058533787727f, 0.0036138356663286686f, 0.0027330240700393915f, 0.0035100472159683704f, 0.0040338169783353806f, 0.0019632375333458185f, 0.004219704307615757f, 0.0016506845131516457f, 0.0017267405055463314f, 0.0039781080558896065f, 0.004176802933216095f, 0.003870007349178195f, 0.003757346421480179f, 0.003231933107599616f, 0.003536362200975418f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007152538746595383f, 0.0006265240372158587f, 0.0005300527554936707f, 0.0005248913657851517f, 0.0005559331621043384f, 0.0005977788823656738f, 0.0005937899113632739f, 0.0006193945882841945f, 0.00040775781963020563f, 0.0004552518075797707f, 0.0006361131672747433f, 0.0007740859873592854f, 0.0005454576457850635f, 0.0008938076207414269f, 0.00037311602500267327f, 0.0007433200371451676f, 0.0005887041916139424f, 0.0005683334893546999f, 0.000482620409457013f, 0.0005430564633570611f, 0.00040399731369689107f, 0.000648625020403415f, 0.00061281758826226f, 0.0005902711418457329f, 0.0005751812714152038f, 0.0005865304847247899f, 0.0006504019256681204f, 0.0006399172125384212f, 0.0007026607636362314f, 0.0005941583076491952f, 0.0005493047065101564f, 0.00037701812107115984f, 0.0006020261207595468f, 0.0005649282247759402f, 0.0004936013137921691f, 0.0005718979518860579f, 0.0006559110479429364f, 0.0006446327897720039f, 0.0005215092678554356f, 0.0006018616841174662f, 0.0005791519652120769f, 0.0003380114503670484f, 0.0004627127491403371f, 0.000504584051668644f, 0.00044770704698748887f, 0.0008530040504410863f, 0.0005585860926657915f, 0.00048181170132011175f, 0.0004726262704934925f, 0.0005372815066948533f, 0.0004774220287799835f, 0.0005366512923501432f, 0.0006069358205422759f, 0.00046970657422207296f, 0.0004591115575749427f, 0.0005648778169415891f, 0.0004959311336278915f, 0.0006758090457879007f, 0.0003612608998082578f, 0.0006302797119133174f, 0.0005871932953596115f, 0.0008841656381264329f, 0.0004699883284047246f, 0.0005261691985651851f, 0.0004967341083101928f, 0.0006113867275416851f, 0.0005725553492084146f, 0.0006021879380568862f, 0.0006726072751916945f, 0.00041246446198783815f, 0.0004564431437756866f, 0.0005406307755038142f, 0.0004913097945973277f, 0.0005138586275279522f, 0.0004727102641481906f, 0.0006398925324901938f, 0.0004659980768337846f, 0.0003504393098410219f, 0.0007874612929299474f, 0.0006543686031363904f, 0.0005005259881727397f, 0.000411161599913612f, 0.0005753121222369373f, 0.00043817024561576545f, 0.0005740381893701851f, 0.0004483804805204272f, 0.0006297726649791002f, 0.00035845459206029773f, 0.0006361324922181666f, 0.0005531267379410565f, 0.0006543456693179905f, 0.000584553403314203f, 0.0005436292849481106f, 0.0005391663871705532f, 0.0006236527115106583f, 0.0004520052461884916f, 0.0004316707490943372f, 0.0007132467580959201f, 0.0008805409306660295f, 0.0005409986479207873f, 0.0006755611393600702f, 0.0006637334008701146f, 0.0005723130307160318f, 0.00037465745117515326f, 0.000697832612786442f, 0.0007175110513344407f, 0.0005604838370345533f, 0.0007622777484357357f, 0.0007376192952506244f, 0.000622560444753617f, 0.0005899689276702702f, 0.0006618293118663132f, 0.0005189512157812715f, 0.00038609374314546585f, 0.00040702149271965027f, 0.0004762421012856066f, 0.0005881309625692666f, 0.0003891018859576434f, 0.0006694451440125704f, 0.00046191198634915054f, 0.00041636242531239986f, 0.0007368828519247472f, 0.0005688827950507402f, 0.0006590744014829397f, 0.0007406445220112801f, 0.00037933813291601837f, 0.0005930161569267511f, 0.0007856391603127122f, 0.0004689850611612201f, 0.0005069036269560456f, 0.0006331732729449868f, 0.0004123584658373147f, 0.0007054221932776272f, 0.0006679942016489804f, 0.00043201830703765154f, 0.0005555773386731744f, 0.00039189454400911927f, 0.0006017533014528453f, 0.00043831259245052934f, 0.0005440092063508928f, 0.00046002378803677857f, 0.0004527724231593311f, 0.0005803612293675542f, 0.0006138739991001785f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003508621593937278f, 0.004699933808296919f, 0.003824549959972501f, 0.005211196839809418f, 0.004830533172935247f, 0.004874801728874445f, 0.004594235680997372f, 0.006244718562811613f, 0.004170567728579044f, 0.004969650413841009f, 0.00307561201043427f, 0.005502624437212944f, 0.0046156300231814384f, 0.0038324659690260887f, 0.004979278426617384f, 0.0042341118678450584f, 0.005278205499053001f, 0.004399842116981745f, 0.004647482186555862f, 0.005387284327298403f, 0.00475193839520216f, 0.005624548066407442f, 0.004041143227368593f, 0.00467058876529336f, 0.00547003885731101f, 0.0029816480819135904f, 0.004785783123224974f, 0.003890370950102806f, 0.004427508916705847f, 0.0038048147689551115f, 0.0038916149642318487f, 0.005362527910619974f, 0.0037781617138534784f, 0.004782775416970253f, 0.0037175072357058525f, 0.004112984519451857f, 0.0038476171903312206f, 0.0038472202140837908f, 0.0039055589586496353f, 0.0033038754481822252f, 0.0046409121714532375f, 0.004336765501648188f, 0.004957003053277731f, 0.004939419217407703f, 0.005054057110100985f, 0.004561662208288908f, 0.00411596754565835f, 0.005301465280354023f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001668732613325119f, 0.0015027211047708988f, 0.001865760306827724f, 0.0011956441449001431f, 0.001299164374358952f, 0.0014685549540445209f, 0.001921033370308578f, 0.0011313410941511393f, 0.001169336261227727f, 0.0021653578151017427f, 0.0016353368991985917f, 0.0012872425140812993f, 0.002387735992670059f, 0.001458783051930368f, 0.0020847644191235304f, 0.0016101414803415537f, 0.001483517000451684f, 0.0014692065306007862f, 0.0013438127934932709f, 0.0020665829069912434f, 0.0021518473513424397f, 0.0015978781739249825f, 0.001086724572815001f, 0.0027030915953218937f, 0.0022645897697657347f, 0.0019383660983294249f, 0.001111704157665372f, 0.002587422262877226f, 0.0021062251180410385f, 0.002175843808799982f, 0.0012056181440129876f, 0.0016881782794371247f, 0.0016329780919477344f, 0.0013934439048171043f, 0.0012431303039193153f, 0.0013828934170305729f, 0.0018798734527081251f, 0.0010328019270673394f, 0.0011970257619395852f, 0.001997589599341154f, 0.0023731961846351624f, 0.0012953613186255097f, 0.0020694227423518896f, 0.0016599183436483145f, 0.0032053745817393064f, 0.0018608439713716507f, 0.00042829886660911143f, 0.0018108304357156157f, 0.0011998377740383148f, 0.0020546773448586464f, 0.001670780242420733f, 0.001669574063271284f, 0.0018352920887991786f, 0.0013197790831327438f, 0.0013729484053328633f, 0.002527861623093486f, 0.0016103211091831326f, 0.001440704450942576f, 0.0015949595253914595f, 0.0016990286530926824f, 0.0022899832110852003f, 0.0017158188857138157f, 0.0014450463932007551f, 0.0029504161793738604f, 0.0014967945171520114f, 0.0016741204308345914f, 0.0022688305471092463f, 0.0017410247819498181f, 0.0013819457963109016f, 0.0015722069656476378f, 0.0017014779150485992f, 0.002234792336821556f, 0.002021533902734518f, 0.002263968111947179f, 0.0017815736355260015f, 0.0014473653864115477f, 0.0012518533039838076f, 0.002893976168707013f, 0.003315540961921215f, 0.00202304869890213f, 0.0012249808060005307f, 0.002197172259911895f, 0.0016949223354458809f, 0.0021267917472869158f, 0.0020151990465819836f, 0.0022806699853390455f, 0.0016424513887614012f, 0.0015729957958683372f, 0.001907315687276423f, 0.0019013758283108473f, 0.001208348199725151f, 0.0024801280815154314f, 0.0017754138680174947f, 0.00180427182931453f, 0.0021519088186323643f, 0.0017391963629052043f, 0.0015533672412857413f, 0.0017442378448322415f, 0.0012657730840146542f, 0.0016277150716632605f, 0.0022655553184449673f, 0.001302744960412383f, 0.0013461706694215536f, 0.002163490280508995f, 0.0019146184204146266f, 0.0023492637556046247f, 0.0016235748771578074f, 0.0019879681058228016f, 0.0014551974600180984f, 0.0016813010443001986f, 0.0014596694381907582f, 0.0028883647173643112f, 0.0013352388050407171f, 0.0010423690546303988f, 0.0018008570186793804f, 0.002692393958568573f, 0.0016457297606393695f, 0.0017364806262776256f, 0.0030710967257618904f, 0.0015274302568286657f, 0.002505824901163578f, 0.0009791584452614188f, 0.0019647162407636642f, 0.0016888772370293736f, 0.000728247279766947f, 0.0017382653895765543f, 0.0016671386547386646f, 0.001857125316746533f, 0.0033041448332369328f, 0.0015122948680073023f, 0.002513366751372814f, 0.0007779934094287455f, 0.0018954150145873427f, 0.0019604498520493507f, 0.0033529596403241158f, 0.0010406326036900282f, 0.001855192705988884f, 0.0020796481985598803f, 0.0011193423997610807f, 0.0030435959342867136f, 0.0013507126132026315f, 0.001581525313667953f, 0.0010081910295411944f, 0.0011323848739266396f, 0.0014941717963665724f, 0.0012974035926163197f, 0.002537781372666359f, 0.0024463627487421036f, 0.0016182546969503164f, 0.002271965378895402f, 0.0014096767408773303f, 0.0019469406688585877f, 0.0020053989719599485f, 0.0012141733895987272f, 0.00201186491176486f, 0.003035276662558317f, 0.0019214552594348788f, 0.001699222018942237f, 0.0015117607545107603f, 0.0010617191437631845f, 0.00240166368894279f, 0.0018002450233325362f, 0.001901729847304523f, 0.0013469624100252986f, 0.0011682850308716297f, 0.0018644409719854593f, 0.0016486672684550285f, 0.0026060580275952816f, 0.0019958640914410353f, 0.001114027458243072f, 0.0025951536372303963f, 0.0018505206098780036f, 0.0016172983450815082f, 0.0019206996075809002f, 0.0017622209852561355f, 0.0015386003069579601f, 0.002436271868646145f, 0.0019098875345662236f, 0.001533634727820754f, 0.0013133131433278322f, 0.001949551748111844f, 0.001639604102820158f, 0.0019377442076802254f, 0.0013671781634911895f, 0.0011800063075497746f, 0.002000289736315608f, 0.0019583639223128557f, 0.002312058350071311f, 0.0017023867694661021f, 0.0020638995338231325f, 0.0030554900877177715f, 0.0014499727403745055f, 0.0016601571114733815f, 0.0019853569101542234f, 0.0016022732015699148f, 0.0013946349499747157f, 0.0015758832450956106f, 0.0014608814381062984f, 0.0018137656152248383f, 0.001723822089843452f, 0.001683663809671998f, 0.0017769336700439453f, 0.0018046534387394786f, 0.002050299197435379f, 0.0012563001364469528f, 0.0018234659219160676f, 0.001937920693308115f, 0.002050901297479868f, 0.0023340745829045773f, 0.002593938959762454f, 0.0014602876035496593f, 0.0017331958515569568f, 0.0017129353946074843f, 0.0016300067072734237f, 0.0011506128357723355f, 0.0021055322140455246f, 0.0019897345919162035f, 0.0021036742255091667f, 0.0015215626917779446f, 0.0023480041418224573f, 0.0019308695336803794f, 0.0010704711312428117f, 0.0015395577065646648f, 0.0020410839933902025f, 0.001639152062125504f, 0.0031153825111687183f, 0.001611687010154128f, 0.0018630634294822812f, 0.0010766300838440657f, 0.001990133197978139f, 0.0019596845377236605f, 0.00226104655303061f, 0.001222733873873949f, 0.0016532985027879477f, 0.0008547992329113185f, 0.0017922683618962765f, 0.0012689554132521152f, 0.001285797799937427f, 0.0016330205835402012f, 0.0013219122774899006f, 0.0018376220250502229f, 0.0015437647234648466f, 0.0013001407496631145f, 0.0017567218746989965f, 0.001451584161259234f, 0.001083075418137014f, 0.002281077904626727f, 0.001937179476954043f, 0.0011700713075697422f, 0.0009204195230267942f, 0.0026319115422666073f, 0.001266521168872714f, 0.0025831558741629124f, 0.0016902589704841375f, 0.0009871444199234247f, 0.0014736477751284838f, 0.0020343088544905186f, 0.0017693445552140474f, 0.001553220092318952f, 0.001534425187855959f, 0.001563587924465537f, 0.0012283141259104013f, 0.0021617216989398003f, 0.002660007681697607f, 0.0008419232908636332f, 0.0017009447328746319f, 0.0018057047855108976f, 0.001423509675078094f, 0.0016778900753706694f, 0.0015407413011416793f, 0.0019196863286197186f, 0.0020114269573241472f, 0.0014698378508910537f, 0.0029027345590293407f, 0.001581276417709887f, 0.0013735650572925806f, 0.0031271104235202074f, 0.0013346074847504497f, 0.0013341819867491722f, 0.001096193096600473f, 0.0017709885723888874f, 0.0022515663877129555f, 0.0015918597346171737f, 0.003039769595488906f, 0.001191555056720972f, 0.0011177235282957554f, 0.0022049874532967806f, 0.002736939350143075f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003211196279153228f, 0.009346121922135353f, 0.0038672590162605047f, 0.0038964152336120605f, 0.00676285894587636f, 0.01456878986209631f, 0.007999224588274956f, 0.004220569506287575f, 0.005328851751983166f, 0.005527338478714228f, 0.003439594293013215f, 0.0055793519131839275f, 0.004272583872079849f, 0.006477719638496637f, 0.002927768277004361f, 0.003374831983819604f, 0.0035175548400729895f, 0.008825764991343021f, 0.006422912701964378f, 0.0031284657306969166f, 0.0028970364946871996f, 0.0015473651001229882f, 0.007528697606176138f, 0.0035945242270827293f, 0.0015557168517261744f, 0.004242493771016598f, 0.026446672156453133f, 0.002687922678887844f, 0.004755970556288958f, 0.004527527838945389f, 0.01032829936593771f, 0.0066045476123690605f, 0.002750788116827607f, 0.004113970790058374f, 0.004270128905773163f, 0.004739376716315746f, 0.003346967976540327f, 0.00891053956001997f, 0.010190080851316452f, 0.004252927843481302f, 0.004438470583409071f, 0.0034711817279458046f, 0.002617902122437954f, 0.007049154955893755f, 0.0025329487398266792f, 0.005284999031573534f, 0.04808667302131653f, 0.004500078037381172f, 0.01152426190674305f, 0.00496671162545681f, 0.003480921732261777f, 0.009225822985172272f, 0.005561036989092827f, 0.005069154780358076f, 0.0037974331062287092f, 0.004057189449667931f, 0.005637196823954582f, 0.004681679420173168f, 0.0033442971762269735f, 0.003628190141171217f, 0.005554388742893934f, 0.0025918087922036648f, 0.002483934164047241f, 0.005156602244824171f, 0.007350165396928787f, 0.004299880005419254f, 0.004486925899982452f, 0.0024688111152499914f, 0.00916404090821743f, 0.0029749900568276644f, 0.00397700909525156f, 0.0034376848489046097f, 0.0037328831385821104f, 0.003694771556183696f, 0.0037123924121260643f, 0.008569411933422089f, 0.007106773555278778f, 0.004597716964781284f, 0.005124220158904791f, 0.00442396430298686f, 0.0045232707634568214f, 0.004430133383721113f, 0.004704543389379978f, 0.0020508922170847654f, 0.003574599279090762f, 0.003983811009675264f, 0.004256580024957657f, 0.0025221658870577812f, 0.004106807988137007f, 0.005106491502374411f, 0.0055083297193050385f, 0.003829516936093569f, 0.004008656833320856f, 0.0033063062001019716f, 0.0021810822654515505f, 0.0050467862747609615f, 0.002586324932053685f, 0.00404294254258275f, 0.0042212060652673244f, 0.004883184097707272f, 0.0029592954088002443f, 0.003680166555568576f, 0.005682340823113918f, 0.004774314817041159f, 0.006034627091139555f, 0.004101715981960297f, 0.0049752709455788136f, 0.0037622388917952776f, 0.004701828118413687f, 0.004380709957331419f, 0.005956945009529591f, 0.003245600964874029f, 0.00509148184210062f, 0.004309135023504496f, 0.003966146614402533f, 0.00507063465192914f, 0.004023054149001837f, 0.004327071364969015f, 0.002906958106905222f, 0.005028902553021908f, 0.006785782519727945f, 0.007987885735929012f, 0.0029146303422749043f, 0.003939477261155844f, 0.02582879178225994f, 0.004022267647087574f, 0.0036250983830541372f, 0.002204028656706214f, 0.0017448648577556014f, 0.0030049376655369997f, 0.0033819160889834166f, 0.029109816998243332f, 0.0030749021098017693f, 0.006079467944800854f, 0.006340480875223875f, 0.003340773517265916f, 0.00277313613332808f, 0.0026496080681681633f, 0.005077297333627939f, 0.0031123217195272446f, 0.005310084205120802f, 0.005665748380124569f, 0.016449054703116417f, 0.006423013750463724f, 0.006488929968327284f, 0.004874422214925289f, 0.003343540709465742f, 0.0046674455516040325f, 0.00247730384580791f, 0.004053827840834856f, 0.002803587354719639f, 0.007435611914843321f, 0.004853470716625452f, 0.013245070353150368f, 0.003772942814975977f, 0.00388442724943161f, 0.0030266863759607077f, 0.004418060649186373f, 0.0033785980194807053f, 0.005642732605338097f, 0.003976764623075724f, 0.0032334807328879833f, 0.005083385854959488f, 0.004668486770242453f, 0.003792730625718832f, 0.003216866636648774f, 0.0035375887528061867f, 0.0033449088223278522f, 0.002760336035862565f, 0.008124789223074913f, 0.0027076504193246365f, 0.0038911232259124517f, 0.004403745289891958f, 0.0035917251370847225f, 0.0063019609078764915f, 0.004489412531256676f, 0.003006838960573077f, 0.0023743086494505405f, 0.006088273599743843f, 0.008346847258508205f, 0.004393181763589382f, 0.0033473235089331865f, 0.003837590804323554f, 0.0049582915380597115f, 0.005081127863377333f, 0.003995491657406092f, 0.0038523932453244925f, 0.0048758829943835735f, 0.008089259266853333f, 0.006234633736312389f, 0.003927535843104124f, 0.0033442594576627016f, 0.0037019867449998856f, 0.0027325444389134645f, 0.0037664619740098715f, 0.0033875484950840473f, 0.002608306473121047f, 0.003460808889940381f, 0.004469429142773151f, 0.0060155875980854034f, 0.003326531732454896f, 0.003979729954153299f, 0.002415776951238513f, 0.006331956945359707f, 0.006792013067752123f, 0.008025899529457092f, 0.005789416376501322f, 0.004166023340076208f, 0.0044832960702478886f, 0.001959552289918065f, 0.007290537469089031f, 0.004506031516939402f, 0.004459077958017588f, 0.00420365110039711f, 0.0029737562872469425f, 0.004028561525046825f, 0.004334680270403624f, 0.002190639264881611f, 0.005961702670902014f, 0.0031959523912519217f, 0.003790359478443861f, 0.005160912871360779f, 0.008847460150718689f, 0.0019888586830347776f, 0.004609856754541397f, 0.002819883171468973f, 0.0033008726313710213f, 0.004753424320369959f, 0.00928890984505415f, 0.002990891458466649f, 0.004978631157428026f, 0.006444234866648912f, 0.01135215349495411f, 0.0034848779905587435f, 0.006832956336438656f, 0.004736822098493576f, 0.003028593957424164f, 0.005124025046825409f, 0.0028013628907501698f, 0.005839921999722719f, 0.0057456414215266705f, 0.004866547416895628f, 0.0022577447816729546f, 0.00707790395244956f, 0.01174082886427641f, 0.005234153475612402f, 0.0028149073477834463f, 0.004224276635795832f, 0.006758581846952438f, 0.01638958230614662f, 0.0018023159354925156f, 0.0038883930537849665f, 0.0045906552113592625f, 0.0031980627682060003f, 0.005425797309726477f, 0.003792849136516452f, 0.0026037513744086027f, 0.003440054366365075f, 0.003205157583579421f, 0.0031303460709750652f, 0.005014116410166025f, 0.008791684173047543f, 0.004118948709219694f, 0.004745196551084518f, 0.009897560812532902f, 0.004838357679545879f, 0.0042668734677135944f, 0.0036013443022966385f, 0.00890327524393797f, 0.0037932919804006815f, 0.004077850840985775f, 0.004156738054007292f, 0.0030776001513004303f, 0.0036730195861309767f, 0.0030681416392326355f, 0.004127750173211098f, 0.002792792860418558f, 0.004146624822169542f, 0.005797797814011574f, 0.006744141224771738f, 0.005784548819065094f, 0.003898186609148979f, 0.00341439968906343f, 0.004528465215116739f, 0.003169926116243005f, 0.008798687718808651f, 0.004126402083784342f, 0.0034654666669666767f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003676088061183691f, 0.0011403083335608244f, 0.0011159428395330906f, 0.0014753610594198108f, 0.0012869553174823523f, 0.0028299386613070965f, 0.002646429929882288f, 0.0011273071868345141f, 0.0026889522559940815f, 0.00333392177708447f, 0.003786463988944888f, 0.0042810384184122086f, 0.0018553733825683594f, 0.00471936259418726f, 0.0016043322393670678f, 0.003709202166646719f, 0.001560573815368116f, 0.0035342040937393904f, 0.001739003579132259f, 0.0016496025491505861f, 0.0011484246933832765f, 0.001143996836617589f, 0.0012029308127239347f, 0.0013680187985301018f, 0.0017807468539103866f, 0.0014577687252312899f, 0.0020213753450661898f, 0.0015169329708442092f, 0.0011380809592083097f, 0.0039484514854848385f, 0.002945192623883486f, 0.0013171038590371609f, 0.0013179639354348183f, 0.004529475700110197f, 0.0015041586011648178f, 0.0020120986737310886f, 0.0013083011144772172f, 0.002098517492413521f, 0.001959857763722539f, 0.0018250730354338884f, 0.0018426153110340238f, 0.004810067359358072f, 0.001333035179413855f, 0.001454814220778644f, 0.0017338490579277277f, 0.0013790886150673032f, 0.0014909394085407257f, 0.0012004357995465398f, 0.002099063480272889f, 0.0037100815679877996f, 0.0018545424100011587f, 0.0015553224366158247f, 0.0014841514639556408f, 0.0015748634468764067f, 0.002200010698288679f, 0.0011204174952581525f, 0.002959813689813018f, 0.0012988896341994405f, 0.0017336462624371052f, 0.004373706411570311f, 0.0011788206174969673f, 0.001540493336506188f, 0.001800177851691842f, 0.0015707594575360417f, 0.0015706709818914533f, 0.0015884916065260768f, 0.0013646328588947654f, 0.0013384170597419143f, 0.003051130333915353f, 0.0032795784063637257f, 0.0036085715983062983f, 0.0037300351541489363f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00033152836840599775f, 0.0006764873978681862f, 0.00033056281972676516f, 0.00043449056101962924f, 0.0009073191904462874f, 0.0008999611018225551f, 0.0005637497524730861f, 0.00045126237091608346f, 0.0005280200857669115f, 0.000414837384596467f, 0.0006490140222012997f, 0.0006969513488002121f, 0.0005710009136237204f, 0.0006368345348164439f, 0.0006726604187861085f, 0.0006987759261392057f, 0.0005660458700731397f, 0.0006088889203965664f, 0.000515048741362989f, 0.00030498349224217236f, 0.0005267155356705189f, 0.0008197561255656183f, 0.0005517395911738276f, 0.0004926547990180552f, 0.00049466488417238f, 0.0004302756569813937f, 0.000639217090792954f, 0.000419502699514851f, 0.00034928397508338094f, 0.0006288265576586127f, 0.0005243031191639602f, 0.00044375527068041265f, 0.0003512978437356651f, 0.0006195903406478465f, 0.000493483676109463f, 0.0004762876487802714f, 0.000545595888979733f, 0.0006123907514847815f, 0.0005089424084872007f, 0.0004531147424131632f, 0.0004708736087195575f, 0.000597262813244015f, 0.0003605311503633857f, 0.0005497300298884511f, 0.00032069714507088065f, 0.0004983512917533517f, 0.0003473744436632842f, 0.00044383807107806206f, 0.0004283356247469783f, 0.0006750977481715381f, 0.00046771293273195624f, 0.0003924519696738571f, 0.0003461650921963155f, 0.0006219507777132094f, 0.00040614939644001424f, 0.0004588589945342392f, 0.00040331450873054564f, 0.00041825571679510176f, 0.0005850439774803817f, 0.00045479327673092484f, 0.000472382758744061f, 0.0003641980292741209f, 0.00034402639721520245f, 0.000539282220415771f, 0.0004988121800124645f, 0.0005519439582712948f, 0.00044412416173145175f, 0.00045529523049481213f, 0.000443361874204129f, 0.0004473786102607846f, 0.0004249963676556945f, 0.0004025330126751214f, 0.00041751700337044895f, 0.00033710512798279524f, 0.0006195359746925533f, 0.0006669450085610151f, 0.0005005621933378279f, 0.000297853141091764f, 0.0005139228305779397f, 0.0004019920015707612f, 0.0005105959717184305f, 0.00040880663436837494f, 0.0005579314893111587f, 0.00038978501106612384f, 0.00035241676960140467f, 0.0004899058258160949f, 0.00027445072191767395f, 0.00039044415461830795f, 0.00036808926961384714f, 0.0006480852607637644f, 0.0004459506890270859f, 0.0005638228612951934f, 0.00043567363172769547f, 0.0006247154087759554f, 0.0004754405817948282f, 0.0004038963234052062f, 0.00041234883246943355f, 0.0004093800962436944f, 0.0005352367297746241f, 0.00046985840890556574f, 0.0005128276534378529f, 0.0004372613620944321f, 0.0006262215320020914f, 0.0007752676028758287f, 0.0006508686346933246f, 0.0003588345425669104f, 0.00044052948942407966f, 0.00046753374044783413f, 0.0008034975617192686f, 0.00046991941053420305f, 0.0005312105640769005f, 0.00029453987372107804f, 0.0008044993737712502f, 0.0004437860625330359f, 0.00045475951628759503f, 0.0005625066696666181f, 0.0003687505377456546f, 0.00046152388677001f, 0.00037676069769077003f, 0.0005089676706120372f, 0.0007362680626101792f, 0.0003534488205332309f, 0.000544699199963361f, 0.0004173497436568141f, 0.0005457053193822503f, 0.00039640843169763684f, 0.0002931571798399091f, 0.0006974358111619949f, 0.0005539669073186815f, 0.0004406064108479768f, 0.0005082851275801659f, 0.000623009807895869f, 0.0003751192707568407f, 0.0006830629426985979f, 0.0006679414073005319f, 0.0004591603938024491f, 0.00043600896606221795f, 0.0003137558524031192f, 0.0005638750153593719f, 0.00038378225872293115f, 0.0005207847571000457f, 0.0004321174928918481f, 0.0005221061292104423f, 0.0005341669311746955f, 0.0006008883938193321f, 0.00034784129820764065f, 0.00037742574932053685f, 0.0006094565032981336f, 0.0005150386714376509f, 0.0004688562185037881f, 0.0006025877664797008f, 0.0006474858382716775f, 0.0005365806864574552f, 0.00045025136205367744f, 0.0005592395318672061f, 0.0005870427121408284f, 0.0006025019101798534f, 0.00035130218020640314f, 0.00040567287942394614f, 0.0004946613917127252f, 0.000624977343250066f, 0.0002998078125528991f, 0.00036239190376363695f, 0.0006210010615177453f, 0.00040070770774036646f, 0.0005047940067015588f, 0.0005043909186497331f, 0.00031793268863111734f, 0.00041866026003845036f, 0.0005029035964980721f, 0.0005547382752411067f, 0.0004080310754943639f, 0.0003353051724843681f, 0.0004609225725289434f, 0.0005035720532760024f, 0.0005841100355610251f, 0.0005946663441136479f, 0.0004534308973234147f, 0.000584720226470381f, 0.00031396589474752545f, 0.0005798942293040454f, 0.00039557693526148796f, 0.0006694220355711877f, 0.0006124627543613315f, 0.0004475773894228041f, 0.00043642809032462537f, 0.0003902632452081889f, 0.0004770706582348794f, 0.000509956618770957f, 0.0003843431477434933f, 0.0004612603224813938f, 0.0004792044055648148f, 0.0005854963674210012f, 0.0005872390465810895f, 0.000353523762896657f, 0.00046851072693243623f, 0.0005640119779855013f, 0.000755821296479553f, 0.0004868559481110424f, 0.0005264717037789524f, 0.0006065096822567284f, 0.00047790000098757446f, 0.000374295050278306f, 0.00036693320726044476f, 0.0005795879405923188f, 0.000403079844545573f, 0.0005057634552940726f, 0.0006820444250479341f, 0.00033293673186562955f, 0.0006863303133286536f, 0.0004393198760226369f, 0.0006210587453097105f, 0.0005726752569898963f, 0.00034950714325532317f, 0.0005114797386340797f, 0.0007807529764249921f, 0.0007305368199013174f, 0.0006129030953161418f, 0.0005281895282678306f, 0.0003949773672502488f, 0.0005612322129309177f, 0.00038147298619151115f, 0.00038723484613001347f, 0.00040181155782192945f, 0.00045571979717351496f, 0.00040679771336726844f, 0.0004066005058120936f, 0.0004445222730282694f, 0.0005054578650742769f, 0.0004139993980061263f, 0.0005386207485571504f, 0.0005030251340940595f, 0.0003650567086879164f, 0.0004178886883892119f, 0.0007478141342289746f, 0.0004518443311098963f, 0.0005715432926081121f, 0.0005008394946344197f, 0.0003365571319591254f, 0.00043442900641821325f, 0.00048525212332606316f, 0.00038020082865841687f, 0.0004173704655840993f, 0.0004714778042398393f, 0.0003620480129029602f, 0.0004183215496595949f, 0.0004846793017350137f, 0.0005246846121735871f, 0.0006962979095987976f, 0.0005074443761259317f, 0.0004914089222438633f, 0.000499982328619808f, 0.00042631104588508606f, 0.0006362209678627551f, 0.00030781025998294353f, 0.0004750654334202409f, 0.0005882198456674814f, 0.0005814730538986623f, 0.0006599093903787434f, 0.0003797242243308574f, 0.0007306293700821698f, 0.0005221886676736176f, 0.0006734275375492871f, 0.0004781703755725175f, 0.0004881132044829428f, 0.0006734734051860869f, 0.00039553531678393483f, 0.0005435142084024847f, 0.0007352539687417448f, 0.0007046179962344468f, 0.00042021306580863893f, 0.0007698129047639668f, 0.00048209010856226087f, 0.0003972909180447459f, 0.0005078540998511016f, 0.0004239845438860357f, 0.0004964136751368642f, 0.0004945174441672862f, 0.0004445684317033738f, 0.000526908494066447f, 0.0005167966010048985f, 0.0005583924357779324f, 0.0005939955008216202f, 0.0006645441171713173f, 0.00044724068720825016f, 0.0003086357901338488f, 0.0004002232162747532f, 0.0006553776911459863f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029633648227900267f, 0.004275388550013304f, 0.002898996463045478f, 0.0030753568280488253f, 0.003968488425016403f, 0.0021633324213325977f, 0.003287344938144088f, 0.004390646703541279f, 0.003161917207762599f, 0.0031826384365558624f, 0.003441633190959692f, 0.003474285127595067f, 0.004377095028758049f, 0.003458642866462469f, 0.003459484549239278f, 0.002667889464646578f, 0.004035027697682381f, 0.0037483936175704002f, 0.002607029862701893f, 0.003247101092711091f, 0.0032575393561273813f, 0.0032614832744002342f, 0.0028865186031907797f, 0.0028375450056046247f, 0.0029148352332413197f, 0.003056902438402176f, 0.003853189991787076f, 0.0037962559144943953f, 0.0025896660517901182f, 0.003275561146438122f, 0.0025413536932319403f, 0.0025880655739456415f, 0.004584048874676228f, 0.0029580947011709213f, 0.002722487086430192f, 0.0021829544566571712f, 0.003421342233195901f, 0.0039000653196126223f, 0.00275157461874187f, 0.003595314919948578f, 0.0032340798061341047f, 0.0028244303539395332f, 0.0028384930919855833f, 0.00313241733238101f, 0.0030884554143995047f, 0.004176802467554808f, 0.003720403416082263f, 0.003101940033957362f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015938373981043696f, 0.001039526192471385f, 0.0010574640473350883f, 0.0014828572748228908f, 0.0012988777598366141f, 0.0011079442920163274f, 0.0007718147826381028f, 0.0012801347766071558f, 0.0009456802508793771f, 0.0011083774734288454f, 0.0006135760340839624f, 0.0008904397254809737f, 0.0008119764388538897f, 0.000969799468293786f, 0.0008439581724815071f, 0.00103884213604033f, 0.0011459523811936378f, 0.0008226853096857667f, 0.0013159540249034762f, 0.0012430481147021055f, 0.0010747192427515984f, 0.0018416688544675708f, 0.0015354264760389924f, 0.001172979362308979f, 0.0009101432515308261f, 0.001523201703093946f, 0.001225339132361114f, 0.0008694421849213541f, 0.0011030472815036774f, 0.0019151348387822509f, 0.0011340228375047445f, 0.0008440578239969909f, 0.001372139435261488f, 0.0009314418421126902f, 0.0014574442757293582f, 0.0012635169550776482f, 0.0016166162677109241f, 0.0006311576580628753f, 0.0009004246676340699f, 0.0017776498571038246f, 0.001341455732472241f, 0.0008196438429877162f, 0.0010980350198224187f, 0.0013127891579642892f, 0.0011453351471573114f, 0.0007013523136265576f, 0.001239375094883144f, 0.0015567804221063852f, 0.0013877979945391417f, 0.0013752009253948927f, 0.0006546858348883688f, 0.0010661943815648556f, 0.0009628804982639849f, 0.0009056385024450719f, 0.0010088870767503977f, 0.0014703754568472505f, 0.0008888567099347711f, 0.001406323746778071f, 0.0016974632162600756f, 0.0012720180675387383f, 0.0017967990133911371f, 0.0007149644079618156f, 0.0011980647686868906f, 0.0009669241844676435f, 0.0009552156552672386f, 0.0011118781985715032f, 0.0012557664886116982f, 0.0013934250455349684f, 0.0012173564173281193f, 0.0009826298337429762f, 0.0010178396478295326f, 0.0012123441556468606f, 0.001034506130963564f, 0.0007885918603278697f, 0.0012684609973803163f, 0.0016271398635581136f, 0.0011735594598576427f, 0.0008944639121182263f, 0.0010727826738730073f, 0.0008573068771511316f, 0.0011021342361345887f, 0.00122159905731678f, 0.0011028998997062445f, 0.0010542751988396049f, 0.0006996573065407574f, 0.0007331292727030814f, 0.0009476717095822096f, 0.0014329013647511601f, 0.0014680636813864112f, 0.0013687037862837315f, 0.0007884407532401383f, 0.0013002670602872968f, 0.001218294375576079f, 0.0010768602369353175f, 0.0016260622069239616f, 0.0010998389916494489f, 0.0005709050456061959f, 0.001277173520065844f, 0.0014474688796326518f, 0.0017598026897758245f, 0.0013335449621081352f, 0.0010036018211394548f, 0.0009168081451207399f, 0.0008957859827205539f, 0.0008141454309225082f, 0.0011804639361798763f, 0.0017307645175606012f, 0.0008762277429923415f, 0.0009258410427719355f, 0.001486611901782453f, 0.0008523371652700007f, 0.0008770474814809859f, 0.0009902666788548231f, 0.0013599306112155318f, 0.00139314541593194f, 0.0012345468858256936f, 0.0013948701089248061f, 0.0009978364687412977f, 0.0012827053433284163f, 0.0019676184747368097f, 0.0014577575493603945f, 0.0006663750973530114f, 0.0007921802462078631f, 0.001144222798757255f, 0.0012012796942144632f, 0.0013734173262491822f, 0.0011707828380167484f, 0.0013285607565194368f, 0.0014283638447523117f, 0.0015527420910075307f, 0.0017493059858679771f, 0.0011334479786455631f, 0.0007184279384091496f, 0.0014235813869163394f, 0.00035474763717502356f, 0.0010348339565098286f, 0.0007976974593475461f, 0.0015108106890693307f, 0.002244748407974839f, 0.0005498754908330739f, 0.0009764553396962583f, 0.001006308477371931f, 0.002083241706714034f, 0.0009134113788604736f, 0.0011949498439207673f, 0.001184939406812191f, 0.0012816389789804816f, 0.0010460641933605075f, 0.000884156848769635f, 0.0014171095099300146f, 0.001143252127803862f, 0.0013552902964875102f, 0.0009044953039847314f, 0.0005011283210478723f, 0.0019033231073990464f, 0.0015957726864144206f, 0.001141302869655192f, 0.001553939189761877f, 0.0012376320082694292f, 0.000994020258076489f, 0.0010013384744524956f, 0.0014814242022112012f, 0.0010438901372253895f, 0.0011062558041885495f, 0.0011964099248871207f, 0.0005767747643403709f, 0.0011300628539174795f, 0.001873337896540761f, 0.001151902019046247f, 0.0025479579344391823f, 0.0011436331551522017f, 0.001506753615103662f, 0.0010317894630134106f, 0.0011064570862799883f, 0.0008641165331937373f, 0.0012094670673832297f, 0.0014552637003362179f, 0.0009897795971482992f, 0.0013273094082251191f, 0.0015550627140328288f, 0.001464594155550003f, 0.0009449453209526837f, 0.001889659441076219f, 0.0012221710057929158f, 0.0012097704457119107f, 0.0009830379858613014f, 0.0011207293719053268f, 0.0007349241059273481f, 0.0006083697662688792f, 0.0010127800051122904f, 0.0013378432486206293f, 0.0011217852588742971f, 0.0020999875850975513f, 0.0007459766347892582f, 0.001020858995616436f, 0.0011443299008533359f, 0.00139035249594599f, 0.001958476146683097f, 0.001497131073847413f, 0.0017434625187888741f, 0.0008449135348200798f, 0.0013728191843256354f, 0.0007167091243900359f, 0.0013498363550752401f, 0.0007065380923449993f, 0.001329311984591186f, 0.0023109798785299063f, 0.0014217904536053538f, 0.0010216491064056754f, 0.0011585591128095984f, 0.0015658551128581166f, 0.0016667164163663983f, 0.0015158517053350806f, 0.001208206987939775f, 0.0008981946739368141f, 0.0006855668616481125f, 0.0005162205779924989f, 0.0014971289783716202f, 0.000995383714325726f, 0.001022042240947485f, 0.0015193509170785546f, 0.0009013630333356559f, 0.0010195417562499642f, 0.0012827288592234254f, 0.0017603321466594934f, 0.0009324413258582354f, 0.0008830670267343521f, 0.0007505950634367764f, 0.0015342311235144734f, 0.001495170989073813f, 0.002182233380153775f, 0.0005456684739328921f, 0.0005532666109502316f, 0.0016472492134198546f, 0.001338626490905881f, 0.0011715892469510436f, 0.0008472508634440601f, 0.0008959745755419135f, 0.0012038851855322719f, 0.0009422987932339311f, 0.0009068010258488357f, 0.0013002771884202957f, 0.0016473487485200167f, 0.0009536289144307375f, 0.00069230399094522f, 0.0006820941343903542f, 0.0016671497141942382f, 0.0010743344901129603f, 0.0012816517846658826f, 0.001078238943591714f, 0.0008712183916941285f, 0.000741366355214268f, 0.0013270373456180096f, 0.0010191103210672736f, 0.0012120285537093878f, 0.0012335393112152815f, 0.0006681156228296459f, 0.0010130107402801514f, 0.0010946341790258884f, 0.0010162852704524994f, 0.0014646995114162564f, 0.0016390557866543531f, 0.0010994243202731013f, 0.0011104190489277244f, 0.001351748127490282f, 0.0009910103399306536f, 0.001317045302130282f, 0.0014760922640562057f, 0.0017116805538535118f, 0.0012561342446133494f, 0.0014563461299985647f, 0.0014591648941859603f, 0.0010746561456471682f, 0.0018600737676024437f, 0.0010598007356747985f, 0.000950154906604439f, 0.0014617544366046786f, 0.0012364365393295884f, 0.0007639398099854589f, 0.0010543909156695008f, 0.0007439732435159385f, 0.001017033588141203f, 0.0009109327802434564f, 0.0009425997268408537f, 0.0014861106174066663f, 0.0010502845980226994f, 0.0011042796541005373f, 0.0011640014126896858f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016942399088293314f, 0.0026476599741727114f, 0.0027723927050828934f, 0.0044869850389659405f, 0.003185022622346878f, 0.00210761115886271f, 0.0027123752515763044f, 0.003555940929800272f, 0.0028360961005091667f, 0.003576828632503748f, 0.011537118814885616f, 0.004758290480822325f, 0.0031893043778836727f, 0.002629142254590988f, 0.013866382651031017f, 0.006202319636940956f, 0.003385789692401886f, 0.003970758058130741f, 0.0040035187266767025f, 0.0022868425585329533f, 0.0078010158613324165f, 0.0035425436217337847f, 0.002131581073626876f, 0.002986990148201585f, 0.005100999027490616f, 0.0032765206415206194f, 0.0016527642728760839f, 0.005912921391427517f, 0.005099284462630749f, 0.0024523406755179167f, 0.003969185054302216f, 0.0028959063347429037f, 0.0035102569963783026f, 0.007223081775009632f, 0.001803216990083456f, 0.0034589357674121857f, 0.0026740843895822763f, 0.006839092820882797f, 0.0026283571496605873f, 0.002933190204203129f, 0.003284929785877466f, 0.007094765547662973f, 0.0025380514562129974f, 0.002469289116561413f, 0.0026593266520649195f, 0.005265727639198303f, 0.00525013217702508f, 0.0022789102513343096f, 0.00243196077644825f, 0.0048506902530789375f, 0.004767934326082468f, 0.0022075187880545855f, 0.0076912688091397285f, 0.0055507756769657135f, 0.0048899888060987f, 0.0026656961999833584f, 0.007849661633372307f, 0.005643240641802549f, 0.0037171265576034784f, 0.004710159730166197f, 0.005660228431224823f, 0.0035374558065086603f, 0.005530704278498888f, 0.0071028596721589565f, 0.004243901465088129f, 0.004855392966419458f, 0.002743880031630397f, 0.004056625533849001f, 0.002759532304480672f, 0.0036434256471693516f, 0.004127245396375656f, 0.003100278787314892f, 0.0033736920449882746f, 0.009351128712296486f, 0.0028276031371206045f, 0.002524285577237606f, 0.007052884437143803f, 0.009992003440856934f, 0.016852620989084244f, 0.0020717326551675797f, 0.0041742282919585705f, 0.005908247549086809f, 0.0050382609479129314f, 0.004270827863365412f, 0.011920931749045849f, 0.0030819361563771963f, 0.006123816128820181f, 0.0036318027414381504f, 0.0025616080965846777f, 0.006959517486393452f, 0.00857604667544365f, 0.004166297614574432f, 0.0027746183332055807f, 0.0032965796999633312f, 0.0058815800584852695f, 0.0057158637791872025f, 0.0135588264092803f, 0.00462917098775506f, 0.00603472301736474f, 0.003642162773758173f, 0.003797688987106085f, 0.002474292414262891f, 0.0026981807313859463f, 0.0034247839357703924f, 0.002161516109481454f, 0.007387165911495686f, 0.0011392718879505992f, 0.0025082705542445183f, 0.0027953260578215122f, 0.0020504463464021683f, 0.0026464841794222593f, 0.005037273280322552f, 0.0070866853930056095f, 0.002205393509939313f, 0.0023056240752339363f, 0.005138073582202196f, 0.0017084524733945727f, 0.005574140697717667f, 0.004896859638392925f, 0.0019533729646354914f, 0.0021921945735812187f, 0.010884980671107769f, 0.0055437758564949036f, 0.002361932070925832f, 0.005869218148291111f, 0.002871566917747259f, 0.0046027484349906445f, 0.0029422759544104338f, 0.00357663631439209f, 0.004337163642048836f, 0.003056173212826252f, 0.007616722024977207f, 0.01198372058570385f, 0.004029490984976292f, 0.007502550259232521f, 0.00490500358864665f, 0.0108793331310153f, 0.002131866058334708f, 0.002230060985311866f, 0.015863828361034393f, 0.003126825438812375f, 0.0031084499787539244f, 0.004009590484201908f, 0.006084175314754248f, 0.003241524798795581f, 0.002109942492097616f, 0.004715295042842627f, 0.002493832027539611f, 0.004596225917339325f, 0.0021367438603192568f, 0.002702031284570694f, 0.003444756381213665f, 0.00300479494035244f, 0.03372570127248764f, 0.002741915173828602f, 0.0049653188325464725f, 0.0025000013411045074f, 0.002149597043171525f, 0.004181507509201765f, 0.00403137132525444f, 0.004780591931194067f, 0.0026389285922050476f, 0.006517272442579269f, 0.003772262018173933f, 0.0043574729934334755f, 0.003326940117403865f, 0.002640357008203864f, 0.0023956235963851213f, 0.002648773370310664f, 0.0029373501893132925f, 0.0020082728005945683f, 0.002610239665955305f, 0.0027869108598679304f, 0.006874868646264076f, 0.004045562352985144f, 0.0022656021174043417f, 0.006062931846827269f, 0.003180877538397908f, 0.004646309185773134f, 0.0036118037533015013f, 0.003639969741925597f, 0.00259852665476501f, 0.00360958487726748f, 0.00346955144777894f, 0.004922954831272364f, 0.006595578510314226f, 0.004175220616161823f, 0.008722303435206413f, 0.008910814300179482f, 0.006198632065206766f, 0.004674560856074095f, 0.004416402895003557f, 0.0033290497958660126f, 0.002211674116551876f, 0.0026813785079866648f, 0.0022652277257293463f, 0.001278294250369072f, 0.003216583514586091f, 0.006356676109135151f, 0.004953762982040644f, 0.010345477610826492f, 0.0030056056566536427f, 0.005471722688525915f, 0.002548994030803442f, 0.01370863988995552f, 0.002330645453184843f, 0.0017887966241687536f, 0.002290228847414255f, 0.004487222526222467f, 0.002279106993228197f, 0.0026915683411061764f, 0.003344633849337697f, 0.0019644482526928186f, 0.0036285249516367912f, 0.011410168372094631f, 0.005923802964389324f, 0.009903207421302795f, 0.002731086453422904f, 0.0033276965841650963f, 0.0038553320337086916f, 0.001754885190166533f, 0.009505863301455975f, 0.004574252292513847f, 0.006024962291121483f, 0.0017218338325619698f, 0.005874705035239458f, 0.007612214423716068f, 0.005001935176551342f, 0.002984413178637624f, 0.0038567278534173965f, 0.003386148251593113f, 0.009337588213384151f, 0.006388451438397169f, 0.0030578437726944685f, 0.0033029750920832157f, 0.003390432568266988f, 0.007666718680411577f, 0.004267682321369648f, 0.004139251541346312f, 0.007651129271835089f, 0.0031989740673452616f, 0.002551411744207144f, 0.0026910866145044565f, 0.0025478515308350325f, 0.003120282432064414f, 0.0094594806432724f, 0.004214098677039146f, 0.002909170463681221f, 0.01173327025026083f, 0.00410487549379468f, 0.004950166679918766f, 0.007710718549787998f, 0.0030251299031078815f, 0.006036099977791309f, 0.0075744567438960075f, 0.00631452864035964f, 0.0026665187906473875f, 0.003121559042483568f, 0.0039467583410441875f, 0.002232422586530447f, 0.006026517134159803f, 0.003963547758758068f, 0.003292527748271823f, 0.0029333841521292925f, 0.0019327136687934399f, 0.0030602538026869297f, 0.0015247606206685305f, 0.001882981858216226f, 0.00204771151766181f, 0.003067504381760955f, 0.0027059440035372972f, 0.0015682574594393373f, 0.005023145582526922f, 0.003758825361728668f, 0.002253403887152672f, 0.009464489296078682f, 0.002721502911299467f, 0.003255395917221904f, 0.006554789841175079f, 0.00489564286544919f, 0.009787986986339092f, 0.00515769375488162f, 0.0031601653899997473f, 0.00654939841479063f, 0.003620915813371539f, 0.006286533083766699f, 0.0037264483980834484f, 0.004073317628353834f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004042282234877348f, 0.003015164053067565f, 0.003752055112272501f, 0.0016896378947421908f, 0.001197900390252471f, 0.00250449706800282f, 0.0033500920981168747f, 0.0022165467962622643f, 0.001346721313893795f, 0.0030883417930454016f, 0.0035285023041069508f, 0.0038644257001578808f, 0.0023122194688767195f, 0.003507886780425906f, 0.0016797346761450171f, 0.0016811463283374906f, 0.001275363378226757f, 0.003480816027149558f, 0.0010871643899008632f, 0.002376734744757414f, 0.0028742968570441008f, 0.0033515607938170433f, 0.002774604596197605f, 0.0014440270606428385f, 0.0036755739711225033f, 0.004612078424543142f, 0.001351362676359713f, 0.0020739086903631687f, 0.0018641193164512515f, 0.0013248705072328448f, 0.0035155080258846283f, 0.0015850532799959183f, 0.003302772529423237f, 0.0018471754156053066f, 0.003562128869816661f, 0.00124184915330261f, 0.001286483253352344f, 0.0018077745335176587f, 0.0012714104959741235f, 0.0025568408891558647f, 0.003549539018422365f, 0.003223283449187875f, 0.0013428363017737865f, 0.0038539511151611805f, 0.0016820738092064857f, 0.0013991491869091988f, 0.0012453742092475295f, 0.001480588805861771f, 0.001276816357858479f, 0.0024624094367027283f, 0.0012869633501395583f, 0.003750173607841134f, 0.00209846836514771f, 0.0012764539569616318f, 0.003657767316326499f, 0.0037366142496466637f, 0.0035732744727283716f, 0.0020083780400455f, 0.0017874595941975713f, 0.0030317800119519234f, 0.001323518343269825f, 0.0018249658169224858f, 0.0013154528569430113f, 0.0012117676669731736f, 0.0017013349570333958f, 0.0026176543906331062f, 0.0013770617078989744f, 0.001709825242869556f, 0.0011913777561858296f, 0.0037315909285098314f, 0.0030570717062801123f, 0.0025086745154112577f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0004284392634872347f, 0.0006002045702189207f, 0.0006520779570564628f, 0.0005075440276414156f, 0.0004904206725768745f, 0.0005868523148819804f, 0.0005516226519830525f, 0.0006289983866736293f, 0.0003568684624042362f, 0.00037073733983561397f, 0.0005883914418518543f, 0.0006050770753063262f, 0.00042148015927523375f, 0.0009120979229919612f, 0.0008550902712158859f, 0.000740194576792419f, 0.0006161186611279845f, 0.0004079132922925055f, 0.0005839830846525729f, 0.0004023310320917517f, 0.0006061927997507155f, 0.000569259631447494f, 0.000441741052782163f, 0.0003625083772931248f, 0.0004910334828309715f, 0.000345254666171968f, 0.0005781647632829845f, 0.0006741812685504556f, 0.0004813547420781106f, 0.000629688729532063f, 0.000493115046992898f, 0.0006206408725120127f, 0.0005156354163773358f, 0.0005318556213751435f, 0.0005371161969378591f, 0.00042648770613595843f, 0.0004573207115754485f, 0.0003773430362343788f, 0.0005632276879623532f, 0.0008492382476106286f, 0.00049114745343104f, 0.00046603844384662807f, 0.0004852314596064389f, 0.000532084028236568f, 0.0006172269931994379f, 0.0007175772334448993f, 0.0003412776277400553f, 0.0004950465518049896f, 0.00048394943587481976f, 0.00045719151967205107f, 0.0004218636604491621f, 0.0006505022174678743f, 0.0008322077337652445f, 0.0007410788093693554f, 0.0004840493784286082f, 0.0003507309593260288f, 0.0007247826433740556f, 0.0006313518970273435f, 0.0004662468272726983f, 0.0005119615816511214f, 0.0005107778124511242f, 0.0005832565948367119f, 0.0006609317497350276f, 0.000543461530469358f, 0.0003327649610582739f, 0.0007431908161379397f, 0.0003862797748297453f, 0.0006478137220256031f, 0.0006057607242837548f, 0.0006404189625754952f, 0.0007969419821165502f, 0.00044183371937833726f, 0.0004935517208650708f, 0.0005412155878730118f, 0.0006696524214930832f, 0.0005576434778049588f, 0.0005277232849039137f, 0.0004475448513403535f, 0.000601993640884757f, 0.0004223667783662677f, 0.0006419371347874403f, 0.0009542510379105806f, 0.000556997605599463f, 0.0005037279333919287f, 0.0006731892353855073f, 0.0005618522991426289f, 0.0007385966018773615f, 0.0006403588340617716f, 0.0007720259018242359f, 0.0005389510188251734f, 0.0007159910164773464f, 0.00047315360279753804f, 0.0003913919790647924f, 0.0006211678846739233f, 0.0006295391358435154f, 0.0005795807810500264f, 0.0005169878131709993f, 0.0007767579518258572f, 0.0004608723393175751f, 0.000573562690988183f, 0.00040038692532107234f, 0.0005699323955923319f, 0.00046692759497091174f, 0.0004633831267710775f, 0.0003733155026566237f, 0.0005750617710873485f, 0.0004531753365881741f, 0.0005300187622196972f, 0.0004961189697496593f, 0.00042960469727404416f, 0.0004868482064921409f, 0.00045921115088276565f, 0.000622374122031033f, 0.0003497317375149578f, 0.0004897101316601038f, 0.0006514968699775636f, 0.0004671261995099485f, 0.0005355302128009498f, 0.0005697269807569683f, 0.000463534815935418f, 0.0005442849360406399f, 0.00047398702008649707f, 0.0005590080399997532f, 0.0004321002634242177f, 0.0007528315763920546f, 0.0006280873785726726f, 0.0005074558430351317f, 0.0006823992007412016f, 0.0004435906303115189f, 0.00063957559177652f, 0.0006273551844060421f, 0.0005190392257645726f, 0.0005463160923682153f, 0.0006010013166815042f, 0.00046799491974525154f, 0.0005876045906916261f, 0.000706103106494993f, 0.0005345445242710412f, 0.0005087862955406308f, 0.0005584572209045291f, 0.0005857954383827746f, 0.0006898518186062574f, 0.0005395935149863362f, 0.00046566230594180524f, 0.0005436213687062263f, 0.0007271377253346145f, 0.00055917096324265f, 0.000766914919950068f, 0.0004256240790709853f, 0.0007044435478746891f, 0.00037436847924254835f, 0.0005254486459307373f, 0.0006318051600828767f, 0.0005653377738781273f, 0.0005531000206246972f, 0.0007539266953244805f, 0.0004444252117536962f, 0.0005557390977628529f, 0.00036066214670427144f, 0.0004618519451469183f, 0.0007864861399866641f, 0.0005734321312047541f, 0.00036304659442976117f, 0.00044682325096800923f, 0.0005396909546107054f, 0.0006685170228593051f, 0.0008830024162307382f, 0.0005631331587210298f, 0.00042954477248713374f, 0.0005497487727552652f, 0.0004843866918236017f, 0.0007949264254420996f, 0.0006364406435750425f, 0.0005995333776809275f, 0.0007229514885693789f, 0.0006468729698099196f, 0.0007595188217237592f, 0.0005310814012773335f, 0.0006256442284211516f, 0.00045187462819740176f, 0.000711191794835031f, 0.0007760822772979736f, 0.00047068751882761717f, 0.0003802452702075243f, 0.0004849907709285617f, 0.0005823484971188009f, 0.0005874615744687617f, 0.0007010981789790094f, 0.0005240583559498191f, 0.0005332844448275864f, 0.0006698715733364224f, 0.000573516939766705f, 0.0004338177677709609f, 0.0006725143757648766f, 0.0004526858392637223f, 0.00040877037099562585f, 0.0005731415585614741f, 0.0004114293260499835f, 0.0005695470608770847f, 0.0005581302102655172f, 0.0005248749512247741f, 0.0006268875440582633f, 0.0006423821905627847f, 0.0005132696242071688f, 0.0006604706286452711f, 0.00042548251803964376f, 0.0006504532648250461f, 0.0005196105339564383f, 0.0005727864918299019f, 0.00036340378574095666f, 0.0005937499809078872f, 0.0006403736188076437f, 0.0006979838944971561f, 0.0004112684400752187f, 0.0005334170418791473f, 0.0007003815262578428f, 0.000554134021513164f, 0.00040745537262409925f, 0.0005208490183576941f, 0.0005197141435928643f, 0.00034974218579009175f, 0.0006734582711942494f, 0.0004844062204938382f, 0.0005573273519985378f, 0.0005341502255760133f, 0.0005368297570385039f, 0.0005305258091539145f, 0.0005622071330435574f, 0.00043497837032191455f, 0.00041963765397667885f, 0.0005242018378339708f, 0.0006286496645770967f, 0.0005187309579923749f, 0.0005249447422102094f, 0.0005672531551681459f, 0.0006269333534874022f, 0.0003843330196104944f, 0.00048005860298871994f, 0.00053619802929461f, 0.0005222840118221939f, 0.0006108133238740265f, 0.0005450450116768479f, 0.0005064999568276107f, 0.0006362927961163223f, 0.0009189782431349158f, 0.0005035777576267719f, 0.0006765065481886268f, 0.0007621296099387109f, 0.0005337203620001674f, 0.0004584136768244207f, 0.0005905568250454962f, 0.0005272405687719584f, 0.0006844657473266125f, 0.0005887651932425797f, 0.0007406474323943257f, 0.0006944623310118914f, 0.0005062256823293865f, 0.000604348024353385f, 0.00037089662509970367f, 0.0007059827912598848f, 0.0005354801542125642f, 0.0005070950137451291f, 0.0003738439118023962f, 0.0004243857692927122f, 0.0004037052276544273f, 0.000707061612047255f, 0.0006641412037424743f, 0.00041794852586463094f, 0.0008368522976525128f, 0.0003844221355393529f, 0.000660483434330672f, 0.0005288237007334828f, 0.0004092181916348636f, 0.0004965535481460392f, 0.0006855594692751765f, 0.0006137301679700613f, 0.00035052376915700734f, 0.0005593097885139287f, 0.000506465439684689f, 0.0006535529973916709f, 0.0006083538755774498f, 0.0005055902875028551f, 0.0004110804875381291f, 0.0006691490416415036f, 0.0006038210121914744f, 0.00041084623080678284f, 0.00039961657603271306f, 0.0005115204839967191f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025933922734111547f, 0.0015926777850836515f, 0.0026812199503183365f, 0.0027396671939641237f, 0.00254271668381989f, 0.0021747597493231297f, 0.0017731725238263607f, 0.002127755433320999f, 0.0016182406106963754f, 0.001339794136583805f, 0.001544670551083982f, 0.002128924708813429f, 0.002091455738991499f, 0.0024508857168257236f, 0.0015189485857263207f, 0.0017363635124638677f, 0.0021480091381818056f, 0.0018766142893582582f, 0.0017724096542224288f, 0.001309057348407805f, 0.002170755062252283f, 0.0028822605963796377f, 0.0035897349007427692f, 0.002649532165378332f, 0.001187708810903132f, 0.002043702406808734f, 0.0017850566655397415f, 0.0015089614316821098f, 0.0015380166005343199f, 0.00222781952470541f, 0.0017750769620761275f, 0.0011936402879655361f, 0.0022291159257292747f, 0.002211226848885417f, 0.0017037461511790752f, 0.0014797784388065338f, 0.0020929148886352777f, 0.0020416921470314264f, 0.0013788770884275436f, 0.001898677204735577f, 0.0023904298432171345f, 0.0018855485832318664f, 0.0014178494457155466f, 0.00133349874522537f, 0.0016079568304121494f, 0.0020595351234078407f, 0.0023579623084515333f, 0.002159812953323126f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008285762742161751f, 0.00064027652842924f, 0.0004233957442920655f, 0.0006964767817407846f, 0.0006742678815498948f, 0.0005390915903262794f, 0.0006512523978017271f, 0.0005657068104483187f, 0.0005486170412041247f, 0.0006981089245527983f, 0.0007800856255926192f, 0.0007725845789536834f, 0.0007388363592326641f, 0.0007947979611344635f, 0.0007720945286564529f, 0.0007452187710441649f, 0.0006277607753872871f, 0.0009586792439222336f, 0.0008183919126167893f, 0.0005587243940681219f, 0.0005092048668302596f, 0.000640876532997936f, 0.0004770618979819119f, 0.0005972879007458687f, 0.0007558513316325843f, 0.0008100059349089861f, 0.0008536366512998939f, 0.0006661048391833901f, 0.0010518808849155903f, 0.0004617311351466924f, 0.0007360960589721799f, 0.0008920905529521406f, 0.0006334545905701816f, 0.001042909687384963f, 0.0007371615502052009f, 0.0005381365190260112f, 0.0007866965606808662f, 0.000532971229404211f, 0.000657492782920599f, 0.0005488848546519876f, 0.000799299159552902f, 0.000538742053322494f, 0.0004981982638128102f, 0.0007958476198837161f, 0.0004014042788185179f, 0.0006245488184504211f, 0.0007672630599699914f, 0.00089380017016083f, 0.0006649926654063165f, 0.0006930017261765897f, 0.0007996992208063602f, 0.0009048801730386913f, 0.0006501926109194756f, 0.0007399134919978678f, 0.000716372684109956f, 0.0007117505883798003f, 0.0008569806814193726f, 0.0010353296529501677f, 0.0009549082024022937f, 0.0004518715140875429f, 0.0007899937336333096f, 0.0011603396851569414f, 0.0010178929660469294f, 0.0007441798225045204f, 0.0005997970583848655f, 0.0012476642150431871f, 0.0007680609705857933f, 0.0005793708842247725f, 0.0007768938085064292f, 0.0006923102773725986f, 0.0007291164365597069f, 0.0008439120720140636f, 0.0010871191043406725f, 0.0005701621412299573f, 0.0006342240376397967f, 0.000845353992190212f, 0.0006936148274689913f, 0.0006644332897849381f, 0.0010961346561089158f, 0.0006596939056180418f, 0.000725231715478003f, 0.0005189524963498116f, 0.0007132505415938795f, 0.0005932539352215827f, 0.0007627821760252118f, 0.0007430674158968031f, 0.0010082669323310256f, 0.0006212503649294376f, 0.0008046101429499686f, 0.0006974166608415544f, 0.0005661130999214947f, 0.000987854553386569f, 0.0006300540408119559f, 0.0008134421077556908f, 0.0007692837971262634f, 0.0006427251501008868f, 0.0005605922779068351f, 0.0009327753796242177f, 0.0006055654957890511f, 0.0004750826337840408f, 0.0006184609374031425f, 0.0006156761664897203f, 0.0006116658332757652f, 0.0011848205467686057f, 0.0007593893096782267f, 0.0005255971918813884f, 0.0005144578171893954f, 0.0008879397064447403f, 0.0008571831858716905f, 0.0011300849728286266f, 0.000929691013880074f, 0.0005891347536817193f, 0.0008057336672209203f, 0.0006880959845148027f, 0.0006125291693024337f, 0.0007212517666630447f, 0.0006055535050109029f, 0.0005220242310315371f, 0.0006915775593370199f, 0.0005173514946363866f, 0.0009082464966922998f, 0.0007049853447824717f, 0.00071949593257159f, 0.0007730461074970663f, 0.0006333308410830796f, 0.0005589408101513982f, 0.0005327457911334932f, 0.0006409254856407642f, 0.0006631088326685131f, 0.0006158316391520202f, 0.0006324959686025977f, 0.0006833773222751915f, 0.0008369939168915153f, 0.0007000786135904491f, 0.0007951181614771485f, 0.000705199025105685f, 0.0004892838769592345f, 0.0006945581408217549f, 0.0008289487450383604f, 0.0007049012347124517f, 0.0011000363156199455f, 0.0005607615457847714f, 0.0009948122315108776f, 0.00070764689007774f, 0.0007493100711144507f, 0.0006192466244101524f, 0.0006957626319490373f, 0.0009487948263995349f, 0.0006645088433288038f, 0.0007765719201415777f, 0.0011053268099203706f, 0.0007317431154660881f, 0.0005943372379988432f, 0.0009088691440410912f, 0.0005405137198977172f, 0.0008329912670888007f, 0.0010171288158744574f, 0.0007794935954734683f, 0.0007257519755512476f, 0.0005916490335948765f, 0.000382738042389974f, 0.0005631775129586458f, 0.000582286505959928f, 0.000501175643876195f, 0.00030833162600174546f, 0.0008040652610361576f, 0.0005885459249839187f, 0.0010013242717832327f, 0.0009023778839036822f, 0.0006696245982311666f, 0.00048339314525946975f, 0.0010370712261646986f, 0.0008833394385874271f, 0.0005261807236820459f, 0.0004234994703438133f, 0.0005613691755570471f, 0.0012090193340554833f, 0.000655761978123337f, 0.000871772354003042f, 0.0006321785040199757f, 0.0007195688667707145f, 0.0009509861120022833f, 0.0007487799739465117f, 0.0006846231990493834f, 0.0007606258732266724f, 0.0007882381323724985f, 0.0008135648095048964f, 0.0005882997065782547f, 0.0008309872355312109f, 0.0005690875113941729f, 0.0005058435490354896f, 0.0005432559992186725f, 0.0008497177623212337f, 0.0006676343036815524f, 0.0008219361188821495f, 0.0006119930185377598f, 0.0005542252329178154f, 0.0006216475740075111f, 0.0008677414734847844f, 0.0007616120856255293f, 0.0009182840585708618f, 0.0007710846257396042f, 0.00046443165047094226f, 0.0007531600422225893f, 0.0011219034204259515f, 0.0009595117880962789f, 0.0007147050346247852f, 0.0006169772241264582f, 0.0004374196578282863f, 0.0007931194268167019f, 0.000765637552831322f, 0.0006361771374940872f, 0.0010090445866808295f, 0.0006554948049597442f, 0.000516378553584218f, 0.0004996208008378744f, 0.0011070995824411511f, 0.0007584015256725252f, 0.0007674754015170038f, 0.0005405119736678898f, 0.00068926892708987f, 0.0005534616066142917f, 0.0005527309258468449f, 0.0007543866522610188f, 0.0009177050087600946f, 0.0007642947020940483f, 0.0006553190760314465f, 0.0007087182020768523f, 0.0007363903569057584f, 0.0007390676764771342f, 0.0005861078971065581f, 0.0006233822787180543f, 0.0005947398603893816f, 0.0008679766324348748f, 0.0010361999738961458f, 0.0005609904765151441f, 0.0005667174700647593f, 0.0008641855674795806f, 0.0005600034492090344f, 0.0011783863883465528f, 0.0005205664201639593f, 0.0006433819653466344f, 0.0006840395508334041f, 0.0005639595328830183f, 0.00046303041744977236f, 0.0008177132112905383f, 0.0007538721547462046f, 0.0008965468150563538f, 0.0007951682200655341f, 0.0007250930648297071f, 0.0009180503548122942f, 0.0008183269528672099f, 0.0006809636834077537f, 0.0006717063952237368f, 0.0006098306621424854f, 0.0009651075815781951f, 0.001172699499875307f, 0.0009525190107524395f, 0.0009095317800529301f, 0.0007267049513757229f, 0.0006881513982079923f, 0.0004581825924105942f, 0.0006787357269786298f, 0.0008588428026996553f, 0.0006977454759180546f, 0.0010041717905551195f, 0.0010593581246212125f, 0.0007261027931235731f, 0.0006429459317587316f, 0.000487217417685315f, 0.0006217273185029626f, 0.0006333219935186207f, 0.0006913507240824401f, 0.000725522346328944f, 0.0007207157905213535f, 0.0005670908140018582f, 0.0004461750795599073f, 0.0011306258384138346f, 0.0006849917699582875f, 0.0008421184029430151f, 0.0006990084075368941f, 0.0009055871050804853f, 0.0006502490723505616f, 0.0006036366103217006f, 0.000609730719588697f, 0.0006835428066551685f, 0.0006039633881300688f, 0.0005354259628802538f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031415766570717096f, 0.002172046573832631f, 0.0019811997190117836f, 0.0007326289778575301f, 0.0014066422590985894f, 0.002669995417818427f, 0.0010475730523467064f, 0.002291243290528655f, 0.0018964996561408043f, 0.0008586499025113881f, 0.0022474504075944424f, 0.0013653913047164679f, 0.0008081879932433367f, 0.0015718343202024698f, 0.0016688603209331632f, 0.0018276860937476158f, 0.0024337968789041042f, 0.0010882766218855977f, 0.002976454794406891f, 0.0030530686490237713f, 0.0016964137321338058f, 0.0034964412916451693f, 0.002443210920318961f, 0.0027117221616208553f, 0.0020752588752657175f, 0.0016434418503195047f, 0.000677645904943347f, 0.0005434015765786171f, 0.0007291734218597412f, 0.0006938779260963202f, 0.0008977585239335895f, 0.0008079591789282858f, 0.0007633368950337172f, 0.0006106023793108761f, 0.0007982465904206038f, 0.0008798313792794943f, 0.002361939288675785f, 0.00215985463000834f, 0.001967111136764288f, 0.0007675803499296308f, 0.0029064903501421213f, 0.0010344741167500615f, 0.0013564698165282607f, 0.0017722309567034245f, 0.0009975213324651122f, 0.0011758118635043502f, 0.0006859866552986205f, 0.000557721359655261f, 0.0024208505637943745f, 0.002311642747372389f, 0.0030241096392273903f, 0.0007151288446038961f, 0.0005076849483884871f, 0.0006221742951311171f, 0.0019895953591912985f, 0.002878973027691245f, 0.002756780246272683f, 0.0010869953548535705f, 0.0025940085761249065f, 0.0009700683294795454f, 0.0008118261466734111f, 0.0018174261786043644f, 0.0007446464733220637f, 0.002093113260343671f, 0.0023213145323097706f, 0.002619487466290593f, 0.0015858339611440897f, 0.0017506824806332588f, 0.0007649151375517249f, 0.000569321564398706f, 0.0021045715548098087f, 0.0022991825826466084f, 0.0005396933993324637f, 0.0005365663673728704f, 0.0023241329472512007f, 0.0026789314579218626f, 0.0021394819486886263f, 0.0026366212405264378f, 0.002863863483071327f, 0.0007756396662443876f, 0.0010585648706182837f, 0.0006056432612240314f, 0.0015497797867283225f, 0.0008009246666915715f, 0.0030967642087489367f, 0.0008965909946709871f, 0.0024043319281190634f, 0.0007278293487615883f, 0.002449814695864916f, 0.0016970573924481869f, 0.0029706142377108335f, 0.0026443516835570335f, 0.002063375897705555f, 0.0008684264030307531f, 0.0024309479631483555f, 0.002886525122448802f, 0.002097038784995675f, 0.0021246597170829773f, 0.0029930362943559885f, 0.002893749624490738f, 0.0022919008042663336f, 0.0028482188936322927f, 0.0022275513038039207f, 0.0007753777899779379f, 0.0005833146860823035f, 0.0012483702739700675f, 0.0024949032813310623f, 0.0031284205615520477f, 0.0006633865414187312f, 0.002994521288201213f, 0.0025149290449917316f, 0.0024448796175420284f, 0.0005760544445365667f, 0.0009345363941974938f, 0.0019498078618198633f, 0.002640079241245985f, 0.002052857307717204f, 0.002469157800078392f, 0.0005906841834075749f, 0.0008374662138521671f, 0.0009455529507249594f, 0.001251931767910719f, 0.0025131332222372293f, 0.0007199372048489749f, 0.002110698027536273f, 0.0007707377662882209f, 0.002229927573353052f, 0.0010941626969724894f, 0.0016321089351549745f, 0.0006642689695581794f, 0.0029028416611254215f, 0.0014528126921504736f, 0.0029730466194450855f, 0.002261379035189748f, 0.0006580498884432018f, 0.0007275360985659063f, 0.002433865098282695f, 0.003004391212016344f, 0.001174052944406867f, 0.002526339376345277f, 0.002579145133495331f, 0.0013705105520784855f, 0.0006955661810934544f, 0.0011652704561129212f, 0.0012117876904085279f, 0.0022633422631770372f, 0.0013536204351112247f, 0.0030934265814721584f, 0.000611076015047729f, 0.0037239352241158485f, 0.002062132814899087f, 0.0023487871512770653f, 0.0023922522086650133f, 0.005364561453461647f, 0.003298395313322544f, 0.0007638466195203364f, 0.0026924279518425465f, 0.0015451126964762807f, 0.0005862894468009472f, 0.002466256730258465f, 0.0007599493255838752f, 0.0025564469397068024f, 0.002135450718924403f, 0.0012870504288002849f, 0.002859079046174884f, 0.002756376750767231f, 0.002559744520112872f, 0.0026580586563795805f, 0.0025923647917807102f, 0.0005424296832643449f, 0.000737165508326143f, 0.0031495343428105116f, 0.0021449315827339888f, 0.0013817782746627927f, 0.002985135419294238f, 0.0010571936145424843f, 0.0011815273901447654f, 0.0021031054202467203f, 0.001336746383458376f, 0.0006006714538671076f, 0.0007386113284155726f, 0.0027502388693392277f, 0.0032749315723776817f, 0.0010150396265089512f, 0.0006251988816075027f, 0.003086650278419256f, 0.0008389131398871541f, 0.0018333299085497856f, 0.0015302259707823396f, 0.001202259911224246f, 0.001650289399549365f, 0.0007631227490492165f, 0.0005978668923489749f, 0.0006490483065135777f, 0.0007503684028051794f, 0.0010369446827098727f, 0.0022840818855911493f, 0.002531431382521987f, 0.003064419375732541f, 0.0021391892805695534f, 0.0023888633586466312f, 0.0026545431464910507f, 0.0016452099662274122f, 0.002539585577324033f, 0.0005801448132842779f, 0.0006834056111983955f, 0.002946869470179081f, 0.0022229712922126055f, 0.0028335689567029476f, 0.0027390415780246258f, 0.001200932776555419f, 0.002466110046952963f, 0.0007131895399652421f, 0.0031798575073480606f, 0.0007129708537831903f, 0.004837601445615292f, 0.0020115170627832413f, 0.0033599380403757095f, 0.000964248669333756f, 0.0026456578634679317f, 0.0006030378863215446f, 0.002729065716266632f, 0.002389567205682397f, 0.003873850218951702f, 0.0008925385191105306f, 0.004143028985708952f, 0.0006971281836740673f, 0.0027993039693683386f, 0.0006659827777184546f, 0.0007113350438885391f, 0.0006017318228259683f, 0.0015150191029533744f, 0.004217092413455248f, 0.0020988844335079193f, 0.0015879882266744971f, 0.0005264214123599231f, 0.0007578700315207243f, 0.0008148562046699226f, 0.0006026129121892154f, 0.003525235690176487f, 0.0014940907713025808f, 0.0026852113660424948f, 0.0025940181221812963f, 0.0026894924230873585f, 0.0005785813555121422f, 0.002690722467377782f, 0.002153178444132209f, 0.0006529844831675291f, 0.0028424852062016726f, 0.002280038082972169f, 0.0016163182444870472f, 0.0022499822080135345f, 0.0006412697257474065f, 0.0023442041128873825f, 0.0016307157929986715f, 0.0021419373806566f, 0.0006845834432169795f, 0.0027363833505660295f, 0.0030508567579090595f, 0.0007239594706334174f, 0.001962431473657489f, 0.0006676262710243464f, 0.0009592684800736606f, 0.0008657171274535358f, 0.0010504027595743537f, 0.0011125904275104403f, 0.0010525058023631573f, 0.0026315944269299507f, 0.002572063123807311f, 0.0006542189512401819f, 0.00333281047642231f, 0.0007151738973334432f, 0.0022724929731339216f, 0.0012446991167962551f, 0.0036677962634712458f, 0.0020069500897079706f, 0.002587361494079232f, 0.002593656536191702f, 0.0007777480059303343f, 0.0005468924646265805f, 0.0006142401252873242f, 0.0007785066263750196f, 0.0025111923459917307f, 0.001569596934132278f, 0.0008228513761423528f, 0.0034753107465803623f, 0.0005449195741675794f, 0.0006391299539245665f, 0.0022354868706315756f, 0.0005586616462096572f, 0.0007123254472389817f, 0.0006502075702883303f, 0.0007179616950452328f, 0.0022435167338699102f, 0.0019791419617831707f, 0.0005408721044659615f, 0.002474694512784481f, 0.0005271443515084684f, 0.0007200492545962334f, 0.0009927941719070077f, 0.0009310723980888724f, 0.0021955082193017006f, 0.0009907031198963523f, 0.0006082335021346807f, 0.0006280821398831904f, 0.0008731773123145103f, 0.0017971167108044028f, 0.0006209086277522147f, 0.0008343831286765635f, 0.0005970316124148667f, 0.001196976052597165f, 0.0025053576100617647f, 0.0008520508999936283f, 0.0006426092586480081f, 0.0032394519075751305f, 0.0007248756010085344f, 0.0014582613948732615f, 0.001320050796493888f, 0.0007425355142913759f, 0.0006117339944466949f, 0.0021359657403081656f, 0.0009190458222292364f, 0.0024558636359870434f, 0.0013450609985738993f, 0.0029295303393155336f, 0.0009705642005428672f, 0.0023012368474155664f, 0.0027747175190597773f, 0.0014420250663533807f, 0.0008436291245743632f, 0.0024717100895941257f, 0.0007507448317483068f, 0.0028670786414295435f, 0.0011514980578795075f, 0.0018320323433727026f, 0.002648791763931513f, 0.0014086896553635597f, 0.0005766501999460161f, 0.002136080991476774f, 0.0015576608711853623f, 0.0023050790186971426f, 0.0010948760900646448f, 0.0007618252420797944f, 0.0008984899614006281f, 0.0008313960279338062f, 0.003565471153706312f, 0.0007417932501994073f, 0.0007077076006680727f, 0.0006968715460970998f, 0.002174532040953636f, 0.0008135208045132458f, 0.0017714884597808123f, 0.0007635644287802279f, 0.0022940675262361765f, 0.0024355638306587934f, 0.002974451519548893f, 0.002981770783662796f, 0.0007771247765049338f, 0.0009651097934693098f, 0.0008911419427022338f, 0.0005679235910065472f, 0.0011332235299050808f, 0.0005977769615128636f, 0.0007058467599563301f, 0.0007041451171971858f, 0.0024115201085805893f, 0.0006843863520771265f, 0.001104710390791297f, 0.0007562462706118822f, 0.0029763507191091776f, 0.00252493005245924f, 0.0023823503870517015f, 0.0007727186311967671f, 0.0017301671905443072f, 0.002936356933787465f, 0.0012708221329376101f, 0.000596711179241538f, 0.0018388128373771906f, 0.002055335557088256f, 0.003092999802902341f, 0.0013981725787743926f, 0.0005643051117658615f, 0.002612438052892685f, 0.0013585520209744573f, 0.002606673166155815f, 0.0026709141675382853f, 0.0008815826731733978f, 0.0006878332351334393f, 0.0007270983187481761f, 0.0007693581865169108f, 0.0029019976500421762f, 0.0008360046776942909f, 0.0023642282467335463f, 0.0012781658442690969f, 0.0030101605225354433f, 0.001490095630288124f, 0.0009398479596711695f, 0.0024742968380451202f, 0.0028489073738455772f, 0.000991399516351521f, 0.0005793965538032353f, 0.0006389027694240212f, 0.0005668404628522694f, 0.000527315482031554f, 0.00264769047498703f, 0.0024390334729105234f, 0.0025901393964886665f, 0.0006346197915263474f, 0.0007670628256164491f, 0.0005689677782356739f, 0.002652144758030772f, 0.0020016110502183437f, 0.0020926876459270716f, 0.002337387762963772f, 0.0007793580880388618f, 0.0009011997026391327f, 0.0028839476872235537f, 0.0007540315273217857f, 0.002419691998511553f, 0.0011880332604050636f, 0.002426121151074767f, 0.0036483220756053925f, 0.0026470175944268703f, 0.0008670694078318775f, 0.0022473789285868406f, 0.0006610217969864607f, 0.0025760717689990997f, 0.002485706703737378f, 0.002823208924382925f, 0.0025820895098149776f, 0.001477109151892364f, 0.0019034681608900428f, 0.0034255681093782187f, 0.0015353899216279387f, 0.0029242841992527246f, 0.001176638761535287f, 0.002979560289531946f, 0.0026123186107724905f, 0.0020780933555215597f, 0.002307918621227145f, 0.002209174446761608f, 0.002440189477056265f, 0.0014408060815185308f, 0.001719701336696744f, 0.003019338008016348f, 0.0006393916555680335f, 0.0007176822400651872f, 0.0033968195784837008f, 0.0008075120276771486f, 0.0015941320452839136f, 0.0017575754318386316f, 0.003266008570790291f, 0.0007726136827841401f, 0.0022857720032334328f, 0.0024851812049746513f, 0.002208435907959938f, 0.0022238169331103563f, 0.0009772105840966105f, 0.0015960525488480926f, 0.0014295424334704876f, 0.001607756596058607f, 0.0007589947199448943f, 0.000754968379624188f, 0.0019605911802500486f, 0.0030276798643171787f, 0.0008817764464765787f, 0.002696840325370431f, 0.004258032888174057f, 0.0018329436425119638f, 0.0005652991821989417f, 0.002532318700104952f, 0.0016218993114307523f, 0.001156715559773147f, 0.002295362064614892f, 0.002014848403632641f, 0.0008249591337516904f, 0.0026461344677954912f, 0.002037225291132927f, 0.0016668878961354494f, 0.0017802315996959805f, 0.0019287810428068042f, 0.0022568320855498314f, 0.003077937988564372f, 0.0006463342579081655f, 0.00056561449309811f, 0.0028902243357151747f, 0.000559119216632098f, 0.0013260197592899203f, 0.0008105249726213515f, 0.0007474507438018918f, 0.0014488145243376493f, 0.0006936138379387558f, 0.0025145201943814754f, 0.00246012513525784f, 0.001125998911447823f, 0.0008970450144261122f, 0.0025938991457223892f, 0.002692506415769458f, 0.0026035523042082787f, 0.0019021055195480585f, 0.0015509059885516763f, 0.0025979282800108194f, 0.0018334046471863985f, 0.002340031089261174f, 0.001627236371859908f, 0.0005956368404440582f, 0.001736468286253512f, 0.002884290646761656f, 0.0010135543998330832f, 0.002620821353048086f, 0.002814252395182848f, 0.001975472318008542f, 0.0007120632217265666f, 0.0032229998614639044f, 0.0022854094859212637f, 0.002593887271359563f, 0.0009810433257371187f, 0.0007452589925378561f, 0.000593577919062227f, 0.0024639300536364317f, 0.0023168358020484447f, 0.002855321392416954f, 0.0018992581171914935f, 0.0027625809889286757f, 0.0023677791468799114f, 0.0011581373400986195f, 0.0007978138164617121f, 0.0008145225001499057f, 0.0007597162621095777f, 0.001031668740324676f, 0.0006565346848219633f, 0.0012932820245623589f, 0.0037849913351237774f, 0.0006980841280892491f, 0.0026572332717478275f, 0.0020296284928917885f, 0.0006025521433912218f, 0.0007637313101440668f, 0.0009449792560189962f, 0.0023870000150054693f, 0.0021241027861833572f, 0.002646092092618346f, 0.0023268628865480423f, 0.0024244633968919516f, 0.0007739979191683233f, 0.0018231258727610111f, 0.0010690721683204174f, 0.0017842072993516922f, 0.002433511195704341f, 0.0009842311264947057f, 0.0022605927661061287f, 0.0013004327192902565f, 0.0017549224430695176f, 0.0007403267081826925f, 0.0006637041224166751f, 0.000661758822388947f, 0.0020385077223181725f, 0.003947879653424025f, 0.001483406638726592f, 0.00274660368449986f, 0.0025615463964641094f, 0.002584954025223851f, 0.001940668560564518f, 0.0008304895600304008f, 0.0013338110875338316f, 0.001004813238978386f, 0.0006295081111602485f, 0.0026207927148789167f, 0.0010056463070213795f, 0.0005943233845755458f, 0.002661834703758359f, 0.0019255972001701593f, 0.0023899434600025415f, 0.0007278135162778199f, 0.0016756739933043718f, 0.0007524500833824277f, 0.0013049079570919275f, 0.0009834865340963006f, 0.000534636783413589f, 0.001900076400488615f, 0.000862852786667645f, 0.0035277865827083588f, 0.002434787806123495f, 0.002691037254408002f, 0.0027479631826281548f, 0.0014247248182073236f, 0.002241363050416112f, 0.0007759337313473225f, 0.002523610834032297f, 0.00322481757029891f, 0.0022458520252257586f, 0.0010882144561037421f, 0.002047931542620063f, 0.0027663970831781626f, 0.00221455842256546f, 0.0005919529940001667f, 0.0006576348678208888f, 0.0036762722302228212f, 0.0028304927982389927f, 0.0025790140498429537f, 0.003576377173885703f, 0.0007130975718609989f, 0.002093547023832798f, 0.0007570103043690324f, 0.0032593891955912113f, 0.002785861026495695f, 0.0032638139091432095f, 0.0021062439773231745f, 0.0018062174785882235f, 0.002464702120050788f, 0.002590056974440813f, 0.003428056137636304f, 0.0014493990456685424f, 0.002162937307730317f, 0.0005400051013566554f, 0.0005641362513415515f, 0.0008822866948321462f, 0.0009700338705442846f, 0.0006151706329546869f, 0.0007587317377328873f, 0.0031104732770472765f, 0.0010734096867963672f, 0.0014906695578247309f, 0.002733488567173481f, 0.002516570733860135f, 0.0012899215798825026f, 0.002085931831970811f, 0.0007836688891984522f, 0.0006977447192184627f, 0.0023565771989524364f, 0.003181983483955264f, 0.004308456089347601f, 0.0027204896323382854f, 0.0006754317437298596f, 0.0018983850022777915f, 0.001781403087079525f, 0.0005378968780860305f, 0.0009691802551969886f, 0.0005364090320654213f, 0.002663270803168416f, 0.002107301028445363f, 0.00055056216660887f, 0.0008582043228670955f, 0.0006110020913183689f, 0.0006498033180832863f, 0.002826098585501313f, 0.001403813948854804f, 0.001028306083753705f, 0.0009872815571725368f, 0.0006371845956891775f, 0.0012540735770016909f, 0.002844511531293392f, 0.0021065024193376303f, 0.0005335122114047408f, 0.0010234746150672436f, 0.0008022855035960674f, 0.004034943412989378f, 0.0030800921376794577f, 0.0006364688742905855f, 0.0005267778178676963f, 0.0028932213317602873f, 0.0006317447405308485f, 0.001962230773642659f, 0.0020589663181453943f, 0.003069319063797593f, 0.0014356177998706698f, 0.0010461903875693679f, 0.0021780668757855892f, 0.0010967000853270292f, 0.0028895996510982513f, 0.0005999754648655653f, 0.0008239829912781715f, 0.0037219151854515076f, 0.0007284018793143332f, 0.0009088119259104133f, 0.002676913980394602f, 0.0010161830577999353f, 0.002075653988867998f, 0.0007560594822280109f, 0.0008268420933745801f, 0.000951369758695364f, 0.003099882509559393f, 0.0020638611167669296f, 0.0008138068369589746f, 0.0016592886531725526f, 0.0006091275135986507f, 0.0028087107930332422f, 0.0012624864466488361f, 0.0027571087703108788f, 0.0011633987305685878f, 0.0014545397134497762f, 0.0007546780398115516f, 0.003945549484342337f, 0.0026010272558778524f, 0.001256768824532628f, 0.0021899596322327852f, 0.00266537768766284f, 0.0007676786044612527f, 0.002472462598234415f, 0.0006975660799071193f, 0.0008668631198816001f, 0.00159704708494246f, 0.003183538792654872f, 0.00253768777474761f, 0.0005788297858089209f, 0.0023602889850735664f, 0.0008602437446825206f, 0.0008083711727522314f, 0.0006196170579642057f, 0.002362412167713046f, 0.0008259809110313654f, 0.0020354758016765118f, 0.0030654321890324354f, 0.0005758281913585961f, 0.0017253486439585686f, 0.0022593243047595024f, 0.001869636937044561f, 0.0006268926081247628f, 0.0005967914476059377f, 0.002210312057286501f, 0.001639386871829629f, 0.0024812091141939163f, 0.003232738468796015f, 0.002429904416203499f, 0.0012570754624903202f, 0.0026903278194367886f, 0.0006231527077034116f, 0.001933407038450241f, 0.0017104443395510316f, 0.003596572671085596f, 0.0031106534879654646f, 0.0021208086982369423f, 0.0018721697852015495f, 0.001972932368516922f, 0.000637855613604188f, 0.0007236988749355078f, 0.002328374655917287f, 0.0011951107298955321f, 0.0005518870311789215f, 0.003115921514108777f, 0.0025423963088542223f, 0.0006497524445876479f, 0.0009352607885375619f, 0.00098987587261945f, 0.0008002486429177225f, 0.004743029363453388f, 0.0005924736615270376f, 0.0007857867167331278f, 0.0031583586242049932f, 0.002510984195396304f, 0.0009379839175380766f, 0.0006656265468336642f, 0.0005906274309381843f, 0.002180290874093771f, 0.0030253049917519093f, 0.0011162145528942347f, 0.004324556328356266f, 0.0021722859237343073f, 0.0025997988414019346f, 0.0021101462189108133f, 0.002637251513078809f, 0.002715531038120389f, 0.0011233215918764472f, 0.0028136628679931164f, 0.003046640893444419f, 0.00341713591478765f, 0.0016646545846015215f, 0.0007391713443212211f, 0.003305200720205903f, 0.0024471839424222708f, 0.0018437207909300923f, 0.0025988437701016665f, 0.0017963986610993743f, 0.000581975094974041f, 0.0007736668922007084f, 0.0020829318091273308f, 0.0007339421426877379f, 0.0006289437296800315f, 0.0027689801063388586f, 0.002474895678460598f, 0.0036076747346669436f, 0.0005832039751112461f, 0.0010851476108655334f, 0.002281659282743931f, 0.0011326081585139036f, 0.003337364410981536f, 0.0011396179907023907f, 0.0032437858171761036f, 0.0007011008565314114f, 0.0007098953938111663f, 0.003931961953639984f, 0.002951830392703414f, 0.0008487645536661148f, 0.000868741946760565f, 0.0007588684093207121f, 0.0033131111413240433f, 0.0032923666294664145f, 0.0010950241703540087f, 0.0011257171863690019f, 0.0005903431447222829f, 0.0031337859109044075f, 0.0008121751016005874f, 0.0024274333845824003f, 0.002672487171366811f, 0.0009011112852022052f, 0.0006344947614707053f, 0.0013484405353665352f, 0.001217845594510436f, 0.0005668659578077495f, 0.0008627412607893348f, 0.002979936543852091f, 0.0011870089219883084f, 0.0006301576504483819f, 0.0018230332061648369f, 0.002294703386723995f, 0.0012432278599590063f, 0.0005495749064721167f, 0.001484706997871399f, 0.0006017473642714322f, 0.0006287560099735856f, 0.002987921703606844f, 0.0008123958832584321f, 0.0006460188888013363f, 0.0024477720726281404f, 0.0007973377942107618f, 0.0017284824280068278f, 0.0021317878272384405f, 0.0006445431499741971f, 0.001732561388053f, 0.0017053531482815742f, 0.0019293822115287185f, 0.0022850679233670235f, 0.002925364300608635f, 0.0023167261388152838f, 0.0012279519578441978f, 0.0021786417346447706f, 0.0016394758131355047f, 0.001774730160832405f, 0.0006631210562773049f, 0.0023285415954887867f, 0.0024852408096194267f, 0.002303937217220664f, 0.0022702524438500404f, 0.0014976890524849296f, 0.0010760364821180701f, 0.0006619242485612631f, 0.002768896520137787f, 0.003296542214229703f, 0.0018426186870783567f, 0.0007628533057868481f, 0.0030299960635602474f, 0.00309140607714653f, 0.002277002204209566f, 0.002916027558967471f, 0.0012572088744491339f, 0.0006966642686165869f, 0.0007063228986226022f, 0.0022877559531480074f, 0.000616227276623249f, 0.00268892222084105f, 0.0026254020631313324f, 0.0007869409746490419f, 0.001003831159323454f, 0.002779151778668165f, 0.0018536868738010526f, 0.0027229455299675465f, 0.0015210469719022512f, 0.0007494034944102168f, 0.0021329631563276052f, 0.001780486200004816f, 0.000727816135622561f, 0.0007042920333333313f, 0.0011963811703026295f, 0.0018639095360413194f, 0.0025923645589500666f, 0.000634289113804698f, 0.0006100405007600784f, 0.0022804427426308393f, 0.0008543118019588292f, 0.00100999535061419f, 0.0006487755454145372f, 0.0034548966214060783f, 0.0016319608548656106f, 0.0029251265805214643f, 0.0024997324217110872f, 0.0028809162322431803f, 0.0030255417805165052f, 0.0027481275610625744f, 0.0008789848070591688f, 0.002772961976006627f, 0.0008520163828507066f, 0.002667282707989216f, 0.002585947047919035f, 0.0006970512913540006f, 0.0021989280357956886f, 0.0007939419010654092f, 0.0008288639364764094f, 0.003058028407394886f, 0.003417128464207053f, 0.0027323535177856684f, 0.0007523184758611023f, 0.0008176788105629385f, 0.002966460073366761f, 0.0020403906237334013f, 0.0027837378438562155f, 0.003296345006674528f, 0.002611154690384865f, 0.002212974475696683f, 0.001287049730308354f, 0.0006992967682890594f, 0.0006475430564023554f, 0.0031711384654045105f, 0.0007538529462181032f, 0.0026996172964572906f, 0.0005469470052048564f, 0.002810340840369463f, 0.00307652959600091f, 0.0006004261667840183f, 0.0017233622493222356f, 0.0007230447954498231f, 0.0006058128783479333f, 0.002694354159757495f, 0.0013175391359254718f, 0.002211726037785411f, 0.0032722949981689453f, 0.002235373016446829f, 0.002585733775049448f, 0.0012458644341677427f, 0.0029495100025087595f, 0.0014299110043793917f, 0.0007729830103926361f, 0.0007918773917481303f, 0.002794019877910614f, 0.002923848107457161f, 0.0025744950398802757f, 0.0007440168410539627f, 0.0007002667407505214f, 0.0030586060602217913f, 0.0023484069388359785f, 0.002681798068806529f, 0.002379588084295392f, 0.0030127239879220724f, 0.0005866374121978879f, 0.0007271081558428705f, 0.0015246836701408029f, 0.001976143568754196f, 0.0021191162522882223f, 0.0029256227426230907f, 0.0007630882319062948f, 0.0009928419021889567f, 0.002701643155887723f, 0.0020625644829124212f, 0.0029516646172851324f, 0.002480093389749527f, 0.002135835587978363f, 0.002903716405853629f, 0.0006037886487320065f, 0.0026958114467561245f, 0.0007213303470052779f, 0.0023372292052954435f, 0.0028337896801531315f, 0.0028195991180837154f, 0.0028424037154763937f, 0.00290942401625216f, 0.0025743942242115736f, 0.002255653962492943f, 0.0025814201217144728f, 0.002176692010834813f, 0.0023691700771450996f, 0.002495321910828352f, 0.0007080795476213098f, 0.0028443129267543554f, 0.002909241709858179f, 0.0037471354007720947f, 0.0018020009156316519f, 0.0010908774565905333f, 0.0034705933649092913f, 0.0023094648495316505f, 0.001378834480419755f, 0.0018973133992403746f, 0.002627308713272214f, 0.0008995601674541831f, 0.0022008076775819063f, 0.0022268726024776697f, 0.0005621418240480125f, 0.0012151289265602827f, 0.0007160090026445687f, 0.0027496099937707186f, 0.0018184758955612779f, 0.0006561080226674676f, 0.0006997238961048424f, 0.002541425172239542f, 0.0021618467289954424f, 0.0006563785136677325f, 0.001949139405041933f, 0.0005600493750534952f, 0.0014411339070647955f, 0.0030473824590444565f, 0.0021947920322418213f, 0.0008073794306255877f, 0.002322495449334383f, 0.0016402923502027988f, 0.0025254806969314814f, 0.002231074031442404f, 0.0021005196031183004f, 0.0006886391784064472f, 0.0005865468992851675f, 0.0020617665722966194f, 0.0007576419156976044f, 0.0019456257577985525f, 0.0032397524919360876f, 0.001708318362943828f, 0.002259182510897517f, 0.0008413881296291947f, 0.0009446857729926705f, 0.002712265122681856f, 0.0022308870684355497f, 0.0006642634398303926f, 0.003978635650128126f, 0.001840890501625836f, 0.0006929821684025228f, 0.0017130961641669273f, 0.0028740521520376205f, 0.0008082594140432775f, 0.0006355768418870866f, 0.00270414212718606f, 0.00243041617795825f, 0.0007228199974633753f, 0.0026311951223760843f, 0.0021425876766443253f, 0.002111096167936921f, 0.0005550194764509797f, 0.001742050750181079f, 0.0016447588568553329f, 0.0006056078127585351f, 0.000941776146646589f, 0.0011320672929286957f, 0.0031043747439980507f, 0.002438535913825035f, 0.00195876881480217f, 0.0006730533787049353f, 0.0005670245154760778f, 0.0008082174463197589f, 0.0013049300760030746f, 0.003107385942712426f, 0.002391060348600149f, 0.0023644310422241688f, 0.0030535112600773573f, 0.002203249139711261f, 0.0023352529387921095f, 0.0023795205634087324f, 0.0005943258875049651f, 0.0028171075973659754f, 0.0024166791699826717f, 0.0006713806069456041f, 0.0026969793252646923f, 0.0019365355838090181f, 0.0008450016030110419f, 0.0020346753299236298f, 0.0034823946189135313f, 0.0027758078649640083f, 0.002631921786814928f, 0.0031721300911158323f, 0.0008564220042899251f, 0.0026658382266759872f, 0.002188415266573429f, 0.0010261646239086986f, 0.0012131733819842339f, 0.002972076181322336f, 0.0009177958127111197f, 0.0015464113093912601f, 0.0023714937269687653f, 0.0024857232347130775f, 0.00249561108648777f, 0.0010261812712997198f, 0.001904812641441822f, 0.003035066183656454f, 0.003468886949121952f, 0.0026958805974572897f, 0.001061822404153645f, 0.0013121365336701274f, 0.000654728093650192f, 0.0022736017126590014f, 0.000772719387896359f, 0.002111902227625251f, 0.0023002587258815765f, 0.0028273616917431355f, 0.001712679280899465f, 0.0033153467811644077f, 0.0028585216496139765f, 0.000547511619515717f, 0.002579326508566737f, 0.0034157861955463886f, 0.0006029492942616343f, 0.0006859740242362022f, 0.000778790155891329f, 0.000518725486472249f, 0.0010442312341183424f, 0.002627614187076688f, 0.0009303054539486766f, 0.0005285610095597804f, 0.0028726716991513968f, 0.0010005178628489375f, 0.0012344823917374015f, 0.002494446001946926f, 0.002149657579138875f, 0.0006041326560080051f, 0.003603317542001605f, 0.002484783763065934f, 0.0029103471897542477f, 0.0007764104520902038f, 0.002244668547064066f, 0.002685287268832326f, 0.0010127167915925384f, 0.0007379751186817884f, 0.002064508618786931f, 0.001108429511077702f, 0.0017474143533036113f, 0.002603587694466114f, 0.0010487230028957129f, 0.000699001713655889f, 0.0008215006091631949f, 0.0023605134338140488f, 0.0029320756439119577f, 0.0021621815394610167f, 0.0018617160385474563f, 0.0006035400438122451f, 0.0029156783130019903f, 0.000729801133275032f, 0.0008739040931686759f, 0.0031704821158200502f, 0.0030861529521644115f, 0.000954700110014528f, 0.002108671236783266f, 0.0007786501664668322f, 0.0006531225517392159f, 0.002715559210628271f, 0.0005848831497132778f, 0.0006634996389038861f, 0.0008663097396492958f, 0.0026447626296430826f, 0.0007365344790741801f, 0.0022982528898864985f, 0.0028616986237466335f, 0.0028912131674587727f, 0.0018380953697487712f, 0.0009935081470757723f, 0.003009113948792219f, 0.0011607439955696464f, 0.0008972216164693236f, 0.0025335506070405245f, 0.0005485840374603868f, 0.0019289448391646147f, 0.0005743670626543462f, 0.0032055103220045567f, 0.0027131247334182262f, 0.0008040938409976661f, 0.0021216310560703278f, 0.0015255400212481618f, 0.0007461557979695499f, 0.003031807253137231f, 0.0008829931612126529f, 0.0006080506718717515f, 0.002552477177232504f, 0.00289151631295681f, 0.002393696689978242f, 0.0015617728931829333f, 0.0023115933872759342f, 0.0035812784917652607f, 0.0021610986441373825f, 0.0027852694038301706f, 0.002999098738655448f, 0.0014730308903381228f, 0.0008126416942104697f, 0.00225444114767015f, 0.00304200011305511f, 0.0011905229184776545f, 0.0032796827144920826f, 0.0013669998152181506f, 0.0018010700587183237f, 0.0012832743814215064f, 0.0024000678677111864f, 0.0006703888066112995f, 0.0029729234520345926f, 0.0024736435152590275f, 0.0007455058512277901f, 0.003049461869522929f, 0.0021148640662431717f, 0.00239516980946064f, 0.0014268686063587666f, 0.001124369679018855f, 0.000679277756717056f, 0.0014224604237824678f, 0.0007009200635366142f, 0.0017777049215510488f, 0.0007712059887126088f, 0.003109643002972007f, 0.0009129399550147355f, 0.002379452111199498f, 0.0005972667131572962f, 0.0012233061715960503f, 0.003922446630895138f, 0.0026075011119246483f, 0.0011539584957063198f, 0.002889883005991578f, 0.00307635054923594f, 0.0008021318353712559f, 0.0023045761045068502f, 0.0029137327801436186f, 0.001370922545902431f, 0.001665151328779757f, 0.0016303430311381817f, 0.0005529325571842492f, 0.002825018484145403f, 0.002963083563372493f, 0.003167001996189356f, 0.0029758033342659473f, 0.000779267807956785f, 0.0016006914665922523f, 0.003180463332682848f, 0.0029314153362065554f, 0.0009843502193689346f, 0.0018483322346583009f, 0.0022455542348325253f, 0.0010154596529901028f, 0.0006701386882923543f, 0.0007528646965511143f, 0.0009747457806952298f, 0.0031546177342534065f, 0.0025609901640564203f, 0.0022952284198254347f, 0.002891980577260256f, 0.003323407843708992f, 0.002472544088959694f, 0.0017376497853547335f, 0.0012431879295036197f, 0.003224999411031604f, 0.0007826501969248056f, 0.003440885804593563f, 0.00210388726554811f, 0.0010320455767214298f, 0.0006329178577288985f, 0.0013381305616348982f, 0.0008702116901986301f, 0.002602986292913556f, 0.002743946388363838f, 0.002147494349628687f, 0.0006710450979880989f, 0.0014513293281197548f, 0.0010852155974134803f, 0.0005798671627417207f, 0.0017358515178784728f, 0.001955321291461587f, 0.002303820801898837f, 0.0017776911845430732f, 0.001232221256941557f, 0.0009353876230306923f, 0.0006969168898649514f, 0.003900100477039814f, 0.0007194859208539128f, 0.000804911891464144f, 0.0008010705932974815f, 0.0028913961723446846f, 0.002793678781017661f, 0.0008407096611335874f, 0.0027491517830640078f, 0.0013702460564672947f, 0.002045901259407401f, 0.002630217233672738f, 0.0014121868880465627f, 0.0027001616545021534f, 0.002349086804315448f, 0.0007058153860270977f, 0.0008535197703167796f, 0.000577080063521862f, 0.003212238661944866f, 0.002709748223423958f, 0.0007464844966307282f, 0.0031537236645817757f, 0.002835227642208338f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 10,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006091356743127108f, 0.004210684448480606f, 0.008190326392650604f, 0.0032327875960618258f, 0.006255486514419317f, 0.007361384574323893f, 0.008701923303306103f, 0.006612538360059261f, 0.007162913214415312f, 0.00843100342899561f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #177 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #178 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #179 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #180 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #181 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #182 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #183 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #184 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #185 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #186 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #187 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #188 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #189 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #190 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_scratch1_array_intq, AI_STATIC_CONST,
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
  AI_SHAPE_INIT(4, 1, 5220, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5220, 5220),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
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
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10, 10),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  128, 0x1,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10, 10),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  129, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
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
  AI_SHAPE_INIT(4, 1280, 1, 1, 10), AI_STRIDE_INIT(4, 1, 1280, 12800, 12800),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  249, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  250, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  251, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  252, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  253, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_array_intq)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  254, 0x0,
  AI_SHAPE_INIT(4, 1, 52, 1, 1), AI_STRIDE_INIT(4, 1, 1, 52, 52),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  255, 0x0,
  AI_SHAPE_INIT(4, 1, 88, 1, 1), AI_STRIDE_INIT(4, 1, 1, 88, 88),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #256 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  256, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #257 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  257, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #258 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  258, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #259 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  259, 0x0,
  AI_SHAPE_INIT(4, 1, 1481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1481, 1481),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #260 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  260, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #261 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  261, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #262 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  262, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #263 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  263, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #264 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  264, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #265 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  265, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #266 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  266, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #267 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  267, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #268 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  268, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #269 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  269, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #270 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  270, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #271 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  271, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #272 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  272, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #273 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  273, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #274 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  274, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #275 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  275, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #276 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  276, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #277 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  277, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #278 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  278, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #279 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  279, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #280 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  280, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #281 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  281, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #282 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  282, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #283 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  283, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #284 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  284, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #285 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  285, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #286 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  286, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #287 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch1, AI_STATIC,
  287, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_scratch1_array, &conv2d_40_scratch1_array_intq)

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


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1436313472, 25, -62 };
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


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -123, -121, -118, -116, -113, -111, -109, -106, -104, -101, -99, -96, -94, -91, -89, -87, -84, -82, -79, -77, -74, -72, -70, -67, -65, -62, -60, -57, -55, -53, -50, -48, -45, -43, -40, -38, -35, -33, -31, -28, -26, -23, -21, -18, -16, -14, -11, -9, -6, -4, -1, 1, 3, 6, 8, 11, 13, 16, 18, 21, 23, 25, 28, 30, 33, 35, 38, 40, 42, 45, 47, 50, 52, 55, 57, 60, 62, 64, 67, 69, 72, 74, 77, 79, 81, 84, 86, 89, 91, 94, 96, 98, 101, 103, 106, 108, 111, 113, 116, 118, 120, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -118, -116, -114, -112, -110, -107, -105, -103, -101, -99, -97, -95, -93, -91, -89, -87, -85, -83, -81, -79, -77, -75, -73, -71, -68, -66, -64, -62, -60, -58, -56, -54, -52, -50, -48, -46, -44, -42, -40, -38, -36, -34, -32, -29, -27, -25, -23, -21, -19, -17, -15, -13, -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -121, -119, -117, -115, -113, -111, -110, -108, -106, -104, -102, -100, -98, -97, -95, -93, -91, -89, -87, -86, -84, -82, -80, -78, -76, -75, -73, -71, -69, -67, -65, -63, -62, -60, -58, -56, -54, -52, -51, -49, -47, -45, -43, -41, -39, -38, -36, -34, -32, -30, -28, -27, -25, -23, -21, -19, -17, -15, -14, -12, -10, -8, -6, -4, -3, -1, 1, 3, 5, 7, 9, 10, 12, 14, 16, 18, 20, 21, 23, 25, 27, 29, 31, 32, 34, 36, 38, 40, 42, 44, 45, 47, 49, 51, 53, 55, 56, 58, 60, 62, 64, 66, 68, 69, 71, 73, 75, 77, 79, 80, 82, 84, 86, 88, 90, 92, 93, 95, 97, 99, 101, 103, 104, 106, 108, 110, 112, 114, 116, 117, 119, 121, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_63_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -126, -124, -123, -122, -121, -120, -118, -117, -116, -115, -114, -113, -111, -110, -109, -108, -107, -105, -104, -103, -102, -101, -99, -98, -97, -96, -95, -94, -92, -91, -90, -89, -88, -86, -85, -84, -83, -82, -80, -79, -78, -77, -76, -74, -73, -72, -71, -70, -69, -67, -66, -65, -64, -63, -61, -60, -59, -58, -57, -55, -54, -53, -52, -51, -50, -48, -47, -46, -45, -44, -42, -41, -40, -39, -38, -36, -35, -34, -33, -32, -30, -29, -28, -27, -26, -25, -23, -22, -21, -20, -19, -17, -16, -15, -14, -13, -11, -10, -9, -8, -7, -6, -4, -3, -2, -1, 0, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 33, 34, 35, 36, 37, 38, 40, 41, 42, 43, 44, 46, 47, 48, 49, 50, 52, 53, 54, 55, 56, 58, 59, 60, 61, 62, 63, 65, 66, 67, 68, 69, 71, 72, 73, 74, 75, 77, 78, 79, 80, 81, 82, 84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 96, 97, 98, 99, 100, 102, 103, 104, 105, 106, 107, 109, 110, 111, 112, 113, 115, 116, 117, 118, 119, 121, 122, 123, 124, 125, 126 };
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -119, -117, -115, -113, -111, -109, -107, -105, -103, -101, -100, -98, -96, -94, -92, -90, -88, -86, -84, -83, -81, -79, -77, -75, -73, -71, -69, -67, -65, -64, -62, -60, -58, -56, -54, -52, -50, -48, -47, -45, -43, -41, -39, -37, -35, -33, -31, -29, -28, -26, -24, -22, -20, -18, -16, -14, -12, -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 8, 10, 12, 14, 16, 18, 20, 22, 24, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 44, 46, 48, 50, 52, 54, 56, 58, 60, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 80, 82, 84, 86, 88, 90, 92, 94, 96, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 116, 118, 120, 122, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -121, -119, -117, -115, -113, -111, -110, -108, -106, -104, -102, -100, -99, -97, -95, -93, -91, -89, -88, -86, -84, -82, -80, -78, -77, -75, -73, -71, -69, -67, -65, -64, -62, -60, -58, -56, -54, -53, -51, -49, -47, -45, -43, -42, -40, -38, -36, -34, -32, -31, -29, -27, -25, -23, -21, -20, -18, -16, -14, -12, -10, -8, -7, -5, -3, -1, 1, 3, 4, 6, 8, 10, 12, 14, 15, 17, 19, 21, 23, 25, 26, 28, 30, 32, 34, 36, 37, 39, 41, 43, 45, 47, 49, 50, 52, 54, 56, 58, 60, 61, 63, 65, 67, 69, 71, 72, 74, 76, 78, 80, 82, 83, 85, 87, 89, 91, 93, 94, 96, 98, 100, 102, 104, 106, 107, 109, 111, 113, 115, 117, 118, 120, 122, 124, 126, 127 };
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -121, -119, -117, -115, -113, -111, -108, -106, -104, -102, -100, -97, -95, -93, -91, -89, -87, -84, -82, -80, -78, -76, -73, -71, -69, -67, -65, -63, -60, -58, -56, -54, -52, -49, -47, -45, -43, -41, -39, -36, -34, -32, -30, -28, -25, -23, -21, -19, -17, -15, -12, -10, -8, -6, -4, -1, 1, 3, 5, 7, 9, 12, 14, 16, 18, 20, 23, 25, 27, 29, 31, 33, 36, 38, 40, 42, 44, 47, 49, 51, 53, 55, 57, 60, 62, 64, 66, 68, 71, 73, 75, 77, 79, 81, 84, 86, 88, 90, 92, 95, 97, 99, 101, 103, 105, 108, 110, 112, 114, 116, 118, 121, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -122, -120, -119, -118, -117, -115, -114, -113, -112, -110, -109, -108, -107, -105, -104, -103, -102, -100, -99, -98, -97, -95, -94, -93, -92, -90, -89, -88, -87, -85, -84, -83, -82, -80, -79, -78, -77, -75, -74, -73, -72, -70, -69, -68, -67, -65, -64, -63, -62, -60, -59, -58, -57, -55, -54, -53, -52, -50, -49, -48, -47, -45, -44, -43, -42, -40, -39, -38, -37, -35, -34, -33, -32, -30, -29, -28, -27, -25, -24, -23, -22, -20, -19, -18, -17, -15, -14, -13, -12, -10, -9, -8, -7, -5, -4, -3, -2, 0, 1, 2, 3, 5, 6, 7, 8, 10, 11, 12, 13, 15, 16, 17, 18, 20, 21, 22, 23, 25, 26, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 45, 46, 47, 48, 50, 51, 52, 53, 55, 56, 57, 59, 60, 61, 62, 64, 65, 66, 67, 69, 70, 71, 72, 74, 75, 76, 77, 79, 80, 81, 82, 84, 85, 86, 87, 89, 90, 91, 92, 94, 95, 96, 97, 99, 100, 101, 102, 104, 105, 106, 107, 109, 110, 111, 112, 114, 115, 116, 117, 119, 120, 121, 122, 124, 125, 126, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_rgb_sssa8_ch,
  &conv2d_1_chain,
  NULL, &conv2d_2_layer, AI_STATIC, 
  .groups = 1, 
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 650012, 1, 1),
    650012, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 650012, 1, 1),
      650012, NULL, NULL)
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
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 5220);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5220);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 40);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 40);
    
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
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 649972);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 649972);
    
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
      
      .n_macc            = 20138532,
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
      
      .n_macc            = 20138532,
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

