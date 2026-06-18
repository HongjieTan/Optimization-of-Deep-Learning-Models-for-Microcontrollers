/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Jan  5 12:31:48 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "f6294746b0a58264c5ab1f7ba8852275"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sun Jan  5 12:31:48 2025"

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
  NULL, NULL, 10, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conversion_71_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 10, AI_STATIC)
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
  NULL, NULL, 10, AI_STATIC)
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
  NULL, NULL, 12800, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 10, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.051037874072790146f),
    AI_PACK_INTQ_ZP(-3)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13032600283622742f),
    AI_PACK_INTQ_ZP(-2)))

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
    AI_PACK_INTQ_SCALE(0.05847558379173279f),
    AI_PACK_INTQ_ZP(7)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1392112672328949f),
    AI_PACK_INTQ_ZP(7)))

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
    AI_PACK_INTQ_SCALE(0.07674703001976013f),
    AI_PACK_INTQ_ZP(2)))

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
    AI_PACK_INTQ_SCALE(0.054654981940984726f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10404577851295471f),
    AI_PACK_INTQ_ZP(2)))

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
    AI_PACK_INTQ_SCALE(0.053517699241638184f),
    AI_PACK_INTQ_ZP(8)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.133852019906044f),
    AI_PACK_INTQ_ZP(12)))

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
    AI_PACK_INTQ_SCALE(0.060643281787633896f),
    AI_PACK_INTQ_ZP(2)))

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
    AI_PACK_INTQ_SCALE(0.06411226093769073f),
    AI_PACK_INTQ_ZP(3)))

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
    AI_PACK_INTQ_SCALE(0.08509092032909393f),
    AI_PACK_INTQ_ZP(0)))

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
    AI_PACK_INTQ_SCALE(0.07368966192007065f),
    AI_PACK_INTQ_ZP(-14)))

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
    AI_PACK_INTQ_SCALE(0.1052171140909195f),
    AI_PACK_INTQ_ZP(0)))

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
    AI_PACK_INTQ_SCALE(0.06394056230783463f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.011991561390459538f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.34433725476264954f),
    AI_PACK_INTQ_ZP(23)))

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
    AI_PACK_INTQ_SCALE(0.006711988244205713f, 0.005969906225800514f, 0.009367523714900017f, 0.007331143133342266f, 0.005280000157654285f, 0.005325384438037872f, 0.006741249468177557f, 0.007277183700352907f),
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
    AI_PACK_INTQ_SCALE(0.016855088993906975f, 0.031465575098991394f, 0.014692256227135658f, 0.012110060080885887f, 0.015639783814549446f, 0.015024480409920216f, 0.009288333356380463f, 0.018692634999752045f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005362599156796932f, 0.009035312570631504f, 0.005994370672851801f, 0.004817012697458267f, 0.005715503357350826f, 0.006917837541550398f, 0.008451108820736408f, 0.008541518822312355f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0052644372917711735f, 0.006047395057976246f, 0.005640245042741299f, 0.005762800574302673f, 0.003647568868473172f, 0.0038312252145260572f, 0.004734332207590342f, 0.0034099852200597525f, 0.007145150564610958f, 0.004379044286906719f, 0.002630130620673299f, 0.0038779641035944223f, 0.0035328741651028395f, 0.00401609530672431f, 0.004592263605445623f, 0.0046085999347269535f, 0.003167295129969716f, 0.003165933769196272f, 0.003818247467279434f, 0.005884695798158646f, 0.006919437553733587f, 0.004632079042494297f, 0.007551624905318022f, 0.006364454515278339f, 0.006010578945279121f, 0.00576530396938324f, 0.004438610281795263f, 0.0055833482183516026f, 0.006280198693275452f, 0.0030507396440953016f, 0.006270015612244606f, 0.004996364936232567f, 0.0029625396709889174f, 0.003867155173793435f, 0.006315911188721657f, 0.0038889236748218536f, 0.003967604134231806f, 0.005049528554081917f, 0.0045002056285738945f, 0.004851812031120062f, 0.0028071890119463205f, 0.004840371198952198f, 0.0073659298941493034f, 0.004291595425456762f, 0.008278539404273033f, 0.005624502431601286f, 0.006363723427057266f, 0.004666813649237156f),
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
    AI_PACK_INTQ_SCALE(0.008055910468101501f, 0.008448359556496143f, 0.008413990028202534f, 0.005471129901707172f, 0.004522249568253756f, 0.012531604617834091f, 0.013781090267002583f, 0.007559950463473797f, 0.006254649721086025f, 0.003946321085095406f, 0.007652100641280413f, 0.016399342566728592f, 0.012310061603784561f, 0.005646658129990101f, 0.008474480360746384f, 0.009999447502195835f, 0.007070518098771572f, 0.005290979985147715f, 0.006170179694890976f, 0.006616321392357349f, 0.011607051827013493f, 0.005485392175614834f, 0.005800779443234205f, 0.0088390177115798f, 0.007146632764488459f, 0.007660187780857086f, 0.006412789691239595f, 0.012423650361597538f, 0.005572671070694923f, 0.008037198334932327f, 0.006571917794644833f, 0.009809977374970913f, 0.013605048879981041f, 0.006825776305049658f, 0.00819561816751957f, 0.008166387677192688f, 0.004288786556571722f, 0.008899741806089878f, 0.005420011002570391f, 0.005360849667340517f, 0.00572685431689024f, 0.0038806074298918247f, 0.007428571116179228f, 0.0061501068994402885f, 0.009136009030044079f, 0.004124381113797426f, 0.007169421296566725f, 0.007625002879649401f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031044804491102695f, 0.003405981697142124f, 0.0025026651564985514f, 0.0036770685110241175f, 0.00376564497128129f, 0.0041373129934072495f, 0.004936668090522289f, 0.003123366041108966f),
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
    AI_PACK_INTQ_SCALE(0.005085775628685951f, 0.0033029743935912848f, 0.0052207279950380325f, 0.0036712102591991425f, 0.0034709481988102198f, 0.006998456083238125f, 0.007030169479548931f, 0.0041070845909416676f, 0.005491458810865879f, 0.0043653338216245174f, 0.004833401646465063f, 0.004047272261232138f, 0.005898630246520042f, 0.004869033582508564f, 0.005460779648274183f, 0.0066349389962852f, 0.002839586930349469f, 0.005843826569616795f, 0.0030474963132292032f, 0.0050758789293468f, 0.004279584623873234f, 0.0035578568931668997f, 0.004752163775265217f, 0.0057158805429935455f, 0.004814791493117809f, 0.003896334208548069f, 0.004773997236043215f, 0.004210916347801685f, 0.0036480745766311884f, 0.00442566117271781f, 0.0033584036864340305f, 0.0057948497124016285f, 0.003578962991014123f, 0.005721826106309891f, 0.004330922849476337f, 0.0029349313117563725f, 0.003740705316886306f, 0.004091775510460138f, 0.005212388467043638f, 0.0037902980111539364f, 0.005859845317900181f, 0.004661124665290117f, 0.005628310609608889f, 0.003989952616393566f, 0.0038154625799506903f, 0.002890258328989148f, 0.0033596951980143785f, 0.003682768438011408f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007831028662621975f, 0.0074509521946311f, 0.01191634126007557f, 0.00807285401970148f, 0.010438309982419014f, 0.012321396730840206f, 0.012145660817623138f, 0.011861546896398067f, 0.008269933983683586f, 0.008155311457812786f, 0.012307151220738888f, 0.017174528911709785f, 0.009486539289355278f, 0.008839772082865238f, 0.005180738866329193f, 0.005700244568288326f, 0.005101132672280073f, 0.010675052180886269f, 0.007781765889376402f, 0.005426266696304083f, 0.005945519544184208f, 0.00874161534011364f, 0.00305975042283535f, 0.008567762561142445f, 0.0036174131091684103f, 0.007688676938414574f, 0.007158408407121897f, 0.013480008579790592f, 0.01267335843294859f, 0.004161592107266188f, 0.003171350806951523f, 0.00740547152236104f, 0.01117683481425047f, 0.006921262945979834f, 0.007701259572058916f, 0.007075819186866283f, 0.004561407025903463f, 0.013996473513543606f, 0.013170813210308552f, 0.01220102608203888f, 0.009761465713381767f, 0.00897865742444992f, 0.006938182283192873f, 0.01029272098094225f, 0.01517702080309391f, 0.010861977003514767f, 0.008641104213893414f, 0.007386835291981697f),
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
    AI_PACK_INTQ_SCALE(0.0025385660119354725f, 0.0019128170097246766f, 0.002164031844586134f, 0.0023323504719883204f, 0.002484495285898447f, 0.002694775816053152f, 0.002255624160170555f, 0.002438163384795189f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030785719864070415f, 0.003171234391629696f, 0.0027032073121517897f, 0.0020472747273743153f, 0.003460979787632823f, 0.0030553233809769154f, 0.0029043061658740044f, 0.004085736349225044f, 0.0034113768488168716f, 0.002643824554979801f, 0.005475242156535387f, 0.0028273845091462135f, 0.002771637635305524f, 0.0037607380654662848f, 0.002847539959475398f, 0.0026147193275392056f, 0.003708371426910162f, 0.0020288105588406324f, 0.0028455941937863827f, 0.004298971965909004f, 0.003709064330905676f, 0.00295950542204082f, 0.002363185863941908f, 0.00358006963506341f, 0.002665440086275339f, 0.003319378476589918f, 0.0038937637582421303f, 0.0020013812463730574f, 0.002809409284964204f, 0.0037198662757873535f, 0.0031015153508633375f, 0.0033888169564306736f, 0.003938287030905485f, 0.0031797862611711025f, 0.0024308888241648674f, 0.004115872550755739f, 0.003431720193475485f, 0.0023505387362092733f, 0.0027958401478827f, 0.0031946408562362194f, 0.0030755815096199512f, 0.0029608195181936026f, 0.0049462937749922276f, 0.0036872858181595802f, 0.0027837802190333605f, 0.004349390976130962f, 0.0030787107534706593f, 0.0027232635766267776f),
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
    AI_PACK_INTQ_SCALE(0.009428941644728184f, 0.005347730591893196f, 0.002313452074304223f, 0.00828926358371973f, 0.011044167913496494f, 0.01101586315780878f, 0.012827425263822079f, 0.0049601453356444836f, 0.007646019104868174f, 0.004285571165382862f, 0.0057879299856722355f, 0.0058080051094293594f, 0.004051203839480877f, 0.004571474157273769f, 0.008457734249532223f, 0.005420054774731398f, 0.005251395981758833f, 0.009097525849938393f, 0.00643287505954504f, 0.0081522511318326f, 0.006380201783031225f, 0.013484353199601173f, 0.008622811175882816f, 0.010073130019009113f, 0.009842970408499241f, 0.009560213424265385f, 0.006880419794470072f, 0.007596804294735193f, 0.013859504833817482f, 0.004739636089652777f, 0.006263519171625376f, 0.009184341877698898f, 0.0033279035706073046f, 0.005316248629242182f, 0.0035271092783659697f, 0.005839851684868336f, 0.010427488014101982f, 0.008153594098985195f, 0.006661363411694765f, 0.006458194926381111f, 0.004369575530290604f, 0.009102363139390945f, 0.010076912119984627f, 0.0064742122776806355f, 0.0049847629852592945f, 0.008210258558392525f, 0.0041907113045454025f, 0.010595638304948807f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002996267518028617f, 0.004641721490770578f, 0.003962355200201273f, 0.003635030472651124f, 0.0030375218484550714f, 0.004307054448872805f, 0.003593547036871314f, 0.0034624452237039804f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00509286904707551f, 0.005292289424687624f, 0.003125807037577033f, 0.0050604818388819695f, 0.007498713675886393f, 0.002974193077534437f, 0.0038760460447520018f, 0.004696106072515249f, 0.006032100412994623f, 0.002870398573577404f, 0.0035099750384688377f, 0.0028822508174926043f, 0.003564875340089202f, 0.0049653248861432076f, 0.003875160589814186f, 0.00401680264621973f, 0.004071054980158806f, 0.0028859383892267942f, 0.0036583582405000925f, 0.003948384430259466f, 0.003898589638993144f, 0.0063599515706300735f, 0.0049255164340138435f, 0.0029650714714080095f, 0.003612451022490859f, 0.002855139086022973f, 0.002908916212618351f, 0.003561310935765505f, 0.002717414405196905f, 0.0059737153351306915f, 0.0032293004915118217f, 0.004754642955958843f, 0.0038749610539525747f, 0.004411132074892521f, 0.006301348563283682f, 0.004364278167486191f, 0.004855357576161623f, 0.0045729936100542545f, 0.0031433820258826017f, 0.003562596859410405f, 0.00458522979170084f, 0.003925510682165623f, 0.005412002094089985f, 0.003441913053393364f, 0.0034143689554184675f, 0.0036028241738677025f, 0.003893403336405754f, 0.0037637054920196533f),
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
    AI_PACK_INTQ_SCALE(0.006315141450613737f, 0.00821283645927906f, 0.023956745862960815f, 0.003830487374216318f, 0.004888771567493677f, 0.013249984011054039f, 0.007423829287290573f, 0.008689588867127895f, 0.009479603730142117f, 0.004334720782935619f, 0.008818049915134907f, 0.007765389047563076f, 0.009017759002745152f, 0.004501700401306152f, 0.006110550370067358f, 0.015228570438921452f, 0.0036999827716499567f, 0.01016042660921812f, 0.005432803649455309f, 0.00817109551280737f, 0.010309874080121517f, 0.012052985839545727f, 0.003593970322981477f, 0.009316187351942062f, 0.003595351707190275f, 0.005282455589622259f, 0.00828663818538189f, 0.011249720118939877f, 0.0036153513938188553f, 0.0061169639229774475f, 0.004098170902580023f, 0.004997399169951677f, 0.008267361670732498f, 0.009810449555516243f, 0.004061141982674599f, 0.007723462767899036f, 0.013120927847921848f, 0.008360643871128559f, 0.005730101373046637f, 0.011425764299929142f, 0.005903046578168869f, 0.010346177034080029f, 0.005791592877358198f, 0.012304986827075481f, 0.004969020374119282f, 0.009405392222106457f, 0.015495914965867996f, 0.005572975147515535f),
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
    AI_PACK_INTQ_SCALE(0.002688787179067731f, 0.0019361453596502542f, 0.0025009671226143837f, 0.002104638610035181f, 0.002879324834793806f, 0.0024086509365588427f, 0.002490702085196972f, 0.002175370929762721f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0029102209955453873f, 0.0034877064172178507f, 0.003443998284637928f, 0.003818830009549856f, 0.002669898560270667f, 0.002494704443961382f, 0.002296215621754527f, 0.0027314964681863785f, 0.002622578525915742f, 0.0028802964370697737f, 0.0024302322417497635f, 0.0031228919979184866f, 0.00267715728841722f, 0.0034910826943814754f, 0.005776953883469105f, 0.004063207656145096f, 0.004500641953200102f, 0.0031637377105653286f, 0.003335773479193449f, 0.0051697175949811935f, 0.002952161245048046f, 0.0031433317344635725f, 0.0027032264042645693f, 0.00316854496486485f, 0.004037909209728241f, 0.0015363222919404507f, 0.002051360672339797f, 0.004220445640385151f, 0.0027015141677111387f, 0.004393336828798056f, 0.003579191630706191f, 0.002370569622144103f, 0.0029814636800438166f, 0.004310815129429102f, 0.001741161453537643f, 0.003234966890886426f, 0.003408433636650443f, 0.003162086009979248f, 0.002816008171066642f, 0.003128934185951948f, 0.003562027821317315f, 0.003056648653000593f, 0.0032096405047923326f, 0.0030157770961523056f, 0.0032888147979974747f, 0.0021218941546976566f, 0.0023457736242562532f, 0.0018429233459755778f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011792161501944065f, 0.010743790306150913f, 0.010188236832618713f, 0.013797879219055176f, 0.00615264568477869f, 0.006318781990557909f, 0.011383512057363987f, 0.007341573014855385f, 0.004302532412111759f, 0.013648138381540775f, 0.0055244998075068f, 0.011442799121141434f, 0.0098055899143219f, 0.003958859480917454f, 0.005933752283453941f, 0.006685963831841946f, 0.0026497214566916227f, 0.007751788012683392f, 0.005295462906360626f, 0.004961560945957899f, 0.004155540838837624f, 0.005900382995605469f, 0.009272227995097637f, 0.008460120297968388f, 0.005077716428786516f, 0.01857840083539486f, 0.019688157364726067f, 0.005378501955419779f, 0.005253358744084835f, 0.015022097155451775f, 0.005846926476806402f, 0.00458977185189724f, 0.003982186317443848f, 0.0038867525290697813f, 0.015036748722195625f, 0.005939682479947805f, 0.010075719095766544f, 0.01143629290163517f, 0.005298074334859848f, 0.006005133502185345f, 0.006360854022204876f, 0.008182776160538197f, 0.013122343458235264f, 0.01016329787671566f, 0.010171370580792427f, 0.015476864762604237f, 0.010066359303891659f, 0.011527925729751587f),
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
    AI_PACK_INTQ_SCALE(0.002121266210451722f, 0.0025593210011720657f, 0.0038277553394436836f, 0.002020296175032854f, 0.002236137865111232f, 0.002814200473949313f, 0.002285644179210067f, 0.0023314033169299364f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001601151772774756f, 0.001691267709247768f, 0.002305072732269764f, 0.002263682894408703f, 0.0015486952615901828f, 0.002068694680929184f, 0.0016578580252826214f, 0.002197716385126114f, 0.0019785293843597174f, 0.002365829423069954f, 0.0019391891546547413f, 0.0025154894683510065f, 0.0025401986204087734f, 0.0016534860478714108f, 0.0021264064125716686f, 0.0027274496387690306f, 0.0021966351196169853f, 0.0021661133505403996f, 0.002637429628521204f, 0.001833179616369307f, 0.0021102563478052616f, 0.0028179925866425037f, 0.00222764047794044f, 0.0019116803305223584f, 0.0033692417200654745f, 0.002456167247146368f, 0.001291858498007059f, 0.0024182002525776625f, 0.0018738218350335956f, 0.0019291352946311235f, 0.0023840568028390408f, 0.0024869211483746767f, 0.0023947174195200205f, 0.002126361010596156f, 0.0021939524449408054f, 0.0031584310345351696f, 0.0028191853780299425f, 0.0024795287754386663f, 0.0018991398392245173f, 0.003050879342481494f, 0.002005435759201646f, 0.0022235990036278963f, 0.0025066465605050325f, 0.0021923310123384f, 0.0016442170599475503f, 0.0027858857065439224f, 0.00198968593031168f, 0.0019847596995532513f),
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
    AI_PACK_INTQ_SCALE(0.005043358076363802f, 0.006532506551593542f, 0.011627261526882648f, 0.006033274345099926f, 0.0073403967544436455f, 0.007929296232759953f, 0.008902270346879959f, 0.00422277208417654f, 0.008840435184538364f, 0.004586941096931696f, 0.003761234460398555f, 0.009575375355780125f, 0.004257452208548784f, 0.006592095829546452f, 0.004411486908793449f, 0.006934459321200848f, 0.003934354986995459f, 0.007503910921514034f, 0.0032092109322547913f, 0.004698521923273802f, 0.009118638001382351f, 0.009361215867102146f, 0.007649153005331755f, 0.005083256401121616f, 0.003559391712769866f, 0.006850912235677242f, 0.008320741355419159f, 0.005114107392728329f, 0.008065471425652504f, 0.004461938980966806f, 0.0047851791605353355f, 0.005591453518718481f, 0.006600239779800177f, 0.006114956457167864f, 0.0030430250335484743f, 0.011415050365030766f, 0.0038970415480434895f, 0.0027142763137817383f, 0.0071634394116699696f, 0.003963768016546965f, 0.0034825890325009823f, 0.004371348302811384f, 0.003841831348836422f, 0.005051978398114443f, 0.00776920048519969f, 0.0043117995373904705f, 0.004774750676006079f, 0.00375158479437232f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003945993725210428f, 0.0042518023401498795f, 0.003934123087674379f, 0.0032085347920656204f, 0.004138608928769827f, 0.004031320568174124f, 0.004034935496747494f, 0.004719400778412819f, 0.003210908267647028f, 0.0037396871484816074f, 0.0038813960272818804f, 0.003130658296868205f, 0.004330077674239874f, 0.0036981054581701756f, 0.0035018641501665115f, 0.003422962035983801f),
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
    AI_PACK_INTQ_SCALE(0.00319868721999228f, 0.002693535527214408f, 0.0026721942704170942f, 0.0027093889657408f, 0.0024634937290102243f, 0.0024385936558246613f, 0.004267015028744936f, 0.002298699226230383f, 0.0022097097244113684f, 0.0032764084171503782f, 0.0018784991698339581f, 0.00280092959292233f, 0.002986789448186755f, 0.003103209426626563f, 0.003737347899004817f, 0.002489036414772272f, 0.0022879675962030888f, 0.005278315860778093f, 0.00337752653285861f, 0.0034645639825612307f, 0.0032350795809179544f, 0.0032676956616342068f, 0.002563219051808119f, 0.002638970036059618f, 0.003365384880453348f, 0.002905303379520774f, 0.0037084820214658976f, 0.003597636241465807f, 0.002401780802756548f, 0.004440284799784422f, 0.002650576177984476f, 0.004318792372941971f, 0.002817482454702258f, 0.001812936388887465f, 0.0022930281702429056f, 0.002164418576285243f, 0.003433612873777747f, 0.0015210703713819385f, 0.003496724646538496f, 0.0024908524937927723f, 0.002115533920004964f, 0.0030905436724424362f, 0.0015072902897372842f, 0.0024504289031028748f, 0.0029926332645118237f, 0.001987090799957514f, 0.0023140027187764645f, 0.003190834540873766f, 0.002395847113803029f, 0.00235328683629632f, 0.0028590690344572067f, 0.0021186440717428923f, 0.002697097137570381f, 0.0023450138978660107f, 0.0026337234303355217f, 0.0032311640679836273f, 0.002407160121947527f, 0.0036666167434304953f, 0.0024325884878635406f, 0.0029579249676316977f, 0.0019568668212741613f, 0.0024845637381076813f, 0.0025387476198375225f, 0.0019082141807302833f, 0.0021577528677880764f, 0.002521374961361289f, 0.0029121919069439173f, 0.0043211160227656364f, 0.0031561003997921944f, 0.003855701070278883f, 0.003126797266304493f, 0.003836427116766572f, 0.0031277844682335854f, 0.0026475489139556885f, 0.002619871636852622f, 0.0031512659043073654f, 0.0028707729652523994f, 0.0027123212348669767f, 0.002087693428620696f, 0.003419846063479781f, 0.002254647435620427f, 0.002152736997231841f, 0.0020212463568896055f, 0.0031125019304454327f, 0.0038956073112785816f, 0.002979801967740059f, 0.002204382559284568f, 0.003008230123668909f, 0.0038133745547384024f, 0.002742625307291746f, 0.002046407898887992f, 0.0029650188516825438f, 0.0036530771758407354f, 0.0018380907131358981f, 0.0027802090626209974f, 0.0031570286955684423f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007535651326179504f, 0.01050586812198162f, 0.007088064216077328f, 0.014524904079735279f, 0.009767628274857998f, 0.007516400422900915f, 0.007026309613138437f, 0.010048247873783112f, 0.00752643309533596f, 0.01211869902908802f, 0.009347833693027496f, 0.009565021842718124f, 0.00309348595328629f, 0.008989072404801846f, 0.007761860731989145f, 0.007153417449444532f, 0.01613730378448963f, 0.004143437836319208f, 0.00975396204739809f, 0.008967804722487926f, 0.010938180610537529f, 0.008845562115311623f, 0.003388133831322193f, 0.013721911236643791f, 0.01441171858459711f, 0.006431912072002888f, 0.007202213164418936f, 0.005824207793921232f, 0.014188955537974834f, 0.011924685910344124f, 0.006528527941554785f, 0.00841897539794445f, 0.00573741877451539f, 0.007817373611032963f, 0.008866708725690842f, 0.005733578931540251f, 0.013856494799256325f, 0.008393668569624424f, 0.01236114464700222f, 0.009005825966596603f, 0.007086155470460653f, 0.006068229675292969f, 0.016316000372171402f, 0.008564858697354794f, 0.005086748860776424f, 0.004197698552161455f, 0.013496650382876396f, 0.01204288937151432f, 0.006062881089746952f, 0.006584427319467068f, 0.004802265670150518f, 0.016115283593535423f, 0.008934867568314075f, 0.012294045649468899f, 0.008075352758169174f, 0.007460477761924267f, 0.006878953892737627f, 0.009247244335711002f, 0.005002680700272322f, 0.0104899313300848f, 0.006112107075750828f, 0.008708232082426548f, 0.014712920412421227f, 0.0075250472873449326f, 0.007976748049259186f, 0.005491191055625677f, 0.010408337228000164f, 0.007351891603320837f, 0.012251172214746475f, 0.010708930902183056f, 0.00566432299092412f, 0.009775329381227493f, 0.011716540902853012f, 0.009000532329082489f, 0.007947861216962337f, 0.008198200725018978f, 0.00465001305565238f, 0.007152602542191744f, 0.008129050023853779f, 0.007462931331247091f, 0.005777913145720959f, 0.00909267459064722f, 0.009314118884503841f, 0.0040993946604430676f, 0.00643825251609087f, 0.010986250825226307f, 0.012942269444465637f, 0.015024051070213318f, 0.009466125629842281f, 0.007300179451704025f, 0.007818386889994144f, 0.011125313118100166f, 0.00893892627209425f, 0.011090870015323162f, 0.0048846835270524025f, 0.015292761847376823f),
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
    AI_PACK_INTQ_SCALE(0.0021734090987592936f, 0.0018054606625810266f, 0.0014928976306691766f, 0.0021474275272339582f, 0.0014442835235968232f, 0.001528504304587841f, 0.0019492964493110776f, 0.0026239671278744936f, 0.0018976330757141113f, 0.0026663050521165133f, 0.002008995972573757f, 0.0024152270052582026f, 0.002128964988514781f, 0.0020892410539090633f, 0.0020973084028810263f, 0.0023182425647974014f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013403954217210412f, 0.00255411840043962f, 0.003487513167783618f, 0.0015031341463327408f, 0.002673499519005418f, 0.0021875379607081413f, 0.0028378379065543413f, 0.0020910531748086214f, 0.001255016541108489f, 0.002107630716636777f, 0.0033073127269744873f, 0.0016455150907859206f, 0.002337844343855977f, 0.0021342698018997908f, 0.0019148500869050622f, 0.0022344416938722134f, 0.0013025769731029868f, 0.0011865673586726189f, 0.00293085933662951f, 0.0019243316492065787f, 0.001645682379603386f, 0.0024824838619679213f, 0.002372375223785639f, 0.002174376044422388f, 0.002034352393820882f, 0.001799438032321632f, 0.0026657620910555124f, 0.0017766720848158002f, 0.0019642473198473454f, 0.002256725449115038f, 0.00323634990490973f, 0.0022269387263804674f, 0.0012828472536057234f, 0.0021482445299625397f, 0.002517636865377426f, 0.0010888419346883893f, 0.0019410300301387906f, 0.0017111222259700298f, 0.0014803055673837662f, 0.002428054576739669f, 0.0014947006711736321f, 0.0023688320070505142f, 0.0019975053146481514f, 0.001619773218408227f, 0.0029496795032173395f, 0.0016554549802094698f, 0.002818227279931307f, 0.002023297129198909f, 0.0018848134204745293f, 0.0019230960169807076f, 0.0028968374244868755f, 0.0025191360618919134f, 0.0019014384597539902f, 0.0013187241274863482f, 0.0013522764202207327f, 0.002295109909027815f, 0.0023688150104135275f, 0.001971733057871461f, 0.002428995445370674f, 0.0025452806148678064f, 0.0017906437860801816f, 0.0020725203212350607f, 0.001774800242856145f, 0.0031168705318123102f, 0.0024883535224944353f, 0.0018425064627081156f, 0.0019946552347391844f, 0.0025523174554109573f, 0.0022681334521621466f, 0.002641618251800537f, 0.001963825896382332f, 0.0021321745589375496f, 0.002573552308604121f, 0.0021485802717506886f, 0.0021526061464101076f, 0.002473244909197092f, 0.0015781269175931811f, 0.0015551088145002723f, 0.0021624851506203413f, 0.0022899636533111334f, 0.0015064262552186847f, 0.0017881267704069614f, 0.002383936895057559f, 0.0018835198134183884f, 0.0035260654985904694f, 0.002445684978738427f, 0.0036496352404356003f, 0.002205484313890338f, 0.0017263061599805951f, 0.0019782462622970343f, 0.001755350618623197f, 0.0015972020337358117f, 0.0024901800788939f, 0.0023470763117074966f, 0.0031443757470697165f, 0.0018170919502153993f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0076164379715919495f, 0.010130148380994797f, 0.012056024745106697f, 0.00934886559844017f, 0.00915580615401268f, 0.009574257768690586f, 0.0052513135597109795f, 0.009289545007050037f, 0.007555102929472923f, 0.00899506825953722f, 0.006697489880025387f, 0.007860875688493252f, 0.007166383322328329f, 0.008103999309241772f, 0.012474900111556053f, 0.008424028754234314f, 0.0057183620519936085f, 0.012387779541313648f, 0.011340714059770107f, 0.008862487971782684f, 0.019938526675105095f, 0.007172264624387026f, 0.008793282322585583f, 0.008919823914766312f, 0.010376421734690666f, 0.005781063809990883f, 0.012297098524868488f, 0.01147376000881195f, 0.010892363265156746f, 0.007913854904472828f, 0.009888551197946072f, 0.006429039873182774f, 0.007158581167459488f, 0.006562429945915937f, 0.012561453506350517f, 0.00577063113451004f, 0.006698710843920708f, 0.009889073669910431f, 0.014686070382595062f, 0.006070432718843222f, 0.008210829459130764f, 0.01333634089678526f, 0.00491238571703434f, 0.006851822603493929f, 0.014435282908380032f, 0.004539917688816786f, 0.0066982293501496315f, 0.006293382961302996f, 0.010551624931395054f, 0.0070716808550059795f, 0.005164619069546461f, 0.012907746247947216f, 0.0062984321266412735f, 0.010434312745928764f, 0.004441975150257349f, 0.010324581526219845f, 0.006574357394129038f, 0.006816277280449867f, 0.006060968618839979f, 0.011938421986997128f, 0.005913564004004002f, 0.003105512587353587f, 0.008381152525544167f, 0.004749951884150505f, 0.004553057253360748f, 0.007085895631462336f, 0.011238808743655682f, 0.008225265890359879f, 0.013638542033731937f, 0.008879936300218105f, 0.006912523880600929f, 0.0033016118686646223f, 0.010941251181066036f, 0.010995812714099884f, 0.004380164667963982f, 0.007102001458406448f, 0.010944471694529057f, 0.006918134167790413f, 0.008631005883216858f, 0.008880808018147945f, 0.009864859282970428f, 0.007940646260976791f, 0.009069638326764107f, 0.006379530765116215f, 0.00821131095290184f, 0.005448500160127878f, 0.012070979923009872f, 0.014100219123065472f, 0.007394509389996529f, 0.010596915148198605f, 0.013535751961171627f, 0.0074843838810920715f, 0.008602198213338852f, 0.008652064017951488f, 0.007444373331964016f, 0.012185968458652496f),
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
    AI_PACK_INTQ_SCALE(0.0016496246680617332f, 0.0015139568131417036f, 0.0020442509558051825f, 0.0016400519525632262f, 0.0015865251189097762f, 0.0017888566944748163f, 0.003150902921333909f, 0.002541827503591776f, 0.0021463455632328987f, 0.0016472055576741695f, 0.0018547275103628635f, 0.0020143010187894106f, 0.0020838871132582426f, 0.0020792630966752768f, 0.0018898816779255867f, 0.0017691787797957659f),
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
    AI_PACK_INTQ_SCALE(0.0014770181151106954f, 0.0011207017814740539f, 0.0013847352238371968f, 0.0023903383407741785f, 0.0017834313912317157f, 0.001366463489830494f, 0.0022172206081449986f, 0.001978363608941436f, 0.002383389975875616f, 0.002011306118220091f, 0.0014817486517131329f, 0.0025269784964621067f, 0.00244381302036345f, 0.0017117043025791645f, 0.0016498755430802703f, 0.001244278158992529f, 0.002450646134093404f, 0.0022317415568977594f, 0.0017629914218559861f, 0.0017131244530901313f, 0.0017139663686975837f, 0.001352268154732883f, 0.0022866579238325357f, 0.001846209866926074f, 0.0018826565938070416f, 0.0013952881563454866f, 0.0024715892504900694f, 0.0017055448843166232f, 0.0016843178309500217f, 0.0015127904480323195f, 0.001263570156879723f, 0.0014405354158952832f, 0.0013998557114973664f, 0.002260566223412752f, 0.0018730588490143418f, 0.002257764106616378f, 0.0011025742860510945f, 0.0017869815928861499f, 0.0035988858435302973f, 0.0017169195925816894f, 0.002041448839008808f, 0.0016656790394335985f, 0.0016119774663820863f, 0.0013171216705814004f, 0.001660964684560895f, 0.0016567411366850138f, 0.001956994878128171f, 0.001739679486490786f, 0.0018594377906993032f, 0.0015087074134498835f, 0.0014000387163832784f, 0.0020775829907506704f, 0.0013338483404368162f, 0.0014127641916275024f, 0.002113726455718279f, 0.0014723065542057157f, 0.0019136881455779076f, 0.0011424660915508866f, 0.001565805054269731f, 0.0013649484608322382f, 0.00143277773167938f, 0.0022927590180188417f, 0.001338199363090098f, 0.0010687635513022542f, 0.001656006439588964f, 0.0015147904632613063f, 0.001877975882962346f, 0.0015981887700036168f, 0.0016757459379732609f, 0.0014149482594802976f, 0.001247007749043405f, 0.001473736367188394f, 0.0016442073974758387f, 0.0011930848704650998f, 0.0015174923464655876f, 0.0015003553126007318f, 0.00160415715072304f, 0.0013480620691552758f, 0.001453475677408278f, 0.001740027917549014f, 0.0015000918647274375f, 0.001651523751206696f, 0.0018051676452159882f, 0.0015043428866192698f, 0.002062541199848056f, 0.00178873585537076f, 0.002238038694486022f, 0.0018093424150720239f, 0.0012865641620010138f, 0.0020635067485272884f, 0.0018882893491536379f, 0.0015041885199025273f, 0.0018209923291578889f, 0.0015630447305738926f, 0.0018773877527564764f, 0.0015738778747618198f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0061341384425759315f, 0.005632936954498291f, 0.004159337840974331f, 0.006262216717004776f, 0.00888974592089653f, 0.01107571180909872f, 0.006313147488981485f, 0.003256582422181964f, 0.00823235884308815f, 0.006252750288695097f, 0.004846483934670687f, 0.007181311026215553f, 0.011251985095441341f, 0.010754846967756748f, 0.010756443254649639f, 0.015161840245127678f, 0.009733549319207668f, 0.005108261946588755f, 0.0053170290775597095f, 0.0038945332635194063f, 0.00649169459939003f, 0.007033783011138439f, 0.008060560561716557f, 0.005487969145178795f, 0.011935249902307987f, 0.011347115971148014f, 0.007258273661136627f, 0.010231340304017067f, 0.004412048030644655f, 0.007609032094478607f, 0.004538932349532843f, 0.0051957364194095135f, 0.006202813237905502f, 0.00831727683544159f, 0.005130268633365631f, 0.01257096417248249f, 0.00600684667006135f, 0.007722470909357071f, 0.0066522774286568165f, 0.004229279700666666f, 0.006268783006817102f, 0.00922580249607563f, 0.006871482823044062f, 0.005348789039999247f, 0.006018240936100483f, 0.014617538079619408f, 0.009714258834719658f, 0.009168822318315506f, 0.004754912108182907f, 0.006631419062614441f, 0.010774122551083565f, 0.0037893883418291807f, 0.011673705652356148f, 0.007072486449033022f, 0.008443794213235378f, 0.00822949968278408f, 0.004235861357301474f, 0.008951115421950817f, 0.004726517479866743f, 0.010952536016702652f, 0.0034050175454467535f, 0.01065016444772482f, 0.005544901825487614f, 0.005956975743174553f, 0.01908612623810768f, 0.007096196059137583f, 0.012075989507138729f, 0.00765938451513648f, 0.008070318959653378f, 0.007802353240549564f, 0.006118377670645714f, 0.007715773303061724f, 0.006559588015079498f, 0.011025992222130299f, 0.006365329958498478f, 0.007989628240466118f, 0.005532592069357634f, 0.007958702743053436f, 0.007993561215698719f, 0.009577382355928421f, 0.004255810286849737f, 0.011601806618273258f, 0.0043304692953825f, 0.010356149636209011f, 0.008481594733893871f, 0.009007764980196953f, 0.007655248045921326f, 0.006808651145547628f, 0.005039408337324858f, 0.008315155282616615f, 0.009806228801608086f, 0.00665288744494319f, 0.010644820518791676f, 0.009250981733202934f, 0.020055299624800682f, 0.008182086050510406f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_39_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015420286217704415f, 0.0009976624278351665f, 0.0013188404263928533f, 0.0020997393876314163f, 0.001742407213896513f, 0.0023295050486922264f, 0.0022168930154293776f, 0.001916416920721531f, 0.0014439590740948915f, 0.001442213892005384f, 0.0013697248650714755f, 0.0014242470497265458f, 0.001768766320310533f, 0.0017984954174607992f, 0.0019195660715922713f, 0.0029620258137583733f),
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
    AI_PACK_INTQ_SCALE(0.0021909340284764767f, 0.001610907376743853f, 0.001231093774549663f, 0.0013595946365967393f, 0.0019331257790327072f, 0.0017634597606956959f, 0.0016487609827890992f, 0.0016771284863352776f, 0.0012061971938237548f, 0.0014312025159597397f, 0.0013575494522228837f, 0.00095432746456936f, 0.0013893669238314033f, 0.001764004584401846f, 0.001914771506562829f, 0.001715038437396288f, 0.0013422865886241198f, 0.0012990961549803615f, 0.0011311116395518184f, 0.001235647825524211f, 0.001285255653783679f, 0.0016964669339358807f, 0.001656662905588746f, 0.0014044289710000157f, 0.002079065889120102f, 0.0016893536085262895f, 0.0016188552835956216f, 0.001898789661936462f, 0.001816440257243812f, 0.002402315614745021f, 0.0013508422998711467f, 0.0011491947807371616f, 0.0014036237262189388f, 0.0023672766983509064f, 0.0012271974701434374f, 0.0015387367457151413f, 0.0014366765972226858f, 0.0019272841745987535f, 0.00175073416903615f, 0.002469216473400593f, 0.001813079696148634f, 0.0014492911286652088f, 0.0012924347538501024f, 0.001403180998750031f, 0.0011734503787010908f, 0.001794214709661901f, 0.001146560302004218f, 0.0014035544591024518f, 0.0012230860302224755f, 0.002004913054406643f, 0.001371749909594655f, 0.001622015261091292f, 0.0010702573927119374f, 0.0012561535695567727f, 0.0011517085367813706f, 0.0012089678784832358f, 0.0019056887831538916f, 0.0013737448025494814f, 0.0014543323777616024f, 0.0023202071897685528f, 0.0018098214641213417f, 0.0009424107847735286f, 0.0018060060683637857f, 0.001419880660250783f, 0.0011401309166103601f, 0.0018477127887308598f, 0.0019397404976189137f, 0.0014392770826816559f, 0.0013935696333646774f, 0.00181680079549551f, 0.001664385199546814f, 0.001346737495623529f, 0.001073335180990398f, 0.001515706884674728f, 0.0016145644476637244f, 0.0017586963949725032f, 0.0017853662138804793f, 0.0015907289925962687f, 0.0013846394140273333f, 0.0012297607026994228f, 0.0016750709619373083f, 0.001159508479759097f, 0.0015079076401889324f, 0.0018353122286498547f, 0.0014157441910356283f, 0.001364399679005146f, 0.002196279587224126f, 0.0013071289286017418f, 0.0014135544188320637f, 0.0019107022089883685f, 0.0015717813512310386f, 0.0014527958119288087f, 0.0021326434798538685f, 0.001778632984496653f, 0.0014932469930499792f, 0.0013063889928162098f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01201354805380106f, 0.0047070481814444065f, 0.008495760150253773f, 0.007710770238190889f, 0.009002834558486938f, 0.003696878207847476f, 0.004768033511936665f, 0.009156894870102406f, 0.016226094216108322f, 0.009933579713106155f, 0.009576482698321342f, 0.005508026108145714f, 0.006693268660455942f, 0.004767853766679764f, 0.004519273526966572f, 0.009291551075875759f, 0.01055239886045456f, 0.011161549016833305f, 0.0066870772279798985f, 0.005154811777174473f, 0.00609992491081357f, 0.008357204496860504f, 0.007464238908141851f, 0.008258105255663395f, 0.0053816791623830795f, 0.005307902116328478f, 0.005187525413930416f, 0.006976816803216934f, 0.00843431893736124f, 0.004384120460599661f, 0.006992718204855919f, 0.003468184731900692f, 0.008415340445935726f, 0.009840459562838078f, 0.0054536559619009495f, 0.008593341335654259f, 0.011569363996386528f, 0.014206722378730774f, 0.004103063605725765f, 0.005875919479876757f, 0.007400779984891415f, 0.011646595783531666f, 0.005050480365753174f, 0.004257699009031057f, 0.003711436642333865f, 0.004571150988340378f, 0.008221134543418884f, 0.013089139014482498f, 0.008402680046856403f, 0.007003105245530605f, 0.008071377873420715f, 0.005088824778795242f, 0.011293049901723862f, 0.006660740356892347f, 0.007250058930367231f, 0.011892330832779408f, 0.0075515578500926495f, 0.006672689691185951f, 0.0056230006739497185f, 0.0059091174043715f, 0.003371658269315958f, 0.012391621246933937f, 0.006872198078781366f, 0.0031925069633871317f, 0.006850339937955141f, 0.006459158379584551f, 0.007635791786015034f, 0.009864263236522675f, 0.010429851710796356f, 0.007809114642441273f, 0.00392632931470871f, 0.01025666669011116f, 0.005320253316313028f, 0.010002333670854568f, 0.0034938957542181015f, 0.009919650852680206f, 0.008683083578944206f, 0.012073948979377747f, 0.013867642730474472f, 0.007399769965559244f, 0.0058157616294920444f, 0.007402962539345026f, 0.012119884602725506f, 0.0074863433837890625f, 0.004333032760769129f, 0.007736004423350096f, 0.0037910218816250563f, 0.008756211027503014f, 0.010883190669119358f, 0.013898089528083801f, 0.012204965576529503f, 0.011399742215871811f, 0.004433251917362213f, 0.005568531341850758f, 0.008077743463218212f, 0.005179664120078087f),
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
    AI_PACK_INTQ_SCALE(0.002320835366845131f, 0.003182639367878437f, 0.0035188363399356604f, 0.0026448566932231188f, 0.002828672295436263f, 0.002966744126752019f, 0.00299211242236197f, 0.002502583432942629f, 0.003161214292049408f, 0.0025039745960384607f, 0.0023193589877337217f, 0.003504923777654767f, 0.002996831899508834f, 0.002330375835299492f, 0.0030797228682786226f, 0.0029152825009077787f, 0.002085136016830802f, 0.0024450146593153477f, 0.0030584214255213737f, 0.002581415232270956f, 0.0022705206647515297f, 0.002901839092373848f, 0.0028892671689391136f, 0.0024452812504023314f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0023835008032619953f, 0.0020534174982458353f, 0.0018798791570588946f, 0.0023290913086384535f, 0.002309545176103711f, 0.002943524857982993f, 0.003596053458750248f, 0.0024303907994180918f, 0.002167648868635297f, 0.002199593698605895f, 0.002800698159262538f, 0.0023856398183852434f, 0.0030800446402281523f, 0.002460176357999444f, 0.0022320726420730352f, 0.003055429086089134f, 0.004087664186954498f, 0.0028469788376241922f, 0.002239400986582041f, 0.002426841529086232f, 0.0027638196479529142f, 0.002775750821456313f, 0.0032943841069936752f, 0.0022931492421776056f, 0.0022952291183173656f, 0.0027311702724546194f, 0.00257515930570662f, 0.002902454463765025f, 0.0027943141758441925f, 0.001971742371097207f, 0.002743850462138653f, 0.003180780913680792f, 0.0024625142104923725f, 0.0024621987249702215f, 0.0030090860091149807f, 0.0033500236459076405f, 0.002856697654351592f, 0.0023308738600462675f, 0.0038191969506442547f, 0.0019469178514555097f, 0.0025795723777264357f, 0.0029667960479855537f, 0.0034403721801936626f, 0.0037823058664798737f, 0.0020339610055088997f, 0.0024565965868532658f, 0.002370911417528987f, 0.002723738318309188f, 0.0026226819027215242f, 0.003172514960169792f, 0.0037660058587789536f, 0.0028667522128671408f, 0.0031920240726321936f, 0.002483997493982315f, 0.0029191637877374887f, 0.0020773746073246002f, 0.002174941124394536f, 0.003028064500540495f, 0.004587699193507433f, 0.0020017968490719795f, 0.002152373781427741f, 0.0024001714773476124f, 0.002280045999214053f, 0.003090417478233576f, 0.0025438331067562103f, 0.0021926388144493103f, 0.0027852184139192104f, 0.002186249243095517f, 0.002564218593761325f, 0.002381102880463004f, 0.0036818759981542826f, 0.0033742664381861687f, 0.00272331852465868f, 0.002841720823198557f, 0.002029983326792717f, 0.0032331293914467096f, 0.00442240945994854f, 0.0035942341201007366f, 0.0023292899131774902f, 0.004016508348286152f, 0.0021521172020584345f, 0.003219199599698186f, 0.0020163427107036114f, 0.002119617536664009f, 0.002507450059056282f, 0.002334419172257185f, 0.002535552252084017f, 0.0035569823812693357f, 0.0023466930724680424f, 0.0029134114738553762f, 0.0025978973135352135f, 0.001969688106328249f, 0.0027679293416440487f, 0.003093498991802335f, 0.004223443567752838f, 0.003447440918534994f, 0.0029335510917007923f, 0.003748698392882943f, 0.002567355055361986f, 0.003379223169758916f, 0.002495298394933343f, 0.003776598023250699f, 0.002609723014757037f, 0.00248201796784997f, 0.002190684899687767f, 0.0023707288783043623f, 0.0022264234721660614f, 0.002613827120512724f, 0.0026080983225256205f, 0.003262715181335807f, 0.0034586896654218435f, 0.00298843695782125f, 0.002577870385721326f, 0.0025346355978399515f, 0.002717493800446391f, 0.0035753159318119287f, 0.002484747441485524f, 0.0019040105398744345f, 0.002521815709769726f, 0.0029602425638586283f, 0.0018591952975839376f, 0.0018188372487202287f, 0.0022419774904847145f, 0.0022007629740983248f, 0.003454748773947358f, 0.00249535427428782f, 0.0038263353053480387f, 0.002783116651698947f, 0.002990699838846922f, 0.0032953398767858744f, 0.00248414627276361f, 0.002292853780090809f, 0.0024225309025496244f, 0.002313652541488409f, 0.002606260124593973f, 0.0024108574725687504f, 0.002035529352724552f, 0.002013690071180463f, 0.002534143626689911f, 0.0028655321802943945f, 0.0023803275544196367f, 0.002482794225215912f, 0.0027442402206361294f, 0.0031289199832826853f),
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
    AI_PACK_INTQ_SCALE(0.0038315793499350548f, 0.014905482530593872f, 0.0033642060589045286f, 0.009129236452281475f, 0.004727543331682682f, 0.007529835216701031f, 0.007762313820421696f, 0.006434398237615824f, 0.016672678291797638f, 0.005222472362220287f, 0.004695630166679621f, 0.005203532055020332f, 0.008116642944514751f, 0.006819404661655426f, 0.006511046551167965f, 0.007727854885160923f, 0.01113961823284626f, 0.006909803953021765f, 0.004754730500280857f, 0.005831367801874876f, 0.0049727256409823895f, 0.007216969970613718f, 0.004738560877740383f, 0.00391228124499321f, 0.007114572916179895f, 0.005542589817196131f, 0.007589310873299837f, 0.005994834005832672f, 0.007390783168375492f, 0.007777416612952948f, 0.005654152948409319f, 0.012102427892386913f, 0.008849775418639183f, 0.006677695084363222f, 0.006396864075213671f, 0.0080639673396945f, 0.010048698633909225f, 0.0038425105158239603f, 0.006037496495991945f, 0.004872450605034828f, 0.005736128427088261f, 0.005944696720689535f, 0.007234073709696531f, 0.008154990151524544f, 0.009800126776099205f, 0.007614303380250931f, 0.010805303230881691f, 0.007374661974608898f, 0.005670586135238409f, 0.004640904720872641f, 0.00505371019244194f, 0.006572451908141375f, 0.008177495561540127f, 0.005590043496340513f, 0.004578597377985716f, 0.007353402208536863f, 0.008623756468296051f, 0.0085302097722888f, 0.005385660100728273f, 0.011269492097198963f, 0.00834548007696867f, 0.005117915570735931f, 0.009418233297765255f, 0.007510004099458456f, 0.0070245591923594475f, 0.010412350296974182f, 0.00646491814404726f, 0.005528765730559826f, 0.004356098361313343f, 0.009018735960125923f, 0.008179953321814537f, 0.006016998086124659f, 0.004858309868723154f, 0.010448334738612175f, 0.008947025053203106f, 0.00395141402259469f, 0.005990438628941774f, 0.01046652439981699f, 0.008200003765523434f, 0.007211441174149513f, 0.009912373498082161f, 0.005106288008391857f, 0.00508506502956152f, 0.011899051256477833f, 0.005852782633155584f, 0.005449775140732527f, 0.003447476075962186f, 0.005979996640235186f, 0.007348231505602598f, 0.011418853886425495f, 0.009219566360116005f, 0.007802360225468874f, 0.0063366759568452835f, 0.00575740821659565f, 0.004695698618888855f, 0.007555436808615923f, 0.003053769702091813f, 0.0030452434439212084f, 0.007927383296191692f, 0.00888268742710352f, 0.006080504506826401f, 0.006952033378183842f, 0.0073618656024336815f, 0.006834706291556358f, 0.007797325029969215f, 0.00728381983935833f, 0.00833349023014307f, 0.008478757925331593f, 0.0076279472559690475f, 0.006241666153073311f, 0.008609306998550892f, 0.007978391833603382f, 0.012959840707480907f, 0.008304126560688019f, 0.00849255733191967f, 0.007856505922973156f, 0.0072510382160544395f, 0.008424598723649979f, 0.00368916941806674f, 0.008057964965701103f, 0.01135906670242548f, 0.007256926968693733f, 0.005654610227793455f, 0.01144433207809925f, 0.008489939384162426f, 0.010780339129269123f, 0.005883103236556053f, 0.010940049774944782f, 0.0024512382224202156f, 0.009912743233144283f, 0.008343961089849472f, 0.008660770021378994f, 0.005878448951989412f, 0.004674754571169615f, 0.005393932107836008f, 0.0050109378062188625f, 0.006798599846661091f, 0.008943548426032066f, 0.005260424688458443f, 0.005220430437475443f, 0.0031437790021300316f, 0.007142398506402969f, 0.002612712327390909f, 0.011914242058992386f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_46_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016346562188118696f, 0.0017559438711032271f, 0.0015580432955175638f, 0.001426490256562829f, 0.0019434046698734164f, 0.0015535629354417324f, 0.001858249888755381f, 0.0016513454029336572f, 0.002232171827927232f, 0.0016018393216654658f, 0.0014861749950796366f, 0.0016249202890321612f, 0.002000768668949604f, 0.0016814498230814934f, 0.0013498575426638126f, 0.0011557911057025194f, 0.0018964321352541447f, 0.0013381647877395153f, 0.001951896701939404f, 0.0019286839524284005f, 0.0012556934962049127f, 0.0018824452999979258f, 0.001944392453879118f, 0.001527081010863185f),
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
    AI_PACK_INTQ_SCALE(0.0031492935959249735f, 0.0019081294303759933f, 0.0020192365627735853f, 0.0014578610425814986f, 0.0018078414723277092f, 0.0022346796467900276f, 0.0028121157083660364f, 0.0016986444825306535f, 0.0016809094231575727f, 0.002216080203652382f, 0.0018003868171945214f, 0.0017996927490457892f, 0.001381659065373242f, 0.0011782210785895586f, 0.001619898364879191f, 0.0024657966569066048f, 0.002278180094435811f, 0.0014287930680438876f, 0.0015708854189142585f, 0.0023209627252072096f, 0.0019725742749869823f, 0.0012523161713033915f, 0.0015590171096846461f, 0.0016892412677407265f, 0.0019005655776709318f, 0.0021625084336847067f, 0.0018756246427074075f, 0.0021792538464069366f, 0.0017444402910768986f, 0.0013507931726053357f, 0.001867187093012035f, 0.0018799270037561655f, 0.0016257863026112318f, 0.001692750956863165f, 0.0018076993292197585f, 0.0022437656298279762f, 0.001691969926469028f, 0.002350238151848316f, 0.001550991553813219f, 0.002017567167058587f, 0.0018404056318104267f, 0.0017970555927604437f, 0.002304288325831294f, 0.002340567298233509f, 0.0015914005925878882f, 0.0015301057137548923f, 0.002089080400764942f, 0.0015241452492773533f, 0.001388928503729403f, 0.002233463805168867f, 0.00229271175339818f, 0.003188986796885729f, 0.0021641659550368786f, 0.0019768010824918747f, 0.001707821385934949f, 0.001956858206540346f, 0.0021514631807804108f, 0.0016109193675220013f, 0.002531461650505662f, 0.0023461233358830214f, 0.002659920835867524f, 0.0021482924930751324f, 0.002383297076448798f, 0.0016608904115855694f, 0.0018324247794225812f, 0.0016915991436690092f, 0.0019126703264191747f, 0.0023218069691210985f, 0.0019371529342606664f, 0.0017926081782206893f, 0.002033080207183957f, 0.0016117888735607266f, 0.0021739578805863857f, 0.0016859633615240455f, 0.0017795299645513296f, 0.0025189805310219526f, 0.002300037769600749f, 0.0017862358363345265f, 0.002294507110491395f, 0.002260880544781685f, 0.0016839689342305064f, 0.001181922503747046f, 0.0017442993121221662f, 0.00237353821285069f, 0.002911351155489683f, 0.0018247541738674045f, 0.001376485452055931f, 0.0014769103145226836f, 0.0021008895710110664f, 0.001933207968249917f, 0.0017953955102711916f, 0.0019223707495257258f, 0.00165430863853544f, 0.002201517578214407f, 0.0014711746480315924f, 0.0018451906507834792f, 0.0027123999316245317f, 0.002364502055570483f, 0.0012233223533257842f, 0.002614379394799471f, 0.0013643106212839484f, 0.0013083030935376883f, 0.002307041548192501f, 0.0017619840800762177f, 0.0016111854929476976f, 0.0019705002196133137f, 0.0016449163667857647f, 0.0016084808157756925f, 0.0020469720475375652f, 0.0014189082430675626f, 0.0015964240301400423f, 0.001644867705181241f, 0.002167352708056569f, 0.0018461586441844702f, 0.001665709656663239f, 0.0018312939209863544f, 0.001966094598174095f, 0.0013919631019234657f, 0.0022411297541111708f, 0.0019970962312072515f, 0.0019005624344572425f, 0.0021860653068870306f, 0.0018147138180211186f, 0.0011251094983890653f, 0.001480422681197524f, 0.0018443878507241607f, 0.0013623156119138002f, 0.0022674547508358955f, 0.002120975172147155f, 0.002055372344329953f, 0.002250957302749157f, 0.0018012529471889138f, 0.002205869648605585f, 0.0020454786717891693f, 0.0013356204144656658f, 0.0021157332230359316f, 0.0017898579826578498f, 0.0018753682961687446f, 0.0020280336029827595f, 0.00115836295299232f, 0.002181548625230789f, 0.002287931740283966f, 0.0020922452677041292f, 0.0016598243964836001f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005778512917459011f, 0.005584978964179754f, 0.006657117046415806f, 0.01346826832741499f, 0.00895940326154232f, 0.0034979796037077904f, 0.007344556972384453f, 0.008191719651222229f, 0.008896666578948498f, 0.003209397429600358f, 0.014316000044345856f, 0.008442327380180359f, 0.005636043846607208f, 0.008229007944464684f, 0.007754080463200808f, 0.014050263911485672f, 0.00810997560620308f, 0.008323602378368378f, 0.004157789051532745f, 0.007950928993523121f, 0.009343607351183891f, 0.0033226979430764914f, 0.006978483404964209f, 0.005800470244139433f, 0.00778991961851716f, 0.007891273126006126f, 0.0072788153775036335f, 0.006526149343699217f, 0.009245378896594048f, 0.005797369405627251f, 0.006246025208383799f, 0.011381223797798157f, 0.005292251240462065f, 0.006905985530465841f, 0.006126368883997202f, 0.008718959987163544f, 0.0055297622457146645f, 0.006340992636978626f, 0.010754533112049103f, 0.011366656050086021f, 0.011485611088573933f, 0.012652173638343811f, 0.007890784181654453f, 0.011740258894860744f, 0.012943120673298836f, 0.009903263300657272f, 0.011161011643707752f, 0.0067398943938314915f, 0.005556364543735981f, 0.007435658946633339f, 0.015294603072106838f, 0.0063943215645849705f, 0.012030269019305706f, 0.013150383718311787f, 0.0073634483851492405f, 0.00943929236382246f, 0.011126884259283543f, 0.007713739760220051f, 0.005398867651820183f, 0.0040257773362100124f, 0.008580940775573254f, 0.0116013428196311f, 0.010529793798923492f, 0.010593844577670097f, 0.004656556528061628f, 0.007721114903688431f, 0.0064377556554973125f, 0.006848438177257776f, 0.0071806395426392555f, 0.006303627043962479f, 0.008451968431472778f, 0.002499686088413f, 0.003332651685923338f, 0.009841960854828358f, 0.01069469191133976f, 0.01162706222385168f, 0.013276242651045322f, 0.007750329561531544f, 0.009784728288650513f, 0.007928566075861454f, 0.007257517427206039f, 0.007326788268983364f, 0.00950325932353735f, 0.0065675415098667145f, 0.009025923907756805f, 0.003955688793212175f, 0.005754736252129078f, 0.007710848469287157f, 0.009031157940626144f, 0.008959563449025154f, 0.004413232672959566f, 0.00741166714578867f, 0.009141099639236927f, 0.00442583579570055f, 0.012583782896399498f, 0.009712711907923222f, 0.008034931495785713f, 0.008634641766548157f, 0.005563529673963785f, 0.005753566510975361f, 0.005987988319247961f, 0.012133101001381874f, 0.0063538625836372375f, 0.012195711024105549f, 0.007335939910262823f, 0.007379150949418545f, 0.009438778273761272f, 0.010050268843770027f, 0.007172202225774527f, 0.011300257407128811f, 0.006378023885190487f, 0.006279949098825455f, 0.007864831946790218f, 0.009469895623624325f, 0.009133939631283283f, 0.0048445239663124084f, 0.004479963798075914f, 0.0023943488486111164f, 0.005198073107749224f, 0.005294319242238998f, 0.009352940134704113f, 0.006926247384399176f, 0.00994363147765398f, 0.02329852059483528f, 0.0063750301487743855f, 0.004262094851583242f, 0.004872183781117201f, 0.007521623745560646f, 0.009033502079546452f, 0.007497631944715977f, 0.004124757833778858f, 0.008990618400275707f, 0.005441760644316673f, 0.0062791150994598866f, 0.006993671879172325f, 0.005846101325005293f, 0.003816901706159115f, 0.0059875366277992725f, 0.004273321013897657f, 0.006502609699964523f, 0.005754030309617519f, 0.010615179315209389f, 0.005952003877609968f, 0.006050141528248787f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017258585430681705f, 0.0018268059939146042f, 0.0012139431200921535f, 0.0016495540039613843f, 0.0017141117714345455f, 0.0013565084664151073f, 0.002105057006701827f, 0.001730626099742949f, 0.001864217803813517f, 0.0012802340788766742f, 0.0014362991787493229f, 0.0012604336952790618f, 0.0018773260526359081f, 0.0015626741806045175f, 0.0016984118847176433f, 0.0019096835749223828f, 0.0017628531204536557f, 0.0013129723956808448f, 0.0017687276704236865f, 0.0020701754838228226f, 0.0016392342513427138f, 0.001221643527969718f, 0.0015804407885298133f, 0.002100032288581133f),
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
    AI_PACK_INTQ_SCALE(0.0012754846829921007f, 0.0013577371137216687f, 0.0011431215098127723f, 0.0015074604889377952f, 0.0010695281671360135f, 0.001897182548418641f, 0.0012570091057568789f, 0.0010676750680431724f, 0.0013894998701289296f, 0.0016877783928066492f, 0.0009842505678534508f, 0.001861146418377757f, 0.0013144946424290538f, 0.0009428760968148708f, 0.0015376530354842544f, 0.00147474545519799f, 0.0014475238276645541f, 0.0011945917503908277f, 0.0010382916079834104f, 0.0013773207319900393f, 0.0012095380807295442f, 0.001724821631796658f, 0.0010894408915191889f, 0.0011532841017469764f, 0.0013197788503021002f, 0.0017026918940246105f, 0.0012751680333167315f, 0.001230192487128079f, 0.0014661330496892333f, 0.0012122879270464182f, 0.0010596966603770852f, 0.0012730072485283017f, 0.0016599736409261823f, 0.0017112998757511377f, 0.0014520217664539814f, 0.0019187668804079294f, 0.0016099566128104925f, 0.000800661335233599f, 0.0011939104879274964f, 0.0013739633141085505f, 0.0014555369270965457f, 0.0010692919604480267f, 0.0010345637565478683f, 0.0012809757608920336f, 0.0019943243823945522f, 0.0012421781430020928f, 0.001505932305008173f, 0.0011776475002989173f, 0.0012949190568178892f, 0.002131799701601267f, 0.0018912957748398185f, 0.0017387636471539736f, 0.0014117035316303372f, 0.0013501214561983943f, 0.0013293428346514702f, 0.0021228957921266556f, 0.0008327882969751954f, 0.0010393753182142973f, 0.0013304142048582435f, 0.001843330217525363f, 0.0011628972133621573f, 0.0014985365560278296f, 0.0013334552058950067f, 0.0008730700938031077f, 0.0009506780188530684f, 0.0014569956110790372f, 0.0015710151055827737f, 0.0011713783023878932f, 0.001613367348909378f, 0.0013868848327547312f, 0.0011963301803916693f, 0.001218103221617639f, 0.0019227620214223862f, 0.0011741338530555367f, 0.0014872803585603833f, 0.0019265852170065045f, 0.0012730006128549576f, 0.0011654047993943095f, 0.0013745707692578435f, 0.0015661929501220584f, 0.0012138254242017865f, 0.0014620503643527627f, 0.0011487298179417849f, 0.0013815183192491531f, 0.0012906435877084732f, 0.001338302274234593f, 0.0010431527625769377f, 0.0013174887280911207f, 0.0010750173823907971f, 0.0016531390137970448f, 0.001187217771075666f, 0.0016570762963965535f, 0.0017163889715448022f, 0.0020224256440997124f, 0.001684329705312848f, 0.0010240457486361265f, 0.0016948755364865065f, 0.001708241761662066f, 0.0015948519576340914f, 0.0016452153213322163f, 0.0013587629655376077f, 0.0011149427155032754f, 0.0011450982419773936f, 0.0025401811581104994f, 0.0012408595066517591f, 0.0010402629850432277f, 0.001231808797456324f, 0.0015361789846792817f, 0.001269232016056776f, 0.0013155312044546008f, 0.0013679646654054523f, 0.0018338847439736128f, 0.0015571813564747572f, 0.0013035861775279045f, 0.001274092704989016f, 0.00166250579059124f, 0.001276181428693235f, 0.0013745189644396305f, 0.0012408732436597347f, 0.0011710396502166986f, 0.0016626573633402586f, 0.0015619145706295967f, 0.0013023611390963197f, 0.0011914235074073076f, 0.0014998341212049127f, 0.002099720761179924f, 0.0012671943986788392f, 0.001279332092963159f, 0.00159566814545542f, 0.001621242263354361f, 0.0010399732273072004f, 0.0013755608815699816f, 0.0016161395469680429f, 0.001259776297956705f, 0.0014336007880046964f, 0.0012101767351850867f, 0.0016710092313587666f, 0.0013486765092238784f, 0.0015385590959340334f, 0.0021654011216014624f, 0.0017685327911749482f, 0.0016061459900811315f, 0.0015377048403024673f, 0.0014924925053492188f),
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
    AI_PACK_INTQ_SCALE(0.004434992093592882f, 0.006756569724529982f, 0.007455353159457445f, 0.008246331475675106f, 0.008275342173874378f, 0.004384878557175398f, 0.006822085008025169f, 0.0078772883862257f, 0.007024024147540331f, 0.006644911132752895f, 0.010424993932247162f, 0.004641938954591751f, 0.012175255455076694f, 0.0068923900835216045f, 0.00521496869623661f, 0.005814920645207167f, 0.0035591411869972944f, 0.005083354189991951f, 0.004837005864828825f, 0.006101869512349367f, 0.0059939841739833355f, 0.003728689393028617f, 0.010860523208975792f, 0.004009484779089689f, 0.006902103777974844f, 0.009149346500635147f, 0.007407193537801504f, 0.005422158166766167f, 0.0029618670232594013f, 0.00436804024502635f, 0.005850175395607948f, 0.009725897572934628f, 0.0056006344966590405f, 0.007971062324941158f, 0.00916859321296215f, 0.0041973646730184555f, 0.006707589142024517f, 0.011350264772772789f, 0.008624544367194176f, 0.006535938475281f, 0.00634545786306262f, 0.007443866226822138f, 0.01069185696542263f, 0.005904725287109613f, 0.0035784458741545677f, 0.009133968502283096f, 0.003950328100472689f, 0.004973363596946001f, 0.006449451670050621f, 0.005857854150235653f, 0.005865143612027168f, 0.009920631535351276f, 0.010192005895078182f, 0.010660643689334393f, 0.007008654996752739f, 0.007510607596486807f, 0.006271830759942532f, 0.0057591828517615795f, 0.007691004779189825f, 0.004170151427388191f, 0.005485637113451958f, 0.006066626403480768f, 0.006624195724725723f, 0.008414496667683125f, 0.008288120850920677f, 0.003643812146037817f, 0.0062536937184631824f, 0.005681028589606285f, 0.011212531477212906f, 0.008082833141088486f, 0.007983630523085594f, 0.0064476244151592255f, 0.005222167819738388f, 0.011376007460057735f, 0.005614868830889463f, 0.004341688472777605f, 0.002927729394286871f, 0.009744929149746895f, 0.005524811800569296f, 0.006943254265934229f, 0.006468667648732662f, 0.0067945560440421104f, 0.006337258033454418f, 0.007351371925324202f, 0.007230646442621946f, 0.010825610719621181f, 0.006467643193900585f, 0.003793336683884263f, 0.005996070336550474f, 0.009824809618294239f, 0.008374311029911041f, 0.009040308184921741f, 0.005913058295845985f, 0.006002229638397694f, 0.0050145722925662994f, 0.012217458337545395f, 0.004538739565759897f, 0.004673725459724665f, 0.006586176808923483f, 0.007541723549365997f, 0.0076800319366157055f, 0.005336820613592863f, 0.006471444386988878f, 0.004438930656760931f, 0.005967006552964449f, 0.0061887335032224655f, 0.005300639662891626f, 0.008601206354796886f, 0.004247990436851978f, 0.007483648136258125f, 0.004630135837942362f, 0.007464752998203039f, 0.008925500325858593f, 0.007547587621957064f, 0.00754546606913209f, 0.01104751043021679f, 0.004468793980777264f, 0.006538165733218193f, 0.008689011447131634f, 0.005988630466163158f, 0.007875959388911724f, 0.006626845803111792f, 0.00452445400878787f, 0.003368923207744956f, 0.0060759037733078f, 0.004532190505415201f, 0.005689908284693956f, 0.005023450590670109f, 0.004490950144827366f, 0.0035333402920514345f, 0.009057092480361462f, 0.0038558614905923605f, 0.007984288968145847f, 0.006726440973579884f, 0.004919922444969416f, 0.008359282277524471f, 0.004055914003401995f, 0.009943299926817417f, 0.005372657440602779f, 0.00851602852344513f, 0.0077673825435340405f, 0.007833980023860931f, 0.004210995975881815f, 0.006614812184125185f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001647329074330628f, 0.0015804799040779471f, 0.0016754090320318937f, 0.0018029821803793311f, 0.0016959444619715214f, 0.002211419865489006f, 0.0018196048913523555f, 0.0021167644299566746f, 0.0017145760357379913f, 0.0018124246271327138f, 0.001953201135620475f, 0.0015252497978508472f, 0.001533461851067841f, 0.002017352730035782f, 0.0017584658926352859f, 0.0021627419628202915f, 0.002141833771020174f, 0.0018956470303237438f, 0.0016977976774796844f, 0.0023516176734119654f, 0.0021534760016947985f, 0.0016833344707265496f, 0.001953752478584647f, 0.0018580766627565026f, 0.0016917278990149498f, 0.0022398121654987335f, 0.0019177717622369528f, 0.0018349499441683292f, 0.0016063188668340445f, 0.002006530063226819f, 0.0013820563908666372f, 0.0016226802254095674f, 0.0024203762877732515f, 0.0017980757402256131f, 0.002737535862252116f, 0.0022285711020231247f, 0.0015320241218432784f, 0.0014371335273608565f, 0.00225379248149693f, 0.0018677898915484548f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022687562741339207f, 0.0026704417541623116f, 0.0017550501506775618f, 0.0022798990830779076f, 0.0019670440815389156f, 0.0029537761583924294f, 0.0016388448420912027f, 0.0016997563652694225f, 0.0015250483993440866f, 0.002203252399340272f, 0.001893263659439981f, 0.0019070685375481844f, 0.002331426367163658f, 0.0023340717889368534f, 0.002199535956606269f, 0.002001591958105564f, 0.002129968488588929f, 0.0022552183363586664f, 0.002046792069450021f, 0.0028351477812975645f, 0.0020663938485085964f, 0.0021478976123034954f, 0.0013846108922734857f, 0.0026495743077248335f, 0.0032641601283103228f, 0.0019150254083797336f, 0.0019411416724324226f, 0.0018070752266794443f, 0.0019852726254612207f, 0.0021550829987972975f, 0.0024242857471108437f, 0.0017136810347437859f, 0.0018810757901519537f, 0.0022079076152294874f, 0.0017890274757519364f, 0.0021578208543360233f, 0.002456020563840866f, 0.0025331517681479454f, 0.001672654994763434f, 0.002184854820370674f, 0.001956624910235405f, 0.0018868690822273493f, 0.0019187643192708492f, 0.0019764171447604895f, 0.00212474656291306f, 0.0019698324613273144f, 0.0025401629973202944f, 0.002683187834918499f, 0.0020913181360810995f, 0.002530994825065136f, 0.0020202083978801966f, 0.002444409066811204f, 0.0019529479322955012f, 0.0014399046776816249f, 0.0019300266867503524f, 0.0017753478605300188f, 0.0024338492657989264f, 0.002543360460549593f, 0.002285926602780819f, 0.0016495144227519631f, 0.001967044547200203f, 0.001803447026759386f, 0.00232028029859066f, 0.002057184698060155f, 0.0027955910190939903f, 0.002155686030164361f, 0.0019472921267151833f, 0.0019180607050657272f, 0.002335893688723445f, 0.0022520385682582855f, 0.0029443877283483744f, 0.0026323895435780287f, 0.002290448173880577f, 0.002809229539707303f, 0.002410793909803033f, 0.001631766790524125f, 0.002267506904900074f, 0.0017057782970368862f, 0.0022801116574555635f, 0.00213970011100173f, 0.002425988670438528f, 0.002420104341581464f, 0.002308607567101717f, 0.002618927974253893f, 0.0016434491844847798f, 0.002593802521005273f, 0.0021704898681491613f, 0.002442501485347748f, 0.002343195490539074f, 0.002176507841795683f, 0.0022721621207892895f, 0.0014304843498393893f, 0.0014810507418587804f, 0.0020994071383029222f, 0.002607290167361498f, 0.002146896906197071f, 0.002305819885805249f, 0.0028900019824504852f, 0.001944000250659883f, 0.0019458081806078553f, 0.0016710703494027257f, 0.0020300177857279778f, 0.002166439313441515f, 0.0016486103413626552f, 0.002100860234349966f, 0.001891600200906396f, 0.002320394618436694f, 0.0032210613135248423f, 0.0019029787508770823f, 0.001837839954532683f, 0.0019702042918652296f, 0.0016639117384329438f, 0.0017264169873669744f, 0.0023316231090575457f, 0.002583777531981468f, 0.002152442466467619f, 0.002110005123540759f, 0.0019967881962656975f, 0.0026448876596987247f, 0.0021454014349728823f, 0.0028310162015259266f, 0.0019037439487874508f, 0.0021808769088238478f, 0.0023456343915313482f, 0.0030834858771413565f, 0.0022588842548429966f, 0.0023598389234393835f, 0.0022214914206415415f, 0.002593626966699958f, 0.0019525201059877872f, 0.0018377468222752213f, 0.002424749545753002f, 0.002253703074529767f, 0.0026080654934048653f, 0.0020142472349107265f, 0.0028240447863936424f, 0.0019158683717250824f, 0.0029960214160382748f, 0.00283624860458076f, 0.002223340794444084f, 0.001938172965310514f, 0.002871328266337514f, 0.0018270551227033138f, 0.0019165660487487912f, 0.003424126887694001f, 0.002428028965368867f, 0.0018805413274094462f, 0.00263061816804111f, 0.001897297683171928f, 0.0025057082530111074f, 0.00224659638479352f, 0.0019016086589545012f, 0.002628640504553914f, 0.0026795808225870132f, 0.0019426019862294197f, 0.0022872549016028643f, 0.0017002495005726814f, 0.0018778780940920115f, 0.002109713386744261f, 0.0016755206743255258f, 0.0019861224573105574f, 0.002439501928165555f, 0.002166289370507002f, 0.0022890735417604446f, 0.0028930928092449903f, 0.0012973396806046367f, 0.0022655893117189407f, 0.0024535893462598324f, 0.0024961114395409822f, 0.0020238400902599096f, 0.0014402420492842793f, 0.0024053226225078106f, 0.0019081810023635626f, 0.0019507197430357337f, 0.0015599457547068596f, 0.0022663455456495285f, 0.0024321344681084156f, 0.0021771208848804235f, 0.002339055063202977f, 0.0022741053253412247f, 0.0022425861097872257f, 0.0014115835074335337f, 0.0024189860559999943f, 0.002444822806864977f, 0.0018489380599930882f, 0.0029938591178506613f, 0.002290271455422044f, 0.0023106697481125593f, 0.0022287247702479362f, 0.002178136957809329f, 0.0020532188937067986f, 0.0020780321210622787f, 0.0027416639495640993f, 0.0020170845091342926f, 0.0027035509701818228f, 0.0023094392381608486f, 0.0026587890461087227f, 0.002537734340876341f, 0.0032051510643213987f, 0.002190016210079193f, 0.0018012860091403127f, 0.001837586984038353f, 0.002578083425760269f, 0.002944196807220578f, 0.0022036926820874214f, 0.0027530163060873747f, 0.0024456274695694447f, 0.0025503109209239483f, 0.001954686362296343f, 0.0024598045274615288f, 0.002284514717757702f, 0.002776383189484477f, 0.00197150488384068f, 0.002135954098775983f, 0.0021197774913161993f, 0.0019290780182927847f, 0.0019179065711796284f, 0.002367344917729497f, 0.0026818474289029837f, 0.002253021113574505f, 0.002256507519632578f, 0.002532313112169504f, 0.001769710099324584f, 0.0017887103604152799f, 0.0021017224062234163f, 0.003337488044053316f, 0.0024484449531883f, 0.0017318195896223187f, 0.001497744582593441f, 0.003063308075070381f, 0.0017582924338057637f, 0.0019775242544710636f, 0.0022938710171729326f, 0.0023452311288565397f, 0.0013139379443600774f, 0.002345734043046832f, 0.002267942763864994f, 0.002402303274720907f, 0.0018230370478704572f, 0.00295569421723485f),
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
    AI_PACK_INTQ_SCALE(0.005844941362738609f, 0.007960069924592972f, 0.008664569817483425f, 0.0065877861343324184f, 0.00807754322886467f, 0.008519798517227173f, 0.005863192491233349f, 0.008309111930429935f, 0.006269481964409351f, 0.009679623879492283f, 0.005681428126990795f, 0.007307518273591995f, 0.004596218932420015f, 0.007882537320256233f, 0.008772044442594051f, 0.0145698431879282f, 0.006740373559296131f, 0.00786533486098051f, 0.004831571131944656f, 0.009714883752167225f, 0.007036837283521891f, 0.0043720342218875885f, 0.008475407026708126f, 0.007500166073441505f, 0.00723730493336916f, 0.007753868121653795f, 0.0115676773712039f, 0.005870856810361147f, 0.0059180669486522675f, 0.006773083470761776f, 0.004297624342143536f, 0.004573137499392033f, 0.004797480534762144f, 0.00871892087161541f, 0.0077511463314294815f, 0.00690509332343936f, 0.005026813130825758f, 0.007036671508103609f, 0.006252461113035679f, 0.009880888275802135f, 0.007746072951704264f, 0.008645979687571526f, 0.01274836901575327f, 0.005236084572970867f, 0.00511471601203084f, 0.006066686473786831f, 0.00820235162973404f, 0.007116398308426142f, 0.006907991133630276f, 0.006158330012112856f, 0.005346057936549187f, 0.0070641483180224895f, 0.01189062837511301f, 0.008272543549537659f, 0.01032206043601036f, 0.01715189591050148f, 0.0066770389676094055f, 0.009678983129560947f, 0.008745899423956871f, 0.007976885885000229f, 0.008178151212632656f, 0.01442136149853468f, 0.00722026452422142f, 0.0070869107730686665f, 0.0075622969307005405f, 0.0076496796682477f, 0.00558405602350831f, 0.010198766365647316f, 0.0038740779273211956f, 0.007044808007776737f, 0.005893942900002003f, 0.00917913019657135f, 0.009235392324626446f, 0.006384897045791149f, 0.00910379458218813f, 0.010910866782069206f, 0.0072592925280332565f, 0.008798312395811081f, 0.007431377191096544f, 0.008138633333146572f, 0.005623871460556984f, 0.005257711745798588f, 0.015501177869737148f, 0.010731020011007786f, 0.007453818805515766f, 0.006169180851429701f, 0.0047057392075657845f, 0.003192066913470626f, 0.0056821973994374275f, 0.008021646179258823f, 0.007312207017093897f, 0.010660720989108086f, 0.015080169774591923f, 0.0034798237029463053f, 0.005821677856147289f, 0.0039458670653402805f, 0.009586239233613014f, 0.008697637356817722f, 0.007386167999356985f, 0.008713966235518456f, 0.017371833324432373f, 0.010417687706649303f, 0.007062441203743219f, 0.008368336595594883f, 0.006514047272503376f, 0.014417053200304508f, 0.008443277329206467f, 0.0044184476137161255f, 0.006573149468749762f, 0.007958125323057175f, 0.0051522692665457726f, 0.00689507182687521f, 0.012410838156938553f, 0.007293904200196266f, 0.0076021053828299046f, 0.007584620267152786f, 0.012991007417440414f, 0.007076730020344257f, 0.0072063179686665535f, 0.0154420742765069f, 0.016871348023414612f, 0.006390730384737253f, 0.006866461597383022f, 0.007147819735109806f, 0.004968384746462107f, 0.006350335665047169f, 0.007301700301468372f, 0.007886827923357487f, 0.007945690304040909f, 0.007713780272752047f, 0.01007628533989191f, 0.009755134582519531f, 0.012066695839166641f, 0.008965018205344677f, 0.014881616458296776f, 0.007912120781838894f, 0.011555647477507591f, 0.00648582074791193f, 0.0043569570407271385f, 0.005677709821611643f, 0.010358724743127823f, 0.006066590081900358f, 0.006894129794090986f, 0.004246810916811228f, 0.0066243065521121025f, 0.0068888054229319096f, 0.007157991174608469f, 0.0053045605309307575f, 0.009208442643284798f, 0.007263537030667067f, 0.004276189021766186f, 0.011167391203343868f, 0.011481424793601036f, 0.007292820606380701f, 0.006394514348357916f, 0.020994046702980995f, 0.0091926334425807f, 0.010018882341682911f, 0.005369893740862608f, 0.005751783959567547f, 0.005296641495078802f, 0.011737869121134281f, 0.011686309240758419f, 0.005429468117654324f, 0.009307128377258778f, 0.027195444330573082f, 0.005347745027393103f, 0.006787237711250782f, 0.008820484392344952f, 0.007942477241158485f, 0.011364182457327843f, 0.009744794107973576f, 0.01157460454851389f, 0.01242118887603283f, 0.008834711275994778f, 0.007558537647128105f, 0.007745669223368168f, 0.007611391134560108f, 0.005396607797592878f, 0.007427171338349581f, 0.006578214466571808f, 0.007707448676228523f, 0.008002672344446182f, 0.0065423958003520966f, 0.011548105627298355f, 0.005415698513388634f, 0.009674654342234135f, 0.008717588149011135f, 0.012996205128729343f, 0.005547975189983845f, 0.00559963658452034f, 0.006168684922158718f, 0.004895355552434921f, 0.0069173770025372505f, 0.01141544058918953f, 0.005824271589517593f, 0.007994095794856548f, 0.00583588657900691f, 0.010822754353284836f, 0.010500180535018444f, 0.011671965010464191f, 0.0049066077917814255f, 0.012187705375254154f, 0.0077440449967980385f, 0.0051398491486907005f, 0.008826145902276039f, 0.0058925822377204895f, 0.007943106815218925f, 0.007241844665259123f, 0.0060097891837358475f, 0.007345470134168863f, 0.009173531085252762f, 0.008577072992920876f, 0.0061651249416172504f, 0.011444940231740475f, 0.014767852611839771f, 0.006082839798182249f, 0.006547343451529741f, 0.004538445733487606f, 0.008348311297595501f, 0.011318503879010677f, 0.009196197614073753f, 0.007411818020045757f, 0.007956373505294323f, 0.006872644182294607f, 0.008895784616470337f, 0.009532991796731949f, 0.008298931643366814f, 0.012376987375319004f, 0.0053601921536028385f, 0.006866120733320713f, 0.00579553609713912f, 0.006728442385792732f, 0.008918294683098793f, 0.013686959631741047f, 0.006759764160960913f, 0.010874094441533089f, 0.005962525960057974f, 0.008682060986757278f, 0.00804611761122942f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018798899836838245f, 0.001996563281863928f, 0.002348547335714102f, 0.0017707989318296313f, 0.0017728304956108332f, 0.002214434091001749f, 0.0017283862689509988f, 0.0026649327483028173f, 0.0017426807899028063f, 0.0023734208662062883f, 0.0013111490989103913f, 0.0018171125557273626f, 0.0021110442467033863f, 0.0015928841894492507f, 0.0017943748971447349f, 0.0021066381596028805f, 0.0017559414263814688f, 0.0017703677294775844f, 0.0015027248300611973f, 0.0018826652085408568f, 0.002440660260617733f, 0.001637464971281588f, 0.0019477199530228972f, 0.002215299755334854f, 0.0020654748659580946f, 0.0018668187549337745f, 0.0016635971842333674f, 0.001580355572514236f, 0.0013321067672222853f, 0.0019025211222469807f, 0.0017033418407663703f, 0.002523521427065134f, 0.0018371493788436055f, 0.0012185446685180068f, 0.001925491844303906f, 0.0016007220838218927f, 0.0016604199772700667f, 0.001831775764003396f, 0.0017029140144586563f, 0.0014575920067727566f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001639008056372404f, 0.0018498754361644387f, 0.002084519946947694f, 0.0023061418905854225f, 0.001526678097434342f, 0.0011948819737881422f, 0.001986726885661483f, 0.0014615203253924847f, 0.0019089055713266134f, 0.0016364819603040814f, 0.0014071020996198058f, 0.002165175974369049f, 0.0012301555834710598f, 0.0014078295789659023f, 0.0019509164849296212f, 0.0020993018988519907f, 0.0015356811927631497f, 0.002228090539574623f, 0.00116044282913208f, 0.0023563203867524862f, 0.0017442950047552586f, 0.0017119779950007796f, 0.001749994233250618f, 0.0020678439177572727f, 0.000982314464636147f, 0.0015459408750757575f, 0.001457613194361329f, 0.0019386151107028127f, 0.0022222017869353294f, 0.001501566614024341f, 0.0017476361244916916f, 0.00160461594350636f, 0.0016464624786749482f, 0.0017542504938319325f, 0.0013132517924532294f, 0.0015237079933285713f, 0.0015372417401522398f, 0.001941730617545545f, 0.0022706359159201384f, 0.0016244007274508476f, 0.0022803409956395626f, 0.0016777280252426863f, 0.002447006991133094f, 0.0012931757373735309f, 0.001932640327140689f, 0.0024936948902904987f, 0.0017638232093304396f, 0.001699382090009749f, 0.002750104758888483f, 0.001438653445802629f, 0.0017518948297947645f, 0.001506837084889412f, 0.0022674663923680782f, 0.0013232191558927298f, 0.0021231500431895256f, 0.001641857554204762f, 0.001412349520251155f, 0.0024462419096380472f, 0.002248860662803054f, 0.0011947707971557975f, 0.0014595434768125415f, 0.001563319587148726f, 0.0018630686681717634f, 0.001811678521335125f, 0.002172264736145735f, 0.0020084711723029613f, 0.0014279634924605489f, 0.0014352570287883282f, 0.0019700373522937298f, 0.0012669962598010898f, 0.0019144200487062335f, 0.002602871973067522f, 0.0021298036444932222f, 0.001302605145610869f, 0.0017402282683178782f, 0.0017878800863400102f, 0.002006309572607279f, 0.0014882904943078756f, 0.0017739036120474339f, 0.001986612332984805f, 0.001725600566715002f, 0.001848619431257248f, 0.0015603700885549188f, 0.0014677031431347132f, 0.0021865081507712603f, 0.0016559893265366554f, 0.0018585785292088985f, 0.0014922545524314046f, 0.0019873257260769606f, 0.0018011500360444188f, 0.0018526003696024418f, 0.0017297853482887149f, 0.0018228490371257067f, 0.000941846810746938f, 0.0013039526529610157f, 0.0017223566537722945f, 0.0016815332928672433f, 0.0017667588545009494f, 0.0022146757692098618f, 0.0013307800982147455f, 0.0021588746458292007f, 0.001736100995913148f, 0.002009556395933032f, 0.0014948620228096843f, 0.0018162061460316181f, 0.001296288101002574f, 0.0017659941222518682f, 0.0015859917039051652f, 0.001681322930380702f, 0.001058397814631462f, 0.001528879744000733f, 0.002531027887016535f, 0.002251925878226757f, 0.0018372044432908297f, 0.0015337638324126601f, 0.001311028259806335f, 0.0013401220785453916f, 0.0019550826400518417f, 0.0011457609944045544f, 0.0010537627385929227f, 0.001541419536806643f, 0.0020437210332602262f, 0.0026390941347926855f, 0.0015573934651911259f, 0.0012928037904202938f, 0.001626157551072538f, 0.002212456427514553f, 0.0018198181642219424f, 0.001822629477828741f, 0.0015486290212720633f, 0.0019504745723679662f, 0.002251923317089677f, 0.0019960468634963036f, 0.0015945322811603546f, 0.0017479691887274384f, 0.001302794087678194f, 0.001655724598094821f, 0.0019702075514942408f, 0.0014999689301475883f, 0.001664083800278604f, 0.0020370495039969683f, 0.0017857025377452374f, 0.0014341213973239064f, 0.0019772127270698547f, 0.0024925365578383207f, 0.003010958433151245f, 0.0017198326531797647f, 0.0014917299849912524f, 0.001218074350617826f, 0.0013655428774654865f, 0.00152653141412884f, 0.0011654135305434465f, 0.0012811098713427782f, 0.0015187084209173918f, 0.0018188090762123466f, 0.0016674388898536563f, 0.001793364528566599f, 0.0014212304959073663f, 0.0014360422501340508f, 0.0015754152555018663f, 0.0014711958356201649f, 0.00183855090290308f, 0.002459597075358033f, 0.0015883359592407942f, 0.001245139050297439f, 0.0018041478469967842f, 0.001904670731164515f, 0.0016018184833228588f, 0.001261801109649241f, 0.0016284962184727192f, 0.00181683583650738f, 0.0013439388712868094f, 0.0020590696949511766f, 0.0019062906503677368f, 0.002191657666116953f, 0.0014655456179752946f, 0.0017051895847544074f, 0.0016195536591112614f, 0.002399499760940671f, 0.001993963262066245f, 0.001343178446404636f, 0.0012702983804047108f, 0.00186025386210531f, 0.0018469038186594844f, 0.0013671157648786902f, 0.0017233412945643067f, 0.0017080627148970962f, 0.001329213147982955f, 0.0019281613640487194f, 0.0016237058443948627f, 0.0015496060950681567f, 0.0019033147254958749f, 0.0014473849441856146f, 0.001029009697958827f, 0.001520258141681552f, 0.001311610802076757f, 0.0011374043533578515f, 0.0014947832096368074f, 0.001508753397502005f, 0.0018203853396698833f, 0.0012267139973118901f, 0.0020358178298920393f, 0.0015116475988179445f, 0.0017923892010003328f, 0.0015766998985782266f, 0.0013238036772236228f, 0.0018149464158341289f, 0.0027305365074425936f, 0.0017688076477497816f, 0.0016482342034578323f, 0.002527158707380295f, 0.0014798041665926576f, 0.001953624654561281f, 0.0016350412042811513f, 0.0018671737052500248f, 0.001440811320208013f, 0.001684560440480709f, 0.0014920014655217528f, 0.0010710658971220255f, 0.0014407432172447443f, 0.001667509088292718f, 0.0018968530930578709f, 0.0012165284715592861f, 0.00203112093731761f, 0.001438943319953978f, 0.001226759166456759f, 0.001389363664202392f, 0.0023714974522590637f, 0.0014763232320547104f, 0.0019920405466109514f, 0.0011528111062943935f, 0.0019337839912623167f, 0.002063353545963764f, 0.0019051440758630633f, 0.0019219572423025966f, 0.0023649788927286863f, 0.0016947368858382106f, 0.0016234510112553835f, 0.001215956755913794f, 0.0025039128959178925f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008960690349340439f, 0.00682053342461586f, 0.004497301299124956f, 0.004747685045003891f, 0.006457841023802757f, 0.006793248932808638f, 0.007036758586764336f, 0.014498247765004635f, 0.00957191176712513f, 0.00636988366022706f, 0.007858567871153355f, 0.008482148870825768f, 0.011046960018575191f, 0.008285338059067726f, 0.007619678042829037f, 0.006455141585320234f, 0.01117245014756918f, 0.007742901798337698f, 0.013458747416734695f, 0.009083741344511509f, 0.010413354262709618f, 0.016317244619131088f, 0.009318497963249683f, 0.005300252698361874f, 0.022382235154509544f, 0.009975438006222248f, 0.021750088781118393f, 0.007447381503880024f, 0.007264339365065098f, 0.009110812097787857f, 0.003499389160424471f, 0.007822919636964798f, 0.004498938098549843f, 0.007542719133198261f, 0.010591443628072739f, 0.01040959544479847f, 0.0072057852521538734f, 0.00916528794914484f, 0.008587267249822617f, 0.010659074410796165f, 0.005558367818593979f, 0.010272355750203133f, 0.005045717116445303f, 0.005197986029088497f, 0.0060164849273860455f, 0.0077504045329988f, 0.00870041735470295f, 0.006827480159699917f, 0.0074015287682414055f, 0.006758652627468109f, 0.007506442256271839f, 0.008024397306144238f, 0.0063179186545312405f, 0.010236803442239761f, 0.007010787259787321f, 0.003810724476352334f, 0.00877217948436737f, 0.006516242865473032f, 0.012638128362596035f, 0.008517291396856308f, 0.005272912792861462f, 0.005523989908397198f, 0.0066114324145019054f, 0.008473832160234451f, 0.00584710156545043f, 0.007771398406475782f, 0.004665252286940813f, 0.007799907587468624f, 0.007875720970332623f, 0.01791544258594513f, 0.005005104001611471f, 0.008000984787940979f, 0.00829248409718275f, 0.005510055460035801f, 0.006417403928935528f, 0.007197174709290266f, 0.0068555898033082485f, 0.008758101612329483f, 0.011869102716445923f, 0.00795683078467846f, 0.007444079499691725f, 0.007919860072433949f, 0.009478515945374966f, 0.014094037935137749f, 0.005239587742835283f, 0.00724677462130785f, 0.006540320813655853f, 0.01798032969236374f, 0.009782967157661915f, 0.010489420965313911f, 0.009328282438218594f, 0.005768732167780399f, 0.00745581416413188f, 0.01001957431435585f, 0.011698972433805466f, 0.009458374232053757f, 0.006774896755814552f, 0.008268486708402634f, 0.008162906393408775f, 0.008910471573472023f, 0.008840728551149368f, 0.010006541386246681f, 0.0049498905427753925f, 0.0058680567890405655f, 0.008753006346523762f, 0.012928321957588196f, 0.006255617830902338f, 0.008933554403483868f, 0.006597965490072966f, 0.010281083174049854f, 0.010916299186646938f, 0.007027891930192709f, 0.0063558705151081085f, 0.00669045140966773f, 0.009683340787887573f, 0.007503991946578026f, 0.006072390824556351f, 0.017382949590682983f, 0.017633408308029175f, 0.01017376035451889f, 0.008341129869222641f, 0.008076495490968227f, 0.00630189199000597f, 0.008059998042881489f, 0.007227693684399128f, 0.014885982498526573f, 0.01119227521121502f, 0.006289336830377579f, 0.006645454093813896f, 0.007862208411097527f, 0.00835797656327486f, 0.00668509304523468f, 0.007845191285014153f, 0.006621005013585091f, 0.007613618858158588f, 0.005711923819035292f, 0.011564134620130062f, 0.014568403363227844f, 0.0032079119700938463f, 0.005331848748028278f, 0.009168756194412708f, 0.006567833479493856f, 0.008132643066346645f, 0.01296041440218687f, 0.011080182157456875f, 0.007851180620491505f, 0.009286457672715187f, 0.005766996648162603f, 0.01342399325221777f, 0.01326390914618969f, 0.006170880049467087f, 0.014132486656308174f, 0.007133679464459419f, 0.008585905656218529f, 0.0058069308288395405f, 0.007978749461472034f, 0.008295327425003052f, 0.009778711944818497f, 0.008017044514417648f, 0.006988626439124346f, 0.008782214485108852f, 0.010293949395418167f, 0.007825365290045738f, 0.010998890735208988f, 0.009370598942041397f, 0.008176269941031933f, 0.006533723324537277f, 0.006095814052969217f, 0.0053520952351391315f, 0.006751722190529108f, 0.006579123437404633f, 0.013362644240260124f, 0.007054083980619907f, 0.007575776427984238f, 0.007005212362855673f, 0.010080668143928051f, 0.01032655593007803f, 0.010402487590909004f, 0.005680598318576813f, 0.00830075517296791f, 0.006192036438733339f, 0.007300693076103926f, 0.007865486666560173f, 0.007643196266144514f, 0.017458515241742134f, 0.006946771405637264f, 0.008092178963124752f, 0.01447255164384842f, 0.006668932270258665f, 0.00852507445961237f, 0.007082074414938688f, 0.007984460331499577f, 0.005638113245368004f, 0.011763812974095345f, 0.004797104746103287f, 0.006043937057256699f, 0.020624686032533646f, 0.006242790725082159f, 0.008980395272374153f, 0.006140046287328005f, 0.010747409425675869f, 0.013095307163894176f, 0.01427717600017786f, 0.007850080728530884f, 0.011474494822323322f, 0.01373691949993372f, 0.007408238016068935f, 0.005604455713182688f, 0.0083815548568964f, 0.006623451132327318f, 0.005833615083247423f, 0.008580699563026428f, 0.005659152753651142f, 0.0073405117727816105f, 0.007838744670152664f, 0.008112394250929356f, 0.008311905898153782f, 0.005654086358845234f, 0.022084401920437813f, 0.006268611177802086f, 0.006933755706995726f, 0.0056374468840658665f, 0.004531891085207462f, 0.014720109291374683f, 0.006647398695349693f, 0.013508031144738197f, 0.00777453975751996f, 0.012136143632233143f, 0.009130455553531647f, 0.004541821777820587f, 0.01978321559727192f, 0.006632296834141016f, 0.011205851100385189f, 0.007028711959719658f, 0.008590580895543098f, 0.006993380840867758f, 0.010075025260448456f, 0.0034613958559930325f, 0.006924896966665983f, 0.007063837721943855f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_62_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0018324953271076083f, 0.00210825284011662f, 0.001973486505448818f, 0.0020380844362080097f, 0.002028855262324214f, 0.0025325557217001915f, 0.0019803738687187433f, 0.0019853475969284773f, 0.0024018206167966127f, 0.0021524406038224697f, 0.0021554934792220592f, 0.0019475339213386178f, 0.0016987748676910996f, 0.002788532990962267f, 0.002627173438668251f, 0.002062322339043021f, 0.0022498914040625095f, 0.002265715738758445f, 0.0019837075378745794f, 0.002491370774805546f, 0.0018027379410341382f, 0.0024167178198695183f, 0.0022079392801970243f, 0.0018589880783110857f, 0.002246882999315858f, 0.002555915154516697f, 0.0024483134038746357f, 0.002434771042317152f, 0.0017797985346987844f, 0.002577588427811861f, 0.0020271276589483023f, 0.0020375833846628666f, 0.0020304566714912653f, 0.0020891185849905014f, 0.0025538604240864515f, 0.00194271479267627f, 0.0021467304322868586f, 0.0022302058059722185f, 0.00212977547198534f, 0.001706827781163156f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008215891430154443f, 0.0009619355550967157f, 0.0014481268590316176f, 0.0013277849648147821f, 0.0011508825700730085f, 0.0013177444925531745f, 0.0013541990192607045f, 0.001177464728243649f, 0.0012011309154331684f, 0.0010709534399211407f, 0.001280699740163982f, 0.0013800192391499877f, 0.0014693259727209806f, 0.0015077333664521575f, 0.001678510452620685f, 0.0014668406220152974f, 0.0018379493849352002f, 0.00109396583866328f, 0.0014635036932304502f, 0.0014163579326123f, 0.0012964206980541348f, 0.0016346144257113338f, 0.0016777109121903777f, 0.0009483573376201093f, 0.0013975293841212988f, 0.0013981341617181897f, 0.0014162474544718862f, 0.0016885364893823862f, 0.0018628104589879513f, 0.0010036256862804294f, 0.0012595650041475892f, 0.001364022260531783f, 0.0010846697259694338f, 0.0012988271191716194f, 0.001205958891659975f, 0.0012260242365300655f, 0.001146954600699246f, 0.0014517229283228517f, 0.0017345478991046548f, 0.0012624936643987894f, 0.000840549124404788f, 0.0011994059896096587f, 0.0014350699493661523f, 0.001581905409693718f, 0.0011857787612825632f, 0.002038531471043825f, 0.0011986999306827784f, 0.0011432000901550055f, 0.0010552742751315236f, 0.0012632026337087154f, 0.001248129061423242f, 0.0014177242992445827f, 0.0011758632026612759f, 0.001594994100742042f, 0.001855356153100729f, 0.0014373641461133957f, 0.0015591501723974943f, 0.0012746703578159213f, 0.0010611453326418996f, 0.0010541772935539484f, 0.0016753403469920158f, 0.0009059569565579295f, 0.0018320783274248242f, 0.0014483433915302157f, 0.0015971916727721691f, 0.001813785289414227f, 0.001349940779618919f, 0.0010337397688999772f, 0.0015874654054641724f, 0.0011350668501108885f, 0.0012942651519551873f, 0.0009876462863758206f, 0.0014120228588581085f, 0.0010494355810806155f, 0.0011315606534481049f, 0.0010217116214334965f, 0.000724277866538614f, 0.0013323627645149827f, 0.0009477929561398923f, 0.0011021109530702233f, 0.0011156608816236258f, 0.0015081920428201556f, 0.0019264259608462453f, 0.001400330918841064f, 0.0014052406186237931f, 0.0013223744463175535f, 0.0015729943988844752f, 0.000692550849635154f, 0.0013179099187254906f, 0.0015533131081610918f, 0.0011559993727132678f, 0.0010611359030008316f, 0.001783098210580647f, 0.001394608523696661f, 0.0011292113922536373f, 0.000904510379768908f, 0.0014070764882490039f, 0.0010049070697277784f, 0.0012650248827412724f, 0.0015203083166852593f, 0.001358459354378283f, 0.00111793028190732f, 0.0010506389662623405f, 0.0009595623123459518f, 0.0013204755960032344f, 0.0009171065175905824f, 0.0009268005378544331f, 0.001098260865546763f, 0.0012933160178363323f, 0.0010898120235651731f, 0.0009553681593388319f, 0.001161677297204733f, 0.0011423820396885276f, 0.0011015321360900998f, 0.0009736866923049092f, 0.0011697341687977314f, 0.0018519451841711998f, 0.0014116683742031455f, 0.001257391064427793f, 0.001575241331011057f, 0.001502221799455583f, 0.0012149701360613108f, 0.0010140807135030627f, 0.0010342352325096726f, 0.0014827540144324303f, 0.0010117382043972611f, 0.0014175079995766282f, 0.0012265212135389447f, 0.0012203215155750513f, 0.001176203484646976f, 0.0008176799165084958f, 0.0012975065037608147f, 0.0010530372383072972f, 0.0010906185489147902f, 0.001323043368756771f, 0.0013032978167757392f, 0.001028650556690991f, 0.0013042089994996786f, 0.0011113666696473956f, 0.0018037674017250538f, 0.0018451923970133066f, 0.0011271049734205008f, 0.0015315236523747444f, 0.001273461035452783f, 0.0008990703499875963f, 0.0014099640538915992f, 0.001084603718481958f, 0.001512913964688778f, 0.00130564090795815f, 0.0014869514852762222f, 0.0008061261614784598f, 0.0010978453792631626f, 0.0017268785741180182f, 0.0015444926684722304f, 0.0014692028053104877f, 0.0011333373840898275f, 0.000855542253702879f, 0.0016978814965113997f, 0.00137505738530308f, 0.0013394616544246674f, 0.0008566731121391058f, 0.0015906246844679117f, 0.0011124690063297749f, 0.0012505138292908669f, 0.0012401891872286797f, 0.0010120772058144212f, 0.0010134895564988256f, 0.001553602865897119f, 0.0017075096257030964f, 0.001408313401043415f, 0.0014639301225543022f, 0.0012441102880984545f, 0.0011696101864799857f, 0.0015360766556113958f, 0.0016787167405709624f, 0.001452625379897654f, 0.0011698391754180193f, 0.0011315533192828298f, 0.0014163722516968846f, 0.001128287287428975f, 0.0019883711356669664f, 0.0011106483871117234f, 0.0014232287649065256f, 0.0012711440213024616f, 0.0009549912647344172f, 0.0012717951321974397f, 0.0016460171900689602f, 0.00102036795578897f, 0.0009821215644478798f, 0.0011649831430986524f, 0.0012667288538068533f, 0.0013135196641087532f, 0.0012677502818405628f, 0.0013090900611132383f, 0.0014478502562269568f, 0.0014934171922504902f, 0.0012885361211374402f, 0.00107257766649127f, 0.0011021742830052972f, 0.0013478584587574005f, 0.001174669829197228f, 0.0007843124330975115f, 0.0009435100946575403f, 0.001853468012996018f, 0.0009326541912741959f, 0.0011860039085149765f, 0.0010405461071059108f, 0.001075661275535822f, 0.0016262652352452278f, 0.001257589552551508f, 0.0015984761994332075f, 0.0008963996078819036f, 0.0011548390612006187f, 0.001091083511710167f, 0.0008781502256169915f, 0.001767986104823649f, 0.0013330819783732295f, 0.00139793218113482f, 0.0009724771371111274f, 0.0018401602283120155f, 0.0011791640426963568f, 0.0011959413532167673f, 0.00128116924315691f, 0.0015841033309698105f, 0.0013506606919690967f, 0.0007820617756806314f, 0.0017704581841826439f, 0.0011475470382720232f, 0.0016773520037531853f, 0.001153918681666255f, 0.0012609142577275634f, 0.0018232866423204541f, 0.0009783110581338406f, 0.0012733485782518983f, 0.001649321406148374f, 0.0015194558072835207f, 0.000852008059155196f, 0.0010584135306999087f, 0.0020423028618097305f, 0.001469662063755095f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0075204577296972275f, 0.009746682830154896f, 0.008194074034690857f, 0.005940157454460859f, 0.009601735509932041f, 0.008383894339203835f, 0.006759082432836294f, 0.011938839219510555f, 0.008337479084730148f, 0.0050238012336194515f, 0.00749296834692359f, 0.0069969636388123035f, 0.005843059625476599f, 0.005513423588126898f, 0.004619442857801914f, 0.0056506916880607605f, 0.005309842061251402f, 0.011540254577994347f, 0.00979236327111721f, 0.005278370343148708f, 0.006930425297468901f, 0.006321272812783718f, 0.0053054699674248695f, 0.009914535097777843f, 0.006100722588598728f, 0.006568252108991146f, 0.00471983477473259f, 0.0055519831366837025f, 0.005875110160559416f, 0.013964850455522537f, 0.005980970803648233f, 0.008617865853011608f, 0.007323985919356346f, 0.004706681240350008f, 0.006985703483223915f, 0.004577294923365116f, 0.00877760536968708f, 0.0042465245351195335f, 0.0067946710623800755f, 0.006100554950535297f, 0.011593041010200977f, 0.006558164954185486f, 0.00645787175744772f, 0.005825642962008715f, 0.005909670144319534f, 0.0056875539012253284f, 0.008549890480935574f, 0.012136312201619148f, 0.013865035958588123f, 0.006875830702483654f, 0.006625158712267876f, 0.012556212022900581f, 0.007120911497622728f, 0.008462254889309406f, 0.006206441670656204f, 0.010040243156254292f, 0.007723931688815355f, 0.008557392284274101f, 0.006821764633059502f, 0.0060722376219928265f, 0.007022719830274582f, 0.013000776059925556f, 0.007305213250219822f, 0.0062864236533641815f, 0.0058090644888579845f, 0.007293724454939365f, 0.009388904087245464f, 0.009386093355715275f, 0.009652113541960716f, 0.008313512429594994f, 0.007779207546263933f, 0.00928665790706873f, 0.005553021561354399f, 0.004712435882538557f, 0.009167846292257309f, 0.008625736460089684f, 0.01187500823289156f, 0.006228831131011248f, 0.008699103258550167f, 0.007805748842656612f, 0.005832184571772814f, 0.005946080666035414f, 0.008917037397623062f, 0.009130534715950489f, 0.005955470260232687f, 0.006094697397202253f, 0.006381241604685783f, 0.0061273593455553055f, 0.007204472552984953f, 0.007345397956669331f, 0.004028608091175556f, 0.015173574909567833f, 0.00804988108575344f, 0.005471296142786741f, 0.0063612693920731544f, 0.010383770801126957f, 0.005953008774667978f, 0.00756181450560689f, 0.00482593709602952f, 0.008462089113891125f, 0.007478364743292332f, 0.004311053082346916f, 0.00411904277279973f, 0.009559012949466705f, 0.005706524942070246f, 0.013029983267188072f, 0.00908908061683178f, 0.006128471344709396f, 0.004187960643321276f, 0.006706273183226585f, 0.010938004590570927f, 0.008494648151099682f, 0.006919472478330135f, 0.01070026122033596f, 0.006348488852381706f, 0.018077973276376724f, 0.007639099378138781f, 0.0059652081690728664f, 0.004531357437372208f, 0.005374985747039318f, 0.00802813470363617f, 0.005535084288567305f, 0.0071917190216481686f, 0.012775469571352005f, 0.0089804045855999f, 0.011113348416984081f, 0.006465692538768053f, 0.004493603482842445f, 0.011067806743085384f, 0.00738664111122489f, 0.012893588282167912f, 0.004605337046086788f, 0.006536157336086035f, 0.007539874408394098f, 0.0074622477404773235f, 0.006675614509731531f, 0.01016918383538723f, 0.004618823062628508f, 0.009985066950321198f, 0.0069994316436350346f, 0.006031695753335953f, 0.008582049049437046f, 0.006366327404975891f, 0.006270779762417078f, 0.015020239166915417f, 0.00749972416087985f, 0.009364713914692402f, 0.0075044105760753155f, 0.005166134797036648f, 0.007752952631562948f, 0.008387822657823563f, 0.006051297765225172f, 0.005103232804685831f, 0.006010047625750303f, 0.009156068786978722f, 0.008047099225223064f, 0.007914571091532707f, 0.006278812885284424f, 0.006611211225390434f, 0.004959343932569027f, 0.01203421875834465f, 0.00690200412645936f, 0.008146715350449085f, 0.007337482180446386f, 0.005048277322202921f, 0.011395363137125969f, 0.006603176239877939f, 0.005933106876909733f, 0.004128424916416407f, 0.004900175612419844f, 0.005185609217733145f, 0.005834043957293034f, 0.011934339068830013f, 0.00685441680252552f, 0.006381661631166935f, 0.006273595150560141f, 0.012849229387938976f, 0.013850048184394836f, 0.005955670028924942f, 0.008151291869580746f, 0.004411119967699051f, 0.005027404986321926f, 0.006000022869557142f, 0.006546621676534414f, 0.006238093599677086f, 0.007609697990119457f, 0.007212445605546236f, 0.00867505930364132f, 0.007749849930405617f, 0.005506657063961029f, 0.007316467352211475f, 0.006298433523625135f, 0.005807922687381506f, 0.004700062796473503f, 0.00557743338868022f, 0.004937414079904556f, 0.005803018342703581f, 0.013100729323923588f, 0.015183452516794205f, 0.004018053412437439f, 0.0069710141979157925f, 0.00811877939850092f, 0.008099135011434555f, 0.004703560844063759f, 0.013776468113064766f, 0.0070560588501393795f, 0.010099287144839764f, 0.009529711678624153f, 0.005483508575707674f, 0.0063936663791537285f, 0.00570066599175334f, 0.018091538920998573f, 0.011418490670621395f, 0.00590233039110899f, 0.009383887983858585f, 0.005400883965194225f, 0.003847838845103979f, 0.005770725663751364f, 0.007781616412103176f, 0.004662118852138519f, 0.013020025566220284f, 0.0064207385294139385f, 0.006271572317928076f, 0.006143776699900627f, 0.006931779440492392f, 0.01600508950650692f, 0.005749915726482868f, 0.009298455901443958f, 0.0052196006290614605f, 0.0101083405315876f, 0.006967568304389715f, 0.005392134655267f, 0.005591532681137323f, 0.011758064851164818f, 0.006582166068255901f, 0.008206297643482685f, 0.004387319553643465f, 0.006717517971992493f, 0.007350274361670017f, 0.006506882607936859f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 80,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0023160898126661777f, 0.002008535899221897f, 0.0019642403349280357f, 0.002371953334659338f, 0.0025312905199825764f, 0.0015814672224223614f, 0.0019020322943106294f, 0.0016450409311801195f, 0.0028155564796179533f, 0.0015666710678488016f, 0.0021289947908371687f, 0.0019595457706600428f, 0.002195324981585145f, 0.0015141620533540845f, 0.0024914222303777933f, 0.0018121440662071109f, 0.0018595274304971099f, 0.0024472482036799192f, 0.002116989577189088f, 0.0022102119401097298f, 0.0020756239537149668f, 0.002857065526768565f, 0.002029664581641555f, 0.0014225589111447334f, 0.0021611270494759083f, 0.0019818414002656937f, 0.001631728489883244f, 0.0015901646111160517f, 0.0020302506163716316f, 0.0026850656140595675f, 0.002282331231981516f, 0.0016741667641326785f, 0.002941564191132784f, 0.0017137768445536494f, 0.002504179487004876f, 0.0018989567179232836f, 0.0027598922606557608f, 0.002268083393573761f, 0.0017005333211272955f, 0.0020851532462984324f, 0.002005059737712145f, 0.002605959540233016f, 0.0017340094782412052f, 0.0019482278730720282f, 0.0022475735750049353f, 0.0030082568991929293f, 0.0023209485225379467f, 0.0022546101827174425f, 0.0017771839629858732f, 0.0018824248109012842f, 0.0030779691878706217f, 0.002091894391924143f, 0.0023881702218204737f, 0.0024706549011170864f, 0.00242768251337111f, 0.002185093006119132f, 0.0018987635849043727f, 0.003021541051566601f, 0.0026517256628721952f, 0.0024230259004980326f, 0.0023154672235250473f, 0.0025153576862066984f, 0.001449903822503984f, 0.0025477369781583548f, 0.002426929073408246f, 0.001559875556267798f, 0.0018319949740543962f, 0.002566761802881956f, 0.0016424153000116348f, 0.002306438982486725f, 0.0021799670066684484f, 0.0020377153996378183f, 0.0015675616450607777f, 0.0021642260253429413f, 0.0014950038166716695f, 0.0024933237582445145f, 0.0019294379744678736f, 0.0017980056582018733f, 0.0016826775390654802f, 0.0021905952598899603f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012631032150238752f, 0.0012691986048594117f, 0.0007219863473437726f, 0.0011850754963234067f, 0.0012391575146466494f, 0.0010431469418108463f, 0.0013096401235088706f, 0.0014302151976153255f, 0.001311960630118847f, 0.0010388977825641632f, 0.0010341015877202153f, 0.0012218306073918939f, 0.0010078634368255734f, 0.001048239297233522f, 0.0008513684733770788f, 0.001101572997868061f, 0.0013667251914739609f, 0.0009886572370305657f, 0.0010381537722423673f, 0.0009101012838073075f, 0.000701246433891356f, 0.0010875521693378687f, 0.0012302910909056664f, 0.0011971109779551625f, 0.0008238644804805517f, 0.0009328834130428731f, 0.0011203748872503638f, 0.0009363822755403817f, 0.0009708441211842f, 0.0008348655537702143f, 0.0010399596067145467f, 0.0009147495729848742f, 0.0009410481434315443f, 0.001059667905792594f, 0.0008834382169879973f, 0.0007361021707765758f, 0.0010575508931651711f, 0.001174823148176074f, 0.0010038662003353238f, 0.0009059213916771114f, 0.000694050220772624f, 0.00134840770624578f, 0.0009189564152620733f, 0.0010429539252072573f, 0.0012865856988355517f, 0.001265506842173636f, 0.001052387640811503f, 0.0009155637235380709f, 0.001182294450700283f, 0.0009359281975775957f, 0.0010715504176914692f, 0.0009690210572443902f, 0.0010329516371712089f, 0.0010801813332363963f, 0.0008546155877411366f, 0.0013084637466818094f, 0.0011734165018424392f, 0.0012065625051036477f, 0.0008354600286111236f, 0.0010189267341047525f, 0.00085085240425542f, 0.000798246415797621f, 0.0012787492014467716f, 0.001296101720072329f, 0.0011924339924007654f, 0.0010979241924360394f, 0.0008134169038385153f, 0.0012241273652762175f, 0.0012581803603097796f, 0.0011485464638099074f, 0.0016865658108144999f, 0.0007787324138917029f, 0.0010728558991104364f, 0.0008821915253065526f, 0.0007551329326815903f, 0.0009123024065047503f, 0.00114730978384614f, 0.0009114595595747232f, 0.0009854561649262905f, 0.0010554073378443718f, 0.0008576042018830776f, 0.001068315003067255f, 0.0012767924927175045f, 0.000818935688585043f, 0.0008486652513965964f, 0.0013108461862429976f, 0.0009290201705880463f, 0.0010974801843985915f, 0.0010422078194096684f, 0.0006604754598811269f, 0.0014112441567704082f, 0.0012205253588035703f, 0.0007884074002504349f, 0.0010720888385549188f, 0.0012615688610821962f, 0.0007926647085696459f, 0.0009486301569268107f, 0.0010189841268584132f, 0.0008660540916025639f, 0.0010025139199569821f, 0.0008808507118374109f, 0.0011249916860833764f, 0.0007622457924298942f, 0.0009752378682605922f, 0.0012143485946580768f, 0.0008944877190515399f, 0.0010987791465595365f, 0.0010984071996062994f, 0.0014078071108087897f, 0.000924512161873281f, 0.001146184979006648f, 0.0011293543502688408f, 0.0010141701204702258f, 0.0008795116445980966f, 0.001270894194021821f, 0.000980077893473208f, 0.0014170502545312047f, 0.0010019214823842049f, 0.0010896824533119798f, 0.0006556855514645576f, 0.0009952379623427987f, 0.0009575114818289876f, 0.0009390892228111625f, 0.0012023544404655695f, 0.0010561784729361534f, 0.0007568777655251324f, 0.001049797865562141f, 0.0010715110693126917f, 0.000992650049738586f, 0.0010555562330409884f, 0.00098544848151505f, 0.0014715694123879075f, 0.0008380839717574418f, 0.0011697110021486878f, 0.0015255394391715527f, 0.0013175572967156768f, 0.001070468220859766f, 0.0010314594255760312f, 0.0008823387906886637f, 0.0010782417375594378f, 0.000964283593930304f, 0.0010822555050253868f, 0.0011107228929176927f, 0.0009031434310600162f, 0.0012700739316642284f, 0.0006641197251155972f, 0.001149791874922812f, 0.0009505365742370486f, 0.0013032015413045883f, 0.0009478855645284057f, 0.0009870519861578941f, 0.0008156626718118787f, 0.000892497249878943f, 0.0009056848357431591f, 0.0012141382321715355f, 0.0009810177143663168f, 0.0013496668543666601f, 0.0012740922393277287f, 0.0012708778958767653f, 0.0009793718345463276f, 0.0009231031872332096f, 0.0008115462260320783f, 0.0016330649377778172f, 0.0009971304098144174f, 0.0006805052980780602f, 0.0011682017939165235f, 0.0009370414190925658f, 0.001031210646033287f, 0.0011457246728241444f, 0.001189458416774869f, 0.0015925865154713392f, 0.0009563551284372807f, 0.0010382080217823386f, 0.001101314788684249f, 0.0007473889854736626f, 0.0012386331800371408f, 0.0009609428816474974f, 0.0008152767550200224f, 0.0010116344783455133f, 0.0012812791392207146f, 0.001234674360603094f, 0.0008402346866205335f, 0.0013771781232208014f, 0.0010453850263729692f, 0.0009031862718984485f, 0.0009542972547933459f, 0.0007305872277356684f, 0.001092582824639976f, 0.0009854271775111556f, 0.0011473047779873013f, 0.0010624484857544303f, 0.0009352777269668877f, 0.0007969698635861278f, 0.0009390056948177516f, 0.0012823559809476137f, 0.0009390921331942081f, 0.001291280728764832f, 0.0008677460718899965f, 0.0011188487987965345f, 0.0008697035373188555f, 0.0009554585558362305f, 0.0008647721260786057f, 0.00089136982569471f, 0.0007691193022765219f, 0.0014476993819698691f, 0.0010625814320519567f, 0.001232316019013524f, 0.0017503914423286915f, 0.000823040958493948f, 0.0009585471707396209f, 0.001126516843214631f, 0.0011899856617674232f, 0.0011067538289353251f, 0.0008248956291936338f, 0.001120236236602068f, 0.0010691520292311907f, 0.0010319644352421165f, 0.0011285536456853151f, 0.0011207424104213715f, 0.0012917035492137074f, 0.0009665445541031659f, 0.0008857122738845646f, 0.0013801248278468847f, 0.0007126583950594068f, 0.0009466167539358139f, 0.0007400167523883283f, 0.0010276642860844731f, 0.0009978832677006721f, 0.0010173633927479386f, 0.000843775284010917f, 0.0010655067162588239f, 0.0008137417607940733f, 0.0007422601338475943f, 0.0014389383140951395f, 0.0011015181662514806f, 0.0008733001304790378f, 0.0009607808315195143f, 0.0011907668085768819f, 0.0008190613589249551f, 0.0011166856857016683f, 0.0009450262296013534f, 0.001132665784098208f, 0.0008736408781260252f, 0.0009015690884552896f, 0.0014872719766572118f, 0.0008974452503025532f, 0.0007130815065465868f, 0.0008825935074128211f, 0.0007909278501756489f, 0.0011997325345873833f, 0.0010490836575627327f, 0.0011682049371302128f, 0.0008826558478176594f, 0.001184222404845059f, 0.0014335947344079614f, 0.0007161652902141213f, 0.0009758411324582994f, 0.001175240962766111f, 0.001076664892025292f, 0.001230272464454174f, 0.0010134674375876784f, 0.001338650588877499f, 0.0011583780869841576f, 0.0008364497334696352f, 0.0010498154442757368f, 0.0009666948462836444f, 0.0006603462970815599f, 0.0011314837029203773f, 0.0010655568912625313f, 0.0010366400238126516f, 0.0010594407794997096f, 0.0011004158295691013f, 0.001339677139185369f, 0.001071122125722468f, 0.0008275437285192311f, 0.0010309088975191116f, 0.0013180235400795937f, 0.0009948094375431538f, 0.000864255300257355f, 0.0010577022330835462f, 0.0009244958055205643f, 0.0009417865658178926f, 0.0010358310537412763f, 0.0007925259997136891f, 0.0010272633517161012f, 0.0010633135680109262f, 0.0011660376330837607f, 0.0010236717062070966f, 0.0008898136438801885f, 0.0009774047648534179f, 0.0011696374276652932f, 0.0010751393856480718f, 0.001563139958307147f, 0.0008087080786935985f, 0.0013784905895590782f, 0.000829330354463309f, 0.0006626294925808907f, 0.0011457240907475352f, 0.0007967930287122726f, 0.0008819238864816725f, 0.0010322707239538431f, 0.0008869590819813311f, 0.0008100655977614224f, 0.0010763307800516486f, 0.0009701302624307573f, 0.0013795193517580628f, 0.0009811867494136095f, 0.0008225815836340189f, 0.0011085192672908306f, 0.0012016574619337916f, 0.0010478796903043985f, 0.0009332821355201304f, 0.0008425424457527697f, 0.0008546269382350147f, 0.0008894347120076418f, 0.0008336063474416733f, 0.0010084192035719752f, 0.001014482812024653f, 0.0010367159266024828f, 0.0007609305903315544f, 0.0011904011480510235f, 0.0008453224436379969f, 0.001029722043313086f, 0.0010348077630624175f, 0.0011707856319844723f, 0.0009505406487733126f, 0.001411467557772994f, 0.0011402431409806013f, 0.00085631845286116f, 0.0009623391088098288f, 0.0012288495199754834f, 0.000785547134000808f, 0.0009018020937219262f, 0.001222924329340458f, 0.0011622795136645436f, 0.0009964468190446496f, 0.0009909298969432712f, 0.0007721430156379938f, 0.0013605314306914806f, 0.000911533716134727f, 0.001139276777394116f, 0.0011662216857075691f, 0.0009983134223148227f, 0.0010694465599954128f, 0.0009111330728046596f, 0.0009145620279014111f, 0.0012345807626843452f, 0.0008376186597160995f, 0.0011139685520902276f, 0.001125460141338408f, 0.0010081607615575194f, 0.0008813012391328812f, 0.0011468903394415975f, 0.0010507064871490002f, 0.0008490854525007308f, 0.0012726779095828533f, 0.0013091848231852055f, 0.0009274091571569443f, 0.0008744531660340726f, 0.001034778542816639f, 0.0008026741561479867f, 0.0008635475533083081f, 0.0011401696829125285f, 0.0008177061681635678f, 0.0008247514488175511f, 0.0008845159318298101f, 0.0008596254629082978f, 0.0012931725941598415f, 0.0010437259916216135f, 0.001346265198662877f, 0.001148390001617372f, 0.0009691151208244264f, 0.0012114520650357008f, 0.0008741407073102891f, 0.001441346830688417f, 0.0014374537859112024f, 0.0010338514111936092f, 0.0011061129625886679f, 0.0008045411086641252f, 0.0009781986009329557f, 0.001169495633803308f, 0.0007618602830916643f, 0.000766014214605093f, 0.0010934012243524194f, 0.0013528813142329454f, 0.0013485507806763053f, 0.0013019361067563295f, 0.0007126045529730618f, 0.0013703786535188556f, 0.0015644930535927415f, 0.0011833148309960961f, 0.0009383129654452205f, 0.0009693637257441878f, 0.0010111265582963824f, 0.0012396579841151834f, 0.0012160057667642832f, 0.001059109577909112f, 0.0009382503922097385f, 0.0008431464084424078f, 0.0012160418555140495f, 0.001284608617424965f, 0.0009025029721669853f, 0.0009077598806470633f, 0.0009356589871458709f, 0.001420502783730626f, 0.00090083695249632f, 0.0010407562367618084f, 0.0008870227611623704f, 0.0008223556214943528f, 0.0007578447693958879f, 0.0012743495171889663f, 0.0011215930571779609f, 0.0016313442029058933f, 0.0007934579625725746f, 0.000879808038007468f, 0.0011790106073021889f, 0.0009637874900363386f, 0.0007849251269362867f, 0.0013459306210279465f, 0.0008160403813235462f, 0.0010138449724763632f, 0.0007704458548687398f, 0.0010228706523776054f, 0.000910414382815361f, 0.0008967150934040546f, 0.001021846430376172f, 0.0010138889774680138f, 0.00096077227499336f, 0.0008029097225517035f, 0.0010544875403866172f, 0.0011635569389909506f, 0.001282064593397081f, 0.0008567809709347785f, 0.0009100369643419981f, 0.0014249233063310385f, 0.0011553455842658877f, 0.0012915668776258826f, 0.0010264397133141756f, 0.0013103066012263298f, 0.0009495525737293065f, 0.0008816311601549387f, 0.001113658188842237f, 0.0017154888482764363f, 0.0009451682562939823f, 0.0008963686996139586f, 0.0009945104829967022f, 0.0010797441937029362f, 0.0013080614153295755f, 0.001106208423152566f, 0.0011892874026671052f, 0.001140184118412435f, 0.0007833619019947946f, 0.001048312522470951f, 0.0010588682489469647f, 0.0012726570712402463f, 0.0012021346483379602f, 0.0008034252095967531f, 0.0011905847350135446f, 0.0008319257758557796f, 0.0008565488387830555f, 0.0009614743757992983f, 0.0009593615541234612f, 0.0008091723429970443f, 0.0008393001626245677f, 0.0009804023429751396f, 0.0012120913015678525f, 0.0015109790256246924f, 0.0009766803123056889f, 0.0009343284764327109f, 0.0008147298940457404f, 0.0012389938347041607f, 0.0008994791423901916f, 0.0008616394479759037f, 0.0009236324112862349f, 0.0008921874104999006f, 0.0009368819883093238f, 0.0009839325211942196f, 0.0010598981752991676f, 0.0008418219513259828f, 0.0010242224670946598f, 0.0009455645340494812f, 0.0010028289398178458f, 0.0013259510742500424f, 0.0011124344309791923f, 0.0009567984379827976f, 0.0007786981877870858f, 0.0012642174260690808f, 0.0011478151427581906f, 0.0009492450626567006f, 0.0008794850436970592f, 0.0009714413317851722f, 0.0010708755580708385f, 0.001344093936495483f, 0.0009235200705006719f, 0.0012196835596114397f, 0.0009972529951483011f, 0.0010462122736498713f, 0.001173336640931666f, 0.0010437346063554287f, 0.001184258027933538f, 0.001634123851545155f, 0.001000939984805882f, 0.0007121909875422716f, 0.0012409540358930826f, 0.0009493448887951672f, 0.0009646624675951898f, 0.0008370077703148127f, 0.0010363879846408963f, 0.0010927944676950574f, 0.000955836963839829f, 0.0010936055332422256f, 0.0009570523980073631f, 0.0011568099725991488f, 0.0009981861803680658f, 0.0010491976281628013f, 0.0011311275884509087f, 0.0009803703287616372f, 0.0009478726424276829f, 0.0009937286376953125f, 0.0013307493645697832f, 0.0009508568327873945f, 0.0008212368120439351f, 0.0010682721622288227f, 0.001334915985353291f, 0.0008640222949907184f, 0.0009900233708322048f, 0.0009423950687050819f, 0.0008668277296237648f, 0.0010781338205561042f, 0.000947777065448463f, 0.0007149133598431945f, 0.0010160208912566304f, 0.0011933887144550681f, 0.0010248020989820361f, 0.0010868904646486044f, 0.0008478257223032415f, 0.0010859735775738955f, 0.0010001922491937876f, 0.0011642568279057741f, 0.0011881194077432156f, 0.0008305308292619884f, 0.0008477627416141331f, 0.0009433763916604221f, 0.0009690448059700429f, 0.0012734293704852462f, 0.0011995412642136216f, 0.0011224177433177829f, 0.0009212727891281247f, 0.0010748399654403329f, 0.0012224006932228804f, 0.0013271465431898832f, 0.0008396496414206922f, 0.0010422918712720275f, 0.0009815129451453686f, 0.0009048725478351116f, 0.000869839743245393f, 0.0011588716879487038f, 0.0011007480788975954f, 0.0009732387843541801f, 0.001249339897185564f, 0.0007882490172050893f, 0.000885908433701843f, 0.0009706172859296203f, 0.0011377290356904268f, 0.0011451812461018562f, 0.0009840315906330943f, 0.0015074156690388918f, 0.001286980346776545f, 0.0008817001944407821f, 0.0011627842904999852f, 0.0008426234708167613f, 0.0010458544129505754f, 0.0008406928973272443f, 0.0008299063774757087f, 0.000970753317233175f, 0.0013516618637368083f, 0.0011896941578015685f, 0.0010809152154251933f, 0.001144272624514997f, 0.0008657845901325345f, 0.0008526038145646453f, 0.001348649151623249f, 0.001005760277621448f, 0.0010917959734797478f, 0.0010659226682037115f, 0.0009722468093968928f, 0.0009863931918516755f, 0.0009231376461684704f, 0.0010071709984913468f, 0.0012064166367053986f, 0.0011806716211140156f, 0.0009831901406869292f, 0.0009285234264098108f, 0.0012074379483237863f, 0.0009423014125786722f, 0.0009135151631198823f, 0.0008484061108902097f, 0.0008988697663880885f, 0.0011114031076431274f, 0.0010424493812024593f, 0.000982289551757276f, 0.0012744602281600237f, 0.0012706684647127986f, 0.001325520919635892f, 0.001039425958879292f, 0.0008928551687858999f, 0.000809800811111927f, 0.0010218304814770818f, 0.0010211439803242683f, 0.0008665781933814287f, 0.0008218882139772177f, 0.0010711654322221875f, 0.0011520021362230182f, 0.0012674469035118818f, 0.0012387431925162673f, 0.0009690318838693202f, 0.0011051679030060768f, 0.0010123990941792727f, 0.0009823463624343276f, 0.0011781221255660057f, 0.0007917268085293472f, 0.0008790911524556577f, 0.0010035309242084622f, 0.0012340560788288713f, 0.001128612319007516f, 0.0009453616803511977f, 0.0010156487114727497f, 0.0006880589062348008f, 0.0008165916078723967f, 0.0009933066321536899f, 0.0010354110272601247f, 0.0011933873174712062f, 0.0008009681478142738f, 0.0009940105956047773f, 0.0007838130695745349f, 0.0010956028709188104f, 0.0011986111057922244f, 0.0009473979589529335f, 0.0011208237847313285f, 0.0008585617179051042f, 0.0011713760904967785f, 0.0009426513570360839f, 0.001348316902294755f, 0.001034843036904931f, 0.0009425311582162976f, 0.0009237501653842628f, 0.0009741565445438027f, 0.001119256834499538f, 0.0008790309075266123f, 0.0009762492263689637f, 0.000981222721748054f, 0.0011722169583663344f, 0.000985225080512464f, 0.0010147669818252325f, 0.001093015307560563f, 0.0009205173701047897f, 0.0013561634114012122f, 0.0008118145633488894f, 0.0010371742537245154f, 0.0009056197595782578f, 0.0011542497668415308f, 0.0009321898105554283f, 0.00108425784856081f, 0.0012357525993138552f, 0.0008897126535885036f, 0.0012081260792911053f, 0.0009873821400105953f, 0.0010864963987842202f, 0.0008544213487766683f, 0.0010785392951220274f, 0.001063443603925407f, 0.001229641493409872f, 0.0009321655961684883f, 0.0013832168187946081f, 0.0009661992662586272f, 0.001021325821056962f, 0.0009973119013011456f, 0.0009868252091109753f, 0.0008463697740808129f, 0.0011785811511799693f, 0.0010607220465317369f, 0.000934056646656245f, 0.0010033432627096772f, 0.0011395008768886328f, 0.0009188188705593348f, 0.0009670088184066117f, 0.0008499919786117971f, 0.0010331252124160528f, 0.001205744338221848f, 0.001038388698361814f, 0.0008898640517145395f, 0.0008619129657745361f, 0.0008900067768990993f, 0.0011694560525938869f, 0.0011291030095890164f, 0.0010595170315355062f, 0.000799689267296344f, 0.0011101635172963142f, 0.001384482136927545f, 0.0010057117324322462f, 0.0010667535243555903f, 0.0009714916814118624f, 0.0010692994110286236f, 0.0009794108336791396f, 0.0011113964719697833f, 0.0009089391678571701f, 0.0008785751997493207f, 0.001137942890636623f, 0.0009576869779266417f, 0.0008525025332346559f, 0.00095078517915681f, 0.0012299214722588658f, 0.0008774824673309922f, 0.0011661851312965155f, 0.001160010346211493f, 0.0007956852787174284f, 0.0009463959722779691f, 0.0010873974533751607f, 0.0010331639787182212f, 0.001322287367656827f, 0.0011925712460651994f, 0.000999931595288217f, 0.0010016766609624028f, 0.0009099908056668937f, 0.0009022891172207892f, 0.0009598965407349169f, 0.0009576976299285889f, 0.0008637966238893569f, 0.0009865668835118413f, 0.0010287374025210738f, 0.0010144866537302732f, 0.0010189712047576904f, 0.0012993743875995278f, 0.0007784541812725365f, 0.000989117776043713f, 0.0010299407877027988f, 0.000739965820685029f, 0.0012771509354934096f, 0.0011116777313873172f, 0.0010066254762932658f, 0.0009195878519676626f, 0.001281183329410851f, 0.0008855025516822934f, 0.0009383289725519717f, 0.0012628710828721523f, 0.001095420215278864f, 0.0008587947813794017f, 0.0011372268199920654f, 0.0010945000685751438f, 0.0010552385356277227f, 0.0009357639937661588f, 0.0010763684986159205f, 0.0011496635852381587f, 0.0013178202789276838f, 0.001265758997760713f, 0.0010478580370545387f, 0.0013689151965081692f, 0.0011403367388993502f, 0.001031197840347886f, 0.001117437263019383f, 0.001367173041217029f, 0.0015552110271528363f, 0.0013362853787839413f, 0.0009142034105025232f, 0.000929273315705359f, 0.0010111177107319236f, 0.0009051892557181418f, 0.001482790568843484f, 0.0007534936885349452f, 0.0011026285355910659f, 0.001260271412320435f, 0.0008872110047377646f, 0.0010397383011877537f, 0.001115740044042468f, 0.0011459218803793192f, 0.0011045450810343027f, 0.0010654208017513156f, 0.0011500181863084435f, 0.0009971068939194083f, 0.0007909273263067007f, 0.0014301539631560445f, 0.0009785533184185624f, 0.0011134842643514276f, 0.0009878332493826747f, 0.0008084396249614656f, 0.000788375735282898f, 0.0011078870156779885f, 0.00106789730489254f, 0.0007651412161067128f, 0.0010515799513086677f, 0.0013484915252774954f, 0.0008702845661900938f, 0.0012704762630164623f, 0.0010851083789020777f, 0.001056063105352223f, 0.001141879940405488f, 0.001267637824639678f, 0.0009620750788599253f, 0.0011720572365447879f, 0.0013428990496322513f, 0.001001128926873207f, 0.0012792634079232812f, 0.0010805669007822871f, 0.0009340938995592296f, 0.0011600340949371457f, 0.0009525643545202911f, 0.0010783858597278595f, 0.00099373038392514f, 0.001102286740206182f, 0.001009155879728496f, 0.0011009706649929285f, 0.0007717149564996362f, 0.0010888250544667244f, 0.0008100103004835546f, 0.000930934795178473f, 0.0010226143058389425f, 0.0010243640281260014f, 0.0011296324664726853f, 0.0011970814084634185f, 0.0008102644933387637f, 0.0012147828238084912f, 0.0008993747178465128f, 0.0014476431533694267f, 0.0010583293624222279f, 0.0009790925541892648f, 0.000977718154899776f, 0.0008521610288880765f, 0.001098848064430058f, 0.0008151760557666421f, 0.000883418892044574f, 0.001054127817042172f, 0.0008991861832328141f, 0.0007801001193001866f, 0.0007242131978273392f, 0.0013860092731192708f, 0.0008611905504949391f, 0.0009859238052740693f, 0.0010900459019467235f, 0.001312312320806086f, 0.0007955388864502311f, 0.001213251380249858f, 0.0009738976950757205f, 0.0007092616287991405f, 0.001286264043301344f, 0.0009098545415326953f, 0.0008664501365274191f, 0.0012466487241908908f, 0.0008367907139472663f, 0.0008621379965916276f, 0.0008419739315286279f, 0.0011333925649523735f, 0.0008469857857562602f, 0.0008479243260808289f, 0.0010223687859252095f, 0.00127426499966532f, 0.0008904290734790266f, 0.001038572983816266f, 0.0011083799181506038f, 0.0011032659094780684f, 0.0009490991942584515f, 0.0010857946472242475f, 0.0008481327095068991f, 0.0009087104699574411f, 0.0009199449559673667f, 0.0007190012256614864f, 0.001339295064099133f, 0.0009110677638091147f, 0.0007162860129028559f, 0.0012943445472046733f, 0.0010977779747918248f, 0.0009743693517521024f, 0.0008168321219272912f, 0.0011175358667969704f, 0.0007100881193764508f, 0.0011090438347309828f, 0.0010065732058137655f, 0.0009886054322123528f, 0.0007563316030427814f, 0.0009121452458202839f, 0.0009862337028607726f, 0.0010524686658754945f, 0.0009436297114007175f, 0.000834092905279249f, 0.0013201192487031221f, 0.0013625823194161057f, 0.0008455906063318253f, 0.0008258192683570087f, 0.0011718312744051218f, 0.001043233321979642f, 0.0009927263017743826f, 0.0010301880538463593f, 0.0009492620592936873f, 0.0011172270169481635f, 0.0012946499045938253f, 0.001042465097270906f, 0.0014549312181770802f, 0.0011382921366021037f, 0.0016244910657405853f, 0.0009250587318092585f, 0.0009256289922632277f, 0.001387842115946114f, 0.0010143726831302047f, 0.0010826821671798825f, 0.000872329343110323f, 0.0010934197343885899f, 0.0010565196862444282f, 0.0011879951925948262f, 0.0010495582828298211f, 0.0009366429294459522f, 0.0011985857272520661f, 0.0015376873780041933f, 0.001156086684204638f, 0.0010240341071039438f, 0.0011297293240204453f, 0.0008994638919830322f, 0.0013847278896719217f, 0.0007249864866025746f, 0.0009228865965269506f, 0.0008627920760773122f, 0.0009728108416311443f, 0.0012816220987588167f, 0.0013104616664350033f, 0.0009065167396329343f, 0.0011432964820414782f, 0.0009526820504106581f, 0.0007399801397696137f, 0.0008184538455680013f, 0.0009744573617354035f, 0.0008753711590543389f, 0.001367239747196436f, 0.0009068876970559359f, 0.0011624734615907073f, 0.0012722352985292673f, 0.0010263980366289616f, 0.001140817068517208f, 0.0008784361416473985f, 0.0009980868780985475f, 0.0008916504448279738f, 0.0010041451314464211f, 0.000786369782872498f, 0.0010588604491204023f, 0.0009305136045441031f, 0.001201834762468934f, 0.0010244075674563646f, 0.0011004825355485082f, 0.0012999930186197162f, 0.001149648567661643f, 0.0012866711476817727f, 0.0008700937614776194f, 0.0009342592093162239f, 0.0009597729076631367f, 0.001502336817793548f, 0.0010941184591501951f, 0.000993132358416915f, 0.0011244480265304446f, 0.001345292548649013f, 0.0011276038130745292f, 0.0011262695770710707f, 0.0013519985368475318f, 0.0009975273860618472f, 0.0010650219628587365f, 0.0011393175227567554f, 0.0012640218483284116f, 0.0009710061131045222f, 0.0009202705696225166f, 0.0012660055654123425f, 0.0009117379668168724f, 0.0009782564593479037f, 0.0010667816968634725f, 0.000879894767422229f, 0.0011101653799414635f, 0.0009050309890881181f, 0.001530576846562326f, 0.0008032816695049405f, 0.0012313073966652155f, 0.0009339231182821095f, 0.0011963172582909465f, 0.0009864275343716145f, 0.0010887673124670982f, 0.0008845778065733612f, 0.0008844030671752989f, 0.0012289825826883316f, 0.0009256437188014388f, 0.0008846854907460511f, 0.0008181693265214562f, 0.0008559035486541688f, 0.0010888412361964583f, 0.0011592789087444544f, 0.0009688850259408355f, 0.001545180450193584f, 0.0009673057938925922f, 0.0011263712076470256f, 0.001145917340181768f, 0.001214704941958189f, 0.0010844855569303036f, 0.0007739953580312431f, 0.0008963041473180056f, 0.0014482908882200718f, 0.0011557916877791286f, 0.0007676575914956629f, 0.0008898320375010371f, 0.0007338770665228367f, 0.0011570503702387214f, 0.0011717890156432986f, 0.0009291688329540193f, 0.001204654690809548f, 0.0011694708373397589f, 0.0010091407457366586f, 0.00083380431169644f, 0.001102173118852079f, 0.0006875903345644474f, 0.0008077385718934238f, 0.001054567052051425f, 0.0007841635379008949f, 0.0009245516266673803f, 0.0011102355783805251f, 0.0010267752222716808f, 0.0010211559711024165f, 0.0009532195399515331f, 0.0010194097412750125f, 0.0010416369186714292f, 0.0010286314645782113f, 0.0011492877965793014f, 0.0008431965834461153f, 0.0012453695526346564f, 0.0010036156745627522f, 0.0011917431838810444f, 0.000942327780649066f, 0.0009015264804475009f, 0.0008079775143414736f, 0.0008374559693038464f, 0.0011424875119701028f, 0.0008950423798523843f, 0.0007770165102556348f, 0.0011935718357563019f, 0.0010768678039312363f, 0.001075454754754901f, 0.0009444712777622044f, 0.0011336870957165956f, 0.0010076884645968676f, 0.0011920081451535225f, 0.0013131563318893313f, 0.0011808185372501612f, 0.0008219587616622448f, 0.0009906872874125838f, 0.0011841208906844258f, 0.0010194339556619525f, 0.0009370006155222654f, 0.0007243194850161672f, 0.0008017452200874686f, 0.00109990278724581f, 0.0009268244029954076f, 0.0009068030049093068f, 0.0009903600439429283f, 0.0011746762320399284f, 0.001017322763800621f, 0.0008413431933149695f, 0.0008239186718128622f, 0.0009438192937523127f, 0.000994366710074246f, 0.001378732966259122f, 0.0007289383793249726f, 0.0011238491861149669f, 0.0012248498387634754f, 0.0011142247822135687f, 0.0010211209300905466f, 0.001083293929696083f, 0.0009580639307387173f, 0.0009957371512427926f, 0.0012518451549112797f, 0.0009990769904106855f, 0.0008512758649885654f, 0.0009246198460459709f, 0.0008008504519239068f, 0.000828507705591619f, 0.0007166891009546816f, 0.0007851904374547303f, 0.0016709420597180724f, 0.000699001713655889f, 0.0009686775738373399f, 0.000856166472658515f, 0.0013672513887286186f, 0.0014113348443061113f, 0.0009686379344202578f, 0.0008225245983339846f, 0.0008664635242894292f, 0.0011343342484906316f, 0.0011164048919454217f, 0.0012605927186086774f, 0.0011939029209315777f, 0.000732310232706368f, 0.0006771570187993348f, 0.001019360264763236f, 0.0009842448635026813f, 0.0011597832199186087f, 0.001013092347420752f, 0.001124342205002904f, 0.0013715208042412996f, 0.0010217978851869702f, 0.0014888527803122997f, 0.0012434216914698482f, 0.000831881130579859f, 0.0010745641775429249f, 0.001118487329222262f, 0.000987362232990563f, 0.0008910257602110505f, 0.0011086690938100219f, 0.0014792734291404486f, 0.0010023528011515737f, 0.0009177490719594061f, 0.0011386030819267035f, 0.0009496537386439741f, 0.0011919072130694985f, 0.0009806714951992035f, 0.0008405686821788549f, 0.0009791856864467263f, 0.000902119092643261f, 0.0013040445046499372f, 0.0010794255649670959f, 0.0007354406989179552f, 0.0010348744690418243f, 0.001124859438277781f, 0.0011922442354261875f, 0.0011241949396207929f, 0.0008235414861701429f, 0.0009459833963774145f, 0.0009734964114613831f, 0.0009249585564248264f, 0.001117787673138082f, 0.000814052764326334f, 0.0008783633820712566f, 0.0007771136588416994f, 0.0014885941054672003f, 0.001077447086572647f, 0.0010459210025146604f, 0.0008254447602666914f, 0.000795271887909621f, 0.0009078762377612293f, 0.0012552227126434445f, 0.0008864221163094044f, 0.0008041469845920801f, 0.0010954998433589935f, 0.001319525414146483f, 0.0008104279404506087f, 0.0013844455825164914f, 0.0008604432223364711f, 0.0009459717548452318f, 0.0010236448142677546f, 0.0007741675362922251f, 0.000911880808416754f, 0.0013200560351833701f, 0.0010959976352751255f, 0.0010640827240422368f, 0.0013531139120459557f, 0.000921291415579617f, 0.0009192959405481815f, 0.0008958439575508237f, 0.000991182983852923f, 0.0010047991527244449f, 0.0009324905113317072f, 0.0010264591546729207f, 0.0009291695314459503f, 0.0011239759624004364f, 0.0006727980216965079f, 0.0009313857881352305f, 0.0011470360914245248f, 0.000977973686531186f, 0.0014249659143388271f, 0.0008544354350306094f, 0.0010316454572603106f, 0.0008042205008678138f, 0.0011153633240610361f, 0.0011037936201319098f, 0.0008603396127000451f, 0.001048133592121303f, 0.0008958503021858633f, 0.0009858784032985568f, 0.0011248483788222075f, 0.0010685581946745515f, 0.0009985205251723528f, 0.0009360651019960642f, 0.0010932054137811065f, 0.0012081944150850177f, 0.0009848488261923194f, 0.0008032071636989713f, 0.0011286204680800438f, 0.001113416627049446f, 0.0012986557558178902f, 0.0012075413251295686f, 0.00095548783428967f, 0.0013520229840651155f, 0.0010372475953772664f, 0.0008474926580674946f, 0.001040140399709344f, 0.0007284738821908832f, 0.0010070856660604477f, 0.0010381286265328526f, 0.0006847301265224814f, 0.0010377649450674653f, 0.0009585761581547558f, 0.000772170489653945f, 0.0010160410311073065f, 0.0012789589818567038f, 0.0011829778086394072f, 0.000777178502175957f, 0.0009576125303283334f, 0.0011494935024529696f, 0.000838845269754529f, 0.0008861753158271313f, 0.0009699328220449388f, 0.0009496756247244775f, 0.0009281867532990873f, 0.0008836640627123415f, 0.0016192200127989054f, 0.001027439720928669f, 0.0009548650705255568f, 0.0010789871448650956f, 0.001023836899548769f, 0.001399535103701055f, 0.0009515840210951865f, 0.0010223942808806896f, 0.0014267200604081154f, 0.000878905295394361f, 0.0008601160952821374f, 0.0007402789779007435f, 0.0011459824163466692f, 0.0011105301091447473f, 0.0009477940038777888f, 0.0008382460800930858f, 0.0013958915369585156f, 0.0009713373729027808f, 0.0014269181992858648f, 0.0011582280276343226f, 0.0011488004820421338f, 0.0010841088369488716f, 0.0010207360610365868f, 0.0009437970584258437f, 0.0008994086529128253f, 0.0011303604114800692f, 0.0011414982145652175f, 0.001152131357230246f, 0.0011207902571186423f, 0.001124418107792735f, 0.0010083834640681744f, 0.0010174583876505494f, 0.0009823455475270748f, 0.0010382499312981963f, 0.0010630766628310084f, 0.0012731233146041632f, 0.0009389037732034922f, 0.0009423228912055492f, 0.0007998700602911413f, 0.0010712624061852694f, 0.0011295921867713332f, 0.001134808175265789f, 0.0010795712005347013f, 0.0008993760566227138f, 0.0009355819784104824f, 0.0014141731662675738f, 0.00125654018484056f, 0.0009923401521518826f, 0.0012438767589628696f, 0.0010723462328314781f, 0.0014632395468652248f, 0.0008066177251748741f, 0.0009979632450267673f, 0.0008524280274286866f, 0.0007574395858682692f, 0.0007353671244345605f, 0.001145101967267692f, 0.0010950334835797548f, 0.0009688531281426549f, 0.0008844473049975932f, 0.00103381194639951f, 0.0008807673584669828f, 0.001063185976818204f, 0.0010762896854430437f, 0.0012655898462980986f, 0.0007189938914962113f, 0.0006800091941840947f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004975812043994665f),
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
    AI_PACK_INTQ_SCALE(0.10632521659135818f),
    AI_PACK_INTQ_ZP(26)))

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
    AI_PACK_INTQ_SCALE(0.11259112507104874f),
    AI_PACK_INTQ_ZP(17)))

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
    AI_PACK_INTQ_SCALE(0.10066898912191391f),
    AI_PACK_INTQ_ZP(-3)))

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
    AI_PACK_INTQ_SCALE(0.0770895853638649f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.127461776137352f),
    AI_PACK_INTQ_ZP(-21)))

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
    AI_PACK_INTQ_SCALE(0.0990166962146759f),
    AI_PACK_INTQ_ZP(0)))

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
    AI_PACK_INTQ_SCALE(0.05361008271574974f),
    AI_PACK_INTQ_ZP(-11)))

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
    AI_PACK_INTQ_SCALE(0.1214730516076088f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.050499141216278076f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14369197189807892f),
    AI_PACK_INTQ_ZP(4)))

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
    AI_PACK_INTQ_SCALE(0.07733774930238724f),
    AI_PACK_INTQ_ZP(6)))

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
    AI_PACK_INTQ_SCALE(0.059046633541584015f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10785268992185593f),
    AI_PACK_INTQ_ZP(6)))

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
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10, 10),
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
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10, 10),
  1, &nl_70_output_array, &nl_70_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conversion_71_output, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
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
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
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
  AI_SHAPE_INIT(4, 1280, 10, 1, 1), AI_STRIDE_INIT(4, 1, 1280, 12800, 12800),
  1, &gemm_69_weights_array, &gemm_69_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
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


AI_STATIC_CONST ai_i32 nl_70_nl_params_data[] = { 1478917248, 25, -62 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 261608, 1, 1),
    261608, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 261608, 1, 1),
      261608, NULL, NULL)
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
    
    nl_70_output_array.data = AI_PTR(g_network_activations_map[0] + 40);
    nl_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 40);
    
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
    gemm_69_bias_array.data = AI_PTR(g_network_weights_map[0] + 261568);
    gemm_69_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 261568);
    
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
      
      .n_macc            = 36464116,
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
      
      .n_macc            = 36464116,
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

