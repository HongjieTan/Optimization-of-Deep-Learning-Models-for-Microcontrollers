/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Jan  5 15:15:36 2025
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
#define AI_NETWORK_MODEL_SIGNATURE     "8ff396b707ea45fb14144270157dc3ea"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sun Jan  5 15:15:36 2025"

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
  NULL, NULL, 5, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_29_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18816, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conversion_71_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 5, AI_STATIC)
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
  NULL, NULL, 5, AI_STATIC)
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
  NULL, NULL, 6400, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  gemm_69_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 5, AI_STATIC)
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
    AI_PACK_INTQ_SCALE(0.060459211468696594f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.12608902156352997f),
    AI_PACK_INTQ_ZP(8)))

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
    AI_PACK_INTQ_SCALE(0.05555126443505287f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.144154354929924f),
    AI_PACK_INTQ_ZP(8)))

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
    AI_PACK_INTQ_SCALE(0.06757312268018723f),
    AI_PACK_INTQ_ZP(-16)))

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
    AI_PACK_INTQ_SCALE(0.0653255358338356f),
    AI_PACK_INTQ_ZP(3)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1074828952550888f),
    AI_PACK_INTQ_ZP(4)))

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
    AI_PACK_INTQ_SCALE(0.06263533234596252f),
    AI_PACK_INTQ_ZP(-6)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14483481645584106f),
    AI_PACK_INTQ_ZP(3)))

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
    AI_PACK_INTQ_SCALE(0.06195126846432686f),
    AI_PACK_INTQ_ZP(-8)))

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
    AI_PACK_INTQ_SCALE(0.06762777268886566f),
    AI_PACK_INTQ_ZP(-7)))

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
    AI_PACK_INTQ_SCALE(0.11040999740362167f),
    AI_PACK_INTQ_ZP(-5)))

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
    AI_PACK_INTQ_SCALE(0.06689818948507309f),
    AI_PACK_INTQ_ZP(-7)))

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
    AI_PACK_INTQ_SCALE(0.15338410437107086f),
    AI_PACK_INTQ_ZP(-13)))

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
    AI_PACK_INTQ_SCALE(0.09646680951118469f),
    AI_PACK_INTQ_ZP(1)))

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
    AI_PACK_INTQ_SCALE(0.011418185196816921f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.24974425137043f),
    AI_PACK_INTQ_ZP(20)))

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
    AI_PACK_INTQ_SCALE(0.007519247941672802f, 0.005578638520091772f, 0.004905782174319029f, 0.010148691944777966f, 0.004316558595746756f, 0.01083223894238472f, 0.008760007098317146f, 0.002660440979525447f),
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
    AI_PACK_INTQ_SCALE(0.009398146532475948f, 0.03284800797700882f, 0.008787908591330051f, 0.015891030430793762f, 0.017030252143740654f, 0.007235182914882898f, 0.009960629045963287f, 0.018469175323843956f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006511256098747253f, 0.009903835132718086f, 0.006131873931735754f, 0.005395445507019758f, 0.00533909909427166f, 0.006385231856256723f, 0.008252297528088093f, 0.008756239898502827f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0037169239949434996f, 0.005607763770967722f, 0.0036808380391448736f, 0.004024181980639696f, 0.0038017150945961475f, 0.0040198941715061665f, 0.0029603128787130117f, 0.004019512329250574f, 0.004796038381755352f, 0.005181232001632452f, 0.002232407918199897f, 0.0036725846584886312f, 0.0033705388195812702f, 0.0055860192514956f, 0.0027075689285993576f, 0.0051808664575219154f, 0.0038918512873351574f, 0.0034235110506415367f, 0.003801550017669797f, 0.003958393819630146f, 0.005385986063629389f, 0.005357376765459776f, 0.006647935602813959f, 0.004251014441251755f, 0.005107911303639412f, 0.00562369404360652f, 0.004154580645263195f, 0.0038376408629119396f, 0.0044649927876889706f, 0.005215163342654705f, 0.005788634531199932f, 0.006168466527014971f, 0.0037852327805012465f, 0.004350860137492418f, 0.003748459741473198f, 0.005243242252618074f, 0.0042882803827524185f, 0.0037229941226541996f, 0.00404735142365098f, 0.00595229584723711f, 0.004524671472609043f, 0.003892636625096202f, 0.005578654818236828f, 0.004644830245524645f, 0.005210415925830603f, 0.00555129861459136f, 0.008200920186936855f, 0.004238837864249945f),
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
    AI_PACK_INTQ_SCALE(0.0039955186657607555f, 0.003258531680330634f, 0.011998726055026054f, 0.006239481270313263f, 0.006931078154593706f, 0.008734088391065598f, 0.015783390030264854f, 0.006388859357684851f, 0.01125719677656889f, 0.004947450943291187f, 0.004073763731867075f, 0.004551663529127836f, 0.006344442721456289f, 0.00618124520406127f, 0.01771537773311138f, 0.02003544382750988f, 0.0046460009180009365f, 0.0041202581487596035f, 0.006251663900911808f, 0.005412254016846418f, 0.008776519447565079f, 0.01052792090922594f, 0.003289487212896347f, 0.011237516067922115f, 0.010026653297245502f, 0.00830794870853424f, 0.005148289725184441f, 0.018058860674500465f, 0.004896183032542467f, 0.011262045241892338f, 0.004082893021404743f, 0.008993178606033325f, 0.010568992234766483f, 0.0035264852922409773f, 0.00446048891171813f, 0.00872789602726698f, 0.0065316068939864635f, 0.008081373758614063f, 0.004325976129621267f, 0.008003161288797855f, 0.00475864065811038f, 0.009913492947816849f, 0.007568675093352795f, 0.015803862363100052f, 0.005071290303021669f, 0.007800217717885971f, 0.009846345521509647f, 0.006476456765085459f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_8_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002535503590479493f, 0.003525569336488843f, 0.0039041463751345873f, 0.004345424473285675f, 0.002382735488936305f, 0.0033000889234244823f, 0.0034932740963995457f, 0.0031389545183628798f),
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
    AI_PACK_INTQ_SCALE(0.003908468876034021f, 0.005008998326957226f, 0.0049505289644002914f, 0.005022651515901089f, 0.004580793436616659f, 0.004639572463929653f, 0.005463202018290758f, 0.006205978337675333f, 0.005136108957231045f, 0.006201861891895533f, 0.005143356509506702f, 0.003933746367692947f, 0.005075931549072266f, 0.0046379053965210915f, 0.005194755271077156f, 0.003363017924129963f, 0.005357034504413605f, 0.007078858092427254f, 0.005174208898097277f, 0.004056987352669239f, 0.0038258025888353586f, 0.004143629223108292f, 0.0037025497294962406f, 0.005064042750746012f, 0.00472155911847949f, 0.003768935101106763f, 0.004256884567439556f, 0.005183493252843618f, 0.005266421474516392f, 0.005039533134549856f, 0.0032875542528927326f, 0.005313402973115444f, 0.0036130372900515795f, 0.004316338803619146f, 0.005039434880018234f, 0.003241361351683736f, 0.005248197820037603f, 0.0028007100336253643f, 0.004844220820814371f, 0.005727812182158232f, 0.003318639239296317f, 0.0050081899389624596f, 0.006443692836910486f, 0.00419657351449132f, 0.003464227542281151f, 0.005081202834844589f, 0.004235889762639999f, 0.006560288369655609f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008392440155148506f, 0.009256493300199509f, 0.004468607250601053f, 0.008569847792387009f, 0.006861524656414986f, 0.008591360412538052f, 0.007359698414802551f, 0.016319213435053825f, 0.012010818347334862f, 0.007780963089317083f, 0.009613420814275742f, 0.009639873169362545f, 0.009745285846292973f, 0.006257131230086088f, 0.008954300545156002f, 0.007464155554771423f, 0.003690171055495739f, 0.006387980189174414f, 0.005884083919227123f, 0.006052142009139061f, 0.007559523917734623f, 0.004360673483461142f, 0.005139847751706839f, 0.003871466964483261f, 0.006443730555474758f, 0.010299787856638432f, 0.003940004389733076f, 0.014618946239352226f, 0.007832338102161884f, 0.00936618261039257f, 0.007741264998912811f, 0.005634828470647335f, 0.00466324295848608f, 0.015590467490255833f, 0.007751911412924528f, 0.005688769277185202f, 0.004089700523763895f, 0.007663439959287643f, 0.009921899065375328f, 0.013183838687837124f, 0.007183453533798456f, 0.008504962548613548f, 0.006903484463691711f, 0.009285307489335537f, 0.003822007682174444f, 0.009095843881368637f, 0.005858785007148981f, 0.007523276377469301f),
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
    AI_PACK_INTQ_SCALE(0.0027138846926391125f, 0.0026952887419611216f, 0.0037164061795920134f, 0.002931251423433423f, 0.0033875429071485996f, 0.002912901807576418f, 0.002493241336196661f, 0.002878863364458084f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002843674272298813f, 0.002952957060188055f, 0.0033979204017668962f, 0.0031721903942525387f, 0.0036622670013457537f, 0.002247914904728532f, 0.003530003596097231f, 0.0035551846958696842f, 0.003718356601893902f, 0.0038002589717507362f, 0.002631512237712741f, 0.003925316967070103f, 0.003010255517438054f, 0.0035889174323529005f, 0.002562456065788865f, 0.0034303474240005016f, 0.0028998597990721464f, 0.002066242741420865f, 0.002508630743250251f, 0.0036922867875546217f, 0.003307930426672101f, 0.0030235128942877054f, 0.003176749451085925f, 0.0024296545889228582f, 0.0032705022022128105f, 0.0030508944764733315f, 0.0029649713542312384f, 0.003009235253557563f, 0.002840764820575714f, 0.003158987732604146f, 0.0019989502616226673f, 0.002619054401293397f, 0.0037893634289503098f, 0.0022679835092276335f, 0.002638261066749692f, 0.0025261403061449528f, 0.0031049989629536867f, 0.0029197712428867817f, 0.0030912277288734913f, 0.0036570171359926462f, 0.0027995703276246786f, 0.003192298812791705f, 0.003408938879147172f, 0.0026038221549242735f, 0.003058970905840397f, 0.002184453886002302f, 0.002725176513195038f, 0.0021713892929255962f),
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
    AI_PACK_INTQ_SCALE(0.008176460862159729f, 0.004599009640514851f, 0.004534509498625994f, 0.009447237476706505f, 0.007009251043200493f, 0.0053439936600625515f, 0.0041230106726288795f, 0.007890515960752964f, 0.008576963096857071f, 0.0036832455080002546f, 0.007140561938285828f, 0.011082222685217857f, 0.010213254019618034f, 0.0032885163091123104f, 0.011373711749911308f, 0.005699630826711655f, 0.0072427717968821526f, 0.011975530534982681f, 0.006184977479279041f, 0.0026412131264805794f, 0.003780704690143466f, 0.003627522150054574f, 0.006495623849332333f, 0.0060762204229831696f, 0.0069753858260810375f, 0.012515833601355553f, 0.0064668962731957436f, 0.006084378808736801f, 0.011040437035262585f, 0.006909978576004505f, 0.005845749285072088f, 0.008126878179609776f, 0.004433565307408571f, 0.004100534599274397f, 0.00564018776640296f, 0.004919898230582476f, 0.01650899648666382f, 0.007634987588971853f, 0.005187339149415493f, 0.004907829686999321f, 0.00526987062767148f, 0.011711805127561092f, 0.008544394746422768f, 0.005050817038863897f, 0.004334133118391037f, 0.007006864063441753f, 0.0058081732131540775f, 0.00572626106441021f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003006923710927367f, 0.0034204020630568266f, 0.0032370698172599077f, 0.002587988507002592f, 0.0030560623854398727f, 0.0030147891957312822f, 0.00271658506244421f, 0.0037666847929358482f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_17_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00597399054095149f, 0.002682892605662346f, 0.003987942822277546f, 0.0028194808401167393f, 0.005064868833869696f, 0.006649763789027929f, 0.003302594879642129f, 0.003715322120115161f, 0.003655024105682969f, 0.005485926754772663f, 0.004488459788262844f, 0.0040432787500321865f, 0.004385198000818491f, 0.005523082800209522f, 0.004545651376247406f, 0.004540836904197931f, 0.0032237209379673004f, 0.00350612448528409f, 0.0036430831532925367f, 0.003431330667808652f, 0.004223654977977276f, 0.0037442792672663927f, 0.0030571564566344023f, 0.0053356001153588295f, 0.003250052919611335f, 0.004605891648679972f, 0.004599697422236204f, 0.005033628549426794f, 0.003324100747704506f, 0.00641003530472517f, 0.003959367983043194f, 0.004709939938038588f, 0.003816569922491908f, 0.005287001375108957f, 0.005023017525672913f, 0.00472481781616807f, 0.0033457090612500906f, 0.0035493499599397182f, 0.006382273975759745f, 0.004264175426214933f, 0.002791705308482051f, 0.004388594534248114f, 0.0047068726271390915f, 0.003924807533621788f, 0.003981978166848421f, 0.003863748861476779f, 0.0047298455610871315f, 0.006551618222147226f),
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
    AI_PACK_INTQ_SCALE(0.004664011299610138f, 0.005410088691860437f, 0.015431025065481663f, 0.006945035420358181f, 0.0068642981350421906f, 0.0034625844564288855f, 0.008266940712928772f, 0.007381062489002943f, 0.005391099024564028f, 0.008608219213783741f, 0.008168342523276806f, 0.007026282604783773f, 0.01396694965660572f, 0.006706788670271635f, 0.00863618589937687f, 0.008805781602859497f, 0.008329113014042377f, 0.006392935756593943f, 0.003843844635412097f, 0.005273464135825634f, 0.009965815581381321f, 0.004989346489310265f, 0.00256290752440691f, 0.010238909162580967f, 0.003769084345549345f, 0.006534004583954811f, 0.006926747504621744f, 0.003625147510319948f, 0.005110975820571184f, 0.0074050575494766235f, 0.008227276615798473f, 0.00594874145463109f, 0.010207840241491795f, 0.007922093383967876f, 0.003948235884308815f, 0.008115953765809536f, 0.0048148962669074535f, 0.004741603042930365f, 0.0048243761993944645f, 0.008390652947127819f, 0.012842630036175251f, 0.00620597368106246f, 0.003447210183367133f, 0.006008180323988199f, 0.004131616093218327f, 0.0037611909210681915f, 0.009882812388241291f, 0.011896179057657719f),
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
    AI_PACK_INTQ_SCALE(0.0027972273528575897f, 0.0029283249750733376f, 0.0028317649848759174f, 0.002786120167002082f, 0.0026798597536981106f, 0.00313959619961679f, 0.0023570298217236996f, 0.002456346061080694f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001960924593731761f, 0.003451676107943058f, 0.002902096835896373f, 0.0024973356630653143f, 0.0016124587273225188f, 0.002327622612938285f, 0.0032719478476792574f, 0.0038169119507074356f, 0.0018288077553734183f, 0.0029913310427218676f, 0.0029725413769483566f, 0.0028708770405501127f, 0.0028956772293895483f, 0.0032034285832196474f, 0.003061934607103467f, 0.0026821279898285866f, 0.0022503158543258905f, 0.0024458428379148245f, 0.0035284163895994425f, 0.003293342888355255f, 0.0019569292198866606f, 0.0023716269060969353f, 0.0022128198761492968f, 0.0035140125546604395f, 0.004033661913126707f, 0.0035915884654968977f, 0.0019376499112695456f, 0.0026625918690115213f, 0.0032622667495161295f, 0.0028727478347718716f, 0.0034256218932569027f, 0.0036957699339836836f, 0.0019033506978303194f, 0.0027416476514190435f, 0.003548637731000781f, 0.003465974470600486f, 0.003484621411189437f, 0.003472400363534689f, 0.0018284705001860857f, 0.0026295674033463f, 0.002856371458619833f, 0.0035832361318171024f, 0.0035585355944931507f, 0.002994377166032791f, 0.004208325408399105f, 0.003205634653568268f, 0.003012503031641245f, 0.0031736569944769144f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005823217332363129f, 0.004830053076148033f, 0.008935349993407726f, 0.014693229459226131f, 0.006825510878115892f, 0.005038443021476269f, 0.01367688924074173f, 0.0037260891404002905f, 0.0040512001141905785f, 0.007088703569024801f, 0.010740479454398155f, 0.004843971226364374f, 0.013315772637724876f, 0.008108134381473064f, 0.004021665081381798f, 0.0047765919007360935f, 0.002383155981078744f, 0.00754002807661891f, 0.00906330905854702f, 0.008263559080660343f, 0.0038199119735509157f, 0.007237777579575777f, 0.008148997090756893f, 0.005427671130746603f, 0.005261565558612347f, 0.00913393683731556f, 0.013264155015349388f, 0.0055193714797496796f, 0.008645603433251381f, 0.004108469933271408f, 0.006286616902798414f, 0.0029607447795569897f, 0.006394291762262583f, 0.012270218692719936f, 0.009905577637255192f, 0.004334334749728441f, 0.007298237178474665f, 0.011007199063897133f, 0.007095270790159702f, 0.0054595014080405235f, 0.011655328795313835f, 0.009063247591257095f, 0.010010698810219765f, 0.010533244349062443f, 0.005517303477972746f, 0.010248466394841671f, 0.009965152479708195f, 0.008764395490288734f),
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
    AI_PACK_INTQ_SCALE(0.003020763397216797f, 0.0028683245182037354f, 0.0030018214602023363f, 0.002482767216861248f, 0.0036060793790966272f, 0.002936794888228178f, 0.002730675507336855f, 0.003145854687318206f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_25_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024106295313686132f, 0.0015527845825999975f, 0.0022575422190129757f, 0.002887250389903784f, 0.0022741821594536304f, 0.0023731442634016275f, 0.0015379908727481961f, 0.0021082868333905935f, 0.0014449378941208124f, 0.0010889105033129454f, 0.0016651512123644352f, 0.0018116369610652328f, 0.0013780712615698576f, 0.001217470271512866f, 0.002457753289490938f, 0.0024446346797049046f, 0.0021130612585693598f, 0.0025230140890926123f, 0.002868951763957739f, 0.0017496127402409911f, 0.0026505819987505674f, 0.0021490035578608513f, 0.002155665075406432f, 0.0022661639377474785f, 0.0034072594717144966f, 0.0014923037961125374f, 0.0015989055391401052f, 0.0017610222566872835f, 0.0027118173893541098f, 0.0018003560835495591f, 0.0016267843311652541f, 0.002434945898130536f, 0.0022826388012617826f, 0.0027736539486795664f, 0.0013825239147990942f, 0.00258676172234118f, 0.0022286653984338045f, 0.0019487150711938739f, 0.001447284477762878f, 0.0026227962225675583f, 0.002152668545022607f, 0.0031086590606719255f, 0.002100511221215129f, 0.0020529392641037703f, 0.001666547148488462f, 0.0024662346113473177f, 0.0018844653386622667f, 0.002531814854592085f),
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
    AI_PACK_INTQ_SCALE(0.007843132130801678f, 0.007887066341936588f, 0.006512513849884272f, 0.008015907369554043f, 0.01198463886976242f, 0.006142262369394302f, 0.009474638849496841f, 0.005112703423947096f, 0.005617774557322264f, 0.009374729357659817f, 0.007414803374558687f, 0.007552900351583958f, 0.008950403891503811f, 0.00876610353589058f, 0.004410950932651758f, 0.0060235001146793365f, 0.00586714455857873f, 0.006762517616152763f, 0.006894990801811218f, 0.005394077394157648f, 0.007703640963882208f, 0.003624460892751813f, 0.005887165199965239f, 0.005078264977782965f, 0.0061645801179111f, 0.005697809625416994f, 0.0035532498732209206f, 0.0033566683996468782f, 0.0040585133247077465f, 0.004674425348639488f, 0.005775074940174818f, 0.006216997280716896f, 0.011636330746114254f, 0.004576920066028833f, 0.003480798564851284f, 0.006240931339561939f, 0.002596509177237749f, 0.0036181232426315546f, 0.010018675588071346f, 0.0043310606852173805f, 0.006815608590841293f, 0.00531442416831851f, 0.005609229207038879f, 0.0036440847907215357f, 0.005566801410168409f, 0.002722583943977952f, 0.004782895557582378f, 0.003186467569321394f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0038524277042597532f, 0.002807815559208393f, 0.003029879415407777f, 0.004536602180451155f, 0.0031472716946154833f, 0.003844399470835924f, 0.004053883254528046f, 0.003307014936581254f, 0.003733214922249317f, 0.003129306249320507f, 0.004739570431411266f, 0.002819770248606801f, 0.004042176064103842f, 0.005297195166349411f, 0.0033892346546053886f, 0.0030402555130422115f),
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
    AI_PACK_INTQ_SCALE(0.003305681049823761f, 0.0025031021796166897f, 0.0037667453289031982f, 0.0031939463224262f, 0.004636677447706461f, 0.0025562546215951443f, 0.004706572275608778f, 0.0030302591621875763f, 0.002275582170113921f, 0.002331268275156617f, 0.002192364539951086f, 0.0023552405182272196f, 0.002759648021310568f, 0.003210128052160144f, 0.0032944525592029095f, 0.004414788447320461f, 0.003144717076793313f, 0.0028179658111184835f, 0.0031338531989604235f, 0.0027683039661496878f, 0.0021565367933362722f, 0.0036824452690780163f, 0.003394544357433915f, 0.0032118905801326036f, 0.0021276178304105997f, 0.004182979464530945f, 0.004042651504278183f, 0.003979281987994909f, 0.003017971059307456f, 0.005287215579301119f, 0.002736675087362528f, 0.004241299349814653f, 0.0034138562623411417f, 0.004340809304267168f, 0.002625969471409917f, 0.0026103854179382324f, 0.0027571730315685272f, 0.004001293797045946f, 0.002656356431543827f, 0.0026946463622152805f, 0.00232031405903399f, 0.00328993983566761f, 0.003165224799886346f, 0.004163700621575117f, 0.003395447973161936f, 0.0030942356679588556f, 0.0031400155276060104f, 0.0037018959410488605f, 0.0028256308287382126f, 0.0034468856174498796f, 0.003041959134861827f, 0.003506659995764494f, 0.0028947412502020597f, 0.0034914591815322638f, 0.0030824076384305954f, 0.003976819105446339f, 0.0037173316814005375f, 0.004887596238404512f, 0.003314659930765629f, 0.002331577707082033f, 0.002349055139347911f, 0.0025856385473161936f, 0.002710964297875762f, 0.0023282228503376245f, 0.004456819035112858f, 0.0029590099584311247f, 0.003441344015300274f, 0.0032317780423909426f, 0.0035404879599809647f, 0.002443922683596611f, 0.003458553459495306f, 0.003887553233653307f, 0.0031501154880970716f, 0.0020289935637265444f, 0.003079062793403864f, 0.0029353054706007242f, 0.0031963034998625517f, 0.0034771941136568785f, 0.003378434106707573f, 0.004087050911039114f, 0.002008227165788412f, 0.0037515892181545496f, 0.004474563989788294f, 0.0027215825393795967f, 0.0025300150737166405f, 0.0022376812994480133f, 0.004985271021723747f, 0.003263612277805805f, 0.0038661372382193804f, 0.003367446828633547f, 0.002475002082064748f, 0.0030488662887364626f, 0.0026323774363845587f, 0.0028640059754252434f, 0.004654073156416416f, 0.0024049226194620132f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006925579626113176f, 0.0062807295471429825f, 0.008835962973535061f, 0.009419083595275879f, 0.007109331898391247f, 0.00587120745331049f, 0.0075766546651721f, 0.010231409221887589f, 0.007829289883375168f, 0.008608115836977959f, 0.0050901263020932674f, 0.007877611555159092f, 0.00349022401496768f, 0.010647600516676903f, 0.006759477313607931f, 0.0052376072853803635f, 0.010056404396891594f, 0.006039511878043413f, 0.010306105017662048f, 0.011279776692390442f, 0.014704771339893341f, 0.007385368924587965f, 0.005274058319628239f, 0.005557539872825146f, 0.004605032503604889f, 0.0037717483937740326f, 0.007540733553469181f, 0.005040264688432217f, 0.003768668044358492f, 0.009559488855302334f, 0.008443381637334824f, 0.007874974049627781f, 0.006506879348307848f, 0.006356026045978069f, 0.01797131821513176f, 0.0039572156965732574f, 0.01288125105202198f, 0.006499387789517641f, 0.00655673211440444f, 0.00783576350659132f, 0.012934836558997631f, 0.007837907411158085f, 0.008714627474546432f, 0.004892997443675995f, 0.007792933844029903f, 0.006595719140022993f, 0.004435315728187561f, 0.005466009024530649f, 0.00816743541508913f, 0.0065455129370093346f, 0.007968876510858536f, 0.005858240649104118f, 0.00721364002674818f, 0.00708739273250103f, 0.007865236140787601f, 0.008807304315268993f, 0.0054769860580563545f, 0.00881572812795639f, 0.007843573577702045f, 0.01004671398550272f, 0.005369615275412798f, 0.004769086837768555f, 0.009568861685693264f, 0.006631210446357727f, 0.005467711947858334f, 0.011878428049385548f, 0.007862119004130363f, 0.008864927105605602f, 0.005871819332242012f, 0.008472138084471226f, 0.004838575609028339f, 0.009667820297181606f, 0.008664058521389961f, 0.006568594370037317f, 0.00914987362921238f, 0.004281685221940279f, 0.008888821117579937f, 0.008171850815415382f, 0.00996194127947092f, 0.004092186223715544f, 0.010797297582030296f, 0.007314153015613556f, 0.007831746712327003f, 0.004763420205563307f, 0.007609605323523283f, 0.005363647826015949f, 0.009317555464804173f, 0.007204596884548664f, 0.0057910410687327385f, 0.004854820668697357f, 0.008503442630171776f, 0.009459911845624447f, 0.010239845141768456f, 0.005336948670446873f, 0.005370099097490311f, 0.00505487248301506f),
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
    AI_PACK_INTQ_SCALE(0.002565259812399745f, 0.002094158437103033f, 0.002135481685400009f, 0.002395452233031392f, 0.002740526106208563f, 0.0022237945813685656f, 0.0022258535027503967f, 0.002211430110037327f, 0.0019517650362104177f, 0.003046587808057666f, 0.002470732666552067f, 0.002063112100586295f, 0.0024714278988540173f, 0.0016632894985377789f, 0.002126910025253892f, 0.0022109050769358873f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_33_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0016979381907731295f, 0.0016505641397088766f, 0.001756332698278129f, 0.001648549921810627f, 0.0023453938774764538f, 0.0031711782794445753f, 0.0016345465555787086f, 0.0022467179223895073f, 0.002723573474213481f, 0.0014284818898886442f, 0.0025314560625702143f, 0.002337224083021283f, 0.0018639867193996906f, 0.0026907690335065126f, 0.002600631909444928f, 0.002254097955301404f, 0.0021193926222622395f, 0.002619966398924589f, 0.0034527750685811043f, 0.0030596128199249506f, 0.0017359749181196094f, 0.0013640266843140125f, 0.0021317354403436184f, 0.002187777077779174f, 0.0017389090498909354f, 0.003382360329851508f, 0.003435660619288683f, 0.0019563992973417044f, 0.0021515004336833954f, 0.0014609688660129905f, 0.0016033408464863896f, 0.0020275842398405075f, 0.0024089489597827196f, 0.0018448822665959597f, 0.0018695031758397818f, 0.0026537885423749685f, 0.0017818398773670197f, 0.0019833724945783615f, 0.002149503445252776f, 0.002008286537602544f, 0.0023689402732998133f, 0.0025803069584071636f, 0.0033251899294555187f, 0.0015173538122326136f, 0.0015350893372669816f, 0.0015239882050082088f, 0.0019023698987439275f, 0.001950716134160757f, 0.002000879030674696f, 0.0023527664598077536f, 0.002025067340582609f, 0.0022129015997052193f, 0.003324638120830059f, 0.002155466005206108f, 0.001816081814467907f, 0.0024513087701052427f, 0.003033078508451581f, 0.0019094703020527959f, 0.003214965108782053f, 0.0027639775071293116f, 0.0021347098518162966f, 0.0018414428923279047f, 0.002575204474851489f, 0.0031498370226472616f, 0.0030994233675301075f, 0.0022818048018962145f, 0.0024385382421314716f, 0.002673001028597355f, 0.002064369386062026f, 0.002064816188067198f, 0.0025593487080186605f, 0.0019800353329628706f, 0.0027730842120945454f, 0.0025704053696244955f, 0.0025890679098665714f, 0.0017161468276754022f, 0.0022280372213572264f, 0.0016565881669521332f, 0.0037758711259812117f, 0.0022274809889495373f, 0.002049853792414069f, 0.0019649944733828306f, 0.002696248469874263f, 0.002495305612683296f, 0.0023265972267836332f, 0.0015882115112617612f, 0.0029616793617606163f, 0.0022907836828380823f, 0.0024174100253731012f, 0.0022966316901147366f, 0.0022581692319363356f, 0.002001777058467269f, 0.0019032208947464824f, 0.0019718653056770563f, 0.0024685256648808718f, 0.0021878054831176996f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_34_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005838524084538221f, 0.007041498087346554f, 0.003401592606678605f, 0.0075715710408985615f, 0.008971525356173515f, 0.009280907921493053f, 0.006134942173957825f, 0.008286969736218452f, 0.006425804924219847f, 0.011147950775921345f, 0.009982477873563766f, 0.009340515360236168f, 0.007202750537544489f, 0.008895059116184711f, 0.010642698965966702f, 0.0074265627190470695f, 0.010357574559748173f, 0.006048533599823713f, 0.005513438954949379f, 0.006641972344368696f, 0.010874283500015736f, 0.00428794464096427f, 0.00539212953299284f, 0.005643089301884174f, 0.004357381723821163f, 0.008172454312443733f, 0.006530026439577341f, 0.003965652547776699f, 0.00925528910011053f, 0.00761944567784667f, 0.012793228961527348f, 0.011579514481127262f, 0.006771803367882967f, 0.005851502064615488f, 0.008196747861802578f, 0.00886487402021885f, 0.007192293182015419f, 0.00656705629080534f, 0.0071718343533575535f, 0.004366918001323938f, 0.00963545124977827f, 0.012270506471395493f, 0.009115127846598625f, 0.011166641488671303f, 0.00948305707424879f, 0.006504879333078861f, 0.00329247466288507f, 0.007771787233650684f, 0.0077007547952234745f, 0.00479422602802515f, 0.006762145087122917f, 0.007246857043355703f, 0.009290524758398533f, 0.00615720497444272f, 0.0034736490342766047f, 0.00898735225200653f, 0.008829540573060513f, 0.006930523086339235f, 0.008102290332317352f, 0.010389918461441994f, 0.005234794691205025f, 0.006016061175614595f, 0.007727316115051508f, 0.008937457576394081f, 0.007083885837346315f, 0.009014169685542583f, 0.008026327937841415f, 0.009329833090305328f, 0.008526691235601902f, 0.008366618305444717f, 0.006959864869713783f, 0.008053479716181755f, 0.009883575141429901f, 0.01175457052886486f, 0.008030099794268608f, 0.008082778193056583f, 0.0065155113115906715f, 0.0080247288569808f, 0.007135725114494562f, 0.003209260292351246f, 0.007695585023611784f, 0.003396430751308799f, 0.009433743543922901f, 0.006899600382894278f, 0.0088467663154006f, 0.003974970895797014f, 0.013413852080702782f, 0.016784848645329475f, 0.00603794539347291f, 0.006370551884174347f, 0.010905096307396889f, 0.009341754019260406f, 0.0050458828918635845f, 0.007133206818252802f, 0.008754122070968151f, 0.01104698609560728f),
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
    AI_PACK_INTQ_SCALE(0.0019383667968213558f, 0.001807917607948184f, 0.0020594806410372257f, 0.0021123888436704874f, 0.0026074089109897614f, 0.002432418754324317f, 0.0020271139219403267f, 0.0017842489760369062f, 0.0020919116213917732f, 0.0021603500936180353f, 0.0016829523956403136f, 0.0017256917199119925f, 0.0023497282527387142f, 0.0018379171378910542f, 0.0023894733749330044f, 0.001697089639492333f),
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
    AI_PACK_INTQ_SCALE(0.001874940120615065f, 0.0017249365337193012f, 0.0018875434761866927f, 0.0021759530063718557f, 0.0014100070111453533f, 0.001242099329829216f, 0.0021185416262596846f, 0.002282880013808608f, 0.00131887081079185f, 0.0019818658474832773f, 0.0017398376949131489f, 0.0013228493044152856f, 0.0017234706319868565f, 0.0017239926382899284f, 0.002283134264871478f, 0.0021559938322752714f, 0.0016540605574846268f, 0.001275639166124165f, 0.002115377224981785f, 0.0022214194759726524f, 0.0022872760891914368f, 0.0024337340146303177f, 0.001978096552193165f, 0.002191673731431365f, 0.0017982395365834236f, 0.002468396909534931f, 0.0019177536014467478f, 0.0019341494189575315f, 0.0017468312289565802f, 0.0026337795425206423f, 0.0010032731806859374f, 0.0018301106756553054f, 0.001942728296853602f, 0.0016818472649902105f, 0.0017963581485673785f, 0.0011661301832646132f, 0.0014815491158515215f, 0.002192327519878745f, 0.002195937791839242f, 0.002285412047058344f, 0.001886014360934496f, 0.001644197735004127f, 0.002423411700874567f, 0.002215406158939004f, 0.0016467692330479622f, 0.002198855159804225f, 0.001996982377022505f, 0.002161613665521145f, 0.0020287276711314917f, 0.001624125288799405f, 0.0015590336406603456f, 0.0014608441852033138f, 0.0020811124704778194f, 0.0014872134197503328f, 0.001396571402437985f, 0.0011130080092698336f, 0.0011286793742328882f, 0.0021427616011351347f, 0.001596461166627705f, 0.0014899076195433736f, 0.0017087471205741167f, 0.0015957106370478868f, 0.0013427328085526824f, 0.001502981991507113f, 0.0019745398312807083f, 0.0025017610751092434f, 0.002117900876328349f, 0.001740331295877695f, 0.0012927800416946411f, 0.0016113899182528257f, 0.0017150524072349072f, 0.0014721958432346582f, 0.0011101504787802696f, 0.0016333195380866528f, 0.0018043714808300138f, 0.001800171914510429f, 0.002158961957320571f, 0.0020459769293665886f, 0.0017197031993418932f, 0.0017545269802212715f, 0.0022499419283121824f, 0.0018219291232526302f, 0.0021510061342269182f, 0.0019347021589055657f, 0.001162018976174295f, 0.0017671897076070309f, 0.001512303133495152f, 0.0017770698759704828f, 0.0017279736930504441f, 0.001968157012015581f, 0.00242115487344563f, 0.0021074332762509584f, 0.0016559576615691185f, 0.0018844689475372434f, 0.002239423571154475f, 0.0014615029795095325f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008060362190008163f, 0.008843446150422096f, 0.006567779928445816f, 0.006229252554476261f, 0.009583492763340473f, 0.006879521068185568f, 0.004886636510491371f, 0.007550974376499653f, 0.004871268756687641f, 0.007160898298025131f, 0.006892654579132795f, 0.004689057823270559f, 0.005153874401003122f, 0.011400722898542881f, 0.009843743406236172f, 0.009536096826195717f, 0.0068077282048761845f, 0.005104402080178261f, 0.006112121511250734f, 0.007554275915026665f, 0.004967613611370325f, 0.007832133211195469f, 0.01347243133932352f, 0.006145586259663105f, 0.01026491541415453f, 0.006227996200323105f, 0.005679071415215731f, 0.006236634217202663f, 0.006949054542928934f, 0.007933399640023708f, 0.007572077214717865f, 0.008963329717516899f, 0.007075563073158264f, 0.007693206425756216f, 0.005028529558330774f, 0.01404799148440361f, 0.009086398407816887f, 0.005744480527937412f, 0.008835578337311745f, 0.009472854435443878f, 0.0047727241180837154f, 0.007960689254105091f, 0.007438004016876221f, 0.005288040731102228f, 0.01230089645832777f, 0.009700218215584755f, 0.0072084530256688595f, 0.005347616504877806f, 0.007166767492890358f, 0.0077182212844491005f, 0.004987684544175863f, 0.003930704202502966f, 0.010585552081465721f, 0.012079708278179169f, 0.005980208516120911f, 0.010748242028057575f, 0.0035974481143057346f, 0.0034552947618067265f, 0.004364379681646824f, 0.009069559164345264f, 0.005156613886356354f, 0.010063191875815392f, 0.0065253428183496f, 0.011617479845881462f, 0.008637049235403538f, 0.00935732014477253f, 0.010071028023958206f, 0.005883003119379282f, 0.004632463213056326f, 0.008128144778311253f, 0.006416819524019957f, 0.004608320537954569f, 0.014615149237215519f, 0.005956131499260664f, 0.008776385337114334f, 0.006843675393611193f, 0.004279446788132191f, 0.009144666604697704f, 0.007845302112400532f, 0.007379475980997086f, 0.009154741652309895f, 0.004916607402265072f, 0.004567262250930071f, 0.005550851579755545f, 0.01096245739609003f, 0.006257266737520695f, 0.004041298758238554f, 0.005959978327155113f, 0.01134558580815792f, 0.004714305978268385f, 0.004706609062850475f, 0.006156853400170803f, 0.006683351472020149f, 0.010439020581543446f, 0.00591686274856329f, 0.007039431482553482f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_39_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017934658098965883f, 0.0023371849674731493f, 0.001673265127465129f, 0.0024265781976282597f, 0.0018523895414546132f, 0.0025372314266860485f, 0.0019362819148227572f, 0.0019650489557534456f, 0.002404315397143364f, 0.0020964022260159254f, 0.001449179369956255f, 0.0021869244519621134f, 0.0019910349510610104f, 0.0020456553902477026f, 0.0013627003645524383f, 0.00205554929561913f),
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
    AI_PACK_INTQ_SCALE(0.0015035115648061037f, 0.0012284760596230626f, 0.0017962753772735596f, 0.0015108513180166483f, 0.0016858110902830958f, 0.0017105058068409562f, 0.001749891904182732f, 0.0015367004089057446f, 0.0021963322069495916f, 0.0011414963519200683f, 0.0011215683771297336f, 0.0015085483901202679f, 0.0019425329519435763f, 0.0011805618414655328f, 0.0010425788350403309f, 0.0012846468016505241f, 0.001347426208667457f, 0.0012273213360458612f, 0.0016279910923913121f, 0.0012616856256499887f, 0.0016821060562506318f, 0.0018152536358684301f, 0.0011292881099507213f, 0.0013273784425109625f, 0.0015558496816083789f, 0.001027303165756166f, 0.0014989535557106137f, 0.0016750120557844639f, 0.0018320917151868343f, 0.0012039203429594636f, 0.001353842788375914f, 0.0012470900546759367f, 0.0021581361070275307f, 0.0018510768422856927f, 0.0014686344657093287f, 0.0012601488269865513f, 0.0012613980798050761f, 0.0015693213790655136f, 0.0013660627882927656f, 0.0018679812783375382f, 0.0016381576424464583f, 0.0011714940192177892f, 0.0018348634475842118f, 0.0011837369529530406f, 0.0017621712759137154f, 0.0017267635557800531f, 0.001150599680840969f, 0.0012548803351819515f, 0.0012616085587069392f, 0.0019131834851577878f, 0.0008614323451183736f, 0.0014481894904747605f, 0.0010845550568774343f, 0.001343653886578977f, 0.0014616958796977997f, 0.0013114118482917547f, 0.0014312905259430408f, 0.00163539859931916f, 0.0014419485814869404f, 0.0013085625832900405f, 0.001225150190293789f, 0.0014354718150570989f, 0.0013179518282413483f, 0.001307705300860107f, 0.0010239345720037818f, 0.0011359991040080786f, 0.001071868115104735f, 0.0011392083251848817f, 0.0009802321437746286f, 0.0009124706266447902f, 0.001646237215027213f, 0.0017141468124464154f, 0.001249691122211516f, 0.0011166573967784643f, 0.001403004047460854f, 0.0014311985578387976f, 0.001547379419207573f, 0.0012169858673587441f, 0.001396522275172174f, 0.0009200480999425054f, 0.0011774003505706787f, 0.001172880525700748f, 0.0015539077576249838f, 0.0016971220029518008f, 0.0012786940205842257f, 0.0012806217418983579f, 0.001927676028572023f, 0.0017477972432971f, 0.0021301996894180775f, 0.0017448411090299487f, 0.0014117887476459146f, 0.0017029886366799474f, 0.00147301668766886f, 0.0017322987550869584f, 0.001298505230806768f, 0.0017064156709238887f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_42_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 96,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0034934114664793015f, 0.0036598655860871077f, 0.010816063731908798f, 0.0056929802522063255f, 0.0073933070525527f, 0.00396467000246048f, 0.006949832197278738f, 0.00756375677883625f, 0.006474109832197428f, 0.007509403862059116f, 0.004055064637213945f, 0.008000531233847141f, 0.006953993812203407f, 0.004344670567661524f, 0.002906735287979245f, 0.008564773947000504f, 0.005108144599944353f, 0.011056181974709034f, 0.010202364064753056f, 0.0038395030423998833f, 0.007016623392701149f, 0.007290679961442947f, 0.008623543195426464f, 0.005426336545497179f, 0.006023285910487175f, 0.010407795198261738f, 0.00447356840595603f, 0.010460477322340012f, 0.008447470143437386f, 0.007173146586865187f, 0.0072598145343363285f, 0.006940626073628664f, 0.010466580279171467f, 0.00971855130046606f, 0.009245706722140312f, 0.007747379131615162f, 0.007965202443301678f, 0.008756771683692932f, 0.004771252628415823f, 0.007693223189562559f, 0.0029716112185269594f, 0.007847387343645096f, 0.008351453579962254f, 0.005471930373460054f, 0.00834235642105341f, 0.0029377248138189316f, 0.0047896141186356544f, 0.009679905138909817f, 0.00785349402576685f, 0.0033890854101628065f, 0.008730655536055565f, 0.007642991375178099f, 0.007141552399843931f, 0.009959004819393158f, 0.008590892888605595f, 0.0050581335090100765f, 0.004420088604092598f, 0.004278683569282293f, 0.009804561734199524f, 0.004830490797758102f, 0.003304384183138609f, 0.0036842727568000555f, 0.004737038630992174f, 0.003564223414286971f, 0.005385162774473429f, 0.007620650343596935f, 0.006564171984791756f, 0.013181217946112156f, 0.009280074387788773f, 0.012671190313994884f, 0.004280078690499067f, 0.005988136865198612f, 0.006923310924321413f, 0.007049459032714367f, 0.010675069876015186f, 0.011806621216237545f, 0.007572060916572809f, 0.006815043278038502f, 0.005222144536674023f, 0.0036993708927184343f, 0.004253290127962828f, 0.0066180480644106865f, 0.00817130971699953f, 0.00665349792689085f, 0.012517781928181648f, 0.0034474129788577557f, 0.007343215402215719f, 0.007695430889725685f, 0.01094010565429926f, 0.014977768063545227f, 0.005307397339493036f, 0.005181035492569208f, 0.007836948148906231f, 0.005047481041401625f, 0.008902360685169697f, 0.004600635264068842f),
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
    AI_PACK_INTQ_SCALE(0.0022487796377390623f, 0.003328598104417324f, 0.003316625254228711f, 0.0024364572018384933f, 0.0024770842865109444f, 0.0023415868636220694f, 0.0017248174408450723f, 0.0020781648345291615f, 0.0021143557969480753f, 0.002052826341241598f, 0.0021457828115671873f, 0.0029945247806608677f, 0.0020516940858215094f, 0.002042213222011924f, 0.0019370483933016658f, 0.002740963129326701f, 0.0029515977948904037f, 0.0024616545997560024f, 0.0034051958937197924f, 0.002092449925839901f, 0.0020640604197978973f, 0.002667465014383197f, 0.002379406476393342f, 0.002756159519776702f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_44_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015259833307936788f, 0.0023415579926222563f, 0.0017020399682223797f, 0.002189455321058631f, 0.002230448415502906f, 0.0026330987457185984f, 0.002621268155053258f, 0.0024849458131939173f, 0.0028613873291760683f, 0.003189151408150792f, 0.002447986975312233f, 0.0031358611304312944f, 0.0033508066553622484f, 0.003066078759729862f, 0.003062970470637083f, 0.0035607698373496532f, 0.002946882275864482f, 0.0027187184896320105f, 0.0036738147027790546f, 0.003650122554972768f, 0.003562608268111944f, 0.0017356658354401588f, 0.002962260041385889f, 0.0018411289202049375f, 0.002739942166954279f, 0.003626165445894003f, 0.004041876178234816f, 0.0025905598886311054f, 0.00260619493201375f, 0.002706458792090416f, 0.0023568456526845694f, 0.003258350072428584f, 0.0027650443371385336f, 0.0025455241557210684f, 0.0027455666568130255f, 0.0020338622853159904f, 0.002348791342228651f, 0.0025211551692336798f, 0.0017481822287663817f, 0.002808372490108013f, 0.003356719156727195f, 0.0022764222230762243f, 0.0024183804634958506f, 0.003996364306658506f, 0.002627577865496278f, 0.002534138970077038f, 0.002679104683920741f, 0.00253613805398345f, 0.00271877134218812f, 0.0023797100875526667f, 0.004444605205208063f, 0.003065804485231638f, 0.0028659882955253124f, 0.0027563096955418587f, 0.0024130113888531923f, 0.002693421673029661f, 0.002010851167142391f, 0.002325107343494892f, 0.0042704083025455475f, 0.0030436839442700148f, 0.003355954308062792f, 0.004721083678305149f, 0.0026072836481034756f, 0.001406131312251091f, 0.002512097591534257f, 0.0023683018516749144f, 0.003896411508321762f, 0.002612700220197439f, 0.002073178766295314f, 0.002888632006943226f, 0.0022795330733060837f, 0.002244121627882123f, 0.0030183654744178057f, 0.00334286130964756f, 0.0026303057093173265f, 0.0035009405110031366f, 0.0028176666237413883f, 0.002554507227614522f, 0.0024856198579072952f, 0.002164678182452917f, 0.0026951467152684927f, 0.0026042957324534655f, 0.0016933147562667727f, 0.0029492282774299383f, 0.003196688601747155f, 0.004113026894629002f, 0.0038147238083183765f, 0.002094497438520193f, 0.002579467836767435f, 0.0035077237989753485f, 0.002939080586656928f, 0.0028239483945071697f, 0.002455754904076457f, 0.002177416579797864f, 0.0023833378218114376f, 0.001979563618078828f, 0.0021790715400129557f, 0.002876333426684141f, 0.0030811727046966553f, 0.0018080690642818809f, 0.0030394827481359243f, 0.0025485039222985506f, 0.00207049329765141f, 0.0025805889163166285f, 0.002939930884167552f, 0.00413479981943965f, 0.002558763138949871f, 0.004040498752146959f, 0.002604059409350157f, 0.0020979391410946846f, 0.002076268894597888f, 0.0019414260750636458f, 0.0031113403383642435f, 0.0025500485207885504f, 0.002317724283784628f, 0.003171555930748582f, 0.0027808500453829765f, 0.0021303819958120584f, 0.0027886531315743923f, 0.003147855633869767f, 0.003015917493030429f, 0.002895996905863285f, 0.0035267630591988564f, 0.0033313387539237738f, 0.00290777743794024f, 0.0024696066975593567f, 0.0030021364800632f, 0.0023471424356102943f, 0.002239443827420473f, 0.002458941424265504f, 0.0028620606753975153f, 0.002573358826339245f, 0.00324498163536191f, 0.003181267296895385f, 0.0023033474572002888f, 0.0020792961586266756f, 0.0036095757968723774f, 0.0019273830112069845f, 0.0019113081507384777f, 0.0032646155450493097f, 0.0032328502275049686f, 0.003977709915488958f, 0.002182027092203498f, 0.0022978060878813267f),
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
    AI_PACK_INTQ_SCALE(0.005363696254789829f, 0.005572566296905279f, 0.0028009037487208843f, 0.0035917521454393864f, 0.0055512855760753155f, 0.003721388755366206f, 0.005145939998328686f, 0.008084355853497982f, 0.006881058681756258f, 0.0050199758261442184f, 0.011302314698696136f, 0.008412313647568226f, 0.007354445289820433f, 0.004116293974220753f, 0.006777919363230467f, 0.005792621057480574f, 0.005812448915094137f, 0.0050977845676243305f, 0.008862396702170372f, 0.0075437151826918125f, 0.006938431411981583f, 0.0027631449047476053f, 0.005555011797696352f, 0.005296020768582821f, 0.006648194044828415f, 0.008943913504481316f, 0.010829015634953976f, 0.006254715844988823f, 0.006814563646912575f, 0.005596446804702282f, 0.0106345871463418f, 0.007384105585515499f, 0.007530256174504757f, 0.009432929567992687f, 0.007488690782338381f, 0.006852766033262014f, 0.008328614756464958f, 0.0035702050663530827f, 0.0037028819788247347f, 0.003206950845196843f, 0.005822950042784214f, 0.006796636618673801f, 0.004930988885462284f, 0.011629023589193821f, 0.0031812514644116163f, 0.00599365821108222f, 0.007756997365504503f, 0.008078346960246563f, 0.007895327173173428f, 0.0076804570853710175f, 0.004916476551443338f, 0.007195386569947004f, 0.005985926371067762f, 0.010598584078252316f, 0.006939669139683247f, 0.005631882231682539f, 0.0033723015803843737f, 0.00785877276211977f, 0.006500858813524246f, 0.009607977233827114f, 0.0070738778449594975f, 0.006248386111110449f, 0.00808694213628769f, 0.0030823920387774706f, 0.006743432488292456f, 0.0048868246376514435f, 0.009462271817028522f, 0.007281070575118065f, 0.00924410205334425f, 0.011855896562337875f, 0.00411525322124362f, 0.003255777293816209f, 0.005006611812859774f, 0.008260752074420452f, 0.006199479568749666f, 0.0059569235891103745f, 0.008676822297275066f, 0.004949784837663174f, 0.0055998885072767735f, 0.009726649150252342f, 0.005321793258190155f, 0.010383551940321922f, 0.004854912403970957f, 0.010452398099005222f, 0.005944493226706982f, 0.0041834330186247826f, 0.010828737169504166f, 0.008051087148487568f, 0.005626901518553495f, 0.006669050082564354f, 0.011164630763232708f, 0.005648287478834391f, 0.008302749134600163f, 0.008217748254537582f, 0.004184705205261707f, 0.005529357120394707f, 0.006597427185624838f, 0.008008266799151897f, 0.004201775882393122f, 0.005016446113586426f, 0.005693752784281969f, 0.0067514595575630665f, 0.004817198496311903f, 0.004664930514991283f, 0.00650569424033165f, 0.008448300883173943f, 0.008028321899473667f, 0.005352194886654615f, 0.0074079991318285465f, 0.0042897602543234825f, 0.008154822513461113f, 0.01017970871180296f, 0.008887799456715584f, 0.0042811669409275055f, 0.007137887179851532f, 0.00690171355381608f, 0.01034671813249588f, 0.005037839990109205f, 0.003899021539837122f, 0.006001393310725689f, 0.0060972715727984905f, 0.006374207325279713f, 0.00365458894520998f, 0.009012822061777115f, 0.006982502527534962f, 0.009172439575195312f, 0.005853305105119944f, 0.003536027390509844f, 0.010730387642979622f, 0.007092557847499847f, 0.005794278346002102f, 0.005191058851778507f, 0.005436352454125881f, 0.003884476376697421f, 0.006574269384145737f, 0.005735957995057106f, 0.00932331569492817f, 0.0062380218878388405f, 0.006277144420892f, 0.008347183465957642f, 0.007804992143064737f, 0.006847046781331301f, 0.005824670661240816f, 0.008221282623708248f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_46_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015363444108515978f, 0.0014025620184838772f, 0.0017541884444653988f, 0.0016395945567637682f, 0.0016176976496353745f, 0.0014682732289656997f, 0.0016868888633325696f, 0.0011042749974876642f, 0.001485117943957448f, 0.0012532189721241593f, 0.0009278736542910337f, 0.002046815352514386f, 0.0018780414247885346f, 0.0012423302978277206f, 0.0010974484030157328f, 0.0016956712352111936f, 0.001156434416770935f, 0.0014530918560922146f, 0.0013320649741217494f, 0.0009896536357700825f, 0.0016265930607914925f, 0.00142479978967458f, 0.0018784840358421206f, 0.0010501004289835691f),
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
    AI_PACK_INTQ_SCALE(0.0015060774749144912f, 0.0019741610158234835f, 0.001568124396726489f, 0.0010898523032665253f, 0.0019642519764602184f, 0.001783907413482666f, 0.0014762827195227146f, 0.0013879280304536223f, 0.00228134635835886f, 0.001568201812915504f, 0.0012622906360775232f, 0.003048890270292759f, 0.0011705753859132528f, 0.0022066079545766115f, 0.0012098405277356505f, 0.0010782171739265323f, 0.0015159627655521035f, 0.0011475479695945978f, 0.0021164242643862963f, 0.0017131449421867728f, 0.0020878140348941088f, 0.0021239323541522026f, 0.0018053832463920116f, 0.0015302044339478016f, 0.0022905133664608f, 0.0016203726409003139f, 0.0024401454720646143f, 0.0012885130709037185f, 0.0018210881389677525f, 0.001364841591566801f, 0.002578100422397256f, 0.0016706346068531275f, 0.0021271174773573875f, 0.0011914526112377644f, 0.0021379159297794104f, 0.001953486353158951f, 0.0012483305763453245f, 0.0016664598369970918f, 0.0013714475790038705f, 0.0013416607398539782f, 0.0016901667695492506f, 0.0014458007644861937f, 0.0021344053093343973f, 0.002219753572717309f, 0.0012074097758159041f, 0.002211451530456543f, 0.0030800714157521725f, 0.0013316934928297997f, 0.0025543428491801023f, 0.00162792659830302f, 0.0017344353254884481f, 0.002023005625233054f, 0.0019808507058769464f, 0.0012133625568822026f, 0.0018946187337860465f, 0.0013467828975990415f, 0.0019006096990779042f, 0.0013625837163999677f, 0.0014799173222854733f, 0.002111053094267845f, 0.0017635494004935026f, 0.0014076739316806197f, 0.002391166752204299f, 0.0011911675101146102f, 0.0010675578378140926f, 0.002198162255808711f, 0.0025332439690828323f, 0.0013766670599579811f, 0.0021409576293081045f, 0.001083106966689229f, 0.0019168073777109385f, 0.0019792611710727215f, 0.001495014177635312f, 0.0019658557139337063f, 0.0015813246136531234f, 0.0015819671098142862f, 0.0022344423923641443f, 0.0024473394732922316f, 0.0019341459264978766f, 0.0011401127558201551f, 0.002102182013913989f, 0.0018254939932376146f, 0.0022376785054802895f, 0.0016018138267099857f, 0.0011356314644217491f, 0.0018330927705392241f, 0.00175561907235533f, 0.00155580323189497f, 0.0011507944436743855f, 0.001955623272806406f, 0.0020789876580238342f, 0.0014432427706196904f, 0.0014036432839930058f, 0.0010167676955461502f, 0.0023625334724783897f, 0.0019078286131843925f, 0.0023037430364638567f, 0.0019308095797896385f, 0.0010122545063495636f, 0.001590099185705185f, 0.001840190845541656f, 0.0016235657967627048f, 0.001901236712001264f, 0.0012647217372432351f, 0.002798542147502303f, 0.001682950765825808f, 0.0013480604393407702f, 0.0015180198242887855f, 0.0021063408348709345f, 0.0019890659023076296f, 0.0018259795615449548f, 0.0022696619853377342f, 0.002156168222427368f, 0.001480196020565927f, 0.0011991446372121572f, 0.0022056330926716328f, 0.002458585426211357f, 0.0019255956867709756f, 0.0018102286849170923f, 0.0013428753009065986f, 0.001835365779697895f, 0.0016394391423091292f, 0.002463006181642413f, 0.0012092211982235312f, 0.0022645092103630304f, 0.0017441412201151252f, 0.0012401214335113764f, 0.0011135487584397197f, 0.0018518053693696856f, 0.001874688547104597f, 0.0014065889408811927f, 0.0018711359007284045f, 0.0018884434830397367f, 0.0021289943251758814f, 0.0021741401869803667f, 0.002015666337683797f, 0.001547791762277484f, 0.0020668860524892807f, 0.0016437559388577938f, 0.0012811175547540188f, 0.0022093828301876783f, 0.0019155642949044704f, 0.0020383826922625303f, 0.0014307561796158552f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_49_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004668103065341711f, 0.006228300277143717f, 0.008477305993437767f, 0.007446359843015671f, 0.00853662844747305f, 0.003829430090263486f, 0.005392257124185562f, 0.00769985793158412f, 0.005755164194852114f, 0.0037765158340334892f, 0.007336899638175964f, 0.009667093865573406f, 0.0032496871426701546f, 0.004977339878678322f, 0.005029148887842894f, 0.0049029127694666386f, 0.005152863450348377f, 0.007040279917418957f, 0.006329227238893509f, 0.006595030426979065f, 0.00428456487134099f, 0.00695686275139451f, 0.007892200723290443f, 0.011277391575276852f, 0.006412337068468332f, 0.00798090174794197f, 0.008899970911443233f, 0.010239859111607075f, 0.007786460220813751f, 0.005106673110276461f, 0.007695017382502556f, 0.009947443380951881f, 0.011291743256151676f, 0.006577838212251663f, 0.008413088507950306f, 0.007816562429070473f, 0.010773205198347569f, 0.00888587161898613f, 0.005950161721557379f, 0.009614724665880203f, 0.013507417403161526f, 0.011737088672816753f, 0.005591633729636669f, 0.008325057104229927f, 0.005439751781523228f, 0.004687217529863119f, 0.006627567578107119f, 0.003167254151776433f, 0.006174854934215546f, 0.012922337278723717f, 0.006566071882843971f, 0.005342081189155579f, 0.006086350418627262f, 0.0065374188125133514f, 0.011750433593988419f, 0.0058789546601474285f, 0.013363362289965153f, 0.005330574698746204f, 0.012019867077469826f, 0.00548214977607131f, 0.005255159921944141f, 0.0076614487916231155f, 0.005454760044813156f, 0.010672736912965775f, 0.012430931441485882f, 0.006793186068534851f, 0.009196466766297817f, 0.004676278214901686f, 0.006065155379474163f, 0.005320575553923845f, 0.00966259092092514f, 0.008995331823825836f, 0.007769871037453413f, 0.004877101164311171f, 0.009001658298075199f, 0.00802502129226923f, 0.008250238373875618f, 0.006804467644542456f, 0.011317550204694271f, 0.005722156260162592f, 0.004232087172567844f, 0.006983479484915733f, 0.0037791687063872814f, 0.00908499862998724f, 0.008062608540058136f, 0.005065363831818104f, 0.007043879479169846f, 0.007759486325085163f, 0.004150311462581158f, 0.007143066264688969f, 0.009234978817403316f, 0.007940270937979221f, 0.003706208197399974f, 0.004197843838483095f, 0.01023767702281475f, 0.0056313700042665005f, 0.008642995730042458f, 0.014446406625211239f, 0.003940834663808346f, 0.004309188574552536f, 0.0026735172141343355f, 0.006018914747983217f, 0.00770511943846941f, 0.00861336849629879f, 0.00546438479796052f, 0.005244653206318617f, 0.010625584051012993f, 0.005697033368051052f, 0.003476726822555065f, 0.008961890824139118f, 0.011391346342861652f, 0.006227403413504362f, 0.008283299393951893f, 0.01033436693251133f, 0.006961285602301359f, 0.00569922337308526f, 0.005669150035828352f, 0.006781539414077997f, 0.005006792489439249f, 0.003534854855388403f, 0.0047032516449689865f, 0.0072784931398928165f, 0.006515734363347292f, 0.005738978274166584f, 0.006753092166036367f, 0.006705770269036293f, 0.005435095634311438f, 0.004498386289924383f, 0.01138993352651596f, 0.004950863309204578f, 0.003666497068479657f, 0.00680840527638793f, 0.006223685573786497f, 0.0069793593138456345f, 0.009790319949388504f, 0.006724677048623562f, 0.005160351283848286f, 0.010003582574427128f, 0.0067320396192371845f, 0.007536173332482576f, 0.007356587331742048f, 0.005936520639806986f, 0.0033163074404001236f, 0.012646850198507309f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013546387199312449f, 0.0013949671993032098f, 0.0016082960646599531f, 0.001156447920948267f, 0.0019448990933597088f, 0.0016286453464999795f, 0.0009913427056744695f, 0.0011331448331475258f, 0.0020920902024954557f, 0.0008674691780470312f, 0.0010411815019324422f, 0.0016377527499571443f, 0.0016631123144179583f, 0.0014434338081628084f, 0.0011288709938526154f, 0.0013949411222711205f, 0.0012270110892131925f, 0.001374828745611012f, 0.0010245846351608634f, 0.001026767771691084f, 0.0013012643903493881f, 0.0015075491974130273f, 0.001457245904020965f, 0.0010790746891871095f),
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
    AI_PACK_INTQ_SCALE(0.001421906752511859f, 0.001440553111024201f, 0.0014163422165438533f, 0.0009755032369866967f, 0.0010314154205843806f, 0.0016131579177454114f, 0.0009788520401343703f, 0.001592263812199235f, 0.0016795021947473288f, 0.0015630651032552123f, 0.0008334527374245226f, 0.0012752945767715573f, 0.0010366082424297929f, 0.0013883858919143677f, 0.001126919174566865f, 0.00115109421312809f, 0.0011988839833065867f, 0.0014078003587201238f, 0.0020127594470977783f, 0.0010104713728651404f, 0.0013277791440486908f, 0.0009890533983707428f, 0.0017309228423982859f, 0.002129566390067339f, 0.001551692490465939f, 0.0013945788377895951f, 0.0011232258984819055f, 0.0015781860565766692f, 0.0012208421248942614f, 0.0011509940959513187f, 0.001062488416209817f, 0.0017338532488793135f, 0.0010340934386476874f, 0.0011273474665358663f, 0.000942898215726018f, 0.0013348786160349846f, 0.0012501755263656378f, 0.0011055654613301158f, 0.0009651452419348061f, 0.00126847461797297f, 0.0011562330182641745f, 0.0013345112092792988f, 0.0016035281587392092f, 0.0015738436486572027f, 0.0019394087139517069f, 0.001763545791618526f, 0.001368252793326974f, 0.0009004988241940737f, 0.0012054031249135733f, 0.0011644703336060047f, 0.0011296781012788415f, 0.0017286317888647318f, 0.0012884547468274832f, 0.0019761959556490183f, 0.0017228178912773728f, 0.0018846791936084628f, 0.0012783216079697013f, 0.001748285605572164f, 0.0015221827197819948f, 0.0008584954775869846f, 0.0009719930239953101f, 0.0016526032704859972f, 0.0013129661092534661f, 0.0008703049970790744f, 0.00159548525698483f, 0.0010616665240377188f, 0.0014254444977268577f, 0.0012618015753105283f, 0.0013842436019331217f, 0.0009125127107836306f, 0.0008182621095329523f, 0.0016082371585071087f, 0.0009921026648953557f, 0.0007592872134409845f, 0.0012551778927445412f, 0.001273069647140801f, 0.000993085210211575f, 0.0009196419850923121f, 0.0017212533857673407f, 0.0018742671236395836f, 0.0013729839120060205f, 0.0009378310642205179f, 0.0011377172777429223f, 0.0015104851918295026f, 0.0010647200979292393f, 0.001294112065806985f, 0.0015058406861498952f, 0.0010317425476387143f, 0.001960180001333356f, 0.0013892705319449306f, 0.0009930870728567243f, 0.0012737110955640674f, 0.0012955465354025364f, 0.0009332837071269751f, 0.0008578172419220209f, 0.0013873425778001547f, 0.00127814628649503f, 0.0008573107188567519f, 0.0017467921134084463f, 0.0009929186198860407f, 0.0009687119745649397f, 0.0010647880844771862f, 0.0012393215438351035f, 0.0016625482821837068f, 0.001012351829558611f, 0.001127917435951531f, 0.001175948535092175f, 0.0008228871738538146f, 0.0010371170938014984f, 0.0012142154155299067f, 0.0008745630620978773f, 0.0017105304868891835f, 0.0009399407426826656f, 0.0018057888373732567f, 0.0014842456439509988f, 0.0013493088772520423f, 0.0013019926846027374f, 0.0010952489683404565f, 0.0018670691642910242f, 0.0013022366911172867f, 0.0010711031500250101f, 0.0009231838048435748f, 0.0009723979746922851f, 0.0014445263659581542f, 0.001267912215553224f, 0.0014987285248935223f, 0.0016185137210413814f, 0.0013775361003354192f, 0.001150263356976211f, 0.002499484224244952f, 0.0011786827817559242f, 0.0011434991611167789f, 0.0014250809326767921f, 0.0013046945678070188f, 0.0010351176606491208f, 0.0012253347085788846f, 0.0007749666110612452f, 0.0009591971174813807f, 0.0011282400228083134f, 0.001241312245838344f, 0.0009983590571209788f, 0.0014668748481199145f, 0.0011965753510594368f, 0.0011941277189180255f),
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
    AI_PACK_INTQ_SCALE(0.008127344772219658f, 0.006150947883725166f, 0.004388896748423576f, 0.0039047026075422764f, 0.004491774365305901f, 0.0053137727081775665f, 0.015581978484988213f, 0.005997518077492714f, 0.008209995925426483f, 0.010176034644246101f, 0.004061736632138491f, 0.0038714504335075617f, 0.005014028400182724f, 0.004301247652620077f, 0.0030354689806699753f, 0.00750946206972003f, 0.0038634876254945993f, 0.008715306408703327f, 0.003659110749140382f, 0.01023880299180746f, 0.004743942525237799f, 0.0036094500683248043f, 0.007297757547348738f, 0.008292675018310547f, 0.007649363949894905f, 0.008024747483432293f, 0.003827829845249653f, 0.007873116061091423f, 0.005787042435258627f, 0.0037311832420527935f, 0.00746516976505518f, 0.004802268464118242f, 0.007491046097129583f, 0.008908825926482677f, 0.005749859381467104f, 0.0032750845421105623f, 0.0038309344090521336f, 0.011949129402637482f, 0.006410508882254362f, 0.004933469463139772f, 0.005120539106428623f, 0.006691563408821821f, 0.007930298335850239f, 0.0051466417498886585f, 0.006218419875949621f, 0.00864611379802227f, 0.005392963532358408f, 0.00763721764087677f, 0.004358300939202309f, 0.006654353346675634f, 0.005475333426147699f, 0.0072320750914514065f, 0.011281312443315983f, 0.005049505736678839f, 0.008858107030391693f, 0.0070357732474803925f, 0.0053061628714203835f, 0.0060274782590568066f, 0.005937156733125448f, 0.0035341023467481136f, 0.00792867410928011f, 0.00575339887291193f, 0.0060194856487214565f, 0.009841233491897583f, 0.011033196933567524f, 0.004350742325186729f, 0.0032338027376681566f, 0.005312812514603138f, 0.008509919978678226f, 0.005244556814432144f, 0.005894473288208246f, 0.002844360424205661f, 0.008432400412857533f, 0.0038911839947104454f, 0.0033707949332892895f, 0.0091285714879632f, 0.0034540481865406036f, 0.01389171089977026f, 0.011329744011163712f, 0.009135621599853039f, 0.004833460319787264f, 0.01603171043097973f, 0.005520675331354141f, 0.0062496173195540905f, 0.016062475740909576f, 0.0053368909284472466f, 0.004944517742842436f, 0.0034424986224621534f, 0.006145486142486334f, 0.009430651552975178f, 0.004513149615377188f, 0.0031044227071106434f, 0.006442660931497812f, 0.0038090862799435854f, 0.006468960549682379f, 0.011454256251454353f, 0.00398017605766654f, 0.00656806631013751f, 0.009305523708462715f, 0.0037808814086019993f, 0.006667437497526407f, 0.005256509408354759f, 0.014228280633687973f, 0.005333984270691872f, 0.004593248944729567f, 0.010841591283679008f, 0.0064527555368840694f, 0.004870304372161627f, 0.007958455011248589f, 0.004456487484276295f, 0.010989973321557045f, 0.005320468917489052f, 0.00387470331043005f, 0.005000430159270763f, 0.008318268693983555f, 0.0051101925782859325f, 0.00466999551281333f, 0.00666775880381465f, 0.004876952618360519f, 0.004385278094559908f, 0.004087135661393404f, 0.008478967472910881f, 0.002745509147644043f, 0.004998736549168825f, 0.004930777009576559f, 0.0066660079173743725f, 0.007722972426563501f, 0.00851379707455635f, 0.006230495870113373f, 0.006016325205564499f, 0.004332324489951134f, 0.005998677108436823f, 0.006574341095983982f, 0.005811862647533417f, 0.003893669694662094f, 0.0033831950277090073f, 0.003869984531775117f, 0.004775289911776781f, 0.006137445569038391f, 0.004373517818748951f, 0.005075353197753429f, 0.002820568857714534f, 0.007231409195810556f, 0.004921740852296352f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.001193465432152152f, 0.0015837596729397774f, 0.0015170768601819873f, 0.001411058590747416f, 0.001395181636326015f, 0.00224259402602911f, 0.0011413791216909885f, 0.001014213659800589f, 0.001685143681243062f, 0.001160087762400508f, 0.0014939102111384273f, 0.0011169640347361565f, 0.001745796762406826f, 0.0018434833036735654f, 0.001648192759603262f, 0.0014593700179830194f, 0.0018839742988348007f, 0.0019449891988188028f, 0.0016926953103393316f, 0.002494845073670149f, 0.0012005780590698123f, 0.0018863924778997898f, 0.001785028725862503f, 0.0023782728239893913f, 0.001464026398025453f, 0.001275301561690867f, 0.0009515244164504111f, 0.0013577676145359874f, 0.001309557817876339f, 0.0010529295541346073f, 0.0013698283582925797f, 0.001684460323303938f, 0.002049169270321727f, 0.0015228145057335496f, 0.001797495991922915f, 0.0017617964185774326f, 0.0011245273053646088f, 0.001416140585206449f, 0.001963594928383827f, 0.0014351370045915246f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_56_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002934662625193596f, 0.0017743469215929508f, 0.0010907374089583755f, 0.0016030976548790932f, 0.0010297581320628524f, 0.0008270870894193649f, 0.0019531839061528444f, 0.0017496214713901281f, 0.0021674528252333403f, 0.0015040416037663817f, 0.002638988895341754f, 0.0027613455895334482f, 0.002816342283040285f, 0.0017692790133878589f, 0.001824385835789144f, 0.0014296839945018291f, 0.0026139821857213974f, 0.0019767938647419214f, 0.00193587236572057f, 0.0012164578074589372f, 0.0012180645717307925f, 0.001139795989729464f, 0.0014752111164852977f, 0.0020055733621120453f, 0.0016251078341156244f, 0.0018384127179160714f, 0.0017154497327283025f, 0.0010444551007822156f, 0.001332544256001711f, 0.0013522931840270758f, 0.0017590572824701667f, 0.0028462728951126337f, 0.0012105662608519197f, 0.002309751696884632f, 0.0012644813396036625f, 0.002191185485571623f, 0.0011292253620922565f, 0.0023031553719192743f, 0.0010920369531959295f, 0.0020025642588734627f, 0.0025234618224203587f, 0.001400127075612545f, 0.002067761030048132f, 0.0018407755997031927f, 0.0020438244100660086f, 0.001405532588250935f, 0.001642341841943562f, 0.0022740999702364206f, 0.0011707794619724154f, 0.0011875482741743326f, 0.002164300065487623f, 0.002896732185035944f, 0.0025001782923936844f, 0.0012707330752164125f, 0.002429914427921176f, 0.001284866128116846f, 0.001496792770922184f, 0.0021631757263094187f, 0.001112046418711543f, 0.0010793310357257724f, 0.0013626996660605073f, 0.0015932742971926928f, 0.0017359972698614001f, 0.0023990196641534567f, 0.002296516904607415f, 0.0021143625490367413f, 0.0013137380592525005f, 0.0012924373149871826f, 0.0020963777787983418f, 0.0015104366466403008f, 0.0026066352147608995f, 0.002074612770229578f, 0.002774609485641122f, 0.0020947291050106287f, 0.0015883368905633688f, 0.0024125464260578156f, 0.0019060808699578047f, 0.0013007514644414186f, 0.001491334056481719f, 0.0014370214194059372f, 0.0018848930485546589f, 0.0021992698311805725f, 0.002986585022881627f, 0.002003434579819441f, 0.002281312132254243f, 0.0016258391551673412f, 0.0019366622436791658f, 0.0015796071384102106f, 0.0031426663044840097f, 0.0018199131591245532f, 0.001317325048148632f, 0.0013713529333472252f, 0.001972869271412492f, 0.0011568665504455566f, 0.001678536063991487f, 0.0014379392378032207f, 0.0023365432862192392f, 0.0012350274482741952f, 0.001444888417609036f, 0.002141601638868451f, 0.0014723185449838638f, 0.0023461373057216406f, 0.002538501052185893f, 0.0016759715508669615f, 0.0013255575904622674f, 0.0015145499492064118f, 0.0013579789083451033f, 0.001687977695837617f, 0.0029559044633060694f, 0.0012837853282690048f, 0.0013628959422931075f, 0.002234665211290121f, 0.001423572888597846f, 0.0020490754395723343f, 0.0015830136835575104f, 0.001519112498499453f, 0.0012501300079748034f, 0.0021269298158586025f, 0.0019805755000561476f, 0.0017151407664641738f, 0.002826908603310585f, 0.000982773257419467f, 0.0016064632218331099f, 0.0013938485644757748f, 0.0021487618796527386f, 0.0020246324129402637f, 0.0023375353775918484f, 0.001250973786227405f, 0.001466982765123248f, 0.0013847098452970386f, 0.002422869438305497f, 0.0012128662783652544f, 0.0022470024414360523f, 0.0019165355479344726f, 0.0025107322726398706f, 0.0020153243094682693f, 0.0011929994216188788f, 0.0015974334673956037f, 0.0013087298721075058f, 0.0011889353627339005f, 0.0015084178885444999f, 0.0013801974710077047f, 0.0014492147602140903f, 0.002389378845691681f, 0.0013223608257248998f, 0.0018731526797637343f, 0.002523589413613081f, 0.0017041187966242433f, 0.0015093027614057064f, 0.0018255244940519333f, 0.001690615201368928f, 0.0013549854047596455f, 0.0014615652617067099f, 0.0018544431077316403f, 0.0019732716027647257f, 0.0016358433058485389f, 0.002089723013341427f, 0.0012872578809037805f, 0.0018405960872769356f, 0.0019249789183959365f, 0.0023056550417095423f, 0.0019675337243825197f, 0.002222365001216531f, 0.0020178481936454773f, 0.0016077125910669565f, 0.00209153164178133f, 0.002894781297072768f, 0.0022238909732550383f, 0.0016335652908310294f, 0.0025500089395791292f, 0.0012324717827141285f, 0.001355621381662786f, 0.0019043366191908717f, 0.0012095654383301735f, 0.0017926873406395316f, 0.0010603904956951737f, 0.0014952594647184014f, 0.0013937716139480472f, 0.0012358191888779402f, 0.0020319942850619555f, 0.001420354237779975f, 0.001343711162917316f, 0.0012855625245720148f, 0.0015802423004060984f, 0.0017942457925528288f, 0.0009757013176567852f, 0.001539525343105197f, 0.0023387735709547997f, 0.001591505017131567f, 0.0013291581999510527f, 0.0012143411440774798f, 0.002211443381384015f, 0.002332017756998539f, 0.001357006374746561f, 0.002092959824949503f, 0.00280868005938828f, 0.0018186847446486354f, 0.002196778077632189f, 0.0011648222571238875f, 0.0015314993215724826f, 0.0017778946785256267f, 0.0017934199422597885f, 0.001277324976399541f, 0.001740571460686624f, 0.0014700664905831218f, 0.0019092833390459418f, 0.0017923004925251007f, 0.0021469825878739357f, 0.002050581155344844f, 0.001918830326758325f, 0.0019509656121954322f, 0.0015288651920855045f, 0.0016298581613227725f, 0.0018017071997746825f, 0.0030999365262687206f, 0.0018818157259374857f, 0.0014928742311894894f, 0.0018940302543342113f, 0.0016947851981967688f, 0.002615748904645443f, 0.0010700331768020988f, 0.0017007271526381373f, 0.0017643223982304335f, 0.0012002093717455864f, 0.00191346590872854f, 0.0020977207459509373f, 0.001995083875954151f, 0.0014364265371114016f, 0.0017623859457671642f, 0.0014214975526556373f, 0.0020503969863057137f, 0.0016481789061799645f, 0.0014642039313912392f, 0.0019200261449441314f, 0.0021010374184697866f, 0.0014398915227502584f, 0.0017249323427677155f, 0.0012752815382555127f, 0.0024314955808222294f, 0.0015545714413747191f),
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
    AI_PACK_INTQ_SCALE(0.005293410271406174f, 0.005846757907420397f, 0.00890357419848442f, 0.007822506129741669f, 0.008883373811841011f, 0.008053257130086422f, 0.007175303529947996f, 0.009961459785699844f, 0.010195817798376083f, 0.007369530852884054f, 0.007373817265033722f, 0.011209692806005478f, 0.00803289096802473f, 0.007390775252133608f, 0.011054358445107937f, 0.005600280128419399f, 0.007887408137321472f, 0.009188931435346603f, 0.0055884672328829765f, 0.004541210364550352f, 0.005573689937591553f, 0.0054637957364320755f, 0.00892286654561758f, 0.009616813622415066f, 0.007547234650701284f, 0.008909020572900772f, 0.009052807465195656f, 0.0034631353337317705f, 0.005571962334215641f, 0.00612801406532526f, 0.005065330769866705f, 0.0056436327286064625f, 0.004232690203934908f, 0.0041454569436609745f, 0.005277206189930439f, 0.0056859883479774f, 0.007796128746122122f, 0.008095801807940006f, 0.004627850838005543f, 0.007370839361101389f, 0.011879291385412216f, 0.008822726085782051f, 0.00465399120002985f, 0.008239464834332466f, 0.006137803662568331f, 0.00761373108252883f, 0.005936147645115852f, 0.011166109703481197f, 0.0068087526597082615f, 0.005272762384265661f, 0.005973787046968937f, 0.007572072558104992f, 0.008421530947089195f, 0.006476350128650665f, 0.0067188674584031105f, 0.012147093191742897f, 0.00793991144746542f, 0.01162969321012497f, 0.002994372509419918f, 0.006952537689357996f, 0.007688578218221664f, 0.007897322997450829f, 0.009366998448967934f, 0.0072391582652926445f, 0.005852860398590565f, 0.0048203966580331326f, 0.0056585888378322124f, 0.007201070431619883f, 0.005342996679246426f, 0.007205584552139044f, 0.006939536891877651f, 0.006137315649539232f, 0.007799605373293161f, 0.009268946014344692f, 0.008824833668768406f, 0.008137267082929611f, 0.007300385739654303f, 0.005839679855853319f, 0.009454960934817791f, 0.011634853668510914f, 0.007438070606440306f, 0.008392438292503357f, 0.010820393450558186f, 0.007707024458795786f, 0.00900399312376976f, 0.005650141276419163f, 0.006105347070842981f, 0.01305694505572319f, 0.007851595059037209f, 0.003995129838585854f, 0.006626859772950411f, 0.004384027794003487f, 0.005842381156980991f, 0.004189876839518547f, 0.007466650102287531f, 0.005180325824767351f, 0.008834552019834518f, 0.009229314513504505f, 0.004493254236876965f, 0.008033661171793938f, 0.006184472236782312f, 0.005718594882637262f, 0.006243557669222355f, 0.006393121089786291f, 0.0026777058374136686f, 0.007956305518746376f, 0.0049177976325154305f, 0.004823012743145227f, 0.009664653800427914f, 0.0060448795557022095f, 0.00988938007503748f, 0.005028675310313702f, 0.008456412702798843f, 0.0052874344401061535f, 0.00861384253948927f, 0.007001466117799282f, 0.005976036656647921f, 0.007781145162880421f, 0.005771103780716658f, 0.0049100713804364204f, 0.007889017462730408f, 0.010063858702778816f, 0.007992326281964779f, 0.0066667525097727776f, 0.005322746932506561f, 0.010474450886249542f, 0.005654946435242891f, 0.0063812220469117165f, 0.006853440310806036f, 0.005379820708185434f, 0.0075384643860161304f, 0.007773206103593111f, 0.010434248484671116f, 0.009828537702560425f, 0.006551634520292282f, 0.010955323465168476f, 0.004989622626453638f, 0.011954782530665398f, 0.004511746112257242f, 0.0050460523925721645f, 0.005513474810868502f, 0.006091119255870581f, 0.011224928312003613f, 0.007562948856502771f, 0.00489211268723011f, 0.005820364225655794f, 0.00905055832117796f, 0.007299737073481083f, 0.0061774044297635555f, 0.004999816417694092f, 0.007834064774215221f, 0.007898358628153801f, 0.003464652458205819f, 0.00894014909863472f, 0.011161754839122295f, 0.013080782257020473f, 0.01234560925513506f, 0.006387033499777317f, 0.008023027330636978f, 0.008637172169983387f, 0.00902500655502081f, 0.0074805207550525665f, 0.00898260623216629f, 0.004938705358654261f, 0.00645004166290164f, 0.00587043259292841f, 0.003957092296332121f, 0.005523202940821648f, 0.008887859992682934f, 0.003899662522599101f, 0.00990237109363079f, 0.00814114697277546f, 0.01286931149661541f, 0.007267173379659653f, 0.006557433400303125f, 0.005079594906419516f, 0.010058792307972908f, 0.006194267421960831f, 0.007491458207368851f, 0.009150302968919277f, 0.005859706550836563f, 0.005641855299472809f, 0.012836504727602005f, 0.007080500014126301f, 0.004745300393551588f, 0.006862696260213852f, 0.005014565773308277f, 0.007657751441001892f, 0.0064157117158174515f, 0.00875652302056551f, 0.005660370457917452f, 0.006018828134983778f, 0.0095358332619071f, 0.005383266136050224f, 0.009121624752879143f, 0.010352701880037785f, 0.0076949079521000385f, 0.005640916991978884f, 0.006893917918205261f, 0.004374002572149038f, 0.00906352512538433f, 0.008724717423319817f, 0.012394919991493225f, 0.004592992831021547f, 0.007523995824158192f, 0.0066957478411495686f, 0.008275658823549747f, 0.010913987644016743f, 0.011049415916204453f, 0.005711587145924568f, 0.006442985963076353f, 0.007479633204638958f, 0.006383113097399473f, 0.009453707374632359f, 0.007697930093854666f, 0.006351404823362827f, 0.007531799841672182f, 0.00924745388329029f, 0.004632493015378714f, 0.009844575077295303f, 0.009050740860402584f, 0.015188728459179401f, 0.0073076821863651276f, 0.01140396948903799f, 0.008964133448898792f, 0.011649955995380878f, 0.0073526399210095406f, 0.0063123623840510845f, 0.007217069622129202f, 0.008174280636012554f, 0.007029740605503321f, 0.006015127059072256f, 0.010142329148948193f, 0.006276953034102917f, 0.007889371365308762f, 0.006202038377523422f, 0.009312005713582039f, 0.00515137379989028f, 0.007658794056624174f, 0.007098699454218149f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009155130828730762f, 0.0007921563810668886f, 0.0009275344200432301f, 0.0009142443304881454f, 0.0009413289371877909f, 0.001309409155510366f, 0.0010818835580721498f, 0.0013162728864699602f, 0.0014598257839679718f, 0.0014049647143110633f, 0.0010864948853850365f, 0.0013851504772901535f, 0.0010506060207262635f, 0.0013996339403092861f, 0.0008655820856802166f, 0.0010364382760599256f, 0.0020423992536962032f, 0.0011612937087193131f, 0.0013754472602158785f, 0.001454502227716148f, 0.0008017413783818483f, 0.001077340915799141f, 0.0011313174618408084f, 0.0015779202803969383f, 0.001089719939045608f, 0.0011888985754922032f, 0.0010043894872069359f, 0.001262314966879785f, 0.0015604529762640595f, 0.0009024487226270139f, 0.0010667642345651984f, 0.001136031118221581f, 0.0012281677918508649f, 0.001290825312025845f, 0.001511481823399663f, 0.000913965399377048f, 0.001015859073959291f, 0.0014370627468451858f, 0.0009291864116676152f, 0.0016666052397340536f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0015171110862866044f, 0.0011003169929608703f, 0.0016767013585194945f, 0.0014140872517600656f, 0.0012023381423205137f, 0.001069151214323938f, 0.0012356920633465052f, 0.0011443510884419084f, 0.001093495637178421f, 0.0011006122222170234f, 0.0011948035098612309f, 0.0011954264482483268f, 0.0008157335105352104f, 0.001476371893659234f, 0.0010511951986700296f, 0.0018536181887611747f, 0.0017757945461198688f, 0.0011834419565275311f, 0.0016877063317224383f, 0.000886692083440721f, 0.0010121301747858524f, 0.0008663729531690478f, 0.0009257355122826993f, 0.00117209879681468f, 0.0012384988367557526f, 0.0009776439983397722f, 0.0009900041623041034f, 0.001288452884182334f, 0.0008570726495236158f, 0.0011729884427040815f, 0.0011458400404080749f, 0.001317960792221129f, 0.0014299919130280614f, 0.0010829964885488153f, 0.0008429978624917567f, 0.0012327400036156178f, 0.0012095787096768618f, 0.0011546307941898704f, 0.0016971254954114556f, 0.000916909659281373f, 0.0016568374121561646f, 0.0010940274223685265f, 0.0007889338885433972f, 0.001941119902767241f, 0.0008359380881302059f, 0.0010345173068344593f, 0.0008971428615041077f, 0.0012459078570827842f, 0.0017247372306883335f, 0.000874150893650949f, 0.0008679842576384544f, 0.0008815832552500069f, 0.0016858119051903486f, 0.0011926944134756923f, 0.0017934347270056605f, 0.0013149349251762033f, 0.001143160043284297f, 0.0013839101884514093f, 0.0014610238140448928f, 0.0011623065220192075f, 0.0019276263192296028f, 0.0014216796262189746f, 0.0021436491515487432f, 0.0019022389315068722f, 0.00118728366214782f, 0.0013361856108531356f, 0.0014669327065348625f, 0.001261807163245976f, 0.0013901789207011461f, 0.0020127566531300545f, 0.001124745118431747f, 0.001017707516439259f, 0.0014513598289340734f, 0.0014147378969937563f, 0.0020362704526633024f, 0.000982331926934421f, 0.0009032447705976665f, 0.0018196359742432833f, 0.0013694320805370808f, 0.0018568880623206496f, 0.0017022802494466305f, 0.0020144989248365164f, 0.0009552305564284325f, 0.0016554880421608686f, 0.0018670930294319987f, 0.0015047717606648803f, 0.0014633274404332042f, 0.0009778757812455297f, 0.001519846497103572f, 0.0017102854326367378f, 0.0008913592319004238f, 0.0016420643078163266f, 0.0014183063758537173f, 0.0008939501130953431f, 0.0013450237456709146f, 0.001546592335216701f, 0.0021654663141816854f, 0.001516490476205945f, 0.001631322200410068f, 0.0011402633972465992f, 0.001217132550664246f, 0.002284897491335869f, 0.000901936087757349f, 0.0014090208569541574f, 0.0009219109197147191f, 0.0014303593197837472f, 0.0010358622530475259f, 0.0012085894122719765f, 0.0017316692974418402f, 0.0009805102599784732f, 0.001619128743186593f, 0.0018245936371386051f, 0.0015775845386087894f, 0.001205424778163433f, 0.00208920706063509f, 0.0012009387137368321f, 0.0012277050409466028f, 0.001029467093758285f, 0.0008959691622294486f, 0.001191629096865654f, 0.0008165339240804315f, 0.0011026153806596994f, 0.0012739230878651142f, 0.0019021445186808705f, 0.000976777053438127f, 0.0009889696957543492f, 0.0008931268821470439f, 0.0008704083156771958f, 0.0016933338483795524f, 0.0015815438237041235f, 0.001688469434157014f, 0.0009532849071547389f, 0.0017367955297231674f, 0.001580161158926785f, 0.0012154470896348357f, 0.001455467427149415f, 0.0011018685763701797f, 0.0010027841199189425f, 0.00178988475818187f, 0.0010165614075958729f, 0.0011922781122848392f, 0.0028028094675391912f, 0.0026523356791585684f, 0.0010692026698961854f, 0.0015257870545610785f, 0.0013175845379009843f, 0.0011953411158174276f, 0.0012060790322721004f, 0.0009983225027099252f, 0.0016202825354412198f, 0.0019242719281464815f, 0.0012942870380356908f, 0.0021661845967173576f, 0.0009400011040270329f, 0.001633144449442625f, 0.0013779718428850174f, 0.001536079915240407f, 0.0014865822158753872f, 0.0010819638846442103f, 0.0017136484384536743f, 0.0011478213127702475f, 0.0008989968337118626f, 0.0015536369755864143f, 0.0012250134022906423f, 0.0010370169766247272f, 0.0014844866236671805f, 0.00112292414996773f, 0.0011251256801187992f, 0.0017261214088648558f, 0.001404185313731432f, 0.0012021783040836453f, 0.0016557268099859357f, 0.001175491139292717f, 0.0015075323171913624f, 0.0010600700043141842f, 0.0012931572273373604f, 0.001442067907191813f, 0.0012537708971649408f, 0.0010709977941587567f, 0.0008537076646462083f, 0.0012459898134693503f, 0.0014980784617364407f, 0.0016822959296405315f, 0.001305369776673615f, 0.001137066283263266f, 0.001402953639626503f, 0.0013913324801251292f, 0.0012739758240059018f, 0.001220896141603589f, 0.0012872656807303429f, 0.0014151998329907656f, 0.0010985536500811577f, 0.001048924052156508f, 0.0012430617352947593f, 0.0015197440516203642f, 0.0007831884431652725f, 0.001150549273006618f, 0.0014226475032046437f, 0.0014354567974805832f, 0.0013599004596471786f, 0.0009384306031279266f, 0.0014998286496847868f, 0.0013372169341892004f, 0.0010606530122458935f, 0.002005897229537368f, 0.0014024963602423668f, 0.0019302143482491374f, 0.0013540671207010746f, 0.0012465076288208365f, 0.001129153766669333f, 0.0012143991189077497f, 0.0009237620979547501f, 0.0011731337290257215f, 0.0017610738286748528f, 0.0009936189744621515f, 0.001156689366325736f, 0.0009398221154697239f, 0.001390432589687407f, 0.0013969170395284891f, 0.0011378274066373706f, 0.001212359988130629f, 0.0012287356657907367f, 0.0012015097308903933f, 0.0013215551152825356f, 0.0010703515727072954f, 0.0011675118003040552f, 0.0014182713348418474f, 0.0010629298631101847f, 0.001674726023338735f, 0.0014440994709730148f, 0.001456879312172532f, 0.001706221722997725f, 0.0017609834903851151f, 0.0008631933596916497f, 0.0014873985201120377f, 0.0012806603917852044f, 0.0013239550171419978f, 0.0007707460317760706f, 0.001294372254051268f, 0.0016696322709321976f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007893543690443039f, 0.007560978643596172f, 0.004870354663580656f, 0.0037276262883096933f, 0.010326509363949299f, 0.00538409361615777f, 0.003847012296319008f, 0.011833406053483486f, 0.0031016534194350243f, 0.004812405910342932f, 0.01024616602808237f, 0.005162454210221767f, 0.009748322889208794f, 0.009435592219233513f, 0.004271259997040033f, 0.007977060042321682f, 0.0071582128293812275f, 0.004101719241589308f, 0.008803882636129856f, 0.005575359798967838f, 0.010961275547742844f, 0.017039772123098373f, 0.007962703704833984f, 0.006084529682993889f, 0.005583681166172028f, 0.004862104542553425f, 0.005657613277435303f, 0.01660291478037834f, 0.006477009505033493f, 0.00960089173167944f, 0.005659541580826044f, 0.007990982383489609f, 0.009626618586480618f, 0.006279416847974062f, 0.00770969595760107f, 0.008566091768443584f, 0.004017770290374756f, 0.00935660395771265f, 0.007908009923994541f, 0.006477996241301298f, 0.004849956836551428f, 0.006395564414560795f, 0.007692684419453144f, 0.012995478697121143f, 0.004298556596040726f, 0.004645129665732384f, 0.00750924414023757f, 0.0071381437592208385f, 0.007694239728152752f, 0.007172559387981892f, 0.006371755618602037f, 0.00874730572104454f, 0.0064463927410542965f, 0.007263977080583572f, 0.0054637957364320755f, 0.004308629315346479f, 0.007330367341637611f, 0.0028589956928044558f, 0.004732958506792784f, 0.010786682367324829f, 0.006782088428735733f, 0.007701643742620945f, 0.006363848224282265f, 0.006826336961239576f, 0.004619420971721411f, 0.007253267802298069f, 0.008839956484735012f, 0.006153232418000698f, 0.007253153249621391f, 0.00648910878226161f, 0.003578426083549857f, 0.006506764329969883f, 0.005042973440140486f, 0.010048880241811275f, 0.010986086912453175f, 0.003842494683340192f, 0.00415829848498106f, 0.010674450546503067f, 0.00816025584936142f, 0.0074690054170787334f, 0.009208453819155693f, 0.008124195970594883f, 0.003941029775887728f, 0.009631041437387466f, 0.008274402469396591f, 0.003823202336207032f, 0.008623932488262653f, 0.006140599492937326f, 0.00717589445412159f, 0.00954870693385601f, 0.003569043008610606f, 0.0052744378335773945f, 0.008978286758065224f, 0.004585166461765766f, 0.010120648890733719f, 0.007751594763249159f, 0.009081471711397171f, 0.009341085329651833f, 0.007893523201346397f, 0.009642418473958969f, 0.015588367357850075f, 0.008640519343316555f, 0.005842153914272785f, 0.006645713467150927f, 0.007301277946680784f, 0.007813150063157082f, 0.0036038090474903584f, 0.009068544954061508f, 0.009752410463988781f, 0.0059394570998847485f, 0.009011608548462391f, 0.011805836111307144f, 0.007070146035403013f, 0.0038947996217757463f, 0.006577490363270044f, 0.008210975676774979f, 0.012139318510890007f, 0.004163285717368126f, 0.0054021296091377735f, 0.0056741503067314625f, 0.012606336735188961f, 0.00819386262446642f, 0.009616502560675144f, 0.0034165577962994576f, 0.005744616035372019f, 0.006544146686792374f, 0.009148978628218174f, 0.007986781187355518f, 0.007906358689069748f, 0.0051839216612279415f, 0.006383840460330248f, 0.007103165611624718f, 0.006075133569538593f, 0.005779585335403681f, 0.006931325886398554f, 0.008696362376213074f, 0.009152745828032494f, 0.005046222824603319f, 0.009095624089241028f, 0.0051888213492929935f, 0.004806465469300747f, 0.00505472207441926f, 0.00673188641667366f, 0.006458170246332884f, 0.0067825824953615665f, 0.007869676686823368f, 0.011175785213708878f, 0.01163856964558363f, 0.006275054067373276f, 0.008435359224677086f, 0.010117044672369957f, 0.0051654973067343235f, 0.005318463314324617f, 0.01348237507045269f, 0.012606151401996613f, 0.008134948089718819f, 0.011179370805621147f, 0.008728452026844025f, 0.008934230543673038f, 0.005314969923347235f, 0.01174876932054758f, 0.005373732652515173f, 0.009169477969408035f, 0.005219852551817894f, 0.012908745557069778f, 0.008167615160346031f, 0.006409605965018272f, 0.005524090491235256f, 0.005238799843937159f, 0.007668816484510899f, 0.007875652983784676f, 0.004917563404887915f, 0.005253632087260485f, 0.007304568774998188f, 0.009282849729061127f, 0.008864655159413815f, 0.008339744061231613f, 0.005037329625338316f, 0.0073198056779801846f, 0.006383405067026615f, 0.008882762864232063f, 0.003456756239756942f, 0.006007002666592598f, 0.007784993387758732f, 0.004113579168915749f, 0.015720004215836525f, 0.004999177530407906f, 0.006656511686742306f, 0.009580643847584724f, 0.00435101380571723f, 0.007922177202999592f, 0.008877996355295181f, 0.003818484954535961f, 0.008083092048764229f, 0.006470530293881893f, 0.014939668588340282f, 0.005210353061556816f, 0.0040028952062129974f, 0.011451270431280136f, 0.00724201463162899f, 0.007100534625351429f, 0.005686365533620119f, 0.004204961471259594f, 0.0070001957938075066f, 0.005982180126011372f, 0.006892459467053413f, 0.005885375663638115f, 0.011494165286421776f, 0.007659329101443291f, 0.009198173880577087f, 0.005547644570469856f, 0.005636518821120262f, 0.012170550413429737f, 0.007469563279300928f, 0.011316652409732342f, 0.008026594296097755f, 0.012045230716466904f, 0.005482574924826622f, 0.011399846524000168f, 0.006412983406335115f, 0.007485233247280121f, 0.005701023153960705f, 0.008260931819677353f, 0.006363581400364637f, 0.010425669141113758f, 0.011358506977558136f, 0.005508579779416323f, 0.006950000766664743f, 0.00800113845616579f, 0.006330480799078941f, 0.00845522154122591f, 0.005941100884228945f, 0.004766646772623062f, 0.002800893969833851f, 0.005560454912483692f, 0.007576635107398033f, 0.005952624604105949f, 0.0050920965149998665f, 0.006346683017909527f, 0.00787031464278698f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_62_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008235614513978362f, 0.0006815254455432296f, 0.0010993315372616053f, 0.0007610251195728779f, 0.0009792904602363706f, 0.0010365686612203717f, 0.0009287534048780799f, 0.000953808834310621f, 0.0008141006110236049f, 0.0015805542934685946f, 0.0009998261230066419f, 0.001153387245722115f, 0.0009358708630315959f, 0.001233600778505206f, 0.0008919661049731076f, 0.0010946585098281503f, 0.0015320117818191648f, 0.0017496433574706316f, 0.001165754278190434f, 0.0012811121996492147f, 0.0008333657751791179f, 0.0010556156048551202f, 0.0013989969156682491f, 0.000819346692878753f, 0.0008808851707726717f, 0.0014135119272395968f, 0.0010135064367204905f, 0.0010845365468412638f, 0.001338354079052806f, 0.0009582000784575939f, 0.0015670505817979574f, 0.0008704303181730211f, 0.0011275913566350937f, 0.0015045796753838658f, 0.0013375100679695606f, 0.0010805658530443907f, 0.001037174486555159f, 0.0013862657360732555f, 0.0013270837953314185f, 0.0007229430484585464f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_64_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0013099396601319313f, 0.0011199633590877056f, 0.0007961763767525554f, 0.001178776379674673f, 0.0010039116023108363f, 0.0007233968353830278f, 0.0009818528778851032f, 0.0008390904986299574f, 0.0008615354890935123f, 0.0012189304688945413f, 0.00117883353959769f, 0.001157557126134634f, 0.0008005988784134388f, 0.0008167421328835189f, 0.0013253075303509831f, 0.0006586068775504827f, 0.001100942143239081f, 0.0009204800007864833f, 0.0009717826033011079f, 0.0009778942912817001f, 0.0010780295124277472f, 0.0014777961187064648f, 0.0007503061788156629f, 0.0016966714756563306f, 0.0013000096660107374f, 0.0008396879420615733f, 0.0005984986783005297f, 0.0008996378746815026f, 0.0008825311670079827f, 0.0010964693501591682f, 0.0007752800011076033f, 0.001061421586200595f, 0.001106448587961495f, 0.0009678154019638896f, 0.001165812718681991f, 0.0014478752855211496f, 0.0009859524434432387f, 0.0008287099190056324f, 0.001308633596636355f, 0.000999382697045803f, 0.0012518842704594135f, 0.0012631417484954f, 0.000805396179202944f, 0.0011136153480038047f, 0.0007611119071952999f, 0.0012251101434230804f, 0.0010621568653732538f, 0.0010149730369448662f, 0.0009962233016267419f, 0.0008881649118848145f, 0.0012271571904420853f, 0.0012606870150193572f, 0.0013206590665504336f, 0.0008993987576104701f, 0.0009700215305201709f, 0.0012812220957130194f, 0.0008503508870489895f, 0.0008615220431238413f, 0.0010674484074115753f, 0.0010056261671707034f, 0.0008390650036744773f, 0.0009808707982301712f, 0.0009506465867161751f, 0.0011096660746261477f, 0.0010869402904063463f, 0.0017793470760807395f, 0.0014079863904044032f, 0.0009396583191119134f, 0.0009605676168575883f, 0.0013280438724905252f, 0.0010293674422428012f, 0.0009449302451685071f, 0.0011024803388863802f, 0.000957361189648509f, 0.0006300178938545287f, 0.0005609574727714062f, 0.001110573997721076f, 0.0010606817668303847f, 0.0010001820046454668f, 0.0013487448450177908f, 0.0015171071281656623f, 0.0011479567037895322f, 0.00165792356710881f, 0.0010089804418385029f, 0.0010900760535150766f, 0.0010348808718845248f, 0.0010226740268990397f, 0.0008104171138256788f, 0.0012045735493302345f, 0.001132239936850965f, 0.0009014465031214058f, 0.0006017760606482625f, 0.001049207872711122f, 0.0007568016881123185f, 0.0005931310006417334f, 0.0007970662554726005f, 0.0011772196739912033f, 0.0007807191577740014f, 0.0012185414088889956f, 0.0010400055907666683f, 0.0010809184750542045f, 0.0009465387556701899f, 0.0008070782059803605f, 0.0008831979357637465f, 0.0014029863523319364f, 0.0007616655784659088f, 0.00087035569595173f, 0.0013904304942116141f, 0.0007884606020525098f, 0.0008850669837556779f, 0.0011048250598832965f, 0.0013740278081968427f, 0.00047807543887756765f, 0.001038992078974843f, 0.0008686922956258059f, 0.0009656966431066394f, 0.0014937917003408074f, 0.0008413086761720479f, 0.0011783083900809288f, 0.0012905839830636978f, 0.0009497108403593302f, 0.000801584857981652f, 0.0012325766729190946f, 0.0013870734255760908f, 0.0008805686375126243f, 0.0014393532183021307f, 0.0009712809696793556f, 0.0009458568529225886f, 0.0011184223694726825f, 0.000996346934698522f, 0.0005197475547902286f, 0.000859899097122252f, 0.0007211366319097579f, 0.0010816152207553387f, 0.0009833462536334991f, 0.0008075084188021719f, 0.000993140391074121f, 0.001068884157575667f, 0.00132650975137949f, 0.0009685917757451534f, 0.0010681384010240436f, 0.0007784759509377182f, 0.0014748069224879146f, 0.0007583576370961964f, 0.0010421454207971692f, 0.0010589853627607226f, 0.001280894735828042f, 0.0007098090136423707f, 0.0009027348132804036f, 0.000999888521619141f, 0.0012769435998052359f, 0.0008545477176085114f, 0.0008728797547519207f, 0.0008338506449945271f, 0.000939567107707262f, 0.0013001118786633015f, 0.0009692002204246819f, 0.0007871916168369353f, 0.0008295295410789549f, 0.0009713281760923564f, 0.0013985310215502977f, 0.0009849030757322907f, 0.0010593424085527658f, 0.0007071855943650007f, 0.0011738792527467012f, 0.0007192729390226305f, 0.0008746028761379421f, 0.0011014139745384455f, 0.0009424889576621354f, 0.0010630645556375384f, 0.0010768033098429441f, 0.0010064305970445275f, 0.00132514419965446f, 0.0012680140789598227f, 0.0009771042969077826f, 0.0012097113067284226f, 0.0012031890219077468f, 0.0009699359070509672f, 0.0007732293452136219f, 0.0012073902180418372f, 0.0008966799359768629f, 0.0008769544074311852f, 0.0011297889286652207f, 0.0008763624937273562f, 0.0010952941374853253f, 0.0009518620208837092f, 0.0009785607689991593f, 0.0014417917700484395f, 0.0006816854584030807f, 0.0008013172773644328f, 0.0010788716608658433f, 0.0009534568525850773f, 0.0010878659086301923f, 0.0012018372071906924f, 0.0009009848581627011f, 0.001068337820470333f, 0.0009054169058799744f, 0.0007904738304205239f, 0.0010027382522821426f, 0.0009191440767608583f, 0.000888155831489712f, 0.0009071723325178027f, 0.0010900349589064717f, 0.0011658263392746449f, 0.001082525122910738f, 0.0009954827837646008f, 0.0010387449292466044f, 0.0014217095449566841f, 0.0013871819246560335f, 0.000951194204390049f, 0.0007475147140212357f, 0.0011647767387330532f, 0.0009762304835021496f, 0.0009759957902133465f, 0.0007581294630654156f, 0.0009417381370440125f, 0.0007516586920246482f, 0.0011327461106702685f, 0.001330095692537725f, 0.0008326999959535897f, 0.0013219587272033095f, 0.00116631924174726f, 0.000801772519480437f, 0.0014297314919531345f, 0.0009788047755137086f, 0.0015584591310471296f, 0.0013102148659527302f, 0.0014575753593817353f, 0.0005389161524362862f, 0.0009372488711960614f, 0.0008930034819059074f, 0.0006434983806684613f, 0.0007896297029219568f, 0.0011422894895076752f, 0.000763148651458323f, 0.0012106695212423801f, 0.0009750769822858274f, 0.000841921370010823f, 0.0010411156108602881f, 0.0012862483272328973f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 240,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008041998371481895f, 0.008251993916928768f, 0.011912582442164421f, 0.009928847663104534f, 0.007550529204308987f, 0.005107060540467501f, 0.005515402182936668f, 0.005095346365123987f, 0.008424839936196804f, 0.0042420788668096066f, 0.008251051418483257f, 0.005883106030523777f, 0.0034396483097225428f, 0.00817847065627575f, 0.006220594979822636f, 0.0050864205695688725f, 0.004904151428490877f, 0.004081690218299627f, 0.010747341439127922f, 0.006699534598737955f, 0.004203908145427704f, 0.008155361749231815f, 0.010979070328176022f, 0.006705042440444231f, 0.007321992889046669f, 0.006775925867259502f, 0.005669933278113604f, 0.011408188380300999f, 0.007632895838469267f, 0.007807551417499781f, 0.0059210266917943954f, 0.00541197182610631f, 0.007000014651566744f, 0.010223730467259884f, 0.006881301756948233f, 0.007145354524254799f, 0.007196631282567978f, 0.006039269734174013f, 0.00532453041523695f, 0.0056880805641412735f, 0.006947330664843321f, 0.00723539013415575f, 0.01051272638142109f, 0.006992632523179054f, 0.0071207438595592976f, 0.006136718206107616f, 0.0073289331048727036f, 0.005228170193731785f, 0.005882212892174721f, 0.004139563534408808f, 0.009861789643764496f, 0.0067853848449885845f, 0.006959904450923204f, 0.010580913163721561f, 0.004667588043957949f, 0.006852039601653814f, 0.003414642531424761f, 0.006795186549425125f, 0.012004495598375797f, 0.006119309458881617f, 0.009118459187448025f, 0.009814059361815453f, 0.005454811733216047f, 0.007939811795949936f, 0.007871081121265888f, 0.006003789138048887f, 0.0054762535728514194f, 0.007080339826643467f, 0.004672351758927107f, 0.013013631105422974f, 0.009186185896396637f, 0.007207576185464859f, 0.0046134344302117825f, 0.008211792446672916f, 0.004229677841067314f, 0.005912742577493191f, 0.004573410376906395f, 0.005410822574049234f, 0.00431782566010952f, 0.007229093927890062f, 0.00819117110222578f, 0.006451686844229698f, 0.0063285063952207565f, 0.006446158513426781f, 0.0060347444377839565f, 0.0050048502162098885f, 0.005018116906285286f, 0.008623401634395123f, 0.007178333587944508f, 0.005731001030653715f, 0.007807571440935135f, 0.006276438478380442f, 0.0067361025139689445f, 0.006523475516587496f, 0.00621575815603137f, 0.007082255557179451f, 0.008349595591425896f, 0.014588811434805393f, 0.00655585341155529f, 0.008694745600223541f, 0.007340454962104559f, 0.007872527465224266f, 0.0071216002106666565f, 0.009898009710013866f, 0.013187164440751076f, 0.008042708039283752f, 0.007261971477419138f, 0.00825177039951086f, 0.0073145916685462f, 0.00948650948703289f, 0.009778376668691635f, 0.0061144097708165646f, 0.007000372279435396f, 0.008353727869689465f, 0.0054445406422019005f, 0.009556145407259464f, 0.006852506659924984f, 0.0076507083140313625f, 0.00525351706892252f, 0.0070633781142532825f, 0.008034929633140564f, 0.005546788685023785f, 0.009052427485585213f, 0.00733407586812973f, 0.0072298296727240086f, 0.008299660868942738f, 0.006509281694889069f, 0.006036949343979359f, 0.004862924572080374f, 0.006304544862359762f, 0.007186789996922016f, 0.00916263461112976f, 0.0066770887933671474f, 0.004553147125989199f, 0.00795773696154356f, 0.008855770342051983f, 0.008295085281133652f, 0.008375787176191807f, 0.007528967689722776f, 0.004655294585973024f, 0.006591035984456539f, 0.0066433800384402275f, 0.010914226062595844f, 0.010122419334948063f, 0.0068340604193508625f, 0.006872569676488638f, 0.007787992712110281f, 0.008697360754013062f, 0.00773360300809145f, 0.008917870000004768f, 0.00943300686776638f, 0.005949491634964943f, 0.011729458346962929f, 0.005787535570561886f, 0.011154081672430038f, 0.0067495848052203655f, 0.008607440628111362f, 0.010073792189359665f, 0.006885647773742676f, 0.0031312545761466026f, 0.008634692057967186f, 0.00541124539449811f, 0.008054833859205246f, 0.006752857007086277f, 0.004532766528427601f, 0.005449031945317984f, 0.009025434032082558f, 0.004890562500804663f, 0.008478778414428234f, 0.00668365927413106f, 0.009541344828903675f, 0.008472849614918232f, 0.008259911090135574f, 0.006542271934449673f, 0.007262311410158873f, 0.0055932714603841305f, 0.010997351258993149f, 0.006949594710022211f, 0.0044218688271939754f, 0.006282619666308165f, 0.004714461043477058f, 0.008364048786461353f, 0.008345754817128181f, 0.007333558052778244f, 0.005772693548351526f, 0.007231961004436016f, 0.004126721527427435f, 0.007168076001107693f, 0.006926298141479492f, 0.010031265206634998f, 0.006496893707662821f, 0.006911951117217541f, 0.005439674016088247f, 0.00992999691516161f, 0.008495469577610493f, 0.007217217702418566f, 0.006016797386109829f, 0.00817498192191124f, 0.005816157441586256f, 0.008840727619826794f, 0.00579196959733963f, 0.004327541682869196f, 0.008725574240088463f, 0.00526120001450181f, 0.007693357765674591f, 0.008835854940116405f, 0.006160440389066935f, 0.00686463201418519f, 0.010420235805213451f, 0.005990274716168642f, 0.006965848617255688f, 0.010723408311605453f, 0.014314359053969383f, 0.006194745190441608f, 0.008658934384584427f, 0.005544854328036308f, 0.008843392133712769f, 0.0076719895005226135f, 0.014506165869534016f, 0.008488585241138935f, 0.007084140554070473f, 0.008177388459444046f, 0.007196254096925259f, 0.009042729623615742f, 0.008999580517411232f, 0.0052658491767942905f, 0.008626645430922508f, 0.006936995312571526f, 0.008738403208553791f, 0.00867360271513462f, 0.006560599431395531f, 0.009747645817697048f, 0.007572890724986792f, 0.009003310464322567f, 0.007089860271662474f, 0.004204506054520607f, 0.004212822765111923f, 0.009822366759181023f, 0.008066978305578232f, 0.009432774037122726f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_66_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 80,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0014016504865139723f, 0.0017721300246194005f, 0.0010304726893082261f, 0.0009070784435607493f, 0.0012342953123152256f, 0.0013650147011503577f, 0.0009513176628388464f, 0.0008584129391238093f, 0.002007551258429885f, 0.0009346758015453815f, 0.001371024758554995f, 0.0008503461722284555f, 0.0014287254307419062f, 0.0010051155695691705f, 0.0009391101193614304f, 0.000907349050976336f, 0.0008737817406654358f, 0.0019293223740532994f, 0.0006967771332710981f, 0.001179879647679627f, 0.0009660799405537546f, 0.0008540715207345784f, 0.0006936260615475476f, 0.0011253692209720612f, 0.0007230532355606556f, 0.001086326432414353f, 0.0008663023472763598f, 0.0007771839736960828f, 0.0009719760855659842f, 0.0011435968335717916f, 0.000805578485596925f, 0.0007362471078522503f, 0.0008598449057899415f, 0.001218314515426755f, 0.0009412552462890744f, 0.000807961740065366f, 0.000827961484901607f, 0.0008561113500036299f, 0.0017841702792793512f, 0.0008209046209231019f, 0.0007718492415733635f, 0.0007259494159370661f, 0.0007899387273937464f, 0.0008470393950119615f, 0.001018072129227221f, 0.0010961503721773624f, 0.0008278980385512114f, 0.0013775350525975227f, 0.0007893213187344372f, 0.001153538003563881f, 0.000818782253190875f, 0.0008468471933156252f, 0.0015548310475423932f, 0.0021328923758119345f, 0.0008139690617099404f, 0.0011787187540903687f, 0.0011332600843161345f, 0.001042742864228785f, 0.0010065307142212987f, 0.0007397071458399296f, 0.0006002614391036332f, 0.0011047057341784239f, 0.0015791184268891811f, 0.0011504747672006488f, 0.0009174231090582907f, 0.0007675273809581995f, 0.0008215075358748436f, 0.0007313463720493019f, 0.001970360754057765f, 0.0008372321026399732f, 0.0013396803988143802f, 0.0007672010106034577f, 0.0008842764073051512f, 0.000835921207908541f, 0.0008610318182036281f, 0.0008822534000501037f, 0.0009702692623250186f, 0.0014175137039273977f, 0.0012597710592672229f, 0.0011050530010834336f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000612981675658375f, 0.000909398659132421f, 0.0007383517222478986f, 0.0005646147183142602f, 0.0005101258866488934f, 0.0004160602984484285f, 0.0005249183741398156f, 0.000494650739710778f, 0.0006025240872986615f, 0.00047461249050684273f, 0.0012103194603696465f, 0.0007354131084866822f, 0.0014151569921523333f, 0.0004757787100970745f, 0.00040107962558977306f, 0.0006752585177309811f, 0.0010721941944211721f, 0.0006057280115783215f, 0.00047527154674753547f, 0.0007698999834246933f, 0.000491380225867033f, 0.0005167655181139708f, 0.0004886516835540533f, 0.0005646967329084873f, 0.0004581199900712818f, 0.0004796744033228606f, 0.0008085696608759463f, 0.0005855674971826375f, 0.0006302003748714924f, 0.0007534342003054917f, 0.0004948480054736137f, 0.0004304619797039777f, 0.000620173173956573f, 0.000614984252024442f, 0.000501569826155901f, 0.0006814443622715771f, 0.0016328484052792192f, 0.0009070844389498234f, 0.0008928527822718024f, 0.0006223130039870739f, 0.0006171652930788696f, 0.0005148282507434487f, 0.0008779010968282819f, 0.0006356045487336814f, 0.00048766881809569895f, 0.0006520465831272304f, 0.0006280177622102201f, 0.0006982784252613783f, 0.0006095084827393293f, 0.0005705644143745303f, 0.000617466401308775f, 0.0005573928356170654f, 0.000697066483553499f, 0.0005717166932299733f, 0.0006450494984164834f, 0.0005477021331898868f, 0.0004533546743914485f, 0.0006294821505434811f, 0.00038885686080902815f, 0.0004921050276607275f, 0.0009241247898899019f, 0.0006425392348319292f, 0.000659355369862169f, 0.0005980675341561437f, 0.0008419891819357872f, 0.00047554363845847547f, 0.0012800056720152497f, 0.0005660731112584472f, 0.0006624545203521848f, 0.0004584082053042948f, 0.0005392199964262545f, 0.0005825297557748854f, 0.0004957661149092019f, 0.0010877365712076426f, 0.0008948695613071322f, 0.00046573326108045876f, 0.0005436271894723177f, 0.0007066313992254436f, 0.000523982394952327f, 0.0004888690891675651f, 0.0008070241892710328f, 0.001309712533839047f, 0.0004891610587947071f, 0.0006340136751532555f, 0.0006973582203499973f, 0.0003847955958917737f, 0.0006418467964977026f, 0.0006503957556560636f, 0.0006336125661619008f, 0.0006029355572536588f, 0.0006651529693044722f, 0.0006807778845541179f, 0.0009502380271442235f, 0.0006022988236509264f, 0.0007673402433283627f, 0.001273053465411067f, 0.0007311119115911424f, 0.0006855961983092129f, 0.0005835213814862072f, 0.0006487476639449596f, 0.0005269065732136369f, 0.00046503436169587076f, 0.0005098789115436375f, 0.0004701520374510437f, 0.0005481942789629102f, 0.0005642533651553094f, 0.00055218196939677f, 0.0004966280539520085f, 0.0006422653677873313f, 0.0004568928270600736f, 0.00039214585558511317f, 0.0005838423385284841f, 0.000727813458070159f, 0.00042521461728028953f, 0.0007891376153565943f, 0.0006376287783496082f, 0.0006457663839682937f, 0.0005766270332969725f, 0.0008505528094246984f, 0.0005687962984666228f, 0.0005503675783984363f, 0.0013641987461596727f, 0.0006362766143865883f, 0.0006713559268973768f, 0.000711995642632246f, 0.000562295550480485f, 0.0005738437175750732f, 0.000614785123616457f, 0.0008814666070975363f, 0.0007342586759477854f, 0.0005236421711742878f, 0.000612429459579289f, 0.0010154412593692541f, 0.0004593385965563357f, 0.0009094955748878419f, 0.0005777650512754917f, 0.0005175314145162702f, 0.0005377259221859276f, 0.0006021471926942468f, 0.001050962251611054f, 0.000717247137799859f, 0.000957451353315264f, 0.0006787464371882379f, 0.0007620063843205571f, 0.0010699478443711996f, 0.0010251624044030905f, 0.0010371438693255186f, 0.0005105709424242377f, 0.0012256825575605035f, 0.0009052311070263386f, 0.000643814739305526f, 0.0006373663200065494f, 0.0005924574797973037f, 0.0005419733934104443f, 0.0006229041027836502f, 0.0004794610140379518f, 0.0005889243329875171f, 0.000733075721655041f, 0.0005708805401809514f, 0.0005380857037380338f, 0.0007289934437721968f, 0.0006244720425456762f, 0.0005163351888768375f, 0.0008701517945155501f, 0.0005266485968604684f, 0.0009374017245136201f, 0.0010007956298068166f, 0.000708386127371341f, 0.00072132283821702f, 0.00040360583807341754f, 0.0004414327850099653f, 0.0013141353847458959f, 0.0007080144132487476f, 0.0005907659069634974f, 0.00042558691347949207f, 0.0005465897847898304f, 0.0010225552832707763f, 0.0005500909173861146f, 0.0006820906419306993f, 0.0004684987652581185f, 0.0006611568969674408f, 0.000727371487300843f, 0.0014133814256638288f, 0.0005008301814086735f, 0.0005619342555291951f, 0.0006279959343373775f, 0.000533835671376437f, 0.0003515860007610172f, 0.000635305535979569f, 0.0006072070100344718f, 0.0009640930220484734f, 0.0008015782223083079f, 0.0005728829419240355f, 0.0006930896197445691f, 0.0005210364470258355f, 0.0004667213070206344f, 0.000538366730324924f, 0.0005705431685782969f, 0.0005313881556503475f, 0.0007909145206212997f, 0.0006159464828670025f, 0.0004090645525138825f, 0.0005357548943720758f, 0.0005873841582797468f, 0.0006765041034668684f, 0.0005403425311669707f, 0.0005192303797230124f, 0.0006386499153450131f, 0.0005321568460203707f, 0.00045263601350598037f, 0.000482351693790406f, 0.0014816855546087027f, 0.0005283479113131762f, 0.0006503717158921063f, 0.0010832903208211064f, 0.0005906413425691426f, 0.0005394048639573157f, 0.0004077790945302695f, 0.00045969762140884995f, 0.0006829251651652157f, 0.0005359245697036386f, 0.0007380714523606002f, 0.00043039279989898205f, 0.0009095113491639495f, 0.000575176440179348f, 0.0004715614777524024f, 0.0005965231684967875f, 0.0014767624670639634f, 0.0005470433970913291f, 0.000656621647067368f, 0.0004309344803914428f, 0.0004834570863749832f, 0.0005984543240629137f, 0.0006154366419650614f, 0.0006895076367072761f, 0.0005897863884456456f, 0.0005985058378428221f, 0.0011744174407795072f, 0.0005172733799554408f, 0.0009402175201103091f, 0.0006330526666715741f, 0.0005257446900941432f, 0.000861851847730577f, 0.0006835536914877594f, 0.0005061773117631674f, 0.0006959534366615117f, 0.0005796562181785703f, 0.0005566478939726949f, 0.0004705533501692116f, 0.000720734242349863f, 0.0005124933668412268f, 0.0008135063108056784f, 0.0008973532821983099f, 0.0005907949525862932f, 0.000540638982784003f, 0.0006936793215572834f, 0.000878486898727715f, 0.0006358794635161757f, 0.0005772524164058268f, 0.000533703132532537f, 0.0006265610572881997f, 0.00047791929682716727f, 0.0014335160376504064f, 0.0006148861721158028f, 0.000568134244531393f, 0.0005754148587584496f, 0.0004627735761459917f, 0.0019434605492278934f, 0.0005137308617122471f, 0.0006980224279686809f, 0.0007388746598735452f, 0.0013899082550778985f, 0.0009114209678955376f, 0.0006055906414985657f, 0.0016178839141502976f, 0.0005115491803735495f, 0.0005261187325231731f, 0.00038380801561288536f, 0.0006640482461079955f, 0.0006137161981314421f, 0.0005735937156714499f, 0.0005312611465342343f, 0.0006004613824188709f, 0.0005600700969807804f, 0.00047233625082299113f, 0.0011502534616738558f, 0.0007217508391477168f, 0.0009866683976724744f, 0.0005258837481960654f, 0.0008007674477994442f, 0.00065900624031201f, 0.0006138219614513218f, 0.0005784281529486179f, 0.0006586400559172034f, 0.0009081949829123914f, 0.0005889592575840652f, 0.0005331736174412072f, 0.0009988975943997502f, 0.0011146070901304483f, 0.0009313496993854642f, 0.000522713758982718f, 0.0006799627444706857f, 0.0005713743157684803f, 0.0006346859154291451f, 0.0005109839257784188f, 0.000831214536447078f, 0.0007267326000146568f, 0.0006198837654665112f, 0.0004917650367133319f, 0.0004788344958797097f, 0.0010723078157752752f, 0.0005179410218261182f, 0.0005008447333239019f, 0.0006096707074902952f, 0.0004266680043656379f, 0.0009829890914261341f, 0.0005879408563487232f, 0.0005923715070821345f, 0.0009114558924920857f, 0.00046431252849288285f, 0.0009429135825484991f, 0.0005546359461732209f, 0.0005515657248906791f, 0.0005980744026601315f, 0.00048557418631389737f, 0.0009015730465762317f, 0.000779409019742161f, 0.0004832474805880338f, 0.000590848212596029f, 0.0005715414299629629f, 0.0008910566102713346f, 0.0006305471761152148f, 0.0009466004557907581f, 0.0006494324188679457f, 0.0004888797993771732f, 0.0005758787738159299f, 0.0004401440965011716f, 0.0005167979979887605f, 0.00047142765833996236f, 0.00045784059329889715f, 0.0006597355240955949f, 0.0005226969951763749f, 0.0003826578613370657f, 0.00038919749204069376f, 0.0004820105095859617f, 0.0003910422674380243f, 0.0006013468955643475f, 0.0005164557369425893f, 0.0006708683795295656f, 0.0006629858980886638f, 0.0006570542464032769f, 0.000896200945135206f, 0.0006917706923559308f, 0.0004826786171179265f, 0.0007533721509389579f, 0.0005925539880990982f, 0.0012207404943183064f, 0.0006048614741303027f, 0.0005979919224046171f, 0.0008787844562903047f, 0.0004188008897472173f, 0.00044090684968978167f, 0.0005483870627358556f, 0.0004387071239762008f, 0.0005712485872209072f, 0.0011709481477737427f, 0.0006845428724773228f, 0.0005268499371595681f, 0.0011002252576872706f, 0.0005053576896898448f, 0.0005838408833369613f, 0.0005908193998038769f, 0.0008588669588789344f, 0.0011595026589930058f, 0.0005873374175280333f, 0.0004779995360877365f, 0.00046254106564447284f, 0.0005574421375058591f, 0.00047554701450280845f, 0.0014015904162079096f, 0.0004308584611862898f, 0.00043049524538218975f, 0.0004860036715399474f, 0.0006944963824935257f, 0.0005655693239532411f, 0.0005516725359484553f, 0.0010714537929743528f, 0.000539545260835439f, 0.0007406278164125979f, 0.0004801784234587103f, 0.0008371344883926213f, 0.0016099429922178388f, 0.0006668747519142926f, 0.0005415380583144724f, 0.0006210874416865408f, 0.0004429652472026646f, 0.0005137451807968318f, 0.0004937259363941848f, 0.0003607691905926913f, 0.0004379096790216863f, 0.0005944208824075758f, 0.00047249835915863514f, 0.0015022748848423362f, 0.0009108950616791844f, 0.0005548478802666068f, 0.0005390112637542188f, 0.0005054318462498486f, 0.000538924359716475f, 0.0006435526302084327f, 0.00047131936298683286f, 0.0007724198512732983f, 0.0008630506927147508f, 0.0005862421821802855f, 0.0005206823698244989f, 0.0008931153570301831f, 0.0013022779021412134f, 0.0007320050499401987f, 0.0005517426179721951f, 0.0004085742693860084f, 0.001044595381245017f, 0.0005507385358214378f, 0.0005115303210914135f, 0.000584753230214119f, 0.0008377424674108624f, 0.0006084636552259326f, 0.0006365376757457852f, 0.000989503343589604f, 0.0004912702133879066f, 0.0005296497256495059f, 0.0005066158482804894f, 0.0005680275498889387f, 0.0005873423651792109f, 0.0006265594274736941f, 0.0005961786373518407f, 0.0005859992816112936f, 0.0005443523405119777f, 0.00048756386968307197f, 0.0005053754430264235f, 0.0005713221034966409f, 0.0005253762356005609f, 0.0006105005159042776f, 0.000773246050812304f, 0.0005550147034227848f, 0.0005474634235724807f, 0.0006206641555763781f, 0.00045926589518785477f, 0.0006046521593816578f, 0.000573794764932245f, 0.0005159848951734602f, 0.0005301567725837231f, 0.0005466369912028313f, 0.0007878032047301531f, 0.0006142633501440287f, 0.0004150901222601533f, 0.0006671705050393939f, 0.000587544753216207f, 0.0008287067175842822f, 0.0008200317970477045f, 0.0004644531582016498f, 0.0015691538574174047f, 0.0004518016066867858f, 0.0005020800745114684f, 0.0008165081962943077f, 0.0006098973099142313f, 0.00046727922745049f, 0.0006841321010142565f, 0.00046678315266035497f, 0.0007036033202894032f, 0.0004990382003597915f, 0.0005507600726559758f, 0.0003748282906599343f, 0.0005900705000385642f, 0.0007120886584743857f, 0.0005686454242095351f, 0.0011646816274151206f, 0.0005695832660421729f, 0.00082890730118379f, 0.0006140168407000601f, 0.00047347930376417935f, 0.00041937135392799973f, 0.0004933057934977114f, 0.0004656837845686823f, 0.000554959406144917f, 0.0005838899523951113f, 0.00044931675074622035f, 0.0006849482888355851f, 0.0005140063003636897f, 0.0004700666759163141f, 0.0008014655322767794f, 0.0012573270360007882f, 0.00046782640856690705f, 0.000933293835259974f, 0.0008133580558933318f, 0.0005050669424235821f, 0.0005816183402203023f, 0.0005923501448705792f, 0.0007141557871364057f, 0.0004054367309436202f, 0.0011412320891395211f, 0.0005018265801481903f, 0.0006810259073972702f, 0.0006394342053681612f, 0.0004405522777233273f, 0.0005326870596036315f, 0.0006716055213473737f, 0.000416693277657032f, 0.000602892367169261f, 0.0004719429125543684f, 0.0011174763785675168f, 0.00042173004476353526f, 0.0005625641788356006f, 0.0008147774497047067f, 0.0005389204015955329f, 0.000764929864089936f, 0.0010870437836274505f, 0.0006124108913354576f, 0.0006330584874376655f, 0.00048688630340620875f, 0.0019516610773280263f, 0.000735015666577965f, 0.0004814346903003752f, 0.0005402680253610015f, 0.0006137369200587273f, 0.0005175478290766478f, 0.00041038013296201825f, 0.0005610563675872982f, 0.0006687410059385002f, 0.0005740781780332327f, 0.0006095666904002428f, 0.0004741973243653774f, 0.0004011726996395737f, 0.00049279083032161f, 0.0008686986402608454f, 0.0006136678857728839f, 0.00067480793222785f, 0.0004952377057634294f, 0.0006890641525387764f, 0.0005599058931693435f, 0.0009356370428577065f, 0.0007141126552596688f, 0.0010740184225142002f, 0.00044106077984906733f, 0.0006828656769357622f, 0.0006452539237216115f, 0.0005246135988272727f, 0.0005824958207085729f, 0.0005142109002918005f, 0.0010768184438347816f, 0.0004109887813683599f, 0.0012324502458795905f, 0.0005176588310860097f, 0.0004319212166592479f, 0.0005180315929464996f, 0.0005630096420645714f, 0.0007040890632197261f, 0.0005135973333381116f, 0.0004631171468645334f, 0.0005541533464565873f, 0.0009636319591663778f, 0.0004741499142255634f, 0.0004797834262717515f, 0.0006813626387156546f, 0.0006009241915307939f, 0.0005691708065569401f, 0.0009347088052891195f, 0.00047353465924970806f, 0.0004939750069752336f, 0.0006369483307935297f, 0.0004991614259779453f, 0.0008526343735866249f, 0.00041991655598394573f, 0.00047180012916214764f, 0.0006512858672067523f, 0.000579299870878458f, 0.0008147606276907027f, 0.0006529955426231027f, 0.0006164498045109212f, 0.0005512484931387007f, 0.0007084565004333854f, 0.0004929269780404866f, 0.0005114954547025263f, 0.0007513098535127938f, 0.0009557314333505929f, 0.0005518092657439411f, 0.0007555843912996352f, 0.0005067901802249253f, 0.000586855283472687f, 0.0006528761005029082f, 0.0003789468319155276f, 0.0005007741274312139f, 0.0005977761466056108f, 0.0005703442147932947f, 0.0008078846731223166f, 0.0006166649982333183f, 0.0005986527539789677f, 0.0007309718639589846f, 0.0006764696445316076f, 0.0005073046195320785f, 0.0004390317772049457f, 0.0006069315131753683f, 0.0008446455467492342f, 0.0005400896188803017f, 0.0011240027379244566f, 0.0008474764763377607f, 0.0007009673281572759f, 0.0005759043269790709f, 0.0008630036609247327f, 0.0005896359216421843f, 0.0007770148222334683f, 0.0005557732074521482f, 0.0005753667210228741f, 0.0007799642626196146f, 0.0005411276943050325f, 0.0007403285126201808f, 0.0004256337124388665f, 0.0006614652811549604f, 0.0008585950708948076f, 0.0006244716350920498f, 0.0008818834321573377f, 0.0005997242406010628f, 0.0016443979693576694f, 0.0007291539222933352f, 0.0009416271350346506f, 0.00048745315871201456f, 0.00100703164935112f, 0.00040568204713054f, 0.0007018002797849476f, 0.0005739054176956415f, 0.00044791499385610223f, 0.0004530722799245268f, 0.0006530882674269378f, 0.000444573350250721f, 0.0005186733324080706f, 0.0008080716943368316f, 0.0008217157446779311f, 0.0006861866568215191f, 0.0008070757030509412f, 0.0006803660071454942f, 0.0011462932452559471f, 0.00040845194598659873f, 0.0006210427382029593f, 0.0006235927576199174f, 0.000587230664677918f, 0.0004042536311317235f, 0.00043402580195106566f, 0.000730345374904573f, 0.0005892938352189958f, 0.00045002144179306924f, 0.0004958158824592829f, 0.0007319343276321888f, 0.0009099264279939234f, 0.00043443116010166705f, 0.0006155785522423685f, 0.0005911461776122451f, 0.001144265290349722f, 0.0007231624331325293f, 0.000489159778226167f, 0.0019979996141046286f, 0.0005332478904165328f, 0.00039850870962254703f, 0.0005123523878864944f, 0.0006909488001838326f, 0.00046272057807072997f, 0.00044832861749455333f, 0.0008176809642463923f, 0.000548587937373668f, 0.000979508855380118f, 0.0006235334440134466f, 0.0007209123577922583f, 0.00046560808550566435f, 0.0005968092591501772f, 0.0005769706331193447f, 0.00042400957318022847f, 0.0007668975740671158f, 0.0005758931511081755f, 0.0006232204032130539f, 0.0005047843442298472f, 0.0012259327340871096f, 0.0004952842718921602f, 0.0005722633795812726f, 0.0005155040416866541f, 0.0009583635837770998f, 0.0005645443452522159f, 0.001164553570561111f, 0.0009282068931497633f, 0.0005310638807713985f, 0.0006007419433444738f, 0.0005258189630694687f, 0.0009751222678460181f, 0.0006866198382340372f, 0.00079188501695171f, 0.0006726325373165309f, 0.00041553578921593726f, 0.0005221846513450146f, 0.0005204510525800288f, 0.0006482821772806346f, 0.0004215151129756123f, 0.0005454950733110309f, 0.00038283728645183146f, 0.000494784617330879f, 0.0005721552879549563f, 0.0004903154331259429f, 0.0005282841739244759f, 0.0005465528811328113f, 0.0007362555479630828f, 0.00040794507367536426f, 0.000896042154636234f, 0.0008837055647745728f, 0.0005805867840535939f, 0.000482814823044464f, 0.0006695322808809578f, 0.0006050682277418673f, 0.001085254130885005f, 0.0006395893869921565f, 0.0005919873947277665f, 0.0005870827008038759f, 0.000580405758228153f, 0.0006149173132143915f, 0.0006376057863235474f, 0.000581863452680409f, 0.0007077138870954514f, 0.0005735752638429403f, 0.0005879371310584247f, 0.0006854715757071972f, 0.0007602297700941563f, 0.0007750674849376082f, 0.0006370528717525303f, 0.0012035203399136662f, 0.0003879481228068471f, 0.0004711155779659748f, 0.0007780747255310416f, 0.0004910009447485209f, 0.0005581480800174177f, 0.0005438723601400852f, 0.0005120557034388185f, 0.00040003450703807175f, 0.0004990810411982238f, 0.0006144964136183262f, 0.000570880074519664f, 0.00043356980313546956f, 0.0010422684717923403f, 0.0006307285511866212f, 0.000694397313054651f, 0.0005752244614996016f, 0.000534821127075702f, 0.0005203476175665855f, 0.0007026526727713645f, 0.0009010136127471924f, 0.0005837422795593739f, 0.0005663912161253393f, 0.00048793546739034355f, 0.0005157595151104033f, 0.0005617269780486822f, 0.0005552709917537868f, 0.0007959610666148365f, 0.0005322915385477245f, 0.0011113528162240982f, 0.0005872303736396134f, 0.001225922955200076f, 0.0006046609487384558f, 0.0006916823913343251f, 0.0006263407994993031f, 0.0006323122652247548f, 0.0005249440437182784f, 0.0005727080861106515f, 0.0006062461179681122f, 0.0006577554740943015f, 0.0006740555400028825f, 0.0006543698837049305f, 0.00042745537939481437f, 0.0008163985912688076f, 0.0007109487196430564f, 0.000560294312890619f, 0.0006177189643494785f, 0.0007421355112455785f, 0.0005616665002889931f, 0.0006225210963748395f, 0.00048358782078139484f, 0.0006659534410573542f, 0.0005683802883140743f, 0.0005233631818555295f, 0.0004502618685364723f, 0.0007646788144484162f, 0.0005556856631301343f, 0.0010382940527051687f, 0.0006664525135420263f, 0.0005720215849578381f, 0.0005728814285248518f, 0.0008170926012098789f, 0.0006176776369102299f, 0.0005930309416726232f, 0.0006049696239642799f, 0.0010260099079459906f, 0.0007118067587725818f, 0.0004889481351710856f, 0.00048085718299262226f, 0.0005155436228960752f, 0.0003925501659978181f, 0.0004913166048936546f, 0.0009355841320939362f, 0.0007211636402644217f, 0.0006459222640842199f, 0.0007725365576334298f, 0.0004673683433793485f, 0.0004996761563234031f, 0.000766127894166857f, 0.0004886288079433143f, 0.0005303917569108307f, 0.0007200792897492647f, 0.0006897212588228285f, 0.0005556453252211213f, 0.0012033936800435185f, 0.0005206676432862878f, 0.00043932427070103586f, 0.0008602505549788475f, 0.0009493905236013234f, 0.000900851737242192f, 0.0005199646693654358f, 0.0003975960717070848f, 0.0004467011021915823f, 0.0006132233538664877f, 0.0005725060473196208f, 0.0006231642910279334f, 0.0005207442445680499f, 0.0007268888875842094f, 0.00048457426601089537f, 0.0005189353250898421f, 0.0005072247004136443f, 0.0005963675212115049f, 0.0005477858940139413f, 0.0004439900803845376f, 0.0005067175952717662f, 0.0004605534195434302f, 0.00047522163367830217f, 0.0011519393883645535f, 0.0007968232966959476f, 0.0006627708207815886f, 0.0006401126156561077f, 0.0007690182537771761f, 0.0006180154741741717f, 0.0006443452439270914f, 0.000785050680860877f, 0.0003964283096138388f, 0.0008746185922063887f, 0.0008011806639842689f, 0.0006825811578892171f, 0.001210442860610783f, 0.000568938790820539f, 0.0005902689299546182f, 0.00043515602010302246f, 0.00042281788773834705f, 0.00047766792704351246f, 0.0006548738456331193f, 0.0008208936196751893f, 0.0008595986873842776f, 0.0006406971369870007f, 0.0003901332675013691f, 0.0010013111168518662f, 0.0004975123447366059f, 0.001194967539049685f, 0.0005456209764815867f, 0.0005431729950942099f, 0.0012328409356996417f, 0.0006744653219357133f, 0.0008570358622819185f, 0.0004615312209352851f, 0.0005175145925022662f, 0.0007300456636585295f, 0.0005337410839274526f, 0.0005602067103609443f, 0.0007164916605688632f, 0.0005656813154928386f, 0.0006018150597810745f, 0.0004692939401138574f, 0.0007967035635374486f, 0.000422194687416777f, 0.0006892365636304021f, 0.0006727828877046704f, 0.0005323647637851536f, 0.0004711422952823341f, 0.0005037244409322739f, 0.001232024747878313f, 0.0005050057079643011f, 0.0006474736146628857f, 0.0005098080146126449f, 0.00045788451097905636f, 0.0004989956505596638f, 0.0006177991162985563f, 0.00045236852020025253f, 0.0005175030673854053f, 0.0014844631077721715f, 0.00046724104322493076f, 0.0006130943656899035f, 0.0006700643571093678f, 0.0007033828878775239f, 0.0006910634692758322f, 0.000492214341647923f, 0.0007151652243919671f, 0.0005872795009054244f, 0.0004420590994413942f, 0.0005008215084671974f, 0.0005634146509692073f, 0.000961172510869801f, 0.0005180348525755107f, 0.0006285887793637812f, 0.0004997545038349926f, 0.0006264840485528111f, 0.00043342169374227524f, 0.00041527277790009975f, 0.0007067269179970026f, 0.0007219144026748836f, 0.0008344232919625938f, 0.0004937181365676224f, 0.0005082391435280442f, 0.00047833105782046914f, 0.0004750211082864553f, 0.0006217776099219918f, 0.00046512242988683283f, 0.0005500983679667115f, 0.0009882379090413451f, 0.0006010726210661232f, 0.0004616200749296695f, 0.000850379467010498f, 0.0005692527047358453f, 0.0007008629036135972f, 0.000512680213432759f, 0.0005455822683870792f, 0.0005330675048753619f, 0.0005164072499610484f, 0.0005213874974288046f, 0.00040577162872068584f, 0.0007756869890727103f, 0.00043785799061879516f, 0.0004798706795554608f, 0.00048620745656080544f, 0.0004934901371598244f, 0.0005324114463292062f, 0.0012521174503490329f, 0.0011286069639027119f, 0.0007634753710590303f, 0.0004514407191891223f, 0.0006509466329589486f, 0.0006030877702869475f, 0.0006556811858899891f, 0.0008440002566203475f, 0.0005492924829013646f, 0.0014243234181776643f, 0.0005254261777736247f, 0.0014363561058416963f, 0.0005733076250180602f, 0.0004481755313463509f, 0.0006081471219658852f, 0.0008003233233466744f, 0.0005158279673196375f, 0.0005862194229848683f, 0.0006745347054675221f, 0.0009110482060350478f, 0.00041575252544134855f, 0.0005423952243290842f, 0.000554480473510921f, 0.0009039223659783602f, 0.000606885994784534f, 0.0005181794404052198f, 0.00041719817090779543f, 0.0005956940003670752f, 0.0016086683608591557f, 0.0006033341633155942f, 0.0004640449187718332f, 0.0006550284451805055f, 0.0012522918405011296f, 0.0006708880537189543f, 0.0008034784696064889f, 0.000569183670450002f, 0.0004768863436765969f, 0.0010003576753661036f, 0.0005605805781669915f, 0.0005369441350921988f, 0.0005581369623541832f, 0.0004610399482771754f, 0.0010062617948278785f, 0.000994445406831801f, 0.0013286297908052802f, 0.0008335908059962094f, 0.0007810749812051654f, 0.0008582115406170487f, 0.0007824892527423799f, 0.0005017786170355976f, 0.0006460920558311045f, 0.0006779381074011326f, 0.0005625627236440778f, 0.000583786575589329f, 0.0008913829224184155f, 0.0005649779341183603f, 0.0010524378158152103f, 0.0006291132885962725f, 0.0004881183849647641f, 0.0010290042264387012f, 0.0004520566144492477f, 0.00047965251724235713f, 0.0008936052327044308f, 0.0004896665341220796f, 0.0005314918234944344f, 0.0004533793544396758f, 0.0008005999843589962f, 0.0006981536280363798f, 0.0006737308576703072f, 0.0011318600736558437f, 0.0006243935786187649f, 0.0010235727531835437f, 0.0005527183529920876f, 0.0005401725647971034f, 0.0005713870632462204f, 0.0005281068151816726f, 0.0005867537693120539f, 0.0005446678842417896f, 0.000514650484547019f, 0.0006295554921962321f, 0.0005300587508827448f, 0.0005385357653722167f, 0.000827084993943572f, 0.0005330550484359264f, 0.0004902869113720953f, 0.0008667322690598667f, 0.0008338749757967889f, 0.0005202102474868298f, 0.0005824524560011923f, 0.0006149735418148339f, 0.000605934124905616f, 0.000828846066724509f, 0.0010983358370140195f, 0.0004889145493507385f, 0.001072301180101931f, 0.0007370259845629334f, 0.0005820335354655981f, 0.0005215688142925501f, 0.0005300425109453499f, 0.0005212210235185921f, 0.0004365696513559669f, 0.0005606669583357871f, 0.0005045223515480757f, 0.0010333628160879016f, 0.0005354764871299267f, 0.0006460435106419027f, 0.000606746703851968f, 0.0004995327326469123f, 0.00036712968721985817f, 0.0004161751421634108f, 0.0005351018044166267f, 0.0007386982324533165f, 0.0006418710108846426f, 0.001224087318405509f, 0.000716269132681191f, 0.0005407863645814359f, 0.0006752701010555029f, 0.0006591122364625335f, 0.0007015063310973346f, 0.0007362307514995337f, 0.0005551081267185509f, 0.0007591766188852489f, 0.0005199460429139435f, 0.0005081994459033012f, 0.0006588042015209794f, 0.00048449457972310483f, 0.0005806771805509925f, 0.0005030613392591476f, 0.0006273477920331061f, 0.0011043022386729717f, 0.0015702773816883564f, 0.0012566508958116174f, 0.0008064188878051937f, 0.00039156159618869424f, 0.0010399018647149205f, 0.0005613257526420057f, 0.0005539936246350408f, 0.0004664734296966344f, 0.0006373744108714163f, 0.0005402931128628552f, 0.0016300407005473971f, 0.0006601300556212664f, 0.0007094823522493243f, 0.0006010401411913335f, 0.0010975133627653122f, 0.0005464914720505476f, 0.0005256598233245313f, 0.0006786696030758321f, 0.0005650293896906078f, 0.0005468057934194803f, 0.0004768259823322296f, 0.0004963540122844279f, 0.0005110239726491272f, 0.0003889285435434431f, 0.0005942489369772375f, 0.0008158899727277458f, 0.0008602595189586282f, 0.0005960817215964198f, 0.0005812489544041455f, 0.0005253216368146241f, 0.0004746115591842681f, 0.0006040136213414371f, 0.0011311291018500924f, 0.0005589648499153554f, 0.0006391893257386982f, 0.0006325467256829143f, 0.0007172042387537658f, 0.000961125420872122f, 0.000493561034090817f, 0.0004560015513561666f, 0.0004892156575806439f, 0.0005344592500478029f, 0.0005680056638084352f, 0.0005746831302531064f, 0.000441738375229761f, 0.0005206690402701497f, 0.0004770575324073434f, 0.0006221581716090441f, 0.0006540209869854152f, 0.0004784292832482606f, 0.0016007503727450967f, 0.0006253994069993496f, 0.0007434881990775466f, 0.0005809328868053854f, 0.0005251314723864198f, 0.0005906252190470695f, 0.000497982429806143f, 0.0005676787695847452f, 0.0005094339139759541f, 0.000640193757135421f, 0.0010744142346084118f, 0.0010610866593196988f, 0.0012999684549868107f, 0.00042310645221732557f, 0.0004936474142596126f, 0.0009965721983462572f, 0.0005673164851032197f, 0.0007091264124028385f, 0.0006508049555122852f, 0.0004700488643720746f, 0.0011941881384700537f, 0.0004807055520359427f, 0.0009115496650338173f, 0.00044002983486279845f, 0.000565547205042094f, 0.0005986448377370834f, 0.0004902677610516548f, 0.0006283147376962006f, 0.0005191759555600584f, 0.0007454970036633313f, 0.000495203654281795f, 0.00120733177755028f, 0.00046474800910800695f, 0.000475577253382653f, 0.00047254154924303293f, 0.0004642010317184031f, 0.0012296858476474881f, 0.0009781522676348686f, 0.0005630798987112939f, 0.000712190696503967f, 0.0007230021292343736f, 0.0006152956048026681f, 0.0004235209780745208f, 0.0004186953301541507f, 0.0004772351821884513f, 0.0005189670482650399f, 0.00042052724165841937f, 0.0006260820082388818f, 0.0004391994443722069f, 0.0004855470615439117f, 0.0005211702664382756f, 0.0007103849784471095f, 0.0005738261970691383f, 0.0006228560814633965f, 0.0008305009105242789f, 0.0007683620206080377f, 0.0006033534300513566f, 0.0015574954450130463f, 0.0005896273069083691f, 0.0003582968201953918f, 0.0005234973505139351f, 0.0004738971474580467f, 0.0005590230575762689f, 0.0005607848288491368f, 0.0005293766153044999f, 0.0006075339624658227f, 0.000490284466650337f, 0.0007408117526210845f, 0.0006747006555087864f, 0.0005769009585492313f, 0.0008989422931335866f, 0.0005908853490836918f, 0.0005929199978709221f, 0.0008877768414095044f, 0.0014213796239346266f, 0.00046004337491467595f, 0.0005798249621875584f, 0.0006062014726921916f, 0.0005140164284966886f, 0.0007149900775402784f, 0.000394559494452551f, 0.0014479721430689096f, 0.0006474647670984268f, 0.0007539522484876215f, 0.0010527680860832334f, 0.0005171973607502878f, 0.00039825672865845263f, 0.0006331497570499778f, 0.0009396257810294628f, 0.0005586643237620592f, 0.0006323627894744277f, 0.0013122949749231339f, 0.0008971307543106377f, 0.00051931943744421f, 0.0004927064874209464f, 0.0011228342773392797f, 0.000543119793292135f, 0.0007684309966862202f, 0.0007923701195977628f, 0.00047015229938551784f, 0.0008292206330224872f, 0.00041742800385691226f, 0.0005488706519827247f, 0.0008135537500493228f, 0.0005585742183029652f, 0.0005226048524491489f, 0.00046634781756438315f, 0.0006636381731368601f, 0.0008599439170211554f, 0.00043895439011976123f, 0.0005719816545024514f, 0.0005031485925428569f, 0.0004885017406195402f, 0.0004992374451830983f, 0.0007612425251863897f, 0.000515305669978261f, 0.0005999481654725969f, 0.0004313509853091091f, 0.0007240673876367509f, 0.0005917616072110832f, 0.000481072929687798f, 0.0009811412310227752f, 0.0005479471874423325f, 0.0006406127358786762f, 0.0007120305672287941f, 0.0007888510008342564f, 0.0006467876955866814f, 0.00041838723700493574f, 0.0005399954388849437f, 0.0005942516727373004f, 0.0005584254395216703f, 0.0005084680742584169f, 0.0007352362736128271f, 0.0006849745404906571f, 0.00056878273608163f, 0.00067850825143978f, 0.0011424899566918612f, 0.0011014712508767843f, 0.001217320212163031f, 0.0005809995927847922f, 0.0006861615111120045f, 0.0009430162026546896f, 0.0006008204654790461f, 0.0005498505779542029f, 0.0005601633456535637f, 0.00042352991295047104f, 0.0014151525683701038f, 0.000616537407040596f, 0.0006973923300392926f, 0.0005411364254541695f, 0.0014740200713276863f, 0.00047275933320634067f, 0.00043284520506858826f, 0.000507767079398036f, 0.0005317559116519988f, 0.0005618216237053275f, 0.0006737791118212044f, 0.000947286665905267f, 0.00057875772472471f, 0.0010517757618799806f, 0.000560156418941915f, 0.00089500832837075f, 0.0003295508213341236f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(gemm_69_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002192447194829583f),
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
    AI_PACK_INTQ_SCALE(0.10730893164873123f),
    AI_PACK_INTQ_ZP(8)))

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
    AI_PACK_INTQ_SCALE(0.1131482720375061f),
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
    AI_PACK_INTQ_SCALE(0.08720436692237854f),
    AI_PACK_INTQ_ZP(-4)))

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
    AI_PACK_INTQ_SCALE(0.09267155081033707f),
    AI_PACK_INTQ_ZP(-21)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14737366139888763f),
    AI_PACK_INTQ_ZP(-11)))

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
    AI_PACK_INTQ_SCALE(0.07421134412288666f),
    AI_PACK_INTQ_ZP(-9)))

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
    AI_PACK_INTQ_SCALE(0.070865698158741f),
    AI_PACK_INTQ_ZP(-16)))

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
    AI_PACK_INTQ_SCALE(0.11168621480464935f),
    AI_PACK_INTQ_ZP(-15)))

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
    AI_PACK_INTQ_SCALE(0.06484472006559372f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1334371268749237f),
    AI_PACK_INTQ_ZP(-14)))

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
    AI_PACK_INTQ_SCALE(0.060725897550582886f),
    AI_PACK_INTQ_ZP(-6)))

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
    AI_PACK_INTQ_SCALE(0.056466955691576004f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0889977440237999f),
    AI_PACK_INTQ_ZP(2)))

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
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5, 5),
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
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5, 5),
  1, &nl_70_output_array, &nl_70_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conversion_71_output, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
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
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
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
  AI_SHAPE_INIT(4, 1280, 5, 1, 1), AI_STRIDE_INIT(4, 1, 1280, 6400, 6400),
  1, &gemm_69_weights_array, &gemm_69_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  gemm_69_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
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


AI_STATIC_CONST ai_i32 nl_70_nl_params_data[] = { 2145286784, 24, -124 };
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
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 255188, 1, 1),
    255188, NULL, NULL),
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
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 255188, 1, 1),
      255188, NULL, NULL)
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
    
    nl_70_output_array.data = AI_PTR(g_network_activations_map[0] + 20);
    nl_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 20);
    
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
    gemm_69_bias_array.data = AI_PTR(g_network_weights_map[0] + 255168);
    gemm_69_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 255168);
    
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
      
      .n_macc            = 36457626,
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
      
      .n_macc            = 36457626,
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

