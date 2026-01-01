// #define QMK_KEYBOARD_H "rev3.h"

#include "print.h"

extern uint8_t extract_mod_bits(uint16_t code);
extern void set_weak_override_mods(uint8_t mods);

uint16_t remote_mod_delay = 200;

bool ko_mod_delay_remote(bool activated, void* context_replacement_key) {

    // uint16_t* replacement_key;
    // uint8_t mods;

    // replacement_key = (uint16_t*)context_replacement_key;
    // mods = extract_mod_bits(*replacement_key);

    // if(mods == 0) {

    //     return activated;

    // }

    // uprintf("set_weak_override_mods(%d)", mods);
    // set_weak_override_mods(mods);
    // send_keyboard_report();

    // wait_ms(remote_mod_delay);
    // tap_code_delay()

    return activated; // Assume true
    
}

#define ko_make_with_layers_negmods_and_options_remote(trigger_mods_, trigger_key, replacement_key, layer_mask, negative_mask, options_) \
    ((const key_override_t){                                                                \
        .trigger_mods                           = (trigger_mods_),                          \
        .layers                                 = (layer_mask),                             \
        .suppressed_mods                        = (trigger_mods_),                          \
        .options                                = (options_),                               \
        .negative_mod_mask                      = (negative_mask),                          \
        .custom_action                          = ko_mod_delay_remote,                      \
        .context                                = (void *)(replacement_key),                          \
        .trigger                                = (trigger_key),                            \
        .replacement                            = (replacement_key),                        \
        .enabled                                = NULL                                      \
    })
