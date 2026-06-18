/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jan  7 12:58:31 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "2e168818b89bb97e9038aba4230870ae"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Jan  7 12:58:31 2025"

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
  NULL, NULL, 11, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 11, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conversion_71_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 11, AI_STATIC)
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
  NULL, NULL, 11, AI_STATIC)
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
  NULL, NULL, 14080, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 11, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.06243745610117912f),
    AI_PACK_INTQ_ZP(8)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14209313690662384f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.05240954831242561f),
    AI_PACK_INTQ_ZP(-7)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.17305240035057068f),
    AI_PACK_INTQ_ZP(2)))

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
    AI_PACK_INTQ_SCALE(0.0820663794875145f),
    AI_PACK_INTQ_ZP(11)))

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
    AI_PACK_INTQ_SCALE(0.05935140699148178f),
    AI_PACK_INTQ_ZP(1)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11734014749526978f),
    AI_PACK_INTQ_ZP(6)))

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
    AI_PACK_INTQ_SCALE(0.054589200764894485f),
    AI_PACK_INTQ_ZP(10)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.13853584229946136f),
    AI_PACK_INTQ_ZP(5)))

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
    AI_PACK_INTQ_SCALE(0.06467245519161224f),
    AI_PACK_INTQ_ZP(5)))

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
    AI_PACK_INTQ_SCALE(0.06199881061911583f),
    AI_PACK_INTQ_ZP(14)))

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
    AI_PACK_INTQ_SCALE(0.09031405299901962f),
    AI_PACK_INTQ_ZP(5)))

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
    AI_PACK_INTQ_SCALE(0.07590658962726593f),
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
    AI_PACK_INTQ_SCALE(0.12078661471605301f),
    AI_PACK_INTQ_ZP(3)))

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
    AI_PACK_INTQ_SCALE(0.06698256731033325f),
    AI_PACK_INTQ_ZP(6)))

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
    AI_PACK_INTQ_SCALE(0.009588317014276981f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.31588491797447205f),
    AI_PACK_INTQ_ZP(36)))

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
    AI_PACK_INTQ_SCALE(0.0050472598522901535f, 0.007006801199167967f, 0.001920994371175766f, 0.006898532155901194f, 0.010935017839074135f, 0.005609752144664526f, 0.007232651114463806f, 0.009012196213006973f),
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
    AI_PACK_INTQ_SCALE(0.004529070109128952f, 0.02791719138622284f, 0.013031627051532269f, 0.011850722134113312f, 0.010340533219277859f, 0.009309223853051662f, 0.010455897077918053f, 0.01498044840991497f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00627877889201045f, 0.010984673164784908f, 0.005891577340662479f, 0.005181066691875458f, 0.00797524768859148f, 0.006554410792887211f, 0.007314634975045919f, 0.009201860055327415f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004492850974202156f, 0.004379407502710819f, 0.0038263744208961725f, 0.0033789710141718388f, 0.009188051335513592f, 0.0028797455597668886f, 0.004183314740657806f, 0.00463054608553648f, 0.00321756093762815f, 0.004456956870853901f, 0.00764826824888587f, 0.004469720646739006f, 0.00412897439673543f, 0.003387889824807644f, 0.005368162412196398f, 0.004720773082226515f, 0.0043649449944496155f, 0.0026442280504852533f, 0.004563493188470602f, 0.0029275501146912575f, 0.005217667669057846f, 0.004104119725525379f, 0.009422045201063156f, 0.002605007728561759f, 0.005104356445372105f, 0.005393620114773512f, 0.005196261219680309f, 0.007303604390472174f, 0.004297454375773668f, 0.005485519766807556f, 0.003941585309803486f, 0.006362167187035084f, 0.004147793632000685f, 0.0039261989295482635f, 0.003774037817493081f, 0.00535920774564147f, 0.005540209356695414f, 0.007608034182339907f, 0.004547648131847382f, 0.004878917243331671f, 0.0037018500734120607f, 0.004115524236112833f, 0.004499384667724371f, 0.0031247413717210293f, 0.003939731512218714f, 0.007947208359837532f, 0.004038855899125338f, 0.006464208941906691f),
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
    AI_PACK_INTQ_SCALE(0.007389445323497057f, 0.005573909729719162f, 0.011798285879194736f, 0.006433476228266954f, 0.00516445841640234f, 0.011819446459412575f, 0.018777141347527504f, 0.0055814036168158054f, 0.012850610539317131f, 0.009990754537284374f, 0.0029601724818348885f, 0.007145381066948175f, 0.010673021897673607f, 0.00821556057780981f, 0.010272320359945297f, 0.004800023511052132f, 0.006957182195037603f, 0.003477215301245451f, 0.011915342882275581f, 0.013307485729455948f, 0.009695920161902905f, 0.006863692309707403f, 0.005852682050317526f, 0.013966129161417484f, 0.01602770760655403f, 0.0031051873229444027f, 0.007953541353344917f, 0.004450961947441101f, 0.006023312918841839f, 0.005882602650672197f, 0.007828244008123875f, 0.0077292583882808685f, 0.017016448080539703f, 0.01051901001483202f, 0.007575674913823605f, 0.005420950707048178f, 0.004705033265054226f, 0.006932524498552084f, 0.009038877673447132f, 0.005665796343237162f, 0.0057775042951107025f, 0.0031439613085240126f, 0.005127469077706337f, 0.005046369973570108f, 0.008994372561573982f, 0.003647755365818739f, 0.01343255303800106f, 0.010447490960359573f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003249118337407708f, 0.0029033974278718233f, 0.0017738151364028454f, 0.00239299307577312f, 0.003228840883821249f, 0.0028782831504940987f, 0.0028183336835354567f, 0.00295247626490891f),
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
    AI_PACK_INTQ_SCALE(0.00574335316196084f, 0.00467476062476635f, 0.0031500498298555613f, 0.0048259561881423f, 0.0034493105486035347f, 0.006218437571078539f, 0.007157214917242527f, 0.00572712579742074f, 0.00414173724129796f, 0.005661522038280964f, 0.0037568819243460894f, 0.005153818987309933f, 0.004535386338829994f, 0.0030821585096418858f, 0.0065011437982320786f, 0.004097056575119495f, 0.004945726133882999f, 0.00460696779191494f, 0.003290838096290827f, 0.004581368528306484f, 0.0041853697039186954f, 0.004430538509041071f, 0.00418113125488162f, 0.006305729504674673f, 0.003408299060538411f, 0.004254638683050871f, 0.0035804626531898975f, 0.005357353948056698f, 0.0029110396280884743f, 0.004365930799394846f, 0.00358240632340312f, 0.004222078248858452f, 0.004089390859007835f, 0.00427292613312602f, 0.0046952953562140465f, 0.003893681336194277f, 0.004364608321338892f, 0.005377353634685278f, 0.008038950152695179f, 0.004551332909613848f, 0.0031051384285092354f, 0.0031268035527318716f, 0.003210047958418727f, 0.0047394949942827225f, 0.003906902391463518f, 0.004153355490416288f, 0.0062208035960793495f, 0.004698392003774643f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007599590811878443f, 0.012184555642306805f, 0.009289950132369995f, 0.004494867753237486f, 0.010831953957676888f, 0.008368364535272121f, 0.008543440140783787f, 0.010479075834155083f, 0.01117307972162962f, 0.010167691856622696f, 0.006430780049413443f, 0.005800584796816111f, 0.00775294192135334f, 0.00982291903346777f, 0.007464397698640823f, 0.008301738649606705f, 0.011007118038833141f, 0.0037529217079281807f, 0.006717921234667301f, 0.010015582665801048f, 0.009087352082133293f, 0.004354649689048529f, 0.006859263870865107f, 0.004549878183752298f, 0.0068040513433516026f, 0.007198604755103588f, 0.0038704031612724066f, 0.010399749502539635f, 0.012520880438387394f, 0.005173743236809969f, 0.012393685057759285f, 0.011997058056294918f, 0.003119676373898983f, 0.011660898104310036f, 0.006824235897511244f, 0.0066798897460103035f, 0.010602820664644241f, 0.006892753764986992f, 0.004055604804307222f, 0.007102120667695999f, 0.012433613650500774f, 0.012733220122754574f, 0.012113669887185097f, 0.004398521967232227f, 0.009752767160534859f, 0.005073012784123421f, 0.007025846745818853f, 0.012308651581406593f),
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
    AI_PACK_INTQ_SCALE(0.0026268218643963337f, 0.0027576640713959932f, 0.002220223657786846f, 0.002439579227939248f, 0.0017825698014348745f, 0.002172591630369425f, 0.0022129451390355825f, 0.0020723978523164988f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002834112150594592f, 0.0023716562427580357f, 0.0028032036498188972f, 0.0038890293799340725f, 0.0027665565721690655f, 0.0043606990948319435f, 0.0033572716638445854f, 0.002260960638523102f, 0.0036973708774894476f, 0.0025614481419324875f, 0.0027489876374602318f, 0.0037738520186394453f, 0.0036084374878555536f, 0.0038302503526210785f, 0.0035522549878805876f, 0.0029430969152599573f, 0.003721744054928422f, 0.003121837042272091f, 0.002908556256443262f, 0.005737850442528725f, 0.0027607146184891462f, 0.0037738243117928505f, 0.002727218670770526f, 0.0028345747850835323f, 0.0034344990272074938f, 0.0037123714573681355f, 0.003031200496479869f, 0.002476372756063938f, 0.0032447869889438152f, 0.0031122067011892796f, 0.00512738199904561f, 0.003166008275002241f, 0.002725753001868725f, 0.0026791992131620646f, 0.0024938713759183884f, 0.003910033032298088f, 0.0024860487319529057f, 0.004536161664873362f, 0.00334848347119987f, 0.003786474699154496f, 0.0035983766429126263f, 0.003501043189316988f, 0.0038076373748481274f, 0.004349694587290287f, 0.0023608377669006586f, 0.0036088430788367987f, 0.002561233937740326f, 0.0050411587581038475f),
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
    AI_PACK_INTQ_SCALE(0.006172435823827982f, 0.006696483585983515f, 0.005441316403448582f, 0.010238131508231163f, 0.004489453509449959f, 0.0036442081909626722f, 0.006794706452637911f, 0.010620706714689732f, 0.007856788113713264f, 0.004360058344900608f, 0.006499090231955051f, 0.004770755767822266f, 0.0044600218534469604f, 0.005978569854050875f, 0.007136753760278225f, 0.006366947665810585f, 0.004398373421281576f, 0.005283729638904333f, 0.012304515577852726f, 0.003829525550827384f, 0.005511284805834293f, 0.007889308966696262f, 0.0069457911886274815f, 0.007917058654129505f, 0.008928031660616398f, 0.0064994459971785545f, 0.004837346728891134f, 0.00819384679198265f, 0.005123944487422705f, 0.006231947802007198f, 0.003452734788879752f, 0.013066778890788555f, 0.004470018669962883f, 0.004871830809861422f, 0.005339497234672308f, 0.009273439645767212f, 0.022688928991556168f, 0.004964538384228945f, 0.0037279296666383743f, 0.0073516517877578735f, 0.007054444868117571f, 0.007160516455769539f, 0.01260998286306858f, 0.009184383787214756f, 0.004446607548743486f, 0.010130474343895912f, 0.006810604128986597f, 0.004864292684942484f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003252804046496749f, 0.00287695974111557f, 0.0030925050377845764f, 0.003434553276747465f, 0.003499941434711218f, 0.0030410594772547483f, 0.003304148791357875f, 0.003088813740760088f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0038268754724413157f, 0.004677961114794016f, 0.004217027686536312f, 0.00464079761877656f, 0.004855629056692123f, 0.0031728935427963734f, 0.003626832040026784f, 0.004217792302370071f, 0.004818291403353214f, 0.0051200781017541885f, 0.00381832686252892f, 0.004509349353611469f, 0.005486287176609039f, 0.007682169321924448f, 0.002688964596018195f, 0.00673698028549552f, 0.006534959189593792f, 0.003342230571433902f, 0.004230051301419735f, 0.0037752115167677402f, 0.005775630008429289f, 0.003179878229275346f, 0.0045248218812048435f, 0.0035113715566694736f, 0.0037675690837204456f, 0.0022541515063494444f, 0.004081739578396082f, 0.004360929597169161f, 0.00294690509326756f, 0.004503810312598944f, 0.0037288302555680275f, 0.005107040051370859f, 0.0031090613920241594f, 0.0033169651869684458f, 0.003810935653746128f, 0.004427017644047737f, 0.0030596836004406214f, 0.005776654463261366f, 0.004506857134401798f, 0.0031185082625597715f, 0.004038930870592594f, 0.0035819706972688437f, 0.00372040132060647f, 0.004405215382575989f, 0.005105508957058191f, 0.006300799548625946f, 0.003534473944455385f, 0.0055825007148087025f),
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
    AI_PACK_INTQ_SCALE(0.011971470899879932f, 0.006115705240517855f, 0.011300768703222275f, 0.009559537284076214f, 0.005386243108659983f, 0.004060810897499323f, 0.00976368598639965f, 0.010912488214671612f, 0.009106641635298729f, 0.0025366342160850763f, 0.006990472786128521f, 0.009000414982438087f, 0.009618854150176048f, 0.0057214852422475815f, 0.010146510787308216f, 0.006609208881855011f, 0.011583714745938778f, 0.009516967460513115f, 0.007842137478291988f, 0.007196290418505669f, 0.00997309572994709f, 0.009083096869289875f, 0.003057589288800955f, 0.011010349728167057f, 0.01103324443101883f, 0.021819181740283966f, 0.009564138017594814f, 0.016814706847071648f, 0.009584981948137283f, 0.009072425775229931f, 0.005056378431618214f, 0.005193834193050861f, 0.006440919823944569f, 0.01217443123459816f, 0.007955456152558327f, 0.011094799265265465f, 0.012543929740786552f, 0.00275180721655488f, 0.005120214074850082f, 0.009252340532839298f, 0.008704367093741894f, 0.003742906730622053f, 0.004415974486619234f, 0.0062669552862644196f, 0.009287546388804913f, 0.007297413889318705f, 0.012292228639125824f, 0.007001389283686876f),
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
    AI_PACK_INTQ_SCALE(0.0024984506890177727f, 0.002817728789523244f, 0.002104416023939848f, 0.0029867852572351694f, 0.0015389489708468318f, 0.002345456276088953f, 0.002387293614447117f, 0.002933114767074585f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0030784644186496735f, 0.004380321130156517f, 0.0030072415247559547f, 0.002396328840404749f, 0.0024321768432855606f, 0.0030395155772566795f, 0.0022933247964829206f, 0.0018708634888753295f, 0.0026173293590545654f, 0.0027722131926566362f, 0.002170704770833254f, 0.0032637002877891064f, 0.0028538107872009277f, 0.0029957161750644445f, 0.0029343431815505028f, 0.002487050136551261f, 0.003131104400381446f, 0.0024886338505893946f, 0.0029708535876125097f, 0.004166680388152599f, 0.0024657128378748894f, 0.002929667243734002f, 0.0034947646781802177f, 0.0023627406917512417f, 0.0038645141758024693f, 0.0016213316703215241f, 0.003491667564958334f, 0.00391445541754365f, 0.0019228183664381504f, 0.0034719195682555437f, 0.002679919358342886f, 0.002263111062347889f, 0.002521971007809043f, 0.004057288635522127f, 0.0021489171776920557f, 0.0027155440766364336f, 0.0021862660069018602f, 0.0019744043238461018f, 0.0035280142910778522f, 0.0022547945845872164f, 0.0026399679481983185f, 0.003105688840150833f, 0.002362040337175131f, 0.0022884116042405367f, 0.002100036246702075f, 0.0022271263878792524f, 0.004303839989006519f, 0.002487450372427702f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009156056679785252f, 0.0032362141646444798f, 0.009359539486467838f, 0.010950829833745956f, 0.004789778962731361f, 0.005877120420336723f, 0.0068300142884254456f, 0.010130517184734344f, 0.009083172306418419f, 0.009902224875986576f, 0.007493569981306791f, 0.005847640335559845f, 0.008057046681642532f, 0.007904364727437496f, 0.011529228650033474f, 0.009296379052102566f, 0.0025713276118040085f, 0.0038688918575644493f, 0.004848520737141371f, 0.0034127586986869574f, 0.006782351527363062f, 0.01808750070631504f, 0.008243929594755173f, 0.012697326019406319f, 0.0044272043742239475f, 0.01186134573072195f, 0.00637349346652627f, 0.0024302401579916477f, 0.004309744108468294f, 0.01981174200773239f, 0.011584494262933731f, 0.007797947619110346f, 0.013803413137793541f, 0.005974699277430773f, 0.005533552262932062f, 0.008806618861854076f, 0.01220367569476366f, 0.01115270797163248f, 0.008080068975687027f, 0.007430220488458872f, 0.009222356602549553f, 0.011174150742590427f, 0.012303942814469337f, 0.004580565262585878f, 0.00876916665583849f, 0.008336782455444336f, 0.0037613732274621725f, 0.007105988450348377f),
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
    AI_PACK_INTQ_SCALE(0.0021968823857605457f, 0.0026623872108757496f, 0.0016161483945325017f, 0.002518098335713148f, 0.002483920194208622f, 0.002527439035475254f, 0.0019735503010451794f, 0.0021616246085613966f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002060835948213935f, 0.0023484393022954464f, 0.003123643808066845f, 0.002623817650601268f, 0.002072560368105769f, 0.002053789561614394f, 0.0021425567101687193f, 0.0028038793243467808f, 0.0036784112453460693f, 0.0018249346176162362f, 0.0021289600990712643f, 0.002021605847403407f, 0.0027908580377697945f, 0.002184265060350299f, 0.002224917756393552f, 0.0028521977365016937f, 0.0018219249323010445f, 0.0034101479686796665f, 0.0017087231390178204f, 0.0019920100457966328f, 0.002282440895214677f, 0.002312071155756712f, 0.0027817697264254093f, 0.0013288547052070498f, 0.001585831050761044f, 0.0024024369195103645f, 0.002500643255189061f, 0.0024846307933330536f, 0.0017261800821870565f, 0.0024807341396808624f, 0.002976880641654134f, 0.0018396882805973291f, 0.0023599695414304733f, 0.0024715655017644167f, 0.0017108626198023558f, 0.0023322580382227898f, 0.0021832119673490524f, 0.0025284606963396072f, 0.0020996062085032463f, 0.0035987331066280603f, 0.001808627974241972f, 0.0029560946859419346f, 0.002771122846752405f, 0.0025962062645703554f, 0.0026026638224720955f, 0.0029382279608398676f, 0.0015694114845246077f, 0.0020666001364588737f),
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
    AI_PACK_INTQ_SCALE(0.006271752063184977f, 0.006037113722413778f, 0.0038681605365127325f, 0.0044815195724368095f, 0.012643164023756981f, 0.0038027006667107344f, 0.015302248299121857f, 0.006724284961819649f, 0.009047693572938442f, 0.00929924938827753f, 0.002805262804031372f, 0.005373427178710699f, 0.006587819661945105f, 0.0057251411490142345f, 0.00590823357924819f, 0.004677570890635252f, 0.00469407020136714f, 0.0027942825108766556f, 0.0066162291914224625f, 0.01096853893250227f, 0.006535722408443689f, 0.006448029074817896f, 0.007397407665848732f, 0.0065237353555858135f, 0.006775295827537775f, 0.005735659506171942f, 0.0033176804427057505f, 0.004146685358136892f, 0.00670277327299118f, 0.004381466656923294f, 0.005064636934548616f, 0.005036385264247656f, 0.007289798464626074f, 0.011320119723677635f, 0.003407297655940056f, 0.00413378793746233f, 0.004157209303230047f, 0.0040028290823102f, 0.005817099008709192f, 0.004089714959263802f, 0.012712830677628517f, 0.004994995892047882f, 0.0055732736364007f, 0.005536909680813551f, 0.005859966389834881f, 0.006022808142006397f, 0.010559841990470886f, 0.0056135524064302444f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004063060972839594f, 0.0033154275733977556f, 0.003973358776420355f, 0.0036773639731109142f, 0.0025879477616399527f, 0.0037800874561071396f, 0.003478342667222023f, 0.0029088349547237158f, 0.003962614573538303f, 0.003392589744180441f, 0.0041958787478506565f, 0.0049334922805428505f, 0.004120016470551491f, 0.004468791652470827f, 0.0027623267378658056f, 0.0031970927957445383f),
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
    AI_PACK_INTQ_SCALE(0.001990833319723606f, 0.002162403194233775f, 0.0046989815309643745f, 0.0019209596794098616f, 0.0025492648128420115f, 0.00406305817887187f, 0.0036443055141717196f, 0.0021799311507493258f, 0.003181176260113716f, 0.002623504027724266f, 0.002835589461028576f, 0.0025945506058633327f, 0.0023096478544175625f, 0.0030328156426548958f, 0.0026508986484259367f, 0.0024678485933691263f, 0.002268122276291251f, 0.0025158829521387815f, 0.002051673363894224f, 0.002347958041355014f, 0.0031796912662684917f, 0.0026676368433982134f, 0.00440048985183239f, 0.00220698956400156f, 0.002769904211163521f, 0.002581436885520816f, 0.0024565954227000475f, 0.0019459916511550546f, 0.002830540994182229f, 0.0030539461877197027f, 0.003163097193464637f, 0.0034375344403088093f, 0.002086051506921649f, 0.0037684987764805555f, 0.001641139853745699f, 0.002226162701845169f, 0.0025984032545238733f, 0.003986875992268324f, 0.0029718547593802214f, 0.0033619021996855736f, 0.0025403574109077454f, 0.0034376259427517653f, 0.0025257107336074114f, 0.002374042756855488f, 0.0026054757181555033f, 0.002177322981879115f, 0.0032299768645316362f, 0.0023234642576426268f, 0.002722985576838255f, 0.0032313901465386152f, 0.003522467100992799f, 0.002924542175605893f, 0.001940971240401268f, 0.002434065565466881f, 0.00311390426941216f, 0.003829186549410224f, 0.003292672336101532f, 0.00215918174944818f, 0.0028496356680989265f, 0.002271575853228569f, 0.0018158773891627789f, 0.00328535633161664f, 0.0033079818822443485f, 0.004491390660405159f, 0.003725772723555565f, 0.0035040786024183035f, 0.0025775989051908255f, 0.0022355038672685623f, 0.0027066264301538467f, 0.0022164229303598404f, 0.0029937648214399815f, 0.002756398404017091f, 0.003643572563305497f, 0.0032086260616779327f, 0.0016802328173071146f, 0.0025061480700969696f, 0.0023587376344949007f, 0.002215926069766283f, 0.0026532046031206846f, 0.004454783629626036f, 0.0030001758132129908f, 0.002986372448503971f, 0.002888063434511423f, 0.0024153687991201878f, 0.0016970888245850801f, 0.002749755745753646f, 0.0023710494861006737f, 0.0035734078846871853f, 0.0026614652015268803f, 0.002393869450315833f, 0.0027941218577325344f, 0.0033063325099647045f, 0.0024436847306787968f, 0.002832558937370777f, 0.0032627969048917294f, 0.0027819154784083366f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008898473344743252f, 0.003206216264516115f, 0.007855674251914024f, 0.012260613963007927f, 0.016414804384112358f, 0.004604046698659658f, 0.006179002113640308f, 0.009863980114459991f, 0.013538424856960773f, 0.00808694213628769f, 0.0039381906390190125f, 0.010822572745382786f, 0.008113289251923561f, 0.004758553579449654f, 0.00881289690732956f, 0.011731813661754131f, 0.014479288831353188f, 0.00970510859042406f, 0.009799267165362835f, 0.011708488687872887f, 0.012545065023005009f, 0.009813492186367512f, 0.005928455851972103f, 0.006199335213750601f, 0.009722424671053886f, 0.004956853576004505f, 0.00960615649819374f, 0.005789730232208967f, 0.005244001280516386f, 0.009377606213092804f, 0.0068376329727470875f, 0.005040010437369347f, 0.01723712496459484f, 0.00475733820348978f, 0.008432446978986263f, 0.004885350354015827f, 0.00498557835817337f, 0.008909224532544613f, 0.011479138396680355f, 0.006312562618404627f, 0.007772480603307486f, 0.008326615206897259f, 0.014198253862559795f, 0.005715258419513702f, 0.00401508342474699f, 0.008614206686615944f, 0.007244555279612541f, 0.007457829546183348f, 0.007333236280828714f, 0.007136130705475807f, 0.0047198194079101086f, 0.007719902321696281f, 0.00879824347794056f, 0.009267892688512802f, 0.005251075606793165f, 0.010836897417902946f, 0.007951691746711731f, 0.005792498588562012f, 0.009124710224568844f, 0.010195755399763584f, 0.009151301346719265f, 0.0033563387114554644f, 0.0053739422000944614f, 0.006818564608693123f, 0.0032036984339356422f, 0.0035489527508616447f, 0.0061882976442575455f, 0.007176899816840887f, 0.009247432462871075f, 0.007646077312529087f, 0.0048346007242798805f, 0.010936972685158253f, 0.004431369248777628f, 0.007039572112262249f, 0.010522621683776379f, 0.008308960124850273f, 0.008513413369655609f, 0.00507370475679636f, 0.0032751690596342087f, 0.005753287114202976f, 0.0047656768001616f, 0.008296939544379711f, 0.011958998627960682f, 0.006160806864500046f, 0.004665640648454428f, 0.00825590267777443f, 0.008741951547563076f, 0.010836798697710037f, 0.006188707426190376f, 0.008208466693758965f, 0.00610078452154994f, 0.0061208391562104225f, 0.006557763554155827f, 0.009006423875689507f, 0.005618193186819553f, 0.006506396923214197f),
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
    AI_PACK_INTQ_SCALE(0.0022404866758733988f, 0.001722846645861864f, 0.0014817038318142295f, 0.0018858538242056966f, 0.0022089325357228518f, 0.0019473802531138062f, 0.0021068148780614138f, 0.0019940065685659647f, 0.0014917267253622413f, 0.002069939160719514f, 0.001557417563162744f, 0.0018402267014607787f, 0.0028201749082654715f, 0.0019520503701642156f, 0.0021590820979326963f, 0.00247938372194767f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025629738811403513f, 0.003509555011987686f, 0.0016066412208601832f, 0.0021181609481573105f, 0.002030912321060896f, 0.0028205947019159794f, 0.002111310139298439f, 0.0027310973964631557f, 0.0019914184231311083f, 0.0027892785146832466f, 0.0014564734883606434f, 0.0023739843163639307f, 0.0013972541783005f, 0.001796974684111774f, 0.002303158864378929f, 0.0014660138403996825f, 0.0027850992046296597f, 0.0018382935086265206f, 0.0025520690251141787f, 0.0020230889786034822f, 0.0022232825867831707f, 0.002890146803110838f, 0.002570862416177988f, 0.001962181879207492f, 0.0019004619680345058f, 0.002933142939582467f, 0.002099138917401433f, 0.002552313031628728f, 0.002766511868685484f, 0.0019245969597250223f, 0.0017287260852754116f, 0.0020707272924482822f, 0.0014072296908125281f, 0.00216095894575119f, 0.0022263643331825733f, 0.0019248937023803592f, 0.002843280090019107f, 0.001888789003714919f, 0.0016562211094424129f, 0.0016240286640822887f, 0.0014174618991091847f, 0.0035458295606076717f, 0.0018003941513597965f, 0.002255563624203205f, 0.0017812021542340517f, 0.0017106907907873392f, 0.0017569680931046605f, 0.0020694443956017494f, 0.002405848354101181f, 0.0031555267050862312f, 0.0030634202994406223f, 0.0016341997543349862f, 0.0028565730899572372f, 0.001676772953942418f, 0.0016425939975306392f, 0.0016064484370872378f, 0.002017390448600054f, 0.002183998003602028f, 0.0020360155031085014f, 0.002655153162777424f, 0.002525588497519493f, 0.0014169467613101006f, 0.0025709006004035473f, 0.0030153251718729734f, 0.0033077793195843697f, 0.002397251082584262f, 0.0029831521678715944f, 0.0025817446876317263f, 0.0026159065309911966f, 0.0024779769591987133f, 0.0021996942814439535f, 0.0028916695155203342f, 0.0025174240581691265f, 0.0020161918364465237f, 0.0019792362581938505f, 0.0019140458898618817f, 0.0023459570948034525f, 0.002072063973173499f, 0.0024568852968513966f, 0.003168304916471243f, 0.002839347580447793f, 0.0024206696543842554f, 0.002870860742405057f, 0.0017104464350268245f, 0.0023067607544362545f, 0.002525089308619499f, 0.001982210436835885f, 0.002874016761779785f, 0.0020831648726016283f, 0.0016060036141425371f, 0.0021673545707017183f, 0.0021307826973497868f, 0.0021414184011518955f, 0.002409526612609625f, 0.0038874878082424402f, 0.0012359346728771925f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031843562610447407f, 0.0076129380613565445f, 0.006670345552265644f, 0.0035721249878406525f, 0.004375068936496973f, 0.011557046324014664f, 0.010997924953699112f, 0.008819583803415298f, 0.005172621458768845f, 0.011134997941553593f, 0.007301255129277706f, 0.008241850882768631f, 0.01073126494884491f, 0.005090986844152212f, 0.011608130298554897f, 0.01633302867412567f, 0.006194861605763435f, 0.010567276738584042f, 0.006428477354347706f, 0.0053712958469986916f, 0.013194296509027481f, 0.009243336506187916f, 0.006227173842489719f, 0.009778754785656929f, 0.007117615547031164f, 0.006084764376282692f, 0.009158832021057606f, 0.008783983066678047f, 0.007476241793483496f, 0.010900611989200115f, 0.01684139482676983f, 0.007480638567358255f, 0.008448808453977108f, 0.008752573281526566f, 0.008663645945489407f, 0.003889487124979496f, 0.006477047689259052f, 0.010027188807725906f, 0.021130671724677086f, 0.009004835970699787f, 0.017317919060587883f, 0.005308188963681459f, 0.005664063151925802f, 0.01110184658318758f, 0.004494049586355686f, 0.004894588142633438f, 0.007326885126531124f, 0.00703095318749547f, 0.0074661714024841785f, 0.007259874604642391f, 0.008555288426578045f, 0.007155786734074354f, 0.007140091620385647f, 0.0034429016523063183f, 0.007414687424898148f, 0.009700496681034565f, 0.005871905479580164f, 0.00835559330880642f, 0.01030635554343462f, 0.011363263241946697f, 0.005115835927426815f, 0.00937108974903822f, 0.007751445285975933f, 0.008666141889989376f, 0.0061498284339904785f, 0.007096393965184689f, 0.007760948035866022f, 0.008569309487938881f, 0.0040244548581540585f, 0.007849705405533314f, 0.007651233114302158f, 0.006285056937485933f, 0.006191852502524853f, 0.005633463617414236f, 0.006669989787042141f, 0.004879288375377655f, 0.006335858721286058f, 0.010255805216729641f, 0.008952541276812553f, 0.0028339531272649765f, 0.004136983305215836f, 0.005485661793500185f, 0.01296878419816494f, 0.004746248945593834f, 0.008485010825097561f, 0.004606819245964289f, 0.004278091248124838f, 0.008551972918212414f, 0.011128593236207962f, 0.01177225261926651f, 0.00860024057328701f, 0.007114160340279341f, 0.00575012993067503f, 0.006196407601237297f, 0.012319842353463173f, 0.012709010392427444f),
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
    AI_PACK_INTQ_SCALE(0.001466092187911272f, 0.0016431224066764116f, 0.001935781678184867f, 0.0015052934177219868f, 0.00207098969258368f, 0.002186954254284501f, 0.0017382039222866297f, 0.0025403855834156275f, 0.0018889566417783499f, 0.0017222214955836535f, 0.0021087252534925938f, 0.0013532433658838272f, 0.001967018935829401f, 0.0015472613740712404f, 0.0016307433834299445f, 0.002394208451732993f),
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
    AI_PACK_INTQ_SCALE(0.0020525690633803606f, 0.0013806471833959222f, 0.0021104796323925257f, 0.0022393360268324614f, 0.0016321619041264057f, 0.00164909684099257f, 0.0010791419772431254f, 0.0021454680245369673f, 0.0016177688958123326f, 0.002192507963627577f, 0.00123881665058434f, 0.002124350517988205f, 0.0015167051460593939f, 0.0022243172861635685f, 0.0019341094885021448f, 0.001743833301588893f, 0.0017580408602952957f, 0.0024396227672696114f, 0.001579144038259983f, 0.0015547906514257193f, 0.003031147178262472f, 0.0016430994728580117f, 0.00217870413325727f, 0.0017575586680322886f, 0.0017558891559019685f, 0.0017587289912626147f, 0.0014693256234750152f, 0.002927298191934824f, 0.0014924032147973776f, 0.0014684166526421905f, 0.0017148947808891535f, 0.0018219798803329468f, 0.0019295146921649575f, 0.0013736544642597437f, 0.001708259922452271f, 0.0011595605174079537f, 0.0013548441929742694f, 0.001239728182554245f, 0.002319737570360303f, 0.001790807000361383f, 0.0020087838638573885f, 0.0011852480238303542f, 0.0017698085866868496f, 0.001894416636787355f, 0.0018137514125555754f, 0.0015691574662923813f, 0.0022990936413407326f, 0.0018616211600601673f, 0.0012852358631789684f, 0.001668562414124608f, 0.0017695266287773848f, 0.0011327260872349143f, 0.0017972564091905951f, 0.001982387388125062f, 0.0014993823133409023f, 0.0014876306522637606f, 0.0020581239368766546f, 0.0013029479887336493f, 0.002276476239785552f, 0.0011160675203427672f, 0.0014460791135206819f, 0.002037141239270568f, 0.0018395934021100402f, 0.001167139271274209f, 0.0025288842152804136f, 0.0016585775883868337f, 0.0015389315085485578f, 0.0025833637919276953f, 0.0019114696187898517f, 0.0021641997154802084f, 0.0022884628269821405f, 0.001217035809531808f, 0.0013904152438044548f, 0.0015277635538950562f, 0.0020418940111994743f, 0.0023067884612828493f, 0.0025233228225260973f, 0.0015750667080283165f, 0.0014513061614707112f, 0.0015282920794561505f, 0.0017209922662004828f, 0.002224092371761799f, 0.0015786484582349658f, 0.0016631671460345387f, 0.0014511614572256804f, 0.0020713910926133394f, 0.002294760663062334f, 0.0017724302597343922f, 0.0020529753528535366f, 0.001292556757107377f, 0.001828277949243784f, 0.0023198071867227554f, 0.001799140009097755f, 0.0022279517725110054f, 0.0017240167362615466f, 0.002026814501732588f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0062063876539468765f, 0.007637144532054663f, 0.004241026937961578f, 0.007812186144292355f, 0.0073310271836817265f, 0.0069039189256727695f, 0.004535200539976358f, 0.007764516863971949f, 0.014820574782788754f, 0.006582568399608135f, 0.009220879524946213f, 0.0041088382713496685f, 0.008502925746142864f, 0.007879612036049366f, 0.012263897806406021f, 0.00859030056744814f, 0.010778754949569702f, 0.009012243710458279f, 0.003373644547536969f, 0.005431925877928734f, 0.008057317696511745f, 0.013534877449274063f, 0.0061665549874305725f, 0.013449843972921371f, 0.009942234493792057f, 0.00860489159822464f, 0.010218324139714241f, 0.007129257544875145f, 0.01258895918726921f, 0.006981156300753355f, 0.01459422055631876f, 0.008254741318523884f, 0.006480027921497822f, 0.00830232072621584f, 0.007409426849335432f, 0.008571838960051537f, 0.021596020087599754f, 0.00462757283821702f, 0.009504133835434914f, 0.0039604599587619305f, 0.00722794234752655f, 0.007903729565441608f, 0.0073646134696900845f, 0.005445057991892099f, 0.009807772003114223f, 0.007233129348605871f, 0.011483942158520222f, 0.0050500831566751f, 0.012918487191200256f, 0.0047199903056025505f, 0.004860591143369675f, 0.004380467813462019f, 0.00804396253079176f, 0.009881354868412018f, 0.007454810664057732f, 0.006697268225252628f, 0.0055440254509449005f, 0.009418990463018417f, 0.005497397854924202f, 0.0100574204698205f, 0.00328901712782681f, 0.010861537419259548f, 0.0101925665512681f, 0.009821473620831966f, 0.008412928320467472f, 0.005412350408732891f, 0.008242804557085037f, 0.006560076959431171f, 0.009389113634824753f, 0.012642108835279942f, 0.006740748416632414f, 0.004377378150820732f, 0.006633061449974775f, 0.007405185140669346f, 0.004063918720930815f, 0.012538162060081959f, 0.007855087518692017f, 0.008228368125855923f, 0.005345372948795557f, 0.0029301652684807777f, 0.01170890312641859f, 0.007029377389699221f, 0.009141980670392513f, 0.008961433544754982f, 0.008484424091875553f, 0.010430281050503254f, 0.005804429762065411f, 0.004396973177790642f, 0.013862543739378452f, 0.004767815116792917f, 0.0032833577133715153f, 0.005269644316285849f, 0.006832308601588011f, 0.015802036970853806f, 0.007672253996133804f, 0.011118009686470032f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_39_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012753831688314676f, 0.0017846807604655623f, 0.002218736568465829f, 0.0026595517992973328f, 0.0014442276442423463f, 0.002340374980121851f, 0.0017238056752830744f, 0.0019000956090167165f, 0.0018075029365718365f, 0.0018147537484765053f, 0.001499040168710053f, 0.0016271724598482251f, 0.0021596283186227083f, 0.0013673183275386691f, 0.0020015486516058445f, 0.0018589498940855265f),
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
    AI_PACK_INTQ_SCALE(0.00202191318385303f, 0.0011521083069965243f, 0.002079326892271638f, 0.0016606755089014769f, 0.0011468826560303569f, 0.001549732987768948f, 0.0016992188757285476f, 0.0014491573674604297f, 0.0018286562990397215f, 0.0014732476556673646f, 0.0010189765598624945f, 0.0013039548648521304f, 0.0021063280291855335f, 0.0009390143677592278f, 0.0016820910386741161f, 0.0014204856706783175f, 0.0015530531527474523f, 0.001199333113618195f, 0.0010213027708232403f, 0.001255371025763452f, 0.0011874748161062598f, 0.0020367964170873165f, 0.001007376005873084f, 0.002134521957486868f, 0.0014162927400320768f, 0.0013353450922295451f, 0.0015473879175260663f, 0.0014664243208244443f, 0.0015008732443675399f, 0.001671523554250598f, 0.0017054920317605138f, 0.0016827244544401765f, 0.0009889260400086641f, 0.001064147101715207f, 0.0013189113233238459f, 0.0015329433372244239f, 0.0015022484585642815f, 0.0019261883571743965f, 0.001809032866731286f, 0.0016828179359436035f, 0.0014461895916610956f, 0.0018852225039154291f, 0.00118535989895463f, 0.001472620526328683f, 0.0017338371835649014f, 0.001439667190425098f, 0.0013121665688231587f, 0.001305392594076693f, 0.0016753340605646372f, 0.0011709275422617793f, 0.0012435218086466193f, 0.0013081681681796908f, 0.001528193592093885f, 0.001640648813918233f, 0.0016610685270279646f, 0.0014242632314562798f, 0.001963790273293853f, 0.0019738527480512857f, 0.0009007584885694087f, 0.0014507563319057226f, 0.0016229574102908373f, 0.0013255254598334432f, 0.0016210986068472266f, 0.0012091753305867314f, 0.0013633520575240254f, 0.0012235145550221205f, 0.0017688734224066138f, 0.0015322138788178563f, 0.00115573825314641f, 0.0010817971779033542f, 0.0014703175984323025f, 0.0017093552742153406f, 0.001216992037370801f, 0.0017640517326071858f, 0.0011047075968235731f, 0.001178571255877614f, 0.00166771758813411f, 0.001617094618268311f, 0.0015667816624045372f, 0.0017499384703114629f, 0.0012978481827303767f, 0.001820870558731258f, 0.0015736292116343975f, 0.002505100565031171f, 0.0012318735243752599f, 0.0019344722386449575f, 0.0022627986036241055f, 0.0011098874965682626f, 0.0018004857702180743f, 0.0017494315980002284f, 0.0015301525127142668f, 0.0012194568989798427f, 0.0014558463590219617f, 0.0020248538348823786f, 0.0022952910512685776f, 0.001240342389792204f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0057074581272900105f, 0.012221571989357471f, 0.006310351192951202f, 0.006743896286934614f, 0.006626342423260212f, 0.005651573650538921f, 0.004920794628560543f, 0.004572039004415274f, 0.015158617869019508f, 0.004491915460675955f, 0.01666928641498089f, 0.006418287754058838f, 0.006606383714824915f, 0.006786751095205545f, 0.003772921860218048f, 0.010221008211374283f, 0.006040344014763832f, 0.006227823439985514f, 0.01066737249493599f, 0.007598246913403273f, 0.004034169018268585f, 0.006973793730139732f, 0.005508264061063528f, 0.005237603094428778f, 0.00438004219904542f, 0.008924434892833233f, 0.011934050358831882f, 0.005751704331487417f, 0.008034862577915192f, 0.004096358083188534f, 0.008803293108940125f, 0.007202278356999159f, 0.010070452466607094f, 0.011764749884605408f, 0.006326966919004917f, 0.011593762785196304f, 0.007900162599980831f, 0.0053092907182872295f, 0.004627554677426815f, 0.007929544895887375f, 0.004560268018394709f, 0.009856709279119968f, 0.005941916257143021f, 0.005682327784597874f, 0.008385758846998215f, 0.005475773010402918f, 0.0048990026116371155f, 0.007491458207368851f, 0.003610387211665511f, 0.0071186041459441185f, 0.005327739752829075f, 0.004225080367177725f, 0.00842396542429924f, 0.01125625055283308f, 0.008572351187467575f, 0.004292953759431839f, 0.004921726416796446f, 0.003897033166140318f, 0.012009328231215477f, 0.006888418924063444f, 0.007627332117408514f, 0.003618279006332159f, 0.005276647862046957f, 0.0053930506110191345f, 0.00482948450371623f, 0.008094260469079018f, 0.008319063112139702f, 0.0063432506285607815f, 0.007671953644603491f, 0.009840399026870728f, 0.004589003976434469f, 0.005547928623855114f, 0.004544428084045649f, 0.009054584428668022f, 0.005694861989468336f, 0.006385317537933588f, 0.007931995205581188f, 0.009688946418464184f, 0.009307341650128365f, 0.006803966127336025f, 0.005213061813265085f, 0.0030423696152865887f, 0.004127458669245243f, 0.006631224416196346f, 0.007030710112303495f, 0.015187583863735199f, 0.004088427405804396f, 0.005947283003479242f, 0.006940236780792475f, 0.005231419112533331f, 0.010377004742622375f, 0.004932854324579239f, 0.005945818964391947f, 0.004383385181427002f, 0.011436622589826584f, 0.005056953057646751f),
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
    AI_PACK_INTQ_SCALE(0.0021561882458627224f, 0.0028082141652703285f, 0.003401021705940366f, 0.001973096514120698f, 0.0023596601095050573f, 0.0033601841423660517f, 0.0028514345176517963f, 0.002937501994892955f, 0.0027915157843381166f, 0.0024556932039558887f, 0.0020649300422519445f, 0.002723642624914646f, 0.0029972954653203487f, 0.0023495194036513567f, 0.0027146574575453997f, 0.0032274702098220587f, 0.0029680475126951933f, 0.0021835656370967627f, 0.0029445525724440813f, 0.0033763546962291002f, 0.0028266492299735546f, 0.0023338363971561193f, 0.002769945655018091f, 0.0031050501856952906f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0023649362847208977f, 0.002831636695191264f, 0.0018433354562148452f, 0.002642666222527623f, 0.0026970445178449154f, 0.0021853502839803696f, 0.0021827116142958403f, 0.0021773544140160084f, 0.002021309919655323f, 0.0023547266609966755f, 0.0021227009128779173f, 0.0013230699114501476f, 0.0029600297566503286f, 0.003527713008224964f, 0.0033952114172279835f, 0.0020688711665570736f, 0.0020659933798015118f, 0.0021263679955154657f, 0.002341095358133316f, 0.0025147616397589445f, 0.0028003230690956116f, 0.0022275452502071857f, 0.0025659622624516487f, 0.0031307146418839693f, 0.0023513922933489084f, 0.0031280743423849344f, 0.0028614692855626345f, 0.003968737553805113f, 0.0028420905582606792f, 0.0021355210337787867f, 0.003363372990861535f, 0.0023766064550727606f, 0.002065047388896346f, 0.0026538579259067774f, 0.0023666354827582836f, 0.001963590970262885f, 0.0022371148224920034f, 0.0029383935034275055f, 0.0016691574128344655f, 0.002191639970988035f, 0.002900750143453479f, 0.001853638794273138f, 0.002133478643372655f, 0.0026589061599224806f, 0.002546648494899273f, 0.002360971411690116f, 0.0018968675285577774f, 0.003446202492341399f, 0.001926465192809701f, 0.0018958653090521693f, 0.0024928839411586523f, 0.0025909729301929474f, 0.0023406888358294964f, 0.0022846930660307407f, 0.0018662394722923636f, 0.002589453710243106f, 0.002350741298869252f, 0.0025757101830095053f, 0.0034888824447989464f, 0.003049322636798024f, 0.003163687651976943f, 0.0017663192702457309f, 0.003614583285525441f, 0.0032768987584859133f, 0.002225281437858939f, 0.0033474485389888287f, 0.002214121865108609f, 0.003122942987829447f, 0.0031511737033724785f, 0.002790927654132247f, 0.0018316992791369557f, 0.0012299767695367336f, 0.003014578949660063f, 0.0023704785853624344f, 0.0020178379490971565f, 0.002672427101060748f, 0.0024441711138933897f, 0.0022174592595547438f, 0.0023470420856028795f, 0.0027025139424949884f, 0.0030618077144026756f, 0.002426955383270979f, 0.0020543045829981565f, 0.0018872078508138657f, 0.0021642807405442f, 0.0014253784902393818f, 0.0025167642161250114f, 0.00298767420463264f, 0.0023213771637529135f, 0.0028126526158303022f, 0.0033021089620888233f, 0.003311106702312827f, 0.003089472185820341f, 0.0029672784730792046f, 0.0031181767117232084f, 0.0033106072805821896f, 0.0020899479277431965f, 0.00257773301564157f, 0.0021414023358374834f, 0.0024177159648388624f, 0.002510181162506342f, 0.0022593161556869745f, 0.0024406886659562588f, 0.0023322475608438253f, 0.003699727589264512f, 0.0019326760666444898f, 0.0030241503845900297f, 0.0031449359375983477f, 0.002417459851130843f, 0.0026220600120723248f, 0.002178490860387683f, 0.001997461076825857f, 0.001812561065889895f, 0.0033049865160137415f, 0.0034120904747396708f, 0.0029833971057087183f, 0.002572766738012433f, 0.0031456262804567814f, 0.0028767164330929518f, 0.0023310312535613775f, 0.002287350594997406f, 0.0019953791052103043f, 0.002578204730525613f, 0.002373417606577277f, 0.0030232821591198444f, 0.0025839947629719973f, 0.0022939161863178015f, 0.003053796011954546f, 0.002304557478055358f, 0.0027534272521734238f, 0.0024254540912806988f, 0.003152545541524887f, 0.001704599242657423f, 0.0021652155555784702f, 0.001952255959622562f, 0.002280517714098096f, 0.0019358779536560178f, 0.0033311937004327774f, 0.003739998210221529f, 0.0016780332662165165f, 0.0023874654434621334f, 0.002537825610488653f, 0.003293384099379182f, 0.00236658682115376f),
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
    AI_PACK_INTQ_SCALE(0.0035277637653052807f, 0.011240209452807903f, 0.004472135566174984f, 0.009520914405584335f, 0.004914759658277035f, 0.011199196800589561f, 0.019652109593153f, 0.008409268222749233f, 0.00445898249745369f, 0.008347083814442158f, 0.005338689778000116f, 0.00424861628562212f, 0.007439902052283287f, 0.005386802367866039f, 0.005672309547662735f, 0.01414783950895071f, 0.006723019760102034f, 0.011012350209057331f, 0.014867044053971767f, 0.003946105018258095f, 0.005604779347777367f, 0.007014669477939606f, 0.0033661106135696173f, 0.006920041516423225f, 0.0038192258216440678f, 0.006251694168895483f, 0.008925468660891056f, 0.006864976137876511f, 0.01105552352964878f, 0.007366960868239403f, 0.007859309203922749f, 0.013045626692473888f, 0.007749614305794239f, 0.0070981369353830814f, 0.010451158508658409f, 0.00794316828250885f, 0.006541291251778603f, 0.008163266815245152f, 0.006619604770094156f, 0.004060401115566492f, 0.008877530694007874f, 0.007924445904791355f, 0.012847734615206718f, 0.0070967404171824455f, 0.009647921659052372f, 0.009330893866717815f, 0.007821392267942429f, 0.005826468579471111f, 0.011657762341201305f, 0.004250568337738514f, 0.004496208392083645f, 0.007873158901929855f, 0.011858656071126461f, 0.01116079743951559f, 0.006142009515315294f, 0.007667828816920519f, 0.005519647151231766f, 0.008414908312261105f, 0.0067939660511910915f, 0.01402788981795311f, 0.006107895635068417f, 0.004562878515571356f, 0.009898586198687553f, 0.0038447559345513582f, 0.006266216281801462f, 0.008433022536337376f, 0.007729738485068083f, 0.008445598185062408f, 0.005734436213970184f, 0.011541436426341534f, 0.010576706379652023f, 0.01051900815218687f, 0.004432763904333115f, 0.00520238745957613f, 0.009992673061788082f, 0.004509317688643932f, 0.0029628637712448835f, 0.009657908231019974f, 0.007166230119764805f, 0.00542875612154603f, 0.0069642215967178345f, 0.004425200633704662f, 0.0035385009832680225f, 0.007335750851780176f, 0.009946031495928764f, 0.00900944136083126f, 0.005793179851025343f, 0.0035420667845755816f, 0.008782356977462769f, 0.008605485782027245f, 0.006506108678877354f, 0.0069750533439219f, 0.007334616035223007f, 0.008320927619934082f, 0.00742327468469739f, 0.0046771191991865635f, 0.00554793793708086f, 0.006913930643349886f, 0.006069588474929333f, 0.005677423905581236f, 0.008700408972799778f, 0.007269410882145166f, 0.011612714268267155f, 0.007888528518378735f, 0.007172341458499432f, 0.011135152541100979f, 0.004345271270722151f, 0.006032412406057119f, 0.0050981673412024975f, 0.007777688559144735f, 0.007177744992077351f, 0.006506423465907574f, 0.014567389152944088f, 0.004354631062597036f, 0.0048300097696483135f, 0.004888067487627268f, 0.006853816565126181f, 0.006574803963303566f, 0.00924420915544033f, 0.008688435889780521f, 0.009585021063685417f, 0.007300677243620157f, 0.004109303932636976f, 0.0073344032280147076f, 0.009274736978113651f, 0.007214037235826254f, 0.005398998036980629f, 0.007023590616881847f, 0.008027978241443634f, 0.0065053487196564674f, 0.007740792818367481f, 0.009171027690172195f, 0.007048363797366619f, 0.005997518543154001f, 0.007821801118552685f, 0.013915948569774628f, 0.007535841315984726f, 0.005129758734256029f, 0.012497582472860813f, 0.007328389212489128f, 0.0046151806600391865f, 0.003774351207539439f, 0.013709175400435925f, 0.010336309671401978f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_46_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016538385534659028f, 0.001283574616536498f, 0.0019249817123636603f, 0.0012766376603394747f, 0.0011447240831330419f, 0.001339320675469935f, 0.0015342007391154766f, 0.002415064722299576f, 0.0024704262614250183f, 0.0016068374970927835f, 0.0012162114726379514f, 0.0018423744477331638f, 0.0015925286570563912f, 0.0013289832277223468f, 0.002105286344885826f, 0.0014940663240849972f, 0.0019070348935201764f, 0.001220397767610848f, 0.0013025128282606602f, 0.001427343930117786f, 0.0016197371296584606f, 0.0013607981381937861f, 0.001630147104151547f, 0.0016060874331742525f),
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
    AI_PACK_INTQ_SCALE(0.0013776913983747363f, 0.0025368542410433292f, 0.0015521858585998416f, 0.0014283343916758895f, 0.0013649419415742159f, 0.002401957521215081f, 0.0012010866776108742f, 0.0018049712525680661f, 0.0013940046774223447f, 0.002660229103639722f, 0.0015997366281226277f, 0.002290877513587475f, 0.0016491259448230267f, 0.0022963094525039196f, 0.0017313516000285745f, 0.0011422962415963411f, 0.001753573538735509f, 0.0016159210354089737f, 0.0023757428862154484f, 0.0015617270255461335f, 0.00247995276004076f, 0.0013994349865242839f, 0.0022931986022740602f, 0.0014012615429237485f, 0.0018481676233932376f, 0.0020318671595305204f, 0.0016415336867794394f, 0.0019931842107325792f, 0.0023223264142870903f, 0.002389945089817047f, 0.00173102505505085f, 0.001480522216297686f, 0.0012497928692027926f, 0.0015460577560588717f, 0.0022073278669267893f, 0.0021136163268238306f, 0.002388667082414031f, 0.0018290929729118943f, 0.0021592488046735525f, 0.0017200970323756337f, 0.002717571333050728f, 0.002504456788301468f, 0.0012052168603986502f, 0.001930573140271008f, 0.0029620931018143892f, 0.0012746601132676005f, 0.0016320021823048592f, 0.0018079166766256094f, 0.002427783329039812f, 0.0020770884584635496f, 0.0015504558105021715f, 0.0020555921364575624f, 0.000985832535661757f, 0.0018151062540709972f, 0.002091336529701948f, 0.0018628330435603857f, 0.0012721149250864983f, 0.0016278198454529047f, 0.0017697757575660944f, 0.0011893212795257568f, 0.0012804045109078288f, 0.0012539307354018092f, 0.0015435726381838322f, 0.0017866899725049734f, 0.0013538034399971366f, 0.0010588965378701687f, 0.002049108035862446f, 0.0011993007501587272f, 0.0014243588084354997f, 0.0013945201644673944f, 0.0012252600863575935f, 0.002875634701922536f, 0.0013688324252143502f, 0.0014781823847442865f, 0.001363724353723228f, 0.0023212102241814137f, 0.0021801055409014225f, 0.0011989283375442028f, 0.0018241528887301683f, 0.001418523257598281f, 0.0023061386309564114f, 0.0015123150078579783f, 0.001938265049830079f, 0.0013227297458797693f, 0.002479630522429943f, 0.0030956559348851442f, 0.001583050936460495f, 0.0015378824900835752f, 0.0020302024204283953f, 0.0014249567175284028f, 0.0010434613795951009f, 0.0027630755212157965f, 0.0013997305650264025f, 0.0020355265587568283f, 0.0027161550242453814f, 0.0017219128785654902f, 0.0016362197929993272f, 0.0019246473675593734f, 0.0016382982721552253f, 0.0015237689949572086f, 0.0020866417326033115f, 0.0010159312514588237f, 0.0013632061891257763f, 0.00169616739731282f, 0.002279682317748666f, 0.0009220384526997805f, 0.0015567962545901537f, 0.0015037349658086896f, 0.0036090866196900606f, 0.0014944103313609958f, 0.0013611337635666132f, 0.0028655980713665485f, 0.0019806884229183197f, 0.001975985476747155f, 0.0023517911322414875f, 0.001624231692403555f, 0.0015221020439639688f, 0.0015989012317731977f, 0.0019307197071611881f, 0.0018725886475294828f, 0.0017650070367380977f, 0.0020103021524846554f, 0.0016151535091921687f, 0.001620737835764885f, 0.0015615185257047415f, 0.002572076627984643f, 0.0025096479803323746f, 0.0018839645199477673f, 0.0014404476387426257f, 0.0018010096391662955f, 0.0021487579215317965f, 0.0018914678366854787f, 0.0015198785113170743f, 0.00204657856374979f, 0.002053795149549842f, 0.0017982225399464369f, 0.0012961106840521097f, 0.0015942011959850788f, 0.001992530422285199f, 0.0019171119201928377f, 0.001219417667016387f, 0.0017484837444499135f, 0.0014436355559155345f, 0.001433374360203743f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006725706160068512f, 0.00426069088280201f, 0.004515126813203096f, 0.004830404184758663f, 0.007733330596238375f, 0.002783337840810418f, 0.013690903782844543f, 0.004341152962297201f, 0.01625739596784115f, 0.005504792556166649f, 0.0053041898645460606f, 0.006411920301616192f, 0.009146628901362419f, 0.00428976584225893f, 0.007156588602811098f, 0.008014418184757233f, 0.004199394024908543f, 0.005368946120142937f, 0.003973886836320162f, 0.006459528114646673f, 0.003226672764867544f, 0.008277839981019497f, 0.009131989441812038f, 0.00445828540250659f, 0.010742847807705402f, 0.005578162148594856f, 0.009810565039515495f, 0.007424747105687857f, 0.008167439140379429f, 0.0026375192683190107f, 0.004456810187548399f, 0.00510400952771306f, 0.009268357418477535f, 0.010780496522784233f, 0.008483750745654106f, 0.008511878550052643f, 0.007047861348837614f, 0.0077701895497739315f, 0.003066578647121787f, 0.005947762168943882f, 0.005312684923410416f, 0.008524643257260323f, 0.007426645141094923f, 0.012629725970327854f, 0.01297238003462553f, 0.017300710082054138f, 0.009305177256464958f, 0.008012738078832626f, 0.00829569436609745f, 0.005693842191249132f, 0.0036968018393963575f, 0.006409958936274052f, 0.01698477752506733f, 0.007121418137103319f, 0.004743650089949369f, 0.006231279578059912f, 0.01701982505619526f, 0.01778279058635235f, 0.01066754199564457f, 0.008807872422039509f, 0.0035593186039477587f, 0.007609452120959759f, 0.006339224986732006f, 0.008730562403798103f, 0.005392941180616617f, 0.008536925539374352f, 0.007114745210856199f, 0.006477340590208769f, 0.007750453893095255f, 0.008568990975618362f, 0.004083042033016682f, 0.00742292869836092f, 0.014356261119246483f, 0.0071305823512375355f, 0.010708867572247982f, 0.008045299910008907f, 0.012945929542183876f, 0.0073877242393791676f, 0.0094827925786376f, 0.007234661374241114f, 0.008291814476251602f, 0.007347420789301395f, 0.005853620823472738f, 0.009264321066439152f, 0.003286998253315687f, 0.004314426798373461f, 0.004884101450443268f, 0.0078078522346913815f, 0.005844728089869022f, 0.0073432037606835365f, 0.010692325420677662f, 0.006150661502033472f, 0.008090978488326073f, 0.0050478787161409855f, 0.006698929704725742f, 0.008295155130326748f, 0.005591812543570995f, 0.008367746137082577f, 0.0076194629073143005f, 0.010342875495553017f, 0.003777753561735153f, 0.00973130390048027f, 0.010952744632959366f, 0.006871471181511879f, 0.0058700451627373695f, 0.022885838523507118f, 0.010612107813358307f, 0.008528370410203934f, 0.0033995085395872593f, 0.009644257836043835f, 0.008594810031354427f, 0.0037722454871982336f, 0.0027883867733180523f, 0.00527977803722024f, 0.00599305797368288f, 0.006533442530781031f, 0.007313542068004608f, 0.0053669149056077f, 0.008424431085586548f, 0.006587048061192036f, 0.01763400435447693f, 0.006795908790081739f, 0.007315483409911394f, 0.010069861076772213f, 0.004990172106772661f, 0.0037606011610478163f, 0.011241395957767963f, 0.00774017907679081f, 0.011669299565255642f, 0.007073832210153341f, 0.004443369340151548f, 0.005747418850660324f, 0.00469202222302556f, 0.006529793608933687f, 0.004803846124559641f, 0.009102697484195232f, 0.013313304632902145f, 0.006461044307798147f, 0.0036427227314561605f, 0.005607200786471367f, 0.006603599525988102f, 0.007482375018298626f, 0.003239694517105818f, 0.006691731978207827f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017405133694410324f, 0.0018778204685077071f, 0.0015029682544991374f, 0.001502116909250617f, 0.0014645520132035017f, 0.0019754795357584953f, 0.0014082586858421564f, 0.0022099900525063276f, 0.0019393092952668667f, 0.0017662809696048498f, 0.0014521849807351828f, 0.0015365645522251725f, 0.0016240720869973302f, 0.0012674338649958372f, 0.0015371468616649508f, 0.0014378357445821166f, 0.001328695216216147f, 0.0011293648276478052f, 0.0018191731069236994f, 0.0011652125976979733f, 0.0015963113401085138f, 0.0013213619822636247f, 0.0015315727796405554f, 0.0014135341625660658f),
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
    AI_PACK_INTQ_SCALE(0.001395243569277227f, 0.001545339124277234f, 0.001965718111023307f, 0.0015700377989560366f, 0.0016180750681087375f, 0.001541822450235486f, 0.0013077701441943645f, 0.00176024972461164f, 0.001469532260671258f, 0.0013589435257017612f, 0.0012137271696701646f, 0.0013938907068222761f, 0.0010538485366851091f, 0.0008760241325944662f, 0.001562444493174553f, 0.0015006103785708547f, 0.0015279492363333702f, 0.0014991852222010493f, 0.0014127326430752873f, 0.0009468664648011327f, 0.0018049061764031649f, 0.0013245762092992663f, 0.0012586975935846567f, 0.0012600024929270148f, 0.0017816564068198204f, 0.0017934213392436504f, 0.0015765602001920342f, 0.0011734860017895699f, 0.0016570674488320947f, 0.001672703423537314f, 0.0013053833972662687f, 0.001331256702542305f, 0.0008797667105682194f, 0.0010810536332428455f, 0.0010822359472513199f, 0.0018517673015594482f, 0.0015730723971500993f, 0.0013653271598741412f, 0.0016507647233083844f, 0.0010716739343479276f, 0.0011356505565345287f, 0.0015991644468158484f, 0.0022609580773860216f, 0.001178818172775209f, 0.0016317082336172462f, 0.002037241356447339f, 0.0014816051116213202f, 0.0013999914517626166f, 0.0019123218953609467f, 0.0012598988832905889f, 0.0018223142251372337f, 0.0015169978141784668f, 0.0012550167739391327f, 0.0014571702340617776f, 0.0010472756111994386f, 0.0015550205716863275f, 0.0008615351398475468f, 0.0012887675547972322f, 0.0015326477587223053f, 0.0010827395599335432f, 0.0016527625266462564f, 0.0018190451664850116f, 0.0012224431848153472f, 0.0010002381168305874f, 0.001990668009966612f, 0.0023207596968859434f, 0.0016037292080000043f, 0.0016707568429410458f, 0.0012338170781731606f, 0.0013453648425638676f, 0.0016782180173322558f, 0.0012472397647798061f, 0.0018587494269013405f, 0.0011645602062344551f, 0.0017965565202757716f, 0.0008572713122703135f, 0.0013662379933521152f, 0.0011693004053086042f, 0.0012953002005815506f, 0.0013345082988962531f, 0.001138255000114441f, 0.001487881876528263f, 0.0010869089746847749f, 0.0013877875171601772f, 0.00163890584371984f, 0.002131782239302993f, 0.0016199190868064761f, 0.0017461823299527168f, 0.0011755257146432996f, 0.001477138139307499f, 0.001298382063396275f, 0.0013197276275604963f, 0.0015428905608132482f, 0.001614284934476018f, 0.0012846837053075433f, 0.0013334264513105154f, 0.001592326327227056f, 0.0009080299059860408f, 0.0011936179362237453f, 0.0012736517237499356f, 0.0015545584028586745f, 0.0015269304858520627f, 0.001534396898932755f, 0.0016487857792526484f, 0.0018134225392714143f, 0.0017109254840761423f, 0.001658197958022356f, 0.0011216647690162063f, 0.0015007230686023831f, 0.0013839652528986335f, 0.0011323277140036225f, 0.002322698710486293f, 0.0014577425317838788f, 0.0011903109261766076f, 0.0014348332770168781f, 0.0014016416389495134f, 0.00152065500151366f, 0.0014702166663482785f, 0.0014575819950550795f, 0.0012306629214435816f, 0.0017252485267817974f, 0.0011796066537499428f, 0.002088055945932865f, 0.002315690042451024f, 0.0009614251903258264f, 0.0013391658430919051f, 0.002042122185230255f, 0.0018392815254628658f, 0.0015233715530484915f, 0.0014334525913000107f, 0.0014193945098668337f, 0.0017195864347741008f, 0.0017174894455820322f, 0.0011603492312133312f, 0.0011673030676320195f, 0.0022658533416688442f, 0.0011997827095910907f, 0.0012739511439576745f, 0.002246774500235915f, 0.0009734414634294808f, 0.0010891343699768186f, 0.0012280326336622238f, 0.0016284791054204106f, 0.0017605694010853767f),
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
    AI_PACK_INTQ_SCALE(0.006487689912319183f, 0.008672118186950684f, 0.004440018441528082f, 0.005221406929194927f, 0.006897881161421537f, 0.0065202671103179455f, 0.009462172165513039f, 0.00591667415574193f, 0.008667539805173874f, 0.011479890905320644f, 0.005030408501625061f, 0.0042673577554523945f, 0.006184379104524851f, 0.006702744867652655f, 0.0028751029167324305f, 0.004099120851606131f, 0.003661195747554302f, 0.0056871408596634865f, 0.004281812347471714f, 0.007202538661658764f, 0.009119312278926373f, 0.007017413154244423f, 0.0068050832487642765f, 0.005578225944191217f, 0.004158180207014084f, 0.0059680212289094925f, 0.004109224770218134f, 0.0031093584839254618f, 0.004519527778029442f, 0.00451861834153533f, 0.004952084738761187f, 0.005939915776252747f, 0.006890967488288879f, 0.007798648439347744f, 0.012205501087009907f, 0.002312171971425414f, 0.00540992571040988f, 0.005166377406567335f, 0.004013358149677515f, 0.008551456965506077f, 0.0045967926271259785f, 0.0076698786579072475f, 0.004513761028647423f, 0.006833367981016636f, 0.0038664184976369143f, 0.006746217608451843f, 0.009060738608241081f, 0.0075063155964016914f, 0.007254003547132015f, 0.010235064662992954f, 0.003573571564629674f, 0.006655202247202396f, 0.008814089931547642f, 0.005070260725915432f, 0.006568465381860733f, 0.003902163589373231f, 0.005813066381961107f, 0.007709898054599762f, 0.007466768380254507f, 0.0041564833372831345f, 0.004502734635025263f, 0.005416175816208124f, 0.004703603684902191f, 0.0039687869139015675f, 0.006651662290096283f, 0.004374431446194649f, 0.004514521919190884f, 0.004990349058061838f, 0.008670111186802387f, 0.0037113302387297153f, 0.005765025038272142f, 0.007371549028903246f, 0.004523696377873421f, 0.006084107793867588f, 0.005654635839164257f, 0.004722844809293747f, 0.004367963410913944f, 0.010674020275473595f, 0.009419634938240051f, 0.007087374106049538f, 0.007858071476221085f, 0.008868571370840073f, 0.004595417529344559f, 0.00741187110543251f, 0.005746244918555021f, 0.007042998448014259f, 0.004641362465918064f, 0.005691191181540489f, 0.006958222482353449f, 0.006053154356777668f, 0.00912783294916153f, 0.004499309230595827f, 0.006451139226555824f, 0.007328492123633623f, 0.007279480341821909f, 0.005790621507912874f, 0.002277620602399111f, 0.002984529361128807f, 0.005966491997241974f, 0.011422079056501389f, 0.00721401022747159f, 0.004778574220836163f, 0.009084140881896019f, 0.003222775412723422f, 0.004753414541482925f, 0.005408043973147869f, 0.008908811025321484f, 0.008141543716192245f, 0.004994946997612715f, 0.006009711883962154f, 0.010016950778663158f, 0.008227448910474777f, 0.004735212307423353f, 0.008411402814090252f, 0.003901858115568757f, 0.007255206350237131f, 0.004577153362333775f, 0.004409622400999069f, 0.004001849330961704f, 0.007436784915626049f, 0.009178071282804012f, 0.005206591449677944f, 0.0035116514191031456f, 0.004488030448555946f, 0.011985503137111664f, 0.00413668155670166f, 0.008119888603687286f, 0.0042905015870928764f, 0.00816804077476263f, 0.0037386841140687466f, 0.0049617476761341095f, 0.007898751646280289f, 0.006788988132029772f, 0.010157904587686062f, 0.00843550730496645f, 0.006343480199575424f, 0.004594828002154827f, 0.00823233276605606f, 0.006570408120751381f, 0.011570945382118225f, 0.008608656004071236f, 0.00789924617856741f, 0.004868516698479652f, 0.003952062223106623f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022626426070928574f, 0.002375179436057806f, 0.0018814407521858811f, 0.0021037692204117775f, 0.0019135473994538188f, 0.002385343424975872f, 0.0016981106018647552f, 0.0018110618693754077f, 0.002434814115986228f, 0.0016975068720057607f, 0.002084787003695965f, 0.0025235700886696577f, 0.00223449501208961f, 0.0022003878839313984f, 0.0020442132372409105f, 0.0018830824410542846f, 0.002047623973339796f, 0.0017600548453629017f, 0.001642742776311934f, 0.0018549686064943671f, 0.0021306078415364027f, 0.0014310718979686499f, 0.0020810056012123823f, 0.0017619101563468575f, 0.0029558176174759865f, 0.0020819453056901693f, 0.0017762513598427176f, 0.0021064842585474253f, 0.001505596679635346f, 0.0023055137135088444f, 0.0016176564386114478f, 0.001635654945857823f, 0.0022984908428043127f, 0.0018054302781820297f, 0.0018060210859403014f, 0.001805847161449492f, 0.0014852216700091958f, 0.0015023587038740516f, 0.0014964876463636756f, 0.0017816636245697737f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017046588473021984f, 0.0037469156086444855f, 0.002342291409149766f, 0.0029849547427147627f, 0.001906470744870603f, 0.002756250323727727f, 0.0026343795470893383f, 0.002312623430043459f, 0.0019048360409215093f, 0.001843578414991498f, 0.001989031443372369f, 0.0028410658705979586f, 0.0017046184511855245f, 0.0017719859024509788f, 0.0023039602674543858f, 0.0018979257438331842f, 0.0014573244843631983f, 0.0016944747185334563f, 0.002199632115662098f, 0.002652102382853627f, 0.002157011767849326f, 0.0014571559149771929f, 0.0026840197388082743f, 0.00202741427347064f, 0.0021500519942492247f, 0.0019809810910373926f, 0.0035304478369653225f, 0.0020620308350771666f, 0.002250614110380411f, 0.0021341422107070684f, 0.002205683384090662f, 0.0021732221357524395f, 0.0019402476027607918f, 0.0022312975488603115f, 0.0019194058841094375f, 0.002209387719631195f, 0.002126273000612855f, 0.0027396883815526962f, 0.0016958762425929308f, 0.0017393140587955713f, 0.002981379395350814f, 0.0026045532431453466f, 0.0030828467570245266f, 0.0016961233923211694f, 0.0027277402114123106f, 0.002093507442623377f, 0.0018568468512967229f, 0.0025785567704588175f, 0.0022848916705697775f, 0.0017817693296819925f, 0.002220739843323827f, 0.0027999477460980415f, 0.001891979482024908f, 0.001973329810425639f, 0.00253962236456573f, 0.0022565561812371016f, 0.0018591696862131357f, 0.0021368826273828745f, 0.0018833926878869534f, 0.0026618833653628826f, 0.002057337900623679f, 0.0023817531764507294f, 0.001921168528497219f, 0.002109058666974306f, 0.001592351938597858f, 0.0020084294956177473f, 0.0020681016612797976f, 0.0030767018906772137f, 0.002823479473590851f, 0.002171978121623397f, 0.0022681376431137323f, 0.002110348315909505f, 0.003520537633448839f, 0.0017569598276168108f, 0.003526081098243594f, 0.0021973000839352608f, 0.0022348721977323294f, 0.0019893560092896223f, 0.0016644528368487954f, 0.0023451445158571005f, 0.0016536242328584194f, 0.002490509767085314f, 0.0019739000126719475f, 0.00222609331831336f, 0.003062627511098981f, 0.0020695901475846767f, 0.0026404508389532566f, 0.001907773083075881f, 0.00209197960793972f, 0.0026649106293916702f, 0.002322559477761388f, 0.0022283277940005064f, 0.0014514244394376874f, 0.0014513294445350766f, 0.0027485829778015614f, 0.0018423688597977161f, 0.0021824599243700504f, 0.0029110193718224764f, 0.0019008400849997997f, 0.0012239768402650952f, 0.002280977787449956f, 0.00284929433837533f, 0.003034622175619006f, 0.001396234380081296f, 0.001992073841392994f, 0.0016333613311871886f, 0.0018541892059147358f, 0.0028565439861267805f, 0.003955009393393993f, 0.002199963666498661f, 0.003222415456548333f, 0.0021625575609505177f, 0.002439510077238083f, 0.002300601452589035f, 0.0014635917032137513f, 0.001542940502986312f, 0.0022439053282141685f, 0.002747253281995654f, 0.0021968355868011713f, 0.001930589904077351f, 0.0018294497858732939f, 0.0017128362087532878f, 0.0017214086838066578f, 0.002200508024543524f, 0.0023489310406148434f, 0.0017389004351571202f, 0.0017457784852012992f, 0.0026721155736595392f, 0.0017781960777938366f, 0.0016662575071677566f, 0.0016329716891050339f, 0.0019993449095636606f, 0.0027446288149803877f, 0.0018637430621311069f, 0.0022037674207240343f, 0.0017827231204137206f, 0.002659374848008156f, 0.0022953548468649387f, 0.002735327696427703f, 0.002409561537206173f, 0.0016016290755942464f, 0.0023465894628316164f, 0.0023210335057228804f, 0.0024151583202183247f, 0.0019233709899708629f, 0.0022461782209575176f, 0.0023845061659812927f, 0.00220290943980217f, 0.002395074116066098f, 0.0020723973866552114f, 0.002459452487528324f, 0.00291708973236382f, 0.001988436095416546f, 0.002236848697066307f, 0.003294973634183407f, 0.0015408142935484648f, 0.0021983804181218147f, 0.001967301592230797f, 0.0020077689550817013f, 0.0028939920011907816f, 0.0016751129878684878f, 0.001897402573376894f, 0.0016256101662293077f, 0.002078321296721697f, 0.0021750491578131914f, 0.0019250251352787018f, 0.0024395675864070654f, 0.0025413362309336662f, 0.002016753191128373f, 0.0018852087669074535f, 0.0026433980092406273f, 0.0024635340087115765f, 0.0018552731489762664f, 0.0022982684895396233f, 0.0023394832387566566f, 0.0018728702561929822f, 0.002129694214090705f, 0.002053306670859456f, 0.0019934154115617275f, 0.002160086529329419f, 0.0014953078934922814f, 0.0023145265877246857f, 0.002044712658971548f, 0.0019861378241330385f, 0.0018633942818269134f, 0.002254807623103261f, 0.001997546060010791f, 0.0019251127960160375f, 0.0017502192640677094f, 0.0019517872715368867f, 0.0021103662438690662f, 0.0018809348111972213f, 0.0016882058698683977f, 0.0016308428021147847f, 0.0018798904493451118f, 0.002713920781388879f, 0.0014531591441482306f, 0.0009141230257228017f, 0.0019266399322077632f, 0.0021839055698364973f, 0.0026032435707747936f, 0.001579913543537259f, 0.001783096813596785f, 0.002377530559897423f, 0.0022653467021882534f, 0.0017470556776970625f, 0.0022723404690623283f, 0.0018419309053570032f, 0.002632350195199251f, 0.001416379469446838f, 0.0017563930014148355f, 0.001657955115661025f, 0.0017277249135077f, 0.0016445008805021644f, 0.00193166290409863f, 0.002834925428032875f, 0.002096892800182104f, 0.0024082795716822147f, 0.002695771399885416f, 0.0020470519084483385f, 0.001784682390280068f, 0.00232770130969584f, 0.0016107235569506884f, 0.002015631413087249f, 0.0019388847285881639f, 0.0025279929395765066f, 0.002015672856941819f, 0.001977595966309309f, 0.0017825928516685963f, 0.0017954733921214938f, 0.002308288123458624f, 0.001612572348676622f, 0.002147235441952944f, 0.0028047242667526007f, 0.003752212505787611f, 0.001344415475614369f, 0.0028387680649757385f, 0.0017555361846461892f, 0.003284639213234186f, 0.002593607408925891f),
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
    AI_PACK_INTQ_SCALE(0.005460381507873535f, 0.007298350799828768f, 0.00526231387630105f, 0.008332230150699615f, 0.008309305645525455f, 0.010236875154078007f, 0.006370954215526581f, 0.006265569478273392f, 0.008052138611674309f, 0.012087439186871052f, 0.008779997006058693f, 0.007789808791130781f, 0.009093614295125008f, 0.006855544168502092f, 0.008277762681245804f, 0.005411142949014902f, 0.012470305897295475f, 0.004643781576305628f, 0.016642466187477112f, 0.006625659763813019f, 0.006319474428892136f, 0.006030087359249592f, 0.00767864054068923f, 0.006289354991167784f, 0.00870810728520155f, 0.007747922092676163f, 0.008221405558288097f, 0.01054746937006712f, 0.008940882049500942f, 0.006123863626271486f, 0.004968272987753153f, 0.007531489245593548f, 0.0058374954387545586f, 0.007851390168070793f, 0.005755987484008074f, 0.005066604353487492f, 0.00853637419641018f, 0.004132450092583895f, 0.009359871968626976f, 0.009384703822433949f, 0.005235128104686737f, 0.010213951580226421f, 0.008343835361301899f, 0.008925712667405605f, 0.008348279632627964f, 0.004523573908954859f, 0.011984789744019508f, 0.005913567263633013f, 0.00872910488396883f, 0.009405115619301796f, 0.005628413055092096f, 0.007676756475120783f, 0.007973628118634224f, 0.008987749926745892f, 0.006483538541942835f, 0.0071589527651667595f, 0.008932536467909813f, 0.009261157363653183f, 0.014330263249576092f, 0.006623655091971159f, 0.006952975410968065f, 0.00736260786652565f, 0.005037340335547924f, 0.006904068868607283f, 0.005752369295805693f, 0.008754431270062923f, 0.00856449268758297f, 0.007719115354120731f, 0.0059395297430455685f, 0.009633409790694714f, 0.0062818871811032295f, 0.006442229263484478f, 0.009746807627379894f, 0.005238802172243595f, 0.006758640520274639f, 0.010363435372710228f, 0.0075002689845860004f, 0.007677062414586544f, 0.010515691712498665f, 0.008105048909783363f, 0.010519459843635559f, 0.007104032672941685f, 0.008597251959145069f, 0.01185151282697916f, 0.006957899779081345f, 0.00882522203028202f, 0.0073316507041454315f, 0.005947722587734461f, 0.004583925474435091f, 0.011132779531180859f, 0.007471006829291582f, 0.00951418187469244f, 0.010610116645693779f, 0.010739640332758427f, 0.007710047531872988f, 0.006870707497000694f, 0.009943443350493908f, 0.006117447279393673f, 0.007704451214522123f, 0.006203644443303347f, 0.006463231518864632f, 0.00891648419201374f, 0.005194494035094976f, 0.016433531418442726f, 0.003823052393272519f, 0.01324467919766903f, 0.011540831066668034f, 0.009690435603260994f, 0.009911397472023964f, 0.008620768785476685f, 0.004262728150933981f, 0.006768021732568741f, 0.0076521653681993484f, 0.008427196182310581f, 0.009556056000292301f, 0.0067873080261051655f, 0.007747869472950697f, 0.007527494337409735f, 0.007416212931275368f, 0.007820075377821922f, 0.021227514371275902f, 0.01361608225852251f, 0.007726720999926329f, 0.02046576328575611f, 0.0113693717867136f, 0.009373498149216175f, 0.0071240682154893875f, 0.0065719252452254295f, 0.0072235953994095325f, 0.006161110941320658f, 0.00693115871399641f, 0.008925939910113811f, 0.008634576573967934f, 0.01351991668343544f, 0.00707927206531167f, 0.009622023440897465f, 0.00851550791412592f, 0.012082531116902828f, 0.005887219216674566f, 0.009036860428750515f, 0.006969782058149576f, 0.008725382387638092f, 0.005881781689822674f, 0.005101312417536974f, 0.0070581515319645405f, 0.006808232516050339f, 0.005767459515482187f, 0.008360178209841251f, 0.009034047834575176f, 0.009363987483084202f, 0.005328979343175888f, 0.005317957140505314f, 0.010427547618746758f, 0.010705960914492607f, 0.009099011309444904f, 0.01121623907238245f, 0.010042649693787098f, 0.004715354181826115f, 0.007815609686076641f, 0.0059568630531430244f, 0.012260012328624725f, 0.00800074078142643f, 0.00714637478813529f, 0.011068534106016159f, 0.007884526625275612f, 0.009718632325530052f, 0.005179851781576872f, 0.00817361194640398f, 0.011078597977757454f, 0.004532123450189829f, 0.009022217243909836f, 0.011030611582100391f, 0.011331114917993546f, 0.007651123683899641f, 0.00802476704120636f, 0.006166881415992975f, 0.004744407720863819f, 0.009919621981680393f, 0.00940148439258337f, 0.00726242084056139f, 0.008238415233790874f, 0.00665084645152092f, 0.007904700934886932f, 0.008277841843664646f, 0.008012994192540646f, 0.007107986602932215f, 0.006893078330904245f, 0.011322458274662495f, 0.007771430537104607f, 0.01308829803019762f, 0.010465621948242188f, 0.005973076913505793f, 0.010833954438567162f, 0.006162608508020639f, 0.010075545869767666f, 0.009964162483811378f, 0.01038317196071148f, 0.01260629203170538f, 0.006865598261356354f, 0.005991972982883453f, 0.007774211000651121f, 0.02047152630984783f, 0.01047493051737547f, 0.008617224171757698f, 0.009115857072174549f, 0.013219163753092289f, 0.014980107545852661f, 0.0064111631363630295f, 0.0070180222392082214f, 0.00783483125269413f, 0.01060973946005106f, 0.0063465666025877f, 0.015075366012752056f, 0.010707146488130093f, 0.011287694796919823f, 0.01019115187227726f, 0.005758879240602255f, 0.00647701183333993f, 0.007712334860116243f, 0.009370611049234867f, 0.010792882181704044f, 0.007853060960769653f, 0.007952935062348843f, 0.008600825443863869f, 0.0072060213424265385f, 0.009652146138250828f, 0.010921771638095379f, 0.0194417592138052f, 0.010688175447285175f, 0.00774591788649559f, 0.006451389752328396f, 0.008340725675225258f, 0.013931650668382645f, 0.009293761104345322f, 0.009512733668088913f, 0.007802309934049845f, 0.009723350405693054f, 0.008758842013776302f, 0.006510568782687187f, 0.0059270551428198814f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001815014984458685f, 0.0019007992232218385f, 0.00237629609182477f, 0.0018742952961474657f, 0.0017197183333337307f, 0.0018818448297679424f, 0.0016379286535084248f, 0.0017246464267373085f, 0.0017656773561611772f, 0.0015044467290863395f, 0.0015964778140187263f, 0.0018959589069709182f, 0.0020077114459127188f, 0.001783830113708973f, 0.0016857340233400464f, 0.0018390519544482231f, 0.0019050192786380649f, 0.0020629086066037416f, 0.0017933847848325968f, 0.0018547336803749204f, 0.0019502724753692746f, 0.001816780073568225f, 0.002186237834393978f, 0.0021259032655507326f, 0.0022987842094153166f, 0.0012646674877032638f, 0.001757187768816948f, 0.0019990326836705208f, 0.0016989868599921465f, 0.0016097526531666517f, 0.0015552324475720525f, 0.0017432214226573706f, 0.0016468771500512958f, 0.0014969687908887863f, 0.001853286987170577f, 0.001762201776728034f, 0.001763671520166099f, 0.0016246337909251451f, 0.0018375886138528585f, 0.0020697154104709625f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001525298459455371f, 0.0016305915778502822f, 0.002441640244796872f, 0.0022186501882970333f, 0.001278506824746728f, 0.0022572395391762257f, 0.0019571876619011164f, 0.0015361648984253407f, 0.001027527847327292f, 0.0016525947721675038f, 0.001796078053303063f, 0.0017311596311628819f, 0.0014515138464048505f, 0.0017286916263401508f, 0.0014563831500709057f, 0.0015642748912796378f, 0.0020361945498734713f, 0.0021354544442147017f, 0.0020039125811308622f, 0.0015982788754627109f, 0.00228739227168262f, 0.0016341477166861296f, 0.0010351075325161219f, 0.0012578375171869993f, 0.001352173974737525f, 0.00145640317350626f, 0.0017181732691824436f, 0.0016728626796975732f, 0.001425309688784182f, 0.0012994561111554503f, 0.0019618805963546038f, 0.0017500483663752675f, 0.0011135062668472528f, 0.0016353246755897999f, 0.0018268629210069776f, 0.0017224568873643875f, 0.0014542279532179236f, 0.0015037785051390529f, 0.0010329756187275052f, 0.001954458886757493f, 0.001965797506272793f, 0.001473315991461277f, 0.0021838464308530092f, 0.0011005650740116835f, 0.0016872936394065619f, 0.0017381884390488267f, 0.0016517085023224354f, 0.0019009504467248917f, 0.0019450454274192452f, 0.0017235573614016175f, 0.0015982133336365223f, 0.0014893284533172846f, 0.0015213224105536938f, 0.002338351448997855f, 0.0012444976018741727f, 0.0013912729918956757f, 0.0019170606974512339f, 0.002840547589585185f, 0.0022258928511291742f, 0.0012788749299943447f, 0.0018881306750699878f, 0.0013965595280751586f, 0.0012592824641615152f, 0.0017035920172929764f, 0.0019401895115152001f, 0.001490590162575245f, 0.002208944410085678f, 0.001380820176564157f, 0.001742417924106121f, 0.0013688512844964862f, 0.0017459121299907565f, 0.001999816857278347f, 0.0020586922764778137f, 0.001748412847518921f, 0.0014594688545912504f, 0.0015897582052275538f, 0.0020851774606853724f, 0.002240418456494808f, 0.0013718829723075032f, 0.0016987011767923832f, 0.00200544367544353f, 0.0020284506026655436f, 0.0010747575433924794f, 0.0012778526870533824f, 0.0019156457856297493f, 0.0021385326981544495f, 0.0018986148061230779f, 0.0019173683831468225f, 0.002297350438311696f, 0.0027285146061331034f, 0.0017641948070377111f, 0.001961147878319025f, 0.00130364578217268f, 0.0013091210275888443f, 0.00165498536080122f, 0.0017364713130518794f, 0.0012955390848219395f, 0.0027309327851980925f, 0.0014819040661677718f, 0.0016079680062830448f, 0.0019135890761390328f, 0.0023292487021535635f, 0.0015685296384617686f, 0.0010844784555956721f, 0.0009609864791855216f, 0.0012057633139193058f, 0.0017322369385510683f, 0.0018107631476595998f, 0.0019782534800469875f, 0.001992140430957079f, 0.0022288968320935965f, 0.001453875214792788f, 0.001205559354275465f, 0.001732823089696467f, 0.0012328121811151505f, 0.0015213758451864123f, 0.0014463550178334117f, 0.002007031347602606f, 0.0013824306661263108f, 0.0016190403839573264f, 0.001855484675616026f, 0.0010474353330209851f, 0.001738153281621635f, 0.0011391036678105593f, 0.0012539660092443228f, 0.0016380420420318842f, 0.0017190765356644988f, 0.0013585862470790744f, 0.0013719168491661549f, 0.0015850921627134085f, 0.0024297102354466915f, 0.0014268765226006508f, 0.0022908607497811317f, 0.0027049370110034943f, 0.001929079182446003f, 0.002010797383263707f, 0.0016223632264882326f, 0.002588090719655156f, 0.001630105427466333f, 0.0017178523121401668f, 0.0014558164402842522f, 0.0013554267352446914f, 0.0013508598785847425f, 0.0017057309160009027f, 0.0018076034029945731f, 0.0015832855133339763f, 0.001531143905594945f, 0.0020098991226404905f, 0.0012906709453091025f, 0.001815177034586668f, 0.0017662510508671403f, 0.0022054596338421106f, 0.0011242247419431806f, 0.0013471745187416673f, 0.0016908773686736822f, 0.0015364360297098756f, 0.0012106731301173568f, 0.0020270932000130415f, 0.0021182356867939234f, 0.0016999428626149893f, 0.0019053159048780799f, 0.0015742880059406161f, 0.001466546207666397f, 0.0017843373352661729f, 0.0020141087006777525f, 0.0016602353425696492f, 0.0018785427091643214f, 0.0018839973490685225f, 0.0024079130962491035f, 0.0022586097475141287f, 0.0017681000754237175f, 0.002324214670807123f, 0.001824202830903232f, 0.0010678060352802277f, 0.00196398445405066f, 0.001351497252471745f, 0.0022198916412889957f, 0.0009628163534216583f, 0.0018659228226169944f, 0.00199766643345356f, 0.0015989289386197925f, 0.0011839402141049504f, 0.002029068535193801f, 0.001713920384645462f, 0.001845340826548636f, 0.0013711299980059266f, 0.001293535577133298f, 0.0019148088758811355f, 0.001876763068139553f, 0.0023591292556375265f, 0.002128734951838851f, 0.0017676169518381357f, 0.0017329765250906348f, 0.0013300915015861392f, 0.0010455396259203553f, 0.0015754528576508164f, 0.0010000575566664338f, 0.0018171010306105018f, 0.00288001517765224f, 0.0018674969905987382f, 0.0015611023409292102f, 0.0015219403430819511f, 0.0013051816495135427f, 0.001562247285619378f, 0.0014042117400094867f, 0.0011309973197057843f, 0.0018128586234524846f, 0.0024117296561598778f, 0.001813411246985197f, 0.0013658320531249046f, 0.0012975925346836448f, 0.0013892175629734993f, 0.0014275949215516448f, 0.0017146323807537556f, 0.0012703333050012589f, 0.0025318434927612543f, 0.001111526507884264f, 0.0013831689720973372f, 0.0012097129365429282f, 0.0021859609987586737f, 0.0016612372128292918f, 0.0018395428778603673f, 0.0011008266592398286f, 0.0017940348479896784f, 0.0013194793136790395f, 0.00100755225867033f, 0.0012741487007588148f, 0.0019292243523523211f, 0.0019421422621235251f, 0.0015129087259992957f, 0.0012603465002030134f, 0.0019179277587682009f, 0.001595964771695435f, 0.0012281091185286641f, 0.0012156370794400573f, 0.002249946817755699f, 0.001545150182209909f, 0.0019187313737347722f, 0.001475285505875945f, 0.0014771119458600879f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005795065313577652f, 0.008772440254688263f, 0.007892342284321785f, 0.010698841884732246f, 0.01258219312876463f, 0.009350488893687725f, 0.0062670279294252396f, 0.008353359065949917f, 0.010018741711974144f, 0.010153304785490036f, 0.010278170928359032f, 0.005636531859636307f, 0.006758410017937422f, 0.006176412105560303f, 0.007473730482161045f, 0.007366048637777567f, 0.007277368102222681f, 0.006861282512545586f, 0.006687089800834656f, 0.005142231937497854f, 0.006537578534334898f, 0.0072886026464402676f, 0.010732860304415226f, 0.007360344287008047f, 0.007032732013612986f, 0.007554423995316029f, 0.010435950011014938f, 0.009486129507422447f, 0.007418293040245771f, 0.0103226313367486f, 0.005262680817395449f, 0.008918321691453457f, 0.008020059205591679f, 0.007056800648570061f, 0.014158631674945354f, 0.009604616090655327f, 0.009626608341932297f, 0.007620424497872591f, 0.020920192822813988f, 0.006446323823183775f, 0.006772305350750685f, 0.015063127502799034f, 0.009411322884261608f, 0.015062807127833366f, 0.008210316300392151f, 0.008168719708919525f, 0.006936077028512955f, 0.008789358660578728f, 0.007702505681663752f, 0.010672692209482193f, 0.008378870785236359f, 0.007465912029147148f, 0.010778267867863178f, 0.005575398448854685f, 0.004219430964440107f, 0.008261438459157944f, 0.00817025639116764f, 0.006881330627948046f, 0.005765347741544247f, 0.007233652751892805f, 0.007269495166838169f, 0.009089671075344086f, 0.012678674422204494f, 0.01203864999115467f, 0.002970007248222828f, 0.013470216654241085f, 0.008418194949626923f, 0.010313262231647968f, 0.008491302840411663f, 0.008613625541329384f, 0.006177071947604418f, 0.007457036059349775f, 0.0061979577876627445f, 0.006533111911267042f, 0.007030429318547249f, 0.006799730937927961f, 0.005439092870801687f, 0.006704188883304596f, 0.006808950565755367f, 0.007352507673203945f, 0.006081997416913509f, 0.008039134554564953f, 0.008760463446378708f, 0.012209290638566017f, 0.009971140883862972f, 0.004320227075368166f, 0.007389526814222336f, 0.006773385219275951f, 0.016896164044737816f, 0.006453593727201223f, 0.004914648365229368f, 0.006971264723688364f, 0.007532897405326366f, 0.013039307668805122f, 0.010981067083775997f, 0.008341255597770214f, 0.016215113922953606f, 0.008573880419135094f, 0.011174720712006092f, 0.00567969586700201f, 0.007572660688310862f, 0.007047451566904783f, 0.0075613874942064285f, 0.02390330098569393f, 0.009024090133607388f, 0.010519317351281643f, 0.0069137681275606155f, 0.009577593766152859f, 0.007237013429403305f, 0.0048097241669893265f, 0.008450169116258621f, 0.00797682162374258f, 0.018145117908716202f, 0.005397000350058079f, 0.008009360171854496f, 0.013376845978200436f, 0.009111985564231873f, 0.006351270247250795f, 0.015014193952083588f, 0.010263665579259396f, 0.00624769227579236f, 0.010501965880393982f, 0.005008201580494642f, 0.00708756921812892f, 0.005461387801915407f, 0.006657324731349945f, 0.010699073784053326f, 0.00789196789264679f, 0.020597882568836212f, 0.005981920287013054f, 0.007123689167201519f, 0.009713311679661274f, 0.00648586917668581f, 0.006616123020648956f, 0.009506319649517536f, 0.0070371972396969795f, 0.012376477010548115f, 0.008832743391394615f, 0.007883264683187008f, 0.006198119837790728f, 0.008675068616867065f, 0.007157379761338234f, 0.009131669998168945f, 0.008044403977692127f, 0.008242936804890633f, 0.00609381590038538f, 0.007965990342199802f, 0.005704703275114298f, 0.006946195848286152f, 0.013386455364525318f, 0.00804699957370758f, 0.009004593826830387f, 0.016440214589238167f, 0.007184892427176237f, 0.006943967193365097f, 0.005215298850089312f, 0.017601268365979195f, 0.007080531679093838f, 0.009833281859755516f, 0.01282718125730753f, 0.006851202808320522f, 0.012245171703398228f, 0.008500497788190842f, 0.006121163722127676f, 0.007250083144754171f, 0.007945803925395012f, 0.005420910194516182f, 0.007871833629906178f, 0.0064324988052248955f, 0.006580666173249483f, 0.00627478864043951f, 0.009124280884861946f, 0.00739225372672081f, 0.009253205731511116f, 0.010931174270808697f, 0.006281119771301746f, 0.009894122369587421f, 0.021941959857940674f, 0.00811727438122034f, 0.00865092221647501f, 0.006225579418241978f, 0.007799700368195772f, 0.004388098139315844f, 0.008844745345413685f, 0.012384981848299503f, 0.011206965893507004f, 0.008382529951632023f, 0.01281005423516035f, 0.007359104230999947f, 0.012749987654387951f, 0.005482029635459185f, 0.007887603715062141f, 0.012986878864467144f, 0.010389769449830055f, 0.010177325457334518f, 0.007935320027172565f, 0.012489120475947857f, 0.008494126610457897f, 0.007809118367731571f, 0.006120387930423021f, 0.01225802581757307f, 0.01297236979007721f, 0.014593497850000858f, 0.012043407186865807f, 0.01834154687821865f, 0.009563528001308441f, 0.005422343499958515f, 0.007237207610160112f, 0.012425719760358334f, 0.005630864761769772f, 0.015760531648993492f, 0.005840119905769825f, 0.008939981460571289f, 0.008298791944980621f, 0.007769377902150154f, 0.008768550120294094f, 0.009649839252233505f, 0.008879773318767548f, 0.011781667359173298f, 0.0060972729697823524f, 0.013923161663115025f, 0.00746804429218173f, 0.00958551000803709f, 0.010757478885352612f, 0.007376671768724918f, 0.039723291993141174f, 0.007424796931445599f, 0.0069541786797344685f, 0.009627696126699448f, 0.010497125796973705f, 0.008206997998058796f, 0.008581720292568207f, 0.01016400195658207f, 0.01017105020582676f, 0.008051824755966663f, 0.006296908017247915f, 0.010639630258083344f, 0.005437665618956089f, 0.009420918300747871f, 0.004553353879600763f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_62_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0019712233915925026f, 0.002224607625976205f, 0.0019095116294920444f, 0.0022265652660280466f, 0.0018329741433262825f, 0.0016813428374007344f, 0.0027226293459534645f, 0.002024297835305333f, 0.0017855714540928602f, 0.001755713950842619f, 0.0018673944287002087f, 0.002476087538525462f, 0.0018205820815637708f, 0.002272901125252247f, 0.0017742370255291462f, 0.0017400081269443035f, 0.002217848552390933f, 0.0026808648835867643f, 0.0018168962560594082f, 0.002496659755706787f, 0.002306863199919462f, 0.002256280044093728f, 0.0019506900571286678f, 0.0019924365915358067f, 0.0017070547910407186f, 0.002186437603086233f, 0.0027539401780813932f, 0.00180933834053576f, 0.0023572875652462244f, 0.0023332026321440935f, 0.0024987966753542423f, 0.0023177689872682095f, 0.0017872895114123821f, 0.0016805395716801286f, 0.0021598287858068943f, 0.00200463249348104f, 0.001887243939563632f, 0.002753984881564975f, 0.0023571201600134373f, 0.002177197253331542f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016016684239730239f, 0.0008074642391875386f, 0.0015891093062236905f, 0.0009827765170484781f, 0.0017415053443983197f, 0.0010363907786086202f, 0.000994587317109108f, 0.0010577713837847114f, 0.001391717349179089f, 0.001843713689595461f, 0.0013549058930948377f, 0.001303326920606196f, 0.0019045814406126738f, 0.000909354304894805f, 0.0008132222574204206f, 0.0009850935311987996f, 0.0010687686735764146f, 0.0012408335460349917f, 0.001769741647876799f, 0.0018387044547125697f, 0.0015843467554077506f, 0.0010559139773249626f, 0.0012899608118459582f, 0.0013337853597477078f, 0.0014064251445233822f, 0.0008156439871527255f, 0.001593947526998818f, 0.0015185241354629397f, 0.0011087936582043767f, 0.0014723842032253742f, 0.0018952124519273639f, 0.0012448782799765468f, 0.0009530928218737245f, 0.0012924539623782039f, 0.0009856242686510086f, 0.0020046173594892025f, 0.0017391522414982319f, 0.0009644012898206711f, 0.0016440721228718758f, 0.0012835025554522872f, 0.0021480415016412735f, 0.0012284931726753712f, 0.0012784850550815463f, 0.0012821729760617018f, 0.0011187313357368112f, 0.0013308817287907004f, 0.0014253203989937901f, 0.0011673845583572984f, 0.0010691313073039055f, 0.001285608159378171f, 0.0012177472235634923f, 0.001317715854384005f, 0.001343303476460278f, 0.0014952986966818571f, 0.0014239727752283216f, 0.0011917229276150465f, 0.001227645087055862f, 0.0009239416103810072f, 0.0013092843582853675f, 0.001334524480625987f, 0.0015542707405984402f, 0.0014365215320140123f, 0.0014012359315529466f, 0.0012903573224321008f, 0.0013073093723505735f, 0.0013644964201375842f, 0.0017982189310714602f, 0.0012453808449208736f, 0.0012718264479190111f, 0.0014431115705519915f, 0.0009510496747680008f, 0.0013966057449579239f, 0.001603781944140792f, 0.0017671569949015975f, 0.0018421116983518004f, 0.0016724696615710855f, 0.0012368144234642386f, 0.00162211200222373f, 0.0018687611445784569f, 0.0012743613915517926f, 0.0010576717322692275f, 0.0016351063968613744f, 0.001022833283059299f, 0.0013497311156243086f, 0.0014281085459515452f, 0.001467089750804007f, 0.0013352007372304797f, 0.0017395222093909979f, 0.0021476850379258394f, 0.0013299948768690228f, 0.001433375757187605f, 0.001171613810583949f, 0.0013831709511578083f, 0.0013951271539554f, 0.0009491328382864594f, 0.0011913011549040675f, 0.0011636896524578333f, 0.0015798740787431598f, 0.0017112288624048233f, 0.0014888773439452052f, 0.0009520051535218954f, 0.0011211594101041555f, 0.0013017563614994287f, 0.0011068282183259726f, 0.0018373968778178096f, 0.0019438992021605372f, 0.0013224058784544468f, 0.0017495122738182545f, 0.0008906174916774035f, 0.001144010224379599f, 0.0016092070145532489f, 0.0011194419348612428f, 0.0015086372150108218f, 0.0012348160380497575f, 0.0007920123171061277f, 0.0009172254358418286f, 0.0011705895885825157f, 0.001286847167648375f, 0.0017690223176032305f, 0.0010428469395264983f, 0.0013418263988569379f, 0.0013414854183793068f, 0.0015101982280611992f, 0.0013354381080716848f, 0.0010147143620997667f, 0.0011469547171145678f, 0.0012092060642316937f, 0.0013746398035436869f, 0.0011924417922273278f, 0.0020703563932329416f, 0.0012781452387571335f, 0.001945078489370644f, 0.0015206803800538182f, 0.0008774125017225742f, 0.0013872201088815928f, 0.0012284137774258852f, 0.0015607333043590188f, 0.0013766140909865499f, 0.0014809039421379566f, 0.0017740136245265603f, 0.0010575787164270878f, 0.001073382911272347f, 0.0016658023232594132f, 0.0011783960508182645f, 0.0012896457919850945f, 0.0014067839365452528f, 0.001395686180330813f, 0.0014547222526744008f, 0.0011039612581953406f, 0.0011896875221282244f, 0.0012604554649442434f, 0.0016115772305056453f, 0.001221544574946165f, 0.0012854147935286164f, 0.0017788168042898178f, 0.0019296620739623904f, 0.0015257111517712474f, 0.002152122789993882f, 0.001065332442522049f, 0.0012084930203855038f, 0.0013820963213220239f, 0.0011045826831832528f, 0.001921699964441359f, 0.0014804576057940722f, 0.0012978711165487766f, 0.0015540898311883211f, 0.001606559962965548f, 0.00143866625148803f, 0.0013545833062380552f, 0.0018582148477435112f, 0.0010028042597696185f, 0.00138024368789047f, 0.0011281592305749655f, 0.0017747634556144476f, 0.0016916129970923066f, 0.0011891599278897047f, 0.0015091001987457275f, 0.0015428807819262147f, 0.0016186853172257543f, 0.0012646379182115197f, 0.0010970369912683964f, 0.0012176056625321507f, 0.0017011238960549235f, 0.0012292537139728665f, 0.0013908034889027476f, 0.0010011243866756558f, 0.0019403960322961211f, 0.0012155207805335522f, 0.0009432933875359595f, 0.0007240946288220584f, 0.0009923310717567801f, 0.0010154098272323608f, 0.001229163259267807f, 0.001307601691223681f, 0.0009096020366996527f, 0.0010675248922780156f, 0.0014378858031705022f, 0.0010984227992594242f, 0.0011363797821104527f, 0.001521986210718751f, 0.001575500937178731f, 0.0010088860290125012f, 0.000912454619538039f, 0.0013889654073864222f, 0.0013895330484956503f, 0.0018160570180043578f, 0.0013013201532885432f, 0.001718195271678269f, 0.0008547374163754284f, 0.0014938608510419726f, 0.0007814130512997508f, 0.0015251360600814223f, 0.0014225312042981386f, 0.0016030939295887947f, 0.0015521594323217869f, 0.0014102127170190215f, 0.0008790630381554365f, 0.0019164066761732101f, 0.0011974881635978818f, 0.0017022908432409167f, 0.000749140337575227f, 0.0011473315535113215f, 0.0011579063721001148f, 0.0012061147717759013f, 0.0010091698495671153f, 0.0017494858475401998f, 0.0015861992724239826f, 0.0007356078131124377f, 0.0011645035119727254f, 0.001586527330800891f, 0.001522860024124384f, 0.000997946597635746f, 0.0013558103237301111f, 0.0014955914812162519f, 0.001443031127564609f, 0.0015786901349201798f, 0.0014499390963464975f, 0.001513195689767599f, 0.0016551738372072577f, 0.0013944102684035897f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00457854475826025f, 0.01069289818406105f, 0.009572623297572136f, 0.009706156328320503f, 0.007996716536581516f, 0.01025843620300293f, 0.005078037269413471f, 0.008067331276834011f, 0.0060757906176149845f, 0.0056243231520056725f, 0.006261184345930815f, 0.007412468083202839f, 0.00632841419428587f, 0.009898271411657333f, 0.011835730634629726f, 0.005574241746217012f, 0.00633055716753006f, 0.008193968795239925f, 0.009325634688138962f, 0.005419491324573755f, 0.00639589037746191f, 0.00412791408598423f, 0.005378937814384699f, 0.006003072950989008f, 0.004468636121600866f, 0.008488699793815613f, 0.005883741658180952f, 0.004835424944758415f, 0.009290225803852081f, 0.008543440140783787f, 0.005203485954552889f, 0.012149750255048275f, 0.01028444990515709f, 0.00611440883949399f, 0.013968369923532009f, 0.004811486229300499f, 0.005560928024351597f, 0.007321299985051155f, 0.006978760473430157f, 0.005008110776543617f, 0.004087406676262617f, 0.006975544150918722f, 0.006363925524055958f, 0.007356884889304638f, 0.004195466637611389f, 0.006904977839440107f, 0.005632949993014336f, 0.005037145689129829f, 0.007552781142294407f, 0.006455686874687672f, 0.004690105561167002f, 0.005363096948713064f, 0.0061157564632594585f, 0.006231621373444796f, 0.005594242829829454f, 0.007837427780032158f, 0.008121835067868233f, 0.01353033073246479f, 0.007857094518840313f, 0.0060922796837985516f, 0.005586858373135328f, 0.005901119206100702f, 0.007726107258349657f, 0.005208160728216171f, 0.005941865500062704f, 0.006415154319256544f, 0.005615399684756994f, 0.010838881134986877f, 0.004703276790678501f, 0.015580852515995502f, 0.014107823371887207f, 0.004502107389271259f, 0.005315031856298447f, 0.004676387645304203f, 0.005658390466123819f, 0.006085533648729324f, 0.007335280999541283f, 0.007680191192775965f, 0.008103761821985245f, 0.005785263609141111f, 0.008164272643625736f, 0.004931601695716381f, 0.011214479804039001f, 0.006711785681545734f, 0.00522651569917798f, 0.0038198945112526417f, 0.005953343119472265f, 0.005386529956012964f, 0.00667364988476038f, 0.006955862510949373f, 0.006800565402954817f, 0.008912281133234501f, 0.006191733758896589f, 0.012304740957915783f, 0.01096196286380291f, 0.005632383748888969f, 0.008740405552089214f, 0.009165797382593155f, 0.005540139507502317f, 0.006827185396105051f, 0.007627629209309816f, 0.01064004935324192f, 0.007331458851695061f, 0.013752324506640434f, 0.004727739375084639f, 0.0070334188640117645f, 0.006826686207205057f, 0.008792608976364136f, 0.00660170242190361f, 0.008342352695763111f, 0.008138718083500862f, 0.006104316096752882f, 0.00715209124609828f, 0.01067684032022953f, 0.01607002504169941f, 0.01710924319922924f, 0.007352547720074654f, 0.008655918762087822f, 0.004399843513965607f, 0.00969694647938013f, 0.006543464958667755f, 0.008435741066932678f, 0.008510059677064419f, 0.004799209535121918f, 0.007324507925659418f, 0.007621119264513254f, 0.005382496397942305f, 0.005945626646280289f, 0.010028638876974583f, 0.006818399764597416f, 0.0057142917066812515f, 0.004955708049237728f, 0.009087557904422283f, 0.021501461043953896f, 0.007246518507599831f, 0.009014955721795559f, 0.012611515820026398f, 0.008375905454158783f, 0.005188341252505779f, 0.006617249455302954f, 0.007320566102862358f, 0.010508348233997822f, 0.006742067635059357f, 0.011827816255390644f, 0.010181751102209091f, 0.004696338437497616f, 0.010502261109650135f, 0.005870767403393984f, 0.0039636013098061085f, 0.0065527609549462795f, 0.006043595727533102f, 0.00976026151329279f, 0.010171744041144848f, 0.005483093671500683f, 0.012547271326184273f, 0.01015402190387249f, 0.00743722403421998f, 0.008948092348873615f, 0.009510377421975136f, 0.006197575479745865f, 0.010833441279828548f, 0.010987953282892704f, 0.006313683930784464f, 0.005414491053670645f, 0.006476473994553089f, 0.007576578762382269f, 0.006837495602667332f, 0.004567927680909634f, 0.003991473466157913f, 0.0053125713020563126f, 0.00892662350088358f, 0.007831879891455173f, 0.006915092933923006f, 0.005483563989400864f, 0.005762569140642881f, 0.0065885442309081554f, 0.006524879951030016f, 0.007084851618856192f, 0.004190956242382526f, 0.0042096287943422794f, 0.006053427699953318f, 0.00900711677968502f, 0.005800546146929264f, 0.005765107925981283f, 0.006620137952268124f, 0.01112932525575161f, 0.008644497953355312f, 0.004636635538190603f, 0.007669195998460054f, 0.008152440190315247f, 0.01007634773850441f, 0.005888939369469881f, 0.006840508431196213f, 0.006949048489332199f, 0.017197806388139725f, 0.006971429567784071f, 0.006862732581794262f, 0.010112895630300045f, 0.007696071639657021f, 0.009688537567853928f, 0.005736765451729298f, 0.01239384151995182f, 0.01376813929527998f, 0.0060175624676048756f, 0.014815415255725384f, 0.005113670136779547f, 0.006703330669552088f, 0.00684360833838582f, 0.014744509011507034f, 0.007805528584867716f, 0.01603727973997593f, 0.005768338218331337f, 0.00821673683822155f, 0.006035829894244671f, 0.015334060415625572f, 0.007824343629181385f, 0.0054451944306492805f, 0.006263034883886576f, 0.004015055019408464f, 0.00522245280444622f, 0.017002642154693604f, 0.008963154628872871f, 0.007930931635200977f, 0.007545966189354658f, 0.010318155400454998f, 0.005290078464895487f, 0.006459210067987442f, 0.008757064118981361f, 0.007638425100594759f, 0.005623231641948223f, 0.006948146503418684f, 0.013046033680438995f, 0.01361672580242157f, 0.00636456860229373f, 0.005884163081645966f, 0.006201066076755524f, 0.004209694918245077f, 0.007577970158308744f, 0.005422167479991913f, 0.007367277052253485f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 80,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0021262969821691513f, 0.0018155857687816024f, 0.002506040036678314f, 0.0023903173860162497f, 0.00270710326731205f, 0.0024281346704810858f, 0.0018830791814252734f, 0.0017963439458981156f, 0.0021147727966308594f, 0.00211156508885324f, 0.00239630532450974f, 0.0019362432649359107f, 0.0023465699050575495f, 0.002478098263964057f, 0.0021435823291540146f, 0.002572986064478755f, 0.0025549638085067272f, 0.0020085398573428392f, 0.0019993316382169724f, 0.0019705158192664385f, 0.0021118754521012306f, 0.003223179839551449f, 0.0024524794425815344f, 0.0017815218307077885f, 0.0017118114046752453f, 0.0027696758043020964f, 0.0017368531553074718f, 0.00284976651892066f, 0.0019406406208872795f, 0.002859489293769002f, 0.00371231185272336f, 0.0025505819357931614f, 0.002015450270846486f, 0.0018313901964575052f, 0.002033017808571458f, 0.00229261233471334f, 0.0020809825509786606f, 0.0029624029994010925f, 0.0021531125530600548f, 0.002820959547534585f, 0.0028287742752581835f, 0.002005508169531822f, 0.0015724534168839455f, 0.0016517224721610546f, 0.002439833479002118f, 0.0025582786183804274f, 0.0030013129580765963f, 0.002624798333272338f, 0.0033209689427167177f, 0.0019905539229512215f, 0.0025828974321484566f, 0.002419311786070466f, 0.0018147553782910109f, 0.0016655598301440477f, 0.002604789799079299f, 0.002780183684080839f, 0.0022766951005905867f, 0.0018259934149682522f, 0.0017596420366317034f, 0.0021315719932317734f, 0.0019905788358300924f, 0.001901308773085475f, 0.0019828123040497303f, 0.0013604722917079926f, 0.002594549907371402f, 0.0034506097435951233f, 0.0018391127232462168f, 0.001940869609825313f, 0.0022371469531208277f, 0.001555655850097537f, 0.0021107718348503113f, 0.0019503780640661716f, 0.0019891299307346344f, 0.0029456429183483124f, 0.002200279152020812f, 0.002719014883041382f, 0.0024642660282552242f, 0.002443422796204686f, 0.0023001881781965494f, 0.0023786374367773533f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015005046734586358f, 0.0008447830332443118f, 0.0009731232421472669f, 0.0009499961161054671f, 0.0008033805061131716f, 0.0007645692676305771f, 0.0009411179344169796f, 0.0014260582393035293f, 0.0010599963134154677f, 0.001048152451403439f, 0.0011105260346084833f, 0.0007564224069938064f, 0.0012717351783066988f, 0.0009852724615484476f, 0.0010648530442267656f, 0.0011145148891955614f, 0.00086335523519665f, 0.0009858043631538749f, 0.0012006608303636312f, 0.0009794901125133038f, 0.0015480013098567724f, 0.001085668453015387f, 0.0012288547586649656f, 0.0014532406348735094f, 0.0009295394411310554f, 0.0009561413316987455f, 0.0010510399006307125f, 0.00099450652487576f, 0.0011202407767996192f, 0.0008071864140219986f, 0.0012638312764465809f, 0.0010006552329286933f, 0.000834835518617183f, 0.001021190662868321f, 0.0013196246000006795f, 0.0010567809222266078f, 0.0009467441122978926f, 0.0010113720782101154f, 0.0013264378067106009f, 0.0008268359815701842f, 0.0008655925048515201f, 0.0007958057685755193f, 0.0009591158595867455f, 0.0008993864757940173f, 0.0009618204203434289f, 0.0011292783310636878f, 0.0008599261636845767f, 0.00100151845254004f, 0.0008805617108009756f, 0.0007058968185447156f, 0.0007225470617413521f, 0.0009401847491972148f, 0.0007171639008447528f, 0.0009894076501950622f, 0.0007758436258882284f, 0.0011373513843864202f, 0.0012345040449872613f, 0.0007740278379060328f, 0.0009880311554297805f, 0.0008957403479143977f, 0.0009694944019429386f, 0.001029470469802618f, 0.0007355963462032378f, 0.0009106943034566939f, 0.0008964863372966647f, 0.001275065471418202f, 0.001262448146007955f, 0.0008083329303190112f, 0.0009470225195400417f, 0.0008895919308997691f, 0.001018627779558301f, 0.00122922717127949f, 0.0011713216081261635f, 0.0007691217469982803f, 0.0009726059506647289f, 0.0009655363974161446f, 0.0009945131605491042f, 0.0010216041700914502f, 0.0012103526387363672f, 0.0012659493368119001f, 0.000894044351298362f, 0.0010644181165844202f, 0.0011147529585286975f, 0.000783352239523083f, 0.0009182213107123971f, 0.001259748823940754f, 0.0008780824718996882f, 0.0009292192407883704f, 0.000953079666942358f, 0.00108839082531631f, 0.0017632637172937393f, 0.0010758426506072283f, 0.0010267595062032342f, 0.0008835328626446426f, 0.0009625616366975009f, 0.0006926788482815027f, 0.0011525911977514625f, 0.0008325627422891557f, 0.0010132380994036794f, 0.0008139887358993292f, 0.0009074071422219276f, 0.001049140584655106f, 0.000966259220149368f, 0.0009123728377744555f, 0.0006406970205716789f, 0.0007983582909218967f, 0.0009844378801062703f, 0.0011718797031790018f, 0.0009153129649348557f, 0.001345569733530283f, 0.0007199677056632936f, 0.0011741311755031347f, 0.0009454684914089739f, 0.0009690153528936207f, 0.0010896032908931375f, 0.001006066333502531f, 0.0008713584393262863f, 0.0010138856014236808f, 0.0009274439071305096f, 0.0010684010339900851f, 0.001031773746944964f, 0.0010368720395490527f, 0.0009764890419319272f, 0.0008127616019919515f, 0.0010018026223406196f, 0.0010401709005236626f, 0.0012070670491084456f, 0.0012255654437467456f, 0.0012579624308273196f, 0.0011643379693850875f, 0.0008245111093856394f, 0.00158399879001081f, 0.0009901280282065272f, 0.0008537654066458344f, 0.0009296086500398815f, 0.0008478527888655663f, 0.0008454209310002625f, 0.0007639972027391195f, 0.0012767022708430886f, 0.0008194638066925108f, 0.0009489548392593861f, 0.0011876096250489354f, 0.001218475983478129f, 0.000984466285444796f, 0.001224273699335754f, 0.0009617095929570496f, 0.0009866266045719385f, 0.0010607053991407156f, 0.0009735554922372103f, 0.0012305111158639193f, 0.001037812209688127f, 0.0011220229789614677f, 0.0013712618965655565f, 0.0014138180995360017f, 0.0008871352765709162f, 0.000980893848463893f, 0.0011819875799119473f, 0.0009422615985386074f, 0.0010745502077043056f, 0.0009213288431055844f, 0.001112076104618609f, 0.0006760291871614754f, 0.0008832057937979698f, 0.0009841624414548278f, 0.0007107785204425454f, 0.000799045548774302f, 0.0008217468857765198f, 0.0009200808708555996f, 0.000716965296305716f, 0.0009302763501182199f, 0.0011205727932974696f, 0.001093227881938219f, 0.0010094286408275366f, 0.001103661023080349f, 0.0008472262416034937f, 0.0009760679095052183f, 0.0007949022692628205f, 0.0013135721674188972f, 0.0009126277873292565f, 0.0008644881309010088f, 0.001178024336695671f, 0.001127975177951157f, 0.001553415902890265f, 0.0009598830947652459f, 0.000884943816345185f, 0.0007725264877080917f, 0.0009309969609603286f, 0.0010898868786171079f, 0.001509220921434462f, 0.0009532999829389155f, 0.0008751523564569652f, 0.0010341373272240162f, 0.001065646531060338f, 0.0008422203245572746f, 0.0012003303272649646f, 0.0007404198404401541f, 0.0010599648812785745f, 0.0019395846175029874f, 0.0009606361272744834f, 0.0010125486878678203f, 0.001016745693050325f, 0.0007726657204329967f, 0.0007621404947713017f, 0.0008982999133877456f, 0.0008391593000851572f, 0.0008687138324603438f, 0.0012457052944228053f, 0.0008780441712588072f, 0.0011698167072609067f, 0.0010773420799523592f, 0.0013327323831617832f, 0.0009074402623809874f, 0.000771812628954649f, 0.0010974666802212596f, 0.001112519996240735f, 0.0009185356902889907f, 0.0011572681833058596f, 0.0011087149614468217f, 0.0010542090749368072f, 0.0011029711458832026f, 0.0010709462221711874f, 0.0011403149692341685f, 0.0014160318532958627f, 0.0010538813658058643f, 0.0011504427529871464f, 0.0012362528359517455f, 0.0008376697660423815f, 0.0007047030376270413f, 0.0009750137105584145f, 0.001022899174131453f, 0.0008422701503150165f, 0.0008679002057760954f, 0.0010532387532293797f, 0.0008475247886963189f, 0.0009517142316326499f, 0.0011269818060100079f, 0.0009632232831791043f, 0.000855961989145726f, 0.0015036175027489662f, 0.0014609002973884344f, 0.0009097100701183081f, 0.001443753601051867f, 0.0009062822791747749f, 0.0010072035947814584f, 0.0008217679569497705f, 0.0008663716726005077f, 0.0009751903126016259f, 0.0007980202790349722f, 0.0010213219793513417f, 0.0010835833381861448f, 0.0008499579853378236f, 0.0012012154329568148f, 0.0014687482034787536f, 0.000810159370303154f, 0.001243402250111103f, 0.0008764492231421173f, 0.0010805983329191804f, 0.0015358934178948402f, 0.000815920124296099f, 0.0012906895717605948f, 0.0010022349888458848f, 0.0009154471335932612f, 0.0008433365146629512f, 0.0006217495538294315f, 0.001197143574245274f, 0.000758494483307004f, 0.0011799270287156105f, 0.0008183821337297559f, 0.0010831038234755397f, 0.0010679741390049458f, 0.0007989575387910008f, 0.0007839453755877912f, 0.0007755605038255453f, 0.0009549522073939443f, 0.0011509477626532316f, 0.0009713465697132051f, 0.0008031532051973045f, 0.0011112353531643748f, 0.0014223887119442225f, 0.0008723819628357887f, 0.0007119074580259621f, 0.0009222499211318791f, 0.0012032008962705731f, 0.000758041744120419f, 0.0012555753346532583f, 0.0009184928494505584f, 0.0013635781360790133f, 0.0010041996138170362f, 0.0013018859317526221f, 0.0011045498540624976f, 0.0009329519816674292f, 0.0009808199247345328f, 0.0009109147940762341f, 0.0009410688071511686f, 0.000873044366016984f, 0.0009370058542117476f, 0.0010898534674197435f, 0.00102239940315485f, 0.0008384982356801629f, 0.00086792535148561f, 0.0008553761290386319f, 0.000744151882827282f, 0.0010976189514622092f, 0.0008720268378965557f, 0.0009792326018214226f, 0.0010221153497695923f, 0.0007954285247251391f, 0.0010214459616690874f, 0.001225674757733941f, 0.0008051679469645023f, 0.000723809702321887f, 0.0010064829839393497f, 0.0014036562060937285f, 0.0011321617057546973f, 0.0011850332375615835f, 0.0009783563436940312f, 0.0007861743797548115f, 0.0008638074505142868f, 0.0008696896256878972f, 0.0008226714562624693f, 0.000811151519883424f, 0.0007270988426171243f, 0.0009984464850276709f, 0.0009577667224220932f, 0.000894103548489511f, 0.0010909823467954993f, 0.001265668892301619f, 0.0008537428220734f, 0.0008363998495042324f, 0.0007880270131863654f, 0.00090888945851475f, 0.0011355786118656397f, 0.0007506326073780656f, 0.0008647211943753064f, 0.001480728737078607f, 0.0010393201373517513f, 0.0012220698408782482f, 0.0012892065569758415f, 0.0011504428694024682f, 0.0010602350812405348f, 0.0007259385311044753f, 0.0010407749796286225f, 0.0011222026078030467f, 0.0011100256815552711f, 0.0011382438242435455f, 0.0008766265818849206f, 0.0008454810013063252f, 0.0010859929025173187f, 0.0011223370674997568f, 0.0009644260280765593f, 0.0009971068939194083f, 0.0010072734439745545f, 0.0007761311717331409f, 0.0011194333201274276f, 0.0007595363422296941f, 0.001165160327218473f, 0.0009422088041901588f, 0.0009355845977552235f, 0.001070643775165081f, 0.0008564526797272265f, 0.0011737224413082004f, 0.0009195902966894209f, 0.0008497022208757699f, 0.0009468838688917458f, 0.0009627779363654554f, 0.0010045836679637432f, 0.0008730188710615039f, 0.0009611726272851229f, 0.0019418395822867751f, 0.001085172058083117f, 0.0014382062945514917f, 0.0009960802271962166f, 0.0009420956484973431f, 0.000927249260712415f, 0.0012327540898695588f, 0.0009203096269629896f, 0.0010097379563376307f, 0.0009606627863831818f, 0.0009504234767518938f, 0.0009404512820765376f, 0.0011805049143731594f, 0.0009301661630161107f, 0.0012283427640795708f, 0.001428339397534728f, 0.0008276521693915129f, 0.0010775000555440784f, 0.000956797506660223f, 0.0010150173911824822f, 0.0010757388081401587f, 0.0011695075081661344f, 0.0008541283314116299f, 0.0008223136537708342f, 0.0013482330832630396f, 0.000985992606729269f, 0.0009918517898768187f, 0.001031595398671925f, 0.0009685356053523719f, 0.0009259218350052834f, 0.0010026387171819806f, 0.0011049098102375865f, 0.0010102145606651902f, 0.001064918003976345f, 0.0009844977175816894f, 0.0009359742980450392f, 0.001322910306043923f, 0.0008455632487311959f, 0.0009644515230320394f, 0.0009779420215636492f, 0.0009956280700862408f, 0.00118700519669801f, 0.0008854165207594633f, 0.0014352290891110897f, 0.0010753984097391367f, 0.0011351160937920213f, 0.0013337499694898725f, 0.000781850831117481f, 0.0010291860671713948f, 0.000902653147932142f, 0.0010299059795215726f, 0.0010737837292253971f, 0.0010704360902309418f, 0.0007917474140413105f, 0.0007677001995034516f, 0.0010532886954024434f, 0.0011095752706751227f, 0.0010411734692752361f, 0.001126426039263606f, 0.0007846846710890532f, 0.0008028746233321726f, 0.0010674049844965339f, 0.0009776322403922677f, 0.0010850218823179603f, 0.0008950564078986645f, 0.0010932991281151772f, 0.0010303340386599302f, 0.0013141664676368237f, 0.0010101759107783437f, 0.0013069573324173689f, 0.0010199669050052762f, 0.0007462920621037483f, 0.0009637341136112809f, 0.0010723029263317585f, 0.0006600949564017355f, 0.0012938928557559848f, 0.0010335595579817891f, 0.0011390618747100234f, 0.0010089912684634328f, 0.0009910763474181294f, 0.0009337105439044535f, 0.0010916200699284673f, 0.0013339415891095996f, 0.0007761629531159997f, 0.0011788759147748351f, 0.0009510937379673123f, 0.0010652862256392837f, 0.0012155055301263928f, 0.0009855155367404222f, 0.0011056183138862252f, 0.0007516947807744145f, 0.0008336080354638398f, 0.0010392310796305537f, 0.0008396581979468465f, 0.0009081965545192361f, 0.0008604377508163452f, 0.0010363520123064518f, 0.000987797393463552f, 0.0011285506188869476f, 0.0008673610282130539f, 0.0013186230789870024f, 0.0017758397152647376f, 0.001029729493893683f, 0.0009603015496395528f, 0.0010359875159338117f, 0.0009979584719985723f, 0.0009938025614246726f, 0.0006297505460679531f, 0.000832458317745477f, 0.0007307673804461956f, 0.0010843988275155425f, 0.001080842106603086f, 0.0010203684214502573f, 0.0008559902780689299f, 0.0010565704433247447f, 0.00102763413451612f, 0.0010491075227037072f, 0.0012039713328704238f, 0.0011745011433959007f, 0.0010415221331641078f, 0.0008637380669824779f, 0.0011470528552308679f, 0.0008460390381515026f, 0.0009234476019628346f, 0.0008724593208171427f, 0.0008944592555053532f, 0.0011161330621689558f, 0.0010084877721965313f, 0.0010645268484950066f, 0.0013503733789548278f, 0.001042502699419856f, 0.0008868626318871975f, 0.0011462143156677485f, 0.0010786033235490322f, 0.0009777132654562593f, 0.0011615148978307843f, 0.0011231106473132968f, 0.0011410238221287727f, 0.001123078283853829f, 0.001259978162124753f, 0.0008491128101013601f, 0.0009275772608816624f, 0.001498535624705255f, 0.0011911645997315645f, 0.0011278395541012287f, 0.0012345665600150824f, 0.0008526585879735649f, 0.0008897387306205928f, 0.0008177342242561281f, 0.0010461520869284868f, 0.001038850867189467f, 0.0006250944570638239f, 0.0009927861392498016f, 0.0017481502145528793f, 0.0007339078583754599f, 0.0010681181447580457f, 0.0009565335931256413f, 0.0006464470061473548f, 0.0007952142623253167f, 0.0009263681713491678f, 0.0010950337164103985f, 0.0009144553332589567f, 0.0008464811253361404f, 0.0011535047087818384f, 0.001179928658530116f, 0.0010457057505846024f, 0.0007817050791345537f, 0.0009351686458103359f, 0.001075733220204711f, 0.0010039519984275103f, 0.0008470179745927453f, 0.0008066582377068698f, 0.0012645843671634793f, 0.0011919825337827206f, 0.0013690380146726966f, 0.0010745911858975887f, 0.001120527507737279f, 0.0009907328058034182f, 0.0008791819564066827f, 0.0010643041459843516f, 0.0010993086034432054f, 0.0009381150593981147f, 0.0010876428568735719f, 0.000955384923145175f, 0.0009139238973148167f, 0.0011976107489317656f, 0.0009190138662233949f, 0.0010456155287101865f, 0.0012812137138098478f, 0.0010510003194212914f, 0.0009577565360814333f, 0.0008265823707915843f, 0.0010198882082477212f, 0.0012562011834234f, 0.0011097454698756337f, 0.0009401437127962708f, 0.0013434973079711199f, 0.001060607610270381f, 0.0011863606050610542f, 0.0009481704328209162f, 0.001277057221159339f, 0.0011286003282293677f, 0.0008680184837430716f, 0.0010594413615763187f, 0.001002868521027267f, 0.0010406544897705317f, 0.0009309459128417075f, 0.0005790985305793583f, 0.0009339504176750779f, 0.0009326190338470042f, 0.0010605468414723873f, 0.001154966070316732f, 0.0009302420658059418f, 0.0010435933945700526f, 0.0011037258664146066f, 0.0007986684213392437f, 0.0009357749368064106f, 0.0008506804588250816f, 0.0012558712624013424f, 0.0010443651117384434f, 0.0012868319172412157f, 0.0007610682514496148f, 0.000913105031941086f, 0.0010602703550830483f, 0.0010918000480160117f, 0.0010803366312757134f, 0.0013211106415838003f, 0.0007807665970176458f, 0.0012251570587977767f, 0.0008897011284716427f, 0.0011778563493862748f, 0.0008272749837487936f, 0.0012567508965730667f, 0.0008366864640265703f, 0.0008810855215415359f, 0.0008737097377888858f, 0.0013989540748298168f, 0.000978491036221385f, 0.0012717358767986298f, 0.000984561163932085f, 0.0007346317870542407f, 0.0010330715449526906f, 0.0008520182454958558f, 0.0010410686954855919f, 0.0009284771513193846f, 0.0009945353958755732f, 0.0011079855030402541f, 0.0008222479373216629f, 0.0009396569221280515f, 0.0008989610942080617f, 0.0010635263752192259f, 0.0008493844652548432f, 0.0010824509663507342f, 0.0014096004888415337f, 0.0009052014211192727f, 0.0008301587658934295f, 0.0011820722138509154f, 0.001217374810948968f, 0.0007643293938599527f, 0.001140544074587524f, 0.0008950816700235009f, 0.0010388953378424048f, 0.0008990707574412227f, 0.0007875428418628871f, 0.001004753983579576f, 0.0008624892798252404f, 0.0009161307825706899f, 0.0006719864322803915f, 0.0008186096092686057f, 0.0011301788035780191f, 0.0008077977690845728f, 0.0014846331905573606f, 0.0006400988204404712f, 0.001246491796337068f, 0.0012934476835653186f, 0.0009086215868592262f, 0.0008800770156085491f, 0.000784527335781604f, 0.0007912523578852415f, 0.0008354192832484841f, 0.0008308264659717679f, 0.001005292753688991f, 0.0012099631130695343f, 0.0011603650636970997f, 0.0009792324854061007f, 0.0012977097649127245f, 0.0011979759437963367f, 0.0008461186080239713f, 0.0011480910470709205f, 0.0010310093639418483f, 0.0009359135874547064f, 0.0008119541453197598f, 0.0008328085532411933f, 0.0009596808813512325f, 0.0007393457926809788f, 0.0008319784537889063f, 0.0011888935696333647f, 0.0009866571053862572f, 0.0007920463103801012f, 0.0008118809782899916f, 0.0007215334917418659f, 0.0007757796556688845f, 0.0008951356867328286f, 0.0012246653204783797f, 0.0011143442243337631f, 0.001056995359249413f, 0.0010173018090426922f, 0.0011648839572444558f, 0.000925723637919873f, 0.001006108708679676f, 0.0012417094549164176f, 0.0006348497117869556f, 0.0009074773988686502f, 0.0012772087939083576f, 0.001163611770607531f, 0.001004910678602755f, 0.001216474105603993f, 0.0009468365460634232f, 0.0010485958773642778f, 0.0007858189637772739f, 0.000936291937250644f, 0.00107942009344697f, 0.0008634492987766862f, 0.000803508039098233f, 0.0010822995100170374f, 0.0007933970773592591f, 0.0009957047877833247f, 0.0009973502019420266f, 0.000974557304289192f, 0.0008464364218525589f, 0.0008510668412782252f, 0.0011139381676912308f, 0.000669942528475076f, 0.0009673847234807909f, 0.0010033226571977139f, 0.0008226560894399881f, 0.0009973307605832815f, 0.0010292857186868787f, 0.0009628451662138104f, 0.0006559210596606135f, 0.0012745893327519298f, 0.001239074976183474f, 0.0011665328638628125f, 0.001236775191500783f, 0.000947880616877228f, 0.0011348810512572527f, 0.0008269237587228417f, 0.0011971393832936883f, 0.0007254904485307634f, 0.0009115838329307735f, 0.0009268667781725526f, 0.0008094614022411406f, 0.0009052589884959161f, 0.0011658362345770001f, 0.0007432173588313162f, 0.0010091663571074605f, 0.0010238238610327244f, 0.0009448399650864303f, 0.000980909913778305f, 0.0009238479542545974f, 0.0014288730453699827f, 0.000811771082226187f, 0.0013818996958434582f, 0.001064447802491486f, 0.001330208033323288f, 0.001165594207122922f, 0.0008815735345706344f, 0.0010780394077301025f, 0.0012482715537771583f, 0.0014254519483074546f, 0.0008943279972299933f, 0.0010459711775183678f, 0.0008732404094189405f, 0.0010438658064231277f, 0.0008633431862108409f, 0.0007984672556631267f, 0.0010681941639631987f, 0.0009397420799359679f, 0.0012906832853332162f, 0.0009258068166673183f, 0.0010780257871374488f, 0.0008802968077361584f, 0.0009010006906464696f, 0.0008436067146249115f, 0.0009370125480927527f, 0.0008804983226582408f, 0.0010798063594847918f, 0.0010250040795654058f, 0.000862707442138344f, 0.0008440703386440873f, 0.001091070706024766f, 0.0008035823702812195f, 0.000975244038272649f, 0.0009948149090632796f, 0.0012719687074422836f, 0.0009220058564096689f, 0.0008928849711082876f, 0.000949155306443572f, 0.0008107800385914743f, 0.001318454509600997f, 0.0010723741725087166f, 0.001108276192098856f, 0.0009007924818433821f, 0.0010238736867904663f, 0.0010535448091104627f, 0.0008419962250627577f, 0.0010463448707014322f, 0.0008167095365934074f, 0.0009221281507052481f, 0.000828779477160424f, 0.0008363706292584538f, 0.000987471197731793f, 0.0010799074079841375f, 0.0012310410384088755f, 0.0010898925829678774f, 0.0012065256014466286f, 0.0009964116616174579f, 0.0008156343828886747f, 0.0009208674309775233f, 0.000931037007831037f, 0.0009314448107033968f, 0.0008765484089963138f, 0.001115502673201263f, 0.000899384671356529f, 0.0011599593563005328f, 0.000849962409120053f, 0.0011289132526144385f, 0.00103196338750422f, 0.0008040452958084643f, 0.0011822589440271258f, 0.000920326157938689f, 0.0010625795694068074f, 0.000932713970541954f, 0.0008610525401309133f, 0.00081838812911883f, 0.0012955665588378906f, 0.0010459852637723088f, 0.0010563095565885305f, 0.001252941437996924f, 0.000892912910785526f, 0.0008993205847218633f, 0.0012844763696193695f, 0.0009163887007161975f, 0.0008959770202636719f, 0.001065625692717731f, 0.0006913929828442633f, 0.0009241615189239383f, 0.0010110888397321105f, 0.0009779155952855945f, 0.0009494858677498996f, 0.0013847268419340253f, 0.0011422887910157442f, 0.001009174040518701f, 0.0010889084078371525f, 0.0009452688973397017f, 0.0008905234863050282f, 0.0012044847244396806f, 0.000952204514760524f, 0.0009504409972578287f, 0.0010786839993670583f, 0.001133752753958106f, 0.0014783645747229457f, 0.0011604555184021592f, 0.0009717192151583731f, 0.0010513226734474301f, 0.0010184161365032196f, 0.00072883116081357f, 0.0010304894531145692f, 0.000774857122451067f, 0.001068202662281692f, 0.000988333486020565f, 0.0008359901839867234f, 0.0015347825828939676f, 0.0013034342555329204f, 0.001696753199212253f, 0.0009033252717927098f, 0.0011597442207857966f, 0.0008513155626133084f, 0.0010571744060143828f, 0.0011444169795140624f, 0.0009302087710238993f, 0.0009936649585142732f, 0.0008692523697391152f, 0.0006455705151893198f, 0.0010744172614067793f, 0.0013166143326088786f, 0.0009814348304644227f, 0.0010734011884778738f, 0.0008042077533900738f, 0.0009681031224317849f, 0.001033309381455183f, 0.0007924938690848649f, 0.0008690747781656682f, 0.0008946547168307006f, 0.0010599608067423105f, 0.0009293613256886601f, 0.0006752935005351901f, 0.0011123566655442119f, 0.0009164645452983677f, 0.0007495662430301309f, 0.0010221858974546194f, 0.0008419530349783599f, 0.0009490291122347116f, 0.0009662692318670452f, 0.0009622545330785215f, 0.0008106591994874179f, 0.0009026539046317339f, 0.0009788526222109795f, 0.0009011467336677015f, 0.0012264805845916271f, 0.001004107529297471f, 0.0009763144189491868f, 0.0010058088228106499f, 0.0008566592005081475f, 0.0015266439877450466f, 0.0007777572609484196f, 0.0009832894429564476f, 0.001533526461571455f, 0.0010955288307741284f, 0.0009447430493310094f, 0.0009942622855305672f, 0.000999901327304542f, 0.0008922400302253664f, 0.0007734027458354831f, 0.0008630285738036036f, 0.0013255411759018898f, 0.0007616198854520917f, 0.0009427219047211111f, 0.0010839395690709352f, 0.001072325394488871f, 0.0011793446028605103f, 0.0010129597503691912f, 0.000840144173707813f, 0.001102494541555643f, 0.0010263908188790083f, 0.0009699820075184107f, 0.0008259504102170467f, 0.0010422804625704885f, 0.0012419023551046848f, 0.001228092354722321f, 0.001109011354856193f, 0.000985261402092874f, 0.001323545933701098f, 0.0015225043753162026f, 0.0007960869697853923f, 0.0009175154264084995f, 0.0007875334704294801f, 0.001268940744921565f, 0.0008388641872443259f, 0.0010134270414710045f, 0.0014471663162112236f, 0.0009424917516298592f, 0.0008672077092342079f, 0.0009899209253489971f, 0.001260010409168899f, 0.0010030961129814386f, 0.0008505998994223773f, 0.0011750468984246254f, 0.0011934087378904223f, 0.0009404811426065862f, 0.0009751570760272443f, 0.0008494160138070583f, 0.0009839881677180529f, 0.0012761448742821813f, 0.0008736106683500111f, 0.0011070583714172244f, 0.0007929085404612124f, 0.0009140858892351389f, 0.000956896401476115f, 0.0007534255855716765f, 0.0010460785124450922f, 0.0012026578187942505f, 0.0008852548780851066f, 0.0010020312620326877f, 0.001124001806601882f, 0.0009078183793462813f, 0.0009277898352593184f, 0.0010027651442214847f, 0.0009618657059036195f, 0.0010905960807576776f, 0.0009392719948664308f, 0.0010044367518275976f, 0.0007556770578958094f, 0.00159834127407521f, 0.001051848172210157f, 0.0012150374241173267f, 0.0012815489899367094f, 0.0007644878351129591f, 0.0007594861672259867f, 0.0008495165966451168f, 0.0012712505413219333f, 0.000943888386245817f, 0.0015531786484643817f, 0.000712128181476146f, 0.000912829942535609f, 0.0008006475982256234f, 0.0007395158754661679f, 0.0013458585599437356f, 0.0010087197879329324f, 0.0007681931601837277f, 0.001083726529031992f, 0.0007668721373192966f, 0.0007563307881355286f, 0.0009599013137631118f, 0.0008000755333341658f, 0.0008519007824361324f, 0.0010396800935268402f, 0.0009653649758547544f, 0.0008558939443901181f, 0.0008019515662454069f, 0.0009296517819166183f, 0.0009586195228621364f, 0.0009755128412507474f, 0.000988080631941557f, 0.0010373167460784316f, 0.0009340458200313151f, 0.0009908368811011314f, 0.0009460774599574506f, 0.0013402600307017565f, 0.0007955673499964178f, 0.0007995124906301498f, 0.0007851542322896421f, 0.0010616008657962084f, 0.0009202365181408823f, 0.0009959469316527247f, 0.0013725199969485402f, 0.0008538732072338462f, 0.0008534452063031495f, 0.0010368945077061653f, 0.0007707089534960687f, 0.0009141276241280138f, 0.0010366006754338741f, 0.0013165511190891266f, 0.0008065327419899404f, 0.0009648592676967382f, 0.0009807642782106996f, 0.0011378985363990068f, 0.0007212454220280051f, 0.0010581959504634142f, 0.001018777722492814f, 0.0009813127107918262f, 0.0010329963406547904f, 0.0009255717741325498f, 0.0011303633218631148f, 0.0010208811145275831f, 0.000843321206048131f, 0.0011007587891072035f, 0.0009031133959069848f, 0.0009548953967168927f, 0.0012153342831879854f, 0.0009440102148801088f, 0.0009970922255888581f, 0.0012415234232321382f, 0.0008912613266147673f, 0.0007043174700811505f, 0.000849853502586484f, 0.0010290010832250118f, 0.0010631863260641694f, 0.0010638186940923333f, 0.001165543682873249f, 0.0010236963862553239f, 0.0007426936645060778f, 0.0007762211025692523f, 0.0008969248156063259f, 0.000968567153904587f, 0.0009282603859901428f, 0.0011062495177611709f, 0.0007038195035420358f, 0.0010651350021362305f, 0.0009990674443542957f, 0.0009148605749942362f, 0.0012229291023686528f, 0.0011276078876107931f, 0.0016369350487366319f, 0.0012042662128806114f, 0.0011012312024831772f, 0.0008106465684249997f, 0.0006937983562238514f, 0.0006925734924152493f, 0.001038451329804957f, 0.0008748985710553825f, 0.0009445660980418324f, 0.0009538251906633377f, 0.0011808325070887804f, 0.0010334838880226016f, 0.0011115006636828184f, 0.000976897426880896f, 0.0010987035930156708f, 0.0009933733381330967f, 0.0009943614713847637f, 0.0009350391919724643f, 0.0009299445664510131f, 0.0008569203200750053f, 0.00132123997900635f, 0.0008784619276411831f, 0.0009519520099274814f, 0.001022176118567586f, 0.0008224427001550794f, 0.0012470063520595431f, 0.0009890979854390025f, 0.0010681450366973877f, 0.001388160977512598f, 0.0011342157376930118f, 0.0008145542233251035f, 0.0007148635922931135f, 0.0010323984315618873f, 0.0010196020593866706f, 0.0007893949514254928f, 0.0011219262378290296f, 0.0012124471832066774f, 0.0008002216927707195f, 0.0009970939718186855f, 0.001040701987221837f, 0.0008431897731497884f, 0.0008727841777727008f, 0.0007743414025753736f, 0.0009804728906601667f, 0.0009952293476089835f, 0.000777445500716567f, 0.0008611080702394247f, 0.0009171545971184969f, 0.0012533193221315742f, 0.0009245112887583673f, 0.001204957952722907f, 0.001052979612722993f, 0.0011235777055844665f, 0.0012554118875414133f, 0.0010829350212588906f, 0.0013322223676368594f, 0.0009120528702624142f, 0.0008552719955332577f, 0.0008678293670527637f, 0.0008906550356186926f, 0.0009928703075274825f, 0.0010789901716634631f, 0.0006314910133369267f, 0.0011510226177051663f, 0.001208779402077198f, 0.0009708559955470264f, 0.0010112294694408774f, 0.0012189347762614489f, 0.0010835498105734587f, 0.0009463485912419856f, 0.0012007408076897264f, 0.0011407197453081608f, 0.0008922693668864667f, 0.0008477563387714326f, 0.0012089500669389963f, 0.0009470699005760252f, 0.0012631607241928577f, 0.0007697450928390026f, 0.0009213658049702644f, 0.0011202178429812193f, 0.0018020144198089838f, 0.0010019456967711449f, 0.000909693306311965f, 0.0012156538432464004f, 0.0008457096409983933f, 0.0008933878852985799f, 0.0009524272754788399f, 0.0011331812711432576f, 0.0012008120538666844f, 0.0011788316769525409f, 0.0010170398745685816f, 0.0011746493401005864f, 0.0008913065539672971f, 0.0009474287508055568f, 0.0015876361867412925f, 0.000861586828250438f, 0.0011115805245935917f, 0.0008148675551638007f, 0.0011960221454501152f, 0.0009922647150233388f, 0.0013370541855692863f, 0.0011121338466182351f, 0.0010276013053953648f, 0.0008732965216040611f, 0.0010765554616227746f, 0.0011376880574971437f, 0.0007713203085586429f, 0.0013050874695181847f, 0.001380926463752985f, 0.0009714512270875275f, 0.0014203139580786228f, 0.0009645686950534582f, 0.0007880878983996809f, 0.0009052318637259305f, 0.0014348195400089025f, 0.001159402308985591f, 0.0011033817427232862f, 0.0008800345822237432f, 0.0010082145454362035f, 0.0010754927061498165f, 0.0008535419474355876f, 0.000740615651011467f, 0.001108334749005735f, 0.0007436231826432049f, 0.0012711617164313793f, 0.0006290333694778383f, 0.0016055559972301126f, 0.0008034090860746801f, 0.000785298936534673f, 0.0010438909521326423f, 0.001257322495803237f, 0.0007707556360401213f, 0.0010829666862264276f, 0.0008953617652878165f, 0.001560572418384254f, 0.0012860505376011133f, 0.0010430851252749562f, 0.0011796379694715142f, 0.0009503563051111996f, 0.0009236914338544011f, 0.0013084299862384796f, 0.0011952181812375784f, 0.0009068269864656031f, 0.0011740929912775755f, 0.0008508036262355745f, 0.0014013362815603614f, 0.0012737688375636935f, 0.0012876368127763271f, 0.0011495692888274789f, 0.0011080264812335372f, 0.0011391191510483623f, 0.0007990850717760623f, 0.000904459971934557f, 0.001148783485405147f, 0.0008858698420226574f, 0.0009444981114938855f, 0.0011607861379161477f, 0.001002990291453898f, 0.0010711436625570059f, 0.001331485458649695f, 0.00118889263831079f, 0.0008120707352645695f, 0.0008407405111938715f, 0.0009247431880794466f, 0.0007258486584760249f, 0.001141034415923059f, 0.0011431410675868392f, 0.0008345759124495089f, 0.0013460248010233045f, 0.0009297460783272982f, 0.0009797123493626714f, 0.0011245354544371367f, 0.0008780307834967971f, 0.0007878136239014566f, 0.0009379849070683122f, 0.0009597808821126819f, 0.0008264548378065228f, 0.001165843801572919f, 0.0009269862785004079f, 0.0012942841276526451f, 0.0011103489669039845f, 0.0010576351778581738f, 0.0007256126264110208f, 0.0009348100866191089f, 0.0011088718893006444f, 0.0008382175583392382f, 0.0013172721955925226f, 0.0008123913430608809f, 0.0013714844826608896f, 0.0011542763095349073f, 0.0010576366912573576f, 0.0011274375719949603f, 0.0009072930552065372f, 0.0009942133910953999f, 0.0008456265786662698f, 0.0009271092130802572f, 0.0011310945264995098f, 0.0007262194994837046f, 0.0008937885286286473f, 0.0010237167589366436f, 0.0008636284619569778f, 0.0009339788812212646f, 0.0009107313817366958f, 0.0012380308471620083f, 0.0008232135442085564f, 0.001055610366165638f, 0.0011093753855675459f, 0.0008566685719415545f, 0.0009665143443271518f, 0.0007704688468948007f, 0.0007602618425153196f, 0.00133584497962147f, 0.0013756955740973353f, 0.0012215740280225873f, 0.0013677333481609821f, 0.0011737507302314043f, 0.0009871446527540684f, 0.0009488481446169317f, 0.0012924360344186425f, 0.0009828016627579927f, 0.0012128246016800404f, 0.0010522505035623908f, 0.0009106951183639467f, 0.0009573763818480074f, 0.0011264276690781116f, 0.0010308143682777882f, 0.0008470651810057461f, 0.0013299667043611407f, 0.0009954058332368731f, 0.0009576914017088711f, 0.0009002252481877804f, 0.0009443721501156688f, 0.0008397307246923447f, 0.0007916301256045699f, 0.0008100004633888602f, 0.0009525875211693347f, 0.0008114025695249438f, 0.0009819659171625972f, 0.0010671017225831747f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005406538024544716f),
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
    AI_PACK_INTQ_SCALE(0.10380958020687103f),
    AI_PACK_INTQ_ZP(27)))

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
    AI_PACK_INTQ_SCALE(0.11215104162693024f),
    AI_PACK_INTQ_ZP(3)))

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
    AI_PACK_INTQ_SCALE(0.09100977331399918f),
    AI_PACK_INTQ_ZP(1)))

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
    AI_PACK_INTQ_SCALE(0.06282868981361389f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11767841130495071f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.08109612762928009f),
    AI_PACK_INTQ_ZP(1)))

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
    AI_PACK_INTQ_SCALE(0.07085062563419342f),
    AI_PACK_INTQ_ZP(-15)))

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
    AI_PACK_INTQ_SCALE(0.12409693747758865f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.06498268246650696f),
    AI_PACK_INTQ_ZP(13)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14740191400051117f),
    AI_PACK_INTQ_ZP(1)))

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
    AI_PACK_INTQ_SCALE(0.0828792080283165f),
    AI_PACK_INTQ_ZP(-11)))

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
    AI_PACK_INTQ_SCALE(0.0579865388572216f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10900373011827469f),
    AI_PACK_INTQ_ZP(-2)))

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
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1, 11, 11),
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
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1, 11, 11),
  1, &nl_70_output_array, &nl_70_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conversion_71_output, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
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
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
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
  AI_SHAPE_INIT(4, 1280, 11, 1, 1), AI_STRIDE_INIT(4, 1, 1280, 14080, 14080),
  1, &gemm_69_weights_array, &gemm_69_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 11, 1, 1), AI_STRIDE_INIT(4, 4, 4, 44, 44),
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


AI_STATIC_CONST ai_i32 nl_70_nl_params_data[] = { 1356715392, 25, -62 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 262892, 1, 1),
    262892, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 262892, 1, 1),
      262892, NULL, NULL)
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
    
    nl_70_output_array.data = AI_PTR(g_network_activations_map[0] + 44);
    nl_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 44);
    
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
    gemm_69_bias_array.data = AI_PTR(g_network_weights_map[0] + 262848);
    gemm_69_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 262848);
    
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
      
      .n_macc            = 36465414,
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
      
      .n_macc            = 36465414,
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

