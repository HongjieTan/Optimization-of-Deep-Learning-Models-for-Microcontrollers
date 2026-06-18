<<<<<<< HEAD
/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Jul 31 13:40:01 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "7011cbf923e757d932fa8def80cb258e"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Thu Jul 31 13:40:01 2025"

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
  NULL, NULL, 7552, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2950, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
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
  nl_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  pool_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  nl_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  pool_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  nl_82_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_83_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_85_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  pool_88_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_91_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  nl_92_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_93_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_95_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  pool_97_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 39, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 360, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1800, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 18, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 36, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6912, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 184320, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 640, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24960, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
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
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
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
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#288 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#289 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 736, AI_STATIC)
/* Array#290 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#291 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#292 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#293 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#294 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#295 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 496, AI_STATIC)
/* Array#296 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#297 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#298 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6121, AI_STATIC)
/* Array#299 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#300 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 468, AI_STATIC)
/* Array#301 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 792, AI_STATIC)
/* Array#302 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#303 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#304 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#305 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12241, AI_STATIC)
/* Array#306 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#307 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 936, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.010297412984073162f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003379926085472107f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003379926085472107f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014881244860589504f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10237739235162735f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.08298670500516891f),
    AI_PACK_INTQ_ZP(-5)))

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
    AI_PACK_INTQ_SCALE(0.0747445821762085f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10233410447835922f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823290441185236f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823290441185236f),
    AI_PACK_INTQ_ZP(-45)))

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
    AI_PACK_INTQ_SCALE(0.022410213947296143f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09511684626340866f),
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
    AI_PACK_INTQ_SCALE(0.022752808406949043f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008787577040493488f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008787577040493488f),
    AI_PACK_INTQ_ZP(13)))

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
    AI_PACK_INTQ_SCALE(0.08521316945552826f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.15863972902297974f),
    AI_PACK_INTQ_ZP(-8)))

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
    AI_PACK_INTQ_SCALE(0.022524185478687286f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009835081174969673f),
    AI_PACK_INTQ_ZP(25)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009835081174969673f),
    AI_PACK_INTQ_ZP(25)))

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
    AI_PACK_INTQ_SCALE(0.07763900607824326f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.18304896354675293f),
    AI_PACK_INTQ_ZP(-7)))

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
    AI_PACK_INTQ_SCALE(0.0212908573448658f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008264691568911076f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008264691568911076f),
    AI_PACK_INTQ_ZP(6)))

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
    AI_PACK_INTQ_SCALE(0.07754813134670258f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.21332310140132904f),
    AI_PACK_INTQ_ZP(-2)))

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
    AI_PACK_INTQ_SCALE(0.02028634585440159f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00583858834579587f),
    AI_PACK_INTQ_ZP(-44)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00583858834579587f),
    AI_PACK_INTQ_ZP(-44)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07975432276725769f),
    AI_PACK_INTQ_ZP(19)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.21831947565078735f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02045798860490322f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007116919383406639f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007116919383406639f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07020029425621033f),
    AI_PACK_INTQ_ZP(1)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014327440410852432f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014327440410852432f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_82_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_83_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06743152439594269f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10337312519550323f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_88_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016014469787478447f),
    AI_PACK_INTQ_ZP(65)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016014469787478447f),
    AI_PACK_INTQ_ZP(65)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_92_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_93_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08096040040254593f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1311040222644806f),
    AI_PACK_INTQ_ZP(11)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_97_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01349751278758049f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.3854832053184509f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_101_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016014469787478447f),
    AI_PACK_INTQ_ZP(65)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014327440410852432f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007116919383406639f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00583858834579587f),
    AI_PACK_INTQ_ZP(-44)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008264691568911076f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009835081174969673f),
    AI_PACK_INTQ_ZP(25)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008787577040493488f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823290441185236f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003379926085472107f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011917712166905403f, 0.008936252444982529f, 0.011784803122282028f, 0.008215852081775665f, 0.007558095268905163f, 0.009978892281651497f, 0.009047390893101692f, 0.009387989528477192f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005894329398870468f, 0.006861890200525522f, 0.0030582519248127937f, 0.003667904296889901f, 0.007081217598170042f, 0.0025945911183953285f, 0.006317698396742344f, 0.005073685199022293f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002314754296094179f, 0.001983923837542534f, 0.00554061820730567f, 0.010271274484694004f, 0.006788216531276703f, 0.017535753548145294f, 0.004829642828553915f, 0.012606368400156498f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004733733367174864f, 0.004445336759090424f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010131553281098604f, 0.0008611192461103201f, 0.0010490642162039876f, 0.001364435418508947f, 0.0011007155990228057f, 0.0005418547661975026f, 0.0008554196683689952f, 0.0008998772245831788f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022176140919327736f, 0.018908094614744186f, 0.021911688148975372f, 0.01572250761091709f, 0.016755621880292892f, 0.029358871281147003f, 0.014769305475056171f, 0.022637255489826202f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007166305556893349f, 0.006419463083148003f, 0.005075371824204922f, 0.007934088818728924f, 0.0037567110266536474f, 0.003630151506513357f, 0.0020443531684577465f, 0.0059934575110673904f, 0.004681032616645098f, 0.0027286114636808634f, 0.003210148075595498f, 0.002726845210418105f, 0.002982266014441848f, 0.004732506815344095f, 0.0041565545834600925f, 0.0033237366005778313f, 0.00499166501685977f, 0.008138466626405716f, 0.003633085172623396f, 0.012256563641130924f, 0.005040761549025774f, 0.005886937025934458f, 0.005073103122413158f, 0.007018595468252897f, 0.005218520760536194f, 0.0030689046252518892f, 0.0047560203820466995f, 0.00524822948500514f, 0.005742479115724564f, 0.004679778125137091f, 0.0026289133820682764f, 0.007163590751588345f, 0.002336900681257248f, 0.0032359203323721886f, 0.003068715101107955f, 0.0062452564015984535f, 0.0020013705361634493f, 0.0034468036610633135f, 0.0029724789783358574f, 0.0048204706981778145f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006153921131044626f, 0.009878377430140972f, 0.018514307215809822f, 0.0030268568079918623f, 0.009597149677574635f, 0.005341737065464258f, 0.006440761499106884f, 0.005724549759179354f, 0.002957073040306568f, 0.00527997175231576f, 0.006755765061825514f, 0.00806448608636856f, 0.0075380997732281685f, 0.004897498991340399f, 0.0049415635876357555f, 0.01815355196595192f, 0.01181632000952959f, 0.0032627414911985397f, 0.005388314835727215f, 0.007725920528173447f, 0.011894123628735542f, 0.005942709743976593f, 0.00744184385985136f, 0.012022404931485653f, 0.014441704377532005f, 0.008072160184383392f, 0.004270386882126331f, 0.004569553304463625f, 0.0074983155354857445f, 0.0045182788744568825f, 0.0076475427486002445f, 0.004736528731882572f, 0.010693294927477837f, 0.00802151020616293f, 0.010163327679038048f, 0.0038100387901067734f, 0.007285411935299635f, 0.004839633591473103f, 0.018326055258512497f, 0.004042834509164095f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003889841493219137f, 0.003432690864428878f, 0.004446555860340595f, 0.004657655488699675f, 0.005274652503430843f, 0.0032433730084449053f, 0.0038452818989753723f, 0.0035691787488758564f, 0.004258166067302227f, 0.0047304024919867516f, 0.0031657209619879723f, 0.0038097144570201635f, 0.0038950168527662754f, 0.002993963425979018f, 0.0036986880004405975f, 0.003565452992916107f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0034913986455649137f, 0.005105964373797178f, 0.0020730237010866404f, 0.0025461805053055286f, 0.0028019589371979237f, 0.007300893310457468f, 0.0034924016799777746f, 0.0032158480025827885f, 0.003105160081759095f, 0.0024438921827822924f, 0.0025309291668236256f, 0.003947858698666096f, 0.0015441523864865303f, 0.003332293126732111f, 0.002119318814948201f, 0.0025528965052217245f, 0.002869431860744953f, 0.003165469504892826f, 0.007139190100133419f, 0.003465749556198716f, 0.0012516103452071548f, 0.0019344917964190245f, 0.0025620018132030964f, 0.003679527435451746f, 0.002272126730531454f, 0.002595980651676655f, 0.0028233693446964025f, 0.007178544998168945f, 0.0018565866630524397f, 0.003972931765019894f, 0.003441621083766222f, 0.006128780543804169f, 0.004051779396831989f, 0.0025076617021113634f, 0.0038233662489801645f, 0.002987284678965807f, 0.003990135621279478f, 0.0025154827162623405f, 0.0019651225302368402f, 0.003102595219388604f, 0.001926980447024107f, 0.00668204203248024f, 0.002126501640304923f, 0.00269418116658926f, 0.0020809718407690525f, 0.0032363831996917725f, 0.0045333607122302055f, 0.003104645758867264f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006516611203551292f, 0.0056828903034329414f, 0.008785122074186802f, 0.011365837417542934f, 0.0038083987310528755f, 0.017711056396365166f, 0.00957409106194973f, 0.021571647375822067f, 0.004091040231287479f, 0.014835850335657597f, 0.005740809254348278f, 0.012349875643849373f, 0.02739325724542141f, 0.004980499390512705f, 0.0054868231527507305f, 0.01022408064454794f, 0.006436652038246393f, 0.013187412172555923f, 0.011753751896321774f, 0.006232949905097485f, 0.02244279906153679f, 0.006320199463516474f, 0.012094518169760704f, 0.014190703630447388f, 0.009534514509141445f, 0.018627561628818512f, 0.02378609962761402f, 0.01125831063836813f, 0.02430777996778488f, 0.011813221499323845f, 0.005558867938816547f, 0.009468017145991325f, 0.005171236116439104f, 0.007723955437541008f, 0.005174799356609583f, 0.013040919788181782f, 0.01890263333916664f, 0.007030724082142115f, 0.02101975493133068f, 0.004239084664732218f, 0.010707158595323563f, 0.01869567483663559f, 0.006936564110219479f, 0.008186335675418377f, 0.011398809030652046f, 0.016616875305771828f, 0.004389092791825533f, 0.02236619032919407f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028706213925033808f, 0.0025878448504954576f, 0.0025385001208633184f, 0.0033071599900722504f, 0.0027753030881285667f, 0.002501801121979952f, 0.0029456804040819407f, 0.0018317013746127486f, 0.0026383877266198397f, 0.003319863695651293f, 0.0022798858117312193f, 0.0022431763354688883f, 0.00303154019638896f, 0.0019341459264978766f, 0.002449669875204563f, 0.0029808625113219023f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030585690401494503f, 0.0007283161976374686f, 0.0024029759224504232f, 0.002136190887540579f, 0.002061062026768923f, 0.0015193746658042073f, 0.002450397936627269f, 0.0029105241410434246f, 0.003457167884334922f, 0.00274017290212214f, 0.002480994677171111f, 0.0015345922438427806f, 0.0023895413614809513f, 0.0026160022243857384f, 0.0016089039854705334f, 0.0022263273131102324f, 0.0019749754574149847f, 0.0030862565618008375f, 0.0018786662258207798f, 0.0018008744809776545f, 0.0018315273337066174f, 0.0012502958998084068f, 0.0016873206477612257f, 0.0014467452419921756f, 0.0017665649065747857f, 0.0021055592224001884f, 0.002100908663123846f, 0.0018483975436538458f, 0.0024907574988901615f, 0.001951924292370677f, 0.002240023808553815f, 0.0033911350183188915f, 0.0022520001512020826f, 0.0016950314166024327f, 0.003037791233509779f, 0.0036260373890399933f, 0.0012632127618417144f, 0.0021326097194105387f, 0.001520270947366953f, 0.002518733497709036f, 0.0027159880846738815f, 0.0028623754624277353f, 0.002870817668735981f, 0.001627994584850967f, 0.002486933022737503f, 0.0028444351628422737f, 0.001848486135713756f, 0.0015339548699557781f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00411997502669692f, 0.013624518178403378f, 0.003615846624597907f, 0.003373741405084729f, 0.004769731778651476f, 0.006637490354478359f, 0.00424426794052124f, 0.003540038364008069f, 0.002055284334346652f, 0.0025725853629410267f, 0.005382009316235781f, 0.002865100745111704f, 0.003619592869654298f, 0.004329804331064224f, 0.005664256401360035f, 0.00214253063313663f, 0.00473387073725462f, 0.001465712208300829f, 0.0052507491782307625f, 0.004677888937294483f, 0.0041389078833162785f, 0.0036489779595285654f, 0.00285194325260818f, 0.0057011558674275875f, 0.0035845674574375153f, 0.0017513033235445619f, 0.004292640369385481f, 0.011032870970666409f, 0.002926826011389494f, 0.007189513184130192f, 0.0032907724380493164f, 0.0018108850345015526f, 0.0042993249371647835f, 0.004900922998785973f, 0.0021251298021525145f, 0.002252032980322838f, 0.003726955968886614f, 0.003958662040531635f, 0.004022256936877966f, 0.003691974561661482f, 0.003322601318359375f, 0.0036940020509064198f, 0.003222391242161393f, 0.003566007362678647f, 0.0031825322657823563f, 0.0030342224054038525f, 0.005071911960840225f, 0.0059038749895989895f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005862520541995764f, 0.004150093533098698f, 0.004234627820551395f, 0.0029502164106816053f, 0.003683809656649828f, 0.004379596561193466f, 0.0024026113096624613f, 0.003267997410148382f, 0.0045837536454200745f, 0.0034331893548369408f, 0.0030125665944069624f, 0.004046387504786253f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005890982574783266f, 0.0008006428251974285f, 0.0007572022150270641f, 0.0006142296479083598f, 0.0005757365142926574f, 0.0006902145687490702f, 0.0008135662646964192f, 0.000904344953596592f, 0.0011716247536242008f, 0.0010413089767098427f, 0.0006702250684611499f, 0.0012277535861358047f, 0.0008016294450499117f, 0.0005811435403302312f, 0.0008763820515014231f, 0.0011124773882329464f, 0.0010404411004856229f, 0.0010600904934108257f, 0.0007780757150612772f, 0.0006610178970731795f, 0.0005867294385097921f, 0.0009189581032842398f, 0.0009893856476992369f, 0.0009387569152750075f, 0.0010225424775853753f, 0.0009601481724530458f, 0.0013775372644886374f, 0.0004722289741039276f, 0.000518471235409379f, 0.0007634689682163298f, 0.0007714903331361711f, 0.0007907483377493918f, 0.0007855076109990478f, 0.0006901478045620024f, 0.0012712895404547453f, 0.0007905168458819389f, 0.0007617708761245012f, 0.0008223010809160769f, 0.0005016772192902863f, 0.0006516635767184198f, 0.0005230560200288892f, 0.000887206057086587f, 0.0006245498079806566f, 0.0005802025552839041f, 0.0005589361535385251f, 0.000643741397652775f, 0.00042708366527222097f, 0.0005641589523293078f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004804253578186035f, 0.0068902624770998955f, 0.008645093999803066f, 0.01096439640969038f, 0.007709069177508354f, 0.00827685184776783f, 0.006352492608129978f, 0.006172118708491325f, 0.008527509868144989f, 0.008533279411494732f, 0.007862594909965992f, 0.007312058936804533f, 0.0073118978179991245f, 0.007265051361173391f, 0.008362442255020142f, 0.00792870856821537f, 0.006727369502186775f, 0.007946609519422054f, 0.00892186164855957f, 0.006163643207401037f, 0.007521120365709066f, 0.008092968724668026f, 0.0070351907052099705f, 0.007566042244434357f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003609234467148781f, 0.002642938168719411f, 0.0024638306349515915f, 0.0031651495955884457f, 0.0017507423181086779f, 0.0018103586044162512f, 0.0016223868587985635f, 0.0014947536401450634f, 0.0021419047843664885f, 0.0015383282443508506f, 0.0014725391520187259f, 0.002127692336216569f, 0.0027360040694475174f, 0.0022003301419317722f, 0.002353054005652666f, 0.001573168090544641f, 0.0022969222627580166f, 0.0017040151869878173f, 0.0035189175978302956f, 0.0024208552204072475f, 0.003150793258100748f, 0.002003749366849661f, 0.0009265401749871671f, 0.002146306913346052f, 0.0028685051947832108f, 0.0025118866469711065f, 0.0029355366714298725f, 0.0010075903264805675f, 0.003436294849961996f, 0.0021993897389620543f, 0.0025227819569408894f, 0.001874409499578178f, 0.0025629333686083555f, 0.0015584949869662523f, 0.001605352503247559f, 0.001108065014705062f, 0.0017803567461669445f, 0.002316862577572465f, 0.0029288954101502895f, 0.0024126546923071146f, 0.001416230807080865f, 0.0014207027852535248f, 0.0008440511301159859f, 0.004059892147779465f, 0.0026851261500269175f, 0.0017828871496021748f, 0.0023302941117435694f, 0.0024171832483261824f, 0.002237939741462469f, 0.0019512948347255588f, 0.002511844504624605f, 0.0018756029894575477f, 0.001734015066176653f, 0.001879276940599084f, 0.0029627650510519743f, 0.0032881603110581636f, 0.002299585146829486f, 0.0021716826595366f, 0.001086425269022584f, 0.0012106321519240737f, 0.0024758982472121716f, 0.002644891384989023f, 0.0026015143375843763f, 0.0034218234941363335f, 0.0020005719270557165f, 0.0015347135486081243f, 0.0012316592037677765f, 0.0013648092281073332f, 0.0015847129980102181f, 0.0017012041062116623f, 0.001478888327255845f, 0.0010846724035218358f, 0.0018144447822123766f, 0.0025844713672995567f, 0.0017106301384046674f, 0.001455193618312478f, 0.00293917628005147f, 0.002330998657271266f, 0.0020220342557877302f, 0.0022422410547733307f, 0.0017541726119816303f, 0.001808373024687171f, 0.0016092263394966722f, 0.0014414772158488631f, 0.002671723486855626f, 0.0017739494796842337f, 0.0013253045035526156f, 0.002028574701398611f, 0.0014182078884914517f, 0.0019821154419332743f, 0.0018257469637319446f, 0.002426097635179758f, 0.002792408922687173f, 0.0017905343556776643f, 0.001671894104219973f, 0.002696349285542965f, 0.0022187449503690004f, 0.002543858950957656f, 0.002078021876513958f, 0.002434385009109974f, 0.0018956721760332584f, 0.002095241565257311f, 0.002809448866173625f, 0.001957056811079383f, 0.0036316965706646442f, 0.0018218002514913678f, 0.0013507765252143145f, 0.00326486025005579f, 0.0012711043236777186f, 0.0012761473190039396f, 0.0020896580535918474f, 0.001328015816397965f, 0.001429891330190003f, 0.001854448695667088f, 0.0014568348415195942f, 0.0016276886453852057f, 0.001993132522329688f, 0.0019537874031811953f, 0.0017066269647330046f, 0.001254894188605249f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00669941445812583f, 0.010001269169151783f, 0.00988305639475584f, 0.01067486684769392f, 0.016477905213832855f, 0.010339737869799137f, 0.01404544711112976f, 0.014345471747219563f, 0.003896438516676426f, 0.010372872464358807f, 0.00922487024217844f, 0.010003278963267803f, 0.0017774277366697788f, 0.00969436950981617f, 0.004730028100311756f, 0.004233242478221655f, 0.007935726083815098f, 0.010212589986622334f, 0.012011689133942127f, 0.0031166281551122665f, 0.00373271806165576f, 0.003990487661212683f, 0.005977338645607233f, 0.004130669869482517f, 0.005557081662118435f, 0.002796234330162406f, 0.0025264155119657516f, 0.004839263390749693f, 0.003056479850783944f, 0.0022292493376880884f, 0.002571334596723318f, 0.004516092129051685f, 0.006269156001508236f, 0.0028227188158780336f, 0.006831432227045298f, 0.00775626115500927f, 0.012148716486990452f, 0.002492469036951661f, 0.015470676124095917f, 0.002556559629738331f, 0.004198755603283644f, 0.007079068571329117f, 0.031873591244220734f, 0.010380802676081657f, 0.007891775108873844f, 0.012300791218876839f, 0.0026899781078100204f, 0.012810682877898216f, 0.00211297906935215f, 0.014483981765806675f, 0.012202818877995014f, 0.005347259342670441f, 0.00469225412234664f, 0.005611827131360769f, 0.0024337435606867075f, 0.003128969809040427f, 0.004469828214496374f, 0.002316652564331889f, 0.014428334310650826f, 0.012464614585042f, 0.003751245094463229f, 0.007441355846822262f, 0.005621061194688082f, 0.0043595400638878345f, 0.005414828658103943f, 0.022547494620084763f, 0.009321114048361778f, 0.001691498444415629f, 0.0036429576575756073f, 0.0030078599229454994f, 0.007637723349034786f, 0.027634093537926674f, 0.006265988573431969f, 0.008157632313668728f, 0.006740942597389221f, 0.009892301633954048f, 0.004569477867335081f, 0.005005533341318369f, 0.016486775130033493f, 0.0018275255570188165f, 0.016866957768797874f, 0.020270338281989098f, 0.011469324119389057f, 0.016008252277970314f, 0.009824421256780624f, 0.006520404946058989f, 0.007783769629895687f, 0.012473017908632755f, 0.005277146119624376f, 0.006351080257445574f, 0.00644600298255682f, 0.009365443140268326f, 0.010373932309448719f, 0.015792280435562134f, 0.014047717675566673f, 0.002596443286165595f, 0.012119727209210396f, 0.0034924340434372425f, 0.005078871268779039f, 0.0030369770247489214f, 0.0029116778168827295f, 0.004110358189791441f, 0.012150748632848263f, 0.012448180466890335f, 0.008712324313819408f, 0.009208816103637218f, 0.007568361237645149f, 0.009162168949842453f, 0.011005801148712635f, 0.008707892149686813f, 0.006084775552153587f, 0.012729459442198277f, 0.002278160071000457f, 0.0037846427876502275f, 0.012177188880741596f, 0.019381610676646233f, 0.004464849829673767f, 0.004021492786705494f, 0.007508978247642517f, 0.003881419776007533f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003958171233534813f, 0.003303518984466791f, 0.0017516633961349726f, 0.005797870457172394f, 0.0018664691597223282f, 0.00507312873378396f, 0.003906261641532183f, 0.0031443540938198566f, 0.004117574542760849f, 0.006212448235601187f, 0.005404976662248373f, 0.003526037558913231f, 0.0041620261035859585f, 0.004490816965699196f, 0.003437461331486702f, 0.002137475647032261f, 0.005983344744890928f, 0.004479294177144766f, 0.0021961007732897997f, 0.0036955808755010366f, 0.004278984386473894f, 0.004180172458291054f, 0.00371198495849967f, 0.00632636109367013f, 0.004494388587772846f, 0.0019736033864319324f, 0.004560735076665878f, 0.003402008907869458f, 0.002044301712885499f, 0.004095471929758787f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010135796619579196f, 0.0006832793005742133f, 0.0006949095986783504f, 0.0005984732997603714f, 0.0008825104450806975f, 0.000598092854488641f, 0.00049061537720263f, 0.0005628627841360867f, 0.0006245597032830119f, 0.0008656831341795623f, 0.0010173609480261803f, 0.0006083920015953481f, 0.00044009677367284894f, 0.0007377995643764734f, 0.0007454209844581783f, 0.0007175634382292628f, 0.0007633327040821314f, 0.000615374359767884f, 0.000874784542247653f, 0.0007764807087369263f, 0.0005938945105299354f, 0.00091914227232337f, 0.0006465609767474234f, 0.0008036320214159787f, 0.0007774268742650747f, 0.000928180874325335f, 0.0007834128919057548f, 0.0004767389327753335f, 0.0006186445243656635f, 0.0006856502150185406f, 0.0005551133654080331f, 0.0008791282889433205f, 0.0006826090393587947f, 0.0007577399373985827f, 0.0007762707537040114f, 0.0008485174621455371f, 0.0006009431090205908f, 0.0007263575098477304f, 0.0005761051434092224f, 0.0005744917434640229f, 0.0006918327999301255f, 0.000744794262573123f, 0.0008712781127542257f, 0.0007154965423978865f, 0.0006759184179827571f, 0.0006037797429598868f, 0.0007642288110218942f, 0.0008146538748405874f, 0.0006406394531950355f, 0.0005204980261623859f, 0.0012176427990198135f, 0.0009407555917277932f, 0.0006107435328885913f, 0.0007078133639879525f, 0.0005251458496786654f, 0.0007456749444827437f, 0.0006724015693180263f, 0.0006236341432668269f, 0.0006359108374454081f, 0.0008884084527380764f, 0.0009636007016524673f, 0.0004436324234120548f, 0.0005220256862230599f, 0.0005767586990259588f, 0.0005668749217875302f, 0.0007086251862347126f, 0.0007537879864685237f, 0.0006471658707596362f, 0.0005266806692816317f, 0.000715562840923667f, 0.000808670767582953f, 0.0004985852865502238f, 0.0008198198047466576f, 0.000623472617007792f, 0.0006807154859416187f, 0.0006009264034219086f, 0.0006174582522362471f, 0.0006729750894010067f, 0.0007980344817042351f, 0.0005983719020150602f, 0.0006439702701754868f, 0.0008937527891248465f, 0.0007218130631372333f, 0.0005441386019811034f, 0.00045325132668949664f, 0.0008134290110319853f, 0.0006143103237263858f, 0.0009639968629926443f, 0.0008792498847469687f, 0.000547512318007648f, 0.00048371130833402276f, 0.0007256689132191241f, 0.0007178048836067319f, 0.0006916690617799759f, 0.0010020352201536298f, 0.000718116236384958f, 0.0007682187715545297f, 0.0008568655466660857f, 0.0006620913627557456f, 0.000655752548482269f, 0.000604770437348634f, 0.0004029744886793196f, 0.0007203785353340209f, 0.0007234194781631231f, 0.0006221784860827029f, 0.0005530769703909755f, 0.0006130084511823952f, 0.0005757142207585275f, 0.0008737455355003476f, 0.000912090006750077f, 0.0006443471065722406f, 0.0007177981897257268f, 0.0010401317849755287f, 0.0005744571099057794f, 0.0004031857242807746f, 0.0006845336174592376f, 0.0010341476881876588f, 0.0006861994042992592f, 0.00045078678522258997f, 0.0008989547495730221f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0038098047953099012f, 0.002872234443202615f, 0.004781913943588734f, 0.0030117928981781006f, 0.0040491679683327675f, 0.003042470198124647f, 0.002578042447566986f, 0.0030100946314632893f, 0.0033207417000085115f, 0.004676710348576307f, 0.0024987775832414627f, 0.004056091420352459f, 0.0028968402184545994f, 0.004810342099517584f, 0.003451673313975334f, 0.003128905314952135f, 0.004242403898388147f, 0.0032812373246997595f, 0.003701879410073161f, 0.0029535219073295593f, 0.004258421715348959f, 0.0031632836908102036f, 0.0035811015404760838f, 0.005093746818602085f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0026585583109408617f, 0.002440786687657237f, 0.0017270712414756417f, 0.002057869452983141f, 0.0013885680818930268f, 0.002015099162235856f, 0.0014931861078366637f, 0.001585047459229827f, 0.0018303460674360394f, 0.002582777990028262f, 0.00131096167024225f, 0.0013536873739212751f, 0.001569849904626608f, 0.001387401600368321f, 0.001589451334439218f, 0.0017894069897010922f, 0.0014984169974923134f, 0.002013259567320347f, 0.001680877641774714f, 0.0012094053672626615f, 0.0016620045062154531f, 0.001960806315764785f, 0.00204394175671041f, 0.0008200902957469225f, 0.00150729576125741f, 0.0011041329707950354f, 0.0007326581398956478f, 0.0015356451040133834f, 0.0017339857295155525f, 0.0012403763830661774f, 0.0024482673034071922f, 0.0014701648615300655f, 0.0015662491787225008f, 0.001295089372433722f, 0.0020681831520050764f, 0.0010085495887324214f, 0.0016497957985848188f, 0.0014241470489650965f, 0.001393553102388978f, 0.0009728281875140965f, 0.0022839040029793978f, 0.001986686373129487f, 0.0019764176104217768f, 0.0016351909143850207f, 0.00211328431032598f, 0.0010477303294464946f, 0.0021966579370200634f, 0.0015532656107097864f, 0.0013354371767491102f, 0.0007368646911345422f, 0.002073172712698579f, 0.0015675348695367575f, 0.0015543673653155565f, 0.0012281802482903004f, 0.0012694090837612748f, 0.002014679368585348f, 0.002878983737900853f, 0.0013981246156618f, 0.0011697604786604643f, 0.001740634674206376f, 0.0016898990143090487f, 0.0013256584061309695f, 0.0013355963164940476f, 0.0013778313295915723f, 0.0015956086572259665f, 0.0015591636765748262f, 0.00146671780385077f, 0.0008895560167729855f, 0.00100492883939296f, 0.0010344809852540493f, 0.001499276258982718f, 0.001240150653757155f, 0.0015040632570162416f, 0.0016830605454742908f, 0.001625867560505867f, 0.0015673221787437797f, 0.0010661118431016803f, 0.0016793746035546064f, 0.0008006239077076316f, 0.001209630398079753f, 0.0017298824386671185f, 0.002004106529057026f, 0.001438491279259324f, 0.0011126463068649173f, 0.0023056964855641127f, 0.001649758662097156f, 0.0022337213158607483f, 0.0015575995203107595f, 0.001147121423855424f, 0.0016338278073817492f, 0.0010844622738659382f, 0.0010971665615215898f, 0.0013597450451925397f, 0.001273100497201085f, 0.002059520687907934f, 0.0017142395954579115f, 0.001965726027265191f, 0.0016455648001283407f, 0.0013710202183574438f, 0.0012125406647101045f, 0.0015362013364210725f, 0.0021441809367388487f, 0.00102093571331352f, 0.0017152229556813836f, 0.0013092565350234509f, 0.0009307757136411965f, 0.0011016869684681296f, 0.0013395579298958182f, 0.0009307157597504556f, 0.0010997942881658673f, 0.001372087630443275f, 0.0012060508597642183f, 0.0014324636431410909f, 0.0017143571749329567f, 0.0011982086580246687f, 0.0009631894063204527f, 0.0013887766981497407f, 0.0025675916112959385f, 0.0015053375391289592f, 0.001402964349836111f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032361827325075865f, 0.003425119211897254f, 0.010034551844000816f, 0.002510257065296173f, 0.004767602309584618f, 0.010107945650815964f, 0.01669231615960598f, 0.00588981481269002f, 0.002373866504058242f, 0.013123833574354649f, 0.00544882332906127f, 0.006748615764081478f, 0.0033472811337560415f, 0.003188367700204253f, 0.004360273014754057f, 0.0031024122145026922f, 0.002276106970384717f, 0.005492702592164278f, 0.0019042365020141006f, 0.0030752234160900116f, 0.006130419205874205f, 0.0029363997746258974f, 0.003737726015970111f, 0.006291968747973442f, 0.0032232843805104494f, 0.007767297327518463f, 0.0042728944681584835f, 0.0038588005118072033f, 0.0037262127734720707f, 0.009689868427813053f, 0.0029861486982554197f, 0.010968039743602276f, 0.006450309418141842f, 0.004246579948812723f, 0.003391355974599719f, 0.01637110486626625f, 0.004279814660549164f, 0.00803906936198473f, 0.0053437240421772f, 0.003921448718756437f, 0.0017846602713689208f, 0.004353754688054323f, 0.0026582982391119003f, 0.002830870682373643f, 0.014675718732178211f, 0.005577059928327799f, 0.006988417357206345f, 0.005394229665398598f, 0.0041952296160161495f, 0.009759263135492802f, 0.005443864036351442f, 0.00489378534257412f, 0.005447292234748602f, 0.0050364527851343155f, 0.0044359262101352215f, 0.002435783389955759f, 0.005872846581041813f, 0.006503521930426359f, 0.004743355792015791f, 0.003611413761973381f, 0.003099659224972129f, 0.010687083937227726f, 0.004909107927232981f, 0.0034993523731827736f, 0.0040274858474731445f, 0.0034922834020107985f, 0.0027641025371849537f, 0.024458209052681923f, 0.0033447255846112967f, 0.028451692312955856f, 0.006791696883738041f, 0.004416666924953461f, 0.008517442271113396f, 0.015841539949178696f, 0.00254893209785223f, 0.006501327734440565f, 0.011363732628524303f, 0.0062294392846524715f, 0.018226943910121918f, 0.012027914635837078f, 0.0030745428521186113f, 0.004802748095244169f, 0.0025282821152359247f, 0.0063096615485847f, 0.00396706024184823f, 0.009378189221024513f, 0.001930933096446097f, 0.00432223454117775f, 0.0024596506264060736f, 0.0015811505727469921f, 0.011169989593327045f, 0.003095590975135565f, 0.00494745746254921f, 0.003719993168488145f, 0.005976947024464607f, 0.005119751673191786f, 0.008907817304134369f, 0.002241601701825857f, 0.003805759595707059f, 0.002238005166873336f, 0.009431271813809872f, 0.010551766492426395f, 0.010976489633321762f, 0.009329683147370815f, 0.00902542844414711f, 0.013515385799109936f, 0.003021643729880452f, 0.002129690023139119f, 0.005777892656624317f, 0.00307788560166955f, 0.004282940179109573f, 0.007756118196994066f, 0.01102400105446577f, 0.004078253637999296f, 0.00418986426666379f, 0.006966877728700638f, 0.003070057602599263f, 0.011108466424047947f, 0.0020902096293866634f, 0.01071231160312891f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032235197722911835f, 0.002234980696812272f, 0.0043642339296638966f, 0.0031388779170811176f, 0.005026037339121103f, 0.003824458224698901f, 0.001823959406465292f, 0.0035984746646136045f, 0.004819664638489485f, 0.006896617356687784f, 0.002200192306190729f, 0.002021149266511202f, 0.003608604660257697f, 0.0018741777166724205f, 0.002020656131207943f, 0.0019880805630236864f, 0.004320173058658838f, 0.005753010977059603f, 0.0017186234472319484f, 0.005192848853766918f, 0.0020281777251511812f, 0.0019578884821385145f, 0.003754229284822941f, 0.0017133483197540045f, 0.0018822704441845417f, 0.0034910240210592747f, 0.00449427030980587f, 0.005001012701541185f, 0.0022142042871564627f, 0.0027285453397780657f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010982389794662595f, 0.0005791067378595471f, 0.0013027290115132928f, 0.0010160427773371339f, 0.0007668021135032177f, 0.0007413933053612709f, 0.0004190566251054406f, 0.0007575539639219642f, 0.0004363924963399768f, 0.0009932052344083786f, 0.000529028766322881f, 0.0006540557951666415f, 0.0010304367169737816f, 0.0008611601078882813f, 0.0007218355895020068f, 0.0008268498932011425f, 0.0007634277571924031f, 0.000700637639965862f, 0.0007395761786028743f, 0.00043811392970383167f, 0.0005188554641790688f, 0.0007127628196030855f, 0.0005451869801618159f, 0.0007005049264989793f, 0.000706430641002953f, 0.0005683850031346083f, 0.0008587449556216598f, 0.0009767778683453798f, 0.0009858085541054606f, 0.0005948895122855902f, 0.0006695576594211161f, 0.0006624847883358598f, 0.0007455071900039911f, 0.0005127264303155243f, 0.001144646666944027f, 0.00039992635720409453f, 0.00046034553088247776f, 0.0010134045733138919f, 0.0005416979547590017f, 0.0007552659953944385f, 0.00041239263373427093f, 0.001050067599862814f, 0.0011324890656396747f, 0.0006405661697499454f, 0.0006359899416565895f, 0.00064280373044312f, 0.000701793993357569f, 0.0006089105154387653f, 0.0007204029243439436f, 0.0005716725718230009f, 0.000526971067301929f, 0.001125982846133411f, 0.0008659937302581966f, 0.0007227830355986953f, 0.0006506015197373927f, 0.0008826093398965895f, 0.000671194342430681f, 0.0006796388770453632f, 0.0005662682233378291f, 0.0010371088283136487f, 0.00038215983659029007f, 0.0008308826363645494f, 0.0006407215259969234f, 0.0009286168497055769f, 0.00101022282615304f, 0.0005957462708465755f, 0.0006852761725895107f, 0.0007023690268397331f, 0.0008602916495874524f, 0.0005718239117413759f, 0.0007495094323530793f, 0.0005135111859999597f, 0.0006544868228957057f, 0.0010402658954262733f, 0.0008172910311259329f, 0.0005943087744526565f, 0.0007007281528785825f, 0.0012122298358008265f, 0.0006402484723366797f, 0.0008259815513156354f, 0.00042825363925658166f, 0.0008413581526838243f, 0.0008710483089089394f, 0.00033118532155640423f, 0.0009959266753867269f, 0.0006493199616670609f, 0.0004969646688550711f, 0.0007259948761202395f, 0.000933474104385823f, 0.0007187132141552866f, 0.0007140516536310315f, 0.00045645033242180943f, 0.0006392151699401438f, 0.00045651281834580004f, 0.0006929779192432761f, 0.000501624948810786f, 0.00045934529043734074f, 0.0008690519607625902f, 0.00041246283217333257f, 0.00042370843584649265f, 0.0009822658030316234f, 0.0007705427124164999f, 0.0006945024360902607f, 0.0008595823310315609f, 0.00042971325456164777f, 0.0008329087286256254f, 0.0005336472531780601f, 0.0003477836144156754f, 0.0004976309719495475f, 0.0010258457623422146f, 0.0007676156237721443f, 0.0005344864330254495f, 0.0006498697330243886f, 0.0005303799407556653f, 0.0010765244951471686f, 0.0007896464085206389f, 0.0005551685462705791f, 0.0007804842898622155f, 0.000814498052932322f, 0.0008025356801226735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006691111251711845f, 0.003746339585632086f, 0.0035885311663150787f, 0.004161530639976263f, 0.004990472458302975f, 0.005585803650319576f, 0.004352927673608065f, 0.0033925927709788084f, 0.0038689677603542805f, 0.005544992163777351f, 0.00403983611613512f, 0.0037310831248760223f, 0.004557005129754543f, 0.005601762793958187f, 0.004354133736342192f, 0.0031421177554875612f, 0.004737070761620998f, 0.003156893188133836f, 0.004125548526644707f, 0.0029966342262923717f, 0.004267798736691475f, 0.0036971212830394506f, 0.0034138283226639032f, 0.004015494138002396f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018817224772647023f, 0.0008368405979126692f, 0.00211012689396739f, 0.0006387014873325825f, 0.0009025458130054176f, 0.0007380021270364523f, 0.0017034810734912753f, 0.0010059620253741741f, 0.0011434557382017374f, 0.0019498359179124236f, 0.0009387541213072836f, 0.0015441395808011293f, 0.0005892508197575808f, 0.001824963022954762f, 0.0015342655824497342f, 0.001354528241790831f, 0.0019742166623473167f, 0.0018906854093074799f, 0.0011886790161952376f, 0.001968438969925046f, 0.0012976322323083878f, 0.001715878606773913f, 0.0008938111714087427f, 0.001963892253115773f, 0.0012018571142107248f, 0.0012058318825438619f, 0.0018809520406648517f, 0.001336598303169012f, 0.001377335749566555f, 0.0017443049000576138f, 0.001108640106394887f, 0.001308351056650281f, 0.002133134054020047f, 0.0007759103900752962f, 0.0011524577857926488f, 0.0019182817777618766f, 0.0010280952556058764f, 0.0017753406427800655f, 0.0009035023977048695f, 0.0010356566635891795f, 0.0010034568840637803f, 0.0012172244023531675f, 0.0017337767640128732f, 0.0009082717006094754f, 0.001579224830493331f, 0.001102513400837779f, 0.0017299647442996502f, 0.0020398935303092003f, 0.0016313500236719847f, 0.0023566868621855974f, 0.0009260644437745214f, 0.0016332580707967281f, 0.0016710218042135239f, 0.0014070906909182668f, 0.000971056055277586f, 0.0014741166960448027f, 0.0010787132196128368f, 0.001279684016481042f, 0.0018876242684200406f, 0.001304351957514882f, 0.0012261060765013099f, 0.0015413302462548018f, 0.0007513879681937397f, 0.001888594008050859f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003651532344520092f, 0.0061167143285274506f, 0.004064398352056742f, 0.015051595866680145f, 0.006745196413248777f, 0.005173829849809408f, 0.005745459347963333f, 0.0032488484866917133f, 0.006631795316934586f, 0.0037811046931892633f, 0.006725738290697336f, 0.005217716097831726f, 0.007155939005315304f, 0.011779531836509705f, 0.004903791937977076f, 0.0035613502841442823f, 0.002226036973297596f, 0.0019304922316223383f, 0.010997449979186058f, 0.008879455737769604f, 0.002684021834284067f, 0.008796493522822857f, 0.00621216744184494f, 0.003680875524878502f, 0.008399397134780884f, 0.0025215500500053167f, 0.0037103944923728704f, 0.006548114120960236f, 0.009439628571271896f, 0.003136114915832877f, 0.008570530451834202f, 0.009508799761533737f, 0.013896165415644646f, 0.00595555454492569f, 0.006216974463313818f, 0.002370453905314207f, 0.004000580403953791f, 0.003682647133246064f, 0.005627719219774008f, 0.0031913353595882654f, 0.004121210426092148f, 0.0038391894195228815f, 0.006248334888368845f, 0.007697738707065582f, 0.006826695520430803f, 0.0026502886321395636f, 0.0031260850373655558f, 0.007481168955564499f, 0.0043629868887364864f, 0.012927619740366936f, 0.00581175833940506f, 0.0021496822591871023f, 0.002633081516250968f, 0.0028183050453662872f, 0.0032812091521918774f, 0.002255401574075222f, 0.012730324640870094f, 0.0055016339756548405f, 0.004217418376356363f, 0.005272711161524057f, 0.007524208631366491f, 0.0030286156106740236f, 0.012439670041203499f, 0.00248419470153749f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0058850133791565895f, 0.005376148968935013f, 0.0032051471062004566f, 0.005682541523128748f, 0.00513334758579731f, 0.004567996598780155f, 0.004425322636961937f, 0.004673203453421593f, 0.004810405895113945f, 0.002457215916365385f, 0.0038247762713581324f, 0.003635554341599345f, 0.004398022778332233f, 0.0036487113684415817f, 0.004377194680273533f, 0.004615995101630688f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009924195474013686f, 0.000627668749075383f, 0.0009514060220681131f, 0.0005569438799284399f, 0.0005707492819055915f, 0.0009370134794153273f, 0.0008311924175359309f, 0.0008378559141419828f, 0.0012149035464972258f, 0.000795010186266154f, 0.0006627827533520758f, 0.00037964462535455823f, 0.0008095150697045028f, 0.0012310666497796774f, 0.000619494472630322f, 0.0005829805741086602f, 0.0006651668809354305f, 0.0006105827633291483f, 0.0007780411979183555f, 0.001029300270602107f, 0.0007462681387551129f, 0.0006926964269950986f, 0.0005973645602352917f, 0.0005894993082620203f, 0.0003907516074832529f, 0.0005512232310138643f, 0.001032834523357451f, 0.0007506630499847233f, 0.000970909430179745f, 0.0007560093654319644f, 0.0009622612851671875f, 0.0007982230745255947f, 0.0009070765809156001f, 0.0008951927302405238f, 0.0006069245864637196f, 0.00043141082278452814f, 0.0006193575100041926f, 0.0008137627737596631f, 0.000584909925237298f, 0.0005993159138597548f, 0.0008518684771843255f, 0.000923921586945653f, 0.0005640367162413895f, 0.0006224546232260764f, 0.0006388025940395892f, 0.0012102213222533464f, 0.0006663596723228693f, 0.0007049766718409956f, 0.001095857354812324f, 0.0007177969673648477f, 0.0006080670282244682f, 0.0008275926811620593f, 0.0013268396724015474f, 0.0008713593706488609f, 0.0005281816702336073f, 0.0007488086703233421f, 0.0008133355295285583f, 0.0009309324086643755f, 0.0006045053014531732f, 0.0006541456677950919f, 0.001124091329984367f, 0.0006821051356382668f, 0.0007773792021907866f, 0.0006139939068816602f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007787361741065979f, 0.004234512336552143f, 0.004714390262961388f, 0.004556550644338131f, 0.0044394866563379765f, 0.003956941422075033f, 0.004005763214081526f, 0.002913250820711255f, 0.004233457613736391f, 0.006060312036424875f, 0.005994212348014116f, 0.003440889762714505f, 0.005528546869754791f, 0.004270014353096485f, 0.004161523189395666f, 0.0036176410503685474f, 0.006600584369152784f, 0.00557743338868022f, 0.005782213993370533f, 0.003908991347998381f, 0.00832871813327074f, 0.003701354842633009f, 0.0047305794432759285f, 0.003858745563775301f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008431817404925823f, 0.0008106305031105876f, 0.0017032948089763522f, 0.0010122614912688732f, 0.00060516461962834f, 0.0005197929567657411f, 0.0013084681704640388f, 0.0008093290380202234f, 0.0016367181669920683f, 0.001354455715045333f, 0.0014782745856791735f, 0.0015532862162217498f, 0.0006307873409241438f, 0.0017891869647428393f, 0.0009417523397132754f, 0.0007302845478989184f, 0.0007756344275549054f, 0.0013005028013139963f, 0.001201559673063457f, 0.0014109559124335647f, 0.001245383988134563f, 0.001264795195311308f, 0.001187619986012578f, 0.0010378602892160416f, 0.0013344553299248219f, 0.0011071448680013418f, 0.0013164858100935817f, 0.0015188927063718438f, 0.001491953618824482f, 0.0016304590972140431f, 0.0013535451143980026f, 0.0006571674603037536f, 0.0012501778546720743f, 0.0008238083100877702f, 0.0009493515826761723f, 0.0008284963550977409f, 0.0010163313709199429f, 0.00048134473036043346f, 0.000868482340592891f, 0.0015618589241057634f, 0.001289617270231247f, 0.0014442652463912964f, 0.0007078403141349554f, 0.0013447096571326256f, 0.0009759014355950058f, 0.0010727635817602277f, 0.0010168984299525619f, 0.0010522158117964864f, 0.0008144164457917213f, 0.0013776810374110937f, 0.0016318353591486812f, 0.0010163210099563003f, 0.0009935848647728562f, 0.000610619317740202f, 0.0010202752891927958f, 0.0015464047901332378f, 0.000620291568338871f, 0.0004042355576530099f, 0.0007885656086727977f, 0.0010677239624783397f, 0.0012396969832479954f, 0.0012974226847290993f, 0.0009872500086203218f, 0.001436613267287612f, 0.0010773548856377602f, 0.001299346680752933f, 0.0010168867884203792f, 0.0009195170132443309f, 0.0006704446277581155f, 0.0011367155238986015f, 0.001148587791249156f, 0.0013148358557373285f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.013598909601569176f, 0.0032058455981314182f, 0.0033868527971208096f, 0.003839797107502818f, 0.011427127756178379f, 0.01335944514721632f, 0.009586438536643982f, 0.0056068492121994495f, 0.0016557818744331598f, 0.010224835015833378f, 0.002848607487976551f, 0.008305964060127735f, 0.005088115576654673f, 0.0021252178121358156f, 0.004304413218051195f, 0.004652743227779865f, 0.004406132269650698f, 0.009488651528954506f, 0.00388865708373487f, 0.0065002734772861f, 0.003085807664319873f, 0.0034210847225040197f, 0.0068188863806426525f, 0.004952938295900822f, 0.002479229122400284f, 0.005539971403777599f, 0.002221479080617428f, 0.0032210287172347307f, 0.002124627586454153f, 0.0033226388040930033f, 0.0024409876205027103f, 0.002678826916962862f, 0.0021354604978114367f, 0.004130243323743343f, 0.010138570331037045f, 0.009283783845603466f, 0.00490720896050334f, 0.014494415372610092f, 0.006292620208114386f, 0.0018480115104466677f, 0.0035972234327346087f, 0.0033883426804095507f, 0.013260201551020145f, 0.0037780236452817917f, 0.008293868973851204f, 0.0030689642298966646f, 0.008837255649268627f, 0.003646597731858492f, 0.006660233251750469f, 0.002981369849294424f, 0.006215237081050873f, 0.010590613819658756f, 0.0033849391620606184f, 0.019882550463080406f, 0.0032557263039052486f, 0.0030225422233343124f, 0.0203502606600523f, 0.02217007987201214f, 0.0066022430546581745f, 0.0030695453751832247f, 0.0025288760662078857f, 0.006426352541893721f, 0.009751739911735058f, 0.0031620326917618513f, 0.002405247651040554f, 0.006598860956728458f, 0.0038406725507229567f, 0.011296400800347328f, 0.00900321640074253f, 0.004544381517916918f, 0.0025249405298382044f, 0.0021495413966476917f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002404399449005723f, 0.0048362077213823795f, 0.004621786996722221f, 0.0037863459438085556f, 0.003933686763048172f, 0.004242659080773592f, 0.004470528103411198f, 0.005474334582686424f, 0.004935109987854958f, 0.002487344667315483f, 0.006068567279726267f, 0.00750803854316473f, 0.00432888837531209f, 0.004267826210707426f, 0.002262531081214547f, 0.00369580602273345f, 0.004821561276912689f, 0.004906135145574808f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000850084878038615f, 0.0007623067940585315f, 0.0010376896243542433f, 0.0007798008737154305f, 0.0006218354101292789f, 0.0006839850684627891f, 0.0012048452626913786f, 0.0004974497715011239f, 0.001165808760561049f, 0.0009214088786393404f, 0.0007506153197027743f, 0.0005583325400948524f, 0.0008692298433743417f, 0.0005321762291714549f, 0.0007807037909515202f, 0.0009062544559128582f, 0.0006087986985221505f, 0.0008172522648237646f, 0.0007105764816515148f, 0.0007970023434609175f, 0.0010070569114759564f, 0.0009006891632452607f, 0.0005911118350923061f, 0.0006648669950664043f, 0.0007645901059731841f, 0.0005686267395503819f, 0.0007002600468695164f, 0.0007029801490716636f, 0.0008039546082727611f, 0.0006834600353613496f, 0.0005784152890555561f, 0.0007184817804954946f, 0.0011156979016959667f, 0.0004565947747323662f, 0.0008394397445954382f, 0.0009230414871126413f, 0.0006476035341620445f, 0.0006075408891774714f, 0.0006545732612721622f, 0.0008159013814292848f, 0.0007702810689806938f, 0.0005841415259055793f, 0.0005690566613338888f, 0.0007940197829157114f, 0.0010190601460635662f, 0.000653710390906781f, 0.0008818653877824545f, 0.00044158496893942356f, 0.00058890285436064f, 0.0007302782614715397f, 0.0008259398164227605f, 0.0006488349754363298f, 0.0006346904556266963f, 0.0007103849202394485f, 0.0009010826470330358f, 0.0013212499907240272f, 0.0006307238363660872f, 0.00133707863278687f, 0.000592328782659024f, 0.0006868025520816445f, 0.000869547133333981f, 0.0007396886358037591f, 0.0008557835826650262f, 0.0007796945865266025f, 0.0005194077966734767f, 0.0009113202686421573f, 0.0006936761783435941f, 0.0007607487495988607f, 0.0006800951668992639f, 0.0007390548125840724f, 0.0008525282028131187f, 0.0005195452249608934f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005808279383927584f, 0.0037049257662147284f, 0.004468424711376429f, 0.004909859038889408f, 0.004603901877999306f, 0.0032131297048181295f, 0.00625090766698122f, 0.0040826862677931786f, 0.004046658519655466f, 0.0050049214623868465f, 0.005882800556719303f, 0.004691385198384523f, 0.004598569590598345f, 0.006250134203583002f, 0.00533489091321826f, 0.004751851316541433f, 0.004539099056273699f, 0.005425974261015654f, 0.004171302542090416f, 0.003267283085733652f, 0.0059869117103517056f, 0.0058417972177267075f, 0.004341857507824898f, 0.005230228882282972f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009861541911959648f, 0.0009439121349714696f, 0.0011099242838099599f, 0.0008395767072215676f, 0.0007115047774277627f, 0.0008900385582819581f, 0.0007776027196086943f, 0.0012280290247872472f, 0.0008624573820270598f, 0.0011160740396007895f, 0.0009381393902003765f, 0.000713996181730181f, 0.0010638588573783636f, 0.0009996829321607947f, 0.0009936854476109147f, 0.0009622792131267488f, 0.0017933134222403169f, 0.0005747959366999567f, 0.000958266609814018f, 0.0008249509846791625f, 0.0009494351106695831f, 0.0008221292519010603f, 0.000732885324396193f, 0.0014309706166386604f, 0.0005886965082027018f, 0.0007669838378205895f, 0.0013166801072657108f, 0.0016443382482975721f, 0.0011045634746551514f, 0.0010010028490796685f, 0.001105785951949656f, 0.001270122709684074f, 0.0005856040515936911f, 0.0009131026454269886f, 0.0007852105773054063f, 0.0014123576693236828f, 0.0016276028472930193f, 0.001518175471574068f, 0.0009274811018258333f, 0.0009009661735035479f, 0.00140567182097584f, 0.000817976426333189f, 0.0008553256629966199f, 0.0019316613906994462f, 0.001315532485023141f, 0.0006966844666749239f, 0.0009897889103740454f, 0.0008534524240531027f, 0.0016855372814461589f, 0.0009337136871181428f, 0.0014621081063523889f, 0.0013904116349294782f, 0.0007793718832544982f, 0.0014820691430941224f, 0.0010024283546954393f, 0.0020383938681334257f, 0.0013729567872360349f, 0.000766045122873038f, 0.001226779306307435f, 0.001037245849147439f, 0.0009562149061821401f, 0.000814085069578141f, 0.0008031714241951704f, 0.0004940182552672923f, 0.0006431597867049277f, 0.0013542597880586982f, 0.0006012354861013591f, 0.0009230092982761562f, 0.0010286630131304264f, 0.0007216199301183224f, 0.0014277106383815408f, 0.0012813500361517072f, 0.00114443339407444f, 0.0011377143673598766f, 0.0018159139435738325f, 0.0010530354920774698f, 0.0009897149866446853f, 0.0009758954984135926f, 0.0012251457665115595f, 0.0010285094613209367f, 0.0011810102732852101f, 0.0005863973638042808f, 0.0006270802114158869f, 0.0006591683486476541f, 0.0008223869954235852f, 0.0006790149491280317f, 0.0008154731476679444f, 0.0018077754648402333f, 0.000729828083422035f, 0.0007876924937590957f, 0.0010498700430616736f, 0.0011083950521424413f, 0.0009754382772371173f, 0.0007700459100306034f, 0.0015906546032056212f, 0.0006912825629115105f, 0.0012440149439498782f, 0.0009577573509886861f, 0.0013688033213838935f, 0.0013114731991663575f, 0.0013443686766549945f, 0.001017915434204042f, 0.0012211828725412488f, 0.0009946563513949513f, 0.0008827270357869565f, 0.001153036137111485f, 0.0016718244878575206f, 0.0005262601771391928f, 0.0009255263139493763f, 0.0007670412305742502f, 0.0008517792448401451f, 0.0012725272681564093f, 0.0009829237824305892f, 0.000988910673186183f, 0.0010894564911723137f, 0.0009410979109816253f, 0.0013701110146939754f, 0.0018624408403411508f, 0.0008499963441863656f, 0.0013535916805267334f, 0.0008827023557387292f, 0.0009497532737441361f, 0.0015781082911416888f, 0.0006467051571235061f, 0.0008008723962120712f, 0.0014679288724437356f, 0.0008003517868928611f, 0.0010746869957074523f, 0.000490895879920572f, 0.0011231504613533616f, 0.0012316228821873665f, 0.0008178814896382391f, 0.0008056956576183438f, 0.0007847817032597959f, 0.0015890958020463586f, 0.001862051896750927f, 0.0016568158753216267f, 0.0007290472858585417f, 0.0008879815577529371f, 0.0011259197490289807f, 0.0008076639496721327f, 0.0012878540437668562f, 0.0013886963715776801f, 0.0013389034429565072f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003413295838981867f, 0.003685101168230176f, 0.002287094946950674f, 0.0038797406014055014f, 0.005428384989500046f, 0.00849700067192316f, 0.008206713013350964f, 0.0018898788839578629f, 0.003578493371605873f, 0.0031364161986857653f, 0.004323277622461319f, 0.0035325391218066216f, 0.005773674231022596f, 0.003843674436211586f, 0.003528705332428217f, 0.0030345567502081394f, 0.0030707463156431913f, 0.004615205805748701f, 0.0035968669690191746f, 0.0041555375792086124f, 0.007527593523263931f, 0.00397765776142478f, 0.004875853192061186f, 0.0016793906688690186f, 0.008509444072842598f, 0.005007131025195122f, 0.0020507818553596735f, 0.0032345897052437067f, 0.0026056088972836733f, 0.0025793537497520447f, 0.002796503249555826f, 0.0035353675484657288f, 0.005511315073817968f, 0.004961905535310507f, 0.0029302698094397783f, 0.003406480886042118f, 0.0022872318513691425f, 0.0019325914327055216f, 0.005448279436677694f, 0.0027747461572289467f, 0.0012859489070251584f, 0.004874741192907095f, 0.0047941734082996845f, 0.003655343549326062f, 0.0018915021792054176f, 0.006795395631343126f, 0.003524382831528783f, 0.002516229171305895f, 0.004413364455103874f, 0.0022749416530132294f, 0.002554267179220915f, 0.0019531655125319958f, 0.00429518474265933f, 0.003448035567998886f, 0.002241911832243204f, 0.0016063328366726637f, 0.002262147143483162f, 0.0035180621780455112f, 0.002846088260412216f, 0.003017093986272812f, 0.002657504752278328f, 0.0038688327185809612f, 0.003919757436960936f, 0.006917229387909174f, 0.004686138592660427f, 0.0016467251116409898f, 0.012035168707370758f, 0.0023774688597768545f, 0.0035149063915014267f, 0.005806514527648687f, 0.0014287353260442615f, 0.001970570534467697f, 0.0024464833550155163f, 0.0033967685885727406f, 0.0012714540353044868f, 0.0025616467464715242f, 0.0036082491278648376f, 0.0026056759525090456f, 0.0020381216891109943f, 0.003716375445947051f, 0.00370145495980978f, 0.008228041231632233f, 0.005764560773968697f, 0.008461076766252518f, 0.007558736018836498f, 0.004917822312563658f, 0.010239607654511929f, 0.0019291192293167114f, 0.003755575744435191f, 0.004405246581882238f, 0.002064257161691785f, 0.0027439782861620188f, 0.0029810862615704536f, 0.004158588591963053f, 0.002831939607858658f, 0.005620331969112158f, 0.0026055180933326483f, 0.0033268630504608154f, 0.0017620406579226255f, 0.003968475852161646f, 0.00291287899017334f, 0.002606657799333334f, 0.0019199709640815854f, 0.002321151550859213f, 0.002120457822456956f, 0.0017269742675125599f, 0.002408259781077504f, 0.008549979887902737f, 0.0025749322958290577f, 0.004063854925334454f, 0.005307275801897049f, 0.002160784089937806f, 0.0017934584757313132f, 0.005503917578607798f, 0.0044868565164506435f, 0.0024201360065490007f, 0.003431903198361397f, 0.0022340293508023024f, 0.004389578942209482f, 0.0025590783916413784f, 0.0032202471047639847f, 0.00524006737396121f, 0.0022734610829502344f, 0.006331000477075577f, 0.00936055090278387f, 0.0019337148405611515f, 0.005301203578710556f, 0.003423717338591814f, 0.01210477203130722f, 0.0031491578556597233f, 0.002774257678538561f, 0.003917601890861988f, 0.0026901019737124443f, 0.005607795435935259f, 0.0028438924346119165f, 0.002347736619412899f, 0.0029360430780798197f, 0.007228404749184847f, 0.010448821820318699f, 0.0032062914688140154f, 0.00478380685672164f, 0.0026803268119692802f, 0.002212212421000004f, 0.00323388515971601f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035647398326545954f, 0.0017574871890246868f, 0.0030072247609496117f, 0.0040145074017345905f, 0.0038384534418582916f, 0.003684408264234662f, 0.0051496694795787334f, 0.004964906722307205f, 0.004193579312413931f, 0.0018172240816056728f, 0.003342975629493594f, 0.004513822495937347f, 0.001953491708263755f, 0.0017235609702765942f, 0.001876492751762271f, 0.003698955522850156f, 0.0034579106140881777f, 0.0015358423115685582f, 0.0025037070736289024f, 0.002091572619974613f, 0.002523518865928054f, 0.0018807569285854697f, 0.0033764708787202835f, 0.0042871166951954365f, 0.00702481996268034f, 0.0035851765424013138f, 0.0046049924567341805f, 0.001936617074534297f, 0.002002192661166191f, 0.0018043085001409054f, 0.004247510805726051f, 0.0035253872629255056f, 0.0039036311209201813f, 0.005256409291177988f, 0.0037318768445402384f, 0.0039741466753184795f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006736621726304293f, 0.0005752528668381274f, 0.0006944577326066792f, 0.0006864750757813454f, 0.0007781778695061803f, 0.0007609377498738468f, 0.0004946585395373404f, 0.0006594256265088916f, 0.0006425674073398113f, 0.0005898427916690707f, 0.0010950355790555477f, 0.000892133975867182f, 0.0008373825694434345f, 0.0010809277882799506f, 0.0006351600750349462f, 0.0007539127836935222f, 0.0004759174189530313f, 0.000742708332836628f, 0.0007972294115461409f, 0.0006831435603089631f, 0.001095134881325066f, 0.0006457463605329394f, 0.0006579000619240105f, 0.0004504105309024453f, 0.0005807841662317514f, 0.0007175146602094173f, 0.0006001342553645372f, 0.0005847564316354692f, 0.0004589158343151212f, 0.00047147617442533374f, 0.0005853612092323601f, 0.000597973819822073f, 0.0007387334480881691f, 0.0008023169939406216f, 0.00042802587267942727f, 0.0005942491116002202f, 0.000613478827290237f, 0.0006517851143144071f, 0.0007121033850125968f, 0.0005050469771958888f, 0.00048645102651789784f, 0.0006974291172809899f, 0.0005788363050669432f, 0.0007044790545478463f, 0.0005068515310995281f, 0.0005078966496512294f, 0.0006894778343848884f, 0.0006979418103583157f, 0.0008490289328619838f, 0.0008091649506241083f, 0.0005932406056672335f, 0.0006411276990547776f, 0.0005431483732536435f, 0.000742300704587251f, 0.0005513465730473399f, 0.0007274143281392753f, 0.0006124911596998572f, 0.0004491721629165113f, 0.0004969387082383037f, 0.0007019744953140616f, 0.0005819033249281347f, 0.0006694416515529156f, 0.0009201386710628867f, 0.0005755935562774539f, 0.0005523510626517236f, 0.0006144590443000197f, 0.0006279262597672641f, 0.0005831312155351043f, 0.0004393898125272244f, 0.0009003931190818548f, 0.0007561089005321264f, 0.0007524408283643425f, 0.0005772932199761271f, 0.0005245524807833135f, 0.0007732678786851466f, 0.0005376288900151849f, 0.0004684003652073443f, 0.0006392750074155629f, 0.0007338783470913768f, 0.0005738047184422612f, 0.000821696943603456f, 0.0005651937099173665f, 0.0005815002950839698f, 0.0004639986145775765f, 0.0009033115929923952f, 0.0006834865198470652f, 0.0005817783530801535f, 0.0006000591674819589f, 0.0008660606108605862f, 0.0005422503454610705f, 0.0007760529988445342f, 0.0006350027397274971f, 0.0006970313261263072f, 0.0006405611638911068f, 0.0008342242217622697f, 0.00041732503450475633f, 0.0007985736592672765f, 0.0004831476544495672f, 0.000638249097391963f, 0.0005902641569264233f, 0.0006432543741539121f, 0.0004402690101414919f, 0.0006246855482459068f, 0.0008374738390557468f, 0.0007331314845941961f, 0.0007265169988386333f, 0.0006410495261661708f, 0.0006918235449120402f, 0.0006311988108791411f, 0.0006531793624162674f, 0.0005794324679300189f, 0.0006251332815736532f, 0.0005589264910668135f, 0.0006556374137289822f, 0.0005427044816315174f, 0.0006443033344112337f, 0.00036152848042547703f, 0.0006232305895537138f, 0.0006677230703644454f, 0.0005526852328330278f, 0.000568916613701731f, 0.0005449531599879265f, 0.0008745494997128844f, 0.0006715678609907627f, 0.0009003300219774246f, 0.0008523495052941144f, 0.0007663721917197108f, 0.0006159089971333742f, 0.0005014700582250953f, 0.0005493734497576952f, 0.0010040303459390998f, 0.0004871321143582463f, 0.0009053478133864701f, 0.0004961056401953101f, 0.000874395715072751f, 0.0006042750901542604f, 0.0007961084484122694f, 0.0007379547460004687f, 0.00041569225140847266f, 0.0004878467007074505f, 0.0005815668264403939f, 0.0005615514819510281f, 0.0007238878170028329f, 0.0005926571320742369f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005252735689282417f, 0.0053518726490437984f, 0.004641429055482149f, 0.005839817691594362f, 0.005666601937264204f, 0.00430332962423563f, 0.006008368916809559f, 0.004523888695985079f, 0.006149351596832275f, 0.004821651615202427f, 0.004440377466380596f, 0.004044780507683754f, 0.006127794738858938f, 0.004165039863437414f, 0.004827926401048899f, 0.004435775801539421f, 0.003593889530748129f, 0.0051532285287976265f, 0.005428670439869165f, 0.004844732582569122f, 0.0037048072554171085f, 0.003817238612100482f, 0.004996513482183218f, 0.004643009044229984f, 0.004993958864361048f, 0.004170254338532686f, 0.0054737599566578865f, 0.003147282637655735f, 0.006103554740548134f, 0.003417244181036949f, 0.00385336484760046f, 0.003629976650699973f, 0.007558977231383324f, 0.005464137531816959f, 0.0046188547275960445f, 0.005087010096758604f, 0.004800224211066961f, 0.005643018987029791f, 0.003426913870498538f, 0.0056793298572301865f, 0.005819467827677727f, 0.005157032050192356f, 0.003777554491534829f, 0.004145015962421894f, 0.006216505076736212f, 0.005704561248421669f, 0.004737516865134239f, 0.005372022744268179f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00310127018019557f, 0.0017435512272641063f, 0.0018722033128142357f, 0.0017549064941704273f, 0.0017459335504099727f, 0.001470352872274816f, 0.0017956540687009692f, 0.0011929500615224242f, 0.002243616385385394f, 0.0012854975648224354f, 0.0011128266341984272f, 0.0013256830861791968f, 0.0015532620018348098f, 0.0014915470965206623f, 0.0021500387229025364f, 0.001760327024385333f, 0.0014227150240913033f, 0.0021131401881575584f, 0.0008029213640838861f, 0.0008600494475103915f, 0.0022402412723749876f, 0.0008907542796805501f, 0.0008818359347060323f, 0.0011709900572896004f, 0.0011530786287039518f, 0.001741454703733325f, 0.002435877453535795f, 0.0021475714165717363f, 0.0014353819424286485f, 0.001978411106392741f, 0.0017733463319018483f, 0.0013179880334064364f, 0.0011431706370785832f, 0.0006585463415831327f, 0.001509756431914866f, 0.0011201099259778857f, 0.0011942111887037754f, 0.0014280809555202723f, 0.0016814286354929209f, 0.0011970035266131163f, 0.0010476086754351854f, 0.0015808361349627376f, 0.001978648593649268f, 0.0023242353927344084f, 0.0016222267877310514f, 0.0018531945534050465f, 0.001540299621410668f, 0.001516442047432065f, 0.0014462233521044254f, 0.001696501742117107f, 0.0013578999787569046f, 0.0009265082771889865f, 0.001375592895783484f, 0.001273153000511229f, 0.0016095677856355906f, 0.0010764410253614187f, 0.0021343494299799204f, 0.0016639370005577803f, 0.0009489995427429676f, 0.0010347017087042332f, 0.002614068565890193f, 0.0011415547924116254f, 0.0013533510500565171f, 0.0011186162009835243f, 0.0012694115284830332f, 0.0023490418680012226f, 0.0016462508356198668f, 0.002555446233600378f, 0.0027573949191719294f, 0.0015306794084608555f, 0.000985434977337718f, 0.002326793037354946f, 0.0011930750915780663f, 0.001008995110169053f, 0.0007922896184027195f, 0.0008991116192191839f, 0.0014555742964148521f, 0.0012266576522961259f, 0.0017256669234484434f, 0.0019671637564897537f, 0.0016956098843365908f, 0.0012657498009502888f, 0.0015655221650376916f, 0.0016580196097493172f, 0.0011016417993232608f, 0.0016957852058112621f, 0.0017375749303027987f, 0.0017533497884869576f, 0.0018293546745553613f, 0.000832664140034467f, 0.0010373188415542245f, 0.0019737137481570244f, 0.0021434116642922163f, 0.001442951848730445f, 0.0012836134992539883f, 0.0014928820310160518f, 0.0018333608750253916f, 0.001485744258388877f, 0.0013327485648915172f, 0.0012292723404243588f, 0.0011394728207960725f, 0.0016070641577243805f, 0.0016865428769961f, 0.0012916038976982236f, 0.0016807228093966842f, 0.0019703293219208717f, 0.0018973705591633916f, 0.001024903147481382f, 0.0010866780066862702f, 0.0012936131097376347f, 0.002450954867526889f, 0.0018557902658358216f, 0.0018070325022563338f, 0.0018760766834020615f, 0.0012748494045808911f, 0.0010107011767104268f, 0.0012124081840738654f, 0.002584847155958414f, 0.0019139687065035105f, 0.001307771890424192f, 0.0021804531570523977f, 0.001374422456137836f, 0.001990273129194975f, 0.0021306800190359354f, 0.0011185877956449986f, 0.0018098813015967607f, 0.001354849198833108f, 0.0009414839441888034f, 0.0011948279570788145f, 0.002039180835708976f, 0.0014586931793019176f, 0.001401780522428453f, 0.0023368641268461943f, 0.002581937238574028f, 0.0013369324151426554f, 0.0018692506710067391f, 0.001290476880967617f, 0.0015739841619506478f, 0.0012728534638881683f, 0.001389388693496585f, 0.0012329758610576391f, 0.0015707846032455564f, 0.001147027825936675f, 0.0013193384511396289f, 0.0009640860953368247f, 0.0015468477504327893f, 0.0007600397220812738f, 0.0012936642160639167f, 0.0011723050847649574f, 0.0015855652745813131f, 0.0008373339660465717f, 0.0007912643486633897f, 0.001335207954980433f, 0.0011609323555603623f, 0.0013090060092508793f, 0.0014689398230984807f, 0.0013916378375142813f, 0.0010907248361036181f, 0.001485298271290958f, 0.0010427555534988642f, 0.0012076448183506727f, 0.0022801244631409645f, 0.002616039477288723f, 0.0010570758022367954f, 0.0016699727857485414f, 0.0021466542966663837f, 0.0017577812541276217f, 0.0019338285783305764f, 0.000997332506813109f, 0.001030422979965806f, 0.001963358838111162f, 0.0012285703560337424f, 0.001917963265441358f, 0.0008822408271953464f, 0.0017958339303731918f, 0.0015700665535405278f, 0.0008188065839931369f, 0.0009325845167040825f, 0.001097421976737678f, 0.002278608037158847f, 0.0009997737361118197f, 0.0015736286295577884f, 0.0009468436473980546f, 0.002103629056364298f, 0.0012444574385881424f, 0.0019111937144771218f, 0.0022736932151019573f, 0.0015182334464043379f, 0.0023256076965481043f, 0.0016112541779875755f, 0.001555367256514728f, 0.001211801078170538f, 0.0026742436457425356f, 0.0014778244076296687f, 0.0015002936124801636f, 0.0031630166340619326f, 0.0009268008871003985f, 0.0015969212399795651f, 0.0007708113989792764f, 0.0015525809722021222f, 0.0008958372636698186f, 0.0015170617261901498f, 0.002434696536511183f, 0.0017643506871536374f, 0.0011291163973510265f, 0.0018781675025820732f, 0.0009957205038517714f, 0.0019223419949412346f, 0.0016572721069678664f, 0.001835365197621286f, 0.0014551121275871992f, 0.0015801662812009454f, 0.0018480488797649741f, 0.0020883490797132254f, 0.0014222811441868544f, 0.0016576366033405066f, 0.0019206699216738343f, 0.0013326789485290647f, 0.0007801145548000932f, 0.001902906340546906f, 0.0015537334838882089f, 0.0008581320871599019f, 0.0010032785357907414f, 0.0010170073946937919f, 0.002296584425494075f, 0.0016306638717651367f, 0.0013372085522860289f, 0.001037626643665135f, 0.00100960792042315f, 0.0013195808278396726f, 0.001511220820248127f, 0.0009656667825765908f, 0.0007577373180538416f, 0.0011454595951363444f, 0.0028728004544973373f, 0.0012723974650725722f, 0.0011291083646938205f, 0.0014674903359264135f, 0.001746184192597866f, 0.0024136898573487997f, 0.002124929102137685f, 0.0012059109285473824f, 0.0010053374571725726f, 0.001138216000981629f, 0.0012373492354527116f, 0.0017797875916585326f, 0.0013662532437592745f, 0.001666736789047718f, 0.0010883311042562127f, 0.0014003898249939084f, 0.002157286275178194f, 0.001632556552067399f, 0.0019479558104649186f, 0.0015918135177344084f, 0.0009768358431756496f, 0.002082964638248086f, 0.0011577541008591652f, 0.0015741386450827122f, 0.0011454429477453232f, 0.0015460590366274118f, 0.0019938123878091574f, 0.0012300224043428898f, 0.0014489730820059776f, 0.0015396842500194907f, 0.0014739682665094733f, 0.0016858797753229737f, 0.0009290871676057577f, 0.0016876972513273358f, 0.0013149488950148225f, 0.001586652360856533f, 0.0009701552335172892f, 0.0017296219011768699f, 0.0013425343204289675f, 0.0019959795754402876f, 0.0011245491914451122f, 0.002454821253195405f, 0.0017442575190216303f, 0.0013817514991387725f, 0.0013733285013586283f, 0.0015950588276609778f, 0.00139748421497643f, 0.0008247003424912691f, 0.0015355526702478528f, 0.0008629054063931108f, 0.0013135704211890697f, 0.0018891416257247329f, 0.0012629221891984344f, 0.0012235455214977264f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022047783713787794f, 0.00977268721908331f, 0.005462456028908491f, 0.0068327863700687885f, 0.0030564770568162203f, 0.00504100089892745f, 0.004079603590071201f, 0.005465109366923571f, 0.0046597751788794994f, 0.006237548775970936f, 0.007024469319730997f, 0.01025718729943037f, 0.004414609167724848f, 0.00632373197004199f, 0.002949260640889406f, 0.00626339390873909f, 0.002930164337158203f, 0.00340465665794909f, 0.019975248724222183f, 0.010540920309722424f, 0.0027644464280456305f, 0.01529648993164301f, 0.01203758642077446f, 0.012086049653589725f, 0.006617693230509758f, 0.0040310961194336414f, 0.0031981272622942924f, 0.006645821966230869f, 0.004475475754588842f, 0.00391963729634881f, 0.001911098137497902f, 0.008458887226879597f, 0.015293808653950691f, 0.023725055158138275f, 0.007273545954376459f, 0.00827337522059679f, 0.02048853412270546f, 0.011599505320191383f, 0.003215352538973093f, 0.00829674769192934f, 0.014372116886079311f, 0.008323927409946918f, 0.004230848979204893f, 0.0033254155423492193f, 0.004334713332355022f, 0.002994691953063011f, 0.0032237281557172537f, 0.004135203547775745f, 0.012814112938940525f, 0.004697742406278849f, 0.004487320315092802f, 0.011126919649541378f, 0.004554088693112135f, 0.018398521468043327f, 0.010542839765548706f, 0.009937448427081108f, 0.005665214266628027f, 0.0035088376607745886f, 0.009860871359705925f, 0.01134668942540884f, 0.0026018747594207525f, 0.017084775492548943f, 0.007333933375775814f, 0.0030554949771612883f, 0.0256933756172657f, 0.0032037454657256603f, 0.002625376684591174f, 0.0027788160368800163f, 0.006836914457380772f, 0.019168533384799957f, 0.012112753465771675f, 0.004188734572380781f, 0.010175702162086964f, 0.01339093130081892f, 0.022336170077323914f, 0.02191845141351223f, 0.002867939881980419f, 0.0039149802178144455f, 0.0033597233705222607f, 0.004247411619871855f, 0.005629250314086676f, 0.006719599012285471f, 0.0038141992408782244f, 0.006000683642923832f, 0.009636595845222473f, 0.0032604008447378874f, 0.00333745451644063f, 0.005173996556550264f, 0.006018980871886015f, 0.04310954362154007f, 0.011407066136598587f, 0.002640370512381196f, 0.0023927679285407066f, 0.010304861702024937f, 0.008282513357698917f, 0.0032825132366269827f, 0.0032260932493954897f, 0.008074727840721607f, 0.0046975454315543175f, 0.005071701016277075f, 0.011320233345031738f, 0.0027884640730917454f, 0.002511833794414997f, 0.003995793405920267f, 0.00833189394325018f, 0.0031795944087207317f, 0.005974314175546169f, 0.009349528700113297f, 0.022014718502759933f, 0.004104476887732744f, 0.003094928804785013f, 0.0028778575360774994f, 0.008946157060563564f, 0.0066303652711212635f, 0.005399045534431934f, 0.011005504988133907f, 0.009755142033100128f, 0.002396242693066597f, 0.001995290396735072f, 0.0037071569822728634f, 0.005844626575708389f, 0.0072447084821760654f, 0.006935831159353256f, 0.0030028943438082933f, 0.005012280773371458f, 0.0025967054534703493f, 0.0027130215894430876f, 0.012752422131597996f, 0.01107252761721611f, 0.005911052692681551f, 0.009222116321325302f, 0.0074032507836818695f, 0.006161589175462723f, 0.0024122982285916805f, 0.013874327763915062f, 0.0037929562386125326f, 0.0042716930620372295f, 0.012494952417910099f, 0.011045662686228752f, 0.006499391049146652f, 0.011629178188741207f, 0.007778672035783529f, 0.004158140625804663f, 0.005024080630391836f, 0.005555415991693735f, 0.004390308167785406f, 0.01416504755616188f, 0.006088359281420708f, 0.0187710952013731f, 0.0041125002317130566f, 0.01842780038714409f, 0.01628907211124897f, 0.004184235818684101f, 0.0076178740710020065f, 0.004057071637362242f, 0.005785729736089706f, 0.004505331162363291f, 0.012590719386935234f, 0.0037578102201223373f, 0.014439757913351059f, 0.013910040259361267f, 0.003925438039004803f, 0.002040182938799262f, 0.013822081498801708f, 0.005706202704459429f, 0.004059211350977421f, 0.003011232241988182f, 0.00796277355402708f, 0.009204676374793053f, 0.007991906255483627f, 0.0035356273874640465f, 0.005866738501936197f, 0.0032533544581383467f, 0.012513818219304085f, 0.0030808376614004374f, 0.01093783788383007f, 0.00932440534234047f, 0.0085817975923419f, 0.004591590724885464f, 0.0019314347300678492f, 0.010711130686104298f, 0.010037954896688461f, 0.01476448867470026f, 0.002972543938085437f, 0.010312668979167938f, 0.0036240238696336746f, 0.0028203327674418688f, 0.00411765044555068f, 0.002137374132871628f, 0.0134036960080266f, 0.0044873240403831005f, 0.02024095132946968f, 0.0014803940430283546f, 0.003972204867750406f, 0.01195189543068409f, 0.002416993724182248f, 0.02202480100095272f, 0.004283500835299492f, 0.021475426852703094f, 0.0024894331581890583f, 0.015414156019687653f, 0.003690027166157961f, 0.00391419418156147f, 0.002552249701693654f, 0.006148525048047304f, 0.002799967071041465f, 0.01612723432481289f, 0.0027544437907636166f, 0.009925472550094128f, 0.005100314039736986f, 0.010279849171638489f, 0.0034095225855708122f, 0.003105546347796917f, 0.002656669123098254f, 0.006508477497845888f, 0.004924187436699867f, 0.003796507604420185f, 0.007292027585208416f, 0.01351199857890606f, 0.0040608844719827175f, 0.004676725249737501f, 0.021921085193753242f, 0.014185786247253418f, 0.008466905914247036f, 0.0028877605218440294f, 0.005593740846961737f, 0.002839010674506426f, 0.01756017655134201f, 0.005735821556299925f, 0.0049657197669148445f, 0.005599790718406439f, 0.0239292923361063f, 0.01877612993121147f, 0.0055413395166397095f, 0.0020064942073076963f, 0.004677452612668276f, 0.010024648159742355f, 0.012798776850104332f, 0.002413891488686204f, 0.003157976781949401f, 0.003566592000424862f, 0.004520250950008631f, 0.009004496969282627f, 0.008882141672074795f, 0.005871268454939127f, 0.004828733392059803f, 0.0030286218971014023f, 0.0029422722291201353f, 0.015719249844551086f, 0.00471710367128253f, 0.003249574452638626f, 0.0023772497661411762f, 0.0035783853381872177f, 0.006546193268150091f, 0.015266429632902145f, 0.0030228737741708755f, 0.008161444216966629f, 0.006990860216319561f, 0.01068891678005457f, 0.01008804701268673f, 0.004490301478654146f, 0.0028835837729275227f, 0.0058159371837973595f, 0.003894960507750511f, 0.004332113079726696f, 0.0034985668025910854f, 0.01037162821739912f, 0.0033332642633467913f, 0.0034813671372830868f, 0.007437430787831545f, 0.025518184527754784f, 0.0035986986476927996f, 0.005389800760895014f, 0.004897908307611942f, 0.00743769621476531f, 0.0028840869199484587f, 0.0022034344729036093f, 0.007332681678235531f, 0.007220291532576084f, 0.006622184067964554f, 0.004233820363879204f, 0.019900169223546982f, 0.010771681554615498f, 0.018504170700907707f, 0.0028753711376339197f, 0.002807488664984703f, 0.011734794825315475f, 0.003416299121454358f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005159100983291864f, 0.0014116798993200064f, 0.0038041577208787203f, 0.005459003150463104f, 0.0013085224200040102f, 0.005886434577405453f, 0.0013186048017814755f, 0.0015068602515384555f, 0.0015892339870333672f, 0.004083874635398388f, 0.0049919243901968f, 0.005601722281426191f, 0.004914651159197092f, 0.004781443625688553f, 0.0015182280912995338f, 0.0012665727408602834f, 0.005438254214823246f, 0.005622758064419031f, 0.0016148214926943183f, 0.0018118800362572074f, 0.001399851287715137f, 0.0013340422883629799f, 0.0012353368801996112f, 0.005482974462211132f, 0.001167803886346519f, 0.0015499030705541372f, 0.001401278073899448f, 0.004065381363034248f, 0.0015151133993640542f, 0.005312934517860413f, 0.005119632463902235f, 0.0033734978642314672f, 0.0015168626559898257f, 0.004900878295302391f, 0.0013920021010562778f, 0.0013982189120724797f, 0.004941774532198906f, 0.005270912777632475f, 0.0021231062710285187f, 0.0011761740315705538f, 0.0015176372835412621f, 0.005490006413310766f, 0.0014978009276092052f, 0.001375554595142603f, 0.0012965439818799496f, 0.0038134658243507147f, 0.0016212505288422108f, 0.0011534978402778506f, 0.0013442853232845664f, 0.0017268462106585503f, 0.004378122743219137f, 0.0023927846923470497f, 0.004265807569026947f, 0.0013344540493562818f, 0.0014769441913813353f, 0.005588918458670378f, 0.0013460778864100575f, 0.004917592741549015f, 0.0016817616997286677f, 0.0015827481402084231f, 0.0014957409584894776f, 0.0015573573764413595f, 0.004077555611729622f, 0.004603529814630747f, 0.0018553140107542276f, 0.00483784731477499f, 0.0015414775116369128f, 0.0043763453140854836f, 0.001266398816369474f, 0.0013343936298042536f, 0.0013404811033979058f, 0.004273340571671724f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006328194867819548f, 0.000697659095749259f, 0.0006636961479671299f, 0.0007804507622495294f, 0.0005033120978623629f, 0.000815277686342597f, 0.0005899158422835171f, 0.0009704137919470668f, 0.0008341627544723451f, 0.0009207804687321186f, 0.0007153283804655075f, 0.0006918329163454473f, 0.0008944853325374424f, 0.000738375005312264f, 0.000662569364067167f, 0.001025921432301402f, 0.0006380939739756286f, 0.0004808311350643635f, 0.0005997995613142848f, 0.0007446880917996168f, 0.000590875162743032f, 0.0004463864606805146f, 0.0008159403223544359f, 0.0007196558872237802f, 0.0006652749143540859f, 0.0007822213810868561f, 0.0011751725105568767f, 0.0007742264424450696f, 0.0008487766608595848f, 0.0008077463717199862f, 0.0008520690607838333f, 0.0005394873442128301f, 0.0007364292396232486f, 0.0005209726514294744f, 0.0009697010973468423f, 0.0007619570824317634f, 0.000776049739215523f, 0.0008854871848598123f, 0.000931503891479224f, 0.0007934969034977257f, 0.0008447190630249679f, 0.00075971067417413f, 0.0007496289326809347f, 0.0005199555889703333f, 0.0006993381539359689f, 0.0008755213348194957f, 0.0006838348344899714f, 0.0007899395423009992f, 0.000548154057469219f, 0.0010601191315799952f, 0.00063933344790712f, 0.0007497815531678498f, 0.0010717040859162807f, 0.0003922291216440499f, 0.00045889700413681567f, 0.0006724395789206028f, 0.0005431626341305673f, 0.0008587491465732455f, 0.0007802210166119039f, 0.0008319963235408068f, 0.0007495675818063319f, 0.0010861572809517384f, 0.0008493929635733366f, 0.0010421493789181113f, 0.0007538656936958432f, 0.0006656445912085474f, 0.0007689832127653062f, 0.0006448182975873351f, 0.0008276836597360671f, 0.0009586098603904247f, 0.0006352488999255002f, 0.0005484608700498939f, 0.000600899918936193f, 0.0005635349662043154f, 0.0010362479370087385f, 0.0009483837056905031f, 0.0007364034536294639f, 0.0010092201409861445f, 0.0007596687646582723f, 0.0006221221992745996f, 0.001195255434140563f, 0.000821713067125529f, 0.0006737763178534806f, 0.00057099579134956f, 0.001027599791996181f, 0.000656882650218904f, 0.0005843274993821979f, 0.0006120624020695686f, 0.0008689204114489257f, 0.0008175147231668234f, 0.0006739362725056708f, 0.0009178107720799744f, 0.0006269357982091606f, 0.0006391513161361217f, 0.0006117862649261951f, 0.0005415846244432032f, 0.0007631747866980731f, 0.0010478798067197204f, 0.0006014754180796444f, 0.0004857302119489759f, 0.0008940090774558485f, 0.000727989652659744f, 0.0007110111182555556f, 0.000557633291464299f, 0.0008282103226520121f, 0.0005604144535027444f, 0.0007989588775672019f, 0.0005140103166922927f, 0.0008616340928710997f, 0.0006711604073643684f, 0.0007862542988732457f, 0.0007445709779858589f, 0.0008366825641132891f, 0.0007154086488299072f, 0.0006039300933480263f, 0.0009842065628618002f, 0.001209120498970151f, 0.0005566704785451293f, 0.0005790839204564691f, 0.0006139898323453963f, 0.0008776661125011742f, 0.0006316680228337646f, 0.0008241510367952287f, 0.0005748822004534304f, 0.0008790742722339928f, 0.0010017305612564087f, 0.0006504759658128023f, 0.0007070534629747272f, 0.0005715584848076105f, 0.000841568922623992f, 0.0006616765167564154f, 0.0006604804657399654f, 0.0005537713877856731f, 0.0007247207686305046f, 0.0006863376474939287f, 0.0006634738529101014f, 0.000910861708689481f, 0.000879536266438663f, 0.0010620912071317434f, 0.0007653972716070712f, 0.0006689147558063269f, 0.0008235438726842403f, 0.0006172229768708348f, 0.0009844547603279352f, 0.0007235653465613723f, 0.0004642286221496761f, 0.0006789939943701029f, 0.000957968644797802f, 0.0007397447479888797f, 0.0007342545432038605f, 0.0006304178386926651f, 0.0007713586091995239f, 0.0008163304883055389f, 0.0006897139828652143f, 0.00048159423749893904f, 0.0007337882416322827f, 0.0006699346122331917f, 0.0006232622545212507f, 0.0005936368834227324f, 0.0006148992106318474f, 0.0008691788534633815f, 0.0005771744763478637f, 0.0004976334166713059f, 0.0006820835988037288f, 0.0006358784739859402f, 0.0008110826602205634f, 0.0009265438420698047f, 0.0007534247124567628f, 0.0010228378232568502f, 0.0005419908557087183f, 0.000510885554831475f, 0.0006940694875083864f, 0.0008280982146970928f, 0.0008424235275015235f, 0.0006700193043798208f, 0.0005501653649844229f, 0.0009353845962323248f, 0.0007273317896761f, 0.001032762578688562f, 0.0006979713216423988f, 0.0007025356753729284f, 0.0004373117408249527f, 0.0005792430602014065f, 0.0007221373380161822f, 0.0006950722308829427f, 0.0006518089212477207f, 0.0006780093535780907f, 0.000640341080725193f, 0.0010443161008879542f, 0.0008893082849681377f, 0.0009289561421610415f, 0.0005314150475896895f, 0.0013491972349584103f, 0.0007138221408240497f, 0.0007713199011050165f, 0.0009137470042333007f, 0.0005486052832566202f, 0.0009597616735845804f, 0.0008148401975631714f, 0.0005135280080139637f, 0.0007445734227076173f, 0.0006581366178579628f, 0.0008968306938186288f, 0.0006096127908676863f, 0.0007603625417686999f, 0.0006080908351577818f, 0.0007674084627069533f, 0.0007013169815763831f, 0.0006565965013578534f, 0.0009213155717588961f, 0.0005846555577591062f, 0.0007981274393387139f, 0.001014844048768282f, 0.0005904908175580204f, 0.0007488203118555248f, 0.0008026336436159909f, 0.0006634195451624691f, 0.0008139872807078063f, 0.0005354154855012894f, 0.0008412469178438187f, 0.0008429661393165588f, 0.0006312383920885623f, 0.0007924605743028224f, 0.0006908879149705172f, 0.0008611576049588621f, 0.000996575690805912f, 0.0008632375975139439f, 0.0006492003449238837f, 0.0006896810955367982f, 0.0007038700277917087f, 0.0008072826894931495f, 0.0007946690311655402f, 0.0007841088809072971f, 0.000569376687053591f, 0.0008324853843078017f, 0.0005624553305096924f, 0.0006163323414511979f, 0.0005886967992410064f, 0.000748101097997278f, 0.0005249704117886722f, 0.0007861368940211833f, 0.0005449950695037842f, 0.000796791457105428f, 0.0006618876359425485f, 0.0009115675929933786f, 0.0006322073750197887f, 0.0005473332130350173f, 0.0007067397236824036f, 0.0007199174142442644f, 0.0005502875428646803f, 0.000969695916865021f, 0.0005844591651111841f, 0.000730292231310159f, 0.0005060475668869913f, 0.0008437123615294695f, 0.0006145290099084377f, 0.0010184514103457332f, 0.0007816340657882392f, 0.000884258362930268f, 0.0004470762796700001f, 0.0010037354659289122f, 0.0007393044070340693f, 0.0009152739075943828f, 0.000497974397148937f, 0.0005152905359864235f, 0.0009248938877135515f, 0.0007742469315417111f, 0.0007601759280078113f, 0.0007518156198784709f, 0.0005354564054869115f, 0.0008125185850076377f, 0.000517430598847568f, 0.0005409687291830778f, 0.0008900744724087417f, 0.0006894199759699404f, 0.0006174590671434999f, 0.0006987413507886231f, 0.0007863243226893246f, 0.0008618725696578622f, 0.0007003895589150488f, 0.0006052431417629123f, 0.0007524755783379078f, 0.0010003427742049098f, 0.0007044825470075011f, 0.0008855891064740717f, 0.0007183100678957999f, 0.0007498730556108057f, 0.000782911607529968f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031939097680151463f, 0.004624807275831699f, 0.0036715331953018904f, 0.005034154746681452f, 0.004857225809246302f, 0.00392854493111372f, 0.0027171005494892597f, 0.0032878017518669367f, 0.003979903645813465f, 0.0029867382254451513f, 0.004315401427447796f, 0.0031204065307974815f, 0.003723753849044442f, 0.003468264127150178f, 0.0022157595958560705f, 0.0037609743885695934f, 0.004527800716459751f, 0.003983607050031424f, 0.0049391272477805614f, 0.004032513592392206f, 0.00355257885530591f, 0.004497895482927561f, 0.0035073531325906515f, 0.0033460399135947227f, 0.0048453714698553085f, 0.003794308053329587f, 0.0036880935076624155f, 0.0033017785754054785f, 0.005043949466198683f, 0.003968609031289816f, 0.00355806783773005f, 0.0034465608187019825f, 0.004352041985839605f, 0.003788389265537262f, 0.003929562866687775f, 0.0035623707808554173f, 0.003944926895201206f, 0.0035934606567025185f, 0.004765044432133436f, 0.003569437190890312f, 0.004215363413095474f, 0.005091418046504259f, 0.002948205918073654f, 0.002803052542731166f, 0.004835240077227354f, 0.0040574027225375175f, 0.005180574022233486f, 0.0030330761801451445f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015974893467500806f, 0.0009395191445946693f, 0.0022928586695343256f, 0.0014726248336955905f, 0.0013314697425812483f, 0.001909252954646945f, 0.0011708189267665148f, 0.0018338991794735193f, 0.00089523900533095f, 0.0019788104109466076f, 0.00142269441857934f, 0.0017931569600477815f, 0.0015872258227318525f, 0.0009266256238333881f, 0.0008761013741604984f, 0.0018225477542728186f, 0.0013510830467566848f, 0.0015119966119527817f, 0.0010820775059983134f, 0.001427846378646791f, 0.00117769674398005f, 0.0019284182926639915f, 0.0012553230626508594f, 0.001423876266926527f, 0.0012728901347145438f, 0.001333689084276557f, 0.0010498788906261325f, 0.000863809953443706f, 0.001245576422661543f, 0.0011846154229715466f, 0.0009307028958573937f, 0.0007443081703968346f, 0.0007451989804394543f, 0.0008154132519848645f, 0.0009919649455696344f, 0.0015671791043132544f, 0.0010627852752804756f, 0.0011152146616950631f, 0.0020284554921090603f, 0.0008574433741159737f, 0.000880841223988682f, 0.0012440575519576669f, 0.0009669261635281146f, 0.0017380275530740619f, 0.0016744561726227403f, 0.00156533089466393f, 0.0015351437032222748f, 0.0011123528238385916f, 0.0009977917652577162f, 0.0012755562784150243f, 0.0020768847316503525f, 0.000642260245513171f, 0.0014991682255640626f, 0.0005945781012997031f, 0.0006328797899186611f, 0.0015878381673246622f, 0.0014709497336298227f, 0.0008264248026534915f, 0.0018918494461104274f, 0.001140877604484558f, 0.0015535663114860654f, 0.001583982608281076f, 0.0013362402096390724f, 0.0019509911071509123f, 0.0005238812882453203f, 0.0013483281945809722f, 0.0009923335164785385f, 0.0017654397524893284f, 0.0008759323391132057f, 0.0012127890950068831f, 0.002167799975723028f, 0.001394877559505403f, 0.0012461146106943488f, 0.002704670187085867f, 0.001059620175510645f, 0.0015613065334036946f, 0.000965674000326544f, 0.0013926886022090912f, 0.00205608201213181f, 0.0008023729315027595f, 0.000962474849075079f, 0.0012716539204120636f, 0.0011693468550220132f, 0.0011315203737467527f, 0.0013121686642989516f, 0.0016035794978961349f, 0.0009647724218666553f, 0.0007845341460779309f, 0.0008751447312533855f, 0.0013986286940053105f, 0.0017378124175593257f, 0.0015927855856716633f, 0.0012161784106865525f, 0.001848196261562407f, 0.0011860261438414454f, 0.0014158965786918998f, 0.0013974166940897703f, 0.0008317598840221763f, 0.0018295873887836933f, 0.0012008025078102946f, 0.0021733606699854136f, 0.0016923885559663177f, 0.0012682947563007474f, 0.0011859791120514274f, 0.0011570194037631154f, 0.0010916233295574784f, 0.0013103036908432841f, 0.0015969504602253437f, 0.0006244492251425982f, 0.0015326725551858544f, 0.0005977508262731135f, 0.000841637491248548f, 0.0008577285916544497f, 0.0006630196003243327f, 0.001115036546252668f, 0.0026478085201233625f, 0.0016010052058845758f, 0.0008676486322656274f, 0.000991622218862176f, 0.0013419815804809332f, 0.0007501089130528271f, 0.0009317651856690645f, 0.001644109026528895f, 0.0011963557917624712f, 0.0015547991497442126f, 0.0027077149134129286f, 0.0020452099852263927f, 0.0017091528279706836f, 0.0015176309971138835f, 0.0013813846744596958f, 0.001026867306791246f, 0.0012587029486894608f, 0.0013093745801597834f, 0.0013074419694021344f, 0.0011265143984928727f, 0.0013362168101593852f, 0.0007219417602755129f, 0.0015653792070224881f, 0.0005815757322125137f, 0.0006686499691568315f, 0.0015298794023692608f, 0.0008651362149976194f, 0.0013354786206036806f, 0.0011298720492050052f, 0.0009606749517843127f, 0.001434130477719009f, 0.0006257676286622882f, 0.0007232691277749836f, 0.0014703214401379228f, 0.0009568578680045903f, 0.0008074968936853111f, 0.001253347611054778f, 0.0008182847523130476f, 0.0006904422771185637f, 0.0020332355052232742f, 0.0013003089698031545f, 0.0008120218990370631f, 0.0008673678385093808f, 0.0009821986313909292f, 0.0013718035770580173f, 0.0010631588520482183f, 0.0012466692132875323f, 0.0017837563063949347f, 0.0017653725808486342f, 0.001727620023302734f, 0.001010500593110919f, 0.0025430379901081324f, 0.0010217790259048343f, 0.001367974909953773f, 0.0010279223788529634f, 0.0010640729451552033f, 0.0015443518059328198f, 0.0013382966862991452f, 0.0008854526095092297f, 0.000737740017939359f, 0.0012424271553754807f, 0.0011412438470870256f, 0.0027731203008443117f, 0.0012875553220510483f, 0.0018500513397157192f, 0.0022329972125589848f, 0.0012179206823930144f, 0.0010653614299371839f, 0.000956635398324579f, 0.0006538885645568371f, 0.0010341644519940019f, 0.0011047102743759751f, 0.00109067652374506f, 0.0006568095996044576f, 0.0011195370461791754f, 0.001376217813231051f, 0.0009706093114800751f, 0.0009086509817279875f, 0.0007886906969361007f, 0.001177235972136259f, 0.0014208920765668154f, 0.001293898792937398f, 0.0008415694464929402f, 0.0008047870942391455f, 0.0010335783008486032f, 0.0009094999986700714f, 0.0010331013472750783f, 0.0012678889324888587f, 0.001599389361217618f, 0.0011678856099024415f, 0.001602589851245284f, 0.0011583196464926004f, 0.0015081791207194328f, 0.0007860432378947735f, 0.002464072313159704f, 0.0013684607110917568f, 0.0015946945641189814f, 0.0011490460019558668f, 0.0016024181386455894f, 0.0008143014856614172f, 0.0009167653042823076f, 0.0013785709161311388f, 0.001619346672669053f, 0.0011591078946366906f, 0.0013534554746001959f, 0.0010285108583047986f, 0.001000735443085432f, 0.0014293116983026266f, 0.0013404573546722531f, 0.001517167896963656f, 0.0015830162446945906f, 0.0011670031817629933f, 0.0014224457554519176f, 0.0017284057103097439f, 0.0008186752675101161f, 0.0015358456876128912f, 0.0010744568426162004f, 0.0012477957643568516f, 0.001053446438163519f, 0.000798898923676461f, 0.001121513661928475f, 0.0009503682958893478f, 0.0008012515027076006f, 0.0024428812321275473f, 0.001806020736694336f, 0.0010134200565516949f, 0.001794264419004321f, 0.0007605449645780027f, 0.0009036939009092748f, 0.001094197854399681f, 0.0008907612063921988f, 0.001273946720175445f, 0.0007293907692655921f, 0.0010050726123154163f, 0.0014068768359720707f, 0.0013429030077531934f, 0.0015437768306583166f, 0.0017869549337774515f, 0.001282191602513194f, 0.0005667177028954029f, 0.0010953426826745272f, 0.002078084973618388f, 0.0008607012568973005f, 0.001005571219138801f, 0.001236547832377255f, 0.0008232277468778193f, 0.00158607994671911f, 0.0015536320861428976f, 0.0013335287803784013f, 0.001470455201342702f, 0.0011813531164079905f, 0.0015079561853781343f, 0.0020172500517219305f, 0.0010849182726815343f, 0.0014264308847486973f, 0.001428066985681653f, 0.001648278790526092f, 0.0010648469906300306f, 0.0020258938893675804f, 0.0008950563496910036f, 0.0011405152035877109f, 0.0009404347511008382f, 0.0010240916162729263f, 0.0015948740765452385f, 0.0013366875937208533f, 0.0014138971455395222f, 0.0008303548092953861f, 0.0013885522494092584f, 0.0008847333956509829f, 0.0014424349647015333f, 0.00095894536934793f, 0.0013454568106681108f, 0.0013359430013224483f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031875099521130323f, 0.004607480484992266f, 0.0027181378100067377f, 0.007576459087431431f, 0.0037475875578820705f, 0.002747722901403904f, 0.012524324469268322f, 0.004190872889012098f, 0.005540087819099426f, 0.00263279490172863f, 0.004539245739579201f, 0.002063692780211568f, 0.0024269348941743374f, 0.007920367643237114f, 0.005272313486784697f, 0.0026305175852030516f, 0.004200253635644913f, 0.0026590069755911827f, 0.0043630641885101795f, 0.008871135301887989f, 0.004095821641385555f, 0.0019766739569604397f, 0.002053666627034545f, 0.00803748145699501f, 0.004844198003411293f, 0.006659991107881069f, 0.011277967132627964f, 0.015167517587542534f, 0.0035141543485224247f, 0.00728182028979063f, 0.020178912207484245f, 0.016231132671236992f, 0.014445955865085125f, 0.010762704536318779f, 0.003912839572876692f, 0.0040542930364608765f, 0.006521112751215696f, 0.004864266607910395f, 0.0017078326782211661f, 0.015455750748515129f, 0.008553863503038883f, 0.003340940224006772f, 0.019314266741275787f, 0.0023658631835132837f, 0.002428967971354723f, 0.0030302756931632757f, 0.0056217145174741745f, 0.002949937479570508f, 0.007412697188556194f, 0.0018994398415088654f, 0.002432883018627763f, 0.01639464497566223f, 0.004227569792419672f, 0.02225250005722046f, 0.027309618890285492f, 0.0044679841957986355f, 0.0030294707976281643f, 0.012106910347938538f, 0.002374308416619897f, 0.0030642414931207895f, 0.003015050897374749f, 0.0024272967129945755f, 0.004354539792984724f, 0.0019610808230936527f, 0.033676184713840485f, 0.0035999594256281853f, 0.005097273271530867f, 0.0018849625485017896f, 0.007745103444904089f, 0.0020399298518896103f, 0.0019644952844828367f, 0.0024748260620981455f, 0.006392729934304953f, 0.0033544437028467655f, 0.0046200561337172985f, 0.006255151238292456f, 0.011555072851479053f, 0.004382180515676737f, 0.0024931319057941437f, 0.007064802572131157f, 0.00887462217360735f, 0.005545652471482754f, 0.009693263098597527f, 0.0046412949450314045f, 0.004094788338989019f, 0.002143086865544319f, 0.004435273818671703f, 0.0097052538767457f, 0.008900516666471958f, 0.0041420417837798595f, 0.00212620897218585f, 0.003345559583976865f, 0.0029797558672726154f, 0.0025692987255752087f, 0.010434291325509548f, 0.00247482699342072f, 0.005763494409620762f, 0.017225496470928192f, 0.0026795181911438704f, 0.002619541948661208f, 0.0019379109144210815f, 0.0026775908190757036f, 0.003527943044900894f, 0.0030298701021820307f, 0.00739440880715847f, 0.0051930928602814674f, 0.0028020667377859354f, 0.003161369590088725f, 0.011664079502224922f, 0.002775089116767049f, 0.029604144394397736f, 0.011737237684428692f, 0.01756672002375126f, 0.01992291398346424f, 0.005290403962135315f, 0.0022423083428293467f, 0.003415232291445136f, 0.016018111258745193f, 0.012177727185189724f, 0.007759703788906336f, 0.010228430852293968f, 0.00920823123306036f, 0.004021547269076109f, 0.005636833608150482f, 0.005818330682814121f, 0.0026724899653345346f, 0.0023926966823637486f, 0.0043802084401249886f, 0.0017507750308141112f, 0.003175331512466073f, 0.0079704150557518f, 0.00546468747779727f, 0.002216781722381711f, 0.003803189843893051f, 0.003866121405735612f, 0.004211471416056156f, 0.01779458485543728f, 0.0036841738037765026f, 0.018348315730690956f, 0.010560890659689903f, 0.0065942807123064995f, 0.011463921517133713f, 0.0036771693266928196f, 0.003132621757686138f, 0.014006398618221283f, 0.002063938183709979f, 0.020336562767624855f, 0.015855243429541588f, 0.005684399511665106f, 0.010511605069041252f, 0.013120348565280437f, 0.004789453465491533f, 0.011481818743050098f, 0.011199445463716984f, 0.002359208185225725f, 0.002546378644183278f, 0.014561159536242485f, 0.012808006256818771f, 0.011068927124142647f, 0.00313893286511302f, 0.006581457331776619f, 0.002847481518983841f, 0.0028624781407415867f, 0.0024383775889873505f, 0.003119624685496092f, 0.00336922868154943f, 0.001975437393411994f, 0.0032162207644432783f, 0.006431861314922571f, 0.005793699063360691f, 0.010145332664251328f, 0.0070568048395216465f, 0.008723968639969826f, 0.006725974380970001f, 0.025845753028988838f, 0.0028007435612380505f, 0.006959736812859774f, 0.001754089375026524f, 0.0069929505698382854f, 0.0025718177203089f, 0.0016870716353878379f, 0.007159838452935219f, 0.004769375082105398f, 0.00652120029553771f, 0.016626957803964615f, 0.0037865284830331802f, 0.004137502517551184f, 0.0072972835041582584f, 0.012588970363140106f, 0.004572176840156317f, 0.0027756409253925085f, 0.008977161720395088f, 0.005975508131086826f, 0.0059531014412641525f, 0.008131015114486217f, 0.0030004188884049654f, 0.002566618612036109f, 0.011890118941664696f, 0.009053751826286316f, 0.006607227958738804f, 0.003894532099366188f, 0.0017528492026031017f, 0.003342615906149149f, 0.0020357442554086447f, 0.013711625710129738f, 0.002447742037475109f, 0.004350016359239817f, 0.0025429048109799623f, 0.013740058988332748f, 0.0030077053233981133f, 0.0031528195831924677f, 0.0041196695528924465f, 0.006747935898602009f, 0.00561128742992878f, 0.008833134546875954f, 0.0027183087076991796f, 0.003798621939495206f, 0.003042596857994795f, 0.01963920146226883f, 0.0033883939031511545f, 0.009672475978732109f, 0.010521973483264446f, 0.0017139650881290436f, 0.002669581910595298f, 0.0021562569309026003f, 0.0021230075508356094f, 0.005884360522031784f, 0.003182752523571253f, 0.002795054344460368f, 0.019350668415427208f, 0.003472639713436365f, 0.00962018221616745f, 0.0022619201336055994f, 0.008974780328571796f, 0.005740200635045767f, 0.004842463415116072f, 0.005355829373002052f, 0.015000681392848492f, 0.0032889307476580143f, 0.004498348105698824f, 0.00804874673485756f, 0.005098886787891388f, 0.011945121921598911f, 0.01096793357282877f, 0.0031773317605257034f, 0.010086508467793465f, 0.005720379296690226f, 0.015211625024676323f, 0.01045830175280571f, 0.004185257945209742f, 0.002256846521049738f, 0.0020390073768794537f, 0.004561124835163355f, 0.0028370011132210493f, 0.014394450932741165f, 0.010169968008995056f, 0.0037658934015780687f, 0.011564625427126884f, 0.006898215040564537f, 0.004972649738192558f, 0.013212195597589016f, 0.003208241192623973f, 0.0023629802744835615f, 0.0027828325983136892f, 0.0036028577014803886f, 0.004839374218136072f, 0.002504992764443159f, 0.0038423079531639814f, 0.003864603815600276f, 0.0038170493207871914f, 0.003614294109866023f, 0.0035808223765343428f, 0.0041095782071352005f, 0.0018792145419865847f, 0.013656841591000557f, 0.013019158504903316f, 0.007200515829026699f, 0.011102881282567978f, 0.003142723347991705f, 0.0044224318116903305f, 0.012172910384833813f, 0.00996807124465704f, 0.004711414687335491f, 0.0170415248721838f, 0.003727439558133483f, 0.006024483125656843f, 0.005394354462623596f, 0.003042111871764064f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004174559842795134f, 0.0013293640222400427f, 0.005274173337966204f, 0.004315870814025402f, 0.0037147412076592445f, 0.0013954541645944118f, 0.005430638324469328f, 0.002024722518399358f, 0.0012551259715110064f, 0.0017634493997320533f, 0.005008748732507229f, 0.003898847149685025f, 0.0038795452564954758f, 0.004226909950375557f, 0.004844488576054573f, 0.0013484088703989983f, 0.0017383297672495246f, 0.0014827082632109523f, 0.0013272524811327457f, 0.004497802350670099f, 0.0016943715745583177f, 0.0014689111849293113f, 0.004557461477816105f, 0.0025190599262714386f, 0.0012817831011489034f, 0.0015428636688739061f, 0.001608436112292111f, 0.0017346329987049103f, 0.006010186392813921f, 0.00135555281303823f, 0.00670287199318409f, 0.00137528614141047f, 0.006908167619258165f, 0.005288917105644941f, 0.003967058379203081f, 0.001520076533779502f, 0.005515239201486111f, 0.005805922206491232f, 0.006227925419807434f, 0.004177268594503403f, 0.00532703660428524f, 0.0013914118753746152f, 0.006067666690796614f, 0.0019067703979089856f, 0.0015032571973279119f, 0.005190547555685043f, 0.005028978921473026f, 0.0018149178940802813f, 0.0015556883299723268f, 0.005793910939246416f, 0.0015880861319601536f, 0.004806456621736288f, 0.0018491283990442753f, 0.0013803908368572593f, 0.0014996830141171813f, 0.001653578830882907f, 0.0015847082249820232f, 0.0015556113794445992f, 0.0014636600390076637f, 0.0058455998077988625f, 0.0011953918728977442f, 0.00442513357847929f, 0.001553268637508154f, 0.0015555621357634664f, 0.0016120291547849774f, 0.004619883373379707f, 0.0011648900108411908f, 0.004708315245807171f, 0.0016557899070903659f, 0.00502794561907649f, 0.0019051618874073029f, 0.004754388239234686f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008425925625488162f, 0.0006532693514600396f, 0.0008416087948717177f, 0.0007631789776496589f, 0.0007500079809688032f, 0.0005505555309355259f, 0.0007873097783885896f, 0.000609107781201601f, 0.0006368437898345292f, 0.0006429263157770038f, 0.0008965380256995559f, 0.0007769149378873408f, 0.0006299624219536781f, 0.0009070986998267472f, 0.0005425445269793272f, 0.0009510880336165428f, 0.0007854645373299718f, 0.0008720661280676723f, 0.001068364130333066f, 0.000525419192854315f, 0.001153940218500793f, 0.0008602144080214202f, 0.0009746532887220383f, 0.0012180428020656109f, 0.0008771331631578505f, 0.000827631913125515f, 0.0005990088684484363f, 0.0009945629863068461f, 0.0008129228954203427f, 0.001026084995828569f, 0.001029436127282679f, 0.0008513514185324311f, 0.0010177165968343616f, 0.000732342479750514f, 0.0009873443050310016f, 0.0008978299447335303f, 0.0009593966533429921f, 0.0007942173397168517f, 0.0008114652591757476f, 0.0007796671707183123f, 0.0006943808984942734f, 0.0012416272656992078f, 0.0006308587617240846f, 0.0007423234637826681f, 0.0006507127545773983f, 0.000996233313344419f, 0.0007277479162439704f, 0.0008253586711362004f, 0.0005361679941415787f, 0.001052995678037405f, 0.0005178612773306668f, 0.0007834666757844388f, 0.000424378173192963f, 0.0010814984561875463f, 0.0005880820681340992f, 0.0007709492347203195f, 0.0011259110178798437f, 0.0007213219651021063f, 0.000583939254283905f, 0.0009609611006453633f, 0.0007059077615849674f, 0.0007147743599489331f, 0.0006346600712276995f, 0.0008378096390515566f, 0.0009369142935611308f, 0.0009670580620877445f, 0.0008838619105517864f, 0.0006697209319099784f, 0.0006601167260669172f, 0.0007367068901658058f, 0.0006391858914867043f, 0.0008816346526145935f, 0.000527712341863662f, 0.0006867337506264448f, 0.000908427988179028f, 0.0007282051374204457f, 0.0012058868305757642f, 0.0006570991827175021f, 0.0006335382931865752f, 0.0007509468705393374f, 0.0005931192426942289f, 0.001145857386291027f, 0.0009712834726087749f, 0.0008368890266865492f, 0.0007260957499966025f, 0.0006379045662470162f, 0.0010011174017563462f, 0.0006016684346832335f, 0.0010201946133747697f, 0.0007369472878053784f, 0.000655947660561651f, 0.0010491249850019813f, 0.0006098921876400709f, 0.0010447169188410044f, 0.0006762255216017365f, 0.0008076379308477044f, 0.0007447078824043274f, 0.0007129471050575376f, 0.0007019276381470263f, 0.0007898082840256393f, 0.0005655726417899132f, 0.0007519432692788541f, 0.0005326156388036907f, 0.000671186251565814f, 0.0006690274458378553f, 0.0009727951837703586f, 0.000603029562626034f, 0.0006018773419782519f, 0.0008229647064581513f, 0.0008070437470450997f, 0.0008446932770311832f, 0.0007171967881731689f, 0.0006892785895615816f, 0.0007610265165567398f, 0.0010074775200337172f, 0.0005454083438962698f, 0.0006311666802503169f, 0.0008635749109089375f, 0.0007970273145474494f, 0.0006932890973985195f, 0.0007222554413601756f, 0.0008922508568502963f, 0.0005990923382341862f, 0.0007577706128358841f, 0.0007989800069481134f, 0.000784480944275856f, 0.0009730823803693056f, 0.0007332059904001653f, 0.0005955620435997844f, 0.000646824249997735f, 0.0007391232647933066f, 0.0006677315104752779f, 0.00062981789233163f, 0.0006824972806498408f, 0.0008571572252549231f, 0.000796005129814148f, 0.0008906030561774969f, 0.0006244140095077455f, 0.0009025685722008348f, 0.0006423919112421572f, 0.0008490049513056874f, 0.0005874863127246499f, 0.0008264986681751907f, 0.0005285832448862493f, 0.0008467655861750245f, 0.0007168850861489773f, 0.000587480899412185f, 0.0007339265430346131f, 0.0008013271726667881f, 0.0007296495605260134f, 0.0004649838083423674f, 0.0007421885966323316f, 0.0008413033210672438f, 0.0007949583814479411f, 0.000919929938390851f, 0.0006225497927516699f, 0.0007224328001029789f, 0.0008038265514187515f, 0.0008101724670268595f, 0.0005538312834687531f, 0.0007904506637714803f, 0.0006583656650036573f, 0.0007690399652346969f, 0.0006238430505618453f, 0.0008545824675820768f, 0.0008268687524832785f, 0.0006573298014700413f, 0.0007195736980065703f, 0.0009064689511433244f, 0.0007891335408203304f, 0.0007866699597798288f, 0.0005701711634173989f, 0.0012401780113577843f, 0.0009015856776386499f, 0.0009050326771102846f, 0.001142226974479854f, 0.0008046298171393573f, 0.0008752989233471453f, 0.0006971597904339433f, 0.0009447138872928917f, 0.0008550301427021623f, 0.0006832875078544021f, 0.0007071084692142904f, 0.0008415185147896409f, 0.0006583757931366563f, 0.0008243625634349883f, 0.0005381180089898407f, 0.0006711263558827341f, 0.0007781092426739633f, 0.001006217789836228f, 0.0009992897976189852f, 0.0006031107041053474f, 0.0008507350576110184f, 0.0008656119462102652f, 0.0007939495262689888f, 0.000710934866219759f, 0.0007438842440024018f, 0.000898196769412607f, 0.0010443436913192272f, 0.0007263823645189404f, 0.0007857292075641453f, 0.0004509957798290998f, 0.0005130372010171413f, 0.0007090622093528509f, 0.0007376417052000761f, 0.0007199803949333727f, 0.0007423922652378678f, 0.0005538678378798068f, 0.0006557414890266955f, 0.0006708670407533646f, 0.000781199720222503f, 0.0004859360051341355f, 0.0008361890213564038f, 0.0007957168272696435f, 0.000819214794319123f, 0.0008407084969803691f, 0.0005108426557853818f, 0.0008730644476599991f, 0.0009573109564371407f, 0.0005154283135198057f, 0.0011560815619304776f, 0.0009621306089684367f, 0.0009558117599226534f, 0.0007363866316154599f, 0.0006760720862075686f, 0.0008304449147544801f, 0.000803319038823247f, 0.0007282915175892413f, 0.0011598279234021902f, 0.0009449093486182392f, 0.0007911088177934289f, 0.0010430797701701522f, 0.0005898618255741894f, 0.0007616500952281058f, 0.0008967484463937581f, 0.0007041600183583796f, 0.0007590634631924331f, 0.0004820916510652751f, 0.0010583397233858705f, 0.0009941308526322246f, 0.0008667932124808431f, 0.0008419883088208735f, 0.0006687098066322505f, 0.0004858551255892962f, 0.0007852812996134162f, 0.0008574625826440752f, 0.0005536943208426237f, 0.0008783839293755591f, 0.0005617218557745218f, 0.0006361576961353421f, 0.0007223015418276191f, 0.0010392509866505861f, 0.0006983215571381152f, 0.0007524735410697758f, 0.0007275340030901134f, 0.0007277564727701247f, 0.0007937925402075052f, 0.0009769515600055456f, 0.0006221731891855597f, 0.0008441807585768402f, 0.0006722555262967944f, 0.000692546833306551f, 0.000641676306258887f, 0.0006128133391030133f, 0.000879588711541146f, 0.0008745357627049088f, 0.0007531616720370948f, 0.0008815663168206811f, 0.0009361399570479989f, 0.0007017393363639712f, 0.0007549164583906531f, 0.000812473997939378f, 0.0009522246546112001f, 0.0005662302137352526f, 0.0005633860128000379f, 0.0008336910395883024f, 0.0008287372766062617f, 0.0006606632960028946f, 0.0006622527725994587f, 0.0007240088889375329f, 0.0006907725473865867f, 0.0009527129586786032f, 0.0005920737748965621f, 0.0008988784975372255f, 0.0005540939164347947f, 0.0009027579799294472f, 0.0006442824960686266f, 0.0009779941756278276f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004166804254055023f, 0.0041992091573774815f, 0.0043398854322731495f, 0.004283162299543619f, 0.004413176793605089f, 0.006104509346187115f, 0.005031270906329155f, 0.004034337587654591f, 0.004663161933422089f, 0.00545604107901454f, 0.006202303804457188f, 0.004224604927003384f, 0.004795059561729431f, 0.0052252463065087795f, 0.0041749789379537106f, 0.007485642097890377f, 0.006021870765835047f, 0.004830237478017807f, 0.004374584648758173f, 0.0035511543974280357f, 0.004100744146853685f, 0.004670142196118832f, 0.005611659958958626f, 0.005372843239456415f, 0.004446847829967737f, 0.003915086854249239f, 0.004943964537233114f, 0.004782290197908878f, 0.005396265536546707f, 0.006406284868717194f, 0.00446636788547039f, 0.003950160928070545f, 0.005353482440114021f, 0.003906985744833946f, 0.0039127664640545845f, 0.004412451758980751f, 0.005382310599088669f, 0.004378205630928278f, 0.003341633826494217f, 0.003964168019592762f, 0.00467865401878953f, 0.005712038837373257f, 0.0050404868088662624f, 0.005014354363083839f, 0.0036698393523693085f, 0.004457729868590832f, 0.004721621982753277f, 0.0045827473513782024f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013112135929986835f, 0.001335991662926972f, 0.0009108735248446465f, 0.0014189393259584904f, 0.0010492091532796621f, 0.0013287616893649101f, 0.0013358329888433218f, 0.001298906747251749f, 0.0011371979489922523f, 0.0009879564167931676f, 0.0012447279877960682f, 0.0011487399460747838f, 0.0012514685513451695f, 0.0011767884716391563f, 0.001637462293729186f, 0.0008458489319309592f, 0.001423860783688724f, 0.0012300725793465972f, 0.0012413846561685205f, 0.0007783779292367399f, 0.0010331961093470454f, 0.0011185442563146353f, 0.001960183959454298f, 0.0011155278189107776f, 0.0012980093015357852f, 0.0013402201002463698f, 0.0013134334003552794f, 0.001051377970725298f, 0.000921870581805706f, 0.0009775467915460467f, 0.001100265420973301f, 0.001407799543812871f, 0.001130476244725287f, 0.0014443343970924616f, 0.0015205115778371692f, 0.0010374654084444046f, 0.0008673842530697584f, 0.001203348976559937f, 0.0011154080275446177f, 0.0012491010129451752f, 0.0011142444564029574f, 0.0015772641636431217f, 0.0015694847097620368f, 0.0013551587471738458f, 0.0013885340886190534f, 0.001047195983119309f, 0.0018381279660388827f, 0.0011732458369806409f, 0.0011859559454023838f, 0.0010840079048648477f, 0.0016098545165732503f, 0.001014142413623631f, 0.0012873439118266106f, 0.0014153510564938188f, 0.0014180407160893083f, 0.0012062557507306337f, 0.0013679532567039132f, 0.0015649405540898442f, 0.0007620850228704512f, 0.0010901384521275759f, 0.0009004141320474446f, 0.0013323983876034617f, 0.0012544628698378801f, 0.000963010243140161f, 0.0008877587970346212f, 0.0011240344028919935f, 0.00134881935082376f, 0.0008874543709680438f, 0.001416147337295115f, 0.001311634317971766f, 0.0019127150299027562f, 0.0010950519936159253f, 0.000983038335107267f, 0.001574337249621749f, 0.0010131772141903639f, 0.0013145344564691186f, 0.0010462283389642835f, 0.0015994368586689234f, 0.0011026838328689337f, 0.0011103230062872171f, 0.0014872141182422638f, 0.0012332680635154247f, 0.0010324103059247136f, 0.0008751071291044354f, 0.0013508291449397802f, 0.0011996435932815075f, 0.0012273192405700684f, 0.0009880054276436567f, 0.0011084340512752533f, 0.0013336390256881714f, 0.0013987880665808916f, 0.0012535143177956343f, 0.0009613452129997313f, 0.0011032073525711894f, 0.0013334740651771426f, 0.0009453127277083695f, 0.0012350588804110885f, 0.001250782166607678f, 0.0012748755980283022f, 0.001239792793057859f, 0.001020221272483468f, 0.0010264351731166244f, 0.0014211784582585096f, 0.0012085165362805128f, 0.0011536282254382968f, 0.0013173961779102683f, 0.0009916172130033374f, 0.0010147311259061098f, 0.0010755191324278712f, 0.001798198209144175f, 0.0010707653127610683f, 0.0014017099747434258f, 0.0010853628627955914f, 0.0011620738077908754f, 0.0013551758602261543f, 0.001394484075717628f, 0.0012037104461342096f, 0.0018289608415216208f, 0.0011135205859318376f, 0.0011729142861440778f, 0.0009715511696413159f, 0.001209976035170257f, 0.0011842509265989065f, 0.001178455539047718f, 0.001614196109585464f, 0.0007742265006527305f, 0.001126495306380093f, 0.001242372440174222f, 0.001265177153982222f, 0.0013514795573428273f, 0.001061663730069995f, 0.0012972542317584157f, 0.001055970205925405f, 0.0012890519574284554f, 0.0009667863487266004f, 0.0014001406962051988f, 0.000736789486836642f, 0.0011109118349850178f, 0.0014085716102272272f, 0.0016497161705046892f, 0.0011883880943059921f, 0.001172735821455717f, 0.0010597193613648415f, 0.001052936422638595f, 0.001192025258205831f, 0.0010650615440681577f, 0.0009201843640767038f, 0.0010921836365014315f, 0.0011729105608537793f, 0.0009547696681693196f, 0.0012684422545135021f, 0.00122499605640769f, 0.0013165803393349051f, 0.0011602835729718208f, 0.0012734318152070045f, 0.001601537223905325f, 0.0010760154109448195f, 0.0013492648722603917f, 0.001165732741355896f, 0.0010788573417812586f, 0.0013441471382975578f, 0.001048362348228693f, 0.0010377434082329273f, 0.0013835309073328972f, 0.0011429296573624015f, 0.0012496383860707283f, 0.001536667114123702f, 0.0010827927617356181f, 0.0013430073158815503f, 0.001313176704570651f, 0.0011379823554307222f, 0.001337968627922237f, 0.0010361039312556386f, 0.0016686752205714583f, 0.0011242961045354605f, 0.0009268212597817183f, 0.0014105407753959298f, 0.0013336873380467296f, 0.0011558457044884562f, 0.001219781581312418f, 0.0015401473501697183f, 0.001350270351395011f, 0.0009007002227008343f, 0.0011458992958068848f, 0.000912787567358464f, 0.0008944676956161857f, 0.0012766767758876085f, 0.0016438027378171682f, 0.0012037229025736451f, 0.0013149160658940673f, 0.0015308845322579145f, 0.0010641338303685188f, 0.0011451379396021366f, 0.0014840184012427926f, 0.0011527297319844365f, 0.001141741406172514f, 0.0012050352524966002f, 0.0010832357220351696f, 0.0018171790288761258f, 0.0009168352698907256f, 0.0006573967402800918f, 0.001034351415000856f, 0.0010011914419010282f, 0.0012315158965066075f, 0.0011945738224312663f, 0.0011312372516840696f, 0.0013377818977460265f, 0.0008383782696910203f, 0.0012303941184654832f, 0.0011360821081325412f, 0.001482162857428193f, 0.00115565350279212f, 0.0010371040552854538f, 0.0010520619107410312f, 0.0012117020087316632f, 0.0011594799580052495f, 0.0012607807293534279f, 0.0010615417268127203f, 0.0011118960101157427f, 0.000873698212672025f, 0.0013031287817284465f, 0.001107103074900806f, 0.0012122435728088021f, 0.001174254110082984f, 0.0011490023462101817f, 0.0011976221576333046f, 0.001047723344527185f, 0.0016867046942934394f, 0.0011068979511037469f, 0.0010125619592145085f, 0.0007775360718369484f, 0.0015329730231314898f, 0.0007973437895998359f, 0.0014473323244601488f, 0.0011964472942054272f, 0.0011297932360321283f, 0.000851308461278677f, 0.0013052077265456319f, 0.0013383979676291347f, 0.0011388353304937482f, 0.000963481783401221f, 0.0011377196060493588f, 0.0011224199552088976f, 0.0010084285167977214f, 0.00121700472664088f, 0.0009467719355598092f, 0.0012113492703065276f, 0.0009603521320968866f, 0.0011743049835786223f, 0.0013742793817073107f, 0.0014442785177379847f, 0.0013743420131504536f, 0.0011620543664321303f, 0.0010665390873327851f, 0.0010724799940362573f, 0.0010107560083270073f, 0.001445548259653151f, 0.0016118541825562716f, 0.001114297891035676f, 0.0012853879015892744f, 0.0014692648546770215f, 0.0011650387896224856f, 0.000985329388640821f, 0.0010587621945887804f, 0.001154249650426209f, 0.0011419797083362937f, 0.0011550596682354808f, 0.0014464245177805424f, 0.0010396199068054557f, 0.001394763239659369f, 0.0012089547235518694f, 0.0014189380453899503f, 0.0012622561771422625f, 0.001086037140339613f, 0.0011613676324486732f, 0.001205533160828054f, 0.000871328404173255f, 0.0012677123304456472f, 0.0013216993538662791f, 0.0012676046462729573f, 0.0013837864389643073f, 0.0013077680487185717f, 0.0014756987802684307f, 0.001609132275916636f, 0.0017837409395724535f, 0.0015677865594625473f, 0.0013215214712545276f, 0.0010577498469501734f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 640,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008845715783536434f, 0.000940368277952075f, 0.0011066158767789602f, 0.003687179647386074f, 0.0045480187982320786f, 0.0034555387683212757f, 0.004896591883152723f, 0.004374885465949774f, 0.0039338706992566586f, 0.00415782630443573f, 0.0009588501998223364f, 0.0009945761412382126f, 0.0009404835873283446f, 0.0008520414703525603f, 0.004374993033707142f, 0.0007436193991452456f, 0.004446837119758129f, 0.0007639272953383625f, 0.003775801742449403f, 0.0048459977842867374f, 0.0031707866583019495f, 0.0038018084596842527f, 0.0008969350601546466f, 0.0007827327935956419f, 0.0009061312885023654f, 0.003293998073786497f, 0.0038629460614174604f, 0.003916745539754629f, 0.000860419764649123f, 0.0009469202486798167f, 0.003486097324639559f, 0.0036284017842262983f, 0.0031999072525650263f, 0.0011922515695914626f, 0.003943902440369129f, 0.003668721066787839f, 0.004479523282498121f, 0.005709334276616573f, 0.0010479576885700226f, 0.000966011022683233f, 0.003659086301922798f, 0.00457886653020978f, 0.002127571264281869f, 0.0008317368919961154f, 0.00392672186717391f, 0.0009138149325735867f, 0.0008977377437986434f, 0.004646405577659607f, 0.0017351660644635558f, 0.00335078127682209f, 0.003311184234917164f, 0.00238421349786222f, 0.0037050654646009207f, 0.00515114376321435f, 0.0037328151520341635f, 0.001275556511245668f, 0.0038324673660099506f, 0.0011018787045031786f, 0.0008636955753900111f, 0.0041956412605941296f, 0.001278756302781403f, 0.0008154977695085108f, 0.004686347674578428f, 0.0008112731738947332f, 0.003613788168877363f, 0.003765248227864504f, 0.0007691388600505888f, 0.004394529387354851f, 0.0009221098152920604f, 0.004357254598289728f, 0.0034987099934369326f, 0.0008321352070197463f, 0.0041558220982551575f, 0.004724051803350449f, 0.0012193191796541214f, 0.004126415122300386f, 0.004321650136262178f, 0.0008701112237758934f, 0.005133547354489565f, 0.003948344383388758f, 0.004493378568440676f, 0.0038727889768779278f, 0.001555351773276925f, 0.0030965651385486126f, 0.0009999934118241072f, 0.0032964565325528383f, 0.0009466377086937428f, 0.0010509089333936572f, 0.0009531777468509972f, 0.0009380087722092867f, 0.0009216065518558025f, 0.004511930048465729f, 0.00352804665453732f, 0.0009685500990599394f, 0.004286990035325289f, 0.0033399255480617285f, 0.0008834886248223484f, 0.0037737584207206964f, 0.004635026212781668f, 0.004013023804873228f, 0.0010058574844151735f, 0.003766091074794531f, 0.000900428683962673f, 0.002991706132888794f, 0.00524650514125824f, 0.0008053326746448874f, 0.0009423875599168241f, 0.00094494508812204f, 0.0009377122041769326f, 0.004307047929614782f, 0.0009387184400111437f, 0.003951184917241335f, 0.0010119436774402857f, 0.0035765706561505795f, 0.004557971842586994f, 0.003721041837707162f, 0.003394464962184429f, 0.003577702445909381f, 0.0010730498470366001f, 0.0008217859431169927f, 0.00475188996642828f, 0.0008491929620504379f, 0.0033689592964947224f, 0.0034700632095336914f, 0.00409122696146369f, 0.0010064590023830533f, 0.0019961849320679903f, 0.000809138233307749f, 0.003996748011559248f, 0.0009360062540508807f, 0.0007533211028203368f, 0.0036243884824216366f, 0.0008863739785738289f, 0.0041845315136015415f, 0.0008624385809525847f, 0.0033787856809794903f, 0.0012475342955440283f, 0.0008906277362257242f, 0.005624033510684967f, 0.0013124891556799412f, 0.001003305776976049f, 0.0008076583035290241f, 0.003689913544803858f, 0.004245744552463293f, 0.0035184503067284822f, 0.0010234558722004294f, 0.0034812423400580883f, 0.0009518622537143528f, 0.0012794861104339361f, 0.003258239012211561f, 0.003283166326582432f, 0.0018801749683916569f, 0.0009880668949335814f, 0.0008192093227989972f, 0.004060541745275259f, 0.004628573078662157f, 0.0029305433854460716f, 0.000917387253139168f, 0.0045624966733157635f, 0.0034763880539685488f, 0.004670354537665844f, 0.0015441367868334055f, 0.003843780839815736f, 0.0011294246651232243f, 0.003232535906136036f, 0.003722183406352997f, 0.0009998916648328304f, 0.004862460773438215f, 0.003959966823458672f, 0.0032052011229097843f, 0.0009328809101134539f, 0.004403877072036266f, 0.0010235774097964168f, 0.0008359501953236759f, 0.0038432450965046883f, 0.001149204676039517f, 0.004135680850595236f, 0.003391675418242812f, 0.0036118715070188046f, 0.0011835834011435509f, 0.00417492026463151f, 0.0008999232086353004f, 0.0012324388371780515f, 0.003811032511293888f, 0.001019506249576807f, 0.004054856486618519f, 0.0009042290039360523f, 0.004311449360102415f, 0.004338808823376894f, 0.001062392839230597f, 0.0009415994281880558f, 0.0009736591018736362f, 0.004466409329324961f, 0.0011605446925386786f, 0.0037047332152724266f, 0.003726878436282277f, 0.004232114180922508f, 0.003618332091718912f, 0.003965442068874836f, 0.003897754941135645f, 0.004248841665685177f, 0.0010082648368552327f, 0.0012896244879812002f, 0.0037717761006206274f, 0.0011384027311578393f, 0.003275339724496007f, 0.0012032674858346581f, 0.003936578053981066f, 0.0010846169898286462f, 0.0045167854987084866f, 0.0008778477204032242f, 0.0035648925695568323f, 0.0009218541090376675f, 0.0037642999086529016f, 0.004141036421060562f, 0.0037092932034283876f, 0.0008989828056655824f, 0.004307709168642759f, 0.003626700025051832f, 0.0009546407382003963f, 0.004158631432801485f, 0.0008207600330933928f, 0.0011778805637732148f, 0.0038375987205654383f, 0.0010578647488728166f, 0.0009508694056421518f, 0.0009002698352560401f, 0.000844701484311372f, 0.0007395873544737697f, 0.0010569920996204019f, 0.0032991101033985615f, 0.000946113548707217f, 0.0037627150304615498f, 0.0009048553765751421f, 0.0008933848585002124f, 0.0027183620259165764f, 0.00473098736256361f, 0.0008383874665014446f, 0.001232369220815599f, 0.0009984461357817054f, 0.001709594507701695f, 0.0009009882342070341f, 0.004288375843316317f, 0.00428752601146698f, 0.004314837045967579f, 0.0013858570018783212f, 0.0025250869803130627f, 0.00093055609613657f, 0.00433614756911993f, 0.0009125759825110435f, 0.0012973403790965676f, 0.0052974652498960495f, 0.00395489064976573f, 0.00555126927793026f, 0.0009234992321580648f, 0.003048582933843136f, 0.004384985193610191f, 0.000968107720836997f, 0.0038925064727663994f, 0.0009475919068790972f, 0.004522278439253569f, 0.0038173538632690907f, 0.003606864484027028f, 0.0011489015305414796f, 0.0009747678996063769f, 0.0036243486683815718f, 0.0045236097648739815f, 0.0008216060232371092f, 0.005011938977986574f, 0.003751306561753154f, 0.0011516890954226255f, 0.0009348193416371942f, 0.003156722988933325f, 0.0034949430264532566f, 0.005022209137678146f, 0.0008212272659875453f, 0.003829692490398884f, 0.0056519173085689545f, 0.004044907167553902f, 0.0013591224560514092f, 0.003720466513186693f, 0.0018724175170063972f, 0.001363507122732699f, 0.0009165137889795005f, 0.001060945331119001f, 0.000944622210226953f, 0.001004100195132196f, 0.004211385268718004f, 0.0011889409506693482f, 0.0022514192387461662f, 0.001125050475820899f, 0.0034440879244357347f, 0.0009730347665026784f, 0.0009014756069518626f, 0.0009868296328932047f, 0.003284132806584239f, 0.003696010448038578f, 0.004010625649243593f, 0.004657861776649952f, 0.0007838272722437978f, 0.0010303108720108867f, 0.0039232694543898106f, 0.0044272285886108875f, 0.0010385714704170823f, 0.003786514513194561f, 0.0008814366301521659f, 0.0034405470360070467f, 0.0035937235224992037f, 0.001073101069778204f, 0.004472930449992418f, 0.004839205648750067f, 0.0036225300282239914f, 0.0008692231494933367f, 0.0010619614040479064f, 0.0035038338974118233f, 0.004029752686619759f, 0.001049529411830008f, 0.0010910485871136189f, 0.0007594512426294386f, 0.003750923788174987f, 0.0024604741483926773f, 0.0011733039282262325f, 0.0031445687636733055f, 0.002794648054987192f, 0.003298661671578884f, 0.00514606898650527f, 0.0009292704053223133f, 0.0008563442388549447f, 0.003400453133508563f, 0.003713211975991726f, 0.0037517384625971317f, 0.0039039114490151405f, 0.004041932988911867f, 0.005346275400370359f, 0.0011031825561076403f, 0.0046126688830554485f, 0.0009062995668500662f, 0.003341550938785076f, 0.0008252593106590211f, 0.0037842686288058758f, 0.0008130245842039585f, 0.003918471746146679f, 0.0008230875246226788f, 0.0008011387544684112f, 0.00433754688128829f, 0.0047386339865624905f, 0.0008998666889965534f, 0.00357743538916111f, 0.003815063973888755f, 0.00377692561596632f, 0.0010687209432944655f, 0.0037326619494706392f, 0.003378827590495348f, 0.0037562663201242685f, 0.0010355226695537567f, 0.000977416173554957f, 0.0013275223318487406f, 0.000832041900139302f, 0.0008899482781998813f, 0.0014437193749472499f, 0.0008590611978434026f, 0.003179974853992462f, 0.0011683015618473291f, 0.0007393326959572732f, 0.000928762077819556f, 0.0008508999017067254f, 0.004220056347548962f, 0.004052397795021534f, 0.0009832215728238225f, 0.001228507375344634f, 0.0037409926299005747f, 0.003420136868953705f, 0.003615564201027155f, 0.0009922361932694912f, 0.000852302648127079f, 0.0037777218967676163f, 0.001454959623515606f, 0.003362634452059865f, 0.000910559727344662f, 0.0040504420176148415f, 0.0009273122996091843f, 0.0009149056859314442f, 0.0008625806076452136f, 0.0035779799800366163f, 0.003563330275937915f, 0.0009582257480360568f, 0.001256945077329874f, 0.0036750296130776405f, 0.0033191859256476164f, 0.006375537253916264f, 0.003625362878665328f, 0.004950817208737135f, 0.004148910753428936f, 0.003733237273991108f, 0.0025953259319067f, 0.0008849028963595629f, 0.0010701974388211966f, 0.0008615730912424624f, 0.004052656702697277f, 0.0033940481953322887f, 0.0008091296185739338f, 0.003710852935910225f, 0.003266981104388833f, 0.003359506605193019f, 0.005453151650726795f, 0.0009818156249821186f, 0.004041838925331831f, 0.000791973783634603f, 0.004267031792551279f, 0.0040318830870091915f, 0.00421138945966959f, 0.0032503940165042877f, 0.0012205066159367561f, 0.0010881787165999413f, 0.0007801750325597823f, 0.001160331885330379f, 0.00344802881591022f, 0.0008494901703670621f, 0.0010372292017564178f, 0.00435391440987587f, 0.0036117560230195522f, 0.0009104940691031516f, 0.0033240697812289f, 0.003899932373315096f, 0.003684047609567642f, 0.0037770397029817104f, 0.0009701504604890943f, 0.003696973668411374f, 0.0008428593282587826f, 0.005439914762973785f, 0.0041197678074240685f, 0.004018222913146019f, 0.004443195648491383f, 0.0037860863376408815f, 0.0008815754554234445f, 0.001696122228167951f, 0.0010714716045185924f, 0.005124169401824474f, 0.004083059728145599f, 0.004823130555450916f, 0.003141378052532673f, 0.003896278329193592f, 0.0008462580153718591f, 0.0037549722474068403f, 0.0037289343308657408f, 0.0009283937979489565f, 0.0037754580844193697f, 0.004458833020180464f, 0.0007821929175406694f, 0.0010668335016816854f, 0.0007966289413161576f, 0.00384122715331614f, 0.0010520933428779244f, 0.0010538703063502908f, 0.003757965052500367f, 0.003788647474721074f, 0.00497812544927001f, 0.0009452313533984125f, 0.0034585227258503437f, 0.004646716173738241f, 0.0008264508796855807f, 0.0009941242169588804f, 0.000863227469380945f, 0.0034415151458233595f, 0.0009379322873428464f, 0.0009221943910233676f, 0.0008971095667220652f, 0.0008185075712390244f, 0.0008048329036682844f, 0.0013743909075856209f, 0.0012230854481458664f, 0.0008688344387337565f, 0.0010797803988680243f, 0.0010070480639114976f, 0.004838642198592424f, 0.0042351786978542805f, 0.004379779566079378f, 0.0031331295613199472f, 0.0008779798517934978f, 0.0011295743752270937f, 0.004354048054665327f, 0.0011876604985445738f, 0.0041352189145982265f, 0.0008309765253216028f, 0.004245762247592211f, 0.0009944770717993379f, 0.003940895199775696f, 0.004385930486023426f, 0.0009549422538839281f, 0.005816530901938677f, 0.004407714121043682f, 0.0038385724183171988f, 0.004411784000694752f, 0.0034879434388130903f, 0.0008995771058835089f, 0.0011721699265763164f, 0.0041033318266272545f, 0.0030122185125947f, 0.0009338438976556063f, 0.004349948838353157f, 0.004645823501050472f, 0.0034203052055090666f, 0.0033147248905152082f, 0.0009508665534667671f, 0.0031979100313037634f, 0.0009249378344975412f, 0.003104509087279439f, 0.0010012544225901365f, 0.0007797160651534796f, 0.0008796484326012433f, 0.003198464633896947f, 0.003401425899937749f, 0.0017172698862850666f, 0.0012635044986382127f, 0.0007989589357748628f, 0.003554648021236062f, 0.004165540914982557f, 0.0008744399528950453f, 0.003338103648275137f, 0.004167677368968725f, 0.0009933514520525932f, 0.00508087407797575f, 0.0042470479384064674f, 0.0009921994060277939f, 0.003378380788490176f, 0.004534964915364981f, 0.003433936508372426f, 0.004452144727110863f, 0.0038672955706715584f, 0.0008022233378142118f, 0.0040154848247766495f, 0.003257142612710595f, 0.004076496232300997f, 0.004291479010134935f, 0.0009581209160387516f, 0.0010335047263652086f, 0.001028741942718625f, 0.0036602886393666267f, 0.0009386283345520496f, 0.003501226892694831f, 0.004758884664624929f, 0.004165800288319588f, 0.004199014510959387f, 0.005508253816515207f, 0.0010998190846294165f, 0.003588356077671051f, 0.004240348469465971f, 0.0037011788226664066f, 0.0008785296231508255f, 0.003381981747224927f, 0.0007453202269971371f, 0.004919018596410751f, 0.0007912598084658384f, 0.003051454434171319f, 0.000860514584928751f, 0.0011598309502005577f, 0.0009290719754062593f, 0.0007712909136898816f, 0.003975555766373873f, 0.0030516982078552246f, 0.003096026834100485f, 0.0009446232579648495f, 0.0037976268213242292f, 0.0040128473192453384f, 0.004721640143543482f, 0.0010356262791901827f, 0.0035054581239819527f, 0.000842837558593601f, 0.0026566777378320694f, 0.0012226009275764227f, 0.00472535565495491f, 0.0016397403087466955f, 0.0035471655428409576f, 0.003394801402464509f, 0.002996437717229128f, 0.004062694497406483f, 0.0012328475713729858f, 0.0010624626884236932f, 0.0009398338734172285f, 0.001240096753463149f, 0.004636671859771013f, 0.0037781414575874805f, 0.005278097465634346f, 0.0025774852838367224f, 0.0031950806733220816f, 0.000969632004853338f, 0.001053458428941667f, 0.004967654589563608f, 0.0009769827593117952f, 0.000802212452981621f, 0.0011336925672367215f, 0.000980906654149294f, 0.003591835731640458f, 0.0009607352549210191f, 0.0052625639364123344f, 0.003939599264413118f, 0.004027300048619509f, 0.0009100958704948425f, 0.0042549967765808105f, 0.0023065009154379368f, 0.000811066129244864f, 0.0013358134310692549f, 0.0010743470629677176f, 0.0009641120559535921f, 0.0036224876530468464f, 0.003911455627530813f, 0.003227830398827791f, 0.001054416410624981f, 0.004051284398883581f, 0.0034593604505062103f, 0.0032087648287415504f, 0.0012867222540080547f, 0.0043494924902915955f, 0.004143397323787212f, 0.001388302887789905f, 0.0011617224663496017f, 0.004512439947575331f, 0.0035957591608166695f, 0.005017357412725687f, 0.0009482608293183148f, 0.0010071889264509082f, 0.0010976798366755247f, 0.0010195676004514098f, 0.003927013836801052f, 0.0034335574600845575f, 0.0007499553612433374f, 0.004513824824243784f, 0.0009427869226783514f, 0.004933136515319347f, 0.004106295760720968f, 0.0008407473214901984f, 0.000923372688703239f, 0.0009836001554504037f, 0.00406318623572588f, 0.003611199790611863f, 0.0008174769463948905f, 0.0037071879487484694f, 0.005128682125359774f, 0.0051070088520646095f, 0.0037804623134434223f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 39,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011523384600877762f, 0.010455935262143612f, 0.008578987792134285f, 0.008662286214530468f, 0.006623196415603161f, 0.007576354779303074f, 0.0059328703209757805f, 0.009680435061454773f, 0.007494201418012381f, 0.007131106685847044f, 0.005793761927634478f, 0.007024840917438269f, 0.0072045945562422276f, 0.005890458356589079f, 0.009317920543253422f, 0.007206122390925884f, 0.009157429449260235f, 0.007612292189151049f, 0.009352149441838264f, 0.006668170914053917f, 0.0075663975439965725f, 0.009241470135748386f, 0.00895095244050026f, 0.008907276205718517f, 0.00633765384554863f, 0.006066541187465191f, 0.012517918832600117f, 0.005526664666831493f, 0.006921630818396807f, 0.007898918353021145f, 0.011340069584548473f, 0.007156479638069868f, 0.0058320052921772f, 0.006762638688087463f, 0.006782489828765392f, 0.007262962404638529f, 0.010069217532873154f, 0.007231389172375202f, 0.004947294946759939f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_scratch1_array_intq, AI_STATIC_CONST,
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
  AI_SHAPE_INIT(4, 1, 7552, 1, 1), AI_STRIDE_INIT(4, 1, 1, 7552, 7552),
  1, &conv2d_98_scratch0_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch1, AI_STATIC,
  21, 0x1,
  AI_SHAPE_INIT(4, 1, 640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 640, 640),
  1, &conv2d_98_scratch1_array, &conv2d_98_scratch1_array_intq)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_scratch0, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 2950, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2950, 2950),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
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
  nl_63_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &nl_63_output_array, &nl_63_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_64_output, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &eltwise_64_output_array, &eltwise_64_output_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_66_output, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_66_output_array, &eltwise_66_output_array_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_output, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_output_array, &conv2d_68_output_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  pool_69_output, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &pool_69_output_array, &pool_69_output_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_71_output_array, &conv2d_71_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_72_output, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &eltwise_72_output_array, &eltwise_72_output_array_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  nl_73_output, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &nl_73_output_array, &nl_73_output_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_74_output, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &eltwise_74_output_array, &eltwise_74_output_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_75_output_array, &conv2d_75_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_output, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_output_array, &conv2d_77_output_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  pool_78_output, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_78_output_array, &pool_78_output_array_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_output, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_80_output_array, &conv2d_80_output_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_81_output, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_81_output_array, &eltwise_81_output_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  nl_82_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_82_output_array, &nl_82_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_83_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_83_output_array, &eltwise_83_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_output, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_84_output_array, &conv2d_84_output_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_85_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_85_output_array, &eltwise_85_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_output, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_output_array, &conv2d_86_output_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_output, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_output_array, &conv2d_87_output_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  pool_88_output, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_88_output_array, &pool_88_output_array_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_output, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_output_array, &conv2d_89_output_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_output, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_90_output_array, &conv2d_90_output_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_91_output, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_91_output_array, &eltwise_91_output_array_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  nl_92_output, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_92_output_array, &nl_92_output_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_93_output, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_93_output_array, &eltwise_93_output_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_output, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_94_output_array, &conv2d_94_output_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_95_output, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_95_output_array, &eltwise_95_output_array_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_output, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_output_array, &conv2d_96_output_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  pool_97_output, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_97_output_array, &pool_97_output_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_output, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 640, 640),
  1, &conv2d_98_output_array, &conv2d_98_output_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_output, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  127, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  128, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conversion_102_output_array, NULL)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  139, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  140, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  141, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  142, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  143, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  144, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 2), AI_STRIDE_INIT(4, 1, 8, 16, 16),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  145, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  146, 0x1,
  AI_SHAPE_INIT(4, 2, 1, 1, 8), AI_STRIDE_INIT(4, 1, 2, 16, 16),
  1, &conv2d_6_weights_array, &conv2d_6_weights_array_intq)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  147, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  149, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  150, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 1, 8, 320, 320),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  151, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  152, 0x1,
  AI_SHAPE_INIT(4, 40, 3, 3, 1), AI_STRIDE_INIT(4, 1, 40, 40, 120),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  153, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  154, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  155, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  156, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  157, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  159, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  160, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  161, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  163, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  165, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  166, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  167, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  168, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  169, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 24), AI_STRIDE_INIT(4, 1, 48, 1152, 1152),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  171, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  172, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  177, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  178, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  179, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  180, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  181, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  182, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  183, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  188, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  189, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  190, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  191, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  192, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 64), AI_STRIDE_INIT(4, 1, 24, 1536, 1536),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  193, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  194, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  195, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  196, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  197, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  198, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  199, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  200, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 24), AI_STRIDE_INIT(4, 1, 64, 1536, 1536),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  201, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  202, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 72), AI_STRIDE_INIT(4, 1, 24, 1728, 1728),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  203, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  204, 0x1,
  AI_SHAPE_INIT(4, 72, 5, 5, 1), AI_STRIDE_INIT(4, 1, 72, 72, 360),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  205, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  206, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 18), AI_STRIDE_INIT(4, 1, 72, 1296, 1296),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  207, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  208, 0x1,
  AI_SHAPE_INIT(4, 18, 1, 1, 72), AI_STRIDE_INIT(4, 1, 18, 1296, 1296),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  209, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  210, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 24), AI_STRIDE_INIT(4, 1, 72, 1728, 1728),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  211, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  212, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  213, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_weights, AI_STATIC,
  214, 0x1,
  AI_SHAPE_INIT(4, 144, 5, 5, 1), AI_STRIDE_INIT(4, 1, 144, 144, 720),
  1, &conv2d_68_weights_array, &conv2d_68_weights_array_intq)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_bias, AI_STATIC,
  215, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_68_bias_array, NULL)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  216, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 36), AI_STRIDE_INIT(4, 1, 144, 5184, 5184),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  217, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_weights, AI_STATIC,
  218, 0x1,
  AI_SHAPE_INIT(4, 36, 1, 1, 144), AI_STRIDE_INIT(4, 1, 36, 5184, 5184),
  1, &conv2d_71_weights_array, &conv2d_71_weights_array_intq)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_bias, AI_STATIC,
  219, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_71_bias_array, NULL)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_weights, AI_STATIC,
  220, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 48), AI_STRIDE_INIT(4, 1, 144, 6912, 6912),
  1, &conv2d_75_weights_array, &conv2d_75_weights_array_intq)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_bias, AI_STATIC,
  221, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_75_bias_array, NULL)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  222, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  223, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_weights, AI_STATIC,
  224, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_77_weights_array, &conv2d_77_weights_array_intq)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_bias, AI_STATIC,
  225, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_77_bias_array, NULL)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  226, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  227, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_weights, AI_STATIC,
  228, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_80_weights_array, &conv2d_80_weights_array_intq)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_bias, AI_STATIC,
  229, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_80_bias_array, NULL)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_weights, AI_STATIC,
  230, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_84_weights_array, &conv2d_84_weights_array_intq)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_bias, AI_STATIC,
  231, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_84_bias_array, NULL)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_weights, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_86_weights_array, &conv2d_86_weights_array_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_bias, AI_STATIC,
  233, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_86_bias_array, NULL)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_weights, AI_STATIC,
  234, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_87_weights_array, &conv2d_87_weights_array_intq)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_bias, AI_STATIC,
  235, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_87_bias_array, NULL)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_weights, AI_STATIC,
  236, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_89_weights_array, &conv2d_89_weights_array_intq)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_bias, AI_STATIC,
  237, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_89_bias_array, NULL)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_weights, AI_STATIC,
  238, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_90_weights_array, &conv2d_90_weights_array_intq)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_bias, AI_STATIC,
  239, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_90_bias_array, NULL)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_weights, AI_STATIC,
  240, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_94_weights_array, &conv2d_94_weights_array_intq)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_bias, AI_STATIC,
  241, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_94_bias_array, NULL)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_weights, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_96_weights_array, &conv2d_96_weights_array_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_bias, AI_STATIC,
  243, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_96_bias_array, NULL)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_weights, AI_STATIC,
  244, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 640), AI_STRIDE_INIT(4, 1, 288, 184320, 184320),
  1, &conv2d_98_weights_array, &conv2d_98_weights_array_intq)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_bias, AI_STATIC,
  245, 0x0,
  AI_SHAPE_INIT(4, 1, 640, 1, 1), AI_STRIDE_INIT(4, 4, 4, 2560, 2560),
  1, &conv2d_98_bias_array, NULL)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_weights, AI_STATIC,
  246, 0x1,
  AI_SHAPE_INIT(4, 640, 1, 1, 39), AI_STRIDE_INIT(4, 1, 640, 24960, 24960),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  247, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

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
  conv2d_21_scratch1, AI_STATIC,
  272, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

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
  conv2d_41_scratch0, AI_STATIC,
  287, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #288 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  288, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #289 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  289, 0x0,
  AI_SHAPE_INIT(4, 1, 736, 1, 1), AI_STRIDE_INIT(4, 1, 1, 736, 736),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #290 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  290, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #291 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  291, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #292 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  292, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #293 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  293, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #294 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  294, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #295 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  295, 0x0,
  AI_SHAPE_INIT(4, 1, 496, 1, 1), AI_STRIDE_INIT(4, 1, 1, 496, 496),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #296 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  296, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #297 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  297, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #298 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  298, 0x0,
  AI_SHAPE_INIT(4, 1, 6121, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6121, 6121),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #299 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch1, AI_STATIC,
  299, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_scratch1_array, &conv2d_58_scratch1_array_intq)

/* Tensor #300 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  300, 0x0,
  AI_SHAPE_INIT(4, 1, 468, 1, 1), AI_STRIDE_INIT(4, 1, 1, 468, 468),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #301 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  301, 0x0,
  AI_SHAPE_INIT(4, 1, 792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 792, 792),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #302 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  302, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #303 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  303, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #304 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  304, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #305 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch0, AI_STATIC,
  305, 0x0,
  AI_SHAPE_INIT(4, 1, 12241, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12241, 12241),
  1, &conv2d_68_scratch0_array, NULL)

/* Tensor #306 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch1, AI_STATIC,
  306, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_scratch1_array, &conv2d_68_scratch1_array_intq)

/* Tensor #307 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  307, 0x0,
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


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1655637760, 25, -62 };
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


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -120, -116, -112, -108, -103, -99, -95, -91, -87, -83, -79, -75, -71, -67, -63, -59, -54, -50, -46, -42, -38, -34, -30, -26, -22, -18, -14, -10, -5, -1, 3, 7, 11, 15, 19, 23, 27, 31, 35, 39, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80, 84, 88, 93, 97, 101, 105, 109, 113, 117, 121, 125 };
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


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -121, -117, -113, -110, -106, -102, -99, -95, -91, -88, -84, -81, -77, -73, -70, -66, -62, -59, -55, -51, -48, -44, -40, -37, -33, -29, -26, -22, -18, -15, -11, -7, -4, 0, 4, 7, 11, 14, 18, 22, 25, 29, 33, 36, 40, 44, 47, 51, 55, 58, 62, 66, 69, 73, 77, 80, 84, 88, 91, 95, 99, 102, 106, 109, 113, 117, 120, 124, 127 };
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


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -115, -113, -112, -110, -108, -106, -104, -103, -101, -99, -97, -95, -94, -92, -90, -88, -86, -84, -83, -81, -79, -77, -75, -74, -72, -70, -68, -66, -64, -63, -61, -59, -57, -55, -54, -52, -50, -48, -46, -45, -43, -41, -39, -37, -35, -34, -32, -30, -28, -26, -25, -23, -21, -19, -17, -15, -14, -12, -10, -8, -6, -5, -3, -1, 1, 3, 4, 6, 8, 10, 12, 14, 15, 17, 19, 21, 23, 24, 26, 28, 30, 32, 34, 35, 37, 39, 41, 43, 44, 46, 48, 50, 52, 53, 55, 57, 59, 61, 63, 64, 66, 68, 70, 72, 73, 75, 77, 79, 81, 83, 84, 86, 88, 90, 92, 93, 95, 97, 99, 101, 102, 104, 106, 108, 110, 112, 113, 115, 117, 119, 121, 122, 124, 126, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_70_layer, 70,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_70_chain,
  NULL, &conv2d_71_layer, AI_STATIC, 
  .groups = 1, 
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


AI_STATIC_CONST ai_i8 nl_63_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -122, -121, -119, -118, -116, -115, -113, -112, -110, -109, -107, -106, -104, -103, -101, -100, -98, -97, -95, -94, -92, -91, -89, -88, -86, -85, -83, -82, -80, -79, -77, -76, -74, -73, -71, -70, -68, -67, -65, -64, -62, -61, -60, -58, -57, -55, -54, -52, -51, -49, -48, -46, -45, -43, -42, -40, -39, -37, -36, -34, -33, -31, -30, -28, -27, -25, -24, -22, -21, -19, -18, -16, -15, -13, -12, -10, -9, -7, -6, -4, -3, -1, 0, 2, 3, 5, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49, 51, 52, 54, 55, 57, 58, 60, 61, 63, 64, 66, 67, 69, 70, 72, 73, 74, 76, 77, 79, 80, 82, 83, 85, 86, 88, 89, 91, 92, 94, 95, 97, 98, 100, 101, 103, 104, 106, 107, 109, 110, 112, 113, 115, 116, 118, 119, 121, 122, 124, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -117, -115, -113, -111, -109, -107, -105, -103, -101, -98, -96, -94, -92, -90, -88, -86, -84, -82, -80, -77, -75, -73, -71, -69, -67, -65, -63, -61, -58, -56, -54, -52, -50, -48, -46, -44, -42, -39, -37, -35, -33, -31, -29, -27, -25, -23, -21, -18, -16, -14, -12, -10, -8, -6, -4, -2, 1, 3, 5, 7, 9, 11, 13, 15, 17, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 41, 43, 45, 47, 49, 51, 53, 55, 57, 60, 62, 64, 66, 68, 70, 72, 74, 76, 79, 81, 83, 85, 87, 89, 91, 93, 95, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 119, 121, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -123, -120, -118, -115, -113, -110, -108, -105, -103, -100, -98, -95, -93, -90, -88, -85, -83, -80, -78, -75, -73, -70, -68, -65, -63, -60, -58, -55, -53, -50, -48, -45, -43, -40, -38, -35, -33, -30, -28, -25, -23, -20, -18, -15, -13, -10, -8, -5, -3, 0, 2, 5, 7, 10, 12, 15, 17, 20, 22, 25, 27, 30, 33, 35, 38, 40, 43, 45, 48, 50, 53, 55, 58, 60, 63, 65, 68, 70, 73, 75, 78, 80, 83, 85, 88, 90, 93, 95, 98, 100, 103, 105, 108, 110, 113, 115, 118, 120, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -121, -119, -117, -115, -112, -110, -108, -106, -103, -101, -99, -97, -94, -92, -90, -88, -85, -83, -81, -79, -76, -74, -72, -70, -67, -65, -63, -61, -59, -56, -54, -52, -50, -47, -45, -43, -41, -38, -36, -34, -32, -29, -27, -25, -23, -20, -18, -16, -14, -11, -9, -7, -5, -3, 0, 2, 4, 6, 9, 11, 13, 15, 18, 20, 22, 24, 27, 29, 31, 33, 36, 38, 40, 42, 45, 47, 49, 51, 54, 56, 58, 60, 62, 65, 67, 69, 71, 74, 76, 78, 80, 83, 85, 87, 89, 92, 94, 96, 98, 101, 103, 105, 107, 110, 112, 114, 116, 118, 121, 123, 125, 127 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 475408, 1, 1),
    475408, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 475408, 1, 1),
      475408, NULL, NULL)
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
    
    conv2d_70_output_array.data = AI_PTR(g_network_activations_map[0] + 1080);
    conv2d_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1080);
    
    conv2d_71_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1116);
    conv2d_71_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1116);
    
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
    
    conv2d_98_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 7840);
    conv2d_98_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 7840);
    
    conv2d_98_output_array.data = AI_PTR(g_network_activations_map[0] + 8480);
    conv2d_98_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8480);
    
    conv2d_99_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_99_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 2952);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2952);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 156);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 156);
    
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
    conv2d_98_bias_array.data = AI_PTR(g_network_weights_map[0] + 447732);
    conv2d_98_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 447732);
    
    conv2d_99_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_weights_array.data = AI_PTR(g_network_weights_map[0] + 450292);
    conv2d_99_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 450292);
    
    conv2d_99_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 475252);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 475252);
    
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
      
      .n_macc            = 19966254,
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
      
      .n_macc            = 19966254,
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

=======
/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Jul 31 13:40:01 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "7011cbf923e757d932fa8def80cb258e"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Thu Jul 31 13:40:01 2025"

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
  NULL, NULL, 7552, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2950, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
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
  nl_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  pool_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  nl_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  pool_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  nl_82_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_83_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_85_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  pool_88_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_91_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  nl_92_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_93_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_95_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  pool_97_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 39, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 360, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1800, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 18, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 36, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6912, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 184320, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 640, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24960, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
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
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
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
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#288 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#289 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 736, AI_STATIC)
/* Array#290 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#291 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#292 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#293 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#294 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#295 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 496, AI_STATIC)
/* Array#296 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#297 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#298 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6121, AI_STATIC)
/* Array#299 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#300 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 468, AI_STATIC)
/* Array#301 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 792, AI_STATIC)
/* Array#302 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#303 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#304 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#305 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12241, AI_STATIC)
/* Array#306 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#307 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 936, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.010297412984073162f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003379926085472107f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003379926085472107f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014881244860589504f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10237739235162735f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.08298670500516891f),
    AI_PACK_INTQ_ZP(-5)))

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
    AI_PACK_INTQ_SCALE(0.0747445821762085f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10233410447835922f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823290441185236f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823290441185236f),
    AI_PACK_INTQ_ZP(-45)))

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
    AI_PACK_INTQ_SCALE(0.022410213947296143f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09511684626340866f),
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
    AI_PACK_INTQ_SCALE(0.022752808406949043f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008787577040493488f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008787577040493488f),
    AI_PACK_INTQ_ZP(13)))

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
    AI_PACK_INTQ_SCALE(0.08521316945552826f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.15863972902297974f),
    AI_PACK_INTQ_ZP(-8)))

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
    AI_PACK_INTQ_SCALE(0.022524185478687286f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009835081174969673f),
    AI_PACK_INTQ_ZP(25)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009835081174969673f),
    AI_PACK_INTQ_ZP(25)))

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
    AI_PACK_INTQ_SCALE(0.07763900607824326f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.18304896354675293f),
    AI_PACK_INTQ_ZP(-7)))

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
    AI_PACK_INTQ_SCALE(0.0212908573448658f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008264691568911076f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008264691568911076f),
    AI_PACK_INTQ_ZP(6)))

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
    AI_PACK_INTQ_SCALE(0.07754813134670258f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.21332310140132904f),
    AI_PACK_INTQ_ZP(-2)))

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
    AI_PACK_INTQ_SCALE(0.02028634585440159f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00583858834579587f),
    AI_PACK_INTQ_ZP(-44)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00583858834579587f),
    AI_PACK_INTQ_ZP(-44)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07975432276725769f),
    AI_PACK_INTQ_ZP(19)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.21831947565078735f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02045798860490322f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007116919383406639f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007116919383406639f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07020029425621033f),
    AI_PACK_INTQ_ZP(1)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014327440410852432f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014327440410852432f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_82_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_83_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06743152439594269f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10337312519550323f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_88_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016014469787478447f),
    AI_PACK_INTQ_ZP(65)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016014469787478447f),
    AI_PACK_INTQ_ZP(65)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_92_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_93_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08096040040254593f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1311040222644806f),
    AI_PACK_INTQ_ZP(11)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_97_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01349751278758049f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.3854832053184509f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_101_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016014469787478447f),
    AI_PACK_INTQ_ZP(65)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014327440410852432f),
    AI_PACK_INTQ_ZP(57)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007116919383406639f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00583858834579587f),
    AI_PACK_INTQ_ZP(-44)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008264691568911076f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009835081174969673f),
    AI_PACK_INTQ_ZP(25)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008787577040493488f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823290441185236f),
    AI_PACK_INTQ_ZP(-45)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003379926085472107f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011917712166905403f, 0.008936252444982529f, 0.011784803122282028f, 0.008215852081775665f, 0.007558095268905163f, 0.009978892281651497f, 0.009047390893101692f, 0.009387989528477192f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005894329398870468f, 0.006861890200525522f, 0.0030582519248127937f, 0.003667904296889901f, 0.007081217598170042f, 0.0025945911183953285f, 0.006317698396742344f, 0.005073685199022293f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002314754296094179f, 0.001983923837542534f, 0.00554061820730567f, 0.010271274484694004f, 0.006788216531276703f, 0.017535753548145294f, 0.004829642828553915f, 0.012606368400156498f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004733733367174864f, 0.004445336759090424f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010131553281098604f, 0.0008611192461103201f, 0.0010490642162039876f, 0.001364435418508947f, 0.0011007155990228057f, 0.0005418547661975026f, 0.0008554196683689952f, 0.0008998772245831788f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022176140919327736f, 0.018908094614744186f, 0.021911688148975372f, 0.01572250761091709f, 0.016755621880292892f, 0.029358871281147003f, 0.014769305475056171f, 0.022637255489826202f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007166305556893349f, 0.006419463083148003f, 0.005075371824204922f, 0.007934088818728924f, 0.0037567110266536474f, 0.003630151506513357f, 0.0020443531684577465f, 0.0059934575110673904f, 0.004681032616645098f, 0.0027286114636808634f, 0.003210148075595498f, 0.002726845210418105f, 0.002982266014441848f, 0.004732506815344095f, 0.0041565545834600925f, 0.0033237366005778313f, 0.00499166501685977f, 0.008138466626405716f, 0.003633085172623396f, 0.012256563641130924f, 0.005040761549025774f, 0.005886937025934458f, 0.005073103122413158f, 0.007018595468252897f, 0.005218520760536194f, 0.0030689046252518892f, 0.0047560203820466995f, 0.00524822948500514f, 0.005742479115724564f, 0.004679778125137091f, 0.0026289133820682764f, 0.007163590751588345f, 0.002336900681257248f, 0.0032359203323721886f, 0.003068715101107955f, 0.0062452564015984535f, 0.0020013705361634493f, 0.0034468036610633135f, 0.0029724789783358574f, 0.0048204706981778145f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006153921131044626f, 0.009878377430140972f, 0.018514307215809822f, 0.0030268568079918623f, 0.009597149677574635f, 0.005341737065464258f, 0.006440761499106884f, 0.005724549759179354f, 0.002957073040306568f, 0.00527997175231576f, 0.006755765061825514f, 0.00806448608636856f, 0.0075380997732281685f, 0.004897498991340399f, 0.0049415635876357555f, 0.01815355196595192f, 0.01181632000952959f, 0.0032627414911985397f, 0.005388314835727215f, 0.007725920528173447f, 0.011894123628735542f, 0.005942709743976593f, 0.00744184385985136f, 0.012022404931485653f, 0.014441704377532005f, 0.008072160184383392f, 0.004270386882126331f, 0.004569553304463625f, 0.0074983155354857445f, 0.0045182788744568825f, 0.0076475427486002445f, 0.004736528731882572f, 0.010693294927477837f, 0.00802151020616293f, 0.010163327679038048f, 0.0038100387901067734f, 0.007285411935299635f, 0.004839633591473103f, 0.018326055258512497f, 0.004042834509164095f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003889841493219137f, 0.003432690864428878f, 0.004446555860340595f, 0.004657655488699675f, 0.005274652503430843f, 0.0032433730084449053f, 0.0038452818989753723f, 0.0035691787488758564f, 0.004258166067302227f, 0.0047304024919867516f, 0.0031657209619879723f, 0.0038097144570201635f, 0.0038950168527662754f, 0.002993963425979018f, 0.0036986880004405975f, 0.003565452992916107f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0034913986455649137f, 0.005105964373797178f, 0.0020730237010866404f, 0.0025461805053055286f, 0.0028019589371979237f, 0.007300893310457468f, 0.0034924016799777746f, 0.0032158480025827885f, 0.003105160081759095f, 0.0024438921827822924f, 0.0025309291668236256f, 0.003947858698666096f, 0.0015441523864865303f, 0.003332293126732111f, 0.002119318814948201f, 0.0025528965052217245f, 0.002869431860744953f, 0.003165469504892826f, 0.007139190100133419f, 0.003465749556198716f, 0.0012516103452071548f, 0.0019344917964190245f, 0.0025620018132030964f, 0.003679527435451746f, 0.002272126730531454f, 0.002595980651676655f, 0.0028233693446964025f, 0.007178544998168945f, 0.0018565866630524397f, 0.003972931765019894f, 0.003441621083766222f, 0.006128780543804169f, 0.004051779396831989f, 0.0025076617021113634f, 0.0038233662489801645f, 0.002987284678965807f, 0.003990135621279478f, 0.0025154827162623405f, 0.0019651225302368402f, 0.003102595219388604f, 0.001926980447024107f, 0.00668204203248024f, 0.002126501640304923f, 0.00269418116658926f, 0.0020809718407690525f, 0.0032363831996917725f, 0.0045333607122302055f, 0.003104645758867264f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006516611203551292f, 0.0056828903034329414f, 0.008785122074186802f, 0.011365837417542934f, 0.0038083987310528755f, 0.017711056396365166f, 0.00957409106194973f, 0.021571647375822067f, 0.004091040231287479f, 0.014835850335657597f, 0.005740809254348278f, 0.012349875643849373f, 0.02739325724542141f, 0.004980499390512705f, 0.0054868231527507305f, 0.01022408064454794f, 0.006436652038246393f, 0.013187412172555923f, 0.011753751896321774f, 0.006232949905097485f, 0.02244279906153679f, 0.006320199463516474f, 0.012094518169760704f, 0.014190703630447388f, 0.009534514509141445f, 0.018627561628818512f, 0.02378609962761402f, 0.01125831063836813f, 0.02430777996778488f, 0.011813221499323845f, 0.005558867938816547f, 0.009468017145991325f, 0.005171236116439104f, 0.007723955437541008f, 0.005174799356609583f, 0.013040919788181782f, 0.01890263333916664f, 0.007030724082142115f, 0.02101975493133068f, 0.004239084664732218f, 0.010707158595323563f, 0.01869567483663559f, 0.006936564110219479f, 0.008186335675418377f, 0.011398809030652046f, 0.016616875305771828f, 0.004389092791825533f, 0.02236619032919407f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0028706213925033808f, 0.0025878448504954576f, 0.0025385001208633184f, 0.0033071599900722504f, 0.0027753030881285667f, 0.002501801121979952f, 0.0029456804040819407f, 0.0018317013746127486f, 0.0026383877266198397f, 0.003319863695651293f, 0.0022798858117312193f, 0.0022431763354688883f, 0.00303154019638896f, 0.0019341459264978766f, 0.002449669875204563f, 0.0029808625113219023f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030585690401494503f, 0.0007283161976374686f, 0.0024029759224504232f, 0.002136190887540579f, 0.002061062026768923f, 0.0015193746658042073f, 0.002450397936627269f, 0.0029105241410434246f, 0.003457167884334922f, 0.00274017290212214f, 0.002480994677171111f, 0.0015345922438427806f, 0.0023895413614809513f, 0.0026160022243857384f, 0.0016089039854705334f, 0.0022263273131102324f, 0.0019749754574149847f, 0.0030862565618008375f, 0.0018786662258207798f, 0.0018008744809776545f, 0.0018315273337066174f, 0.0012502958998084068f, 0.0016873206477612257f, 0.0014467452419921756f, 0.0017665649065747857f, 0.0021055592224001884f, 0.002100908663123846f, 0.0018483975436538458f, 0.0024907574988901615f, 0.001951924292370677f, 0.002240023808553815f, 0.0033911350183188915f, 0.0022520001512020826f, 0.0016950314166024327f, 0.003037791233509779f, 0.0036260373890399933f, 0.0012632127618417144f, 0.0021326097194105387f, 0.001520270947366953f, 0.002518733497709036f, 0.0027159880846738815f, 0.0028623754624277353f, 0.002870817668735981f, 0.001627994584850967f, 0.002486933022737503f, 0.0028444351628422737f, 0.001848486135713756f, 0.0015339548699557781f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00411997502669692f, 0.013624518178403378f, 0.003615846624597907f, 0.003373741405084729f, 0.004769731778651476f, 0.006637490354478359f, 0.00424426794052124f, 0.003540038364008069f, 0.002055284334346652f, 0.0025725853629410267f, 0.005382009316235781f, 0.002865100745111704f, 0.003619592869654298f, 0.004329804331064224f, 0.005664256401360035f, 0.00214253063313663f, 0.00473387073725462f, 0.001465712208300829f, 0.0052507491782307625f, 0.004677888937294483f, 0.0041389078833162785f, 0.0036489779595285654f, 0.00285194325260818f, 0.0057011558674275875f, 0.0035845674574375153f, 0.0017513033235445619f, 0.004292640369385481f, 0.011032870970666409f, 0.002926826011389494f, 0.007189513184130192f, 0.0032907724380493164f, 0.0018108850345015526f, 0.0042993249371647835f, 0.004900922998785973f, 0.0021251298021525145f, 0.002252032980322838f, 0.003726955968886614f, 0.003958662040531635f, 0.004022256936877966f, 0.003691974561661482f, 0.003322601318359375f, 0.0036940020509064198f, 0.003222391242161393f, 0.003566007362678647f, 0.0031825322657823563f, 0.0030342224054038525f, 0.005071911960840225f, 0.0059038749895989895f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005862520541995764f, 0.004150093533098698f, 0.004234627820551395f, 0.0029502164106816053f, 0.003683809656649828f, 0.004379596561193466f, 0.0024026113096624613f, 0.003267997410148382f, 0.0045837536454200745f, 0.0034331893548369408f, 0.0030125665944069624f, 0.004046387504786253f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0005890982574783266f, 0.0008006428251974285f, 0.0007572022150270641f, 0.0006142296479083598f, 0.0005757365142926574f, 0.0006902145687490702f, 0.0008135662646964192f, 0.000904344953596592f, 0.0011716247536242008f, 0.0010413089767098427f, 0.0006702250684611499f, 0.0012277535861358047f, 0.0008016294450499117f, 0.0005811435403302312f, 0.0008763820515014231f, 0.0011124773882329464f, 0.0010404411004856229f, 0.0010600904934108257f, 0.0007780757150612772f, 0.0006610178970731795f, 0.0005867294385097921f, 0.0009189581032842398f, 0.0009893856476992369f, 0.0009387569152750075f, 0.0010225424775853753f, 0.0009601481724530458f, 0.0013775372644886374f, 0.0004722289741039276f, 0.000518471235409379f, 0.0007634689682163298f, 0.0007714903331361711f, 0.0007907483377493918f, 0.0007855076109990478f, 0.0006901478045620024f, 0.0012712895404547453f, 0.0007905168458819389f, 0.0007617708761245012f, 0.0008223010809160769f, 0.0005016772192902863f, 0.0006516635767184198f, 0.0005230560200288892f, 0.000887206057086587f, 0.0006245498079806566f, 0.0005802025552839041f, 0.0005589361535385251f, 0.000643741397652775f, 0.00042708366527222097f, 0.0005641589523293078f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004804253578186035f, 0.0068902624770998955f, 0.008645093999803066f, 0.01096439640969038f, 0.007709069177508354f, 0.00827685184776783f, 0.006352492608129978f, 0.006172118708491325f, 0.008527509868144989f, 0.008533279411494732f, 0.007862594909965992f, 0.007312058936804533f, 0.0073118978179991245f, 0.007265051361173391f, 0.008362442255020142f, 0.00792870856821537f, 0.006727369502186775f, 0.007946609519422054f, 0.00892186164855957f, 0.006163643207401037f, 0.007521120365709066f, 0.008092968724668026f, 0.0070351907052099705f, 0.007566042244434357f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003609234467148781f, 0.002642938168719411f, 0.0024638306349515915f, 0.0031651495955884457f, 0.0017507423181086779f, 0.0018103586044162512f, 0.0016223868587985635f, 0.0014947536401450634f, 0.0021419047843664885f, 0.0015383282443508506f, 0.0014725391520187259f, 0.002127692336216569f, 0.0027360040694475174f, 0.0022003301419317722f, 0.002353054005652666f, 0.001573168090544641f, 0.0022969222627580166f, 0.0017040151869878173f, 0.0035189175978302956f, 0.0024208552204072475f, 0.003150793258100748f, 0.002003749366849661f, 0.0009265401749871671f, 0.002146306913346052f, 0.0028685051947832108f, 0.0025118866469711065f, 0.0029355366714298725f, 0.0010075903264805675f, 0.003436294849961996f, 0.0021993897389620543f, 0.0025227819569408894f, 0.001874409499578178f, 0.0025629333686083555f, 0.0015584949869662523f, 0.001605352503247559f, 0.001108065014705062f, 0.0017803567461669445f, 0.002316862577572465f, 0.0029288954101502895f, 0.0024126546923071146f, 0.001416230807080865f, 0.0014207027852535248f, 0.0008440511301159859f, 0.004059892147779465f, 0.0026851261500269175f, 0.0017828871496021748f, 0.0023302941117435694f, 0.0024171832483261824f, 0.002237939741462469f, 0.0019512948347255588f, 0.002511844504624605f, 0.0018756029894575477f, 0.001734015066176653f, 0.001879276940599084f, 0.0029627650510519743f, 0.0032881603110581636f, 0.002299585146829486f, 0.0021716826595366f, 0.001086425269022584f, 0.0012106321519240737f, 0.0024758982472121716f, 0.002644891384989023f, 0.0026015143375843763f, 0.0034218234941363335f, 0.0020005719270557165f, 0.0015347135486081243f, 0.0012316592037677765f, 0.0013648092281073332f, 0.0015847129980102181f, 0.0017012041062116623f, 0.001478888327255845f, 0.0010846724035218358f, 0.0018144447822123766f, 0.0025844713672995567f, 0.0017106301384046674f, 0.001455193618312478f, 0.00293917628005147f, 0.002330998657271266f, 0.0020220342557877302f, 0.0022422410547733307f, 0.0017541726119816303f, 0.001808373024687171f, 0.0016092263394966722f, 0.0014414772158488631f, 0.002671723486855626f, 0.0017739494796842337f, 0.0013253045035526156f, 0.002028574701398611f, 0.0014182078884914517f, 0.0019821154419332743f, 0.0018257469637319446f, 0.002426097635179758f, 0.002792408922687173f, 0.0017905343556776643f, 0.001671894104219973f, 0.002696349285542965f, 0.0022187449503690004f, 0.002543858950957656f, 0.002078021876513958f, 0.002434385009109974f, 0.0018956721760332584f, 0.002095241565257311f, 0.002809448866173625f, 0.001957056811079383f, 0.0036316965706646442f, 0.0018218002514913678f, 0.0013507765252143145f, 0.00326486025005579f, 0.0012711043236777186f, 0.0012761473190039396f, 0.0020896580535918474f, 0.001328015816397965f, 0.001429891330190003f, 0.001854448695667088f, 0.0014568348415195942f, 0.0016276886453852057f, 0.001993132522329688f, 0.0019537874031811953f, 0.0017066269647330046f, 0.001254894188605249f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00669941445812583f, 0.010001269169151783f, 0.00988305639475584f, 0.01067486684769392f, 0.016477905213832855f, 0.010339737869799137f, 0.01404544711112976f, 0.014345471747219563f, 0.003896438516676426f, 0.010372872464358807f, 0.00922487024217844f, 0.010003278963267803f, 0.0017774277366697788f, 0.00969436950981617f, 0.004730028100311756f, 0.004233242478221655f, 0.007935726083815098f, 0.010212589986622334f, 0.012011689133942127f, 0.0031166281551122665f, 0.00373271806165576f, 0.003990487661212683f, 0.005977338645607233f, 0.004130669869482517f, 0.005557081662118435f, 0.002796234330162406f, 0.0025264155119657516f, 0.004839263390749693f, 0.003056479850783944f, 0.0022292493376880884f, 0.002571334596723318f, 0.004516092129051685f, 0.006269156001508236f, 0.0028227188158780336f, 0.006831432227045298f, 0.00775626115500927f, 0.012148716486990452f, 0.002492469036951661f, 0.015470676124095917f, 0.002556559629738331f, 0.004198755603283644f, 0.007079068571329117f, 0.031873591244220734f, 0.010380802676081657f, 0.007891775108873844f, 0.012300791218876839f, 0.0026899781078100204f, 0.012810682877898216f, 0.00211297906935215f, 0.014483981765806675f, 0.012202818877995014f, 0.005347259342670441f, 0.00469225412234664f, 0.005611827131360769f, 0.0024337435606867075f, 0.003128969809040427f, 0.004469828214496374f, 0.002316652564331889f, 0.014428334310650826f, 0.012464614585042f, 0.003751245094463229f, 0.007441355846822262f, 0.005621061194688082f, 0.0043595400638878345f, 0.005414828658103943f, 0.022547494620084763f, 0.009321114048361778f, 0.001691498444415629f, 0.0036429576575756073f, 0.0030078599229454994f, 0.007637723349034786f, 0.027634093537926674f, 0.006265988573431969f, 0.008157632313668728f, 0.006740942597389221f, 0.009892301633954048f, 0.004569477867335081f, 0.005005533341318369f, 0.016486775130033493f, 0.0018275255570188165f, 0.016866957768797874f, 0.020270338281989098f, 0.011469324119389057f, 0.016008252277970314f, 0.009824421256780624f, 0.006520404946058989f, 0.007783769629895687f, 0.012473017908632755f, 0.005277146119624376f, 0.006351080257445574f, 0.00644600298255682f, 0.009365443140268326f, 0.010373932309448719f, 0.015792280435562134f, 0.014047717675566673f, 0.002596443286165595f, 0.012119727209210396f, 0.0034924340434372425f, 0.005078871268779039f, 0.0030369770247489214f, 0.0029116778168827295f, 0.004110358189791441f, 0.012150748632848263f, 0.012448180466890335f, 0.008712324313819408f, 0.009208816103637218f, 0.007568361237645149f, 0.009162168949842453f, 0.011005801148712635f, 0.008707892149686813f, 0.006084775552153587f, 0.012729459442198277f, 0.002278160071000457f, 0.0037846427876502275f, 0.012177188880741596f, 0.019381610676646233f, 0.004464849829673767f, 0.004021492786705494f, 0.007508978247642517f, 0.003881419776007533f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003958171233534813f, 0.003303518984466791f, 0.0017516633961349726f, 0.005797870457172394f, 0.0018664691597223282f, 0.00507312873378396f, 0.003906261641532183f, 0.0031443540938198566f, 0.004117574542760849f, 0.006212448235601187f, 0.005404976662248373f, 0.003526037558913231f, 0.0041620261035859585f, 0.004490816965699196f, 0.003437461331486702f, 0.002137475647032261f, 0.005983344744890928f, 0.004479294177144766f, 0.0021961007732897997f, 0.0036955808755010366f, 0.004278984386473894f, 0.004180172458291054f, 0.00371198495849967f, 0.00632636109367013f, 0.004494388587772846f, 0.0019736033864319324f, 0.004560735076665878f, 0.003402008907869458f, 0.002044301712885499f, 0.004095471929758787f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010135796619579196f, 0.0006832793005742133f, 0.0006949095986783504f, 0.0005984732997603714f, 0.0008825104450806975f, 0.000598092854488641f, 0.00049061537720263f, 0.0005628627841360867f, 0.0006245597032830119f, 0.0008656831341795623f, 0.0010173609480261803f, 0.0006083920015953481f, 0.00044009677367284894f, 0.0007377995643764734f, 0.0007454209844581783f, 0.0007175634382292628f, 0.0007633327040821314f, 0.000615374359767884f, 0.000874784542247653f, 0.0007764807087369263f, 0.0005938945105299354f, 0.00091914227232337f, 0.0006465609767474234f, 0.0008036320214159787f, 0.0007774268742650747f, 0.000928180874325335f, 0.0007834128919057548f, 0.0004767389327753335f, 0.0006186445243656635f, 0.0006856502150185406f, 0.0005551133654080331f, 0.0008791282889433205f, 0.0006826090393587947f, 0.0007577399373985827f, 0.0007762707537040114f, 0.0008485174621455371f, 0.0006009431090205908f, 0.0007263575098477304f, 0.0005761051434092224f, 0.0005744917434640229f, 0.0006918327999301255f, 0.000744794262573123f, 0.0008712781127542257f, 0.0007154965423978865f, 0.0006759184179827571f, 0.0006037797429598868f, 0.0007642288110218942f, 0.0008146538748405874f, 0.0006406394531950355f, 0.0005204980261623859f, 0.0012176427990198135f, 0.0009407555917277932f, 0.0006107435328885913f, 0.0007078133639879525f, 0.0005251458496786654f, 0.0007456749444827437f, 0.0006724015693180263f, 0.0006236341432668269f, 0.0006359108374454081f, 0.0008884084527380764f, 0.0009636007016524673f, 0.0004436324234120548f, 0.0005220256862230599f, 0.0005767586990259588f, 0.0005668749217875302f, 0.0007086251862347126f, 0.0007537879864685237f, 0.0006471658707596362f, 0.0005266806692816317f, 0.000715562840923667f, 0.000808670767582953f, 0.0004985852865502238f, 0.0008198198047466576f, 0.000623472617007792f, 0.0006807154859416187f, 0.0006009264034219086f, 0.0006174582522362471f, 0.0006729750894010067f, 0.0007980344817042351f, 0.0005983719020150602f, 0.0006439702701754868f, 0.0008937527891248465f, 0.0007218130631372333f, 0.0005441386019811034f, 0.00045325132668949664f, 0.0008134290110319853f, 0.0006143103237263858f, 0.0009639968629926443f, 0.0008792498847469687f, 0.000547512318007648f, 0.00048371130833402276f, 0.0007256689132191241f, 0.0007178048836067319f, 0.0006916690617799759f, 0.0010020352201536298f, 0.000718116236384958f, 0.0007682187715545297f, 0.0008568655466660857f, 0.0006620913627557456f, 0.000655752548482269f, 0.000604770437348634f, 0.0004029744886793196f, 0.0007203785353340209f, 0.0007234194781631231f, 0.0006221784860827029f, 0.0005530769703909755f, 0.0006130084511823952f, 0.0005757142207585275f, 0.0008737455355003476f, 0.000912090006750077f, 0.0006443471065722406f, 0.0007177981897257268f, 0.0010401317849755287f, 0.0005744571099057794f, 0.0004031857242807746f, 0.0006845336174592376f, 0.0010341476881876588f, 0.0006861994042992592f, 0.00045078678522258997f, 0.0008989547495730221f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0038098047953099012f, 0.002872234443202615f, 0.004781913943588734f, 0.0030117928981781006f, 0.0040491679683327675f, 0.003042470198124647f, 0.002578042447566986f, 0.0030100946314632893f, 0.0033207417000085115f, 0.004676710348576307f, 0.0024987775832414627f, 0.004056091420352459f, 0.0028968402184545994f, 0.004810342099517584f, 0.003451673313975334f, 0.003128905314952135f, 0.004242403898388147f, 0.0032812373246997595f, 0.003701879410073161f, 0.0029535219073295593f, 0.004258421715348959f, 0.0031632836908102036f, 0.0035811015404760838f, 0.005093746818602085f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0026585583109408617f, 0.002440786687657237f, 0.0017270712414756417f, 0.002057869452983141f, 0.0013885680818930268f, 0.002015099162235856f, 0.0014931861078366637f, 0.001585047459229827f, 0.0018303460674360394f, 0.002582777990028262f, 0.00131096167024225f, 0.0013536873739212751f, 0.001569849904626608f, 0.001387401600368321f, 0.001589451334439218f, 0.0017894069897010922f, 0.0014984169974923134f, 0.002013259567320347f, 0.001680877641774714f, 0.0012094053672626615f, 0.0016620045062154531f, 0.001960806315764785f, 0.00204394175671041f, 0.0008200902957469225f, 0.00150729576125741f, 0.0011041329707950354f, 0.0007326581398956478f, 0.0015356451040133834f, 0.0017339857295155525f, 0.0012403763830661774f, 0.0024482673034071922f, 0.0014701648615300655f, 0.0015662491787225008f, 0.001295089372433722f, 0.0020681831520050764f, 0.0010085495887324214f, 0.0016497957985848188f, 0.0014241470489650965f, 0.001393553102388978f, 0.0009728281875140965f, 0.0022839040029793978f, 0.001986686373129487f, 0.0019764176104217768f, 0.0016351909143850207f, 0.00211328431032598f, 0.0010477303294464946f, 0.0021966579370200634f, 0.0015532656107097864f, 0.0013354371767491102f, 0.0007368646911345422f, 0.002073172712698579f, 0.0015675348695367575f, 0.0015543673653155565f, 0.0012281802482903004f, 0.0012694090837612748f, 0.002014679368585348f, 0.002878983737900853f, 0.0013981246156618f, 0.0011697604786604643f, 0.001740634674206376f, 0.0016898990143090487f, 0.0013256584061309695f, 0.0013355963164940476f, 0.0013778313295915723f, 0.0015956086572259665f, 0.0015591636765748262f, 0.00146671780385077f, 0.0008895560167729855f, 0.00100492883939296f, 0.0010344809852540493f, 0.001499276258982718f, 0.001240150653757155f, 0.0015040632570162416f, 0.0016830605454742908f, 0.001625867560505867f, 0.0015673221787437797f, 0.0010661118431016803f, 0.0016793746035546064f, 0.0008006239077076316f, 0.001209630398079753f, 0.0017298824386671185f, 0.002004106529057026f, 0.001438491279259324f, 0.0011126463068649173f, 0.0023056964855641127f, 0.001649758662097156f, 0.0022337213158607483f, 0.0015575995203107595f, 0.001147121423855424f, 0.0016338278073817492f, 0.0010844622738659382f, 0.0010971665615215898f, 0.0013597450451925397f, 0.001273100497201085f, 0.002059520687907934f, 0.0017142395954579115f, 0.001965726027265191f, 0.0016455648001283407f, 0.0013710202183574438f, 0.0012125406647101045f, 0.0015362013364210725f, 0.0021441809367388487f, 0.00102093571331352f, 0.0017152229556813836f, 0.0013092565350234509f, 0.0009307757136411965f, 0.0011016869684681296f, 0.0013395579298958182f, 0.0009307157597504556f, 0.0010997942881658673f, 0.001372087630443275f, 0.0012060508597642183f, 0.0014324636431410909f, 0.0017143571749329567f, 0.0011982086580246687f, 0.0009631894063204527f, 0.0013887766981497407f, 0.0025675916112959385f, 0.0015053375391289592f, 0.001402964349836111f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032361827325075865f, 0.003425119211897254f, 0.010034551844000816f, 0.002510257065296173f, 0.004767602309584618f, 0.010107945650815964f, 0.01669231615960598f, 0.00588981481269002f, 0.002373866504058242f, 0.013123833574354649f, 0.00544882332906127f, 0.006748615764081478f, 0.0033472811337560415f, 0.003188367700204253f, 0.004360273014754057f, 0.0031024122145026922f, 0.002276106970384717f, 0.005492702592164278f, 0.0019042365020141006f, 0.0030752234160900116f, 0.006130419205874205f, 0.0029363997746258974f, 0.003737726015970111f, 0.006291968747973442f, 0.0032232843805104494f, 0.007767297327518463f, 0.0042728944681584835f, 0.0038588005118072033f, 0.0037262127734720707f, 0.009689868427813053f, 0.0029861486982554197f, 0.010968039743602276f, 0.006450309418141842f, 0.004246579948812723f, 0.003391355974599719f, 0.01637110486626625f, 0.004279814660549164f, 0.00803906936198473f, 0.0053437240421772f, 0.003921448718756437f, 0.0017846602713689208f, 0.004353754688054323f, 0.0026582982391119003f, 0.002830870682373643f, 0.014675718732178211f, 0.005577059928327799f, 0.006988417357206345f, 0.005394229665398598f, 0.0041952296160161495f, 0.009759263135492802f, 0.005443864036351442f, 0.00489378534257412f, 0.005447292234748602f, 0.0050364527851343155f, 0.0044359262101352215f, 0.002435783389955759f, 0.005872846581041813f, 0.006503521930426359f, 0.004743355792015791f, 0.003611413761973381f, 0.003099659224972129f, 0.010687083937227726f, 0.004909107927232981f, 0.0034993523731827736f, 0.0040274858474731445f, 0.0034922834020107985f, 0.0027641025371849537f, 0.024458209052681923f, 0.0033447255846112967f, 0.028451692312955856f, 0.006791696883738041f, 0.004416666924953461f, 0.008517442271113396f, 0.015841539949178696f, 0.00254893209785223f, 0.006501327734440565f, 0.011363732628524303f, 0.0062294392846524715f, 0.018226943910121918f, 0.012027914635837078f, 0.0030745428521186113f, 0.004802748095244169f, 0.0025282821152359247f, 0.0063096615485847f, 0.00396706024184823f, 0.009378189221024513f, 0.001930933096446097f, 0.00432223454117775f, 0.0024596506264060736f, 0.0015811505727469921f, 0.011169989593327045f, 0.003095590975135565f, 0.00494745746254921f, 0.003719993168488145f, 0.005976947024464607f, 0.005119751673191786f, 0.008907817304134369f, 0.002241601701825857f, 0.003805759595707059f, 0.002238005166873336f, 0.009431271813809872f, 0.010551766492426395f, 0.010976489633321762f, 0.009329683147370815f, 0.00902542844414711f, 0.013515385799109936f, 0.003021643729880452f, 0.002129690023139119f, 0.005777892656624317f, 0.00307788560166955f, 0.004282940179109573f, 0.007756118196994066f, 0.01102400105446577f, 0.004078253637999296f, 0.00418986426666379f, 0.006966877728700638f, 0.003070057602599263f, 0.011108466424047947f, 0.0020902096293866634f, 0.01071231160312891f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032235197722911835f, 0.002234980696812272f, 0.0043642339296638966f, 0.0031388779170811176f, 0.005026037339121103f, 0.003824458224698901f, 0.001823959406465292f, 0.0035984746646136045f, 0.004819664638489485f, 0.006896617356687784f, 0.002200192306190729f, 0.002021149266511202f, 0.003608604660257697f, 0.0018741777166724205f, 0.002020656131207943f, 0.0019880805630236864f, 0.004320173058658838f, 0.005753010977059603f, 0.0017186234472319484f, 0.005192848853766918f, 0.0020281777251511812f, 0.0019578884821385145f, 0.003754229284822941f, 0.0017133483197540045f, 0.0018822704441845417f, 0.0034910240210592747f, 0.00449427030980587f, 0.005001012701541185f, 0.0022142042871564627f, 0.0027285453397780657f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010982389794662595f, 0.0005791067378595471f, 0.0013027290115132928f, 0.0010160427773371339f, 0.0007668021135032177f, 0.0007413933053612709f, 0.0004190566251054406f, 0.0007575539639219642f, 0.0004363924963399768f, 0.0009932052344083786f, 0.000529028766322881f, 0.0006540557951666415f, 0.0010304367169737816f, 0.0008611601078882813f, 0.0007218355895020068f, 0.0008268498932011425f, 0.0007634277571924031f, 0.000700637639965862f, 0.0007395761786028743f, 0.00043811392970383167f, 0.0005188554641790688f, 0.0007127628196030855f, 0.0005451869801618159f, 0.0007005049264989793f, 0.000706430641002953f, 0.0005683850031346083f, 0.0008587449556216598f, 0.0009767778683453798f, 0.0009858085541054606f, 0.0005948895122855902f, 0.0006695576594211161f, 0.0006624847883358598f, 0.0007455071900039911f, 0.0005127264303155243f, 0.001144646666944027f, 0.00039992635720409453f, 0.00046034553088247776f, 0.0010134045733138919f, 0.0005416979547590017f, 0.0007552659953944385f, 0.00041239263373427093f, 0.001050067599862814f, 0.0011324890656396747f, 0.0006405661697499454f, 0.0006359899416565895f, 0.00064280373044312f, 0.000701793993357569f, 0.0006089105154387653f, 0.0007204029243439436f, 0.0005716725718230009f, 0.000526971067301929f, 0.001125982846133411f, 0.0008659937302581966f, 0.0007227830355986953f, 0.0006506015197373927f, 0.0008826093398965895f, 0.000671194342430681f, 0.0006796388770453632f, 0.0005662682233378291f, 0.0010371088283136487f, 0.00038215983659029007f, 0.0008308826363645494f, 0.0006407215259969234f, 0.0009286168497055769f, 0.00101022282615304f, 0.0005957462708465755f, 0.0006852761725895107f, 0.0007023690268397331f, 0.0008602916495874524f, 0.0005718239117413759f, 0.0007495094323530793f, 0.0005135111859999597f, 0.0006544868228957057f, 0.0010402658954262733f, 0.0008172910311259329f, 0.0005943087744526565f, 0.0007007281528785825f, 0.0012122298358008265f, 0.0006402484723366797f, 0.0008259815513156354f, 0.00042825363925658166f, 0.0008413581526838243f, 0.0008710483089089394f, 0.00033118532155640423f, 0.0009959266753867269f, 0.0006493199616670609f, 0.0004969646688550711f, 0.0007259948761202395f, 0.000933474104385823f, 0.0007187132141552866f, 0.0007140516536310315f, 0.00045645033242180943f, 0.0006392151699401438f, 0.00045651281834580004f, 0.0006929779192432761f, 0.000501624948810786f, 0.00045934529043734074f, 0.0008690519607625902f, 0.00041246283217333257f, 0.00042370843584649265f, 0.0009822658030316234f, 0.0007705427124164999f, 0.0006945024360902607f, 0.0008595823310315609f, 0.00042971325456164777f, 0.0008329087286256254f, 0.0005336472531780601f, 0.0003477836144156754f, 0.0004976309719495475f, 0.0010258457623422146f, 0.0007676156237721443f, 0.0005344864330254495f, 0.0006498697330243886f, 0.0005303799407556653f, 0.0010765244951471686f, 0.0007896464085206389f, 0.0005551685462705791f, 0.0007804842898622155f, 0.000814498052932322f, 0.0008025356801226735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006691111251711845f, 0.003746339585632086f, 0.0035885311663150787f, 0.004161530639976263f, 0.004990472458302975f, 0.005585803650319576f, 0.004352927673608065f, 0.0033925927709788084f, 0.0038689677603542805f, 0.005544992163777351f, 0.00403983611613512f, 0.0037310831248760223f, 0.004557005129754543f, 0.005601762793958187f, 0.004354133736342192f, 0.0031421177554875612f, 0.004737070761620998f, 0.003156893188133836f, 0.004125548526644707f, 0.0029966342262923717f, 0.004267798736691475f, 0.0036971212830394506f, 0.0034138283226639032f, 0.004015494138002396f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018817224772647023f, 0.0008368405979126692f, 0.00211012689396739f, 0.0006387014873325825f, 0.0009025458130054176f, 0.0007380021270364523f, 0.0017034810734912753f, 0.0010059620253741741f, 0.0011434557382017374f, 0.0019498359179124236f, 0.0009387541213072836f, 0.0015441395808011293f, 0.0005892508197575808f, 0.001824963022954762f, 0.0015342655824497342f, 0.001354528241790831f, 0.0019742166623473167f, 0.0018906854093074799f, 0.0011886790161952376f, 0.001968438969925046f, 0.0012976322323083878f, 0.001715878606773913f, 0.0008938111714087427f, 0.001963892253115773f, 0.0012018571142107248f, 0.0012058318825438619f, 0.0018809520406648517f, 0.001336598303169012f, 0.001377335749566555f, 0.0017443049000576138f, 0.001108640106394887f, 0.001308351056650281f, 0.002133134054020047f, 0.0007759103900752962f, 0.0011524577857926488f, 0.0019182817777618766f, 0.0010280952556058764f, 0.0017753406427800655f, 0.0009035023977048695f, 0.0010356566635891795f, 0.0010034568840637803f, 0.0012172244023531675f, 0.0017337767640128732f, 0.0009082717006094754f, 0.001579224830493331f, 0.001102513400837779f, 0.0017299647442996502f, 0.0020398935303092003f, 0.0016313500236719847f, 0.0023566868621855974f, 0.0009260644437745214f, 0.0016332580707967281f, 0.0016710218042135239f, 0.0014070906909182668f, 0.000971056055277586f, 0.0014741166960448027f, 0.0010787132196128368f, 0.001279684016481042f, 0.0018876242684200406f, 0.001304351957514882f, 0.0012261060765013099f, 0.0015413302462548018f, 0.0007513879681937397f, 0.001888594008050859f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003651532344520092f, 0.0061167143285274506f, 0.004064398352056742f, 0.015051595866680145f, 0.006745196413248777f, 0.005173829849809408f, 0.005745459347963333f, 0.0032488484866917133f, 0.006631795316934586f, 0.0037811046931892633f, 0.006725738290697336f, 0.005217716097831726f, 0.007155939005315304f, 0.011779531836509705f, 0.004903791937977076f, 0.0035613502841442823f, 0.002226036973297596f, 0.0019304922316223383f, 0.010997449979186058f, 0.008879455737769604f, 0.002684021834284067f, 0.008796493522822857f, 0.00621216744184494f, 0.003680875524878502f, 0.008399397134780884f, 0.0025215500500053167f, 0.0037103944923728704f, 0.006548114120960236f, 0.009439628571271896f, 0.003136114915832877f, 0.008570530451834202f, 0.009508799761533737f, 0.013896165415644646f, 0.00595555454492569f, 0.006216974463313818f, 0.002370453905314207f, 0.004000580403953791f, 0.003682647133246064f, 0.005627719219774008f, 0.0031913353595882654f, 0.004121210426092148f, 0.0038391894195228815f, 0.006248334888368845f, 0.007697738707065582f, 0.006826695520430803f, 0.0026502886321395636f, 0.0031260850373655558f, 0.007481168955564499f, 0.0043629868887364864f, 0.012927619740366936f, 0.00581175833940506f, 0.0021496822591871023f, 0.002633081516250968f, 0.0028183050453662872f, 0.0032812091521918774f, 0.002255401574075222f, 0.012730324640870094f, 0.0055016339756548405f, 0.004217418376356363f, 0.005272711161524057f, 0.007524208631366491f, 0.0030286156106740236f, 0.012439670041203499f, 0.00248419470153749f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0058850133791565895f, 0.005376148968935013f, 0.0032051471062004566f, 0.005682541523128748f, 0.00513334758579731f, 0.004567996598780155f, 0.004425322636961937f, 0.004673203453421593f, 0.004810405895113945f, 0.002457215916365385f, 0.0038247762713581324f, 0.003635554341599345f, 0.004398022778332233f, 0.0036487113684415817f, 0.004377194680273533f, 0.004615995101630688f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009924195474013686f, 0.000627668749075383f, 0.0009514060220681131f, 0.0005569438799284399f, 0.0005707492819055915f, 0.0009370134794153273f, 0.0008311924175359309f, 0.0008378559141419828f, 0.0012149035464972258f, 0.000795010186266154f, 0.0006627827533520758f, 0.00037964462535455823f, 0.0008095150697045028f, 0.0012310666497796774f, 0.000619494472630322f, 0.0005829805741086602f, 0.0006651668809354305f, 0.0006105827633291483f, 0.0007780411979183555f, 0.001029300270602107f, 0.0007462681387551129f, 0.0006926964269950986f, 0.0005973645602352917f, 0.0005894993082620203f, 0.0003907516074832529f, 0.0005512232310138643f, 0.001032834523357451f, 0.0007506630499847233f, 0.000970909430179745f, 0.0007560093654319644f, 0.0009622612851671875f, 0.0007982230745255947f, 0.0009070765809156001f, 0.0008951927302405238f, 0.0006069245864637196f, 0.00043141082278452814f, 0.0006193575100041926f, 0.0008137627737596631f, 0.000584909925237298f, 0.0005993159138597548f, 0.0008518684771843255f, 0.000923921586945653f, 0.0005640367162413895f, 0.0006224546232260764f, 0.0006388025940395892f, 0.0012102213222533464f, 0.0006663596723228693f, 0.0007049766718409956f, 0.001095857354812324f, 0.0007177969673648477f, 0.0006080670282244682f, 0.0008275926811620593f, 0.0013268396724015474f, 0.0008713593706488609f, 0.0005281816702336073f, 0.0007488086703233421f, 0.0008133355295285583f, 0.0009309324086643755f, 0.0006045053014531732f, 0.0006541456677950919f, 0.001124091329984367f, 0.0006821051356382668f, 0.0007773792021907866f, 0.0006139939068816602f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007787361741065979f, 0.004234512336552143f, 0.004714390262961388f, 0.004556550644338131f, 0.0044394866563379765f, 0.003956941422075033f, 0.004005763214081526f, 0.002913250820711255f, 0.004233457613736391f, 0.006060312036424875f, 0.005994212348014116f, 0.003440889762714505f, 0.005528546869754791f, 0.004270014353096485f, 0.004161523189395666f, 0.0036176410503685474f, 0.006600584369152784f, 0.00557743338868022f, 0.005782213993370533f, 0.003908991347998381f, 0.00832871813327074f, 0.003701354842633009f, 0.0047305794432759285f, 0.003858745563775301f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008431817404925823f, 0.0008106305031105876f, 0.0017032948089763522f, 0.0010122614912688732f, 0.00060516461962834f, 0.0005197929567657411f, 0.0013084681704640388f, 0.0008093290380202234f, 0.0016367181669920683f, 0.001354455715045333f, 0.0014782745856791735f, 0.0015532862162217498f, 0.0006307873409241438f, 0.0017891869647428393f, 0.0009417523397132754f, 0.0007302845478989184f, 0.0007756344275549054f, 0.0013005028013139963f, 0.001201559673063457f, 0.0014109559124335647f, 0.001245383988134563f, 0.001264795195311308f, 0.001187619986012578f, 0.0010378602892160416f, 0.0013344553299248219f, 0.0011071448680013418f, 0.0013164858100935817f, 0.0015188927063718438f, 0.001491953618824482f, 0.0016304590972140431f, 0.0013535451143980026f, 0.0006571674603037536f, 0.0012501778546720743f, 0.0008238083100877702f, 0.0009493515826761723f, 0.0008284963550977409f, 0.0010163313709199429f, 0.00048134473036043346f, 0.000868482340592891f, 0.0015618589241057634f, 0.001289617270231247f, 0.0014442652463912964f, 0.0007078403141349554f, 0.0013447096571326256f, 0.0009759014355950058f, 0.0010727635817602277f, 0.0010168984299525619f, 0.0010522158117964864f, 0.0008144164457917213f, 0.0013776810374110937f, 0.0016318353591486812f, 0.0010163210099563003f, 0.0009935848647728562f, 0.000610619317740202f, 0.0010202752891927958f, 0.0015464047901332378f, 0.000620291568338871f, 0.0004042355576530099f, 0.0007885656086727977f, 0.0010677239624783397f, 0.0012396969832479954f, 0.0012974226847290993f, 0.0009872500086203218f, 0.001436613267287612f, 0.0010773548856377602f, 0.001299346680752933f, 0.0010168867884203792f, 0.0009195170132443309f, 0.0006704446277581155f, 0.0011367155238986015f, 0.001148587791249156f, 0.0013148358557373285f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.013598909601569176f, 0.0032058455981314182f, 0.0033868527971208096f, 0.003839797107502818f, 0.011427127756178379f, 0.01335944514721632f, 0.009586438536643982f, 0.0056068492121994495f, 0.0016557818744331598f, 0.010224835015833378f, 0.002848607487976551f, 0.008305964060127735f, 0.005088115576654673f, 0.0021252178121358156f, 0.004304413218051195f, 0.004652743227779865f, 0.004406132269650698f, 0.009488651528954506f, 0.00388865708373487f, 0.0065002734772861f, 0.003085807664319873f, 0.0034210847225040197f, 0.0068188863806426525f, 0.004952938295900822f, 0.002479229122400284f, 0.005539971403777599f, 0.002221479080617428f, 0.0032210287172347307f, 0.002124627586454153f, 0.0033226388040930033f, 0.0024409876205027103f, 0.002678826916962862f, 0.0021354604978114367f, 0.004130243323743343f, 0.010138570331037045f, 0.009283783845603466f, 0.00490720896050334f, 0.014494415372610092f, 0.006292620208114386f, 0.0018480115104466677f, 0.0035972234327346087f, 0.0033883426804095507f, 0.013260201551020145f, 0.0037780236452817917f, 0.008293868973851204f, 0.0030689642298966646f, 0.008837255649268627f, 0.003646597731858492f, 0.006660233251750469f, 0.002981369849294424f, 0.006215237081050873f, 0.010590613819658756f, 0.0033849391620606184f, 0.019882550463080406f, 0.0032557263039052486f, 0.0030225422233343124f, 0.0203502606600523f, 0.02217007987201214f, 0.0066022430546581745f, 0.0030695453751832247f, 0.0025288760662078857f, 0.006426352541893721f, 0.009751739911735058f, 0.0031620326917618513f, 0.002405247651040554f, 0.006598860956728458f, 0.0038406725507229567f, 0.011296400800347328f, 0.00900321640074253f, 0.004544381517916918f, 0.0025249405298382044f, 0.0021495413966476917f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002404399449005723f, 0.0048362077213823795f, 0.004621786996722221f, 0.0037863459438085556f, 0.003933686763048172f, 0.004242659080773592f, 0.004470528103411198f, 0.005474334582686424f, 0.004935109987854958f, 0.002487344667315483f, 0.006068567279726267f, 0.00750803854316473f, 0.00432888837531209f, 0.004267826210707426f, 0.002262531081214547f, 0.00369580602273345f, 0.004821561276912689f, 0.004906135145574808f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000850084878038615f, 0.0007623067940585315f, 0.0010376896243542433f, 0.0007798008737154305f, 0.0006218354101292789f, 0.0006839850684627891f, 0.0012048452626913786f, 0.0004974497715011239f, 0.001165808760561049f, 0.0009214088786393404f, 0.0007506153197027743f, 0.0005583325400948524f, 0.0008692298433743417f, 0.0005321762291714549f, 0.0007807037909515202f, 0.0009062544559128582f, 0.0006087986985221505f, 0.0008172522648237646f, 0.0007105764816515148f, 0.0007970023434609175f, 0.0010070569114759564f, 0.0009006891632452607f, 0.0005911118350923061f, 0.0006648669950664043f, 0.0007645901059731841f, 0.0005686267395503819f, 0.0007002600468695164f, 0.0007029801490716636f, 0.0008039546082727611f, 0.0006834600353613496f, 0.0005784152890555561f, 0.0007184817804954946f, 0.0011156979016959667f, 0.0004565947747323662f, 0.0008394397445954382f, 0.0009230414871126413f, 0.0006476035341620445f, 0.0006075408891774714f, 0.0006545732612721622f, 0.0008159013814292848f, 0.0007702810689806938f, 0.0005841415259055793f, 0.0005690566613338888f, 0.0007940197829157114f, 0.0010190601460635662f, 0.000653710390906781f, 0.0008818653877824545f, 0.00044158496893942356f, 0.00058890285436064f, 0.0007302782614715397f, 0.0008259398164227605f, 0.0006488349754363298f, 0.0006346904556266963f, 0.0007103849202394485f, 0.0009010826470330358f, 0.0013212499907240272f, 0.0006307238363660872f, 0.00133707863278687f, 0.000592328782659024f, 0.0006868025520816445f, 0.000869547133333981f, 0.0007396886358037591f, 0.0008557835826650262f, 0.0007796945865266025f, 0.0005194077966734767f, 0.0009113202686421573f, 0.0006936761783435941f, 0.0007607487495988607f, 0.0006800951668992639f, 0.0007390548125840724f, 0.0008525282028131187f, 0.0005195452249608934f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005808279383927584f, 0.0037049257662147284f, 0.004468424711376429f, 0.004909859038889408f, 0.004603901877999306f, 0.0032131297048181295f, 0.00625090766698122f, 0.0040826862677931786f, 0.004046658519655466f, 0.0050049214623868465f, 0.005882800556719303f, 0.004691385198384523f, 0.004598569590598345f, 0.006250134203583002f, 0.00533489091321826f, 0.004751851316541433f, 0.004539099056273699f, 0.005425974261015654f, 0.004171302542090416f, 0.003267283085733652f, 0.0059869117103517056f, 0.0058417972177267075f, 0.004341857507824898f, 0.005230228882282972f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009861541911959648f, 0.0009439121349714696f, 0.0011099242838099599f, 0.0008395767072215676f, 0.0007115047774277627f, 0.0008900385582819581f, 0.0007776027196086943f, 0.0012280290247872472f, 0.0008624573820270598f, 0.0011160740396007895f, 0.0009381393902003765f, 0.000713996181730181f, 0.0010638588573783636f, 0.0009996829321607947f, 0.0009936854476109147f, 0.0009622792131267488f, 0.0017933134222403169f, 0.0005747959366999567f, 0.000958266609814018f, 0.0008249509846791625f, 0.0009494351106695831f, 0.0008221292519010603f, 0.000732885324396193f, 0.0014309706166386604f, 0.0005886965082027018f, 0.0007669838378205895f, 0.0013166801072657108f, 0.0016443382482975721f, 0.0011045634746551514f, 0.0010010028490796685f, 0.001105785951949656f, 0.001270122709684074f, 0.0005856040515936911f, 0.0009131026454269886f, 0.0007852105773054063f, 0.0014123576693236828f, 0.0016276028472930193f, 0.001518175471574068f, 0.0009274811018258333f, 0.0009009661735035479f, 0.00140567182097584f, 0.000817976426333189f, 0.0008553256629966199f, 0.0019316613906994462f, 0.001315532485023141f, 0.0006966844666749239f, 0.0009897889103740454f, 0.0008534524240531027f, 0.0016855372814461589f, 0.0009337136871181428f, 0.0014621081063523889f, 0.0013904116349294782f, 0.0007793718832544982f, 0.0014820691430941224f, 0.0010024283546954393f, 0.0020383938681334257f, 0.0013729567872360349f, 0.000766045122873038f, 0.001226779306307435f, 0.001037245849147439f, 0.0009562149061821401f, 0.000814085069578141f, 0.0008031714241951704f, 0.0004940182552672923f, 0.0006431597867049277f, 0.0013542597880586982f, 0.0006012354861013591f, 0.0009230092982761562f, 0.0010286630131304264f, 0.0007216199301183224f, 0.0014277106383815408f, 0.0012813500361517072f, 0.00114443339407444f, 0.0011377143673598766f, 0.0018159139435738325f, 0.0010530354920774698f, 0.0009897149866446853f, 0.0009758954984135926f, 0.0012251457665115595f, 0.0010285094613209367f, 0.0011810102732852101f, 0.0005863973638042808f, 0.0006270802114158869f, 0.0006591683486476541f, 0.0008223869954235852f, 0.0006790149491280317f, 0.0008154731476679444f, 0.0018077754648402333f, 0.000729828083422035f, 0.0007876924937590957f, 0.0010498700430616736f, 0.0011083950521424413f, 0.0009754382772371173f, 0.0007700459100306034f, 0.0015906546032056212f, 0.0006912825629115105f, 0.0012440149439498782f, 0.0009577573509886861f, 0.0013688033213838935f, 0.0013114731991663575f, 0.0013443686766549945f, 0.001017915434204042f, 0.0012211828725412488f, 0.0009946563513949513f, 0.0008827270357869565f, 0.001153036137111485f, 0.0016718244878575206f, 0.0005262601771391928f, 0.0009255263139493763f, 0.0007670412305742502f, 0.0008517792448401451f, 0.0012725272681564093f, 0.0009829237824305892f, 0.000988910673186183f, 0.0010894564911723137f, 0.0009410979109816253f, 0.0013701110146939754f, 0.0018624408403411508f, 0.0008499963441863656f, 0.0013535916805267334f, 0.0008827023557387292f, 0.0009497532737441361f, 0.0015781082911416888f, 0.0006467051571235061f, 0.0008008723962120712f, 0.0014679288724437356f, 0.0008003517868928611f, 0.0010746869957074523f, 0.000490895879920572f, 0.0011231504613533616f, 0.0012316228821873665f, 0.0008178814896382391f, 0.0008056956576183438f, 0.0007847817032597959f, 0.0015890958020463586f, 0.001862051896750927f, 0.0016568158753216267f, 0.0007290472858585417f, 0.0008879815577529371f, 0.0011259197490289807f, 0.0008076639496721327f, 0.0012878540437668562f, 0.0013886963715776801f, 0.0013389034429565072f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003413295838981867f, 0.003685101168230176f, 0.002287094946950674f, 0.0038797406014055014f, 0.005428384989500046f, 0.00849700067192316f, 0.008206713013350964f, 0.0018898788839578629f, 0.003578493371605873f, 0.0031364161986857653f, 0.004323277622461319f, 0.0035325391218066216f, 0.005773674231022596f, 0.003843674436211586f, 0.003528705332428217f, 0.0030345567502081394f, 0.0030707463156431913f, 0.004615205805748701f, 0.0035968669690191746f, 0.0041555375792086124f, 0.007527593523263931f, 0.00397765776142478f, 0.004875853192061186f, 0.0016793906688690186f, 0.008509444072842598f, 0.005007131025195122f, 0.0020507818553596735f, 0.0032345897052437067f, 0.0026056088972836733f, 0.0025793537497520447f, 0.002796503249555826f, 0.0035353675484657288f, 0.005511315073817968f, 0.004961905535310507f, 0.0029302698094397783f, 0.003406480886042118f, 0.0022872318513691425f, 0.0019325914327055216f, 0.005448279436677694f, 0.0027747461572289467f, 0.0012859489070251584f, 0.004874741192907095f, 0.0047941734082996845f, 0.003655343549326062f, 0.0018915021792054176f, 0.006795395631343126f, 0.003524382831528783f, 0.002516229171305895f, 0.004413364455103874f, 0.0022749416530132294f, 0.002554267179220915f, 0.0019531655125319958f, 0.00429518474265933f, 0.003448035567998886f, 0.002241911832243204f, 0.0016063328366726637f, 0.002262147143483162f, 0.0035180621780455112f, 0.002846088260412216f, 0.003017093986272812f, 0.002657504752278328f, 0.0038688327185809612f, 0.003919757436960936f, 0.006917229387909174f, 0.004686138592660427f, 0.0016467251116409898f, 0.012035168707370758f, 0.0023774688597768545f, 0.0035149063915014267f, 0.005806514527648687f, 0.0014287353260442615f, 0.001970570534467697f, 0.0024464833550155163f, 0.0033967685885727406f, 0.0012714540353044868f, 0.0025616467464715242f, 0.0036082491278648376f, 0.0026056759525090456f, 0.0020381216891109943f, 0.003716375445947051f, 0.00370145495980978f, 0.008228041231632233f, 0.005764560773968697f, 0.008461076766252518f, 0.007558736018836498f, 0.004917822312563658f, 0.010239607654511929f, 0.0019291192293167114f, 0.003755575744435191f, 0.004405246581882238f, 0.002064257161691785f, 0.0027439782861620188f, 0.0029810862615704536f, 0.004158588591963053f, 0.002831939607858658f, 0.005620331969112158f, 0.0026055180933326483f, 0.0033268630504608154f, 0.0017620406579226255f, 0.003968475852161646f, 0.00291287899017334f, 0.002606657799333334f, 0.0019199709640815854f, 0.002321151550859213f, 0.002120457822456956f, 0.0017269742675125599f, 0.002408259781077504f, 0.008549979887902737f, 0.0025749322958290577f, 0.004063854925334454f, 0.005307275801897049f, 0.002160784089937806f, 0.0017934584757313132f, 0.005503917578607798f, 0.0044868565164506435f, 0.0024201360065490007f, 0.003431903198361397f, 0.0022340293508023024f, 0.004389578942209482f, 0.0025590783916413784f, 0.0032202471047639847f, 0.00524006737396121f, 0.0022734610829502344f, 0.006331000477075577f, 0.00936055090278387f, 0.0019337148405611515f, 0.005301203578710556f, 0.003423717338591814f, 0.01210477203130722f, 0.0031491578556597233f, 0.002774257678538561f, 0.003917601890861988f, 0.0026901019737124443f, 0.005607795435935259f, 0.0028438924346119165f, 0.002347736619412899f, 0.0029360430780798197f, 0.007228404749184847f, 0.010448821820318699f, 0.0032062914688140154f, 0.00478380685672164f, 0.0026803268119692802f, 0.002212212421000004f, 0.00323388515971601f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035647398326545954f, 0.0017574871890246868f, 0.0030072247609496117f, 0.0040145074017345905f, 0.0038384534418582916f, 0.003684408264234662f, 0.0051496694795787334f, 0.004964906722307205f, 0.004193579312413931f, 0.0018172240816056728f, 0.003342975629493594f, 0.004513822495937347f, 0.001953491708263755f, 0.0017235609702765942f, 0.001876492751762271f, 0.003698955522850156f, 0.0034579106140881777f, 0.0015358423115685582f, 0.0025037070736289024f, 0.002091572619974613f, 0.002523518865928054f, 0.0018807569285854697f, 0.0033764708787202835f, 0.0042871166951954365f, 0.00702481996268034f, 0.0035851765424013138f, 0.0046049924567341805f, 0.001936617074534297f, 0.002002192661166191f, 0.0018043085001409054f, 0.004247510805726051f, 0.0035253872629255056f, 0.0039036311209201813f, 0.005256409291177988f, 0.0037318768445402384f, 0.0039741466753184795f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006736621726304293f, 0.0005752528668381274f, 0.0006944577326066792f, 0.0006864750757813454f, 0.0007781778695061803f, 0.0007609377498738468f, 0.0004946585395373404f, 0.0006594256265088916f, 0.0006425674073398113f, 0.0005898427916690707f, 0.0010950355790555477f, 0.000892133975867182f, 0.0008373825694434345f, 0.0010809277882799506f, 0.0006351600750349462f, 0.0007539127836935222f, 0.0004759174189530313f, 0.000742708332836628f, 0.0007972294115461409f, 0.0006831435603089631f, 0.001095134881325066f, 0.0006457463605329394f, 0.0006579000619240105f, 0.0004504105309024453f, 0.0005807841662317514f, 0.0007175146602094173f, 0.0006001342553645372f, 0.0005847564316354692f, 0.0004589158343151212f, 0.00047147617442533374f, 0.0005853612092323601f, 0.000597973819822073f, 0.0007387334480881691f, 0.0008023169939406216f, 0.00042802587267942727f, 0.0005942491116002202f, 0.000613478827290237f, 0.0006517851143144071f, 0.0007121033850125968f, 0.0005050469771958888f, 0.00048645102651789784f, 0.0006974291172809899f, 0.0005788363050669432f, 0.0007044790545478463f, 0.0005068515310995281f, 0.0005078966496512294f, 0.0006894778343848884f, 0.0006979418103583157f, 0.0008490289328619838f, 0.0008091649506241083f, 0.0005932406056672335f, 0.0006411276990547776f, 0.0005431483732536435f, 0.000742300704587251f, 0.0005513465730473399f, 0.0007274143281392753f, 0.0006124911596998572f, 0.0004491721629165113f, 0.0004969387082383037f, 0.0007019744953140616f, 0.0005819033249281347f, 0.0006694416515529156f, 0.0009201386710628867f, 0.0005755935562774539f, 0.0005523510626517236f, 0.0006144590443000197f, 0.0006279262597672641f, 0.0005831312155351043f, 0.0004393898125272244f, 0.0009003931190818548f, 0.0007561089005321264f, 0.0007524408283643425f, 0.0005772932199761271f, 0.0005245524807833135f, 0.0007732678786851466f, 0.0005376288900151849f, 0.0004684003652073443f, 0.0006392750074155629f, 0.0007338783470913768f, 0.0005738047184422612f, 0.000821696943603456f, 0.0005651937099173665f, 0.0005815002950839698f, 0.0004639986145775765f, 0.0009033115929923952f, 0.0006834865198470652f, 0.0005817783530801535f, 0.0006000591674819589f, 0.0008660606108605862f, 0.0005422503454610705f, 0.0007760529988445342f, 0.0006350027397274971f, 0.0006970313261263072f, 0.0006405611638911068f, 0.0008342242217622697f, 0.00041732503450475633f, 0.0007985736592672765f, 0.0004831476544495672f, 0.000638249097391963f, 0.0005902641569264233f, 0.0006432543741539121f, 0.0004402690101414919f, 0.0006246855482459068f, 0.0008374738390557468f, 0.0007331314845941961f, 0.0007265169988386333f, 0.0006410495261661708f, 0.0006918235449120402f, 0.0006311988108791411f, 0.0006531793624162674f, 0.0005794324679300189f, 0.0006251332815736532f, 0.0005589264910668135f, 0.0006556374137289822f, 0.0005427044816315174f, 0.0006443033344112337f, 0.00036152848042547703f, 0.0006232305895537138f, 0.0006677230703644454f, 0.0005526852328330278f, 0.000568916613701731f, 0.0005449531599879265f, 0.0008745494997128844f, 0.0006715678609907627f, 0.0009003300219774246f, 0.0008523495052941144f, 0.0007663721917197108f, 0.0006159089971333742f, 0.0005014700582250953f, 0.0005493734497576952f, 0.0010040303459390998f, 0.0004871321143582463f, 0.0009053478133864701f, 0.0004961056401953101f, 0.000874395715072751f, 0.0006042750901542604f, 0.0007961084484122694f, 0.0007379547460004687f, 0.00041569225140847266f, 0.0004878467007074505f, 0.0005815668264403939f, 0.0005615514819510281f, 0.0007238878170028329f, 0.0005926571320742369f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005252735689282417f, 0.0053518726490437984f, 0.004641429055482149f, 0.005839817691594362f, 0.005666601937264204f, 0.00430332962423563f, 0.006008368916809559f, 0.004523888695985079f, 0.006149351596832275f, 0.004821651615202427f, 0.004440377466380596f, 0.004044780507683754f, 0.006127794738858938f, 0.004165039863437414f, 0.004827926401048899f, 0.004435775801539421f, 0.003593889530748129f, 0.0051532285287976265f, 0.005428670439869165f, 0.004844732582569122f, 0.0037048072554171085f, 0.003817238612100482f, 0.004996513482183218f, 0.004643009044229984f, 0.004993958864361048f, 0.004170254338532686f, 0.0054737599566578865f, 0.003147282637655735f, 0.006103554740548134f, 0.003417244181036949f, 0.00385336484760046f, 0.003629976650699973f, 0.007558977231383324f, 0.005464137531816959f, 0.0046188547275960445f, 0.005087010096758604f, 0.004800224211066961f, 0.005643018987029791f, 0.003426913870498538f, 0.0056793298572301865f, 0.005819467827677727f, 0.005157032050192356f, 0.003777554491534829f, 0.004145015962421894f, 0.006216505076736212f, 0.005704561248421669f, 0.004737516865134239f, 0.005372022744268179f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00310127018019557f, 0.0017435512272641063f, 0.0018722033128142357f, 0.0017549064941704273f, 0.0017459335504099727f, 0.001470352872274816f, 0.0017956540687009692f, 0.0011929500615224242f, 0.002243616385385394f, 0.0012854975648224354f, 0.0011128266341984272f, 0.0013256830861791968f, 0.0015532620018348098f, 0.0014915470965206623f, 0.0021500387229025364f, 0.001760327024385333f, 0.0014227150240913033f, 0.0021131401881575584f, 0.0008029213640838861f, 0.0008600494475103915f, 0.0022402412723749876f, 0.0008907542796805501f, 0.0008818359347060323f, 0.0011709900572896004f, 0.0011530786287039518f, 0.001741454703733325f, 0.002435877453535795f, 0.0021475714165717363f, 0.0014353819424286485f, 0.001978411106392741f, 0.0017733463319018483f, 0.0013179880334064364f, 0.0011431706370785832f, 0.0006585463415831327f, 0.001509756431914866f, 0.0011201099259778857f, 0.0011942111887037754f, 0.0014280809555202723f, 0.0016814286354929209f, 0.0011970035266131163f, 0.0010476086754351854f, 0.0015808361349627376f, 0.001978648593649268f, 0.0023242353927344084f, 0.0016222267877310514f, 0.0018531945534050465f, 0.001540299621410668f, 0.001516442047432065f, 0.0014462233521044254f, 0.001696501742117107f, 0.0013578999787569046f, 0.0009265082771889865f, 0.001375592895783484f, 0.001273153000511229f, 0.0016095677856355906f, 0.0010764410253614187f, 0.0021343494299799204f, 0.0016639370005577803f, 0.0009489995427429676f, 0.0010347017087042332f, 0.002614068565890193f, 0.0011415547924116254f, 0.0013533510500565171f, 0.0011186162009835243f, 0.0012694115284830332f, 0.0023490418680012226f, 0.0016462508356198668f, 0.002555446233600378f, 0.0027573949191719294f, 0.0015306794084608555f, 0.000985434977337718f, 0.002326793037354946f, 0.0011930750915780663f, 0.001008995110169053f, 0.0007922896184027195f, 0.0008991116192191839f, 0.0014555742964148521f, 0.0012266576522961259f, 0.0017256669234484434f, 0.0019671637564897537f, 0.0016956098843365908f, 0.0012657498009502888f, 0.0015655221650376916f, 0.0016580196097493172f, 0.0011016417993232608f, 0.0016957852058112621f, 0.0017375749303027987f, 0.0017533497884869576f, 0.0018293546745553613f, 0.000832664140034467f, 0.0010373188415542245f, 0.0019737137481570244f, 0.0021434116642922163f, 0.001442951848730445f, 0.0012836134992539883f, 0.0014928820310160518f, 0.0018333608750253916f, 0.001485744258388877f, 0.0013327485648915172f, 0.0012292723404243588f, 0.0011394728207960725f, 0.0016070641577243805f, 0.0016865428769961f, 0.0012916038976982236f, 0.0016807228093966842f, 0.0019703293219208717f, 0.0018973705591633916f, 0.001024903147481382f, 0.0010866780066862702f, 0.0012936131097376347f, 0.002450954867526889f, 0.0018557902658358216f, 0.0018070325022563338f, 0.0018760766834020615f, 0.0012748494045808911f, 0.0010107011767104268f, 0.0012124081840738654f, 0.002584847155958414f, 0.0019139687065035105f, 0.001307771890424192f, 0.0021804531570523977f, 0.001374422456137836f, 0.001990273129194975f, 0.0021306800190359354f, 0.0011185877956449986f, 0.0018098813015967607f, 0.001354849198833108f, 0.0009414839441888034f, 0.0011948279570788145f, 0.002039180835708976f, 0.0014586931793019176f, 0.001401780522428453f, 0.0023368641268461943f, 0.002581937238574028f, 0.0013369324151426554f, 0.0018692506710067391f, 0.001290476880967617f, 0.0015739841619506478f, 0.0012728534638881683f, 0.001389388693496585f, 0.0012329758610576391f, 0.0015707846032455564f, 0.001147027825936675f, 0.0013193384511396289f, 0.0009640860953368247f, 0.0015468477504327893f, 0.0007600397220812738f, 0.0012936642160639167f, 0.0011723050847649574f, 0.0015855652745813131f, 0.0008373339660465717f, 0.0007912643486633897f, 0.001335207954980433f, 0.0011609323555603623f, 0.0013090060092508793f, 0.0014689398230984807f, 0.0013916378375142813f, 0.0010907248361036181f, 0.001485298271290958f, 0.0010427555534988642f, 0.0012076448183506727f, 0.0022801244631409645f, 0.002616039477288723f, 0.0010570758022367954f, 0.0016699727857485414f, 0.0021466542966663837f, 0.0017577812541276217f, 0.0019338285783305764f, 0.000997332506813109f, 0.001030422979965806f, 0.001963358838111162f, 0.0012285703560337424f, 0.001917963265441358f, 0.0008822408271953464f, 0.0017958339303731918f, 0.0015700665535405278f, 0.0008188065839931369f, 0.0009325845167040825f, 0.001097421976737678f, 0.002278608037158847f, 0.0009997737361118197f, 0.0015736286295577884f, 0.0009468436473980546f, 0.002103629056364298f, 0.0012444574385881424f, 0.0019111937144771218f, 0.0022736932151019573f, 0.0015182334464043379f, 0.0023256076965481043f, 0.0016112541779875755f, 0.001555367256514728f, 0.001211801078170538f, 0.0026742436457425356f, 0.0014778244076296687f, 0.0015002936124801636f, 0.0031630166340619326f, 0.0009268008871003985f, 0.0015969212399795651f, 0.0007708113989792764f, 0.0015525809722021222f, 0.0008958372636698186f, 0.0015170617261901498f, 0.002434696536511183f, 0.0017643506871536374f, 0.0011291163973510265f, 0.0018781675025820732f, 0.0009957205038517714f, 0.0019223419949412346f, 0.0016572721069678664f, 0.001835365197621286f, 0.0014551121275871992f, 0.0015801662812009454f, 0.0018480488797649741f, 0.0020883490797132254f, 0.0014222811441868544f, 0.0016576366033405066f, 0.0019206699216738343f, 0.0013326789485290647f, 0.0007801145548000932f, 0.001902906340546906f, 0.0015537334838882089f, 0.0008581320871599019f, 0.0010032785357907414f, 0.0010170073946937919f, 0.002296584425494075f, 0.0016306638717651367f, 0.0013372085522860289f, 0.001037626643665135f, 0.00100960792042315f, 0.0013195808278396726f, 0.001511220820248127f, 0.0009656667825765908f, 0.0007577373180538416f, 0.0011454595951363444f, 0.0028728004544973373f, 0.0012723974650725722f, 0.0011291083646938205f, 0.0014674903359264135f, 0.001746184192597866f, 0.0024136898573487997f, 0.002124929102137685f, 0.0012059109285473824f, 0.0010053374571725726f, 0.001138216000981629f, 0.0012373492354527116f, 0.0017797875916585326f, 0.0013662532437592745f, 0.001666736789047718f, 0.0010883311042562127f, 0.0014003898249939084f, 0.002157286275178194f, 0.001632556552067399f, 0.0019479558104649186f, 0.0015918135177344084f, 0.0009768358431756496f, 0.002082964638248086f, 0.0011577541008591652f, 0.0015741386450827122f, 0.0011454429477453232f, 0.0015460590366274118f, 0.0019938123878091574f, 0.0012300224043428898f, 0.0014489730820059776f, 0.0015396842500194907f, 0.0014739682665094733f, 0.0016858797753229737f, 0.0009290871676057577f, 0.0016876972513273358f, 0.0013149488950148225f, 0.001586652360856533f, 0.0009701552335172892f, 0.0017296219011768699f, 0.0013425343204289675f, 0.0019959795754402876f, 0.0011245491914451122f, 0.002454821253195405f, 0.0017442575190216303f, 0.0013817514991387725f, 0.0013733285013586283f, 0.0015950588276609778f, 0.00139748421497643f, 0.0008247003424912691f, 0.0015355526702478528f, 0.0008629054063931108f, 0.0013135704211890697f, 0.0018891416257247329f, 0.0012629221891984344f, 0.0012235455214977264f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022047783713787794f, 0.00977268721908331f, 0.005462456028908491f, 0.0068327863700687885f, 0.0030564770568162203f, 0.00504100089892745f, 0.004079603590071201f, 0.005465109366923571f, 0.0046597751788794994f, 0.006237548775970936f, 0.007024469319730997f, 0.01025718729943037f, 0.004414609167724848f, 0.00632373197004199f, 0.002949260640889406f, 0.00626339390873909f, 0.002930164337158203f, 0.00340465665794909f, 0.019975248724222183f, 0.010540920309722424f, 0.0027644464280456305f, 0.01529648993164301f, 0.01203758642077446f, 0.012086049653589725f, 0.006617693230509758f, 0.0040310961194336414f, 0.0031981272622942924f, 0.006645821966230869f, 0.004475475754588842f, 0.00391963729634881f, 0.001911098137497902f, 0.008458887226879597f, 0.015293808653950691f, 0.023725055158138275f, 0.007273545954376459f, 0.00827337522059679f, 0.02048853412270546f, 0.011599505320191383f, 0.003215352538973093f, 0.00829674769192934f, 0.014372116886079311f, 0.008323927409946918f, 0.004230848979204893f, 0.0033254155423492193f, 0.004334713332355022f, 0.002994691953063011f, 0.0032237281557172537f, 0.004135203547775745f, 0.012814112938940525f, 0.004697742406278849f, 0.004487320315092802f, 0.011126919649541378f, 0.004554088693112135f, 0.018398521468043327f, 0.010542839765548706f, 0.009937448427081108f, 0.005665214266628027f, 0.0035088376607745886f, 0.009860871359705925f, 0.01134668942540884f, 0.0026018747594207525f, 0.017084775492548943f, 0.007333933375775814f, 0.0030554949771612883f, 0.0256933756172657f, 0.0032037454657256603f, 0.002625376684591174f, 0.0027788160368800163f, 0.006836914457380772f, 0.019168533384799957f, 0.012112753465771675f, 0.004188734572380781f, 0.010175702162086964f, 0.01339093130081892f, 0.022336170077323914f, 0.02191845141351223f, 0.002867939881980419f, 0.0039149802178144455f, 0.0033597233705222607f, 0.004247411619871855f, 0.005629250314086676f, 0.006719599012285471f, 0.0038141992408782244f, 0.006000683642923832f, 0.009636595845222473f, 0.0032604008447378874f, 0.00333745451644063f, 0.005173996556550264f, 0.006018980871886015f, 0.04310954362154007f, 0.011407066136598587f, 0.002640370512381196f, 0.0023927679285407066f, 0.010304861702024937f, 0.008282513357698917f, 0.0032825132366269827f, 0.0032260932493954897f, 0.008074727840721607f, 0.0046975454315543175f, 0.005071701016277075f, 0.011320233345031738f, 0.0027884640730917454f, 0.002511833794414997f, 0.003995793405920267f, 0.00833189394325018f, 0.0031795944087207317f, 0.005974314175546169f, 0.009349528700113297f, 0.022014718502759933f, 0.004104476887732744f, 0.003094928804785013f, 0.0028778575360774994f, 0.008946157060563564f, 0.0066303652711212635f, 0.005399045534431934f, 0.011005504988133907f, 0.009755142033100128f, 0.002396242693066597f, 0.001995290396735072f, 0.0037071569822728634f, 0.005844626575708389f, 0.0072447084821760654f, 0.006935831159353256f, 0.0030028943438082933f, 0.005012280773371458f, 0.0025967054534703493f, 0.0027130215894430876f, 0.012752422131597996f, 0.01107252761721611f, 0.005911052692681551f, 0.009222116321325302f, 0.0074032507836818695f, 0.006161589175462723f, 0.0024122982285916805f, 0.013874327763915062f, 0.0037929562386125326f, 0.0042716930620372295f, 0.012494952417910099f, 0.011045662686228752f, 0.006499391049146652f, 0.011629178188741207f, 0.007778672035783529f, 0.004158140625804663f, 0.005024080630391836f, 0.005555415991693735f, 0.004390308167785406f, 0.01416504755616188f, 0.006088359281420708f, 0.0187710952013731f, 0.0041125002317130566f, 0.01842780038714409f, 0.01628907211124897f, 0.004184235818684101f, 0.0076178740710020065f, 0.004057071637362242f, 0.005785729736089706f, 0.004505331162363291f, 0.012590719386935234f, 0.0037578102201223373f, 0.014439757913351059f, 0.013910040259361267f, 0.003925438039004803f, 0.002040182938799262f, 0.013822081498801708f, 0.005706202704459429f, 0.004059211350977421f, 0.003011232241988182f, 0.00796277355402708f, 0.009204676374793053f, 0.007991906255483627f, 0.0035356273874640465f, 0.005866738501936197f, 0.0032533544581383467f, 0.012513818219304085f, 0.0030808376614004374f, 0.01093783788383007f, 0.00932440534234047f, 0.0085817975923419f, 0.004591590724885464f, 0.0019314347300678492f, 0.010711130686104298f, 0.010037954896688461f, 0.01476448867470026f, 0.002972543938085437f, 0.010312668979167938f, 0.0036240238696336746f, 0.0028203327674418688f, 0.00411765044555068f, 0.002137374132871628f, 0.0134036960080266f, 0.0044873240403831005f, 0.02024095132946968f, 0.0014803940430283546f, 0.003972204867750406f, 0.01195189543068409f, 0.002416993724182248f, 0.02202480100095272f, 0.004283500835299492f, 0.021475426852703094f, 0.0024894331581890583f, 0.015414156019687653f, 0.003690027166157961f, 0.00391419418156147f, 0.002552249701693654f, 0.006148525048047304f, 0.002799967071041465f, 0.01612723432481289f, 0.0027544437907636166f, 0.009925472550094128f, 0.005100314039736986f, 0.010279849171638489f, 0.0034095225855708122f, 0.003105546347796917f, 0.002656669123098254f, 0.006508477497845888f, 0.004924187436699867f, 0.003796507604420185f, 0.007292027585208416f, 0.01351199857890606f, 0.0040608844719827175f, 0.004676725249737501f, 0.021921085193753242f, 0.014185786247253418f, 0.008466905914247036f, 0.0028877605218440294f, 0.005593740846961737f, 0.002839010674506426f, 0.01756017655134201f, 0.005735821556299925f, 0.0049657197669148445f, 0.005599790718406439f, 0.0239292923361063f, 0.01877612993121147f, 0.0055413395166397095f, 0.0020064942073076963f, 0.004677452612668276f, 0.010024648159742355f, 0.012798776850104332f, 0.002413891488686204f, 0.003157976781949401f, 0.003566592000424862f, 0.004520250950008631f, 0.009004496969282627f, 0.008882141672074795f, 0.005871268454939127f, 0.004828733392059803f, 0.0030286218971014023f, 0.0029422722291201353f, 0.015719249844551086f, 0.00471710367128253f, 0.003249574452638626f, 0.0023772497661411762f, 0.0035783853381872177f, 0.006546193268150091f, 0.015266429632902145f, 0.0030228737741708755f, 0.008161444216966629f, 0.006990860216319561f, 0.01068891678005457f, 0.01008804701268673f, 0.004490301478654146f, 0.0028835837729275227f, 0.0058159371837973595f, 0.003894960507750511f, 0.004332113079726696f, 0.0034985668025910854f, 0.01037162821739912f, 0.0033332642633467913f, 0.0034813671372830868f, 0.007437430787831545f, 0.025518184527754784f, 0.0035986986476927996f, 0.005389800760895014f, 0.004897908307611942f, 0.00743769621476531f, 0.0028840869199484587f, 0.0022034344729036093f, 0.007332681678235531f, 0.007220291532576084f, 0.006622184067964554f, 0.004233820363879204f, 0.019900169223546982f, 0.010771681554615498f, 0.018504170700907707f, 0.0028753711376339197f, 0.002807488664984703f, 0.011734794825315475f, 0.003416299121454358f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005159100983291864f, 0.0014116798993200064f, 0.0038041577208787203f, 0.005459003150463104f, 0.0013085224200040102f, 0.005886434577405453f, 0.0013186048017814755f, 0.0015068602515384555f, 0.0015892339870333672f, 0.004083874635398388f, 0.0049919243901968f, 0.005601722281426191f, 0.004914651159197092f, 0.004781443625688553f, 0.0015182280912995338f, 0.0012665727408602834f, 0.005438254214823246f, 0.005622758064419031f, 0.0016148214926943183f, 0.0018118800362572074f, 0.001399851287715137f, 0.0013340422883629799f, 0.0012353368801996112f, 0.005482974462211132f, 0.001167803886346519f, 0.0015499030705541372f, 0.001401278073899448f, 0.004065381363034248f, 0.0015151133993640542f, 0.005312934517860413f, 0.005119632463902235f, 0.0033734978642314672f, 0.0015168626559898257f, 0.004900878295302391f, 0.0013920021010562778f, 0.0013982189120724797f, 0.004941774532198906f, 0.005270912777632475f, 0.0021231062710285187f, 0.0011761740315705538f, 0.0015176372835412621f, 0.005490006413310766f, 0.0014978009276092052f, 0.001375554595142603f, 0.0012965439818799496f, 0.0038134658243507147f, 0.0016212505288422108f, 0.0011534978402778506f, 0.0013442853232845664f, 0.0017268462106585503f, 0.004378122743219137f, 0.0023927846923470497f, 0.004265807569026947f, 0.0013344540493562818f, 0.0014769441913813353f, 0.005588918458670378f, 0.0013460778864100575f, 0.004917592741549015f, 0.0016817616997286677f, 0.0015827481402084231f, 0.0014957409584894776f, 0.0015573573764413595f, 0.004077555611729622f, 0.004603529814630747f, 0.0018553140107542276f, 0.00483784731477499f, 0.0015414775116369128f, 0.0043763453140854836f, 0.001266398816369474f, 0.0013343936298042536f, 0.0013404811033979058f, 0.004273340571671724f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006328194867819548f, 0.000697659095749259f, 0.0006636961479671299f, 0.0007804507622495294f, 0.0005033120978623629f, 0.000815277686342597f, 0.0005899158422835171f, 0.0009704137919470668f, 0.0008341627544723451f, 0.0009207804687321186f, 0.0007153283804655075f, 0.0006918329163454473f, 0.0008944853325374424f, 0.000738375005312264f, 0.000662569364067167f, 0.001025921432301402f, 0.0006380939739756286f, 0.0004808311350643635f, 0.0005997995613142848f, 0.0007446880917996168f, 0.000590875162743032f, 0.0004463864606805146f, 0.0008159403223544359f, 0.0007196558872237802f, 0.0006652749143540859f, 0.0007822213810868561f, 0.0011751725105568767f, 0.0007742264424450696f, 0.0008487766608595848f, 0.0008077463717199862f, 0.0008520690607838333f, 0.0005394873442128301f, 0.0007364292396232486f, 0.0005209726514294744f, 0.0009697010973468423f, 0.0007619570824317634f, 0.000776049739215523f, 0.0008854871848598123f, 0.000931503891479224f, 0.0007934969034977257f, 0.0008447190630249679f, 0.00075971067417413f, 0.0007496289326809347f, 0.0005199555889703333f, 0.0006993381539359689f, 0.0008755213348194957f, 0.0006838348344899714f, 0.0007899395423009992f, 0.000548154057469219f, 0.0010601191315799952f, 0.00063933344790712f, 0.0007497815531678498f, 0.0010717040859162807f, 0.0003922291216440499f, 0.00045889700413681567f, 0.0006724395789206028f, 0.0005431626341305673f, 0.0008587491465732455f, 0.0007802210166119039f, 0.0008319963235408068f, 0.0007495675818063319f, 0.0010861572809517384f, 0.0008493929635733366f, 0.0010421493789181113f, 0.0007538656936958432f, 0.0006656445912085474f, 0.0007689832127653062f, 0.0006448182975873351f, 0.0008276836597360671f, 0.0009586098603904247f, 0.0006352488999255002f, 0.0005484608700498939f, 0.000600899918936193f, 0.0005635349662043154f, 0.0010362479370087385f, 0.0009483837056905031f, 0.0007364034536294639f, 0.0010092201409861445f, 0.0007596687646582723f, 0.0006221221992745996f, 0.001195255434140563f, 0.000821713067125529f, 0.0006737763178534806f, 0.00057099579134956f, 0.001027599791996181f, 0.000656882650218904f, 0.0005843274993821979f, 0.0006120624020695686f, 0.0008689204114489257f, 0.0008175147231668234f, 0.0006739362725056708f, 0.0009178107720799744f, 0.0006269357982091606f, 0.0006391513161361217f, 0.0006117862649261951f, 0.0005415846244432032f, 0.0007631747866980731f, 0.0010478798067197204f, 0.0006014754180796444f, 0.0004857302119489759f, 0.0008940090774558485f, 0.000727989652659744f, 0.0007110111182555556f, 0.000557633291464299f, 0.0008282103226520121f, 0.0005604144535027444f, 0.0007989588775672019f, 0.0005140103166922927f, 0.0008616340928710997f, 0.0006711604073643684f, 0.0007862542988732457f, 0.0007445709779858589f, 0.0008366825641132891f, 0.0007154086488299072f, 0.0006039300933480263f, 0.0009842065628618002f, 0.001209120498970151f, 0.0005566704785451293f, 0.0005790839204564691f, 0.0006139898323453963f, 0.0008776661125011742f, 0.0006316680228337646f, 0.0008241510367952287f, 0.0005748822004534304f, 0.0008790742722339928f, 0.0010017305612564087f, 0.0006504759658128023f, 0.0007070534629747272f, 0.0005715584848076105f, 0.000841568922623992f, 0.0006616765167564154f, 0.0006604804657399654f, 0.0005537713877856731f, 0.0007247207686305046f, 0.0006863376474939287f, 0.0006634738529101014f, 0.000910861708689481f, 0.000879536266438663f, 0.0010620912071317434f, 0.0007653972716070712f, 0.0006689147558063269f, 0.0008235438726842403f, 0.0006172229768708348f, 0.0009844547603279352f, 0.0007235653465613723f, 0.0004642286221496761f, 0.0006789939943701029f, 0.000957968644797802f, 0.0007397447479888797f, 0.0007342545432038605f, 0.0006304178386926651f, 0.0007713586091995239f, 0.0008163304883055389f, 0.0006897139828652143f, 0.00048159423749893904f, 0.0007337882416322827f, 0.0006699346122331917f, 0.0006232622545212507f, 0.0005936368834227324f, 0.0006148992106318474f, 0.0008691788534633815f, 0.0005771744763478637f, 0.0004976334166713059f, 0.0006820835988037288f, 0.0006358784739859402f, 0.0008110826602205634f, 0.0009265438420698047f, 0.0007534247124567628f, 0.0010228378232568502f, 0.0005419908557087183f, 0.000510885554831475f, 0.0006940694875083864f, 0.0008280982146970928f, 0.0008424235275015235f, 0.0006700193043798208f, 0.0005501653649844229f, 0.0009353845962323248f, 0.0007273317896761f, 0.001032762578688562f, 0.0006979713216423988f, 0.0007025356753729284f, 0.0004373117408249527f, 0.0005792430602014065f, 0.0007221373380161822f, 0.0006950722308829427f, 0.0006518089212477207f, 0.0006780093535780907f, 0.000640341080725193f, 0.0010443161008879542f, 0.0008893082849681377f, 0.0009289561421610415f, 0.0005314150475896895f, 0.0013491972349584103f, 0.0007138221408240497f, 0.0007713199011050165f, 0.0009137470042333007f, 0.0005486052832566202f, 0.0009597616735845804f, 0.0008148401975631714f, 0.0005135280080139637f, 0.0007445734227076173f, 0.0006581366178579628f, 0.0008968306938186288f, 0.0006096127908676863f, 0.0007603625417686999f, 0.0006080908351577818f, 0.0007674084627069533f, 0.0007013169815763831f, 0.0006565965013578534f, 0.0009213155717588961f, 0.0005846555577591062f, 0.0007981274393387139f, 0.001014844048768282f, 0.0005904908175580204f, 0.0007488203118555248f, 0.0008026336436159909f, 0.0006634195451624691f, 0.0008139872807078063f, 0.0005354154855012894f, 0.0008412469178438187f, 0.0008429661393165588f, 0.0006312383920885623f, 0.0007924605743028224f, 0.0006908879149705172f, 0.0008611576049588621f, 0.000996575690805912f, 0.0008632375975139439f, 0.0006492003449238837f, 0.0006896810955367982f, 0.0007038700277917087f, 0.0008072826894931495f, 0.0007946690311655402f, 0.0007841088809072971f, 0.000569376687053591f, 0.0008324853843078017f, 0.0005624553305096924f, 0.0006163323414511979f, 0.0005886967992410064f, 0.000748101097997278f, 0.0005249704117886722f, 0.0007861368940211833f, 0.0005449950695037842f, 0.000796791457105428f, 0.0006618876359425485f, 0.0009115675929933786f, 0.0006322073750197887f, 0.0005473332130350173f, 0.0007067397236824036f, 0.0007199174142442644f, 0.0005502875428646803f, 0.000969695916865021f, 0.0005844591651111841f, 0.000730292231310159f, 0.0005060475668869913f, 0.0008437123615294695f, 0.0006145290099084377f, 0.0010184514103457332f, 0.0007816340657882392f, 0.000884258362930268f, 0.0004470762796700001f, 0.0010037354659289122f, 0.0007393044070340693f, 0.0009152739075943828f, 0.000497974397148937f, 0.0005152905359864235f, 0.0009248938877135515f, 0.0007742469315417111f, 0.0007601759280078113f, 0.0007518156198784709f, 0.0005354564054869115f, 0.0008125185850076377f, 0.000517430598847568f, 0.0005409687291830778f, 0.0008900744724087417f, 0.0006894199759699404f, 0.0006174590671434999f, 0.0006987413507886231f, 0.0007863243226893246f, 0.0008618725696578622f, 0.0007003895589150488f, 0.0006052431417629123f, 0.0007524755783379078f, 0.0010003427742049098f, 0.0007044825470075011f, 0.0008855891064740717f, 0.0007183100678957999f, 0.0007498730556108057f, 0.000782911607529968f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031939097680151463f, 0.004624807275831699f, 0.0036715331953018904f, 0.005034154746681452f, 0.004857225809246302f, 0.00392854493111372f, 0.0027171005494892597f, 0.0032878017518669367f, 0.003979903645813465f, 0.0029867382254451513f, 0.004315401427447796f, 0.0031204065307974815f, 0.003723753849044442f, 0.003468264127150178f, 0.0022157595958560705f, 0.0037609743885695934f, 0.004527800716459751f, 0.003983607050031424f, 0.0049391272477805614f, 0.004032513592392206f, 0.00355257885530591f, 0.004497895482927561f, 0.0035073531325906515f, 0.0033460399135947227f, 0.0048453714698553085f, 0.003794308053329587f, 0.0036880935076624155f, 0.0033017785754054785f, 0.005043949466198683f, 0.003968609031289816f, 0.00355806783773005f, 0.0034465608187019825f, 0.004352041985839605f, 0.003788389265537262f, 0.003929562866687775f, 0.0035623707808554173f, 0.003944926895201206f, 0.0035934606567025185f, 0.004765044432133436f, 0.003569437190890312f, 0.004215363413095474f, 0.005091418046504259f, 0.002948205918073654f, 0.002803052542731166f, 0.004835240077227354f, 0.0040574027225375175f, 0.005180574022233486f, 0.0030330761801451445f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015974893467500806f, 0.0009395191445946693f, 0.0022928586695343256f, 0.0014726248336955905f, 0.0013314697425812483f, 0.001909252954646945f, 0.0011708189267665148f, 0.0018338991794735193f, 0.00089523900533095f, 0.0019788104109466076f, 0.00142269441857934f, 0.0017931569600477815f, 0.0015872258227318525f, 0.0009266256238333881f, 0.0008761013741604984f, 0.0018225477542728186f, 0.0013510830467566848f, 0.0015119966119527817f, 0.0010820775059983134f, 0.001427846378646791f, 0.00117769674398005f, 0.0019284182926639915f, 0.0012553230626508594f, 0.001423876266926527f, 0.0012728901347145438f, 0.001333689084276557f, 0.0010498788906261325f, 0.000863809953443706f, 0.001245576422661543f, 0.0011846154229715466f, 0.0009307028958573937f, 0.0007443081703968346f, 0.0007451989804394543f, 0.0008154132519848645f, 0.0009919649455696344f, 0.0015671791043132544f, 0.0010627852752804756f, 0.0011152146616950631f, 0.0020284554921090603f, 0.0008574433741159737f, 0.000880841223988682f, 0.0012440575519576669f, 0.0009669261635281146f, 0.0017380275530740619f, 0.0016744561726227403f, 0.00156533089466393f, 0.0015351437032222748f, 0.0011123528238385916f, 0.0009977917652577162f, 0.0012755562784150243f, 0.0020768847316503525f, 0.000642260245513171f, 0.0014991682255640626f, 0.0005945781012997031f, 0.0006328797899186611f, 0.0015878381673246622f, 0.0014709497336298227f, 0.0008264248026534915f, 0.0018918494461104274f, 0.001140877604484558f, 0.0015535663114860654f, 0.001583982608281076f, 0.0013362402096390724f, 0.0019509911071509123f, 0.0005238812882453203f, 0.0013483281945809722f, 0.0009923335164785385f, 0.0017654397524893284f, 0.0008759323391132057f, 0.0012127890950068831f, 0.002167799975723028f, 0.001394877559505403f, 0.0012461146106943488f, 0.002704670187085867f, 0.001059620175510645f, 0.0015613065334036946f, 0.000965674000326544f, 0.0013926886022090912f, 0.00205608201213181f, 0.0008023729315027595f, 0.000962474849075079f, 0.0012716539204120636f, 0.0011693468550220132f, 0.0011315203737467527f, 0.0013121686642989516f, 0.0016035794978961349f, 0.0009647724218666553f, 0.0007845341460779309f, 0.0008751447312533855f, 0.0013986286940053105f, 0.0017378124175593257f, 0.0015927855856716633f, 0.0012161784106865525f, 0.001848196261562407f, 0.0011860261438414454f, 0.0014158965786918998f, 0.0013974166940897703f, 0.0008317598840221763f, 0.0018295873887836933f, 0.0012008025078102946f, 0.0021733606699854136f, 0.0016923885559663177f, 0.0012682947563007474f, 0.0011859791120514274f, 0.0011570194037631154f, 0.0010916233295574784f, 0.0013103036908432841f, 0.0015969504602253437f, 0.0006244492251425982f, 0.0015326725551858544f, 0.0005977508262731135f, 0.000841637491248548f, 0.0008577285916544497f, 0.0006630196003243327f, 0.001115036546252668f, 0.0026478085201233625f, 0.0016010052058845758f, 0.0008676486322656274f, 0.000991622218862176f, 0.0013419815804809332f, 0.0007501089130528271f, 0.0009317651856690645f, 0.001644109026528895f, 0.0011963557917624712f, 0.0015547991497442126f, 0.0027077149134129286f, 0.0020452099852263927f, 0.0017091528279706836f, 0.0015176309971138835f, 0.0013813846744596958f, 0.001026867306791246f, 0.0012587029486894608f, 0.0013093745801597834f, 0.0013074419694021344f, 0.0011265143984928727f, 0.0013362168101593852f, 0.0007219417602755129f, 0.0015653792070224881f, 0.0005815757322125137f, 0.0006686499691568315f, 0.0015298794023692608f, 0.0008651362149976194f, 0.0013354786206036806f, 0.0011298720492050052f, 0.0009606749517843127f, 0.001434130477719009f, 0.0006257676286622882f, 0.0007232691277749836f, 0.0014703214401379228f, 0.0009568578680045903f, 0.0008074968936853111f, 0.001253347611054778f, 0.0008182847523130476f, 0.0006904422771185637f, 0.0020332355052232742f, 0.0013003089698031545f, 0.0008120218990370631f, 0.0008673678385093808f, 0.0009821986313909292f, 0.0013718035770580173f, 0.0010631588520482183f, 0.0012466692132875323f, 0.0017837563063949347f, 0.0017653725808486342f, 0.001727620023302734f, 0.001010500593110919f, 0.0025430379901081324f, 0.0010217790259048343f, 0.001367974909953773f, 0.0010279223788529634f, 0.0010640729451552033f, 0.0015443518059328198f, 0.0013382966862991452f, 0.0008854526095092297f, 0.000737740017939359f, 0.0012424271553754807f, 0.0011412438470870256f, 0.0027731203008443117f, 0.0012875553220510483f, 0.0018500513397157192f, 0.0022329972125589848f, 0.0012179206823930144f, 0.0010653614299371839f, 0.000956635398324579f, 0.0006538885645568371f, 0.0010341644519940019f, 0.0011047102743759751f, 0.00109067652374506f, 0.0006568095996044576f, 0.0011195370461791754f, 0.001376217813231051f, 0.0009706093114800751f, 0.0009086509817279875f, 0.0007886906969361007f, 0.001177235972136259f, 0.0014208920765668154f, 0.001293898792937398f, 0.0008415694464929402f, 0.0008047870942391455f, 0.0010335783008486032f, 0.0009094999986700714f, 0.0010331013472750783f, 0.0012678889324888587f, 0.001599389361217618f, 0.0011678856099024415f, 0.001602589851245284f, 0.0011583196464926004f, 0.0015081791207194328f, 0.0007860432378947735f, 0.002464072313159704f, 0.0013684607110917568f, 0.0015946945641189814f, 0.0011490460019558668f, 0.0016024181386455894f, 0.0008143014856614172f, 0.0009167653042823076f, 0.0013785709161311388f, 0.001619346672669053f, 0.0011591078946366906f, 0.0013534554746001959f, 0.0010285108583047986f, 0.001000735443085432f, 0.0014293116983026266f, 0.0013404573546722531f, 0.001517167896963656f, 0.0015830162446945906f, 0.0011670031817629933f, 0.0014224457554519176f, 0.0017284057103097439f, 0.0008186752675101161f, 0.0015358456876128912f, 0.0010744568426162004f, 0.0012477957643568516f, 0.001053446438163519f, 0.000798898923676461f, 0.001121513661928475f, 0.0009503682958893478f, 0.0008012515027076006f, 0.0024428812321275473f, 0.001806020736694336f, 0.0010134200565516949f, 0.001794264419004321f, 0.0007605449645780027f, 0.0009036939009092748f, 0.001094197854399681f, 0.0008907612063921988f, 0.001273946720175445f, 0.0007293907692655921f, 0.0010050726123154163f, 0.0014068768359720707f, 0.0013429030077531934f, 0.0015437768306583166f, 0.0017869549337774515f, 0.001282191602513194f, 0.0005667177028954029f, 0.0010953426826745272f, 0.002078084973618388f, 0.0008607012568973005f, 0.001005571219138801f, 0.001236547832377255f, 0.0008232277468778193f, 0.00158607994671911f, 0.0015536320861428976f, 0.0013335287803784013f, 0.001470455201342702f, 0.0011813531164079905f, 0.0015079561853781343f, 0.0020172500517219305f, 0.0010849182726815343f, 0.0014264308847486973f, 0.001428066985681653f, 0.001648278790526092f, 0.0010648469906300306f, 0.0020258938893675804f, 0.0008950563496910036f, 0.0011405152035877109f, 0.0009404347511008382f, 0.0010240916162729263f, 0.0015948740765452385f, 0.0013366875937208533f, 0.0014138971455395222f, 0.0008303548092953861f, 0.0013885522494092584f, 0.0008847333956509829f, 0.0014424349647015333f, 0.00095894536934793f, 0.0013454568106681108f, 0.0013359430013224483f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031875099521130323f, 0.004607480484992266f, 0.0027181378100067377f, 0.007576459087431431f, 0.0037475875578820705f, 0.002747722901403904f, 0.012524324469268322f, 0.004190872889012098f, 0.005540087819099426f, 0.00263279490172863f, 0.004539245739579201f, 0.002063692780211568f, 0.0024269348941743374f, 0.007920367643237114f, 0.005272313486784697f, 0.0026305175852030516f, 0.004200253635644913f, 0.0026590069755911827f, 0.0043630641885101795f, 0.008871135301887989f, 0.004095821641385555f, 0.0019766739569604397f, 0.002053666627034545f, 0.00803748145699501f, 0.004844198003411293f, 0.006659991107881069f, 0.011277967132627964f, 0.015167517587542534f, 0.0035141543485224247f, 0.00728182028979063f, 0.020178912207484245f, 0.016231132671236992f, 0.014445955865085125f, 0.010762704536318779f, 0.003912839572876692f, 0.0040542930364608765f, 0.006521112751215696f, 0.004864266607910395f, 0.0017078326782211661f, 0.015455750748515129f, 0.008553863503038883f, 0.003340940224006772f, 0.019314266741275787f, 0.0023658631835132837f, 0.002428967971354723f, 0.0030302756931632757f, 0.0056217145174741745f, 0.002949937479570508f, 0.007412697188556194f, 0.0018994398415088654f, 0.002432883018627763f, 0.01639464497566223f, 0.004227569792419672f, 0.02225250005722046f, 0.027309618890285492f, 0.0044679841957986355f, 0.0030294707976281643f, 0.012106910347938538f, 0.002374308416619897f, 0.0030642414931207895f, 0.003015050897374749f, 0.0024272967129945755f, 0.004354539792984724f, 0.0019610808230936527f, 0.033676184713840485f, 0.0035999594256281853f, 0.005097273271530867f, 0.0018849625485017896f, 0.007745103444904089f, 0.0020399298518896103f, 0.0019644952844828367f, 0.0024748260620981455f, 0.006392729934304953f, 0.0033544437028467655f, 0.0046200561337172985f, 0.006255151238292456f, 0.011555072851479053f, 0.004382180515676737f, 0.0024931319057941437f, 0.007064802572131157f, 0.00887462217360735f, 0.005545652471482754f, 0.009693263098597527f, 0.0046412949450314045f, 0.004094788338989019f, 0.002143086865544319f, 0.004435273818671703f, 0.0097052538767457f, 0.008900516666471958f, 0.0041420417837798595f, 0.00212620897218585f, 0.003345559583976865f, 0.0029797558672726154f, 0.0025692987255752087f, 0.010434291325509548f, 0.00247482699342072f, 0.005763494409620762f, 0.017225496470928192f, 0.0026795181911438704f, 0.002619541948661208f, 0.0019379109144210815f, 0.0026775908190757036f, 0.003527943044900894f, 0.0030298701021820307f, 0.00739440880715847f, 0.0051930928602814674f, 0.0028020667377859354f, 0.003161369590088725f, 0.011664079502224922f, 0.002775089116767049f, 0.029604144394397736f, 0.011737237684428692f, 0.01756672002375126f, 0.01992291398346424f, 0.005290403962135315f, 0.0022423083428293467f, 0.003415232291445136f, 0.016018111258745193f, 0.012177727185189724f, 0.007759703788906336f, 0.010228430852293968f, 0.00920823123306036f, 0.004021547269076109f, 0.005636833608150482f, 0.005818330682814121f, 0.0026724899653345346f, 0.0023926966823637486f, 0.0043802084401249886f, 0.0017507750308141112f, 0.003175331512466073f, 0.0079704150557518f, 0.00546468747779727f, 0.002216781722381711f, 0.003803189843893051f, 0.003866121405735612f, 0.004211471416056156f, 0.01779458485543728f, 0.0036841738037765026f, 0.018348315730690956f, 0.010560890659689903f, 0.0065942807123064995f, 0.011463921517133713f, 0.0036771693266928196f, 0.003132621757686138f, 0.014006398618221283f, 0.002063938183709979f, 0.020336562767624855f, 0.015855243429541588f, 0.005684399511665106f, 0.010511605069041252f, 0.013120348565280437f, 0.004789453465491533f, 0.011481818743050098f, 0.011199445463716984f, 0.002359208185225725f, 0.002546378644183278f, 0.014561159536242485f, 0.012808006256818771f, 0.011068927124142647f, 0.00313893286511302f, 0.006581457331776619f, 0.002847481518983841f, 0.0028624781407415867f, 0.0024383775889873505f, 0.003119624685496092f, 0.00336922868154943f, 0.001975437393411994f, 0.0032162207644432783f, 0.006431861314922571f, 0.005793699063360691f, 0.010145332664251328f, 0.0070568048395216465f, 0.008723968639969826f, 0.006725974380970001f, 0.025845753028988838f, 0.0028007435612380505f, 0.006959736812859774f, 0.001754089375026524f, 0.0069929505698382854f, 0.0025718177203089f, 0.0016870716353878379f, 0.007159838452935219f, 0.004769375082105398f, 0.00652120029553771f, 0.016626957803964615f, 0.0037865284830331802f, 0.004137502517551184f, 0.0072972835041582584f, 0.012588970363140106f, 0.004572176840156317f, 0.0027756409253925085f, 0.008977161720395088f, 0.005975508131086826f, 0.0059531014412641525f, 0.008131015114486217f, 0.0030004188884049654f, 0.002566618612036109f, 0.011890118941664696f, 0.009053751826286316f, 0.006607227958738804f, 0.003894532099366188f, 0.0017528492026031017f, 0.003342615906149149f, 0.0020357442554086447f, 0.013711625710129738f, 0.002447742037475109f, 0.004350016359239817f, 0.0025429048109799623f, 0.013740058988332748f, 0.0030077053233981133f, 0.0031528195831924677f, 0.0041196695528924465f, 0.006747935898602009f, 0.00561128742992878f, 0.008833134546875954f, 0.0027183087076991796f, 0.003798621939495206f, 0.003042596857994795f, 0.01963920146226883f, 0.0033883939031511545f, 0.009672475978732109f, 0.010521973483264446f, 0.0017139650881290436f, 0.002669581910595298f, 0.0021562569309026003f, 0.0021230075508356094f, 0.005884360522031784f, 0.003182752523571253f, 0.002795054344460368f, 0.019350668415427208f, 0.003472639713436365f, 0.00962018221616745f, 0.0022619201336055994f, 0.008974780328571796f, 0.005740200635045767f, 0.004842463415116072f, 0.005355829373002052f, 0.015000681392848492f, 0.0032889307476580143f, 0.004498348105698824f, 0.00804874673485756f, 0.005098886787891388f, 0.011945121921598911f, 0.01096793357282877f, 0.0031773317605257034f, 0.010086508467793465f, 0.005720379296690226f, 0.015211625024676323f, 0.01045830175280571f, 0.004185257945209742f, 0.002256846521049738f, 0.0020390073768794537f, 0.004561124835163355f, 0.0028370011132210493f, 0.014394450932741165f, 0.010169968008995056f, 0.0037658934015780687f, 0.011564625427126884f, 0.006898215040564537f, 0.004972649738192558f, 0.013212195597589016f, 0.003208241192623973f, 0.0023629802744835615f, 0.0027828325983136892f, 0.0036028577014803886f, 0.004839374218136072f, 0.002504992764443159f, 0.0038423079531639814f, 0.003864603815600276f, 0.0038170493207871914f, 0.003614294109866023f, 0.0035808223765343428f, 0.0041095782071352005f, 0.0018792145419865847f, 0.013656841591000557f, 0.013019158504903316f, 0.007200515829026699f, 0.011102881282567978f, 0.003142723347991705f, 0.0044224318116903305f, 0.012172910384833813f, 0.00996807124465704f, 0.004711414687335491f, 0.0170415248721838f, 0.003727439558133483f, 0.006024483125656843f, 0.005394354462623596f, 0.003042111871764064f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004174559842795134f, 0.0013293640222400427f, 0.005274173337966204f, 0.004315870814025402f, 0.0037147412076592445f, 0.0013954541645944118f, 0.005430638324469328f, 0.002024722518399358f, 0.0012551259715110064f, 0.0017634493997320533f, 0.005008748732507229f, 0.003898847149685025f, 0.0038795452564954758f, 0.004226909950375557f, 0.004844488576054573f, 0.0013484088703989983f, 0.0017383297672495246f, 0.0014827082632109523f, 0.0013272524811327457f, 0.004497802350670099f, 0.0016943715745583177f, 0.0014689111849293113f, 0.004557461477816105f, 0.0025190599262714386f, 0.0012817831011489034f, 0.0015428636688739061f, 0.001608436112292111f, 0.0017346329987049103f, 0.006010186392813921f, 0.00135555281303823f, 0.00670287199318409f, 0.00137528614141047f, 0.006908167619258165f, 0.005288917105644941f, 0.003967058379203081f, 0.001520076533779502f, 0.005515239201486111f, 0.005805922206491232f, 0.006227925419807434f, 0.004177268594503403f, 0.00532703660428524f, 0.0013914118753746152f, 0.006067666690796614f, 0.0019067703979089856f, 0.0015032571973279119f, 0.005190547555685043f, 0.005028978921473026f, 0.0018149178940802813f, 0.0015556883299723268f, 0.005793910939246416f, 0.0015880861319601536f, 0.004806456621736288f, 0.0018491283990442753f, 0.0013803908368572593f, 0.0014996830141171813f, 0.001653578830882907f, 0.0015847082249820232f, 0.0015556113794445992f, 0.0014636600390076637f, 0.0058455998077988625f, 0.0011953918728977442f, 0.00442513357847929f, 0.001553268637508154f, 0.0015555621357634664f, 0.0016120291547849774f, 0.004619883373379707f, 0.0011648900108411908f, 0.004708315245807171f, 0.0016557899070903659f, 0.00502794561907649f, 0.0019051618874073029f, 0.004754388239234686f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008425925625488162f, 0.0006532693514600396f, 0.0008416087948717177f, 0.0007631789776496589f, 0.0007500079809688032f, 0.0005505555309355259f, 0.0007873097783885896f, 0.000609107781201601f, 0.0006368437898345292f, 0.0006429263157770038f, 0.0008965380256995559f, 0.0007769149378873408f, 0.0006299624219536781f, 0.0009070986998267472f, 0.0005425445269793272f, 0.0009510880336165428f, 0.0007854645373299718f, 0.0008720661280676723f, 0.001068364130333066f, 0.000525419192854315f, 0.001153940218500793f, 0.0008602144080214202f, 0.0009746532887220383f, 0.0012180428020656109f, 0.0008771331631578505f, 0.000827631913125515f, 0.0005990088684484363f, 0.0009945629863068461f, 0.0008129228954203427f, 0.001026084995828569f, 0.001029436127282679f, 0.0008513514185324311f, 0.0010177165968343616f, 0.000732342479750514f, 0.0009873443050310016f, 0.0008978299447335303f, 0.0009593966533429921f, 0.0007942173397168517f, 0.0008114652591757476f, 0.0007796671707183123f, 0.0006943808984942734f, 0.0012416272656992078f, 0.0006308587617240846f, 0.0007423234637826681f, 0.0006507127545773983f, 0.000996233313344419f, 0.0007277479162439704f, 0.0008253586711362004f, 0.0005361679941415787f, 0.001052995678037405f, 0.0005178612773306668f, 0.0007834666757844388f, 0.000424378173192963f, 0.0010814984561875463f, 0.0005880820681340992f, 0.0007709492347203195f, 0.0011259110178798437f, 0.0007213219651021063f, 0.000583939254283905f, 0.0009609611006453633f, 0.0007059077615849674f, 0.0007147743599489331f, 0.0006346600712276995f, 0.0008378096390515566f, 0.0009369142935611308f, 0.0009670580620877445f, 0.0008838619105517864f, 0.0006697209319099784f, 0.0006601167260669172f, 0.0007367068901658058f, 0.0006391858914867043f, 0.0008816346526145935f, 0.000527712341863662f, 0.0006867337506264448f, 0.000908427988179028f, 0.0007282051374204457f, 0.0012058868305757642f, 0.0006570991827175021f, 0.0006335382931865752f, 0.0007509468705393374f, 0.0005931192426942289f, 0.001145857386291027f, 0.0009712834726087749f, 0.0008368890266865492f, 0.0007260957499966025f, 0.0006379045662470162f, 0.0010011174017563462f, 0.0006016684346832335f, 0.0010201946133747697f, 0.0007369472878053784f, 0.000655947660561651f, 0.0010491249850019813f, 0.0006098921876400709f, 0.0010447169188410044f, 0.0006762255216017365f, 0.0008076379308477044f, 0.0007447078824043274f, 0.0007129471050575376f, 0.0007019276381470263f, 0.0007898082840256393f, 0.0005655726417899132f, 0.0007519432692788541f, 0.0005326156388036907f, 0.000671186251565814f, 0.0006690274458378553f, 0.0009727951837703586f, 0.000603029562626034f, 0.0006018773419782519f, 0.0008229647064581513f, 0.0008070437470450997f, 0.0008446932770311832f, 0.0007171967881731689f, 0.0006892785895615816f, 0.0007610265165567398f, 0.0010074775200337172f, 0.0005454083438962698f, 0.0006311666802503169f, 0.0008635749109089375f, 0.0007970273145474494f, 0.0006932890973985195f, 0.0007222554413601756f, 0.0008922508568502963f, 0.0005990923382341862f, 0.0007577706128358841f, 0.0007989800069481134f, 0.000784480944275856f, 0.0009730823803693056f, 0.0007332059904001653f, 0.0005955620435997844f, 0.000646824249997735f, 0.0007391232647933066f, 0.0006677315104752779f, 0.00062981789233163f, 0.0006824972806498408f, 0.0008571572252549231f, 0.000796005129814148f, 0.0008906030561774969f, 0.0006244140095077455f, 0.0009025685722008348f, 0.0006423919112421572f, 0.0008490049513056874f, 0.0005874863127246499f, 0.0008264986681751907f, 0.0005285832448862493f, 0.0008467655861750245f, 0.0007168850861489773f, 0.000587480899412185f, 0.0007339265430346131f, 0.0008013271726667881f, 0.0007296495605260134f, 0.0004649838083423674f, 0.0007421885966323316f, 0.0008413033210672438f, 0.0007949583814479411f, 0.000919929938390851f, 0.0006225497927516699f, 0.0007224328001029789f, 0.0008038265514187515f, 0.0008101724670268595f, 0.0005538312834687531f, 0.0007904506637714803f, 0.0006583656650036573f, 0.0007690399652346969f, 0.0006238430505618453f, 0.0008545824675820768f, 0.0008268687524832785f, 0.0006573298014700413f, 0.0007195736980065703f, 0.0009064689511433244f, 0.0007891335408203304f, 0.0007866699597798288f, 0.0005701711634173989f, 0.0012401780113577843f, 0.0009015856776386499f, 0.0009050326771102846f, 0.001142226974479854f, 0.0008046298171393573f, 0.0008752989233471453f, 0.0006971597904339433f, 0.0009447138872928917f, 0.0008550301427021623f, 0.0006832875078544021f, 0.0007071084692142904f, 0.0008415185147896409f, 0.0006583757931366563f, 0.0008243625634349883f, 0.0005381180089898407f, 0.0006711263558827341f, 0.0007781092426739633f, 0.001006217789836228f, 0.0009992897976189852f, 0.0006031107041053474f, 0.0008507350576110184f, 0.0008656119462102652f, 0.0007939495262689888f, 0.000710934866219759f, 0.0007438842440024018f, 0.000898196769412607f, 0.0010443436913192272f, 0.0007263823645189404f, 0.0007857292075641453f, 0.0004509957798290998f, 0.0005130372010171413f, 0.0007090622093528509f, 0.0007376417052000761f, 0.0007199803949333727f, 0.0007423922652378678f, 0.0005538678378798068f, 0.0006557414890266955f, 0.0006708670407533646f, 0.000781199720222503f, 0.0004859360051341355f, 0.0008361890213564038f, 0.0007957168272696435f, 0.000819214794319123f, 0.0008407084969803691f, 0.0005108426557853818f, 0.0008730644476599991f, 0.0009573109564371407f, 0.0005154283135198057f, 0.0011560815619304776f, 0.0009621306089684367f, 0.0009558117599226534f, 0.0007363866316154599f, 0.0006760720862075686f, 0.0008304449147544801f, 0.000803319038823247f, 0.0007282915175892413f, 0.0011598279234021902f, 0.0009449093486182392f, 0.0007911088177934289f, 0.0010430797701701522f, 0.0005898618255741894f, 0.0007616500952281058f, 0.0008967484463937581f, 0.0007041600183583796f, 0.0007590634631924331f, 0.0004820916510652751f, 0.0010583397233858705f, 0.0009941308526322246f, 0.0008667932124808431f, 0.0008419883088208735f, 0.0006687098066322505f, 0.0004858551255892962f, 0.0007852812996134162f, 0.0008574625826440752f, 0.0005536943208426237f, 0.0008783839293755591f, 0.0005617218557745218f, 0.0006361576961353421f, 0.0007223015418276191f, 0.0010392509866505861f, 0.0006983215571381152f, 0.0007524735410697758f, 0.0007275340030901134f, 0.0007277564727701247f, 0.0007937925402075052f, 0.0009769515600055456f, 0.0006221731891855597f, 0.0008441807585768402f, 0.0006722555262967944f, 0.000692546833306551f, 0.000641676306258887f, 0.0006128133391030133f, 0.000879588711541146f, 0.0008745357627049088f, 0.0007531616720370948f, 0.0008815663168206811f, 0.0009361399570479989f, 0.0007017393363639712f, 0.0007549164583906531f, 0.000812473997939378f, 0.0009522246546112001f, 0.0005662302137352526f, 0.0005633860128000379f, 0.0008336910395883024f, 0.0008287372766062617f, 0.0006606632960028946f, 0.0006622527725994587f, 0.0007240088889375329f, 0.0006907725473865867f, 0.0009527129586786032f, 0.0005920737748965621f, 0.0008988784975372255f, 0.0005540939164347947f, 0.0009027579799294472f, 0.0006442824960686266f, 0.0009779941756278276f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004166804254055023f, 0.0041992091573774815f, 0.0043398854322731495f, 0.004283162299543619f, 0.004413176793605089f, 0.006104509346187115f, 0.005031270906329155f, 0.004034337587654591f, 0.004663161933422089f, 0.00545604107901454f, 0.006202303804457188f, 0.004224604927003384f, 0.004795059561729431f, 0.0052252463065087795f, 0.0041749789379537106f, 0.007485642097890377f, 0.006021870765835047f, 0.004830237478017807f, 0.004374584648758173f, 0.0035511543974280357f, 0.004100744146853685f, 0.004670142196118832f, 0.005611659958958626f, 0.005372843239456415f, 0.004446847829967737f, 0.003915086854249239f, 0.004943964537233114f, 0.004782290197908878f, 0.005396265536546707f, 0.006406284868717194f, 0.00446636788547039f, 0.003950160928070545f, 0.005353482440114021f, 0.003906985744833946f, 0.0039127664640545845f, 0.004412451758980751f, 0.005382310599088669f, 0.004378205630928278f, 0.003341633826494217f, 0.003964168019592762f, 0.00467865401878953f, 0.005712038837373257f, 0.0050404868088662624f, 0.005014354363083839f, 0.0036698393523693085f, 0.004457729868590832f, 0.004721621982753277f, 0.0045827473513782024f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013112135929986835f, 0.001335991662926972f, 0.0009108735248446465f, 0.0014189393259584904f, 0.0010492091532796621f, 0.0013287616893649101f, 0.0013358329888433218f, 0.001298906747251749f, 0.0011371979489922523f, 0.0009879564167931676f, 0.0012447279877960682f, 0.0011487399460747838f, 0.0012514685513451695f, 0.0011767884716391563f, 0.001637462293729186f, 0.0008458489319309592f, 0.001423860783688724f, 0.0012300725793465972f, 0.0012413846561685205f, 0.0007783779292367399f, 0.0010331961093470454f, 0.0011185442563146353f, 0.001960183959454298f, 0.0011155278189107776f, 0.0012980093015357852f, 0.0013402201002463698f, 0.0013134334003552794f, 0.001051377970725298f, 0.000921870581805706f, 0.0009775467915460467f, 0.001100265420973301f, 0.001407799543812871f, 0.001130476244725287f, 0.0014443343970924616f, 0.0015205115778371692f, 0.0010374654084444046f, 0.0008673842530697584f, 0.001203348976559937f, 0.0011154080275446177f, 0.0012491010129451752f, 0.0011142444564029574f, 0.0015772641636431217f, 0.0015694847097620368f, 0.0013551587471738458f, 0.0013885340886190534f, 0.001047195983119309f, 0.0018381279660388827f, 0.0011732458369806409f, 0.0011859559454023838f, 0.0010840079048648477f, 0.0016098545165732503f, 0.001014142413623631f, 0.0012873439118266106f, 0.0014153510564938188f, 0.0014180407160893083f, 0.0012062557507306337f, 0.0013679532567039132f, 0.0015649405540898442f, 0.0007620850228704512f, 0.0010901384521275759f, 0.0009004141320474446f, 0.0013323983876034617f, 0.0012544628698378801f, 0.000963010243140161f, 0.0008877587970346212f, 0.0011240344028919935f, 0.00134881935082376f, 0.0008874543709680438f, 0.001416147337295115f, 0.001311634317971766f, 0.0019127150299027562f, 0.0010950519936159253f, 0.000983038335107267f, 0.001574337249621749f, 0.0010131772141903639f, 0.0013145344564691186f, 0.0010462283389642835f, 0.0015994368586689234f, 0.0011026838328689337f, 0.0011103230062872171f, 0.0014872141182422638f, 0.0012332680635154247f, 0.0010324103059247136f, 0.0008751071291044354f, 0.0013508291449397802f, 0.0011996435932815075f, 0.0012273192405700684f, 0.0009880054276436567f, 0.0011084340512752533f, 0.0013336390256881714f, 0.0013987880665808916f, 0.0012535143177956343f, 0.0009613452129997313f, 0.0011032073525711894f, 0.0013334740651771426f, 0.0009453127277083695f, 0.0012350588804110885f, 0.001250782166607678f, 0.0012748755980283022f, 0.001239792793057859f, 0.001020221272483468f, 0.0010264351731166244f, 0.0014211784582585096f, 0.0012085165362805128f, 0.0011536282254382968f, 0.0013173961779102683f, 0.0009916172130033374f, 0.0010147311259061098f, 0.0010755191324278712f, 0.001798198209144175f, 0.0010707653127610683f, 0.0014017099747434258f, 0.0010853628627955914f, 0.0011620738077908754f, 0.0013551758602261543f, 0.001394484075717628f, 0.0012037104461342096f, 0.0018289608415216208f, 0.0011135205859318376f, 0.0011729142861440778f, 0.0009715511696413159f, 0.001209976035170257f, 0.0011842509265989065f, 0.001178455539047718f, 0.001614196109585464f, 0.0007742265006527305f, 0.001126495306380093f, 0.001242372440174222f, 0.001265177153982222f, 0.0013514795573428273f, 0.001061663730069995f, 0.0012972542317584157f, 0.001055970205925405f, 0.0012890519574284554f, 0.0009667863487266004f, 0.0014001406962051988f, 0.000736789486836642f, 0.0011109118349850178f, 0.0014085716102272272f, 0.0016497161705046892f, 0.0011883880943059921f, 0.001172735821455717f, 0.0010597193613648415f, 0.001052936422638595f, 0.001192025258205831f, 0.0010650615440681577f, 0.0009201843640767038f, 0.0010921836365014315f, 0.0011729105608537793f, 0.0009547696681693196f, 0.0012684422545135021f, 0.00122499605640769f, 0.0013165803393349051f, 0.0011602835729718208f, 0.0012734318152070045f, 0.001601537223905325f, 0.0010760154109448195f, 0.0013492648722603917f, 0.001165732741355896f, 0.0010788573417812586f, 0.0013441471382975578f, 0.001048362348228693f, 0.0010377434082329273f, 0.0013835309073328972f, 0.0011429296573624015f, 0.0012496383860707283f, 0.001536667114123702f, 0.0010827927617356181f, 0.0013430073158815503f, 0.001313176704570651f, 0.0011379823554307222f, 0.001337968627922237f, 0.0010361039312556386f, 0.0016686752205714583f, 0.0011242961045354605f, 0.0009268212597817183f, 0.0014105407753959298f, 0.0013336873380467296f, 0.0011558457044884562f, 0.001219781581312418f, 0.0015401473501697183f, 0.001350270351395011f, 0.0009007002227008343f, 0.0011458992958068848f, 0.000912787567358464f, 0.0008944676956161857f, 0.0012766767758876085f, 0.0016438027378171682f, 0.0012037229025736451f, 0.0013149160658940673f, 0.0015308845322579145f, 0.0010641338303685188f, 0.0011451379396021366f, 0.0014840184012427926f, 0.0011527297319844365f, 0.001141741406172514f, 0.0012050352524966002f, 0.0010832357220351696f, 0.0018171790288761258f, 0.0009168352698907256f, 0.0006573967402800918f, 0.001034351415000856f, 0.0010011914419010282f, 0.0012315158965066075f, 0.0011945738224312663f, 0.0011312372516840696f, 0.0013377818977460265f, 0.0008383782696910203f, 0.0012303941184654832f, 0.0011360821081325412f, 0.001482162857428193f, 0.00115565350279212f, 0.0010371040552854538f, 0.0010520619107410312f, 0.0012117020087316632f, 0.0011594799580052495f, 0.0012607807293534279f, 0.0010615417268127203f, 0.0011118960101157427f, 0.000873698212672025f, 0.0013031287817284465f, 0.001107103074900806f, 0.0012122435728088021f, 0.001174254110082984f, 0.0011490023462101817f, 0.0011976221576333046f, 0.001047723344527185f, 0.0016867046942934394f, 0.0011068979511037469f, 0.0010125619592145085f, 0.0007775360718369484f, 0.0015329730231314898f, 0.0007973437895998359f, 0.0014473323244601488f, 0.0011964472942054272f, 0.0011297932360321283f, 0.000851308461278677f, 0.0013052077265456319f, 0.0013383979676291347f, 0.0011388353304937482f, 0.000963481783401221f, 0.0011377196060493588f, 0.0011224199552088976f, 0.0010084285167977214f, 0.00121700472664088f, 0.0009467719355598092f, 0.0012113492703065276f, 0.0009603521320968866f, 0.0011743049835786223f, 0.0013742793817073107f, 0.0014442785177379847f, 0.0013743420131504536f, 0.0011620543664321303f, 0.0010665390873327851f, 0.0010724799940362573f, 0.0010107560083270073f, 0.001445548259653151f, 0.0016118541825562716f, 0.001114297891035676f, 0.0012853879015892744f, 0.0014692648546770215f, 0.0011650387896224856f, 0.000985329388640821f, 0.0010587621945887804f, 0.001154249650426209f, 0.0011419797083362937f, 0.0011550596682354808f, 0.0014464245177805424f, 0.0010396199068054557f, 0.001394763239659369f, 0.0012089547235518694f, 0.0014189380453899503f, 0.0012622561771422625f, 0.001086037140339613f, 0.0011613676324486732f, 0.001205533160828054f, 0.000871328404173255f, 0.0012677123304456472f, 0.0013216993538662791f, 0.0012676046462729573f, 0.0013837864389643073f, 0.0013077680487185717f, 0.0014756987802684307f, 0.001609132275916636f, 0.0017837409395724535f, 0.0015677865594625473f, 0.0013215214712545276f, 0.0010577498469501734f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 640,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008845715783536434f, 0.000940368277952075f, 0.0011066158767789602f, 0.003687179647386074f, 0.0045480187982320786f, 0.0034555387683212757f, 0.004896591883152723f, 0.004374885465949774f, 0.0039338706992566586f, 0.00415782630443573f, 0.0009588501998223364f, 0.0009945761412382126f, 0.0009404835873283446f, 0.0008520414703525603f, 0.004374993033707142f, 0.0007436193991452456f, 0.004446837119758129f, 0.0007639272953383625f, 0.003775801742449403f, 0.0048459977842867374f, 0.0031707866583019495f, 0.0038018084596842527f, 0.0008969350601546466f, 0.0007827327935956419f, 0.0009061312885023654f, 0.003293998073786497f, 0.0038629460614174604f, 0.003916745539754629f, 0.000860419764649123f, 0.0009469202486798167f, 0.003486097324639559f, 0.0036284017842262983f, 0.0031999072525650263f, 0.0011922515695914626f, 0.003943902440369129f, 0.003668721066787839f, 0.004479523282498121f, 0.005709334276616573f, 0.0010479576885700226f, 0.000966011022683233f, 0.003659086301922798f, 0.00457886653020978f, 0.002127571264281869f, 0.0008317368919961154f, 0.00392672186717391f, 0.0009138149325735867f, 0.0008977377437986434f, 0.004646405577659607f, 0.0017351660644635558f, 0.00335078127682209f, 0.003311184234917164f, 0.00238421349786222f, 0.0037050654646009207f, 0.00515114376321435f, 0.0037328151520341635f, 0.001275556511245668f, 0.0038324673660099506f, 0.0011018787045031786f, 0.0008636955753900111f, 0.0041956412605941296f, 0.001278756302781403f, 0.0008154977695085108f, 0.004686347674578428f, 0.0008112731738947332f, 0.003613788168877363f, 0.003765248227864504f, 0.0007691388600505888f, 0.004394529387354851f, 0.0009221098152920604f, 0.004357254598289728f, 0.0034987099934369326f, 0.0008321352070197463f, 0.0041558220982551575f, 0.004724051803350449f, 0.0012193191796541214f, 0.004126415122300386f, 0.004321650136262178f, 0.0008701112237758934f, 0.005133547354489565f, 0.003948344383388758f, 0.004493378568440676f, 0.0038727889768779278f, 0.001555351773276925f, 0.0030965651385486126f, 0.0009999934118241072f, 0.0032964565325528383f, 0.0009466377086937428f, 0.0010509089333936572f, 0.0009531777468509972f, 0.0009380087722092867f, 0.0009216065518558025f, 0.004511930048465729f, 0.00352804665453732f, 0.0009685500990599394f, 0.004286990035325289f, 0.0033399255480617285f, 0.0008834886248223484f, 0.0037737584207206964f, 0.004635026212781668f, 0.004013023804873228f, 0.0010058574844151735f, 0.003766091074794531f, 0.000900428683962673f, 0.002991706132888794f, 0.00524650514125824f, 0.0008053326746448874f, 0.0009423875599168241f, 0.00094494508812204f, 0.0009377122041769326f, 0.004307047929614782f, 0.0009387184400111437f, 0.003951184917241335f, 0.0010119436774402857f, 0.0035765706561505795f, 0.004557971842586994f, 0.003721041837707162f, 0.003394464962184429f, 0.003577702445909381f, 0.0010730498470366001f, 0.0008217859431169927f, 0.00475188996642828f, 0.0008491929620504379f, 0.0033689592964947224f, 0.0034700632095336914f, 0.00409122696146369f, 0.0010064590023830533f, 0.0019961849320679903f, 0.000809138233307749f, 0.003996748011559248f, 0.0009360062540508807f, 0.0007533211028203368f, 0.0036243884824216366f, 0.0008863739785738289f, 0.0041845315136015415f, 0.0008624385809525847f, 0.0033787856809794903f, 0.0012475342955440283f, 0.0008906277362257242f, 0.005624033510684967f, 0.0013124891556799412f, 0.001003305776976049f, 0.0008076583035290241f, 0.003689913544803858f, 0.004245744552463293f, 0.0035184503067284822f, 0.0010234558722004294f, 0.0034812423400580883f, 0.0009518622537143528f, 0.0012794861104339361f, 0.003258239012211561f, 0.003283166326582432f, 0.0018801749683916569f, 0.0009880668949335814f, 0.0008192093227989972f, 0.004060541745275259f, 0.004628573078662157f, 0.0029305433854460716f, 0.000917387253139168f, 0.0045624966733157635f, 0.0034763880539685488f, 0.004670354537665844f, 0.0015441367868334055f, 0.003843780839815736f, 0.0011294246651232243f, 0.003232535906136036f, 0.003722183406352997f, 0.0009998916648328304f, 0.004862460773438215f, 0.003959966823458672f, 0.0032052011229097843f, 0.0009328809101134539f, 0.004403877072036266f, 0.0010235774097964168f, 0.0008359501953236759f, 0.0038432450965046883f, 0.001149204676039517f, 0.004135680850595236f, 0.003391675418242812f, 0.0036118715070188046f, 0.0011835834011435509f, 0.00417492026463151f, 0.0008999232086353004f, 0.0012324388371780515f, 0.003811032511293888f, 0.001019506249576807f, 0.004054856486618519f, 0.0009042290039360523f, 0.004311449360102415f, 0.004338808823376894f, 0.001062392839230597f, 0.0009415994281880558f, 0.0009736591018736362f, 0.004466409329324961f, 0.0011605446925386786f, 0.0037047332152724266f, 0.003726878436282277f, 0.004232114180922508f, 0.003618332091718912f, 0.003965442068874836f, 0.003897754941135645f, 0.004248841665685177f, 0.0010082648368552327f, 0.0012896244879812002f, 0.0037717761006206274f, 0.0011384027311578393f, 0.003275339724496007f, 0.0012032674858346581f, 0.003936578053981066f, 0.0010846169898286462f, 0.0045167854987084866f, 0.0008778477204032242f, 0.0035648925695568323f, 0.0009218541090376675f, 0.0037642999086529016f, 0.004141036421060562f, 0.0037092932034283876f, 0.0008989828056655824f, 0.004307709168642759f, 0.003626700025051832f, 0.0009546407382003963f, 0.004158631432801485f, 0.0008207600330933928f, 0.0011778805637732148f, 0.0038375987205654383f, 0.0010578647488728166f, 0.0009508694056421518f, 0.0009002698352560401f, 0.000844701484311372f, 0.0007395873544737697f, 0.0010569920996204019f, 0.0032991101033985615f, 0.000946113548707217f, 0.0037627150304615498f, 0.0009048553765751421f, 0.0008933848585002124f, 0.0027183620259165764f, 0.00473098736256361f, 0.0008383874665014446f, 0.001232369220815599f, 0.0009984461357817054f, 0.001709594507701695f, 0.0009009882342070341f, 0.004288375843316317f, 0.00428752601146698f, 0.004314837045967579f, 0.0013858570018783212f, 0.0025250869803130627f, 0.00093055609613657f, 0.00433614756911993f, 0.0009125759825110435f, 0.0012973403790965676f, 0.0052974652498960495f, 0.00395489064976573f, 0.00555126927793026f, 0.0009234992321580648f, 0.003048582933843136f, 0.004384985193610191f, 0.000968107720836997f, 0.0038925064727663994f, 0.0009475919068790972f, 0.004522278439253569f, 0.0038173538632690907f, 0.003606864484027028f, 0.0011489015305414796f, 0.0009747678996063769f, 0.0036243486683815718f, 0.0045236097648739815f, 0.0008216060232371092f, 0.005011938977986574f, 0.003751306561753154f, 0.0011516890954226255f, 0.0009348193416371942f, 0.003156722988933325f, 0.0034949430264532566f, 0.005022209137678146f, 0.0008212272659875453f, 0.003829692490398884f, 0.0056519173085689545f, 0.004044907167553902f, 0.0013591224560514092f, 0.003720466513186693f, 0.0018724175170063972f, 0.001363507122732699f, 0.0009165137889795005f, 0.001060945331119001f, 0.000944622210226953f, 0.001004100195132196f, 0.004211385268718004f, 0.0011889409506693482f, 0.0022514192387461662f, 0.001125050475820899f, 0.0034440879244357347f, 0.0009730347665026784f, 0.0009014756069518626f, 0.0009868296328932047f, 0.003284132806584239f, 0.003696010448038578f, 0.004010625649243593f, 0.004657861776649952f, 0.0007838272722437978f, 0.0010303108720108867f, 0.0039232694543898106f, 0.0044272285886108875f, 0.0010385714704170823f, 0.003786514513194561f, 0.0008814366301521659f, 0.0034405470360070467f, 0.0035937235224992037f, 0.001073101069778204f, 0.004472930449992418f, 0.004839205648750067f, 0.0036225300282239914f, 0.0008692231494933367f, 0.0010619614040479064f, 0.0035038338974118233f, 0.004029752686619759f, 0.001049529411830008f, 0.0010910485871136189f, 0.0007594512426294386f, 0.003750923788174987f, 0.0024604741483926773f, 0.0011733039282262325f, 0.0031445687636733055f, 0.002794648054987192f, 0.003298661671578884f, 0.00514606898650527f, 0.0009292704053223133f, 0.0008563442388549447f, 0.003400453133508563f, 0.003713211975991726f, 0.0037517384625971317f, 0.0039039114490151405f, 0.004041932988911867f, 0.005346275400370359f, 0.0011031825561076403f, 0.0046126688830554485f, 0.0009062995668500662f, 0.003341550938785076f, 0.0008252593106590211f, 0.0037842686288058758f, 0.0008130245842039585f, 0.003918471746146679f, 0.0008230875246226788f, 0.0008011387544684112f, 0.00433754688128829f, 0.0047386339865624905f, 0.0008998666889965534f, 0.00357743538916111f, 0.003815063973888755f, 0.00377692561596632f, 0.0010687209432944655f, 0.0037326619494706392f, 0.003378827590495348f, 0.0037562663201242685f, 0.0010355226695537567f, 0.000977416173554957f, 0.0013275223318487406f, 0.000832041900139302f, 0.0008899482781998813f, 0.0014437193749472499f, 0.0008590611978434026f, 0.003179974853992462f, 0.0011683015618473291f, 0.0007393326959572732f, 0.000928762077819556f, 0.0008508999017067254f, 0.004220056347548962f, 0.004052397795021534f, 0.0009832215728238225f, 0.001228507375344634f, 0.0037409926299005747f, 0.003420136868953705f, 0.003615564201027155f, 0.0009922361932694912f, 0.000852302648127079f, 0.0037777218967676163f, 0.001454959623515606f, 0.003362634452059865f, 0.000910559727344662f, 0.0040504420176148415f, 0.0009273122996091843f, 0.0009149056859314442f, 0.0008625806076452136f, 0.0035779799800366163f, 0.003563330275937915f, 0.0009582257480360568f, 0.001256945077329874f, 0.0036750296130776405f, 0.0033191859256476164f, 0.006375537253916264f, 0.003625362878665328f, 0.004950817208737135f, 0.004148910753428936f, 0.003733237273991108f, 0.0025953259319067f, 0.0008849028963595629f, 0.0010701974388211966f, 0.0008615730912424624f, 0.004052656702697277f, 0.0033940481953322887f, 0.0008091296185739338f, 0.003710852935910225f, 0.003266981104388833f, 0.003359506605193019f, 0.005453151650726795f, 0.0009818156249821186f, 0.004041838925331831f, 0.000791973783634603f, 0.004267031792551279f, 0.0040318830870091915f, 0.00421138945966959f, 0.0032503940165042877f, 0.0012205066159367561f, 0.0010881787165999413f, 0.0007801750325597823f, 0.001160331885330379f, 0.00344802881591022f, 0.0008494901703670621f, 0.0010372292017564178f, 0.00435391440987587f, 0.0036117560230195522f, 0.0009104940691031516f, 0.0033240697812289f, 0.003899932373315096f, 0.003684047609567642f, 0.0037770397029817104f, 0.0009701504604890943f, 0.003696973668411374f, 0.0008428593282587826f, 0.005439914762973785f, 0.0041197678074240685f, 0.004018222913146019f, 0.004443195648491383f, 0.0037860863376408815f, 0.0008815754554234445f, 0.001696122228167951f, 0.0010714716045185924f, 0.005124169401824474f, 0.004083059728145599f, 0.004823130555450916f, 0.003141378052532673f, 0.003896278329193592f, 0.0008462580153718591f, 0.0037549722474068403f, 0.0037289343308657408f, 0.0009283937979489565f, 0.0037754580844193697f, 0.004458833020180464f, 0.0007821929175406694f, 0.0010668335016816854f, 0.0007966289413161576f, 0.00384122715331614f, 0.0010520933428779244f, 0.0010538703063502908f, 0.003757965052500367f, 0.003788647474721074f, 0.00497812544927001f, 0.0009452313533984125f, 0.0034585227258503437f, 0.004646716173738241f, 0.0008264508796855807f, 0.0009941242169588804f, 0.000863227469380945f, 0.0034415151458233595f, 0.0009379322873428464f, 0.0009221943910233676f, 0.0008971095667220652f, 0.0008185075712390244f, 0.0008048329036682844f, 0.0013743909075856209f, 0.0012230854481458664f, 0.0008688344387337565f, 0.0010797803988680243f, 0.0010070480639114976f, 0.004838642198592424f, 0.0042351786978542805f, 0.004379779566079378f, 0.0031331295613199472f, 0.0008779798517934978f, 0.0011295743752270937f, 0.004354048054665327f, 0.0011876604985445738f, 0.0041352189145982265f, 0.0008309765253216028f, 0.004245762247592211f, 0.0009944770717993379f, 0.003940895199775696f, 0.004385930486023426f, 0.0009549422538839281f, 0.005816530901938677f, 0.004407714121043682f, 0.0038385724183171988f, 0.004411784000694752f, 0.0034879434388130903f, 0.0008995771058835089f, 0.0011721699265763164f, 0.0041033318266272545f, 0.0030122185125947f, 0.0009338438976556063f, 0.004349948838353157f, 0.004645823501050472f, 0.0034203052055090666f, 0.0033147248905152082f, 0.0009508665534667671f, 0.0031979100313037634f, 0.0009249378344975412f, 0.003104509087279439f, 0.0010012544225901365f, 0.0007797160651534796f, 0.0008796484326012433f, 0.003198464633896947f, 0.003401425899937749f, 0.0017172698862850666f, 0.0012635044986382127f, 0.0007989589357748628f, 0.003554648021236062f, 0.004165540914982557f, 0.0008744399528950453f, 0.003338103648275137f, 0.004167677368968725f, 0.0009933514520525932f, 0.00508087407797575f, 0.0042470479384064674f, 0.0009921994060277939f, 0.003378380788490176f, 0.004534964915364981f, 0.003433936508372426f, 0.004452144727110863f, 0.0038672955706715584f, 0.0008022233378142118f, 0.0040154848247766495f, 0.003257142612710595f, 0.004076496232300997f, 0.004291479010134935f, 0.0009581209160387516f, 0.0010335047263652086f, 0.001028741942718625f, 0.0036602886393666267f, 0.0009386283345520496f, 0.003501226892694831f, 0.004758884664624929f, 0.004165800288319588f, 0.004199014510959387f, 0.005508253816515207f, 0.0010998190846294165f, 0.003588356077671051f, 0.004240348469465971f, 0.0037011788226664066f, 0.0008785296231508255f, 0.003381981747224927f, 0.0007453202269971371f, 0.004919018596410751f, 0.0007912598084658384f, 0.003051454434171319f, 0.000860514584928751f, 0.0011598309502005577f, 0.0009290719754062593f, 0.0007712909136898816f, 0.003975555766373873f, 0.0030516982078552246f, 0.003096026834100485f, 0.0009446232579648495f, 0.0037976268213242292f, 0.0040128473192453384f, 0.004721640143543482f, 0.0010356262791901827f, 0.0035054581239819527f, 0.000842837558593601f, 0.0026566777378320694f, 0.0012226009275764227f, 0.00472535565495491f, 0.0016397403087466955f, 0.0035471655428409576f, 0.003394801402464509f, 0.002996437717229128f, 0.004062694497406483f, 0.0012328475713729858f, 0.0010624626884236932f, 0.0009398338734172285f, 0.001240096753463149f, 0.004636671859771013f, 0.0037781414575874805f, 0.005278097465634346f, 0.0025774852838367224f, 0.0031950806733220816f, 0.000969632004853338f, 0.001053458428941667f, 0.004967654589563608f, 0.0009769827593117952f, 0.000802212452981621f, 0.0011336925672367215f, 0.000980906654149294f, 0.003591835731640458f, 0.0009607352549210191f, 0.0052625639364123344f, 0.003939599264413118f, 0.004027300048619509f, 0.0009100958704948425f, 0.0042549967765808105f, 0.0023065009154379368f, 0.000811066129244864f, 0.0013358134310692549f, 0.0010743470629677176f, 0.0009641120559535921f, 0.0036224876530468464f, 0.003911455627530813f, 0.003227830398827791f, 0.001054416410624981f, 0.004051284398883581f, 0.0034593604505062103f, 0.0032087648287415504f, 0.0012867222540080547f, 0.0043494924902915955f, 0.004143397323787212f, 0.001388302887789905f, 0.0011617224663496017f, 0.004512439947575331f, 0.0035957591608166695f, 0.005017357412725687f, 0.0009482608293183148f, 0.0010071889264509082f, 0.0010976798366755247f, 0.0010195676004514098f, 0.003927013836801052f, 0.0034335574600845575f, 0.0007499553612433374f, 0.004513824824243784f, 0.0009427869226783514f, 0.004933136515319347f, 0.004106295760720968f, 0.0008407473214901984f, 0.000923372688703239f, 0.0009836001554504037f, 0.00406318623572588f, 0.003611199790611863f, 0.0008174769463948905f, 0.0037071879487484694f, 0.005128682125359774f, 0.0051070088520646095f, 0.0037804623134434223f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 39,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011523384600877762f, 0.010455935262143612f, 0.008578987792134285f, 0.008662286214530468f, 0.006623196415603161f, 0.007576354779303074f, 0.0059328703209757805f, 0.009680435061454773f, 0.007494201418012381f, 0.007131106685847044f, 0.005793761927634478f, 0.007024840917438269f, 0.0072045945562422276f, 0.005890458356589079f, 0.009317920543253422f, 0.007206122390925884f, 0.009157429449260235f, 0.007612292189151049f, 0.009352149441838264f, 0.006668170914053917f, 0.0075663975439965725f, 0.009241470135748386f, 0.00895095244050026f, 0.008907276205718517f, 0.00633765384554863f, 0.006066541187465191f, 0.012517918832600117f, 0.005526664666831493f, 0.006921630818396807f, 0.007898918353021145f, 0.011340069584548473f, 0.007156479638069868f, 0.0058320052921772f, 0.006762638688087463f, 0.006782489828765392f, 0.007262962404638529f, 0.010069217532873154f, 0.007231389172375202f, 0.004947294946759939f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_scratch1_array_intq, AI_STATIC_CONST,
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
  AI_SHAPE_INIT(4, 1, 7552, 1, 1), AI_STRIDE_INIT(4, 1, 1, 7552, 7552),
  1, &conv2d_98_scratch0_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch1, AI_STATIC,
  21, 0x1,
  AI_SHAPE_INIT(4, 1, 640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 640, 640),
  1, &conv2d_98_scratch1_array, &conv2d_98_scratch1_array_intq)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_scratch0, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 2950, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2950, 2950),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
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
  nl_63_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &nl_63_output_array, &nl_63_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_64_output, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &eltwise_64_output_array, &eltwise_64_output_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_66_output, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_66_output_array, &eltwise_66_output_array_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_output, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_output_array, &conv2d_68_output_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  pool_69_output, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &pool_69_output_array, &pool_69_output_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_71_output_array, &conv2d_71_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_72_output, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &eltwise_72_output_array, &eltwise_72_output_array_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  nl_73_output, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &nl_73_output_array, &nl_73_output_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_74_output, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &eltwise_74_output_array, &eltwise_74_output_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_75_output_array, &conv2d_75_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_output, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_output_array, &conv2d_77_output_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  pool_78_output, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_78_output_array, &pool_78_output_array_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_output, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_80_output_array, &conv2d_80_output_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_81_output, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_81_output_array, &eltwise_81_output_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  nl_82_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_82_output_array, &nl_82_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_83_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_83_output_array, &eltwise_83_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_output, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_84_output_array, &conv2d_84_output_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_85_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_85_output_array, &eltwise_85_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_output, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_output_array, &conv2d_86_output_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_output, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_output_array, &conv2d_87_output_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  pool_88_output, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_88_output_array, &pool_88_output_array_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_output, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_output_array, &conv2d_89_output_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_output, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_90_output_array, &conv2d_90_output_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_91_output, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_91_output_array, &eltwise_91_output_array_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  nl_92_output, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_92_output_array, &nl_92_output_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_93_output, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_93_output_array, &eltwise_93_output_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_output, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_94_output_array, &conv2d_94_output_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_95_output, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_95_output_array, &eltwise_95_output_array_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_output, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_output_array, &conv2d_96_output_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  pool_97_output, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_97_output_array, &pool_97_output_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_output, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 640, 1, 1), AI_STRIDE_INIT(4, 1, 1, 640, 640),
  1, &conv2d_98_output_array, &conv2d_98_output_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_output, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  127, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  128, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conversion_102_output_array, NULL)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  139, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  140, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  141, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  142, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  143, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  144, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 2), AI_STRIDE_INIT(4, 1, 8, 16, 16),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  145, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  146, 0x1,
  AI_SHAPE_INIT(4, 2, 1, 1, 8), AI_STRIDE_INIT(4, 1, 2, 16, 16),
  1, &conv2d_6_weights_array, &conv2d_6_weights_array_intq)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  147, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  149, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  150, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 1, 8, 320, 320),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  151, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  152, 0x1,
  AI_SHAPE_INIT(4, 40, 3, 3, 1), AI_STRIDE_INIT(4, 1, 40, 40, 120),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  153, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  154, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  155, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  156, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  157, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  159, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  160, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  161, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  163, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  165, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  166, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  167, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  168, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  169, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 24), AI_STRIDE_INIT(4, 1, 48, 1152, 1152),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  171, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  172, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  177, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  178, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  179, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  180, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  181, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  182, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  183, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  188, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  189, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  190, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  191, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  192, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 64), AI_STRIDE_INIT(4, 1, 24, 1536, 1536),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  193, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  194, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  195, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  196, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  197, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  198, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  199, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  200, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 24), AI_STRIDE_INIT(4, 1, 64, 1536, 1536),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  201, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  202, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 72), AI_STRIDE_INIT(4, 1, 24, 1728, 1728),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  203, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  204, 0x1,
  AI_SHAPE_INIT(4, 72, 5, 5, 1), AI_STRIDE_INIT(4, 1, 72, 72, 360),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  205, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  206, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 18), AI_STRIDE_INIT(4, 1, 72, 1296, 1296),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  207, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  208, 0x1,
  AI_SHAPE_INIT(4, 18, 1, 1, 72), AI_STRIDE_INIT(4, 1, 18, 1296, 1296),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  209, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  210, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 24), AI_STRIDE_INIT(4, 1, 72, 1728, 1728),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  211, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  212, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  213, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_weights, AI_STATIC,
  214, 0x1,
  AI_SHAPE_INIT(4, 144, 5, 5, 1), AI_STRIDE_INIT(4, 1, 144, 144, 720),
  1, &conv2d_68_weights_array, &conv2d_68_weights_array_intq)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_bias, AI_STATIC,
  215, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_68_bias_array, NULL)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  216, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 36), AI_STRIDE_INIT(4, 1, 144, 5184, 5184),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  217, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_weights, AI_STATIC,
  218, 0x1,
  AI_SHAPE_INIT(4, 36, 1, 1, 144), AI_STRIDE_INIT(4, 1, 36, 5184, 5184),
  1, &conv2d_71_weights_array, &conv2d_71_weights_array_intq)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_bias, AI_STATIC,
  219, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_71_bias_array, NULL)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_weights, AI_STATIC,
  220, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 48), AI_STRIDE_INIT(4, 1, 144, 6912, 6912),
  1, &conv2d_75_weights_array, &conv2d_75_weights_array_intq)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_bias, AI_STATIC,
  221, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_75_bias_array, NULL)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  222, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  223, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_weights, AI_STATIC,
  224, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_77_weights_array, &conv2d_77_weights_array_intq)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_bias, AI_STATIC,
  225, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_77_bias_array, NULL)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  226, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  227, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_weights, AI_STATIC,
  228, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_80_weights_array, &conv2d_80_weights_array_intq)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_bias, AI_STATIC,
  229, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_80_bias_array, NULL)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_weights, AI_STATIC,
  230, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_84_weights_array, &conv2d_84_weights_array_intq)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_bias, AI_STATIC,
  231, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_84_bias_array, NULL)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_weights, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_86_weights_array, &conv2d_86_weights_array_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_bias, AI_STATIC,
  233, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_86_bias_array, NULL)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_weights, AI_STATIC,
  234, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_87_weights_array, &conv2d_87_weights_array_intq)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_bias, AI_STATIC,
  235, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_87_bias_array, NULL)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_weights, AI_STATIC,
  236, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_89_weights_array, &conv2d_89_weights_array_intq)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_bias, AI_STATIC,
  237, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_89_bias_array, NULL)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_weights, AI_STATIC,
  238, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_90_weights_array, &conv2d_90_weights_array_intq)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_bias, AI_STATIC,
  239, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_90_bias_array, NULL)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_weights, AI_STATIC,
  240, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_94_weights_array, &conv2d_94_weights_array_intq)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_bias, AI_STATIC,
  241, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_94_bias_array, NULL)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_weights, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_96_weights_array, &conv2d_96_weights_array_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_bias, AI_STATIC,
  243, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_96_bias_array, NULL)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_weights, AI_STATIC,
  244, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 640), AI_STRIDE_INIT(4, 1, 288, 184320, 184320),
  1, &conv2d_98_weights_array, &conv2d_98_weights_array_intq)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_bias, AI_STATIC,
  245, 0x0,
  AI_SHAPE_INIT(4, 1, 640, 1, 1), AI_STRIDE_INIT(4, 4, 4, 2560, 2560),
  1, &conv2d_98_bias_array, NULL)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_weights, AI_STATIC,
  246, 0x1,
  AI_SHAPE_INIT(4, 640, 1, 1, 39), AI_STRIDE_INIT(4, 1, 640, 24960, 24960),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  247, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

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
  conv2d_21_scratch1, AI_STATIC,
  272, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

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
  conv2d_41_scratch0, AI_STATIC,
  287, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #288 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  288, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #289 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  289, 0x0,
  AI_SHAPE_INIT(4, 1, 736, 1, 1), AI_STRIDE_INIT(4, 1, 1, 736, 736),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #290 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  290, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #291 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  291, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #292 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  292, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #293 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  293, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #294 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  294, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #295 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  295, 0x0,
  AI_SHAPE_INIT(4, 1, 496, 1, 1), AI_STRIDE_INIT(4, 1, 1, 496, 496),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #296 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  296, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #297 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  297, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #298 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  298, 0x0,
  AI_SHAPE_INIT(4, 1, 6121, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6121, 6121),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #299 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch1, AI_STATIC,
  299, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_scratch1_array, &conv2d_58_scratch1_array_intq)

/* Tensor #300 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  300, 0x0,
  AI_SHAPE_INIT(4, 1, 468, 1, 1), AI_STRIDE_INIT(4, 1, 1, 468, 468),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #301 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  301, 0x0,
  AI_SHAPE_INIT(4, 1, 792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 792, 792),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #302 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  302, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #303 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  303, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #304 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  304, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #305 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch0, AI_STATIC,
  305, 0x0,
  AI_SHAPE_INIT(4, 1, 12241, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12241, 12241),
  1, &conv2d_68_scratch0_array, NULL)

/* Tensor #306 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch1, AI_STATIC,
  306, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_scratch1_array, &conv2d_68_scratch1_array_intq)

/* Tensor #307 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  307, 0x0,
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


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1655637760, 25, -62 };
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


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -120, -116, -112, -108, -103, -99, -95, -91, -87, -83, -79, -75, -71, -67, -63, -59, -54, -50, -46, -42, -38, -34, -30, -26, -22, -18, -14, -10, -5, -1, 3, 7, 11, 15, 19, 23, 27, 31, 35, 39, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80, 84, 88, 93, 97, 101, 105, 109, 113, 117, 121, 125 };
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


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -121, -117, -113, -110, -106, -102, -99, -95, -91, -88, -84, -81, -77, -73, -70, -66, -62, -59, -55, -51, -48, -44, -40, -37, -33, -29, -26, -22, -18, -15, -11, -7, -4, 0, 4, 7, 11, 14, 18, 22, 25, 29, 33, 36, 40, 44, 47, 51, 55, 58, 62, 66, 69, 73, 77, 80, 84, 88, 91, 95, 99, 102, 106, 109, 113, 117, 120, 124, 127 };
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


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -115, -113, -112, -110, -108, -106, -104, -103, -101, -99, -97, -95, -94, -92, -90, -88, -86, -84, -83, -81, -79, -77, -75, -74, -72, -70, -68, -66, -64, -63, -61, -59, -57, -55, -54, -52, -50, -48, -46, -45, -43, -41, -39, -37, -35, -34, -32, -30, -28, -26, -25, -23, -21, -19, -17, -15, -14, -12, -10, -8, -6, -5, -3, -1, 1, 3, 4, 6, 8, 10, 12, 14, 15, 17, 19, 21, 23, 24, 26, 28, 30, 32, 34, 35, 37, 39, 41, 43, 44, 46, 48, 50, 52, 53, 55, 57, 59, 61, 63, 64, 66, 68, 70, 72, 73, 75, 77, 79, 81, 83, 84, 86, 88, 90, 92, 93, 95, 97, 99, 101, 102, 104, 106, 108, 110, 112, 113, 115, 117, 119, 121, 122, 124, 126, 127 };
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_70_layer, 70,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_70_chain,
  NULL, &conv2d_71_layer, AI_STATIC, 
  .groups = 1, 
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


AI_STATIC_CONST ai_i8 nl_63_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -122, -121, -119, -118, -116, -115, -113, -112, -110, -109, -107, -106, -104, -103, -101, -100, -98, -97, -95, -94, -92, -91, -89, -88, -86, -85, -83, -82, -80, -79, -77, -76, -74, -73, -71, -70, -68, -67, -65, -64, -62, -61, -60, -58, -57, -55, -54, -52, -51, -49, -48, -46, -45, -43, -42, -40, -39, -37, -36, -34, -33, -31, -30, -28, -27, -25, -24, -22, -21, -19, -18, -16, -15, -13, -12, -10, -9, -7, -6, -4, -3, -1, 0, 2, 3, 5, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49, 51, 52, 54, 55, 57, 58, 60, 61, 63, 64, 66, 67, 69, 70, 72, 73, 74, 76, 77, 79, 80, 82, 83, 85, 86, 88, 89, 91, 92, 94, 95, 97, 98, 100, 101, 103, 104, 106, 107, 109, 110, 112, 113, 115, 116, 118, 119, 121, 122, 124, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -120, -117, -115, -113, -111, -109, -107, -105, -103, -101, -98, -96, -94, -92, -90, -88, -86, -84, -82, -80, -77, -75, -73, -71, -69, -67, -65, -63, -61, -58, -56, -54, -52, -50, -48, -46, -44, -42, -39, -37, -35, -33, -31, -29, -27, -25, -23, -21, -18, -16, -14, -12, -10, -8, -6, -4, -2, 1, 3, 5, 7, 9, 11, 13, 15, 17, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 41, 43, 45, 47, 49, 51, 53, 55, 57, 60, 62, 64, 66, 68, 70, 72, 74, 76, 79, 81, 83, 85, 87, 89, 91, 93, 95, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 119, 121, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -123, -120, -118, -115, -113, -110, -108, -105, -103, -100, -98, -95, -93, -90, -88, -85, -83, -80, -78, -75, -73, -70, -68, -65, -63, -60, -58, -55, -53, -50, -48, -45, -43, -40, -38, -35, -33, -30, -28, -25, -23, -20, -18, -15, -13, -10, -8, -5, -3, 0, 2, 5, 7, 10, 12, 15, 17, 20, 22, 25, 27, 30, 33, 35, 38, 40, 43, 45, 48, 50, 53, 55, 58, 60, 63, 65, 68, 70, 73, 75, 78, 80, 83, 85, 88, 90, 93, 95, 98, 100, 103, 105, 108, 110, 113, 115, 118, 120, 123, 125, 127 };
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


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -121, -119, -117, -115, -112, -110, -108, -106, -103, -101, -99, -97, -94, -92, -90, -88, -85, -83, -81, -79, -76, -74, -72, -70, -67, -65, -63, -61, -59, -56, -54, -52, -50, -47, -45, -43, -41, -38, -36, -34, -32, -29, -27, -25, -23, -20, -18, -16, -14, -11, -9, -7, -5, -3, 0, 2, 4, 6, 9, 11, 13, 15, 18, 20, 22, 24, 27, 29, 31, 33, 36, 38, 40, 42, 45, 47, 49, 51, 54, 56, 58, 60, 62, 65, 67, 69, 71, 74, 76, 78, 80, 83, 85, 87, 89, 92, 94, 96, 98, 101, 103, 105, 107, 110, 112, 114, 116, 118, 121, 123, 125, 127 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 475408, 1, 1),
    475408, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 475408, 1, 1),
      475408, NULL, NULL)
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
    
    conv2d_70_output_array.data = AI_PTR(g_network_activations_map[0] + 1080);
    conv2d_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1080);
    
    conv2d_71_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1116);
    conv2d_71_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1116);
    
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
    
    conv2d_98_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 7840);
    conv2d_98_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 7840);
    
    conv2d_98_output_array.data = AI_PTR(g_network_activations_map[0] + 8480);
    conv2d_98_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8480);
    
    conv2d_99_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_99_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 2952);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2952);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 156);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 156);
    
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
    conv2d_98_bias_array.data = AI_PTR(g_network_weights_map[0] + 447732);
    conv2d_98_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 447732);
    
    conv2d_99_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_weights_array.data = AI_PTR(g_network_weights_map[0] + 450292);
    conv2d_99_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 450292);
    
    conv2d_99_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 475252);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 475252);
    
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
      
      .n_macc            = 19966254,
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
      
      .n_macc            = 19966254,
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

>>>>>>> 1460700 (com)
