#ifndef AUDIO_CONFIG_H
#define AUDIO_CONFIG_H

#include <stdint.h>

// Audio sample types
#define AUDIO_SAMPLE_INT32  1
#define AUDIO_SAMPLE_INT24  2
#define AUDIO_SAMPLE_INT16  3
#define AUDIO_SAMPLE_FLOAT  4

// Defaulting to INT32
#ifndef AUDIO_SAMPLE_FORMAT
    #define AUDIO_SAMPLE_FORMAT AUDIO_SAMPLE_INT24
#endif // AUDIO_SAMPLE_FORMAT

// Typedef audio_sample_t
#if AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_INT32
    typedef int32_t audio_sample_t;
#elif AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_INT24
    typedef int32_t audio_sample_t;
#elif AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_INT16
    typedef int16_t audio_sample_t;
#elif AUDIO_SAMPLE_FORMAT == AUDIO_SAMPLE_FLOAT
    typedef float audio_sample_t;
#else
    #error "Unsupported audio sample format"
#endif  // TYPEDEF AUDIO_SAMPLE_T

#endif  // AUDIO_CONFIG_H