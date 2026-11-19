#include <stdio.h>
#include <stdlib.h>

// Define audio sample format before include to avoid "redefined" warning
#define AUDIO_SAMPLE_FORMAT 2
#define AUDIO_SAMPLES       128
#include "audio_engine.h"

#define type_name(x) _Generic((x), \
    int: "int",                    \
    float: "float",                \
    double: "double",              \
    char: "char",                  \
    default: "other")

// Global buffer
diamondengine_processor_t engine;
diamondengine_compressor_config_t compressor;
diamondengine_saturator_config_t saturator;

int main(void){

    // TEST PRINT OUTPUT
    COMPRESSOR_UPDATE(&engine, &compressor);
    printf("%s\n", type_name(engine.buffer[0]));
    free(engine.buffer);
}