/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sat Jan  4 22:55:56 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "633bc04b3dc6d5b5850e6d1ae49911d9"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sat Jan  4 22:55:56 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24576, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24576, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24576, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36864, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36864, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 32400, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 19440, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 19440, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1960, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 19440, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3920, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 62720, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  pool_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conversion_71_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 4, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3553, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 624, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 384, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_52_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_52_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_34_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5329, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 976, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_39_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8881, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 864, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_42_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 96, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1360, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_43_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_44_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8881, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_46_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_62_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1360, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_49_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2560, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_52_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8881, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_52_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11760, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_54_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1760, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5760, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13120, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_56_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 62720, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2160, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_scratch0_array, AI_ARRAY_FORMAT_S16,
  NULL, NULL, 1280, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  nl_70_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2160, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_62_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_62_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9600, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_64_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2160, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 240, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 19200, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_66_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 80, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 102400, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1280, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5120, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 4, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 602112, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 602112, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 612912, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 161472, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 155952, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 43200, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#256 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#257 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#258 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#259 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#260 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#261 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 43200, AI_STATIC)
/* Array#262 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)
/* Array#263 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#264 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#265 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)
/* Array#266 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)
/* Array#267 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#268 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 40368, AI_STATIC)
/* Array#269 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150528, AI_STATIC)
/* Array#270 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#271 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#272 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#273 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#274 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24576, AI_STATIC)
/* Array#275 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#276 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#277 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#278 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3136, AI_STATIC)
/* Array#279 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#280 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 272, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06342647224664688f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12834328413009644f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_pad_before_output_array_intq, AI_STATIC_CONST,
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
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06380712985992432f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.16329368948936462f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.059763215482234955f),
    AI_PACK_INTQ_ZP(8)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05883455649018288f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1010017991065979f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06449192762374878f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13079828023910522f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05912717059254646f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05659788101911545f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0998927429318428f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06042182818055153f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13815023005008698f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07691361755132675f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.013956455513834953f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.36110252141952515f),
    AI_PACK_INTQ_ZP(-41)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007177568040788174f, 0.008477345108985901f, 0.014872715808451176f, 0.01275632344186306f, 0.006203480996191502f, 0.004698203410953283f, 0.007116815075278282f, 0.00642056530341506f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009032136760652065f, 0.028674151748418808f, 0.00574628496542573f, 0.008942624554038048f, 0.012728221714496613f, 0.012306262739002705f, 0.009910131804645061f, 0.013490426354110241f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00443069776520133f, 0.00862881913781166f, 0.004563900176435709f, 0.0053400867618620396f, 0.005929911974817514f, 0.007626665756106377f, 0.00674926582723856f, 0.009277543053030968f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002951441565528512f, 0.005772051867097616f, 0.005256883800029755f, 0.0027622622437775135f, 0.0041059162467718124f, 0.0038588871248066425f, 0.003025120124220848f, 0.004006858449429274f, 0.004663577303290367f, 0.004979425109922886f, 0.0031178309582173824f, 0.0036127541679888964f, 0.0023691519163548946f, 0.004075277596712112f, 0.002626274013891816f, 0.004192288499325514f, 0.0036301102954894304f, 0.0033225046936422586f, 0.00585724925622344f, 0.003001469187438488f, 0.005689592566341162f, 0.004340956453233957f, 0.005388165358453989f, 0.004198950249701738f, 0.004646605346351862f, 0.004589837975800037f, 0.003712690668180585f, 0.004560957197099924f, 0.00555025739595294f, 0.005489915143698454f, 0.004265706520527601f, 0.007210182026028633f, 0.004175515845417976f, 0.003666667966172099f, 0.0039543635211884975f, 0.004488397855311632f, 0.0042219823226332664f, 0.0031697829253971577f, 0.004358754958957434f, 0.005378749221563339f, 0.004175822716206312f, 0.003727896139025688f, 0.007794579956680536f, 0.004242048133164644f, 0.0060029104351997375f, 0.006425853818655014f, 0.0066414475440979f, 0.0040346784517169f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004779806826263666f, 0.004760409239679575f, 0.013015172444283962f, 0.004114084877073765f, 0.004781442228704691f, 0.01859714649617672f, 0.0120219262316823f, 0.0047037843614816666f, 0.014286888763308525f, 0.010201877914369106f, 0.003731735050678253f, 0.008112887851893902f, 0.010846512392163277f, 0.007409107405692339f, 0.01923990063369274f, 0.020094456151127815f, 0.0049584731459617615f, 0.0030814786441624165f, 0.008602863177657127f, 0.005858961958438158f, 0.004029827658087015f, 0.011797212064266205f, 0.0026828160043805838f, 0.008027502335608006f, 0.013611238449811935f, 0.005892201792448759f, 0.0055414545349776745f, 0.010752731934189796f, 0.0073986719362437725f, 0.010423379018902779f, 0.005328473635017872f, 0.010009675286710262f, 0.011561786755919456f, 0.004631153307855129f, 0.0032523374538868666f, 0.006155281327664852f, 0.0066515798680484295f, 0.004592509940266609f, 0.010831896215677261f, 0.007024622056633234f, 0.005677407141774893f, 0.005370567087084055f, 0.0066404398530721664f, 0.011289255693554878f, 0.013065957464277744f, 0.00416898587718606f, 0.008622420020401478f, 0.010171275585889816f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003788597183302045f, 0.004268330056220293f, 0.002650235779583454f, 0.003347735619172454f, 0.003626243444159627f, 0.004167110659182072f, 0.004124023485928774f, 0.0033928726334124804f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004183867014944553f, 0.0057305702939629555f, 0.00457923486828804f, 0.003931187093257904f, 0.003274166025221348f, 0.00412587309256196f, 0.003335305256769061f, 0.0049979533068835735f, 0.004748696926981211f, 0.005874778609722853f, 0.0051535083912312984f, 0.003760955296456814f, 0.004547190852463245f, 0.003827320411801338f, 0.005233725532889366f, 0.002356286160647869f, 0.0064510866068303585f, 0.0045898305252194405f, 0.005002287216484547f, 0.005601022858172655f, 0.005136763211339712f, 0.0038384534418582916f, 0.003980727866292f, 0.005068881902843714f, 0.004724828992038965f, 0.005375431850552559f, 0.004652749747037888f, 0.0047648330219089985f, 0.005453417077660561f, 0.004319896921515465f, 0.0036613931879401207f, 0.00759264687076211f, 0.003775599878281355f, 0.005271728150546551f, 0.004162951838225126f, 0.003025519661605358f, 0.0047021955251693726f, 0.003536736126989126f, 0.004340232815593481f, 0.003953007981181145f, 0.0048776473850011826f, 0.005633519496768713f, 0.006351832766085863f, 0.003660722868517041f, 0.002385524334385991f, 0.003235412994399667f, 0.00538614159449935f, 0.007433279883116484f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007180454209446907f, 0.009571187198162079f, 0.00869543757289648f, 0.005424738395959139f, 0.008595988154411316f, 0.008922770619392395f, 0.0050023505464196205f, 0.010351864621043205f, 0.008360189385712147f, 0.009971748106181622f, 0.015414811670780182f, 0.005747785326093435f, 0.005315709393471479f, 0.007013090420514345f, 0.009250161238014698f, 0.014119163155555725f, 0.009128544479608536f, 0.007030766922980547f, 0.006008390337228775f, 0.00815745908766985f, 0.0078000230714678764f, 0.005365611985325813f, 0.009221239015460014f, 0.003330458654090762f, 0.005364932119846344f, 0.007249805610626936f, 0.005687704309821129f, 0.007795301266014576f, 0.003843839978799224f, 0.0076714567840099335f, 0.01267136912792921f, 0.007552056573331356f, 0.0038893502205610275f, 0.00735646765679121f, 0.011201814748346806f, 0.004406074061989784f, 0.007607018109411001f, 0.004088932182639837f, 0.009183649905025959f, 0.006751218810677528f, 0.008088340982794762f, 0.014796442352235317f, 0.00695812376216054f, 0.009490924887359142f, 0.006637509912252426f, 0.006913510616868734f, 0.005497210193425417f, 0.006825959775596857f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031411806121468544f, 0.0035421850625425577f, 0.0033610884565860033f, 0.0034161065705120564f, 0.0032561051193624735f, 0.002596733160316944f, 0.0015518194995820522f, 0.0032656765542924404f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0026040265802294016f, 0.0025807968340814114f, 0.0028526780661195517f, 0.0030207475647330284f, 0.002794047584757209f, 0.0037736527156084776f, 0.0033797738142311573f, 0.0031004000920802355f, 0.0033749251160770655f, 0.003490700852125883f, 0.002707083011046052f, 0.0028620371595025063f, 0.003221244318410754f, 0.0026153780054301023f, 0.0035679503343999386f, 0.004122732672840357f, 0.0030048410408198833f, 0.002935243770480156f, 0.0028137373737990856f, 0.003879567375406623f, 0.0021010239142924547f, 0.002394877141341567f, 0.0027284601237624884f, 0.00283904024399817f, 0.0033109677024185658f, 0.003716610139235854f, 0.003087676130235195f, 0.0026807317044585943f, 0.0025637096259742975f, 0.003067807061597705f, 0.0034000263549387455f, 0.0034181647934019566f, 0.004611401818692684f, 0.003973580431193113f, 0.003009907901287079f, 0.0034855385310947895f, 0.0031473259441554546f, 0.002523119794204831f, 0.003733183490112424f, 0.0026214332319796085f, 0.0034310726914554834f, 0.0026166164316236973f, 0.004099301062524319f, 0.0031431522220373154f, 0.002295571146532893f, 0.004194417502731085f, 0.003688282798975706f, 0.0031015323475003242f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009189670905470848f, 0.005055725108832121f, 0.004081408027559519f, 0.006224154029041529f, 0.013249236159026623f, 0.00603822898119688f, 0.007245084270834923f, 0.00653304485604167f, 0.00771583616733551f, 0.00345830456353724f, 0.009164723567664623f, 0.010291305370628834f, 0.006836180109530687f, 0.005685646552592516f, 0.008321105502545834f, 0.004368407651782036f, 0.006662279833108187f, 0.008060217835009098f, 0.004915080964565277f, 0.006710555404424667f, 0.004504373297095299f, 0.008235686458647251f, 0.00954283308237791f, 0.005953872110694647f, 0.007819544523954391f, 0.007263554260134697f, 0.005468686111271381f, 0.008892124518752098f, 0.004225373268127441f, 0.006319013424217701f, 0.00859344657510519f, 0.006706085987389088f, 0.00460784463211894f, 0.007555637042969465f, 0.003586692037060857f, 0.009066651575267315f, 0.011712877079844475f, 0.00654939329251647f, 0.0065774982795119286f, 0.0059802536852657795f, 0.010342767462134361f, 0.01108243502676487f, 0.006541609764099121f, 0.004384779836982489f, 0.006347461603581905f, 0.011621923185884953f, 0.004883475136011839f, 0.008465004153549671f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0038671931251883507f, 0.003674378152936697f, 0.0030627711676061153f, 0.002897445112466812f, 0.003638355527073145f, 0.0027841334231197834f, 0.0028293165378272533f, 0.002508553210645914f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005294972099363804f, 0.0035196433309465647f, 0.005083883181214333f, 0.0041077397763729095f, 0.005124158225953579f, 0.003984411712735891f, 0.0035236338153481483f, 0.0046078795567154884f, 0.004957796540111303f, 0.0045873848721385f, 0.0037641071248799562f, 0.005817364435642958f, 0.004252640996128321f, 0.006404299754649401f, 0.00397264352068305f, 0.004290007054805756f, 0.004311466123908758f, 0.004136442672461271f, 0.0050179678946733475f, 0.00396047392860055f, 0.003589882282540202f, 0.006168683059513569f, 0.003746759844943881f, 0.003478417405858636f, 0.002980738878250122f, 0.0032922967802733183f, 0.004039326682686806f, 0.005025032442063093f, 0.002694512950256467f, 0.0045808120630681515f, 0.003890905063599348f, 0.006596648134291172f, 0.0031115363817662f, 0.004165889695286751f, 0.005725168157368898f, 0.0043693832121789455f, 0.004458841402083635f, 0.004895045887678862f, 0.005060615483671427f, 0.004437230993062258f, 0.003686571726575494f, 0.0046061137691140175f, 0.0040456135757267475f, 0.004089962691068649f, 0.005707237869501114f, 0.004868085030466318f, 0.004075109958648682f, 0.004009714350104332f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.013050366193056107f, 0.005569644272327423f, 0.012479661963880062f, 0.00575272087007761f, 0.006112799048423767f, 0.003748985007405281f, 0.007082675583660603f, 0.00918230228126049f, 0.006705792620778084f, 0.0058644856326282024f, 0.005938222631812096f, 0.009462202899158001f, 0.01475660502910614f, 0.008442992344498634f, 0.005168760661035776f, 0.004400244448333979f, 0.007001287769526243f, 0.006621960550546646f, 0.00994123239070177f, 0.00537530705332756f, 0.011197453364729881f, 0.006074534263461828f, 0.0033787775319069624f, 0.008317113853991032f, 0.007420741021633148f, 0.006161288358271122f, 0.009699813090264797f, 0.004465640056878328f, 0.004669463261961937f, 0.007340895012021065f, 0.00474534509703517f, 0.004983673337846994f, 0.00602631364017725f, 0.0057724895887076855f, 0.006346765905618668f, 0.013859214261174202f, 0.00582773657515645f, 0.008179056458175182f, 0.0036286604590713978f, 0.007692090701311827f, 0.006035537924617529f, 0.005841473117470741f, 0.009521761909127235f, 0.004271690268069506f, 0.0070484708994627f, 0.007256118580698967f, 0.006886778865009546f, 0.007887344807386398f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0032295386772602797f, 0.002492360770702362f, 0.00273160170763731f, 0.003262640442699194f, 0.0033550369553267956f, 0.0034629504662007093f, 0.002961104968562722f, 0.0025475199799984694f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019131823210045695f, 0.0032767634838819504f, 0.0032051661983132362f, 0.004167570266872644f, 0.0027358175721019506f, 0.0029733963310718536f, 0.003053880762308836f, 0.00275975838303566f, 0.0032990470062941313f, 0.002960893092676997f, 0.004312949720770121f, 0.0033351872116327286f, 0.0020376197062432766f, 0.0022885205689817667f, 0.004492123611271381f, 0.0034417069982737303f, 0.003168662078678608f, 0.0035542123951017857f, 0.002999383956193924f, 0.0032246417831629515f, 0.0025635147467255592f, 0.0028531374409794807f, 0.0023781845811754465f, 0.003210697090253234f, 0.0031796926632523537f, 0.002839678432792425f, 0.0037137772887945175f, 0.0031690020114183426f, 0.002205613302066922f, 0.002627456560730934f, 0.0027565094642341137f, 0.0029248998034745455f, 0.003664378309622407f, 0.0025448438245803118f, 0.0033634069841355085f, 0.0023728099185973406f, 0.002493858803063631f, 0.0026322121266275644f, 0.002580272266641259f, 0.0035466868430376053f, 0.0029103748966008425f, 0.0031355975661426783f, 0.003384541952982545f, 0.0032538517843931913f, 0.00311771547421813f, 0.002780110575258732f, 0.002694143448024988f, 0.0023101791739463806f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004922789055854082f, 0.010937235318124294f, 0.007170239929109812f, 0.011179529130458832f, 0.004796285647898912f, 0.015406826511025429f, 0.00954816397279501f, 0.0060046762228012085f, 0.004330106545239687f, 0.008442884311079979f, 0.005342372227460146f, 0.006200184114277363f, 0.011303896084427834f, 0.005593928508460522f, 0.0095828203484416f, 0.005155822262167931f, 0.0032428987324237823f, 0.004787540063261986f, 0.007646018173545599f, 0.009328329004347324f, 0.0031073594000190496f, 0.009354515932500362f, 0.010836683213710785f, 0.011055788025259972f, 0.006164646241813898f, 0.010353554971516132f, 0.00869149062782526f, 0.003617226844653487f, 0.00415337597951293f, 0.014918345957994461f, 0.0055947937071323395f, 0.004660086706280708f, 0.009119152091443539f, 0.00807244423776865f, 0.004139792639762163f, 0.008860831148922443f, 0.010872874408960342f, 0.00894065573811531f, 0.006095482036471367f, 0.008105271495878696f, 0.00827499944716692f, 0.007615279406309128f, 0.008758791722357273f, 0.0169815793633461f, 0.009206032380461693f, 0.013005906715989113f, 0.004142803605645895f, 0.005887929815798998f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029168250039219856f, 0.003785773878917098f, 0.003049118211492896f, 0.002810050966218114f, 0.003367366036400199f, 0.0028434190899133682f, 0.002311918418854475f, 0.003016026457771659f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001959799090400338f, 0.0015183675568550825f, 0.0023371775168925524f, 0.0021584562491625547f, 0.0015293093165382743f, 0.002666264306753874f, 0.00190357503015548f, 0.0032489157747477293f, 0.002258855849504471f, 0.0018699654610827565f, 0.0032153655774891376f, 0.0014936737716197968f, 0.0020278235897421837f, 0.0017216242849826813f, 0.0016471761045977473f, 0.0027078534476459026f, 0.00172817159909755f, 0.002271971432492137f, 0.0019320138962939382f, 0.002371313748881221f, 0.0016445639776065946f, 0.0024625735823065042f, 0.0027333435136824846f, 0.003022891702130437f, 0.0033683697693049908f, 0.0021558059379458427f, 0.0017241569003090262f, 0.003105642506852746f, 0.0023678175639361143f, 0.0023892915342003107f, 0.0025992942973971367f, 0.0025816524866968393f, 0.0030456644017249346f, 0.0028390365187078714f, 0.001628491678275168f, 0.0024389366153627634f, 0.002244810573756695f, 0.0016646484145894647f, 0.0017041376559063792f, 0.002037644386291504f, 0.0016804012702777982f, 0.0029389800038188696f, 0.0023099728859961033f, 0.0019503127550706267f, 0.0021245600655674934f, 0.002165423473343253f, 0.0018880043644458055f, 0.0019783431198447943f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006501008756458759f, 0.0032978272065520287f, 0.005528665147721767f, 0.010941598564386368f, 0.008982001803815365f, 0.009089654311537743f, 0.006464504171162844f, 0.0053091575391590595f, 0.00675975764170289f, 0.006982446648180485f, 0.007914604619145393f, 0.004880066961050034f, 0.004461334552615881f, 0.004922190681099892f, 0.0031877935398370028f, 0.009385069832205772f, 0.004717789124697447f, 0.005964098032563925f, 0.004333703313022852f, 0.004841236397624016f, 0.015559839084744453f, 0.00569566385820508f, 0.00565255107358098f, 0.0032683962490409613f, 0.005739736370742321f, 0.008809845894575119f, 0.004346739500761032f, 0.003655840875580907f, 0.004079456906765699f, 0.003879729425534606f, 0.007164307404309511f, 0.0035322015173733234f, 0.00789659470319748f, 0.005245626904070377f, 0.0038188945036381483f, 0.010437092743813992f, 0.0033116997219622135f, 0.003345079254359007f, 0.007447891868650913f, 0.005570877343416214f, 0.007461369503289461f, 0.006885071285068989f, 0.003506788518279791f, 0.006081762723624706f, 0.006638191640377045f, 0.008146144449710846f, 0.005332053638994694f, 0.004863242618739605f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002772960113361478f, 0.004570655524730682f, 0.0031901863403618336f, 0.005253233015537262f, 0.0024524303153157234f, 0.002450064057484269f, 0.003182642161846161f, 0.0021351699251681566f, 0.003267823252826929f, 0.002626783214509487f, 0.003666778327897191f, 0.003283363999798894f, 0.004051794297993183f, 0.00305948406457901f, 0.0035192626528441906f, 0.003462087595835328f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003681384725496173f, 0.003424060298129916f, 0.0038848984986543655f, 0.00455867312848568f, 0.002464636927470565f, 0.0021187106613069773f, 0.004353100433945656f, 0.0032980842515826225f, 0.002027720445767045f, 0.002670836402103305f, 0.004117712844163179f, 0.003330273786559701f, 0.0024543250910937786f, 0.004407443106174469f, 0.0038790605030953884f, 0.002686497289687395f, 0.003352136118337512f, 0.004878247156739235f, 0.0018459924031049013f, 0.0021911843214184046f, 0.0038157515227794647f, 0.0031750882044434547f, 0.0033146224450320005f, 0.0022231251932680607f, 0.004498671740293503f, 0.0044516208581626415f, 0.0028326488099992275f, 0.0032781229820102453f, 0.0037147614639252424f, 0.0033779703080654144f, 0.0036020034458488226f, 0.004449506290256977f, 0.0037289049942046404f, 0.002346842782571912f, 0.0023005055263638496f, 0.0027077358681708574f, 0.005499377381056547f, 0.0027670792769640684f, 0.003806702559813857f, 0.00501779280602932f, 0.0020726239308714867f, 0.0051948679611086845f, 0.0034190649166703224f, 0.004469395149499178f, 0.002140996279194951f, 0.00359537941403687f, 0.0037852097302675247f, 0.002991531975567341f, 0.0036493169609457254f, 0.002926725661382079f, 0.004508630838245153f, 0.004085044376552105f, 0.003003672929480672f, 0.0027071996591985226f, 0.003432952333241701f, 0.0029042507521808147f, 0.004901524633169174f, 0.004232667852193117f, 0.002987754764035344f, 0.0017746801022440195f, 0.0032010895665735006f, 0.0032322811894118786f, 0.002694064984098077f, 0.0025156999472528696f, 0.002911756746470928f, 0.0031077710445970297f, 0.0036592145916074514f, 0.004547839518636465f, 0.0038054282777011395f, 0.0015506932977586985f, 0.0058705466799438f, 0.004272437654435635f, 0.002981089288368821f, 0.0029372582212090492f, 0.0033986594062298536f, 0.0035886650439351797f, 0.002439684933051467f, 0.003307317616418004f, 0.0026146993041038513f, 0.003154450561851263f, 0.004082954954355955f, 0.0038668052293360233f, 0.004871002864092588f, 0.0027069684583693743f, 0.0038588165771216154f, 0.0018146299989894032f, 0.0032538098748773336f, 0.002898528939113021f, 0.005027424544095993f, 0.0019812772516161203f, 0.002994745271280408f, 0.0032217917032539845f, 0.002978206379339099f, 0.003910952713340521f, 0.0033241191413253546f, 0.0029604865703731775f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0114149060100317f, 0.010192902758717537f, 0.005669562146067619f, 0.009091478772461414f, 0.008424323052167892f, 0.0056082806549966335f, 0.007183016277849674f, 0.009276657365262508f, 0.014486863277852535f, 0.008709629997611046f, 0.004589333664625883f, 0.010096821002662182f, 0.004854090977460146f, 0.005760631524026394f, 0.0065320637077093124f, 0.006526187062263489f, 0.007689434569329023f, 0.006998492870479822f, 0.014181902632117271f, 0.010581948794424534f, 0.006628263276070356f, 0.008220587857067585f, 0.006269237957894802f, 0.009114747866988182f, 0.010259858332574368f, 0.008843079209327698f, 0.008948239497840405f, 0.005794081371277571f, 0.005692686419934034f, 0.007812489289790392f, 0.005537929944694042f, 0.006443381309509277f, 0.004775624722242355f, 0.0051393816247582436f, 0.005467476323246956f, 0.003928849007934332f, 0.009919705800712109f, 0.007818219251930714f, 0.006424791645258665f, 0.008477930910885334f, 0.009581427089869976f, 0.007298253942281008f, 0.009633117355406284f, 0.006320522632449865f, 0.004312548786401749f, 0.004256170708686113f, 0.006709584034979343f, 0.004322274122387171f, 0.006077341269701719f, 0.009899051859974861f, 0.0044319648295640945f, 0.007053635083138943f, 0.005261524114757776f, 0.01532782893627882f, 0.006826893892139196f, 0.004471373278647661f, 0.007281341589987278f, 0.008344224654138088f, 0.005201724357903004f, 0.005057655740529299f, 0.007174430415034294f, 0.003379015950486064f, 0.012225093320012093f, 0.008279873989522457f, 0.005902828183025122f, 0.005080136004835367f, 0.0039697554893791676f, 0.00916530005633831f, 0.010479465126991272f, 0.013200340792536736f, 0.005807749927043915f, 0.007096150889992714f, 0.00647225184366107f, 0.006656252313405275f, 0.005678785964846611f, 0.00638151541352272f, 0.004343233071267605f, 0.008498038165271282f, 0.008758916519582272f, 0.0035853637382388115f, 0.006015991326421499f, 0.008787039667367935f, 0.009165561757981777f, 0.004269526340067387f, 0.007520271465182304f, 0.007482563611119986f, 0.008160825818777084f, 0.01262654922902584f, 0.007151925470679998f, 0.009517630562186241f, 0.010744593106210232f, 0.006628241389989853f, 0.008536124601960182f, 0.006353451870381832f, 0.00784006156027317f, 0.0054671368561685085f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025171730667352676f, 0.0018031834624707699f, 0.0028032714035362005f, 0.0023778234608471394f, 0.002475867047905922f, 0.0024819588288664818f, 0.002129238797351718f, 0.0023287830408662558f, 0.0025047387462109327f, 0.00234021432697773f, 0.002179498551413417f, 0.001948546851053834f, 0.002814921550452709f, 0.002463753568008542f, 0.0022926623933017254f, 0.002843969501554966f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001416717772372067f, 0.0023219583090394735f, 0.0028687065932899714f, 0.0032456053886562586f, 0.0028826843481510878f, 0.0025921801570802927f, 0.0018684377428144217f, 0.0022475700825452805f, 0.0016170460730791092f, 0.00217838934622705f, 0.0025940416380763054f, 0.0026475791819393635f, 0.0010681425919756293f, 0.0010850966209545732f, 0.0030217631720006466f, 0.0018570419633761048f, 0.001861792290583253f, 0.001956305233761668f, 0.001446544541977346f, 0.0022490250412374735f, 0.0018902717856690288f, 0.0016825210768729448f, 0.0018606808735057712f, 0.002756069414317608f, 0.0018813272472470999f, 0.0023106832522898912f, 0.00291685969568789f, 0.0028366330079734325f, 0.002541770925745368f, 0.0014397064223885536f, 0.001704501686617732f, 0.0018683802336454391f, 0.00280942814424634f, 0.002540658926591277f, 0.002089363057166338f, 0.0015740025555714965f, 0.0023560086265206337f, 0.0015843634027987719f, 0.002281057881191373f, 0.0028043717611581087f, 0.001971010584384203f, 0.003803726052865386f, 0.002107463777065277f, 0.002461931901052594f, 0.0022855233401060104f, 0.002553599188104272f, 0.002170932712033391f, 0.0020651528611779213f, 0.0025597515050321817f, 0.0024710947182029486f, 0.002558522392064333f, 0.0016316514229401946f, 0.0015327458968386054f, 0.0019556554034352303f, 0.0026376121677458286f, 0.0019143648678436875f, 0.0018377567175775766f, 0.001595427398569882f, 0.002262358320876956f, 0.002652904484421015f, 0.0025953177828341722f, 0.0011279791360720992f, 0.002062486717477441f, 0.0018026063917204738f, 0.0036407236475497484f, 0.0019442171324044466f, 0.0014634935650974512f, 0.0025131930597126484f, 0.003046864876523614f, 0.0021644423250108957f, 0.002083019120618701f, 0.0022449588868767023f, 0.003218440106138587f, 0.002564494963735342f, 0.002503100084140897f, 0.0017838102066889405f, 0.0025963415391743183f, 0.0020731324329972267f, 0.0028528785333037376f, 0.0025953452568501234f, 0.0019747524056583643f, 0.001965195406228304f, 0.0022905028890818357f, 0.0013887599343433976f, 0.0027745473198592663f, 0.0020544722210615873f, 0.003233599942177534f, 0.0027191871777176857f, 0.002811193000525236f, 0.00291893957182765f, 0.0015864326851442456f, 0.0021342174150049686f, 0.0016996306367218494f, 0.0017388946143910289f, 0.0017190955113619566f, 0.0015339022502303123f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036527083721011877f, 0.004911582916975021f, 0.012224092148244381f, 0.008529840037226677f, 0.009606082923710346f, 0.008705349639058113f, 0.007207524497061968f, 0.012964309193193913f, 0.008731030859053135f, 0.005085911136120558f, 0.009415593929588795f, 0.008830340579152107f, 0.00326895946636796f, 0.014219227246940136f, 0.005562325473874807f, 0.005828042980283499f, 0.008881551213562489f, 0.010549395345151424f, 0.011374233290553093f, 0.0036268169060349464f, 0.006320165004581213f, 0.006425892934203148f, 0.006643124856054783f, 0.006341449450701475f, 0.00944697018712759f, 0.006525760516524315f, 0.008491112850606441f, 0.007684933487325907f, 0.007807826157659292f, 0.011742844246327877f, 0.012740627862513065f, 0.006862430367618799f, 0.009783768095076084f, 0.005110803991556168f, 0.01009102538228035f, 0.007319313008338213f, 0.01029005367308855f, 0.009731757454574108f, 0.012030273675918579f, 0.004411386791616678f, 0.005248902831226587f, 0.006936048623174429f, 0.006301428657025099f, 0.0068181524984538555f, 0.006472596898674965f, 0.01016563642770052f, 0.007057903800159693f, 0.004454372450709343f, 0.00985018815845251f, 0.0074200560338795185f, 0.00687697809189558f, 0.009694298729300499f, 0.007315990515053272f, 0.006535811815410852f, 0.006935340352356434f, 0.009270871058106422f, 0.009321296587586403f, 0.007626680191606283f, 0.008329549804329872f, 0.0070491391234099865f, 0.0031432651448994875f, 0.0035440796054899693f, 0.009725617244839668f, 0.009101091884076595f, 0.00599301652982831f, 0.011304918676614761f, 0.012599428184330463f, 0.008544810116291046f, 0.005501007195562124f, 0.007220162078738213f, 0.004189576022326946f, 0.00814259797334671f, 0.009523004293441772f, 0.011581016704440117f, 0.009608039632439613f, 0.006522657349705696f, 0.005713959690183401f, 0.006390697788447142f, 0.00907505489885807f, 0.004572728648781776f, 0.0063119130209088326f, 0.005640456452965736f, 0.008206960745155811f, 0.004855883773416281f, 0.005056323483586311f, 0.005469863303005695f, 0.00962889939546585f, 0.008067446760833263f, 0.006353157572448254f, 0.00730682210996747f, 0.006222512573003769f, 0.006922978442162275f, 0.0037684289272874594f, 0.005125609692186117f, 0.00933245662599802f, 0.008882658556103706f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_52_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022543093655258417f, 0.0018215536838397384f, 0.0028645077254623175f, 0.0026862819213420153f, 0.002980862744152546f, 0.0021622409112751484f, 0.0021084281615912914f, 0.0016721487045288086f, 0.0022970475256443024f, 0.0024372395128011703f, 0.0018548032967373729f, 0.0020695175044238567f, 0.0022944046650081873f, 0.0020046792924404144f, 0.0019897702150046825f, 0.0018707533599808812f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001592539600096643f, 0.002073625335469842f, 0.0012332515325397253f, 0.0019259675173088908f, 0.0030781934037804604f, 0.0013708198675885797f, 0.0017976699164137244f, 0.0024228414986282587f, 0.0014350172132253647f, 0.001689721131697297f, 0.0018585713114589453f, 0.002270145807415247f, 0.001660110428929329f, 0.0017902590334415436f, 0.001481814542785287f, 0.0012489001965150237f, 0.0014269581297412515f, 0.0014060280518606305f, 0.0020368306431919336f, 0.001194693031720817f, 0.0017332793213427067f, 0.0017666755011305213f, 0.0027841192204505205f, 0.0016644991701468825f, 0.0015107555082067847f, 0.0013264096342027187f, 0.0017473527695983648f, 0.0014277519658207893f, 0.0021255805622786283f, 0.0012951262760907412f, 0.0021834736689925194f, 0.0018009466584771872f, 0.001666753669269383f, 0.0019061894854530692f, 0.0011080815456807613f, 0.0013593020848929882f, 0.001872190972790122f, 0.0022108694538474083f, 0.002039186889305711f, 0.001825918210670352f, 0.0022159148938953876f, 0.0016893356805667281f, 0.0022458762396126986f, 0.0010681315325200558f, 0.0016966358525678515f, 0.001750451629050076f, 0.0016778336139395833f, 0.001758934697136283f, 0.0021753169130533934f, 0.0016340867150574923f, 0.001454332610592246f, 0.0017276284052059054f, 0.0025798315182328224f, 0.0016906504752114415f, 0.001927233301103115f, 0.0016880040057003498f, 0.0014267241349443793f, 0.00147116812877357f, 0.001999732106924057f, 0.002028817543759942f, 0.0016601242823526263f, 0.0014999813865870237f, 0.0013284244341775775f, 0.0012101500760763884f, 0.0017800836358219385f, 0.001158353523351252f, 0.0015645291423425078f, 0.0026246088091284037f, 0.0021933703683316708f, 0.002439850941300392f, 0.0013819814193993807f, 0.0019420882454141974f, 0.0020290312822908163f, 0.0011600347934290767f, 0.0020779927726835012f, 0.0023846786934882402f, 0.0014796990435570478f, 0.0013226782903075218f, 0.0011448794975876808f, 0.0014694760320708156f, 0.002250600839033723f, 0.0017565612215548754f, 0.0020799993071705103f, 0.002201052149757743f, 0.0013931149151176214f, 0.0012007002951577306f, 0.0011832343880087137f, 0.0020809280686080456f, 0.00190265872515738f, 0.001888996222987771f, 0.0011819341452792287f, 0.0010482852812856436f, 0.002001892076805234f, 0.0016460298793390393f, 0.0014960566768422723f, 0.0017334825824946165f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007408627308905125f, 0.009381678886711597f, 0.004155970644205809f, 0.004538737703114748f, 0.007340379524976015f, 0.00431935815140605f, 0.005714683793485165f, 0.007244989741593599f, 0.004133232403546572f, 0.00882893055677414f, 0.005351319909095764f, 0.004482761025428772f, 0.006418653763830662f, 0.00791667029261589f, 0.0053104315884411335f, 0.0035061088856309652f, 0.006091242656111717f, 0.009679841808974743f, 0.00488496758043766f, 0.0036833793856203556f, 0.006210148334503174f, 0.014202439226210117f, 0.010097215883433819f, 0.013909894973039627f, 0.008781521581113338f, 0.008600457571446896f, 0.011884949170053005f, 0.007192258257418871f, 0.0074027348309755325f, 0.004472861997783184f, 0.007962744683027267f, 0.01114087738096714f, 0.008945686742663383f, 0.0055200643837451935f, 0.0036203425843268633f, 0.010649058036506176f, 0.006729526910930872f, 0.005052566062659025f, 0.005396728869527578f, 0.010452465154230595f, 0.009752604179084301f, 0.006187936756759882f, 0.008328614756464958f, 0.008133587427437305f, 0.005371760111302137f, 0.008505294099450111f, 0.011739085428416729f, 0.01308046467602253f, 0.006650158204138279f, 0.0068149687722325325f, 0.00862208567559719f, 0.00523768924176693f, 0.008621357381343842f, 0.012493094429373741f, 0.004902505781501532f, 0.006468065083026886f, 0.004878826439380646f, 0.006541154813021421f, 0.004202163312584162f, 0.009286919608712196f, 0.006053005810827017f, 0.007978510111570358f, 0.00785067118704319f, 0.006963696796447039f, 0.003739522770047188f, 0.014122193679213524f, 0.01613612473011017f, 0.007985400967299938f, 0.01077332254499197f, 0.005112929735332727f, 0.013299130834639072f, 0.005487241316586733f, 0.009946041740477085f, 0.008119366131722927f, 0.005916099529713392f, 0.007652466185390949f, 0.005140816327184439f, 0.009593373164534569f, 0.0044461144134402275f, 0.006632364820688963f, 0.004621861502528191f, 0.0077827684581279755f, 0.0073506892658770084f, 0.005791898816823959f, 0.00995602272450924f, 0.003173758974298835f, 0.0074083455838263035f, 0.003737987717613578f, 0.008155916817486286f, 0.006536860950291157f, 0.008398231118917465f, 0.004103585612028837f, 0.011507336050271988f, 0.008009959943592548f, 0.006372670643031597f, 0.004815983586013317f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_39_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002398144453763962f, 0.002237777691334486f, 0.002596789039671421f, 0.001993008889257908f, 0.002414389979094267f, 0.0021963943727314472f, 0.0013114098692312837f, 0.0022792713716626167f, 0.0017061469843611121f, 0.0014977079117670655f, 0.0021528517827391624f, 0.0018953211838379502f, 0.0022083537187427282f, 0.0016211121110245585f, 0.002202673116698861f, 0.0017539151012897491f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009120377944782376f, 0.0024722644593566656f, 0.0007372223772108555f, 0.0012667365372180939f, 0.0014041125541552901f, 0.001187903806567192f, 0.0019136336632072926f, 0.0013749429490417242f, 0.0012360556283965707f, 0.002506580436602235f, 0.000998775358311832f, 0.0013635387877002358f, 0.0021165539510548115f, 0.0010596688371151686f, 0.001077513676136732f, 0.0007065921672619879f, 0.0010398580925539136f, 0.00070741813397035f, 0.0009740897221490741f, 0.0013957754708826542f, 0.0013363794423639774f, 0.001292199594900012f, 0.00129884690977633f, 0.002253865357488394f, 0.0014824627432972193f, 0.0009575324365869164f, 0.001021987060084939f, 0.0015926322666928172f, 0.0016966989496722817f, 0.001325193326920271f, 0.0012117101578041911f, 0.0014875077176839113f, 0.0010902421781793237f, 0.0022748850751668215f, 0.0011721865739673376f, 0.0010685442248359323f, 0.001058288849890232f, 0.0010760690784081817f, 0.0010236600646749139f, 0.0013646184233948588f, 0.0006453855894505978f, 0.0012109277304261923f, 0.0012861742870882154f, 0.0010071959113702178f, 0.0018416070379316807f, 0.0013099758652970195f, 0.0012881143484264612f, 0.0012820360716432333f, 0.0011692317202687263f, 0.0011742847273126245f, 0.001258521107956767f, 0.0013413717970252037f, 0.0007964951801113784f, 0.0014149787602946162f, 0.0014543015277013183f, 0.0010897977044805884f, 0.0015298424987122416f, 0.0012406434398144484f, 0.0016131517477333546f, 0.0012848241021856666f, 0.0009129047975875437f, 0.001686631585471332f, 0.0008525490993633866f, 0.0012075935956090689f, 0.0007920256466604769f, 0.0018978561274707317f, 0.0007267887704074383f, 0.0016300843562930822f, 0.0013952184235677123f, 0.0009220957290381193f, 0.0014844001270830631f, 0.0010316215921193361f, 0.0017765761585906148f, 0.0014264684868976474f, 0.0010712462244555354f, 0.0012235991889610887f, 0.0013566231355071068f, 0.0014504663413390517f, 0.001205240492708981f, 0.0011622686870396137f, 0.001682206871919334f, 0.0016009967075660825f, 0.0011514545185491443f, 0.0008179257274605334f, 0.001623674063012004f, 0.001158120227046311f, 0.0011181586887687445f, 0.0008619086584076285f, 0.0014887098222970963f, 0.0009159331093542278f, 0.0010072742588818073f, 0.0015608376124873757f, 0.0007872273563407362f, 0.0012091657845303416f, 0.001812571077607572f, 0.001271654269658029f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003159584477543831f, 0.011842022649943829f, 0.010282467119395733f, 0.01089259423315525f, 0.011132661253213882f, 0.0027240924537181854f, 0.008351977914571762f, 0.0067692589946091175f, 0.00747169554233551f, 0.007421970833092928f, 0.013926285319030285f, 0.01010131649672985f, 0.007328139152377844f, 0.005488221999257803f, 0.003287391969934106f, 0.005118268541991711f, 0.006728469859808683f, 0.004241719841957092f, 0.007222552318125963f, 0.002901224885135889f, 0.0033951301593333483f, 0.008195650763809681f, 0.006841267924755812f, 0.00828134547919035f, 0.004468390252441168f, 0.008347716182470322f, 0.012273035012185574f, 0.009353416040539742f, 0.008816350251436234f, 0.005454396829009056f, 0.014150556176900864f, 0.008101368322968483f, 0.007145690731704235f, 0.009432178921997547f, 0.011218952015042305f, 0.00924177560955286f, 0.007253541145473719f, 0.0051644728519022465f, 0.008547443896532059f, 0.008030970580875874f, 0.0068138460628688335f, 0.0103150000795722f, 0.004267503973096609f, 0.003049286315217614f, 0.009568518958985806f, 0.006525262258946896f, 0.007153565064072609f, 0.00574088329449296f, 0.005794025491923094f, 0.006295931991189718f, 0.009629684500396252f, 0.00809849239885807f, 0.008881726302206516f, 0.003504405962303281f, 0.008382442407310009f, 0.006282020825892687f, 0.006282677873969078f, 0.006074365694075823f, 0.00724394153803587f, 0.009211302734911442f, 0.005119249224662781f, 0.0032898453064262867f, 0.005961747374385595f, 0.006537513807415962f, 0.0065073235891759396f, 0.0045921942219138145f, 0.007932749576866627f, 0.009796320460736752f, 0.0048986091278493404f, 0.0038574719801545143f, 0.0036551172379404306f, 0.009344213642179966f, 0.0050022597424685955f, 0.006958758924156427f, 0.003101624082773924f, 0.009866482578217983f, 0.00715692387893796f, 0.009642189368605614f, 0.011756068095564842f, 0.00900037307292223f, 0.006222280208021402f, 0.010400895960628986f, 0.004194394685328007f, 0.012959701009094715f, 0.006712513975799084f, 0.005868094507604837f, 0.0063743009231984615f, 0.004963357001543045f, 0.004458184354007244f, 0.005252470728009939f, 0.009580712765455246f, 0.007935699075460434f, 0.00553685799241066f, 0.0050612445920705795f, 0.006298450753092766f, 0.008831699378788471f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_43_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025859540328383446f, 0.0023135188966989517f, 0.002427233150228858f, 0.0018829050241038203f, 0.0018934147665277123f, 0.0017996842507272959f, 0.002066968474537134f, 0.0021988102234899998f, 0.002016579732298851f, 0.001975391525775194f, 0.0020235299598425627f, 0.0033555764239281416f, 0.0017825979739427567f, 0.002567763440310955f, 0.0019876291044056416f, 0.0028008350636810064f, 0.001991576747968793f, 0.002837188309058547f, 0.0017685290658846498f, 0.0024969198275357485f, 0.002272802172228694f, 0.002299830550327897f, 0.0016324060270562768f, 0.0025417557917535305f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002550934674218297f, 0.003502932842820883f, 0.0018942254828289151f, 0.002770613646134734f, 0.002617840189486742f, 0.0034505154471844435f, 0.0020915083587169647f, 0.0019274686928838491f, 0.002478723879903555f, 0.0020220347214490175f, 0.0048567261546850204f, 0.0013368704821914434f, 0.0025255221407860518f, 0.0034375714603811502f, 0.0028891763649880886f, 0.0015941096935421228f, 0.0026579508557915688f, 0.001320168492384255f, 0.00328526902012527f, 0.003279387252405286f, 0.002636578632518649f, 0.003120168810710311f, 0.0031855928245931864f, 0.0036691217683255672f, 0.002933601615950465f, 0.002070865361019969f, 0.0026965283323079348f, 0.0033811035100370646f, 0.002033664844930172f, 0.0024740789085626602f, 0.003795911790803075f, 0.002436373382806778f, 0.002158644376322627f, 0.0019416690338402987f, 0.0026968708261847496f, 0.0038404010701924562f, 0.002810088451951742f, 0.0031876058783382177f, 0.0015440101269632578f, 0.0017742171185091138f, 0.002290773671120405f, 0.0029683057218790054f, 0.002630283823236823f, 0.0026779104955494404f, 0.002426755614578724f, 0.002063137013465166f, 0.002327421447262168f, 0.002129398286342621f, 0.0032936674542725086f, 0.002295166254043579f, 0.0029032656457275152f, 0.0013544808607548475f, 0.0031012396793812513f, 0.004058530554175377f, 0.003989002201706171f, 0.003092862432822585f, 0.0022453882265836f, 0.0029362367931753397f, 0.0017439605435356498f, 0.0025451742112636566f, 0.0036096449475735426f, 0.0022472019772976637f, 0.002073897048830986f, 0.0016347290948033333f, 0.0019383369944989681f, 0.002325146459043026f, 0.00204960023984313f, 0.002288628136739135f, 0.0026009848807007074f, 0.001560640404932201f, 0.0017962941201403737f, 0.0035342418123036623f, 0.002932510105893016f, 0.003586871549487114f, 0.003633151762187481f, 0.002842929679900408f, 0.0025760980788618326f, 0.0030468562617897987f, 0.002432549837976694f, 0.0033663702197372913f, 0.0024015356320887804f, 0.003230143105611205f, 0.0024861665442585945f, 0.0034564018715173006f, 0.0040021417662501335f, 0.002818130422383547f, 0.0041946223936975f, 0.0020911891479045153f, 0.003632410429418087f, 0.0030033509247004986f, 0.0030328715220093727f, 0.0038912128657102585f, 0.002097558695822954f, 0.001741920248605311f, 0.003969044890254736f, 0.002937913639470935f, 0.0017212334787473083f, 0.003003054531291127f, 0.0017609735950827599f, 0.0020690823439508677f, 0.003052780870348215f, 0.0019012043485417962f, 0.0029722251929342747f, 0.0020941353868693113f, 0.002544783754274249f, 0.0030101691372692585f, 0.0026829885318875313f, 0.0025015457067638636f, 0.0035142910201102495f, 0.003948879893869162f, 0.003201283747330308f, 0.0024344041012227535f, 0.004037840757519007f, 0.0020479122176766396f, 0.0025121811777353287f, 0.0029939955566078424f, 0.0035982709378004074f, 0.0033076864201575518f, 0.0035251276567578316f, 0.0038201119750738144f, 0.0039422642439603806f, 0.0020640776492655277f, 0.002517875051125884f, 0.002122674137353897f, 0.0029647203627973795f, 0.0044681909494102f, 0.0015693182358518243f, 0.0033103926107287407f, 0.002026200294494629f, 0.0017212711973115802f, 0.0025131755974143744f, 0.002797177527099848f, 0.001577536342665553f, 0.0022741130087524652f, 0.0028535460587590933f, 0.004019891377538443f, 0.0032023899257183075f, 0.004745091777294874f, 0.002635655226185918f, 0.0045745219103991985f, 0.0028602583333849907f, 0.002471502171829343f, 0.00321212993003428f, 0.0015960289165377617f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005175900645554066f, 0.009534696117043495f, 0.005404319614171982f, 0.010171504691243172f, 0.0077172634191811085f, 0.010500186122953892f, 0.0065299770794808865f, 0.003897740738466382f, 0.008078981190919876f, 0.004970934242010117f, 0.008887575939297676f, 0.004795162472873926f, 0.007310444954782724f, 0.0064748600125312805f, 0.009819216094911098f, 0.0049919611774384975f, 0.0050687058828771114f, 0.006482463330030441f, 0.008961102925240993f, 0.006585465744137764f, 0.008017982356250286f, 0.007900440134108067f, 0.005456244572997093f, 0.00791025348007679f, 0.00940858107060194f, 0.00514241773635149f, 0.007049266714602709f, 0.0077932183630764484f, 0.006228943821042776f, 0.009516924619674683f, 0.006176655180752277f, 0.00811772421002388f, 0.008434692397713661f, 0.01110003236681223f, 0.006494696252048016f, 0.0051103560253977776f, 0.0056084394454956055f, 0.005928702186793089f, 0.0029952290933579206f, 0.005021659657359123f, 0.005384198855608702f, 0.006824170704931021f, 0.008074210025370121f, 0.004825960844755173f, 0.011421594768762589f, 0.012043282389640808f, 0.009282472543418407f, 0.008021561428904533f, 0.010910636745393276f, 0.008860444650053978f, 0.0048303366638720036f, 0.005357541609555483f, 0.0057754917070269585f, 0.009284446947276592f, 0.00816252175718546f, 0.007192343007773161f, 0.004966233391314745f, 0.004690540488809347f, 0.0025330553762614727f, 0.01010079961270094f, 0.005023093428462744f, 0.014561515301465988f, 0.010592414066195488f, 0.009216904640197754f, 0.007673627696931362f, 0.0034264433197677135f, 0.014196201227605343f, 0.00795050896704197f, 0.004079208243638277f, 0.007470848970115185f, 0.0026127698365598917f, 0.005166896618902683f, 0.004838859662413597f, 0.006297823507338762f, 0.006264510098844767f, 0.006302972789853811f, 0.0031436572317034006f, 0.00982690043747425f, 0.003309799823909998f, 0.007507381960749626f, 0.0060390206053853035f, 0.005238549318164587f, 0.007271789945662022f, 0.009966769255697727f, 0.008503845892846584f, 0.008972112089395523f, 0.008940615691244602f, 0.008560346439480782f, 0.010182088240981102f, 0.0054724812507629395f, 0.0061191837303340435f, 0.009103184565901756f, 0.007689754478633404f, 0.004600252024829388f, 0.009330369532108307f, 0.005838760640472174f, 0.007634229492396116f, 0.007521372754126787f, 0.008979171514511108f, 0.004839012399315834f, 0.009606112726032734f, 0.0036231065168976784f, 0.006729841697961092f, 0.004047762136906385f, 0.006881240755319595f, 0.0074677905067801476f, 0.01127338781952858f, 0.006882013287395239f, 0.012825646437704563f, 0.007614822126924992f, 0.005649187136441469f, 0.007991872727870941f, 0.00639160443097353f, 0.010859077796339989f, 0.008007209748029709f, 0.005427706521004438f, 0.006361801642924547f, 0.0066282558254897594f, 0.0056788246147334576f, 0.004870535805821419f, 0.007575783412903547f, 0.010175056755542755f, 0.009762200526893139f, 0.00771539518609643f, 0.011250506155192852f, 0.007716914638876915f, 0.0035583749413490295f, 0.006370681803673506f, 0.007910448126494884f, 0.006084720604121685f, 0.004352350253611803f, 0.009741357527673244f, 0.0055334195494651794f, 0.006674828473478556f, 0.00322718545794487f, 0.006363075692206621f, 0.009560723789036274f, 0.006933790631592274f, 0.006244932767003775f, 0.009496115148067474f, 0.005993866827338934f, 0.006965982727706432f, 0.009724022820591927f, 0.008343879133462906f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_46_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0014512628549709916f, 0.001618008827790618f, 0.0012417096877470613f, 0.0015550495591014624f, 0.0017257274594157934f, 0.0012372902128845453f, 0.0014794536400586367f, 0.001807274529710412f, 0.001317554502747953f, 0.0016133463941514492f, 0.0012162139173597097f, 0.0016951044090092182f, 0.001238179742358625f, 0.0019097203621640801f, 0.0014197875279933214f, 0.0012505445629358292f, 0.0012518042931333184f, 0.0017299059545621276f, 0.0015542740002274513f, 0.0021145588252693415f, 0.0014901055255904794f, 0.0019155244808644056f, 0.0016961856745183468f, 0.0018938466673716903f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017614007228985429f, 0.0027777482755482197f, 0.0011076779337599874f, 0.0018138365121558309f, 0.0017084249993786216f, 0.0015182729111984372f, 0.0015857515390962362f, 0.0008025391143746674f, 0.001992815639823675f, 0.0012113056145608425f, 0.0016062018694356084f, 0.0013485712697729468f, 0.00243729748763144f, 0.0017050550086423755f, 0.0016651342157274485f, 0.002341457875445485f, 0.0014148737536743283f, 0.001460423693060875f, 0.0017324057407677174f, 0.0018426597816869617f, 0.0019209171878173947f, 0.0014294508146122098f, 0.001325723365880549f, 0.0012706605484709144f, 0.002310258336365223f, 0.0014959537656977773f, 0.001793110859580338f, 0.0018741230014711618f, 0.0017974994843825698f, 0.0016341451555490494f, 0.0016800579614937305f, 0.0016341323498636484f, 0.0017135832458734512f, 0.0010973868193104863f, 0.001333226333372295f, 0.002410614863038063f, 0.0024556538555771112f, 0.0020256703719496727f, 0.0014120502164587379f, 0.001346119912341237f, 0.001849878579378128f, 0.0031377472914755344f, 0.0028194913174957037f, 0.002313533565029502f, 0.001874525099992752f, 0.002078042831271887f, 0.0022053250577300787f, 0.001437669387087226f, 0.0012020037975162268f, 0.0016145777190104127f, 0.001473845331929624f, 0.0019571802113205194f, 0.002319147577509284f, 0.0019658675882965326f, 0.00226345332339406f, 0.0020648965146392584f, 0.00180923065636307f, 0.002339280443266034f, 0.001454741577617824f, 0.003167038783431053f, 0.0020541974809020758f, 0.001678483677096665f, 0.001607519225217402f, 0.0014732395065948367f, 0.0014548448380082846f, 0.0016910205595195293f, 0.0014719705795869231f, 0.001659356290474534f, 0.00203422992490232f, 0.0016591880703344941f, 0.0022372037637978792f, 0.0010679145343601704f, 0.002068515634164214f, 0.0016744716558605433f, 0.0015264262910932302f, 0.0016536078182980418f, 0.0022963876836001873f, 0.0015343597624450922f, 0.0020451839081943035f, 0.0018207961693406105f, 0.0018691328587010503f, 0.0013967161066830158f, 0.0018929451471194625f, 0.0020204654429107904f, 0.0017071973998099566f, 0.0021991536486893892f, 0.0013482471695169806f, 0.001214430434629321f, 0.0013715756358578801f, 0.0022304963786154985f, 0.002257187385112047f, 0.0019168793223798275f, 0.0016870875842869282f, 0.0018337934743613005f, 0.0014737151795998216f, 0.0013429103419184685f, 0.0018661234062165022f, 0.0013804648770019412f, 0.0012470585061237216f, 0.0018452294170856476f, 0.0015139776514843106f, 0.002254449063912034f, 0.001642822870053351f, 0.0012902638409286737f, 0.0014014096232131124f, 0.0021694679744541645f, 0.0016306175384670496f, 0.0014857463538646698f, 0.001608539605513215f, 0.002352335024625063f, 0.0013306186301633716f, 0.0016420783940702677f, 0.0022502916399389505f, 0.002015496836975217f, 0.0024261262733489275f, 0.0019415152492001653f, 0.0019555881153792143f, 0.00235541514120996f, 0.0017595546087250113f, 0.00128331093583256f, 0.0018645047675818205f, 0.0010863704374060035f, 0.001410921337082982f, 0.0016741207800805569f, 0.0028259933460503817f, 0.002537470543757081f, 0.0012976686703041196f, 0.0012650203425437212f, 0.0017386983381584287f, 0.0015204197261482477f, 0.0013158211950212717f, 0.002257632091641426f, 0.002313760109245777f, 0.0014844299294054508f, 0.0013365518534556031f, 0.0018754071788862348f, 0.0010552472667768598f, 0.0022649706806987524f, 0.001314504654146731f, 0.0020298173185437918f, 0.0017891299212351441f, 0.002191009698435664f, 0.0017582483123987913f, 0.0016861140029504895f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004517726134508848f, 0.009397309273481369f, 0.004100133664906025f, 0.00878477655351162f, 0.0058985124342143536f, 0.003567090490832925f, 0.00923181138932705f, 0.004651348572224379f, 0.005798038095235825f, 0.007882933132350445f, 0.005012446083128452f, 0.00887693464756012f, 0.005292204674333334f, 0.005470935255289078f, 0.005221536848694086f, 0.007364186923950911f, 0.004388798493891954f, 0.008544460870325565f, 0.006905930116772652f, 0.004913915414363146f, 0.005642235279083252f, 0.008555893786251545f, 0.0050317058339715f, 0.008373157121241093f, 0.0064741093665361404f, 0.008330713957548141f, 0.014766731299459934f, 0.006769844330847263f, 0.005016825161874294f, 0.004600608721375465f, 0.00850144773721695f, 0.004285396076738834f, 0.00791147444397211f, 0.0037011937238276005f, 0.013334812596440315f, 0.010178363882005215f, 0.008269544690847397f, 0.009994597174227238f, 0.009835783392190933f, 0.006930378265678883f, 0.01010435726493597f, 0.016029898077249527f, 0.006167752202600241f, 0.010170352645218372f, 0.006021487060934305f, 0.008698860183358192f, 0.007418194320052862f, 0.004244206473231316f, 0.004543066490441561f, 0.008081600069999695f, 0.005786572583019733f, 0.0090248454362154f, 0.009542761370539665f, 0.010480794124305248f, 0.005999731831252575f, 0.007410981692373753f, 0.006805800832808018f, 0.008804377168416977f, 0.00334039400331676f, 0.005417865701019764f, 0.0065638343803584576f, 0.005132799036800861f, 0.010976467281579971f, 0.010178877972066402f, 0.0054199607111513615f, 0.005287210922688246f, 0.009101560339331627f, 0.005857744254171848f, 0.006404421757906675f, 0.006807183846831322f, 0.01281018927693367f, 0.008061827160418034f, 0.00489325076341629f, 0.007615273352712393f, 0.0046549574472010136f, 0.004526874981820583f, 0.009896830655634403f, 0.0037447111681103706f, 0.008824358694255352f, 0.0047164736315608025f, 0.008161639794707298f, 0.0053685568273067474f, 0.005989568307995796f, 0.009912562556564808f, 0.007845097221434116f, 0.0050814226269721985f, 0.014703623950481415f, 0.005901351571083069f, 0.005595950409770012f, 0.0059114075265824795f, 0.003312686225399375f, 0.008057898841798306f, 0.010875919833779335f, 0.005409827921539545f, 0.013886775821447372f, 0.009885141626000404f, 0.005999268963932991f, 0.007934639230370522f, 0.006173270754516125f, 0.004779844544827938f, 0.006461207754909992f, 0.010876528918743134f, 0.004511665087193251f, 0.011098255403339863f, 0.00453929090872407f, 0.007198494393378496f, 0.006688193418085575f, 0.00489693833515048f, 0.004623885732144117f, 0.005438715685158968f, 0.010373991914093494f, 0.006772157736122608f, 0.006044182926416397f, 0.00795611273497343f, 0.005714484490454197f, 0.0060331872664391994f, 0.007395475171506405f, 0.005929615814238787f, 0.006238957401365042f, 0.0032089066226035357f, 0.008027026429772377f, 0.004267946816980839f, 0.005747262388467789f, 0.005791247822344303f, 0.007881446741521358f, 0.008683241903781891f, 0.01002663467079401f, 0.0065756444819271564f, 0.008881171233952045f, 0.004608433693647385f, 0.004641570616513491f, 0.004766017664223909f, 0.005759794265031815f, 0.009105337783694267f, 0.009441249072551727f, 0.005719674751162529f, 0.006850985810160637f, 0.008377204649150372f, 0.008164136670529842f, 0.005816671997308731f, 0.008928847499191761f, 0.012937917374074459f, 0.005560372024774551f, 0.0073893410153687f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018556710565462708f, 0.0016145147383213043f, 0.0015611621784046292f, 0.0014112074859440327f, 0.001550252316519618f, 0.001615196350030601f, 0.0012734784977510571f, 0.0016056065214797854f, 0.0016262290300801396f, 0.0016585761914029717f, 0.0013629818568006158f, 0.0016115758335217834f, 0.0014460382517427206f, 0.0017682495526969433f, 0.0008301194757223129f, 0.0012448199559003115f, 0.0012143711792305112f, 0.0012387234019115567f, 0.0018158566672354937f, 0.0024447643663734198f, 0.0013787747593596578f, 0.0014191684313118458f, 0.0013406147481873631f, 0.0018406223971396685f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_52_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009716370841488242f, 0.0018327252473682165f, 0.000951363705098629f, 0.0010291599901393056f, 0.0008044096175581217f, 0.0011098640970885754f, 0.0010407754452899098f, 0.0015566762303933501f, 0.001159057253971696f, 0.0011023532133549452f, 0.0011370076099410653f, 0.0022941562347114086f, 0.0012454800307750702f, 0.0008946947637014091f, 0.0010160314850509167f, 0.0014118993422016501f, 0.001665896037593484f, 0.0009598819888196886f, 0.0011605267645791173f, 0.001814133720472455f, 0.0010846254881471395f, 0.0010213543428108096f, 0.0011772734578698874f, 0.0007485520327463746f, 0.001564860693179071f, 0.0009673533495515585f, 0.0007240240229293704f, 0.0009415760287083685f, 0.0010246295714750886f, 0.0006705097039230168f, 0.0012879527639597654f, 0.00111294724047184f, 0.0008722847560420632f, 0.0010647906456142664f, 0.0007266703178174794f, 0.0011006147833541036f, 0.0008232001564465463f, 0.0007699320558458567f, 0.001268200110644102f, 0.001452825265005231f, 0.0014345719246193767f, 0.0006637893966399133f, 0.001064145122654736f, 0.000926448788959533f, 0.001710526179522276f, 0.0007854124996811152f, 0.0006902937311679125f, 0.0008276866865344346f, 0.001355847460217774f, 0.0020302836783230305f, 0.0009875550167635083f, 0.000917878991458565f, 0.0012452865485101938f, 0.0017061135731637478f, 0.0009130233083851635f, 0.0007442691130563617f, 0.002041570609435439f, 0.0012188745895400643f, 0.000951341527979821f, 0.0011151887010782957f, 0.0010910920100286603f, 0.0007907304097898304f, 0.0014385312097147107f, 0.0021934648975729942f, 0.0009621803183108568f, 0.0011770871933549643f, 0.0014562158612534404f, 0.0007778353756293654f, 0.0012164270738139749f, 0.0013665551086887717f, 0.0009213752346113324f, 0.001601698691956699f, 0.0018115013372153044f, 0.001114988699555397f, 0.0017948877066373825f, 0.0013390476815402508f, 0.0009131325641646981f, 0.0013641935074701905f, 0.001226958935149014f, 0.0018858382245525718f, 0.0011873318580910563f, 0.0010653797071427107f, 0.0009683877578936517f, 0.0017497168155387044f, 0.0011403262615203857f, 0.0011307854438200593f, 0.0013089770218357444f, 0.0011460338719189167f, 0.001148667884990573f, 0.0009230239666067064f, 0.0010263628792017698f, 0.001078988192602992f, 0.0014182564336806536f, 0.0008293480495922267f, 0.0007633640198037028f, 0.0013092637527734041f, 0.0019129965221509337f, 0.0016716774553060532f, 0.0013336770934984088f, 0.0012961631873622537f, 0.001219123718328774f, 0.0016092751175165176f, 0.0010050456039607525f, 0.0013642313424497843f, 0.0013118991628289223f, 0.0005907477461732924f, 0.0012090732343494892f, 0.0018377702217549086f, 0.001217203214764595f, 0.0006626512040384114f, 0.0012268220307305455f, 0.0018291573505848646f, 0.001110820914618671f, 0.001145120826549828f, 0.0011407413985580206f, 0.0013965506805106997f, 0.001240760670043528f, 0.0010530438739806414f, 0.0008439681259915233f, 0.0008395487675443292f, 0.0005800947546958923f, 0.0010000821202993393f, 0.001018752809613943f, 0.0008191661327145994f, 0.0016711773350834846f, 0.0014992074575275183f, 0.0006472094100899994f, 0.0010584696428850293f, 0.0012539520394057035f, 0.0012916820123791695f, 0.0018819045508280396f, 0.0012354453792795539f, 0.0018149485113099217f, 0.0006137056043371558f, 0.0008644089684821665f, 0.0011639645090326667f, 0.000965546874795109f, 0.0011083062272518873f, 0.0009616910247132182f, 0.0009444132447242737f, 0.0014181309379637241f, 0.001386512303724885f, 0.001365650910884142f, 0.000971179804764688f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_54_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004875699989497662f, 0.004320856649428606f, 0.00407462939620018f, 0.006975389551371336f, 0.0035628904588520527f, 0.006945527158677578f, 0.0068162186071276665f, 0.00558848213404417f, 0.006440047174692154f, 0.005227210000157356f, 0.00358014740049839f, 0.0054861740209162235f, 0.005972325801849365f, 0.006383197847753763f, 0.011824939399957657f, 0.009276366792619228f, 0.004873407538980246f, 0.004183031152933836f, 0.004272686783224344f, 0.0052719926461577415f, 0.006284443661570549f, 0.002629679162055254f, 0.0070029618218541145f, 0.006508080754429102f, 0.005478790495544672f, 0.003865543520078063f, 0.0065720295533537865f, 0.002982869278639555f, 0.0030862558633089066f, 0.004872147925198078f, 0.00790175050497055f, 0.004423660691827536f, 0.009284771978855133f, 0.01218289416283369f, 0.008607925847172737f, 0.003493477823212743f, 0.0036654521245509386f, 0.005220635328441858f, 0.003289269283413887f, 0.005822822451591492f, 0.0041482169181108475f, 0.01258009485900402f, 0.004454625770449638f, 0.003796500153839588f, 0.004050214774906635f, 0.005126447882503271f, 0.0036572094541043043f, 0.008531673811376095f, 0.011046869680285454f, 0.00698807742446661f, 0.005511491093784571f, 0.008740111254155636f, 0.006251412909477949f, 0.007644143886864185f, 0.005705059971660376f, 0.0028842133469879627f, 0.006362176965922117f, 0.008320856839418411f, 0.012371879070997238f, 0.005356709938496351f, 0.005405780393630266f, 0.006359572056680918f, 0.011358944699168205f, 0.012229066342115402f, 0.004203775431960821f, 0.0029151439666748047f, 0.004852869547903538f, 0.005719250533729792f, 0.010531198233366013f, 0.005224527325481176f, 0.006715014111250639f, 0.0045777917839586735f, 0.00497041130438447f, 0.007019187323749065f, 0.00667026499286294f, 0.006397166755050421f, 0.003437645500525832f, 0.004982130602002144f, 0.005738843232393265f, 0.00886688381433487f, 0.007964740507304668f, 0.005892972927540541f, 0.006120474077761173f, 0.00834079459309578f, 0.005638069473206997f, 0.005323475692421198f, 0.00446014991030097f, 0.005186751019209623f, 0.007339313626289368f, 0.003415351500734687f, 0.0031442975159734488f, 0.003280976787209511f, 0.008575369603931904f, 0.008740958757698536f, 0.006531471852213144f, 0.005175051745027304f, 0.007897899486124516f, 0.007728667929768562f, 0.008460854180157185f, 0.007420016918331385f, 0.008199156261980534f, 0.007483260706067085f, 0.009277867153286934f, 0.0030926282051950693f, 0.004330936353653669f, 0.011676253750920296f, 0.005638067610561848f, 0.011485896073281765f, 0.008616072125732899f, 0.0045416937209665775f, 0.005469669122248888f, 0.007512288633733988f, 0.008370082825422287f, 0.004686327651143074f, 0.005368468817323446f, 0.007379068061709404f, 0.005118153057992458f, 0.006528493016958237f, 0.003407055279240012f, 0.008777404204010963f, 0.0045398687943816185f, 0.009848888963460922f, 0.00538931367918849f, 0.004274188540875912f, 0.005038875620812178f, 0.007703717332333326f, 0.011121485382318497f, 0.004659231286495924f, 0.00929240882396698f, 0.004936220124363899f, 0.008853546343743801f, 0.006455398630350828f, 0.00426711980253458f, 0.009625714272260666f, 0.007224487140774727f, 0.00829037930816412f, 0.003663902636617422f, 0.010192733258008957f, 0.007595772854983807f, 0.009650539606809616f, 0.008349409326910973f, 0.005774929653853178f, 0.0038308005314320326f, 0.004608741030097008f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010644171852618456f, 0.0010487569961696863f, 0.0010562632232904434f, 0.002112025860697031f, 0.001718425191938877f, 0.0014437558129429817f, 0.0014623327879235148f, 0.001100845285691321f, 0.001475047436542809f, 0.0013682730495929718f, 0.000994337722659111f, 0.0014277802547439933f, 0.0017874714685603976f, 0.002465397585183382f, 0.0012943395413458347f, 0.0014308508252725005f, 0.002182726049795747f, 0.0011910228058695793f, 0.0013979485956951976f, 0.0013022009516134858f, 0.002635675249621272f, 0.001871915184892714f, 0.0018276836490258574f, 0.0011763196671381593f, 0.002150954445824027f, 0.001718907500617206f, 0.0014996749814599752f, 0.0010779002914205194f, 0.0012220642529428005f, 0.0012504528276622295f, 0.0012751935282722116f, 0.001305139739997685f, 0.0012777320807799697f, 0.001512495568022132f, 0.0018527808133512735f, 0.0010006905067712069f, 0.0015832660719752312f, 0.0012959325686097145f, 0.002009086310863495f, 0.00151623145211488f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002278442494571209f, 0.0016317585250362754f, 0.002806370612233877f, 0.0015826402232050896f, 0.002072850475087762f, 0.000988359097391367f, 0.0027897392865270376f, 0.0016439412720501423f, 0.001756133628077805f, 0.0010342267341911793f, 0.003012283006682992f, 0.0021210804115980864f, 0.0012739773374050856f, 0.00156979460734874f, 0.001988955307751894f, 0.00228098570369184f, 0.002515224739909172f, 0.0012626778334379196f, 0.002224966650828719f, 0.002341825282201171f, 0.0018907904159277678f, 0.0025007191579788923f, 0.0030987386126071215f, 0.002636631717905402f, 0.0018866840982809663f, 0.001707226736471057f, 0.0015956911956891418f, 0.002377624623477459f, 0.0010983386309817433f, 0.002029525116086006f, 0.0013283133739605546f, 0.0016127703711390495f, 0.003281162353232503f, 0.00200358172878623f, 0.0017485575517639518f, 0.001403898000717163f, 0.0019961558282375336f, 0.0019232387421652675f, 0.0018672609003260732f, 0.0023913204204291105f, 0.0017576245591044426f, 0.00296973274089396f, 0.00234769145026803f, 0.0018264846876263618f, 0.0017527276650071144f, 0.0017442865064367652f, 0.0018835954833775759f, 0.0013212143676355481f, 0.0017408219864591956f, 0.0019894703291356564f, 0.0027151484973728657f, 0.001298466231673956f, 0.0012690105941146612f, 0.0020994057413190603f, 0.0013569571310654283f, 0.0022471502888947725f, 0.0024100756272673607f, 0.0022389492951333523f, 0.0031778484117239714f, 0.0011057822266593575f, 0.001819107448682189f, 0.0009568778332322836f, 0.0030504902824759483f, 0.0014409099239856005f, 0.0028911102563142776f, 0.0019452603301033378f, 0.0018965062918141484f, 0.00166332779917866f, 0.0018122931942343712f, 0.001468995469622314f, 0.0019434373825788498f, 0.0030386275611817837f, 0.0015339348465204239f, 0.001978856511414051f, 0.0018949909135699272f, 0.001879429561085999f, 0.0018058117711916566f, 0.0016423650085926056f, 0.002169250510632992f, 0.001025696750730276f, 0.0015148044330999255f, 0.0018048663623631f, 0.0022673332132399082f, 0.001628161408007145f, 0.0016091407742351294f, 0.0026574137154966593f, 0.0023170060012489557f, 0.00222363811917603f, 0.0011655347188934684f, 0.0026792960707098246f, 0.0012145480141043663f, 0.0015556416474282742f, 0.001947346841916442f, 0.0019839659798890352f, 0.0020465778652578592f, 0.002390641253441572f, 0.00149242440238595f, 0.0032621377613395452f, 0.0016910932026803493f, 0.0016827980289235711f, 0.0025971357244998217f, 0.0018683277303352952f, 0.0012872266815975308f, 0.0010634628124535084f, 0.001998084131628275f, 0.0021397187374532223f, 0.0010552001185715199f, 0.0022889894898980856f, 0.0016478805337101221f, 0.0015012198127806187f, 0.0018685016548261046f, 0.0021373345516622066f, 0.0016370193334296346f, 0.0019402718171477318f, 0.0021262343507260084f, 0.0015194861916825175f, 0.0013532371958717704f, 0.002112896414473653f, 0.0012754090130329132f, 0.0012859267881140113f, 0.0015051753725856543f, 0.0020458444487303495f, 0.0017636705888435245f, 0.0013334059622138739f, 0.0017946340376511216f, 0.0019514706218615174f, 0.0014419722137972713f, 0.00256257108412683f, 0.0009882564190775156f, 0.0016731086652725935f, 0.0028473639395087957f, 0.0011027768487110734f, 0.0036402076948434114f, 0.0018470066133886576f, 0.0016982851084321737f, 0.00196058745495975f, 0.0015225386014208198f, 0.002502201125025749f, 0.003508671186864376f, 0.002503498224541545f, 0.0013875466538593173f, 0.0016091284342110157f, 0.0018199512269347906f, 0.0013187822187319398f, 0.002326961373910308f, 0.0019849506206810474f, 0.0020840715151280165f, 0.0014347480610013008f, 0.0015972001710906625f, 0.0020926245488226414f, 0.0022262309212237597f, 0.001276759197935462f, 0.0019446909427642822f, 0.0017104046419262886f, 0.002156232250854373f, 0.0018068724311888218f, 0.0014658074360340834f, 0.0009844836313277483f, 0.0012522280449047685f, 0.001316122361458838f, 0.0018518008291721344f, 0.0017787611577659845f, 0.0019505165982991457f, 0.0017533747013658285f, 0.0014583581360056996f, 0.0016671569319441915f, 0.0015574789140373468f, 0.002652370370924473f, 0.0024030928034335375f, 0.0017123861471191049f, 0.0013295101234689355f, 0.002376013668254018f, 0.0013716050889343023f, 0.0019641933031380177f, 0.002035542856901884f, 0.0022355010733008385f, 0.002435025293380022f, 0.0009312004549428821f, 0.002722248900681734f, 0.0024041885044425726f, 0.0017063574632629752f, 0.0016830397071316838f, 0.003209030022844672f, 0.0018196391174569726f, 0.0015174662694334984f, 0.0025835211854428053f, 0.0017481599934399128f, 0.003147294046357274f, 0.0018916840199381113f, 0.002320896601304412f, 0.001912793260999024f, 0.002438112860545516f, 0.002658202312886715f, 0.0013791999081149697f, 0.0021598548628389835f, 0.0016928616678342223f, 0.0036341764498502016f, 0.001755198580212891f, 0.0016058257315307856f, 0.0034128460101783276f, 0.0020611200015991926f, 0.0011693398701027036f, 0.0017907536821439862f, 0.002519096015021205f, 0.0021618222817778587f, 0.0015028681373223662f, 0.0018113203113898635f, 0.0025883011985570192f, 0.0026384713128209114f, 0.0013504022499546409f, 0.0019694161601364613f, 0.002269389573484659f, 0.0012822963763028383f, 0.0018584165954962373f, 0.0016824150225147605f, 0.0010554911568760872f, 0.0015580287436023355f, 0.0018245141254737973f, 0.0014545610174536705f, 0.0024459967389702797f, 0.0015345691936090589f, 0.0015419613337144256f, 0.0017799352062866092f, 0.0016820012824609876f, 0.001595601555891335f, 0.0018849914195016026f, 0.002705006394535303f, 0.0013697012327611446f, 0.001166548696346581f, 0.0021129054948687553f, 0.0024999564047902822f, 0.0020443610846996307f, 0.002396099269390106f, 0.0019253623904660344f, 0.0012601215858012438f, 0.0014400994405150414f, 0.0020867118146270514f, 0.0013250609626993537f, 0.0017175578977912664f, 0.0014630367513746023f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005780322942882776f, 0.012207777239382267f, 0.006978048011660576f, 0.005931647960096598f, 0.0057855024933815f, 0.0033001708798110485f, 0.004746164660900831f, 0.0038587311282753944f, 0.010906836949288845f, 0.005166057962924242f, 0.009227448143064976f, 0.009617239236831665f, 0.005030894186347723f, 0.0050259665586054325f, 0.004095347598195076f, 0.005329527426511049f, 0.008676699362695217f, 0.005803028587251902f, 0.0055414470843970776f, 0.008370762690901756f, 0.008044920861721039f, 0.004768440965563059f, 0.00859981868416071f, 0.008678721264004707f, 0.00548796309158206f, 0.0053663961589336395f, 0.0061895158141851425f, 0.005156149622052908f, 0.003948785364627838f, 0.007052623201161623f, 0.011083711870014668f, 0.01007066946476698f, 0.006690617185086012f, 0.006796710658818483f, 0.004886514972895384f, 0.008688712492585182f, 0.00933885108679533f, 0.007286316715180874f, 0.006280591245740652f, 0.009016387164592743f, 0.007043931633234024f, 0.010017303749918938f, 0.0052157239988446236f, 0.007030311040580273f, 0.007046262267976999f, 0.004831033293157816f, 0.006887875497341156f, 0.007740363944321871f, 0.005187000147998333f, 0.008514318615198135f, 0.0067679909989237785f, 0.010445849969983101f, 0.004376238211989403f, 0.007576372008770704f, 0.012184806168079376f, 0.005590319167822599f, 0.0062739793211221695f, 0.004772798623889685f, 0.006992523092776537f, 0.005132786463946104f, 0.010892052203416824f, 0.004699228331446648f, 0.007076019421219826f, 0.013646954670548439f, 0.006831770297139883f, 0.005252917762845755f, 0.005951967090368271f, 0.005141121335327625f, 0.005194394383579493f, 0.004348477348685265f, 0.005929399747401476f, 0.005900150630623102f, 0.0073342956602573395f, 0.005400339141488075f, 0.011342322453856468f, 0.006308203097432852f, 0.010370392352342606f, 0.0051768748089671135f, 0.004922227002680302f, 0.004926679190248251f, 0.012190599925816059f, 0.004151606932282448f, 0.009119025431573391f, 0.010861825197935104f, 0.005845871288329363f, 0.010327882133424282f, 0.006484283600002527f, 0.011470078490674496f, 0.004490115214139223f, 0.007245516404509544f, 0.003777726786211133f, 0.00756310997530818f, 0.009099907241761684f, 0.005368645768612623f, 0.00695485295727849f, 0.00544744310900569f, 0.008370212279260159f, 0.006280581932514906f, 0.00908116064965725f, 0.005987605545669794f, 0.006553674582391977f, 0.007488281931728125f, 0.010507253929972649f, 0.0045308321714401245f, 0.007875884883105755f, 0.00242890533991158f, 0.004705327097326517f, 0.0069433096796274185f, 0.01115428563207388f, 0.0061148242093622684f, 0.008580880239605904f, 0.007492560427635908f, 0.004522673785686493f, 0.006064244080334902f, 0.0058854431845247746f, 0.012029659934341908f, 0.006042942404747009f, 0.0057995556853711605f, 0.0052742548286914825f, 0.005880671087652445f, 0.00433668727055192f, 0.010199593380093575f, 0.0054810866713523865f, 0.005506901070475578f, 0.009740917012095451f, 0.007045541889965534f, 0.00469940947368741f, 0.003376016393303871f, 0.011010250076651573f, 0.006031361874192953f, 0.006543563213199377f, 0.012122560292482376f, 0.007035455200821161f, 0.013038558885455132f, 0.003748430637642741f, 0.006245322059839964f, 0.004661989863961935f, 0.005770327989012003f, 0.0068957810290157795f, 0.006665384396910667f, 0.01229568850249052f, 0.006449482869356871f, 0.010596075095236301f, 0.008258039131760597f, 0.0043552531860768795f, 0.009840812534093857f, 0.009769128635525703f, 0.004988077562302351f, 0.004908259958028793f, 0.008313998579978943f, 0.006955716758966446f, 0.005676967091858387f, 0.00548314955085516f, 0.007032465655356646f, 0.01585119403898716f, 0.0058445618487894535f, 0.009055286645889282f, 0.004908563569188118f, 0.005618310067802668f, 0.006737799849361181f, 0.005456683691591024f, 0.009052831679582596f, 0.006703621707856655f, 0.0072307223454117775f, 0.005951115395873785f, 0.009350079111754894f, 0.006395820062607527f, 0.008945372886955738f, 0.004960808902978897f, 0.006049574352800846f, 0.005444540176540613f, 0.005221690516918898f, 0.005865707993507385f, 0.004821168724447489f, 0.0053623514249920845f, 0.005102888680994511f, 0.00809568352997303f, 0.009197130799293518f, 0.01501492504030466f, 0.01352006010711193f, 0.008075919933617115f, 0.009791127406060696f, 0.006869674660265446f, 0.009298303164541721f, 0.005981323774904013f, 0.005976315122097731f, 0.006971659138798714f, 0.008627588860690594f, 0.004180150106549263f, 0.0058710891753435135f, 0.007704698946326971f, 0.005528128705918789f, 0.004093018360435963f, 0.006508232560008764f, 0.007224427070468664f, 0.007437949068844318f, 0.006504659075289965f, 0.003921303432434797f, 0.00843873992562294f, 0.008349139243364334f, 0.0054628015495836735f, 0.006006082985550165f, 0.0059107644483447075f, 0.009802963584661484f, 0.004471624735742807f, 0.006679111160337925f, 0.010204609483480453f, 0.00864547397941351f, 0.007948757149279118f, 0.006200793664902449f, 0.012949557974934578f, 0.009143603965640068f, 0.006566526833921671f, 0.009680457413196564f, 0.0052805268205702305f, 0.005596253089606762f, 0.005481477826833725f, 0.00871817022562027f, 0.005887594074010849f, 0.006765321828424931f, 0.004928293637931347f, 0.012032649479806423f, 0.004636728670448065f, 0.004225350916385651f, 0.005903980229049921f, 0.009574012830853462f, 0.004903079476207495f, 0.006848721299320459f, 0.005201689898967743f, 0.005178936757147312f, 0.00935253594070673f, 0.008991456590592861f, 0.0077338991686701775f, 0.006406569387763739f, 0.00978569034487009f, 0.005122094880789518f, 0.004163849167525768f, 0.007018056698143482f, 0.006977880839258432f, 0.005937810521572828f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009220265783369541f, 0.0005586937186308205f, 0.001279547461308539f, 0.0010335143888369203f, 0.0007378412410616875f, 0.0018900622380897403f, 0.001125516602769494f, 0.0009455161634832621f, 0.0010780016891658306f, 0.0009091072715818882f, 0.0012806749437004328f, 0.0016298472182825208f, 0.0012207308318465948f, 0.0011045577703043818f, 0.0011626392370089889f, 0.0015276261838153005f, 0.0011317714815959334f, 0.001238668686710298f, 0.001185693545266986f, 0.0014681622851639986f, 0.001492759445682168f, 0.0009516408899798989f, 0.001311185653321445f, 0.002167230239138007f, 0.0008132192888297141f, 0.0011075388174504042f, 0.0010452712886035442f, 0.0010031870333477855f, 0.0008494210196658969f, 0.0007903073565103114f, 0.0009045966435223818f, 0.0010471305577084422f, 0.0009123289491981268f, 0.0010089459829032421f, 0.0011426768032833934f, 0.0009361810516566038f, 0.000926921667996794f, 0.0007620071992278099f, 0.0012389019830152392f, 0.0013689229963347316f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016703468281775713f, 0.0013300557620823383f, 0.001081566559150815f, 0.001993332291021943f, 0.0022396035492420197f, 0.0008532915962859988f, 0.001017606700770557f, 0.0012934565311297774f, 0.0010372571414336562f, 0.0011107624741271138f, 0.0006007232586853206f, 0.001374908140860498f, 0.0021977603901177645f, 0.0008380208164453506f, 0.002011219970881939f, 0.0011336990864947438f, 0.0014779651537537575f, 0.0011337334290146828f, 0.0008671094547025859f, 0.0010957149788737297f, 0.0017035413766279817f, 0.0009336321381852031f, 0.0011181089794263244f, 0.0011733899591490626f, 0.0012671242002397776f, 0.0008381580701097846f, 0.0011492512421682477f, 0.0018662532093003392f, 0.001547028194181621f, 0.001578239374794066f, 0.0023603239096701145f, 0.0012234504101797938f, 0.0016277666436508298f, 0.001257995842024684f, 0.0008233704138547182f, 0.0010716354008764029f, 0.0011564672458916903f, 0.001278218813240528f, 0.0013020227197557688f, 0.0009493070538155735f, 0.0012432148214429617f, 0.0008580333087593317f, 0.0008741156198084354f, 0.0012385575100779533f, 0.0012711611343547702f, 0.0017227078787982464f, 0.0009960824390873313f, 0.0011656872229650617f, 0.0014487929875031114f, 0.001782194129191339f, 0.0008868472650647163f, 0.0008768239640630782f, 0.0007897115428932011f, 0.0019212679471820593f, 0.0009053161484189332f, 0.001983979716897011f, 0.0013576751807704568f, 0.0009241878287866712f, 0.0018603450153023005f, 0.0013114489847794175f, 0.0010437013115733862f, 0.0010942162480205297f, 0.0010517527116462588f, 0.001220564590767026f, 0.001275690272450447f, 0.0016920625930652022f, 0.001099180313758552f, 0.0016023007920011878f, 0.0015592132695019245f, 0.0012878365814685822f, 0.0014219630975276232f, 0.0018530121305957437f, 0.0018053922103717923f, 0.0012240249197930098f, 0.0019950505811721087f, 0.0008441147510893643f, 0.0017371524590998888f, 0.0011200873414054513f, 0.001588716171681881f, 0.0012458455748856068f, 0.0010395421413704753f, 0.0015864529414102435f, 0.0008562736329622567f, 0.0018654842860996723f, 0.0019052531570196152f, 0.0013285463210195303f, 0.0011013258481398225f, 0.0010418168967589736f, 0.002495754975825548f, 0.0013090904103592038f, 0.001914485706947744f, 0.0011175450636073947f, 0.0007681356510147452f, 0.001124859438277781f, 0.0011515337973833084f, 0.0012754625640809536f, 0.0009199329069815576f, 0.001503543695434928f, 0.001551191322505474f, 0.001415123580954969f, 0.0020200402941554785f, 0.0019469686085358262f, 0.0010966522386297584f, 0.0018138195155188441f, 0.001607696060091257f, 0.0015239405911415815f, 0.0018630273407325149f, 0.001901511917822063f, 0.001267551095224917f, 0.0016045968513935804f, 0.0008616295526735485f, 0.0006867521442472935f, 0.001325469696894288f, 0.0014496712246909738f, 0.0008379382197745144f, 0.0014948955504223704f, 0.0008874478517100215f, 0.001155368285253644f, 0.0009158776956610382f, 0.000802070542704314f, 0.001451354008167982f, 0.001409547054208815f, 0.000993848079815507f, 0.001402428257279098f, 0.0014033373445272446f, 0.002642929321154952f, 0.0016360222361981869f, 0.001661369577050209f, 0.001539684133604169f, 0.0012736236676573753f, 0.0010551721788942814f, 0.0007271918002516031f, 0.0014552859356626868f, 0.001232213107869029f, 0.0011769880075007677f, 0.0015746966237202287f, 0.001113641425035894f, 0.0012513617984950542f, 0.0010678713442757726f, 0.0010085360845550895f, 0.0012269275030121207f, 0.001576571841724217f, 0.0010599617380648851f, 0.000871822761837393f, 0.002274898812174797f, 0.0009774756617844105f, 0.0020973598584532738f, 0.0012810357147827744f, 0.0008965997840277851f, 0.001643107971176505f, 0.0008105157176032662f, 0.0009885333711281419f, 0.0014046068536117673f, 0.0015798172680661082f, 0.0012690492440015078f, 0.000844122376292944f, 0.0011274679563939571f, 0.0014323171926662326f, 0.0010393401607871056f, 0.001254317001439631f, 0.0011094510555267334f, 0.0021723974496126175f, 0.001187311252579093f, 0.0010729257483035326f, 0.001793237286619842f, 0.001604485441930592f, 0.0018086576601490378f, 0.0009397133835591376f, 0.001116741681471467f, 0.0016293316148221493f, 0.001552053727209568f, 0.0011819523060694337f, 0.001264836173504591f, 0.001231265370734036f, 0.001091708312742412f, 0.001222349819727242f, 0.001397083280608058f, 0.0012992658885195851f, 0.0014995505334809422f, 0.0013405190547928214f, 0.0008018629741854966f, 0.0013749103527516127f, 0.0010257220128551126f, 0.0010140336817130446f, 0.0010858310852199793f, 0.001782840583473444f, 0.0008687402005307376f, 0.0012960298918187618f, 0.001151129836216569f, 0.0012154022697359324f, 0.0016359511064365506f, 0.0009786300361156464f, 0.001863898360170424f, 0.0010235199006274343f, 0.0012344213901087642f, 0.0012580880429595709f, 0.001590787316672504f, 0.0010117245838046074f, 0.0012968637747690082f, 0.0010092430748045444f, 0.0014848720747977495f, 0.0012888202909380198f, 0.0010574362240731716f, 0.0014342647045850754f, 0.0015315640484914184f, 0.0009178905165754259f, 0.0018691301811486483f, 0.0011520833941176534f, 0.0011104794684797525f, 0.001697646570391953f, 0.0012155923759564757f, 0.0015840267296880484f, 0.001795259420759976f, 0.000956576899625361f, 0.00107055704575032f, 0.0010772341629490256f, 0.0013994614128023386f, 0.0010183831909671426f, 0.0011544125154614449f, 0.001014243345707655f, 0.001085825962945819f, 0.0019903022330254316f, 0.0007749342476017773f, 0.00109191017691046f, 0.0019866861402988434f, 0.001073474995791912f, 0.0013084524543955922f, 0.001599287730641663f, 0.0017884132685139775f, 0.001170590054243803f, 0.0017135131638497114f, 0.0012202627258375287f, 0.0011647924548014998f, 0.001519673503935337f, 0.0013218082021921873f, 0.0019109573913738132f, 0.0013398081064224243f, 0.0009318203083239496f, 0.0015475547406822443f, 0.0012480103177949786f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008463261649012566f, 0.004006064031273127f, 0.005879972130060196f, 0.006784450262784958f, 0.007373729255050421f, 0.00604100339114666f, 0.005433610640466213f, 0.009824417531490326f, 0.010363539680838585f, 0.002829378703609109f, 0.015084733255207539f, 0.0037304810248315334f, 0.0071942456997931f, 0.00441708043217659f, 0.005695275496691465f, 0.00656177569180727f, 0.0070524574257433414f, 0.005259859375655651f, 0.009970324113965034f, 0.003791418159380555f, 0.0038542824331671f, 0.012450276874005795f, 0.003400584915652871f, 0.0021735450718551874f, 0.0023355218581855297f, 0.004845845978707075f, 0.008649100549519062f, 0.00818562787026167f, 0.004230687394738197f, 0.007211355958133936f, 0.006678183097392321f, 0.0066600157879292965f, 0.008623272180557251f, 0.004898596554994583f, 0.005354606080800295f, 0.004052051343023777f, 0.004657120443880558f, 0.004859357140958309f, 0.005817015655338764f, 0.008481078781187534f, 0.007215703837573528f, 0.005055462475866079f, 0.006065682508051395f, 0.006888531148433685f, 0.008559361100196838f, 0.006877826061099768f, 0.0038557008374482393f, 0.006956450641155243f, 0.0050936052575707436f, 0.0043175723403692245f, 0.00487010320648551f, 0.00768907368183136f, 0.004360945429652929f, 0.010778641328215599f, 0.014629862271249294f, 0.006359195802360773f, 0.0064593711867928505f, 0.009515407495200634f, 0.008531429804861546f, 0.011763721704483032f, 0.007430189289152622f, 0.00492176553234458f, 0.007647552527487278f, 0.008587454445660114f, 0.009235828183591366f, 0.008402605541050434f, 0.004499785602092743f, 0.004678456578403711f, 0.008025706745684147f, 0.0025027066003531218f, 0.0074255322106182575f, 0.006548361852765083f, 0.007376066874712706f, 0.006878178101032972f, 0.005418423563241959f, 0.013990015722811222f, 0.005129804369062185f, 0.0047139376401901245f, 0.0077521284110844135f, 0.005628075450658798f, 0.0037038535811007023f, 0.0056501394137740135f, 0.00628353375941515f, 0.005575800314545631f, 0.0069313314743340015f, 0.0036061673890799284f, 0.0037653932813555002f, 0.005430116318166256f, 0.010313036851584911f, 0.007202977314591408f, 0.005752160679548979f, 0.006399759091436863f, 0.011302483268082142f, 0.0044157966040074825f, 0.00578033272176981f, 0.010533527471125126f, 0.009151834063231945f, 0.00595832709223032f, 0.010412800125777721f, 0.009426094591617584f, 0.00823300052434206f, 0.005055658519268036f, 0.00576674472540617f, 0.009023460559546947f, 0.006275887135416269f, 0.008091847412288189f, 0.010170510970056057f, 0.009454394690692425f, 0.006026373710483313f, 0.010070672258734703f, 0.006353028118610382f, 0.005603136494755745f, 0.006604236084967852f, 0.00691662123426795f, 0.003787962719798088f, 0.006729974877089262f, 0.006928385701030493f, 0.0075201974250376225f, 0.0033674330916255713f, 0.005906900856643915f, 0.00745119946077466f, 0.004969737492501736f, 0.006493445485830307f, 0.004498949274420738f, 0.008255473338067532f, 0.00728538166731596f, 0.006830213591456413f, 0.009507904760539532f, 0.012595712207257748f, 0.0047333515249192715f, 0.004609118681401014f, 0.0050092944875359535f, 0.00496625155210495f, 0.012321793474256992f, 0.006127473898231983f, 0.007849697023630142f, 0.011589881032705307f, 0.010381507687270641f, 0.013354758732020855f, 0.006191976368427277f, 0.0037570411805063486f, 0.005893557798117399f, 0.00544762471690774f, 0.006886980030685663f, 0.0048425886780023575f, 0.005351787433028221f, 0.004803085699677467f, 0.011010418646037579f, 0.004256989806890488f, 0.011063565500080585f, 0.013397024013102055f, 0.00329883792437613f, 0.0069829910062253475f, 0.004996121861040592f, 0.00592120923101902f, 0.006889078300446272f, 0.004512793850153685f, 0.008386553265154362f, 0.011794660240411758f, 0.0054391217418015f, 0.013167254626750946f, 0.012407747097313404f, 0.009202554821968079f, 0.004269497003406286f, 0.00771274184808135f, 0.00798474159091711f, 0.0054250783286988735f, 0.011592625640332699f, 0.004692229442298412f, 0.0070694731548428535f, 0.0073302797973155975f, 0.009414332918822765f, 0.004240337759256363f, 0.004589299205690622f, 0.005213840398937464f, 0.006014561280608177f, 0.0083529157564044f, 0.004303928464651108f, 0.008261597715318203f, 0.004486710764467716f, 0.00343973352573812f, 0.010481360368430614f, 0.011047987267374992f, 0.003420137334614992f, 0.01248666737228632f, 0.007566981948912144f, 0.0029161935672163963f, 0.006484367419034243f, 0.01363490428775549f, 0.01173755805939436f, 0.009413794614374638f, 0.00372917577624321f, 0.0078070079907774925f, 0.005141037050634623f, 0.008009113371372223f, 0.01046241819858551f, 0.006528496742248535f, 0.009176917374134064f, 0.00831978116184473f, 0.003944110590964556f, 0.010315670631825924f, 0.008524050936102867f, 0.004501852672547102f, 0.004093718249350786f, 0.004341139458119869f, 0.005991923622786999f, 0.007717152126133442f, 0.00932674016803503f, 0.004894729238003492f, 0.006108678411692381f, 0.007466516923159361f, 0.011547492817044258f, 0.0046548061072826385f, 0.011570553295314312f, 0.007617540191859007f, 0.009551340714097023f, 0.007044379599392414f, 0.0046491133980453014f, 0.004327430855482817f, 0.01258888840675354f, 0.004023347515612841f, 0.009385436773300171f, 0.010658047161996365f, 0.002406812971457839f, 0.009076237678527832f, 0.00427865469828248f, 0.009936481714248657f, 0.008157716132700443f, 0.008542370051145554f, 0.005824449472129345f, 0.00477994978427887f, 0.0035535008646547794f, 0.002587711438536644f, 0.00581559119746089f, 0.010813281871378422f, 0.008287912234663963f, 0.006772817578166723f, 0.009889629669487476f, 0.00830923579633236f, 0.0043107992969453335f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_62_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000834921607747674f, 0.001400260953232646f, 0.0012505898484960198f, 0.0009299323428422213f, 0.0008221775060519576f, 0.0011324563529342413f, 0.0006917717400938272f, 0.0006991522968746722f, 0.0014029329176992178f, 0.0014905150746926665f, 0.0009108263184316456f, 0.0011020258534699678f, 0.0009579636971466243f, 0.0008822048548609018f, 0.0006828024634160101f, 0.001387805794365704f, 0.0007024036603979766f, 0.0012560435570776463f, 0.0015960276359692216f, 0.0015597445890307426f, 0.0018206876702606678f, 0.0013208260061219335f, 0.001275352668017149f, 0.0008907386218197644f, 0.001538433600217104f, 0.0011886211577802896f, 0.001009944244287908f, 0.0006512788240797818f, 0.0007871945854276419f, 0.0010886359959840775f, 0.0006498914444819093f, 0.001259573851712048f, 0.0007977877976372838f, 0.0010303454473614693f, 0.0013986056437715888f, 0.0006401662831194699f, 0.0008472037152387202f, 0.001165009569376707f, 0.0012745653511956334f, 0.0006483006873168051f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0011262474581599236f, 0.0010843160562217236f, 0.0007837287266738713f, 0.0010136475320905447f, 0.000843288260512054f, 0.0012788884341716766f, 0.000827833719085902f, 0.0009122026967816055f, 0.0007921108044683933f, 0.0008116333629004657f, 0.0010967280250042677f, 0.0008136850665323436f, 0.0008895870996639132f, 0.0010748289059847593f, 0.0006862246664240956f, 0.00081412005238235f, 0.000790211430285126f, 0.0014256933936849236f, 0.0008633799152448773f, 0.0011946854647248983f, 0.0011468003503978252f, 0.0010888311080634594f, 0.0012429545167833567f, 0.0011706191580742598f, 0.0011574983363971114f, 0.000733288296032697f, 0.0010272604413330555f, 0.0010218083625659347f, 0.0006118151359260082f, 0.000714489899110049f, 0.001000021817162633f, 0.0007446433301083744f, 0.0010102975647896528f, 0.0008450325694866478f, 0.0008159907883964479f, 0.0009039696305990219f, 0.0015145830111578107f, 0.001176741672679782f, 0.0011997021501883864f, 0.001270294887945056f, 0.0007353976834565401f, 0.0009278329089283943f, 0.0009199538035318255f, 0.0007217813399620354f, 0.0006601994973607361f, 0.0012359333923086524f, 0.0006822352879680693f, 0.0010100879007950425f, 0.0006689819856546819f, 0.0009596504387445748f, 0.0006483087199740112f, 0.001167335663922131f, 0.0010671743657439947f, 0.0009438877459615469f, 0.0007785393972881138f, 0.0009430067148059607f, 0.0010371968382969499f, 0.00108704948797822f, 0.0008668351219967008f, 0.000682789774145931f, 0.0005273527349345386f, 0.0007368304650299251f, 0.0006747565930709243f, 0.0009908780921250582f, 0.0010671812342479825f, 0.0011254773708060384f, 0.0011243234621360898f, 0.0009457864216528833f, 0.0006405986496247351f, 0.0011355173774063587f, 0.001459135441109538f, 0.0008681017789058387f, 0.0010205419966951013f, 0.0004919281927868724f, 0.0007251485949382186f, 0.0006924735498614609f, 0.0009137222659774125f, 0.0010778119321912527f, 0.0008059224346652627f, 0.0009263803949579597f, 0.0010887865209951997f, 0.00090491131413728f, 0.000934631796553731f, 0.0009987028315663338f, 0.0013788873329758644f, 0.0005375491455197334f, 0.0008686566143296659f, 0.0006585497176274657f, 0.0008502944838255644f, 0.001332486397586763f, 0.0006534619024023414f, 0.0006054203840903938f, 0.0012154815485700965f, 0.0010680858977138996f, 0.001596944872289896f, 0.0011263336054980755f, 0.0014612977392971516f, 0.0008197217248380184f, 0.0006737552466802299f, 0.0009405761957168579f, 0.0008438684744760394f, 0.000955934461671859f, 0.0010842983610928059f, 0.0010583027033135295f, 0.000861173088196665f, 0.0007896076422184706f, 0.0009177718311548233f, 0.001091411104425788f, 0.0012141645420342684f, 0.0005564394523389637f, 0.0010811754036694765f, 0.000841223169118166f, 0.000702731020282954f, 0.0008134213276207447f, 0.0009443573071621358f, 0.0008631001692265272f, 0.0009765797294676304f, 0.0006354269571602345f, 0.0008095544180832803f, 0.0011716164881363511f, 0.000615503522567451f, 0.0014045662246644497f, 0.0009345068247057498f, 0.0006764286663383245f, 0.0010121003724634647f, 0.0005723782815039158f, 0.0009083489421755075f, 0.0009169216500595212f, 0.0008694034186191857f, 0.0009061533492058516f, 0.0005176247796043754f, 0.000804545299615711f, 0.0008278810419142246f, 0.0009497014107182622f, 0.0018960104789584875f, 0.0011860920349135995f, 0.0007631007465533912f, 0.0010189691092818975f, 0.0007090568542480469f, 0.0011447995202615857f, 0.0008078175014816225f, 0.000708828098140657f, 0.0012602469651028514f, 0.0011587057961151004f, 0.0013668170431628823f, 0.0007816304569132626f, 0.0010188375599682331f, 0.0007570480811409652f, 0.0008313333382830024f, 0.0006920178420841694f, 0.0007810357492417097f, 0.000832339224871248f, 0.0009284722618758678f, 0.0014013347681611776f, 0.0011555504752323031f, 0.000759634654968977f, 0.0009296305361203849f, 0.0010966190602630377f, 0.0006736252107657492f, 0.0014493708731606603f, 0.0009879381395876408f, 0.0007883241050876677f, 0.0012246201513335109f, 0.0010520617943257093f, 0.000636434881016612f, 0.0008995471289381385f, 0.0007915604510344565f, 0.0010714441305026412f, 0.0008563531446270645f, 0.0009542969637550414f, 0.0008517600363120437f, 0.0010349011281505227f, 0.0007330449880100787f, 0.0009383712313137949f, 0.0009527578367851675f, 0.000884764245711267f, 0.0009109251550398767f, 0.0009239084902219474f, 0.0009001631406135857f, 0.0012631125282496214f, 0.0010602265829220414f, 0.0010404594941064715f, 0.0009188798721879721f, 0.0006288589211180806f, 0.0013202467234805226f, 0.0007831304683350027f, 0.0009809172479435802f, 0.0008106128661893308f, 0.0008937930106185377f, 0.0007459550979547203f, 0.000662558595649898f, 0.0007355287671089172f, 0.0009163334034383297f, 0.0009816234232857823f, 0.0016650465549901128f, 0.0011525008594617248f, 0.0009663656819611788f, 0.0009372252388857305f, 0.000792045786511153f, 0.0009015724062919617f, 0.0009464197792112827f, 0.0005513135110959411f, 0.0006604981608688831f, 0.0016146943671628833f, 0.001326243276707828f, 0.0010683205910027027f, 0.0013463785871863365f, 0.001141760847531259f, 0.0013173865154385567f, 0.0008813175954855978f, 0.0010827304795384407f, 0.0012551085092127323f, 0.0009819234255701303f, 0.0013572255847975612f, 0.0014079550746828318f, 0.0009594453731551766f, 0.0005093096988275647f, 0.0010583193507045507f, 0.0010728802299126983f, 0.0011753130238503218f, 0.0006624970119446516f, 0.0008062931592576206f, 0.0006249248399399221f, 0.0008759952033869922f, 0.0006211745785549283f, 0.0008461439283564687f, 0.0009345057769678533f, 0.0012187876272946596f, 0.0007939946372061968f, 0.0009464948670938611f, 0.00152127246838063f, 0.0012598945759236813f, 0.0008841089438647032f, 0.0009203235968016088f, 0.000946191546972841f, 0.0008100123959593475f, 0.0008100197301246226f, 0.0010399316670373082f, 0.0009454410173930228f, 0.0012319216039031744f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00631683086976409f, 0.008839860558509827f, 0.008704055100679398f, 0.010483517311513424f, 0.007877158932387829f, 0.006471692584455013f, 0.007004173472523689f, 0.011371096596121788f, 0.011282113380730152f, 0.005092506762593985f, 0.004808759782463312f, 0.006378039252012968f, 0.004876718390733004f, 0.006296453066170216f, 0.011388295330107212f, 0.007363569922745228f, 0.003997176419943571f, 0.007817335426807404f, 0.0064697712659835815f, 0.00707942433655262f, 0.005820265505462885f, 0.007212525233626366f, 0.006155206356197596f, 0.0040231989696621895f, 0.01018480584025383f, 0.010588612407445908f, 0.004725640174001455f, 0.010842607356607914f, 0.008313406258821487f, 0.00816679559648037f, 0.005013859365135431f, 0.007860487326979637f, 0.008416255004703999f, 0.01021988783031702f, 0.006119497586041689f, 0.005336089991033077f, 0.01004122570157051f, 0.008520093746483326f, 0.008284201845526695f, 0.0060016196221113205f, 0.006426902487874031f, 0.006433872971683741f, 0.007647628430277109f, 0.004514055792242289f, 0.009933644905686378f, 0.003122414229437709f, 0.004662865772843361f, 0.003376818262040615f, 0.003877391340211034f, 0.007757039740681648f, 0.007307370193302631f, 0.005407216493040323f, 0.008064950816333294f, 0.008464626967906952f, 0.007807960733771324f, 0.010293095372617245f, 0.004740351345390081f, 0.004593676421791315f, 0.005275890231132507f, 0.0059384251944720745f, 0.00710988650098443f, 0.005925640929490328f, 0.006470808759331703f, 0.004243327770382166f, 0.004844163544476032f, 0.007816308178007603f, 0.005256799049675465f, 0.005789413582533598f, 0.006027558818459511f, 0.005685577169060707f, 0.005257302895188332f, 0.005752079654484987f, 0.009119437076151371f, 0.0060668527148664f, 0.0035840682685375214f, 0.0036787260323762894f, 0.006313863676041365f, 0.009415451437234879f, 0.007569362409412861f, 0.004188775084912777f, 0.004569029901176691f, 0.004417151678353548f, 0.007613117806613445f, 0.004813836421817541f, 0.00508865574374795f, 0.004927595146000385f, 0.009906461462378502f, 0.007151675410568714f, 0.0057387747801840305f, 0.0062983534298837185f, 0.007892148569226265f, 0.005139800254255533f, 0.007748926989734173f, 0.006643285974860191f, 0.008797881193459034f, 0.0073373508639633656f, 0.006667060311883688f, 0.010370987467467785f, 0.006228217855095863f, 0.007468513213098049f, 0.00532125448808074f, 0.006271179765462875f, 0.005665420088917017f, 0.006153685972094536f, 0.006717375945299864f, 0.008782022632658482f, 0.0057648830115795135f, 0.005910273175686598f, 0.005761359818279743f, 0.007173630874603987f, 0.007054540328681469f, 0.01199650764465332f, 0.0074087041430175304f, 0.013612121343612671f, 0.006205918733030558f, 0.004851021803915501f, 0.0056565930135548115f, 0.008780119940638542f, 0.003639728296548128f, 0.008382337167859077f, 0.0073409671895205975f, 0.007353829685598612f, 0.006459334399551153f, 0.005656376946717501f, 0.005806691013276577f, 0.00370621494948864f, 0.007378831040114164f, 0.006632239557802677f, 0.0063806697726249695f, 0.004338987171649933f, 0.00684352545067668f, 0.007707989774644375f, 0.004980446305125952f, 0.004851923789829016f, 0.010481397621333599f, 0.005922848358750343f, 0.005565996747463942f, 0.0050295693799853325f, 0.005066622514277697f, 0.005577475763857365f, 0.005951236002147198f, 0.00586709612980485f, 0.004974048584699631f, 0.00701271602883935f, 0.008404997177422047f, 0.007269698660820723f, 0.009035598486661911f, 0.007591661531478167f, 0.0042978436686098576f, 0.007281773258000612f, 0.007322702556848526f, 0.006859032437205315f, 0.008417514152824879f, 0.0075187464244663715f, 0.0070619420148432255f, 0.006703593768179417f, 0.0068210456520318985f, 0.005599538329988718f, 0.006116393953561783f, 0.006391824688762426f, 0.011387060396373272f, 0.0064317467622458935f, 0.0053060478530824184f, 0.009517304599285126f, 0.0032426873221993446f, 0.010244276374578476f, 0.006079563405364752f, 0.005250958725810051f, 0.0054674758575856686f, 0.005390387028455734f, 0.0053849248215556145f, 0.01076760794967413f, 0.0034352699294686317f, 0.007436544634401798f, 0.008678504265844822f, 0.00455320393666625f, 0.006556455511599779f, 0.005701893474906683f, 0.005980342160910368f, 0.00690497737377882f, 0.004508710466325283f, 0.007425655145198107f, 0.003692559665068984f, 0.005283931735903025f, 0.005332038272172213f, 0.0049089426174759865f, 0.006565932184457779f, 0.0071792686358094215f, 0.00581806804984808f, 0.010493923909962177f, 0.011455133557319641f, 0.005194933619350195f, 0.0047124410048127174f, 0.004779259208589792f, 0.004176070913672447f, 0.0048835850320756435f, 0.006537153851240873f, 0.006692253518849611f, 0.006915031932294369f, 0.008035684935748577f, 0.006532418541610241f, 0.008090237155556679f, 0.008493099361658096f, 0.004176620859652758f, 0.012105447240173817f, 0.004295936785638332f, 0.005821010563522577f, 0.007702074944972992f, 0.006565792020410299f, 0.006065724417567253f, 0.009111876599490643f, 0.004956433083862066f, 0.008757777512073517f, 0.005363364238291979f, 0.005402395501732826f, 0.004841594025492668f, 0.005719335284084082f, 0.009742810390889645f, 0.008312229067087173f, 0.007830590009689331f, 0.011419104412198067f, 0.008277961052954197f, 0.010652530938386917f, 0.005126785486936569f, 0.009437352418899536f, 0.006587854120880365f, 0.00405622273683548f, 0.0083107715472579f, 0.007863539271056652f, 0.006438606418669224f, 0.0053896051831543446f, 0.007591480389237404f, 0.002838708460330963f, 0.007152058184146881f, 0.005263258703052998f, 0.004666323307901621f, 0.00793852936476469f, 0.009525307454168797f, 0.006572661455720663f, 0.005510308779776096f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 80,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007897204486653209f, 0.0008554879459552467f, 0.0006289032753556967f, 0.0007619273965246975f, 0.00096585025312379f, 0.0015449303900822997f, 0.001137808314524591f, 0.0008807193371467292f, 0.0010007570963352919f, 0.0011404259130358696f, 0.0006328056333586574f, 0.000945750274695456f, 0.0006439221324399114f, 0.0007771338569000363f, 0.001224585808813572f, 0.0008053839555941522f, 0.0006841575959697366f, 0.0008805799880065024f, 0.0009686934063211083f, 0.0009875533869490027f, 0.0006355568184517324f, 0.0009711835300549865f, 0.0006793965585529804f, 0.0012448449851945043f, 0.0006020878790877759f, 0.0007742907619103789f, 0.0008632914978079498f, 0.001424364629201591f, 0.0006418508710339665f, 0.0008068378665484488f, 0.0008354693418368697f, 0.0008561352151446044f, 0.0008982716826722026f, 0.0008186696795746684f, 0.0013085318496450782f, 0.0010219415416941047f, 0.00074459717143327f, 0.001056159264408052f, 0.001053459825925529f, 0.0010889261029660702f, 0.0010345102054998279f, 0.000752223888412118f, 0.0007083896780386567f, 0.0008180856821127236f, 0.0007295100949704647f, 0.0011116365203633904f, 0.0012485662009567022f, 0.001365029369480908f, 0.0016257524257525802f, 0.0012215765891596675f, 0.0007919901399873197f, 0.0007363117183558643f, 0.001014813082292676f, 0.0010453663999214768f, 0.0006133093265816569f, 0.0006208418635651469f, 0.0008576158434152603f, 0.0018957328284159303f, 0.0008071388583630323f, 0.001017638947814703f, 0.0008083644788712263f, 0.0009005275787785649f, 0.0009829213377088308f, 0.000926840293686837f, 0.0006907355273142457f, 0.0005479023093357682f, 0.000654694449622184f, 0.0006953139090910554f, 0.0013191550970077515f, 0.0011062525445595384f, 0.0009663692326284945f, 0.0018862624419853091f, 0.0010804508347064257f, 0.0007698179688304663f, 0.00116432283539325f, 0.0009579656179994345f, 0.000689433014485985f, 0.0008241318282671273f, 0.0008073028293438256f, 0.0007235335069708526f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006684009567834437f, 0.00047018902841955423f, 0.0006416401010937989f, 0.0006500495946966112f, 0.0006456227274611592f, 0.0005815686890855432f, 0.0008201413438655436f, 0.0006195773603394628f, 0.0007459617336280644f, 0.0006438823766075075f, 0.0006481230375356972f, 0.0010295017855241895f, 0.0007592711481265724f, 0.0008548359619453549f, 0.0007601156830787659f, 0.001197637990117073f, 0.00047713759704492986f, 0.000634887139312923f, 0.0009129345999099314f, 0.0006515694549307227f, 0.0003839924174826592f, 0.0006571586127392948f, 0.0007141255773603916f, 0.0013607044238597155f, 0.0007913217414170504f, 0.0007800461025908589f, 0.0005791480070911348f, 0.001409113290719688f, 0.0006761183030903339f, 0.000524893868714571f, 0.0007092615705914795f, 0.0014192559756338596f, 0.0005198500584810972f, 0.000568331335671246f, 0.0006412856746464968f, 0.0006817085668444633f, 0.0011659258743748069f, 0.0005991238867864013f, 0.0013544631656259298f, 0.0007202533888630569f, 0.0007789808441884816f, 0.001490131369791925f, 0.0005020101089030504f, 0.000674285925924778f, 0.0007077579502947628f, 0.0017838457133620977f, 0.0005716101150028408f, 0.0009468059870414436f, 0.0009984364733099937f, 0.0007694532396271825f, 0.0018684034002944827f, 0.0007911627180874348f, 0.000624431821051985f, 0.0007232922944240272f, 0.0009212247678078711f, 0.0006989156827330589f, 0.0006103237392380834f, 0.0006556653534062207f, 0.0007515304023399949f, 0.0007503629312850535f, 0.0004947862471453846f, 0.0010524204699322581f, 0.00067397381644696f, 0.0006268915021792054f, 0.0005043732235208154f, 0.0006343141430988908f, 0.0006691165617667139f, 0.0005242451443336904f, 0.0007902998477220535f, 0.0005774159799329937f, 0.0011232397519052029f, 0.0005302181816659868f, 0.0007993555627763271f, 0.0010782919125631452f, 0.0006440188153646886f, 0.0006599201587960124f, 0.0005401399685069919f, 0.0009242214146070182f, 0.0005824613035656512f, 0.0007010640110820532f, 0.0006711771711707115f, 0.0005590040818788111f, 0.0009211554424837232f, 0.0006670698639936745f, 0.0006522611947730184f, 0.000914847943931818f, 0.0006608219118788838f, 0.0006143650389276445f, 0.0007611855398863554f, 0.0006117282900959253f, 0.0005545988096855581f, 0.0005656375433318317f, 0.000689904612954706f, 0.0006698622019030154f, 0.0005208553047850728f, 0.0007782609900459647f, 0.0006668006535619497f, 0.0007343346369452775f, 0.0010939743369817734f, 0.0011556558310985565f, 0.000733218330424279f, 0.0005424253758974373f, 0.0007781846215948462f, 0.0010608761804178357f, 0.0009174288134090602f, 0.0006727204308845103f, 0.0007282556616701186f, 0.000621043611317873f, 0.0011596201220527291f, 0.0007381855393759906f, 0.0006513373809866607f, 0.000609292124863714f, 0.0005928518366999924f, 0.0007221889100037515f, 0.0006764360587112606f, 0.0006524427444674075f, 0.0006221191142685711f, 0.0006363255670294166f, 0.0006183326477184892f, 0.0005171849625185132f, 0.0006187703111208975f, 0.0007643050630576909f, 0.0005393429892137647f, 0.0010791901731863618f, 0.00096194475190714f, 0.0008117933757603168f, 0.0005954826483502984f, 0.0013485627714544535f, 0.0009306885185651481f, 0.0005837164935655892f, 0.0006484095938503742f, 0.00046188480337150395f, 0.0006515702116303146f, 0.0005597386043518782f, 0.0013195396168157458f, 0.0006690862355753779f, 0.0006182008073665202f, 0.0006459844880737364f, 0.000820972491055727f, 0.0006634760065935552f, 0.000617968151345849f, 0.000634174095466733f, 0.0006285484414547682f, 0.0008040766115300357f, 0.0008301863563247025f, 0.0006252830498851836f, 0.0005257157608866692f, 0.0007727495394647121f, 0.0005253737326711416f, 0.0016121568623930216f, 0.0005524329608306289f, 0.0007222639978863299f, 0.0010504629462957382f, 0.0005902615375816822f, 0.0007266512839123607f, 0.0006728637963533401f, 0.0005156431579962373f, 0.0008665858767926693f, 0.0005276396404951811f, 0.0008488017483614385f, 0.0009166718809865415f, 0.000774818123318255f, 0.0007557159406132996f, 0.0007928393897600472f, 0.0006465644692070782f, 0.0008520523551851511f, 0.0006590632838197052f, 0.0006471513770520687f, 0.000992065411992371f, 0.0006458528223447502f, 0.0009485168848186731f, 0.0005853315815329552f, 0.0006361210253089666f, 0.0005990247591398656f, 0.0011049939785152674f, 0.0005034304340369999f, 0.0005021963152103126f, 0.0009925320046022534f, 0.0006274598999880254f, 0.001055097091011703f, 0.0008864081464707851f, 0.0009536139550618827f, 0.0007790063391439617f, 0.0006819024565629661f, 0.0009956166613847017f, 0.0006037849234417081f, 0.0006766971200704575f, 0.0008161395089700818f, 0.0014178024139255285f, 0.0007906138780526817f, 0.0008189649670384824f, 0.0009127109660767019f, 0.0005019593518227339f, 0.0005158239509910345f, 0.0009836191311478615f, 0.000568217656109482f, 0.0005823519895784557f, 0.0009482859750278294f, 0.0006971682305447757f, 0.0016056748572736979f, 0.001247584936209023f, 0.0008369158604182303f, 0.0006394052179530263f, 0.0005670120008289814f, 0.0007683124276809394f, 0.0006768159801140428f, 0.0008126430329866707f, 0.0006655649049207568f, 0.0007711524376645684f, 0.0005738731124438345f, 0.0006844527670182288f, 0.0009114219574257731f, 0.0008934219367802143f, 0.0006990792462602258f, 0.0007405989454127848f, 0.000999047071672976f, 0.0006353616481646895f, 0.0007280209101736546f, 0.0007529809372499585f, 0.0006098859594203532f, 0.0006534854765050113f, 0.0006646689143963158f, 0.0006239232025109231f, 0.0006399757112376392f, 0.0006303212139755487f, 0.0009027129854075611f, 0.0007019159384071827f, 0.0006681158556602895f, 0.0008720508776605129f, 0.00047741126036271453f, 0.000748121237847954f, 0.000665112747810781f, 0.0006613410660065711f, 0.0014772368595004082f, 0.0007604131242260337f, 0.0006914003752171993f, 0.0011489135213196278f, 0.0005408768192864954f, 0.0005029156454838812f, 0.0007585289422422647f, 0.000632577866781503f, 0.001273514935746789f, 0.0006454525864683092f, 0.0005837891367264092f, 0.0011874156771227717f, 0.00045132837840355933f, 0.0007714335224591196f, 0.0005092913052067161f, 0.000515180523507297f, 0.0006700588273815811f, 0.0005560492281801999f, 0.0006857692496851087f, 0.0019411419052630663f, 0.000860606727655977f, 0.0005543818115256727f, 0.0010998138459399343f, 0.0009588662651367486f, 0.0007810944225639105f, 0.0006781334523111582f, 0.0005820725345984101f, 0.0006755345966666937f, 0.0005278008757159114f, 0.000621059734839946f, 0.00044564614654518664f, 0.0006873400998301804f, 0.0014701079344376922f, 0.0005396702908910811f, 0.0006228448473848403f, 0.0009966955985873938f, 0.0005288550746627152f, 0.0010732236551120877f, 0.0008676788420416415f, 0.0006707260617986321f, 0.0006152826827019453f, 0.0006816621753387153f, 0.0009288769215345383f, 0.0007934130262583494f, 0.0006236609187908471f, 0.0006296162027865648f, 0.0005103785661049187f, 0.0006396722747012973f, 0.0007152018952183425f, 0.0005151082878001034f, 0.0007962813833728433f, 0.0006660834769718349f, 0.0007147789001464844f, 0.0009978794259950519f, 0.0006632695440202951f, 0.0007958380738273263f, 0.0006337413215078413f, 0.0008462353725917637f, 0.0011122431606054306f, 0.0006125064683146775f, 0.0005425844574347138f, 0.0005119779380038381f, 0.0005837499047629535f, 0.0005509033799171448f, 0.0006341559928841889f, 0.0010371562093496323f, 0.0006482659955509007f, 0.0006738993688486516f, 0.0005781367653980851f, 0.0008392904419451952f, 0.0005773833836428821f, 0.0005252008559182286f, 0.0006037863786332309f, 0.000762098585255444f, 0.0007367089856415987f, 0.0005453837802633643f, 0.000625699816737324f, 0.0007431121193803847f, 0.0007457057945430279f, 0.0008462868281640112f, 0.0007344518671743572f, 0.001380312955006957f, 0.00048020805115811527f, 0.000747305282857269f, 0.0006471882807090878f, 0.0013335997937247157f, 0.0006454975809901953f, 0.0005644006305374205f, 0.0007044700323604047f, 0.000673633418045938f, 0.0010106898844242096f, 0.000882449618075043f, 0.00078923674300313f, 0.000843482615891844f, 0.0008038803935050964f, 0.0008583301678299904f, 0.0007280176505446434f, 0.0007591881440021098f, 0.0009668319253250957f, 0.0008856756030581892f, 0.0007596686482429504f, 0.00045531673822551966f, 0.0005952428909949958f, 0.0006342532578855753f, 0.0005831132875755429f, 0.0007955123437568545f, 0.0007131877937354147f, 0.0006469392101280391f, 0.0007851416012272239f, 0.0008122030412778258f, 0.000586529029533267f, 0.0006582115893252194f, 0.001055323169566691f, 0.0006811077473685145f, 0.0008850236190482974f, 0.000689872947987169f, 0.0006491277599707246f, 0.0005253531853668392f, 0.0010943127563223243f, 0.0006451585795730352f, 0.0008483993005938828f, 0.001333975000306964f, 0.0008024026174098253f, 0.0006197892362251878f, 0.0005733603611588478f, 0.0006502086180262268f, 0.0005675124120898545f, 0.0005985510651953518f, 0.0004335525445640087f, 0.0007798775914125144f, 0.0005660634487867355f, 0.0011270648101344705f, 0.0006267245044000447f, 0.0006897417479194701f, 0.0009513328550383449f, 0.0006676054908894002f, 0.0006821670103818178f, 0.0009488668874837458f, 0.0010489982087165117f, 0.0008060941472649574f, 0.0006018520216457546f, 0.0006434787064790726f, 0.000620838429313153f, 0.0006429528002627194f, 0.0005871981265954673f, 0.0007237985264509916f, 0.0006850780337117612f, 0.0011637060670182109f, 0.0008121425635181367f, 0.000487800978589803f, 0.0005290558328852057f, 0.0010209725005552173f, 0.0009741492103785276f, 0.0005413761828094721f, 0.0005531837814487517f, 0.0008658671285957098f, 0.0008835850167088211f, 0.0014099832624197006f, 0.0005254595307633281f, 0.001565819140523672f, 0.001234747003763914f, 0.000582671316806227f, 0.0007575919735245407f, 0.0006034101825207472f, 0.0005894126370549202f, 0.0010575460037216544f, 0.0009376715170219541f, 0.001350025529973209f, 0.0009591088746674359f, 0.001079476554878056f, 0.0007503100205212831f, 0.0005336064496077597f, 0.0008482875418849289f, 0.0008794505847617984f, 0.0007122868555597961f, 0.0005805568071082234f, 0.001044994918629527f, 0.0007944633834995329f, 0.0009724445408210158f, 0.000776002649217844f, 0.0010829510865733027f, 0.0010266429744660854f, 0.0005287603125907481f, 0.0007400845061056316f, 0.000507644668687135f, 0.00047187457676045597f, 0.0009874949464574456f, 0.00102406891528517f, 0.0005338496412150562f, 0.0007062047370709479f, 0.0010343377944082022f, 0.0006552260601893067f, 0.0007573527982458472f, 0.0008807209669612348f, 0.0012840592535212636f, 0.0006371805211529136f, 0.0011841763043776155f, 0.00044931957381777465f, 0.0006802299758419394f, 0.0007467916002497077f, 0.0010456560412421823f, 0.0011588798370212317f, 0.0007271645590662956f, 0.0010410663671791553f, 0.0008020909153856337f, 0.0006171899731270969f, 0.0006612747674807906f, 0.0007632055203430355f, 0.0007590033928863704f, 0.0010857470333576202f, 0.0005134653765708208f, 0.00046286016004160047f, 0.0006366233574226499f, 0.0005691760452464223f, 0.0007835986325517297f, 0.0006082470063120127f, 0.000853382283821702f, 0.0007497300393879414f, 0.000619872473180294f, 0.0016140362713485956f, 0.0009817741811275482f, 0.0007486212998628616f, 0.0006474428810179234f, 0.0006530708051286638f, 0.0010133604519069195f, 0.0009670326253399253f, 0.00042686203960329294f, 0.0007801542524248362f, 0.0006485801422968507f, 0.0005455620121210814f, 0.0005720469634979963f, 0.0008849906153045595f, 0.000719430681783706f, 0.0006309696473181248f, 0.000547824427485466f, 0.0005686203367076814f, 0.000579534622374922f, 0.0009222088847309351f, 0.000982872094027698f, 0.0005944541189819574f, 0.0010705324821174145f, 0.0010521422373130918f, 0.0008156135445460677f, 0.0004972097813151777f, 0.0007345624035224319f, 0.0011617899872362614f, 0.0007447358802892268f, 0.0009949369123205543f, 0.0006706645945087075f, 0.0007841705228202045f, 0.0007123584509827197f, 0.0006924652843736112f, 0.0006036515696905553f, 0.0005817797500640154f, 0.0005335841560736299f, 0.0007611792534589767f, 0.0013677269453182817f, 0.0007663519936613739f, 0.0005117241526022553f, 0.0009174991864711046f, 0.0006011801888234913f, 0.0006274477345868945f, 0.00046901858877390623f, 0.0004658882680814713f, 0.0008602456655353308f, 0.0006292824982665479f, 0.0008283401839435101f, 0.0008281534537672997f, 0.0005717958556488156f, 0.00148970284499228f, 0.0006332691409625113f, 0.0007465796079486609f, 0.0007634427747689188f, 0.0005129450000822544f, 0.0007073970627970994f, 0.0005697552114725113f, 0.000636196113191545f, 0.000656845688354224f, 0.0005474743084050715f, 0.0007112078601494431f, 0.0009622738580219448f, 0.0008386505069211125f, 0.000772422063164413f, 0.0008009168086573482f, 0.0007738920394331217f, 0.0005573501694016159f, 0.0012768326560035348f, 0.0008476530783809721f, 0.0012279957300052047f, 0.0006428092019632459f, 0.0006003358284942806f, 0.0006527571240440011f, 0.0010374782141298056f, 0.0009192668949253857f, 0.0006076384452171624f, 0.0005745753878727555f, 0.00041843613144010305f, 0.0006686248816549778f, 0.0011692539555951953f, 0.0014659512089565396f, 0.0005203492473810911f, 0.0007420892943628132f, 0.0006303127156570554f, 0.0013301161816343665f, 0.0007207359303720295f, 0.001080018118955195f, 0.0007233510259538889f, 0.001259552431292832f, 0.0007243086583912373f, 0.0006334927747957408f, 0.0007859508041292429f, 0.001312606385909021f, 0.0008082406129688025f, 0.0006600717315450311f, 0.0005837916978634894f, 0.0005987565382383764f, 0.0005103697185404599f, 0.0005223733023740351f, 0.0004988086293451488f, 0.0006784714059904218f, 0.0011392695596441627f, 0.0004477249167393893f, 0.0005796040059067309f, 0.0014546446036547422f, 0.0007330214721150696f, 0.0006628416012972593f, 0.0009846292668953538f, 0.0006300433888100088f, 0.0009350593900308013f, 0.0005843825056217611f, 0.0006973095587454736f, 0.0003804411389864981f, 0.0006397284450940788f, 0.0005718500469811261f, 0.0006545654614455998f, 0.001548228319734335f, 0.0012669225689023733f, 0.0009595276787877083f, 0.0009984178468585014f, 0.0010508205741643906f, 0.0006634226883761585f, 0.0007421451737172902f, 0.0007693512015976012f, 0.0005405168049037457f, 0.0007961096707731485f, 0.0005865048733539879f, 0.0006423734012059867f, 0.0005012754700146616f, 0.0005822251550853252f, 0.0006345539004541934f, 0.0006577649619430304f, 0.0005539362318813801f, 0.001106356387026608f, 0.000744340883102268f, 0.0007583235274069011f, 0.0005151039222255349f, 0.0012678668135777116f, 0.0006186626269482076f, 0.0007472203578799963f, 0.0007968294085003436f, 0.0009502527536824346f, 0.0007186059956438839f, 0.0006903199246153235f, 0.0007438267930410802f, 0.0008295460138469934f, 0.0012231962755322456f, 0.000669542932882905f, 0.0009451217483729124f, 0.0012124155182391405f, 0.0005903515266254544f, 0.0012586161028593779f, 0.000597768637817353f, 0.0007882104837335646f, 0.0008220815216191113f, 0.0005066877347417176f, 0.0006984833162277937f, 0.0006812804494984448f, 0.0005256651784293354f, 0.0007970907026901841f, 0.0006548998644575477f, 0.0005680743488483131f, 0.0008101745625026524f, 0.0008169969078153372f, 0.0008403656538575888f, 0.0010301691945642233f, 0.0006872474332340062f, 0.0008142501465044916f, 0.001291051972657442f, 0.000819728767964989f, 0.0007361783063970506f, 0.0006082988693378866f, 0.0007688397890888155f, 0.0005992984515614808f, 0.0013792857062071562f, 0.0005535425734706223f, 0.0005582133308053017f, 0.0005570725770667195f, 0.0008139082929119468f, 0.0006529191159643233f, 0.0005545050371438265f, 0.0005970498896203935f, 0.000519199762493372f, 0.0006738241645507514f, 0.0009093626867979765f, 0.0005895057111047208f, 0.0009104105411097407f, 0.0007979851216077805f, 0.0005915070069022477f, 0.000725770543795079f, 0.000940337311476469f, 0.0007998172659426928f, 0.000619579921476543f, 0.000932411290705204f, 0.0008758054464124143f, 0.000893266056664288f, 0.0005836802301928401f, 0.000988487619906664f, 0.000783034018240869f, 0.0006414618110284209f, 0.0006272119353525341f, 0.0005575219402089715f, 0.00055880710715428f, 0.0006368092144839466f, 0.000722710567060858f, 0.0006134957657195628f, 0.0007458643522113562f, 0.0007149429293349385f, 0.0006379251717589796f, 0.0007142242393456399f, 0.0010375861311331391f, 0.0007006631349213421f, 0.0006703039980493486f, 0.0007982582319527864f, 0.0007270112982951105f, 0.0006270062294788659f, 0.0008304572547785938f, 0.0011263517662882805f, 0.0011090163607150316f, 0.0006992839626036584f, 0.0006163219804875553f, 0.0006467645289376378f, 0.0006487423088401556f, 0.0010018424363806844f, 0.00044574306230060756f, 0.0015918842982500792f, 0.0011374189052730799f, 0.0006179808406159282f, 0.0005851092282682657f, 0.0006865983013994992f, 0.000553855556063354f, 0.0006630982970818877f, 0.0008129608468152583f, 0.0007151070749387145f, 0.0006805164739489555f, 0.0006581575144082308f, 0.001037793350405991f, 0.0006250213482417166f, 0.0005648089572787285f, 0.0010951538570225239f, 0.0007796318386681378f, 0.0007576465723104775f, 0.000589721545111388f, 0.0009212001459673047f, 0.0006875797407701612f, 0.0007884864462539554f, 0.0014493452617898583f, 0.0008370126015506685f, 0.0007396600558422506f, 0.0005762900109402835f, 0.0006920401356182992f, 0.001305255456827581f, 0.0013479071203619242f, 0.0016653656493872404f, 0.0008356010657735169f, 0.00044097143108956516f, 0.0007991521270014346f, 0.0006802697898820043f, 0.0013315025717020035f, 0.0008422263781540096f, 0.0004948484129272401f, 0.0007157187210395932f, 0.0007202171836979687f, 0.0005863065598532557f, 0.0007591969915665686f, 0.0009949787054210901f, 0.0010243298020213842f, 0.0006282356334850192f, 0.0006008863565512002f, 0.0007488390547223389f, 0.000860146654304117f, 0.0007841542828828096f, 0.0009292844915762544f, 0.0009599818731658161f, 0.0005812945892103016f, 0.0005346726393327117f, 0.0006122359773144126f, 0.0007402200717478991f, 0.0008143421146087348f, 0.0007113150204531848f, 0.0008761162753216922f, 0.0009141644695773721f, 0.00063375907484442f, 0.0010930909775197506f, 0.0009913287358358502f, 0.0006545388605445623f, 0.0008375939796678722f, 0.0016270794440060854f, 0.0008458737283945084f, 0.0016377976862713695f, 0.0006357183447107673f, 0.00067665777169168f, 0.000777551787905395f, 0.0006340658874250948f, 0.0009659118368290365f, 0.00069189298665151f, 0.0011437572538852692f, 0.0004182714910712093f, 0.0009922985918819904f, 0.000986077357083559f, 0.0012256551999598742f, 0.0005926846642978489f, 0.0005595489055849612f, 0.0010380567982792854f, 0.0010899892076849937f, 0.0006697892677038908f, 0.0008732803398743272f, 0.0007164162234403193f, 0.001000800752080977f, 0.0007382086478173733f, 0.0007523777894675732f, 0.0021366076543927193f, 0.000731875014025718f, 0.0009287461289204657f, 0.0005450755706988275f, 0.0011979060946032405f, 0.0008922650595195591f, 0.0013068700209259987f, 0.0011456620413810015f, 0.0006124876672402024f, 0.0005400669761002064f, 0.0008180018630810082f, 0.0009462633752264082f, 0.0007500971551053226f, 0.0008437675423920155f, 0.0015157429734244943f, 0.0008880072855390608f, 0.0013432742562144995f, 0.0012757901567965746f, 0.0008675041608512402f, 0.0007624863064847887f, 0.0008152344962581992f, 0.0006839367561042309f, 0.0005106222815811634f, 0.0005224257474765182f, 0.0005027150036767125f, 0.0006863732123747468f, 0.0014870675513520837f, 0.0013140378287062049f, 0.0008383693639189005f, 0.0007582016987726092f, 0.0010021112393587828f, 0.0013209282187744975f, 0.0004523511161096394f, 0.0007834909483790398f, 0.0007151842582970858f, 0.0005274683353491127f, 0.0006056466954760253f, 0.0006370924529619515f, 0.0008994421805255115f, 0.00093440170167014f, 0.00058506999630481f, 0.0012002169387415051f, 0.000719313626177609f, 0.0005460614920593798f, 0.0009123246418312192f, 0.0007828173111192882f, 0.0009117661975324154f, 0.0007131720776669681f, 0.0009770938195288181f, 0.0007811592658981681f, 0.0005725647206418216f, 0.0005035648355260491f, 0.0007447446696460247f, 0.0007349901716224849f, 0.0010615898063406348f, 0.0009415230597369373f, 0.0008979342528618872f, 0.0005866118590347469f, 0.0015097622526809573f, 0.0005941973649896681f, 0.0005976551328785717f, 0.0005885100108571351f, 0.0006498332368209958f, 0.0006332504563033581f, 0.0007173329358920455f, 0.0007247579051181674f, 0.0009143433999270201f, 0.0017320067854598165f, 0.0007603164995089173f, 0.0005692800041288137f, 0.001017060480080545f, 0.0011827704729512334f, 0.0007999467197805643f, 0.0005551378126256168f, 0.0006172448047436774f, 0.0008590220240876079f, 0.0006059808074496686f, 0.0005542276776395738f, 0.0007471420103684068f, 0.0008763779769651592f, 0.0005363051895983517f, 0.000616613426245749f, 0.0007570108282379806f, 0.001153287012130022f, 0.0006132441340014338f, 0.0006525940843857825f, 0.0006582907517440617f, 0.0006089325761422515f, 0.0006916688871569932f, 0.0006487975479103625f, 0.0005221861647441983f, 0.0007197628146968782f, 0.0006340708350762725f, 0.0005319237825460732f, 0.0007489786366932094f, 0.0011007654247805476f, 0.0007371118408627808f, 0.0004980789963155985f, 0.0006409110501408577f, 0.0007220136467367411f, 0.0004634274519048631f, 0.0008168376516550779f, 0.000780883536208421f, 0.0006331350887194276f, 0.0007576614152640104f, 0.0007509571732953191f, 0.0006343979621306062f, 0.000541664834599942f, 0.0010623772395774722f, 0.0006743687554262578f, 0.0005799086065962911f, 0.0005738860927522182f, 0.0004356872523203492f, 0.000814400496892631f, 0.0008716099546290934f, 0.0006324041169136763f, 0.0007481695502065122f, 0.0004668954643420875f, 0.0006962449406273663f, 0.0006734798662364483f, 0.0006493059918284416f, 0.0006411884678527713f, 0.0007544582476839423f, 0.0009008854394778609f, 0.0011983789736405015f, 0.000855972699355334f, 0.0008275382569991052f, 0.0008538052788935602f, 0.0011454785708338022f, 0.0008290090481750667f, 0.0006221308140084147f, 0.0007462096982635558f, 0.0004881575587205589f, 0.0006423812592402101f, 0.0006903919856995344f, 0.0007625637808814645f, 0.0005358588532544672f, 0.0005724685615859926f, 0.0005761291249655187f, 0.0012887065531685948f, 0.0006983510102145374f, 0.0007671380881220102f, 0.0009479215950705111f, 0.001220040488988161f, 0.001385606243275106f, 0.0006584688671864569f, 0.0007044022204354405f, 0.0005593649693764746f, 0.0014920183457434177f, 0.0015128259547054768f, 0.000983458012342453f, 0.000758605427108705f, 0.0014522162964567542f, 0.0007573001203127205f, 0.00053475855384022f, 0.0009162327041849494f, 0.0005833996110595763f, 0.000788723467849195f, 0.0004532629100140184f, 0.0006371083436533809f, 0.0009385157027281821f, 0.00048713412252254784f, 0.0010291689541190863f, 0.0004838205059058964f, 0.001174554112367332f, 0.0009454520768485963f, 0.000772407918702811f, 0.0006298432126641273f, 0.00045613572001457214f, 0.0004380086320452392f, 0.0005877661751583219f, 0.0011168376076966524f, 0.0008508861646987498f, 0.0006808614125475287f, 0.0006444539176300168f, 0.0008281883783638477f, 0.0006449415232054889f, 0.0010479335905984044f, 0.0007886473322287202f, 0.0006496923160739243f, 0.0006627744878642261f, 0.0007931172731332481f, 0.000572025019209832f, 0.0006629095878452063f, 0.0008650912204757333f, 0.0008662136970087886f, 0.000640729907900095f, 0.0010525473626330495f, 0.001423380454070866f, 0.0007742008892819285f, 0.0005955378292128444f, 0.0006782509735785425f, 0.002143311779946089f, 0.000786678574513644f, 0.0005465983413159847f, 0.0006316191283985972f, 0.0004996403586119413f, 0.0006145815132185817f, 0.0007117710774764419f, 0.0006382036372087896f, 0.0006431002984754741f, 0.0008090235642157495f, 0.0006444024620577693f, 0.0006906817434355617f, 0.0007141958922147751f, 0.0006125890649855137f, 0.0007846475346013904f, 0.0012268353020772338f, 0.0006150147528387606f, 0.0005809779977425933f, 0.0006465697078965604f, 0.0006639725179411471f, 0.0005655355635099113f, 0.0006495870184153318f, 0.0004003829963039607f, 0.0005764099769294262f, 0.001064151176251471f, 0.0008889493765309453f, 0.0006500232266262174f, 0.0009731427999213338f, 0.0008059999672695994f, 0.0008814031607471406f, 0.0010762631427496672f, 0.0006004672031849623f, 0.0007036548340693116f, 0.0008120783604681492f, 0.0006771314074285328f, 0.0008826000266708434f, 0.0008331959834322333f, 0.0010226134909316897f, 0.000778907909989357f, 0.000714885420165956f, 0.0007325330516323447f, 0.0011366421822458506f, 0.0006395834498107433f, 0.00037305415025912225f, 0.000735728710424155f, 0.0011597162811085582f, 0.0004166841972619295f, 0.0009877554839476943f, 0.0006565055809915066f, 0.0005933072534389794f, 0.0005783774540759623f, 0.000588497263379395f, 0.0006039127474650741f, 0.0007066327962093055f, 0.0005514679942280054f, 0.0006047114729881287f, 0.0006831578211858869f, 0.0015202577924355865f, 0.0009040021686814725f, 0.0008297520107589662f, 0.0009171174606308341f, 0.0006294610211625695f, 0.0006511196261271834f, 0.0008717301534488797f, 0.0007380576571449637f, 0.0010275521781295538f, 0.0010087526170536876f, 0.000998634728603065f, 0.0007437521708197892f, 0.0005126125179231167f, 0.000818047090433538f, 0.0006134381983429193f, 0.0006305987481027842f, 0.0008546742028556764f, 0.00040757740498520434f, 0.0007201264379546046f, 0.0007783510955050588f, 0.0006079257582314312f, 0.0005969490739516914f, 0.0006303296540863812f, 0.001072826562449336f, 0.0006834134692326188f, 0.0007022194913588464f, 0.0009591588168404996f, 0.0006400183192454278f, 0.000660389254335314f, 0.000804959621746093f, 0.0005841659149155021f, 0.0006311664474196732f, 0.0006373748183250427f, 0.0007264214218594134f, 0.0005298301693983376f, 0.0008138273260556161f, 0.0006360113620758057f, 0.000680398428812623f, 0.0004906325484625995f, 0.000894890574272722f, 0.0006963419145904481f, 0.0006985183572396636f, 0.0012329216115176678f, 0.0006499761366285384f, 0.0013919792836531997f, 0.0006461804732680321f, 0.0008109930204227567f, 0.0010861636837944388f, 0.0009949104860424995f, 0.0007534040487371385f, 0.0005385124241001904f, 0.0007081388612277806f, 0.0005924678989686072f, 0.0006008369382470846f, 0.0007819089223630726f, 0.0005630449159070849f, 0.0009214640012942255f, 0.000941949721891433f, 0.0006326005095615983f, 0.0006029129144735634f, 0.0013048715190961957f, 0.0004924057284370065f, 0.0007138354703783989f, 0.0006576384184882045f, 0.0006062412285245955f, 0.0007356656133197248f, 0.0007259358535520732f, 0.0006705023115500808f, 0.0009405439486727118f, 0.0014052253682166338f, 0.00047966878628358245f, 0.0008075698278844357f, 0.0006993626593612134f, 0.0007232995703816414f, 0.0010701320134103298f, 0.0007978788344189525f, 0.000701090379152447f, 0.0007135366904549301f, 0.0006003574817441404f, 0.0009273214964196086f, 0.0006617250037379563f, 0.0005480380496010184f, 0.0005426564021036029f, 0.0008833598694764078f, 0.0012746683787554502f, 0.0007839308236725628f, 0.00054070824990049f, 0.0012069832300767303f, 0.0008096140227280557f, 0.0006667283014394343f, 0.0008964790031313896f, 0.0006914765108376741f, 0.0009458169806748629f, 0.0004387155349832028f, 0.0009563915664330125f, 0.0005257906741462648f, 0.001634457497857511f, 0.0005674014682881534f, 0.0006996169104240835f, 0.0006621316424570978f, 0.0011533970246091485f, 0.0007561323000118136f, 0.0007374315173365176f, 0.0005758184124715626f, 0.0005347799742594361f, 0.0005905103753320873f, 0.0008048858144320548f, 0.0006830641068518162f, 0.0006333281053230166f, 0.0008003200637176633f, 0.0005456681246869266f, 0.0014029722660779953f, 0.0008961139246821404f, 0.0007188560557551682f, 0.0005320373456925154f, 0.0008094834629446268f, 0.0007257836987264454f, 0.0008078906685113907f, 0.0006159262266010046f, 0.0009057963034138083f, 0.0012217473704367876f, 0.0005651568062603474f, 0.0005396627821028233f, 0.0007718016277067363f, 0.0011393394088372588f, 0.0008225837373174727f, 0.0007672217907384038f, 0.0006560476031154394f, 0.0004556783242151141f, 0.0006504594348371029f, 0.0006203732918947935f, 0.0010281550930812955f, 0.0006006982875987887f, 0.0007004303624853492f, 0.000740259129088372f, 0.0009788229363039136f, 0.0007520668441429734f, 0.0013141738018020988f, 0.000567601528018713f, 0.0005682270275428891f, 0.0006585550145246089f, 0.0005775950266979635f, 0.0009589055553078651f, 0.0007839588215574622f, 0.000509451434481889f, 0.0007900704513303936f, 0.000991556909866631f, 0.0009111316176131368f, 0.0006371070630848408f, 0.0009065899066627026f, 0.0008170688524842262f, 0.0011306682135909796f, 0.0008825919940136373f, 0.0003826802421826869f, 0.0008278865716420114f, 0.0013498937478289008f, 0.0006398814148269594f, 0.0008374830358661711f, 0.0007816652650944889f, 0.0005962669965811074f, 0.0008392630843445659f, 0.0005601423908956349f, 0.001215506112203002f, 0.00045955105451866984f, 0.0009172970312647521f, 0.0009052917012013495f, 0.0006628567934967577f, 0.0005900259711779654f, 0.0006868745549581945f, 0.0005766607937403023f, 0.0007627308368682861f, 0.0006046714261174202f, 0.0006101325270719826f, 0.0006565822404809296f, 0.0008422748651355505f, 0.0012518831063061953f, 0.0005278030293993652f, 0.000613427022472024f, 0.0008389623835682869f, 0.0005858573713339865f, 0.0005330214044079185f, 0.0007797302096150815f, 0.0009919516742229462f, 0.0005814876640215516f, 0.0006045594345778227f, 0.0006614038138650358f, 0.0007860365440137684f, 0.0006290930323302746f, 0.0008213510154746473f, 0.0014175716787576675f, 0.0007237831596285105f, 0.000989277265034616f, 0.0007405034266412258f, 0.0006121390615589917f, 0.0006104883505031466f, 0.0005909276660531759f, 0.0010808815713971853f, 0.0005040534306317568f, 0.0017583336448296905f, 0.0006937922444194555f, 0.0006837425753474236f, 0.00119127391371876f, 0.0006984916399233043f, 0.0007548280409537256f, 0.0009576474549248815f, 0.0011167324846610427f, 0.0006823661969974637f, 0.0009378931135870516f, 0.0016868424136191607f, 0.0007247970206663013f, 0.0006575119914487004f, 0.0006568194949068129f, 0.0005583305610343814f, 0.0005864347331225872f, 0.0008423322578892112f, 0.0007760751759633422f, 0.0013500286731868982f, 0.0009459391585551202f, 0.0009359563118778169f, 0.0004921177169308066f, 0.0006437184638343751f, 0.0005725118098780513f, 0.00042569509241729975f, 0.0009933137334883213f, 0.0009521689498797059f, 0.0006498578004539013f, 0.0007600457756780088f, 0.0008346170070581138f, 0.000792494451161474f, 0.0011227043578401208f, 0.0007269859197549522f, 0.0007497211336158216f, 0.0005403338582254946f, 0.0005649101221933961f, 0.0014984672889113426f, 0.0009286299464292824f, 0.0008764968370087445f, 0.0009962636977434158f, 0.0006266057025641203f, 0.0008004027768038213f, 0.0005960103590041399f, 0.0008563544834032655f, 0.0006637176848016679f, 0.0005946464370936155f, 0.0008790672873146832f, 0.0007139946101233363f, 0.001015303423628211f, 0.0008555707172490656f, 0.0005480556865222752f, 0.0005449583986774087f, 0.0007362578180618584f, 0.0014169509522616863f, 0.0007036273600533605f, 0.0010686310706660151f, 0.0006858400884084404f, 0.0009256949997507036f, 0.0005910986219532788f, 0.0008489337051287293f, 0.0005445091519504786f, 0.0006144112558104098f, 0.000986306113190949f, 0.0006345517467707396f, 0.0006777445087209344f, 0.0007941573276184499f, 0.0006777253584004939f, 0.0007639954565092921f, 0.0006491427775472403f, 0.0008489573374390602f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002198806731030345f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09191199392080307f),
    AI_PACK_INTQ_ZP(14)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09885866194963455f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08799494802951813f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_7_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08247198909521103f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12032020092010498f),
    AI_PACK_INTQ_ZP(-18)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_9_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08051810413599014f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08191213756799698f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11181420832872391f),
    AI_PACK_INTQ_ZP(-19)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07603595405817032f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.15043209493160248f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06632895767688751f),
    AI_PACK_INTQ_ZP(8)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07582460343837738f),
    AI_PACK_INTQ_ZP(23)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10505897551774979f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_pad_before_output, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 16, 16), AI_STRIDE_INIT(4, 1, 1, 96, 1536),
  1, &conv2d_34_pad_before_output_array, &conv2d_34_pad_before_output_array_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_output, AI_STATIC,
  1, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_34_output_array, &conv2d_34_output_array_intq)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  2, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_17_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  5, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_scratch1, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_17_scratch1_array, &conv2d_17_scratch1_array_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_pad_before_output, AI_STATIC,
  7, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 16, 16), AI_STRIDE_INIT(4, 1, 1, 96, 1536),
  1, &conv2d_38_pad_before_output_array, &conv2d_38_pad_before_output_array_intq)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_output, AI_STATIC,
  9, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_39_output_array, &conv2d_39_output_array_intq)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_40_output, AI_STATIC,
  11, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_40_output_array, &eltwise_40_output_array_intq)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  13, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_pad_before_output, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 16, 16), AI_STRIDE_INIT(4, 1, 1, 96, 1536),
  1, &conv2d_42_pad_before_output_array, &conv2d_42_pad_before_output_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_output, AI_STATIC,
  15, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_42_output_array, &conv2d_42_output_array_intq)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_output, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_43_output_array, &conv2d_43_output_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_output, AI_STATIC,
  18, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_44_output_array, &conv2d_44_output_array_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_pad_before_output, AI_STATIC,
  19, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 16, 16), AI_STRIDE_INIT(4, 1, 1, 144, 2304),
  1, &conv2d_45_pad_before_output_array, &conv2d_45_pad_before_output_array_intq)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_output, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_46_output_array, &conv2d_46_output_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_47_output, AI_STATIC,
  23, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_47_output_array, &eltwise_47_output_array_intq)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  24, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_pad_before_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 16, 16), AI_STRIDE_INIT(4, 1, 1, 144, 2304),
  1, &conv2d_49_pad_before_output_array, &conv2d_49_pad_before_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_49_output_array, &conv2d_49_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_51_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_51_output_array, &eltwise_51_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch1, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_22_scratch1_array, &conv2d_22_scratch1_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_52_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_52_output_array, &conv2d_52_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_pad_before_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 15, 15), AI_STRIDE_INIT(4, 1, 1, 144, 2160),
  1, &conv2d_54_pad_before_output_array, &conv2d_54_pad_before_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_54_output_array, &conv2d_54_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_scratch0, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_23_scratch0_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_56_output_array, &conv2d_56_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_pad_before_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 9, 9), AI_STRIDE_INIT(4, 1, 1, 240, 2160),
  1, &conv2d_57_pad_before_output_array, &conv2d_57_pad_before_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_scratch0, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_25_scratch0_array, NULL)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_58_output_array, &conv2d_58_output_array_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_scratch1, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_25_scratch1_array, &conv2d_25_scratch1_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_59_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_59_output_array, &eltwise_59_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_pad_before_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 9, 9), AI_STRIDE_INIT(4, 1, 1, 240, 2160),
  1, &conv2d_61_pad_before_output_array, &conv2d_61_pad_before_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  46, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_61_output_array, &conv2d_61_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_62_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &conv2d_62_output_array, &conv2d_62_output_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_63_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 7, 7), AI_STRIDE_INIT(4, 1, 1, 40, 280),
  1, &eltwise_63_output_array, &eltwise_63_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_64_output_array, &conv2d_64_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_pad_before_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 9, 9), AI_STRIDE_INIT(4, 1, 1, 240, 2160),
  1, &conv2d_65_pad_before_output_array, &conv2d_65_pad_before_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  53, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 80, 7, 7), AI_STRIDE_INIT(4, 1, 1, 80, 560),
  1, &conv2d_66_output_array, &conv2d_66_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 7, 7), AI_STRIDE_INIT(4, 1, 1, 1280, 8960),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_scratch0, AI_STATIC,
  57, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_29_scratch0_array, NULL)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  pool_68_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &pool_68_output_array, &pool_68_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &gemm_69_output_array, &gemm_69_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_scratch1, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_29_scratch1_array, &conv2d_29_scratch1_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  nl_70_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4, 4),
  1, &nl_70_output_array, &nl_70_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conversion_71_output, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conversion_71_output_array, NULL)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  64, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  68, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  69, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  71, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_scratch0, AI_STATIC,
  72, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_33_scratch0_array, NULL)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  74, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_scratch1, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_33_scratch1_array, &conv2d_33_scratch1_array_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_weights, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_7_weights_array, &conv2d_7_weights_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_bias, AI_STATIC,
  77, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_7_bias_array, NULL)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_scratch0, AI_STATIC,
  78, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_34_scratch0_array, NULL)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_weights, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 384, 384),
  1, &conv2d_8_weights_array, &conv2d_8_weights_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_scratch1, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_34_scratch1_array, &conv2d_34_scratch1_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_bias, AI_STATIC,
  81, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_8_bias_array, NULL)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_9_weights_array, &conv2d_9_weights_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  83, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  84, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_9_bias_array, NULL)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  86, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  87, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 384, 384),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  90, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  91, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  96, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_scratch0, AI_STATIC,
  97, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_39_scratch0_array, NULL)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 384, 384),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  99, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  100, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_weights, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_17_weights_array, &conv2d_17_weights_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch1, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_41_scratch1_array, &conv2d_41_scratch1_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_bias, AI_STATIC,
  103, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_17_bias_array, NULL)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_scratch0, AI_STATIC,
  105, 0x0,
  AI_SHAPE_INIT(4, 1, 3553, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3553, 3553),
  1, &conv2d_42_scratch0_array, NULL)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  106, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_scratch1, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_42_scratch1_array, &conv2d_42_scratch1_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 384, 384),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  109, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_scratch0, AI_STATIC,
  110, 0x0,
  AI_SHAPE_INIT(4, 1, 624, 1, 1), AI_STRIDE_INIT(4, 1, 1, 624, 624),
  1, &conv2d_43_scratch0_array, NULL)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  112, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_scratch0, AI_STATIC,
  113, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_44_scratch0_array, NULL)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  115, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_scratch1, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_44_scratch1_array, &conv2d_44_scratch1_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_weights, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 8), AI_STRIDE_INIT(4, 1, 48, 384, 384),
  1, &conv2d_23_weights_array, &conv2d_23_weights_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_bias, AI_STATIC,
  118, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_23_bias_array, NULL)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  119, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_weights, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 48), AI_STRIDE_INIT(4, 1, 8, 384, 384),
  1, &conv2d_25_weights_array, &conv2d_25_weights_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch1, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_45_scratch1_array, &conv2d_45_scratch1_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_bias, AI_STATIC,
  122, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_25_bias_array, NULL)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_scratch0, AI_STATIC,
  124, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_46_scratch0_array, NULL)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  125, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  127, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  128, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  129, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_weights, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_29_weights_array, &conv2d_29_weights_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_bias, AI_STATIC,
  131, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_29_bias_array, NULL)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_scratch0, AI_STATIC,
  132, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_49_scratch0_array, NULL)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 96, 288),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  134, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_scratch1, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_49_scratch1_array, &conv2d_49_scratch1_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 1536, 1536),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  137, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  138, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_33_weights_array, &conv2d_33_weights_array_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_33_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_52_scratch0, AI_STATIC,
  141, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_52_scratch0_array, NULL)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_weights, AI_STATIC,
  142, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 96, 288),
  1, &conv2d_34_weights_array, &conv2d_34_weights_array_intq)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_52_scratch1, AI_STATIC,
  143, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_52_scratch1_array, &conv2d_52_scratch1_array_intq)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_34_bias, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_34_bias_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 1536, 1536),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_scratch0, AI_STATIC,
  146, 0x0,
  AI_SHAPE_INIT(4, 1, 5329, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5329, 5329),
  1, &conv2d_54_scratch0_array, NULL)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  147, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_scratch1, AI_STATIC,
  148, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_54_scratch1_array, &conv2d_54_scratch1_array_intq)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  149, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  150, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  151, 0x0,
  AI_SHAPE_INIT(4, 1, 976, 1, 1), AI_STRIDE_INIT(4, 1, 1, 976, 976),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  152, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 96, 288),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  153, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch0, AI_STATIC,
  154, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_56_scratch0_array, NULL)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_weights, AI_STATIC,
  155, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 16), AI_STRIDE_INIT(4, 1, 96, 1536, 1536),
  1, &conv2d_39_weights_array, &conv2d_39_weights_array_intq)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_39_bias, AI_STATIC,
  156, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_39_bias_array, NULL)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_scratch1, AI_STATIC,
  157, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_56_scratch1_array, &conv2d_56_scratch1_array_intq)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  158, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 96), AI_STRIDE_INIT(4, 1, 16, 1536, 1536),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  159, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  160, 0x0,
  AI_SHAPE_INIT(4, 1, 8881, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8881, 8881),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_weights, AI_STATIC,
  161, 0x1,
  AI_SHAPE_INIT(4, 96, 3, 3, 1), AI_STRIDE_INIT(4, 1, 96, 96, 288),
  1, &conv2d_42_weights_array, &conv2d_42_weights_array_intq)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  162, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_42_bias, AI_STATIC,
  163, 0x0,
  AI_SHAPE_INIT(4, 1, 96, 1, 1), AI_STRIDE_INIT(4, 4, 4, 384, 384),
  1, &conv2d_42_bias_array, NULL)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_weights, AI_STATIC,
  164, 0x1,
  AI_SHAPE_INIT(4, 96, 1, 1, 24), AI_STRIDE_INIT(4, 1, 96, 2304, 2304),
  1, &conv2d_43_weights_array, &conv2d_43_weights_array_intq)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  165, 0x0,
  AI_SHAPE_INIT(4, 1, 1360, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1360, 1360),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_43_bias, AI_STATIC,
  166, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_43_bias_array, NULL)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_weights, AI_STATIC,
  167, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_44_weights_array, &conv2d_44_weights_array_intq)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  168, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_44_bias, AI_STATIC,
  169, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_44_bias_array, NULL)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch1, AI_STATIC,
  170, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_60_scratch1_array, &conv2d_60_scratch1_array_intq)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  171, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 144, 432),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  172, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  173, 0x0,
  AI_SHAPE_INIT(4, 1, 8881, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8881, 8881),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_weights, AI_STATIC,
  174, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 24), AI_STRIDE_INIT(4, 1, 144, 3456, 3456),
  1, &conv2d_46_weights_array, &conv2d_46_weights_array_intq)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_46_bias, AI_STATIC,
  175, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_46_bias_array, NULL)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch1, AI_STATIC,
  176, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_61_scratch1_array, &conv2d_61_scratch1_array_intq)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  177, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  178, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_62_scratch0, AI_STATIC,
  179, 0x0,
  AI_SHAPE_INIT(4, 1, 1360, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1360, 1360),
  1, &conv2d_62_scratch0_array, NULL)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_weights, AI_STATIC,
  180, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 144, 432),
  1, &conv2d_49_weights_array, &conv2d_49_weights_array_intq)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_49_bias, AI_STATIC,
  181, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_49_bias_array, NULL)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch0, AI_STATIC,
  182, 0x0,
  AI_SHAPE_INIT(4, 1, 2560, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2560, 2560),
  1, &conv2d_64_scratch0_array, NULL)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  183, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 24), AI_STRIDE_INIT(4, 1, 144, 3456, 3456),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_scratch1, AI_STATIC,
  184, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_64_scratch1_array, &conv2d_64_scratch1_array_intq)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  185, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_52_weights, AI_STATIC,
  186, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_52_weights_array, &conv2d_52_weights_array_intq)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  187, 0x0,
  AI_SHAPE_INIT(4, 1, 8881, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8881, 8881),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_52_bias, AI_STATIC,
  188, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_52_bias_array, NULL)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch1, AI_STATIC,
  189, 0x1,
  AI_SHAPE_INIT(4, 1, 240, 7, 7), AI_STRIDE_INIT(4, 1, 1, 240, 1680),
  1, &conv2d_65_scratch1_array, &conv2d_65_scratch1_array_intq)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_weights, AI_STATIC,
  190, 0x1,
  AI_SHAPE_INIT(4, 144, 3, 3, 1), AI_STRIDE_INIT(4, 1, 144, 144, 432),
  1, &conv2d_54_weights_array, &conv2d_54_weights_array_intq)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_54_bias, AI_STATIC,
  191, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_54_bias_array, NULL)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_scratch0, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 1760, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1760, 1760),
  1, &conv2d_66_scratch0_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 40), AI_STRIDE_INIT(4, 1, 144, 5760, 5760),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  195, 0x0,
  AI_SHAPE_INIT(4, 1, 13120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13120, 13120),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_weights, AI_STATIC,
  196, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_56_weights_array, &conv2d_56_weights_array_intq)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_56_bias, AI_STATIC,
  197, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_56_bias_array, NULL)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  198, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 7, 7), AI_STRIDE_INIT(4, 1, 1, 1280, 8960),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 240, 3, 3, 1), AI_STRIDE_INIT(4, 1, 240, 240, 720),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_scratch0, AI_STATIC,
  201, 0x0,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 2, 2, 2560, 2560),
  1, &gemm_69_scratch0_array, NULL)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  202, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 40), AI_STRIDE_INIT(4, 1, 240, 9600, 9600),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  203, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  nl_70_scratch0, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &nl_70_scratch0_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  206, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 240, 3, 3, 1), AI_STRIDE_INIT(4, 1, 240, 240, 720),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  208, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_62_weights, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 40), AI_STRIDE_INIT(4, 1, 240, 9600, 9600),
  1, &conv2d_62_weights_array, &conv2d_62_weights_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_62_bias, AI_STATIC,
  210, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_62_bias_array, NULL)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_weights, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 240), AI_STRIDE_INIT(4, 1, 40, 9600, 9600),
  1, &conv2d_64_weights_array, &conv2d_64_weights_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_64_bias, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_64_bias_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 240, 3, 3, 1), AI_STRIDE_INIT(4, 1, 240, 240, 720),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  214, 0x0,
  AI_SHAPE_INIT(4, 1, 240, 1, 1), AI_STRIDE_INIT(4, 4, 4, 960, 960),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_weights, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 240, 1, 1, 80), AI_STRIDE_INIT(4, 1, 240, 19200, 19200),
  1, &conv2d_66_weights_array, &conv2d_66_weights_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_66_bias, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 80, 1, 1), AI_STRIDE_INIT(4, 4, 4, 320, 320),
  1, &conv2d_66_bias_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 80, 1, 1, 1280), AI_STRIDE_INIT(4, 1, 80, 102400, 102400),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  218, 0x0,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 4, 4, 5120, 5120),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_weights, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 1280, 4, 1, 1), AI_STRIDE_INIT(4, 1, 1280, 5120, 5120),
  1, &gemm_69_weights_array, &gemm_69_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &gemm_69_bias_array, NULL)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  221, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  222, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  223, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  224, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  226, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  228, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_pad_before_output, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_2_pad_before_output_array, &conv2d_2_pad_before_output_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  232, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_3_output_array, &conv2d_3_output_array_intq)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch1, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 112, 112), AI_STRIDE_INIT(4, 1, 1, 48, 5376),
  1, &conv2d_5_scratch1_array, &conv2d_5_scratch1_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_4_output, AI_STATIC,
  234, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &eltwise_4_output_array, &eltwise_4_output_array_intq)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 112, 112), AI_STRIDE_INIT(4, 1, 1, 48, 5376),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_pad_before_output, AI_STATIC,
  236, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 113, 113), AI_STRIDE_INIT(4, 1, 1, 48, 5424),
  1, &conv2d_7_pad_before_output_array, &conv2d_7_pad_before_output_array_intq)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch0, AI_STATIC,
  237, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_7_scratch0_array, NULL)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_output, AI_STATIC,
  238, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_7_output_array, &conv2d_7_output_array_intq)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_output, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_8_output_array, &conv2d_8_output_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch1, AI_STATIC,
  240, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_7_scratch1_array, &conv2d_7_scratch1_array_intq)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_9_output_array, &conv2d_9_output_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_pad_before_output, AI_STATIC,
  242, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 58, 58), AI_STRIDE_INIT(4, 1, 1, 48, 2784),
  1, &conv2d_10_pad_before_output_array, &conv2d_10_pad_before_output_array_intq)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_scratch0, AI_STATIC,
  244, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_8_scratch0_array, NULL)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_12_output, AI_STATIC,
  246, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &eltwise_12_output_array, &eltwise_12_output_array_intq)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_pad_before_output, AI_STATIC,
  249, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 57, 57), AI_STRIDE_INIT(4, 1, 1, 48, 2736),
  1, &conv2d_15_pad_before_output_array, &conv2d_15_pad_before_output_array_intq)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch1, AI_STATIC,
  251, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_9_scratch1_array, &conv2d_9_scratch1_array_intq)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_17_output, AI_STATIC,
  253, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_17_output_array, &conv2d_17_output_array_intq)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_pad_before_output, AI_STATIC,
  254, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 30, 30), AI_STRIDE_INIT(4, 1, 1, 48, 1440),
  1, &conv2d_18_pad_before_output_array, &conv2d_18_pad_before_output_array_intq)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  255, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #256 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  256, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #257 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  257, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #258 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch1, AI_STATIC,
  258, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_10_scratch1_array, &conv2d_10_scratch1_array_intq)

/* Tensor #259 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_20_output, AI_STATIC,
  259, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &eltwise_20_output_array, &eltwise_20_output_array_intq)

/* Tensor #260 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  260, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #261 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_pad_before_output, AI_STATIC,
  261, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 30, 30), AI_STRIDE_INIT(4, 1, 1, 48, 1440),
  1, &conv2d_22_pad_before_output_array, &conv2d_22_pad_before_output_array_intq)

/* Tensor #262 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  262, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #263 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  263, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #264 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_23_output, AI_STATIC,
  264, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &conv2d_23_output_array, &conv2d_23_output_array_intq)

/* Tensor #265 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_24_output, AI_STATIC,
  265, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 28, 28), AI_STRIDE_INIT(4, 1, 1, 8, 224),
  1, &eltwise_24_output_array, &eltwise_24_output_array_intq)

/* Tensor #266 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  266, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #267 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_25_output, AI_STATIC,
  267, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_25_output_array, &conv2d_25_output_array_intq)

/* Tensor #268 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_pad_before_output, AI_STATIC,
  268, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 29, 29), AI_STRIDE_INIT(4, 1, 1, 48, 1392),
  1, &conv2d_27_pad_before_output_array, &conv2d_27_pad_before_output_array_intq)

/* Tensor #269 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch1, AI_STATIC,
  269, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 56, 56), AI_STRIDE_INIT(4, 1, 1, 48, 2688),
  1, &conv2d_13_scratch1_array, &conv2d_13_scratch1_array_intq)

/* Tensor #270 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  270, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #271 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  271, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #272 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_29_output, AI_STATIC,
  272, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_29_output_array, &conv2d_29_output_array_intq)

/* Tensor #273 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  273, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #274 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_pad_before_output, AI_STATIC,
  274, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 16, 16), AI_STRIDE_INIT(4, 1, 1, 96, 1536),
  1, &conv2d_30_pad_before_output_array, &conv2d_30_pad_before_output_array_intq)

/* Tensor #275 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  275, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #276 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  276, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #277 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  277, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)

/* Tensor #278 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  278, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 14, 14), AI_STRIDE_INIT(4, 1, 1, 16, 224),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #279 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_33_output, AI_STATIC,
  279, 0x1,
  AI_SHAPE_INIT(4, 1, 96, 14, 14), AI_STRIDE_INIT(4, 1, 1, 96, 1344),
  1, &conv2d_33_output_array, &conv2d_33_output_array_intq)

/* Tensor #280 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  280, 0x0,
  AI_SHAPE_INIT(4, 1, 272, 1, 1), AI_STRIDE_INIT(4, 1, 1, 272, 272),
  1, &conv2d_16_scratch0_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_71_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_71_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_71_layer, 71,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &conversion_71_chain,
  NULL, &conversion_71_layer, AI_STATIC, 
)


AI_STATIC_CONST ai_i32 nl_70_nl_params_data[] = { 1550923520, 25, -62 };
AI_ARRAY_OBJ_DECLARE(
    nl_70_nl_params, AI_ARRAY_FORMAT_S32,
    nl_70_nl_params_data, nl_70_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_70_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_70_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_70_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  nl_70_layer, 70,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm_integer,
  &nl_70_chain,
  NULL, &conversion_71_layer, AI_STATIC, 
  .nl_params = &nl_70_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  gemm_69_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &gemm_69_weights, &gemm_69_bias),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_69_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  gemm_69_layer, 69,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense_integer_SSSA,
  &gemm_69_chain,
  NULL, &nl_70_layer, AI_STATIC, 
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
  NULL, &gemm_69_layer, AI_STATIC, 
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
  conv2d, forward_pw_sssa8_ch,
  &conv2d_67_chain,
  NULL, &pool_68_layer, AI_STATIC, 
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
  conv2d_66_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_66_weights, &conv2d_66_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_66_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_66_layer, 66,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_66_chain,
  NULL, &conv2d_67_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_65_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_65_weights, &conv2d_65_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_65_scratch0, &conv2d_65_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_65_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_65_chain,
  NULL, &conv2d_66_layer, AI_STATIC, 
  .groups = 240, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_65_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_65_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_65_pad_before_value_data, conv2d_65_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_65_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_65_pad_before_layer, 65,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_65_pad_before_chain,
  NULL, &conv2d_65_layer, AI_STATIC, 
  .value = &conv2d_65_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_64_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_64_weights, &conv2d_64_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_64_scratch0, &conv2d_64_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_64_layer, 64,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_64_chain,
  NULL, &conv2d_65_pad_before_layer, AI_STATIC, 
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
  eltwise_63_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_59_output, &conv2d_62_output),
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
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_62_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_62_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_62_weights, &conv2d_62_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_62_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_62_layer, 62,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_62_chain,
  NULL, &eltwise_63_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_61_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_61_weights, &conv2d_61_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_61_scratch0, &conv2d_61_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_61_layer, 61,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_61_chain,
  NULL, &conv2d_62_layer, AI_STATIC, 
  .groups = 240, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_61_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_61_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_61_pad_before_value_data, conv2d_61_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_61_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_61_pad_before_layer, 61,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_61_pad_before_chain,
  NULL, &conv2d_61_layer, AI_STATIC, 
  .value = &conv2d_61_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_60_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_60_weights, &conv2d_60_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_60_scratch0, &conv2d_60_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_60_layer, 60,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_60_chain,
  NULL, &conv2d_61_pad_before_layer, AI_STATIC, 
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
  eltwise_59_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_55_output, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_59_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_59_layer, 59,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_58_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_58_weights, &conv2d_58_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_58_layer, 58,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_58_chain,
  NULL, &eltwise_59_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_57_weights, &conv2d_57_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_57_scratch0, &conv2d_57_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_layer, 57,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_57_chain,
  NULL, &conv2d_58_layer, AI_STATIC, 
  .groups = 240, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_57_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_57_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_57_pad_before_value_data, conv2d_57_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_pad_before_layer, 57,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_57_pad_before_chain,
  NULL, &conv2d_57_layer, AI_STATIC, 
  .value = &conv2d_57_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
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
  NULL, &conv2d_57_pad_before_layer, AI_STATIC, 
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_output),
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
  conv2d_54_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_54_weights, &conv2d_54_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_54_scratch0, &conv2d_54_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_54_layer, 53,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_54_chain,
  NULL, &conv2d_55_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_54_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_54_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_54_pad_before_value_data, conv2d_54_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_54_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_52_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_54_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_54_pad_before_layer, 54,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_54_pad_before_chain,
  NULL, &conv2d_54_layer, AI_STATIC, 
  .value = &conv2d_54_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_52_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_51_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_52_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_52_weights, &conv2d_52_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_52_scratch0, &conv2d_52_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_52_layer, 52,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_52_chain,
  NULL, &conv2d_54_pad_before_layer, AI_STATIC, 
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
  eltwise_51_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_47_output, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_51_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_51_layer, 51,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_51_chain,
  NULL, &conv2d_52_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_50_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_50_weights, &conv2d_50_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_50_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_50_chain,
  NULL, &eltwise_51_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_49_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_49_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_49_weights, &conv2d_49_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_49_scratch0, &conv2d_49_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_49_layer, 49,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_49_chain,
  NULL, &conv2d_50_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_49_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_49_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_49_pad_before_value_data, conv2d_49_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_49_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_49_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_49_pad_before_layer, 49,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_49_pad_before_chain,
  NULL, &conv2d_49_layer, AI_STATIC, 
  .value = &conv2d_49_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_48_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_48_weights, &conv2d_48_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_scratch0, &conv2d_48_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_48_layer, 48,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_48_chain,
  NULL, &conv2d_49_pad_before_layer, AI_STATIC, 
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
  eltwise_47_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_43_output, &conv2d_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_47_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_47_layer, 47,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_47_chain,
  NULL, &conv2d_48_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_46_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_46_weights, &conv2d_46_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_46_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_46_layer, 46,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_46_chain,
  NULL, &eltwise_47_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_45_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_45_weights, &conv2d_45_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_45_scratch0, &conv2d_45_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_45_layer, 45,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_45_chain,
  NULL, &conv2d_46_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_45_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_45_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_45_pad_before_value_data, conv2d_45_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_45_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_45_pad_before_layer, 45,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_45_pad_before_chain,
  NULL, &conv2d_45_layer, AI_STATIC, 
  .value = &conv2d_45_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_44_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_44_weights, &conv2d_44_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_44_scratch0, &conv2d_44_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_44_layer, 44,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_44_chain,
  NULL, &conv2d_45_pad_before_layer, AI_STATIC, 
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
  conv2d_43_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_43_weights, &conv2d_43_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_43_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_43_layer, 43,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_43_chain,
  NULL, &conv2d_44_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_42_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_42_weights, &conv2d_42_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_42_scratch0, &conv2d_42_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_42_layer, 42,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_42_chain,
  NULL, &conv2d_43_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_42_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_42_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_42_pad_before_value_data, conv2d_42_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_42_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_42_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_42_pad_before_layer, 42,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_42_pad_before_chain,
  NULL, &conv2d_42_layer, AI_STATIC, 
  .value = &conv2d_42_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_41_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_41_weights, &conv2d_41_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_41_scratch0, &conv2d_41_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_41_layer, 41,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_41_chain,
  NULL, &conv2d_42_pad_before_layer, AI_STATIC, 
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
  eltwise_40_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_36_output, &conv2d_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_40_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_40_layer, 40,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_39_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_39_weights, &conv2d_39_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_39_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_39_layer, 39,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_39_chain,
  NULL, &eltwise_40_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_38_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_38_weights, &conv2d_38_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_scratch0, &conv2d_38_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_38_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_38_chain,
  NULL, &conv2d_39_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_38_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_38_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_38_pad_before_value_data, conv2d_38_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_38_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_38_pad_before_layer, 38,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_38_pad_before_chain,
  NULL, &conv2d_38_layer, AI_STATIC, 
  .value = &conv2d_38_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
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
  NULL, &conv2d_38_pad_before_layer, AI_STATIC, 
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_32_output, &conv2d_35_output),
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_34_output),
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
  conv2d_34_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_34_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_34_weights, &conv2d_34_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_34_scratch0, &conv2d_34_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_34_layer, 34,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_34_chain,
  NULL, &conv2d_35_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_34_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_34_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_34_pad_before_value_data, conv2d_34_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_34_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_34_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_34_pad_before_layer, 34,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_34_pad_before_chain,
  NULL, &conv2d_34_layer, AI_STATIC, 
  .value = &conv2d_34_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_33_weights, &conv2d_33_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_33_scratch0, &conv2d_33_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_33_layer, 33,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_33_chain,
  NULL, &conv2d_34_pad_before_layer, AI_STATIC, 
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
  eltwise_32_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_output, &conv2d_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_32_layer, 32,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_32_chain,
  NULL, &conv2d_33_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_30_weights, &conv2d_30_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_30_scratch0, &conv2d_30_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_30_chain,
  NULL, &conv2d_31_layer, AI_STATIC, 
  .groups = 96, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_30_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_30_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_30_pad_before_value_data, conv2d_30_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_30_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_pad_before_layer, 30,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_30_pad_before_chain,
  NULL, &conv2d_30_layer, AI_STATIC, 
  .value = &conv2d_30_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_29_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_29_weights, &conv2d_29_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_29_scratch0, &conv2d_29_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_29_layer, 29,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_29_chain,
  NULL, &conv2d_30_pad_before_layer, AI_STATIC, 
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
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_28_chain,
  NULL, &conv2d_29_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_27_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_27_weights, &conv2d_27_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_27_scratch0, &conv2d_27_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_27_layer, 26,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_27_chain,
  NULL, &conv2d_28_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_27_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_27_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_27_pad_before_value_data, conv2d_27_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_27_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_27_pad_before_layer, 27,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_27_pad_before_chain,
  NULL, &conv2d_27_layer, AI_STATIC, 
  .value = &conv2d_27_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_25_weights, &conv2d_25_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_25_scratch0, &conv2d_25_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_25_layer, 25,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_25_chain,
  NULL, &conv2d_27_pad_before_layer, AI_STATIC, 
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
  eltwise_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_20_output, &conv2d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_24_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_24_layer, 24,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_24_chain,
  NULL, &conv2d_25_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_23_weights, &conv2d_23_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_23_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_23_layer, 23,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_23_chain,
  NULL, &eltwise_24_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_22_scratch0, &conv2d_22_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 22,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_22_chain,
  NULL, &conv2d_23_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_22_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_22_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_22_pad_before_value_data, conv2d_22_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_pad_before_layer, 22,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_22_pad_before_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .value = &conv2d_22_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_21_chain,
  NULL, &conv2d_22_pad_before_layer, AI_STATIC, 
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
  eltwise_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_16_output, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_20_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_20_layer, 20,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_20_chain,
  NULL, &conv2d_21_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 19,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_19_chain,
  NULL, &eltwise_20_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_18_weights, &conv2d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_18_scratch0, &conv2d_18_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_layer, 18,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_18_chain,
  NULL, &conv2d_19_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_18_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_18_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_18_pad_before_value_data, conv2d_18_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_pad_before_layer, 18,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_18_pad_before_chain,
  NULL, &conv2d_18_layer, AI_STATIC, 
  .value = &conv2d_18_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_17_weights, &conv2d_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_17_scratch0, &conv2d_17_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_17_layer, 17,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_17_chain,
  NULL, &conv2d_18_pad_before_layer, AI_STATIC, 
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
  NULL, &conv2d_17_layer, AI_STATIC, 
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
  conv2d_15_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_15_chain,
  NULL, &conv2d_16_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
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
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
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
  .pads = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_scratch0, &conv2d_13_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 13,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_13_chain,
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
  eltwise_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_8_output, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_12_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_12_layer, 12,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_12_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_11_chain,
  NULL, &eltwise_12_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_10_scratch0, &conv2d_10_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_10_chain,
  NULL, &conv2d_11_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_10_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_10_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_10_pad_before_value_data, conv2d_10_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_pad_before_layer, 10,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_10_pad_before_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .value = &conv2d_10_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_9_weights, &conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_9_scratch0, &conv2d_9_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_9_layer, 9,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_9_chain,
  NULL, &conv2d_10_pad_before_layer, AI_STATIC, 
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
  conv2d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_8_weights, &conv2d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_8_layer, 8,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_8_chain,
  NULL, &conv2d_9_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_7_weights, &conv2d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_7_scratch0, &conv2d_7_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_7_layer, 6,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_7_chain,
  NULL, &conv2d_8_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_7_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_7_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_7_pad_before_value_data, conv2d_7_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_7_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_7_pad_before_layer, 7,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_7_pad_before_chain,
  NULL, &conv2d_7_layer, AI_STATIC, 
  .value = &conv2d_7_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_5_scratch0, &conv2d_5_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_5_chain,
  NULL, &conv2d_7_pad_before_layer, AI_STATIC, 
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
  eltwise_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_output, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_4_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_4_layer, 4,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_4_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_3_chain,
  NULL, &eltwise_4_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
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
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_2_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .groups = 8, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
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
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 253904, 1, 1),
    253904, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 621488, 1, 1),
    621488, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_71_output),
  &conversion_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 253904, 1, 1),
      253904, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 621488, 1, 1),
      621488, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_71_output),
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
    
    serving_default_input_10_output_array.data = AI_PTR(g_network_activations_map[0] + 269092);
    serving_default_input_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 269092);
    
    conversion_0_output_array.data = AI_PTR(g_network_activations_map[0] + 269088);
    conversion_0_output_array.data_start = AI_PTR(g_network_activations_map[0] + 269088);
    
    conv2d_1_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 419620);
    conv2d_1_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 419620);
    
    conv2d_1_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 420272);
    conv2d_1_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 420272);
    
    conv2d_1_output_array.data = AI_PTR(g_network_activations_map[0] + 420272);
    conv2d_1_output_array.data_start = AI_PTR(g_network_activations_map[0] + 420272);
    
    conv2d_2_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 316304);
    conv2d_2_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 316304);
    
    conv2d_2_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 520624);
    conv2d_2_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 520624);
    
    conv2d_2_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 315408);
    conv2d_2_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 315408);
    
    conv2d_2_output_array.data = AI_PTR(g_network_activations_map[0] + 315408);
    conv2d_2_output_array.data_start = AI_PTR(g_network_activations_map[0] + 315408);
    
    conv2d_3_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 520808);
    conv2d_3_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 520808);
    
    conv2d_3_output_array.data = AI_PTR(g_network_activations_map[0] + 215056);
    conv2d_3_output_array.data_start = AI_PTR(g_network_activations_map[0] + 215056);
    
    eltwise_4_output_array.data = AI_PTR(g_network_activations_map[0] + 520624);
    eltwise_4_output_array.data_start = AI_PTR(g_network_activations_map[0] + 520624);
    
    conv2d_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 620976);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 620976);
    
    conv2d_5_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 13488);
    conv2d_5_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 13488);
    
    conv2d_5_output_array.data = AI_PTR(g_network_activations_map[0] + 13488);
    conv2d_5_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13488);
    
    conv2d_7_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 2688);
    conv2d_7_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2688);
    
    conv2d_7_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 619708);
    conv2d_7_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 619708);
    
    conv2d_7_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_7_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_7_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_7_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_8_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 150528);
    conv2d_8_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 150528);
    
    conv2d_8_output_array.data = AI_PTR(g_network_activations_map[0] + 150800);
    conv2d_8_output_array.data_start = AI_PTR(g_network_activations_map[0] + 150800);
    
    conv2d_9_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_9_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_9_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 175888);
    conv2d_9_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 175888);
    
    conv2d_9_output_array.data = AI_PTR(g_network_activations_map[0] + 326416);
    conv2d_9_output_array.data_start = AI_PTR(g_network_activations_map[0] + 326416);
    
    conv2d_10_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 315472);
    conv2d_10_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 315472);
    
    conv2d_10_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_10_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_10_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 312784);
    conv2d_10_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 312784);
    
    conv2d_10_output_array.data = AI_PTR(g_network_activations_map[0] + 312784);
    conv2d_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 312784);
    
    conv2d_11_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_11_output_array.data = AI_PTR(g_network_activations_map[0] + 272);
    conv2d_11_output_array.data_start = AI_PTR(g_network_activations_map[0] + 272);
    
    eltwise_12_output_array.data = AI_PTR(g_network_activations_map[0] + 25360);
    eltwise_12_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25360);
    
    conv2d_13_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_13_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 50448);
    conv2d_13_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 50448);
    
    conv2d_13_output_array.data = AI_PTR(g_network_activations_map[0] + 200976);
    conv2d_13_output_array.data_start = AI_PTR(g_network_activations_map[0] + 200976);
    
    conv2d_15_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_15_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_15_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 155952);
    conv2d_15_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 155952);
    
    conv2d_15_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 157732);
    conv2d_15_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 157732);
    
    conv2d_15_output_array.data = AI_PTR(g_network_activations_map[0] + 195364);
    conv2d_15_output_array.data_start = AI_PTR(g_network_activations_map[0] + 195364);
    
    conv2d_16_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_16_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_16_output_array.data = AI_PTR(g_network_activations_map[0] + 272);
    conv2d_16_output_array.data_start = AI_PTR(g_network_activations_map[0] + 272);
    
    conv2d_17_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6544);
    conv2d_17_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6544);
    
    conv2d_17_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 7056);
    conv2d_17_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 7056);
    
    conv2d_17_output_array.data = AI_PTR(g_network_activations_map[0] + 44688);
    conv2d_17_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44688);
    
    conv2d_18_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 82320);
    conv2d_18_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 82320);
    
    conv2d_18_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6544);
    conv2d_18_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6544);
    
    conv2d_18_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8324);
    conv2d_18_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8324);
    
    conv2d_18_output_array.data = AI_PTR(g_network_activations_map[0] + 125520);
    conv2d_18_output_array.data_start = AI_PTR(g_network_activations_map[0] + 125520);
    
    conv2d_19_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_19_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_19_output_array.data = AI_PTR(g_network_activations_map[0] + 6544);
    conv2d_19_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6544);
    
    eltwise_20_output_array.data = AI_PTR(g_network_activations_map[0] + 12816);
    eltwise_20_output_array.data_start = AI_PTR(g_network_activations_map[0] + 12816);
    
    conv2d_21_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_21_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_21_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19088);
    conv2d_21_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19088);
    
    conv2d_21_output_array.data = AI_PTR(g_network_activations_map[0] + 56720);
    conv2d_21_output_array.data_start = AI_PTR(g_network_activations_map[0] + 56720);
    
    conv2d_22_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 94352);
    conv2d_22_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 94352);
    
    conv2d_22_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_22_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_22_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19088);
    conv2d_22_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19088);
    
    conv2d_22_output_array.data = AI_PTR(g_network_activations_map[0] + 56720);
    conv2d_22_output_array.data_start = AI_PTR(g_network_activations_map[0] + 56720);
    
    conv2d_23_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_23_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_23_output_array.data = AI_PTR(g_network_activations_map[0] + 272);
    conv2d_23_output_array.data_start = AI_PTR(g_network_activations_map[0] + 272);
    
    eltwise_24_output_array.data = AI_PTR(g_network_activations_map[0] + 6544);
    eltwise_24_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6544);
    
    conv2d_25_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_25_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_25_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 12816);
    conv2d_25_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 12816);
    
    conv2d_25_output_array.data = AI_PTR(g_network_activations_map[0] + 50448);
    conv2d_25_output_array.data_start = AI_PTR(g_network_activations_map[0] + 50448);
    
    conv2d_27_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_27_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_27_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 40368);
    conv2d_27_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 40368);
    
    conv2d_27_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 42148);
    conv2d_27_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 42148);
    
    conv2d_27_output_array.data = AI_PTR(g_network_activations_map[0] + 51556);
    conv2d_27_output_array.data_start = AI_PTR(g_network_activations_map[0] + 51556);
    
    conv2d_28_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_28_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_28_output_array.data = AI_PTR(g_network_activations_map[0] + 352);
    conv2d_28_output_array.data_start = AI_PTR(g_network_activations_map[0] + 352);
    
    conv2d_29_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 3488);
    conv2d_29_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 3488);
    
    conv2d_29_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_29_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_29_output_array.data = AI_PTR(g_network_activations_map[0] + 23328);
    conv2d_29_output_array.data_start = AI_PTR(g_network_activations_map[0] + 23328);
    
    conv2d_30_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 42144);
    conv2d_30_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 42144);
    
    conv2d_30_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 3488);
    conv2d_30_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 3488);
    
    conv2d_30_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 7044);
    conv2d_30_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 7044);
    
    conv2d_30_output_array.data = AI_PTR(g_network_activations_map[0] + 66720);
    conv2d_30_output_array.data_start = AI_PTR(g_network_activations_map[0] + 66720);
    
    conv2d_31_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 3488);
    conv2d_31_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 3488);
    
    conv2d_31_output_array.data = AI_PTR(g_network_activations_map[0] + 4032);
    conv2d_31_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4032);
    
    eltwise_32_output_array.data = AI_PTR(g_network_activations_map[0] + 7168);
    eltwise_32_output_array.data_start = AI_PTR(g_network_activations_map[0] + 7168);
    
    conv2d_33_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_33_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_33_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10304);
    conv2d_33_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10304);
    
    conv2d_33_output_array.data = AI_PTR(g_network_activations_map[0] + 29120);
    conv2d_33_output_array.data_start = AI_PTR(g_network_activations_map[0] + 29120);
    
    conv2d_34_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 47936);
    conv2d_34_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 47936);
    
    conv2d_34_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_34_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_34_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10304);
    conv2d_34_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10304);
    
    conv2d_34_output_array.data = AI_PTR(g_network_activations_map[0] + 29120);
    conv2d_34_output_array.data_start = AI_PTR(g_network_activations_map[0] + 29120);
    
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
    
    conv2d_37_output_array.data = AI_PTR(g_network_activations_map[0] + 25632);
    conv2d_37_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25632);
    
    conv2d_38_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 44448);
    conv2d_38_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44448);
    
    conv2d_38_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_38_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_38_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6816);
    conv2d_38_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6816);
    
    conv2d_38_output_array.data = AI_PTR(g_network_activations_map[0] + 25632);
    conv2d_38_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25632);
    
    conv2d_39_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_39_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_39_output_array.data = AI_PTR(g_network_activations_map[0] + 544);
    conv2d_39_output_array.data_start = AI_PTR(g_network_activations_map[0] + 544);
    
    eltwise_40_output_array.data = AI_PTR(g_network_activations_map[0] + 6816);
    eltwise_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6816);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_41_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 9952);
    conv2d_41_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 9952);
    
    conv2d_41_output_array.data = AI_PTR(g_network_activations_map[0] + 28768);
    conv2d_41_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28768);
    
    conv2d_42_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_42_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_42_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 24576);
    conv2d_42_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 24576);
    
    conv2d_42_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 28132);
    conv2d_42_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 28132);
    
    conv2d_42_output_array.data = AI_PTR(g_network_activations_map[0] + 46948);
    conv2d_42_output_array.data_start = AI_PTR(g_network_activations_map[0] + 46948);
    
    conv2d_43_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_43_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_43_output_array.data = AI_PTR(g_network_activations_map[0] + 624);
    conv2d_43_output_array.data_start = AI_PTR(g_network_activations_map[0] + 624);
    
    conv2d_44_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 5328);
    conv2d_44_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 5328);
    
    conv2d_44_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6864);
    conv2d_44_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6864);
    
    conv2d_44_output_array.data = AI_PTR(g_network_activations_map[0] + 35088);
    conv2d_44_output_array.data_start = AI_PTR(g_network_activations_map[0] + 35088);
    
    conv2d_45_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 63312);
    conv2d_45_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 63312);
    
    conv2d_45_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 5328);
    conv2d_45_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 5328);
    
    conv2d_45_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10660);
    conv2d_45_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10660);
    
    conv2d_45_output_array.data = AI_PTR(g_network_activations_map[0] + 100176);
    conv2d_45_output_array.data_start = AI_PTR(g_network_activations_map[0] + 100176);
    
    conv2d_46_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 5328);
    conv2d_46_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 5328);
    
    conv2d_46_output_array.data = AI_PTR(g_network_activations_map[0] + 6144);
    conv2d_46_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6144);
    
    eltwise_47_output_array.data = AI_PTR(g_network_activations_map[0] + 10848);
    eltwise_47_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10848);
    
    conv2d_48_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_48_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_48_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 15552);
    conv2d_48_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 15552);
    
    conv2d_48_output_array.data = AI_PTR(g_network_activations_map[0] + 43776);
    conv2d_48_output_array.data_start = AI_PTR(g_network_activations_map[0] + 43776);
    
    conv2d_49_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 72000);
    conv2d_49_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 72000);
    
    conv2d_49_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_49_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_49_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 15552);
    conv2d_49_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 15552);
    
    conv2d_49_output_array.data = AI_PTR(g_network_activations_map[0] + 43776);
    conv2d_49_output_array.data_start = AI_PTR(g_network_activations_map[0] + 43776);
    
    conv2d_50_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_50_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_50_output_array.data = AI_PTR(g_network_activations_map[0] + 816);
    conv2d_50_output_array.data_start = AI_PTR(g_network_activations_map[0] + 816);
    
    eltwise_51_output_array.data = AI_PTR(g_network_activations_map[0] + 5520);
    eltwise_51_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5520);
    
    conv2d_52_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_52_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_52_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10224);
    conv2d_52_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10224);
    
    conv2d_52_output_array.data = AI_PTR(g_network_activations_map[0] + 38448);
    conv2d_52_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38448);
    
    conv2d_54_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_54_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_54_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 32400);
    conv2d_54_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 32400);
    
    conv2d_54_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 37732);
    conv2d_54_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 37732);
    
    conv2d_54_output_array.data = AI_PTR(g_network_activations_map[0] + 44788);
    conv2d_54_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44788);
    
    conv2d_55_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_55_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_55_output_array.data = AI_PTR(g_network_activations_map[0] + 976);
    conv2d_55_output_array.data_start = AI_PTR(g_network_activations_map[0] + 976);
    
    conv2d_56_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 2936);
    conv2d_56_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 2936);
    
    conv2d_56_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 5496);
    conv2d_56_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 5496);
    
    conv2d_56_output_array.data = AI_PTR(g_network_activations_map[0] + 17256);
    conv2d_56_output_array.data_start = AI_PTR(g_network_activations_map[0] + 17256);
    
    conv2d_57_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 29016);
    conv2d_57_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 29016);
    
    conv2d_57_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 2936);
    conv2d_57_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 2936);
    
    conv2d_57_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 11820);
    conv2d_57_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 11820);
    
    conv2d_57_output_array.data = AI_PTR(g_network_activations_map[0] + 48456);
    conv2d_57_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48456);
    
    conv2d_58_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 2936);
    conv2d_58_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 2936);
    
    conv2d_58_output_array.data = AI_PTR(g_network_activations_map[0] + 4296);
    conv2d_58_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4296);
    
    eltwise_59_output_array.data = AI_PTR(g_network_activations_map[0] + 6256);
    eltwise_59_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6256);
    
    conv2d_60_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_60_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_60_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8216);
    conv2d_60_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8216);
    
    conv2d_60_output_array.data = AI_PTR(g_network_activations_map[0] + 19976);
    conv2d_60_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19976);
    
    conv2d_61_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 31736);
    conv2d_61_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 31736);
    
    conv2d_61_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 8216);
    conv2d_61_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 8216);
    
    conv2d_61_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 17100);
    conv2d_61_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 17100);
    
    conv2d_61_output_array.data = AI_PTR(g_network_activations_map[0] + 51176);
    conv2d_61_output_array.data_start = AI_PTR(g_network_activations_map[0] + 51176);
    
    conv2d_62_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_62_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_62_output_array.data = AI_PTR(g_network_activations_map[0] + 1360);
    conv2d_62_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1360);
    
    eltwise_63_output_array.data = AI_PTR(g_network_activations_map[0] + 3320);
    eltwise_63_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3320);
    
    conv2d_64_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_64_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_64_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 5280);
    conv2d_64_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 5280);
    
    conv2d_64_output_array.data = AI_PTR(g_network_activations_map[0] + 17040);
    conv2d_64_output_array.data_start = AI_PTR(g_network_activations_map[0] + 17040);
    
    conv2d_65_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 28800);
    conv2d_65_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28800);
    
    conv2d_65_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_65_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_65_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8884);
    conv2d_65_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8884);
    
    conv2d_65_output_array.data = AI_PTR(g_network_activations_map[0] + 48240);
    conv2d_65_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48240);
    
    conv2d_66_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_66_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_66_output_array.data = AI_PTR(g_network_activations_map[0] + 1760);
    conv2d_66_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1760);
    
    conv2d_67_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 5680);
    conv2d_67_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 5680);
    
    conv2d_67_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 18800);
    conv2d_67_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 18800);
    
    conv2d_67_output_array.data = AI_PTR(g_network_activations_map[0] + 81520);
    conv2d_67_output_array.data_start = AI_PTR(g_network_activations_map[0] + 81520);
    
    pool_68_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_68_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    gemm_69_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1280);
    gemm_69_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1280);
    
    gemm_69_output_array.data = AI_PTR(g_network_activations_map[0] + 3840);
    gemm_69_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3840);
    
    nl_70_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_70_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_70_output_array.data = AI_PTR(g_network_activations_map[0] + 16);
    nl_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16);
    
    conversion_71_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conversion_71_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
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
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_network_weights_map[0] + 0);
    conv2d_1_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 0);
    
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_network_weights_map[0] + 216);
    conv2d_1_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 216);
    
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(g_network_weights_map[0] + 248);
    conv2d_2_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 248);
    
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(g_network_weights_map[0] + 320);
    conv2d_2_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 320);
    
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(g_network_weights_map[0] + 352);
    conv2d_3_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 352);
    
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(g_network_weights_map[0] + 416);
    conv2d_3_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 416);
    
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(g_network_weights_map[0] + 448);
    conv2d_5_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 448);
    
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(g_network_weights_map[0] + 832);
    conv2d_5_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 832);
    
    conv2d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_weights_array.data = AI_PTR(g_network_weights_map[0] + 1024);
    conv2d_7_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1024);
    
    conv2d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_bias_array.data = AI_PTR(g_network_weights_map[0] + 1456);
    conv2d_7_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1456);
    
    conv2d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_weights_array.data = AI_PTR(g_network_weights_map[0] + 1648);
    conv2d_8_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1648);
    
    conv2d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_bias_array.data = AI_PTR(g_network_weights_map[0] + 2032);
    conv2d_8_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 2032);
    
    conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_weights_array.data = AI_PTR(g_network_weights_map[0] + 2064);
    conv2d_9_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2064);
    
    conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_bias_array.data = AI_PTR(g_network_weights_map[0] + 2448);
    conv2d_9_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 2448);
    
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(g_network_weights_map[0] + 2640);
    conv2d_10_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2640);
    
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(g_network_weights_map[0] + 3072);
    conv2d_10_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3072);
    
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(g_network_weights_map[0] + 3264);
    conv2d_11_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3264);
    
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(g_network_weights_map[0] + 3648);
    conv2d_11_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3648);
    
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(g_network_weights_map[0] + 3680);
    conv2d_13_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3680);
    
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(g_network_weights_map[0] + 4064);
    conv2d_13_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 4064);
    
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(g_network_weights_map[0] + 4256);
    conv2d_15_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 4256);
    
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(g_network_weights_map[0] + 4688);
    conv2d_15_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 4688);
    
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(g_network_weights_map[0] + 4880);
    conv2d_16_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 4880);
    
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(g_network_weights_map[0] + 5264);
    conv2d_16_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5264);
    
    conv2d_17_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_weights_array.data = AI_PTR(g_network_weights_map[0] + 5296);
    conv2d_17_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5296);
    
    conv2d_17_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_17_bias_array.data = AI_PTR(g_network_weights_map[0] + 5680);
    conv2d_17_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5680);
    
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(g_network_weights_map[0] + 5872);
    conv2d_18_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5872);
    
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(g_network_weights_map[0] + 6304);
    conv2d_18_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 6304);
    
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(g_network_weights_map[0] + 6496);
    conv2d_19_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 6496);
    
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(g_network_weights_map[0] + 6880);
    conv2d_19_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 6880);
    
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(g_network_weights_map[0] + 6912);
    conv2d_21_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 6912);
    
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(g_network_weights_map[0] + 7296);
    conv2d_21_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 7296);
    
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(g_network_weights_map[0] + 7488);
    conv2d_22_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7488);
    
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(g_network_weights_map[0] + 7920);
    conv2d_22_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 7920);
    
    conv2d_23_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_23_weights_array.data = AI_PTR(g_network_weights_map[0] + 8112);
    conv2d_23_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 8112);
    
    conv2d_23_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_23_bias_array.data = AI_PTR(g_network_weights_map[0] + 8496);
    conv2d_23_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 8496);
    
    conv2d_25_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_25_weights_array.data = AI_PTR(g_network_weights_map[0] + 8528);
    conv2d_25_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 8528);
    
    conv2d_25_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_25_bias_array.data = AI_PTR(g_network_weights_map[0] + 8912);
    conv2d_25_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 8912);
    
    conv2d_27_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_weights_array.data = AI_PTR(g_network_weights_map[0] + 9104);
    conv2d_27_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9104);
    
    conv2d_27_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_bias_array.data = AI_PTR(g_network_weights_map[0] + 9536);
    conv2d_27_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9536);
    
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(g_network_weights_map[0] + 9728);
    conv2d_28_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9728);
    
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(g_network_weights_map[0] + 10496);
    conv2d_28_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 10496);
    
    conv2d_29_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_29_weights_array.data = AI_PTR(g_network_weights_map[0] + 10560);
    conv2d_29_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 10560);
    
    conv2d_29_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_29_bias_array.data = AI_PTR(g_network_weights_map[0] + 12096);
    conv2d_29_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 12096);
    
    conv2d_30_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_weights_array.data = AI_PTR(g_network_weights_map[0] + 12480);
    conv2d_30_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 12480);
    
    conv2d_30_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_bias_array.data = AI_PTR(g_network_weights_map[0] + 13344);
    conv2d_30_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 13344);
    
    conv2d_31_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_weights_array.data = AI_PTR(g_network_weights_map[0] + 13728);
    conv2d_31_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 13728);
    
    conv2d_31_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_bias_array.data = AI_PTR(g_network_weights_map[0] + 15264);
    conv2d_31_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 15264);
    
    conv2d_33_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_33_weights_array.data = AI_PTR(g_network_weights_map[0] + 15328);
    conv2d_33_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 15328);
    
    conv2d_33_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_33_bias_array.data = AI_PTR(g_network_weights_map[0] + 16864);
    conv2d_33_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 16864);
    
    conv2d_34_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_34_weights_array.data = AI_PTR(g_network_weights_map[0] + 17248);
    conv2d_34_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 17248);
    
    conv2d_34_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_34_bias_array.data = AI_PTR(g_network_weights_map[0] + 18112);
    conv2d_34_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 18112);
    
    conv2d_35_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_weights_array.data = AI_PTR(g_network_weights_map[0] + 18496);
    conv2d_35_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 18496);
    
    conv2d_35_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_bias_array.data = AI_PTR(g_network_weights_map[0] + 20032);
    conv2d_35_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 20032);
    
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(g_network_weights_map[0] + 20096);
    conv2d_37_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 20096);
    
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(g_network_weights_map[0] + 21632);
    conv2d_37_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 21632);
    
    conv2d_38_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_weights_array.data = AI_PTR(g_network_weights_map[0] + 22016);
    conv2d_38_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 22016);
    
    conv2d_38_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_bias_array.data = AI_PTR(g_network_weights_map[0] + 22880);
    conv2d_38_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 22880);
    
    conv2d_39_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_39_weights_array.data = AI_PTR(g_network_weights_map[0] + 23264);
    conv2d_39_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 23264);
    
    conv2d_39_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_39_bias_array.data = AI_PTR(g_network_weights_map[0] + 24800);
    conv2d_39_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 24800);
    
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(g_network_weights_map[0] + 24864);
    conv2d_41_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 24864);
    
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(g_network_weights_map[0] + 26400);
    conv2d_41_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 26400);
    
    conv2d_42_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_42_weights_array.data = AI_PTR(g_network_weights_map[0] + 26784);
    conv2d_42_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 26784);
    
    conv2d_42_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_42_bias_array.data = AI_PTR(g_network_weights_map[0] + 27648);
    conv2d_42_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 27648);
    
    conv2d_43_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_43_weights_array.data = AI_PTR(g_network_weights_map[0] + 28032);
    conv2d_43_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 28032);
    
    conv2d_43_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_43_bias_array.data = AI_PTR(g_network_weights_map[0] + 30336);
    conv2d_43_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 30336);
    
    conv2d_44_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_44_weights_array.data = AI_PTR(g_network_weights_map[0] + 30432);
    conv2d_44_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 30432);
    
    conv2d_44_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_44_bias_array.data = AI_PTR(g_network_weights_map[0] + 33888);
    conv2d_44_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 33888);
    
    conv2d_45_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_weights_array.data = AI_PTR(g_network_weights_map[0] + 34464);
    conv2d_45_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 34464);
    
    conv2d_45_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_bias_array.data = AI_PTR(g_network_weights_map[0] + 35760);
    conv2d_45_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 35760);
    
    conv2d_46_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_46_weights_array.data = AI_PTR(g_network_weights_map[0] + 36336);
    conv2d_46_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 36336);
    
    conv2d_46_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_46_bias_array.data = AI_PTR(g_network_weights_map[0] + 39792);
    conv2d_46_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 39792);
    
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(g_network_weights_map[0] + 39888);
    conv2d_48_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 39888);
    
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(g_network_weights_map[0] + 43344);
    conv2d_48_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 43344);
    
    conv2d_49_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_49_weights_array.data = AI_PTR(g_network_weights_map[0] + 43920);
    conv2d_49_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 43920);
    
    conv2d_49_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_49_bias_array.data = AI_PTR(g_network_weights_map[0] + 45216);
    conv2d_49_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 45216);
    
    conv2d_50_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_weights_array.data = AI_PTR(g_network_weights_map[0] + 45792);
    conv2d_50_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 45792);
    
    conv2d_50_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_bias_array.data = AI_PTR(g_network_weights_map[0] + 49248);
    conv2d_50_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 49248);
    
    conv2d_52_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_52_weights_array.data = AI_PTR(g_network_weights_map[0] + 49344);
    conv2d_52_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 49344);
    
    conv2d_52_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_52_bias_array.data = AI_PTR(g_network_weights_map[0] + 52800);
    conv2d_52_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 52800);
    
    conv2d_54_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_54_weights_array.data = AI_PTR(g_network_weights_map[0] + 53376);
    conv2d_54_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 53376);
    
    conv2d_54_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_54_bias_array.data = AI_PTR(g_network_weights_map[0] + 54672);
    conv2d_54_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 54672);
    
    conv2d_55_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_weights_array.data = AI_PTR(g_network_weights_map[0] + 55248);
    conv2d_55_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 55248);
    
    conv2d_55_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_bias_array.data = AI_PTR(g_network_weights_map[0] + 61008);
    conv2d_55_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 61008);
    
    conv2d_56_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_56_weights_array.data = AI_PTR(g_network_weights_map[0] + 61168);
    conv2d_56_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 61168);
    
    conv2d_56_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_56_bias_array.data = AI_PTR(g_network_weights_map[0] + 70768);
    conv2d_56_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 70768);
    
    conv2d_57_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_weights_array.data = AI_PTR(g_network_weights_map[0] + 71728);
    conv2d_57_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 71728);
    
    conv2d_57_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_bias_array.data = AI_PTR(g_network_weights_map[0] + 73888);
    conv2d_57_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 73888);
    
    conv2d_58_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_weights_array.data = AI_PTR(g_network_weights_map[0] + 74848);
    conv2d_58_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 74848);
    
    conv2d_58_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_bias_array.data = AI_PTR(g_network_weights_map[0] + 84448);
    conv2d_58_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 84448);
    
    conv2d_60_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_weights_array.data = AI_PTR(g_network_weights_map[0] + 84608);
    conv2d_60_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 84608);
    
    conv2d_60_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_bias_array.data = AI_PTR(g_network_weights_map[0] + 94208);
    conv2d_60_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 94208);
    
    conv2d_61_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_weights_array.data = AI_PTR(g_network_weights_map[0] + 95168);
    conv2d_61_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 95168);
    
    conv2d_61_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_bias_array.data = AI_PTR(g_network_weights_map[0] + 97328);
    conv2d_61_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 97328);
    
    conv2d_62_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_62_weights_array.data = AI_PTR(g_network_weights_map[0] + 98288);
    conv2d_62_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 98288);
    
    conv2d_62_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_62_bias_array.data = AI_PTR(g_network_weights_map[0] + 107888);
    conv2d_62_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 107888);
    
    conv2d_64_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_64_weights_array.data = AI_PTR(g_network_weights_map[0] + 108048);
    conv2d_64_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 108048);
    
    conv2d_64_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_64_bias_array.data = AI_PTR(g_network_weights_map[0] + 117648);
    conv2d_64_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 117648);
    
    conv2d_65_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_weights_array.data = AI_PTR(g_network_weights_map[0] + 118608);
    conv2d_65_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 118608);
    
    conv2d_65_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_bias_array.data = AI_PTR(g_network_weights_map[0] + 120768);
    conv2d_65_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 120768);
    
    conv2d_66_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_66_weights_array.data = AI_PTR(g_network_weights_map[0] + 121728);
    conv2d_66_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 121728);
    
    conv2d_66_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_66_bias_array.data = AI_PTR(g_network_weights_map[0] + 140928);
    conv2d_66_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 140928);
    
    conv2d_67_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_weights_array.data = AI_PTR(g_network_weights_map[0] + 141248);
    conv2d_67_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 141248);
    
    conv2d_67_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_bias_array.data = AI_PTR(g_network_weights_map[0] + 243648);
    conv2d_67_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 243648);
    
    gemm_69_weights_array.format |= AI_FMT_FLAG_CONST;
    gemm_69_weights_array.data = AI_PTR(g_network_weights_map[0] + 248768);
    gemm_69_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 248768);
    
    gemm_69_bias_array.format |= AI_FMT_FLAG_CONST;
    gemm_69_bias_array.data = AI_PTR(g_network_weights_map[0] + 253888);
    gemm_69_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 253888);
    
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
      
      .n_macc            = 36456328,
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
      
      .n_macc            = 36456328,
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

