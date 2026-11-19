#ifndef AUDIO_PROCESSOR_H
#define AUDIO_PROCESSOR_H

#include <stddef.h>
#include "audio_config.h"

typedef struct{
    audio_sample_t *buffer;
    size_t sample_count;
} diamondengine_processor_t;

typedef struct{
    int32_t makeup_gain;
    int32_t threshold;
    int32_t ratio;
    int32_t width;
} diamondengine_compressor_config_t;

typedef struct{
    int32_t sat_value;
} diamondengine_saturator_config_t;

/* Initialize the processor with a caller-owned buffer. */
void diamondengine_audio_init(diamondengine_processor_t *processor, void *buffer, size_t sample_count);

/*
    Default config getters
*/
/* Returns a default and preinitialized struct for compression config */
diamondengine_compressor_config_t diamondengine_get_default_compressor_config(void);

/* Returns a default and preinitialized struct for saturation config */
diamondengine_saturator_config_t diamondengine_get_default_saturator_config(void);

/*
    Config setters
*/
/* Sets the compressor config in a private field */
void diamondengine_set_compressor_config(const diamondengine_compressor_config_t *conf);

/* Sets the saturator config in a private field */
void diamondengine_set_saturator_config(const diamondengine_compressor_config_t *conf);

/*
    Processing functions
*/
/* Process the buffer in place. */
void diamondengine_audio_update(diamondengine_processor_t *processor);

/* Perform the compression on given processor with given parameters */
void diamondengine_compressor_update(diamondengine_processor_t *processor);

/* Perform the saturation on givern processor with given parameters */
void diamondengine_saturator_update(diamondengine_processor_t *processor);

#endif