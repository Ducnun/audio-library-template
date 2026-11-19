#ifndef AUDIO_DISPATCH_H
#define AUDIO_DISPATCH_H

#include "audio_config.h"

#if AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_INT32

    #define COMPRESSOR_UPDATE compressor_update_int32
    #define SATURATOR_UPDATE saturator_update_int32

#elif AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_INT24

    #define COMPRESSOR_UPDATE compressor_update_int24
    #define SATURATOR_UPDATE saturator_update_int24

#elif AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_INT16

    #define COMPRESSOR_UPDATE compressor_update_int16
    #define SATURATOR_UPDATE saturator_update_int16

#elif AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_FLOAT

    #define COMPRESSOR_UPDATE compressor_update_float
    #define SATURATOR_UPDATE saturator_update_float

#else
    #error "Unsupported audio sample format"
#endif

#endif