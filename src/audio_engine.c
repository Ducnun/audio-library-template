#include "audio_engine.h"
#include "memory.h"

static diamondengine_compressor_config_t _compressor_conf;
static diamondengine_saturator_config_t _saturator_conf;

void diamondengine_audio_init(diamondengine_processor_t *processor, void *buffer, size_t sample_count){
    processor->sample_count = sample_count;
    processor->buffer = buffer;
}

diamondengine_compressor_config_t diamondengine_get_default_compressor_config(){
    return ( diamondengine_compressor_config_t ) {
        .makeup_gain = 0,
        .threshold = 0,
        .ratio = 0,
        .width = 0,
    };
}

diamondengine_saturator_config_t diamondengine_get_default_saturator_config(){
    return ( diamondengine_saturator_config_t ) {
        .sat_value = 0
    };
}

void diamondengine_set_compressor_config(const diamondengine_compressor_config_t *conf){
    if (conf == NULL) return;
    memcpy(&_compressor_conf, &conf, sizeof(diamondengine_compressor_config_t));
}

void diamondengine_set_saturator_config(const diamondengine_compressor_config_t *conf){
    if (conf == NULL) return;
    memcpy(&_saturator_conf, &conf, sizeof(diamondengine_saturator_config_t));
}

void diamondengine_audio_update(diamondengine_processor_t *processor){
    diamondengine_compressor_update(processor);
    diamondengine_saturator_update(processor);
}

void diamondengine_compressor_update(diamondengine_processor_t *processor){
    /*
        actual compressor logic
    */
}

void diamondengine_saturator_update(diamondengine_processor_t* processor){
    /*
        actual saturator logic
    */
}