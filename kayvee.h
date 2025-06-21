// Kayvee is licensed under the MIT License.
//
// Copyright (c) 2025 Gedeon Sainrival <gedeon@nightfwm.me>.

#pragma once
#define KAYVEE_LIBRARY_H

#include <stdint.h>

typedef uint32_t kv_word_t;

#define KV_WORD_SIZE 4

// Define 32-bit data types
typedef union kv_data_types_u {
    uint8_t u8;
    uint16_t u16;
    uint32_t u32;
    int8_t i8;
    int16_t i16;
    int32_t i32;
    float f32;
    uint8_t str[KV_WORD_SIZE];
} kv_value_types;

typedef enum kv_data_types_e {
    KV_U8,
    KV_U16,
    KV_U32,
    KV_I8,
    KV_I16,
    KV_I32,
    KV_F32,
    KV_STR,
} kv_data_types;

typedef struct kv_data_s {
    kv_data_types type;
    uint8_t key[KV_WORD_SIZE];
    kv_value_types value;
} kv_data_t;

void kv_init(void);

void kv_get(kv_data_t *data);

void kv_put(kv_data_t *data);

void kv_update(void);

void kv_delete(void);

void kv_format(void);
