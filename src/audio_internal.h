#ifndef AUDIO_INTERNAL_H
#define AUDIO_INTERNAL_H

#include "audio_engine.h"

void compressor_update_int32(
    diamondengine_processor_t *processor,
    const diamondengine_compressor_config_t *config
);

void compressor_update_int24(
    diamondengine_processor_t *processor,
    const diamondengine_compressor_config_t *config
);

void compressor_update_int16(
    diamondengine_processor_t *processor,
    const diamondengine_compressor_config_t *config
);

void compressor_update_float(
    diamondengine_processor_t *processor,
    const diamondengine_compressor_config_t *config
);

#endif