<<<<<<< HEAD
import tensorflow as tf
from tensorflow import keras
from keras import layers
from tensorflow.python.ops import math_ops
from tensorflow.python.framework import ops

def Bneck(inputs,filters,expansion_filters,kernel_size,alpha=1.0,strides=(1, 1),use_se=False):
    shape = inputs.get_shape().as_list()
    in_channels = shape[-1]
    filters = _make_divisible(filters * alpha, 8)
    expansion_filters = _make_divisible(expansion_filters * alpha, 8)
    x = layers.Conv2D(expansion_filters, 1, padding='same', use_bias=False)(inputs)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    x = layers.DepthwiseConv2D(kernel_size, strides=strides, use_bias=False, padding='same')(x)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    if use_se:
        x = SeBlock(x)
    x = layers.Conv2D(filters, kernel_size=1, padding='same', use_bias=False)(x)
    x = layers.BatchNormalization()(x)
    x = layers.Dropout(0.1)(x)
    if in_channels == filters and strides == 1:       
        x = layers.Add()([inputs, x])
    return x

def MLPBneck(inputs,filters,expansion_filters,kernel_size,alpha=1.0,strides=(1, 1),use_se=False):
    shape = inputs.get_shape().as_list()
    in_channels = shape[-1]
    embedding_dim = _make_divisible(filters * alpha, 8)
    hidden_dim = embedding_dim*2
    expansion_filters = _make_divisible(expansion_filters * alpha, 8)
    x = layers.Conv2D(expansion_filters, kernel_size, strides, padding='same', use_bias=False)(inputs)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    if use_se:
        x = SeBlock(x)
    x = MLP(x, hidden_dim, embedding_dim)
    if in_channels == embedding_dim and strides == 1:
        x = layers.Add()([inputs, x])
    return x

def SeBlock(inputs,reduction=4):
    input_shape = inputs.get_shape().as_list()
    x = layers.AveragePooling2D((int(input_shape[1]),int(input_shape[2])))(inputs)
    x = layers.Conv2D(int(input_shape[-1]) // reduction,1, padding='same', use_bias=False,activation='relu6')(x)
    x = layers.Conv2D(int(input_shape[-1]),1, padding='same', use_bias=False,activation='hard_sigmoid')(x)
    return layers.Multiply()([inputs, x])

def h_swish(inputs):
    x = layers.ReLU(6.)(inputs + 3)
    return layers.Multiply()([inputs, x])/6

def MLP(inputs, hidden_dim, embedding_dim_out):
    x = layers.Conv2D(hidden_dim,1, padding='same', use_bias=False)(inputs)
    x = layers.ReLU(6.)(x)
    x = layers.Conv2D(embedding_dim_out,1, padding='same', use_bias=False)(x)
    return layers.BatchNormalization()(x)

def _make_divisible(v, divisor, min_value=None):
    if min_value is None:
        min_value = divisor
    new_v = max(min_value, int(v + divisor / 2) // divisor * divisor)
    # Make sure that round down does not go down by more than 10%.
    if new_v < 0.9 * v:
        new_v += divisor
    return new_v

def get_scratch_model(input_shape: tuple = None, model_width: float = None, num_classes: int = None, dropout: float = None):
    input = keras.Input(shape=input_shape)
    first_block_filters = _make_divisible(16 * model_width, 8)
    x = layers.Conv2D(first_block_filters, 3, strides=2, padding='same')(input)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    x = MLPBneck(x,16, 32, 3, model_width, strides = 2, use_se = True,)
    x = MLPBneck(x,16, 64, 3, model_width, strides = 2, use_se = False)
    x = MLPBneck(x,16, 80, 3, model_width, strides = 1, use_se = False)
    x = Bneck(x,32, 96,  5, model_width, strides = 2, use_se = True,)
    x = Bneck(x,32, 192, 5, model_width, strides = 1, use_se = True,)
    x = Bneck(x,32, 128, 5, model_width, strides = 1, use_se = True,)
    x = Bneck(x,80, 240, 5, model_width, strides = 2, use_se = True,)
    x = Bneck(x,80, 320, 5, model_width, strides = 1, use_se = True,)
    x = Bneck(x,80, 480, 5, model_width, strides = 1, use_se = True,)
    x = layers.Conv2D(_make_divisible(480 * model_width, 8), 1)(x)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    x = layers.GlobalAveragePooling2D(keepdims=True)(x)
    last_block_filters = _make_divisible(960*model_width,8)
    x = layers.Conv2D(last_block_filters, kernel_size=1, padding='same', use_bias=False)(x)
    x = layers.ReLU(6.)(x)
    if dropout:
        x = layers.Dropout(dropout)(x)
    x = layers.Conv2D(num_classes,kernel_size=1, padding='same')(x)
    x = layers.Flatten()(x)
    output = layers.Activation('softmax')(x)
    model = keras.Model(input,output,name="EmbeddedNetV1_width{}".format(model_width))
    return model

def unfreeze_model(model):
    for layer in model.layers:
        layer.trainable = True
=======
import tensorflow as tf
from tensorflow import keras
from keras import layers
from tensorflow.python.ops import math_ops
from tensorflow.python.framework import ops

def Bneck(inputs,filters,expansion_filters,kernel_size,alpha=1.0,strides=(1, 1),use_se=False):
    shape = inputs.get_shape().as_list()
    in_channels = shape[-1]
    filters = _make_divisible(filters * alpha, 8)
    expansion_filters = _make_divisible(expansion_filters * alpha, 8)
    x = layers.Conv2D(expansion_filters, 1, padding='same', use_bias=False)(inputs)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    x = layers.DepthwiseConv2D(kernel_size, strides=strides, use_bias=False, padding='same')(x)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    if use_se:
        x = SeBlock(x)
    x = layers.Conv2D(filters, kernel_size=1, padding='same', use_bias=False)(x)
    x = layers.BatchNormalization()(x)
    x = layers.Dropout(0.1)(x)
    if in_channels == filters and strides == 1:       
        x = layers.Add()([inputs, x])
    return x

def MLPBneck(inputs,filters,expansion_filters,kernel_size,alpha=1.0,strides=(1, 1),use_se=False):
    shape = inputs.get_shape().as_list()
    in_channels = shape[-1]
    embedding_dim = _make_divisible(filters * alpha, 8)
    hidden_dim = embedding_dim*2
    expansion_filters = _make_divisible(expansion_filters * alpha, 8)
    x = layers.Conv2D(expansion_filters, kernel_size, strides, padding='same', use_bias=False)(inputs)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    if use_se:
        x = SeBlock(x)
    x = MLP(x, hidden_dim, embedding_dim)
    if in_channels == embedding_dim and strides == 1:
        x = layers.Add()([inputs, x])
    return x

def SeBlock(inputs,reduction=4):
    input_shape = inputs.get_shape().as_list()
    x = layers.AveragePooling2D((int(input_shape[1]),int(input_shape[2])))(inputs)
    x = layers.Conv2D(int(input_shape[-1]) // reduction,1, padding='same', use_bias=False,activation='relu6')(x)
    x = layers.Conv2D(int(input_shape[-1]),1, padding='same', use_bias=False,activation='hard_sigmoid')(x)
    return layers.Multiply()([inputs, x])

def h_swish(inputs):
    x = layers.ReLU(6.)(inputs + 3)
    return layers.Multiply()([inputs, x])/6

def MLP(inputs, hidden_dim, embedding_dim_out):
    x = layers.Conv2D(hidden_dim,1, padding='same', use_bias=False)(inputs)
    x = layers.ReLU(6.)(x)
    x = layers.Conv2D(embedding_dim_out,1, padding='same', use_bias=False)(x)
    return layers.BatchNormalization()(x)

def _make_divisible(v, divisor, min_value=None):
    if min_value is None:
        min_value = divisor
    new_v = max(min_value, int(v + divisor / 2) // divisor * divisor)
    # Make sure that round down does not go down by more than 10%.
    if new_v < 0.9 * v:
        new_v += divisor
    return new_v

def get_scratch_model(input_shape: tuple = None, model_width: float = None, num_classes: int = None, dropout: float = None):
    input = keras.Input(shape=input_shape)
    first_block_filters = _make_divisible(16 * model_width, 8)
    x = layers.Conv2D(first_block_filters, 3, strides=2, padding='same')(input)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    x = MLPBneck(x,16, 32, 3, model_width, strides = 2, use_se = True,)
    x = MLPBneck(x,16, 64, 3, model_width, strides = 2, use_se = False)
    x = MLPBneck(x,16, 80, 3, model_width, strides = 1, use_se = False)
    x = Bneck(x,32, 96,  5, model_width, strides = 2, use_se = True,)
    x = Bneck(x,32, 192, 5, model_width, strides = 1, use_se = True,)
    x = Bneck(x,32, 128, 5, model_width, strides = 1, use_se = True,)
    x = Bneck(x,80, 240, 5, model_width, strides = 2, use_se = True,)
    x = Bneck(x,80, 320, 5, model_width, strides = 1, use_se = True,)
    x = Bneck(x,80, 480, 5, model_width, strides = 1, use_se = True,)
    x = layers.Conv2D(_make_divisible(480 * model_width, 8), 1)(x)
    x = layers.BatchNormalization()(x)
    x = layers.ReLU(6.)(x)
    x = layers.GlobalAveragePooling2D(keepdims=True)(x)
    last_block_filters = _make_divisible(960*model_width,8)
    x = layers.Conv2D(last_block_filters, kernel_size=1, padding='same', use_bias=False)(x)
    x = layers.ReLU(6.)(x)
    if dropout:
        x = layers.Dropout(dropout)(x)
    x = layers.Conv2D(num_classes,kernel_size=1, padding='same')(x)
    x = layers.Flatten()(x)
    output = layers.Activation('softmax')(x)
    model = keras.Model(input,output,name="EmbeddedNetV1_width{}".format(model_width))
    return model

def unfreeze_model(model):
    for layer in model.layers:
        layer.trainable = True
>>>>>>> 1460700 (com)
    return model