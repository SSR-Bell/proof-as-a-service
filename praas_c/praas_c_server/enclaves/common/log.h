// Copyright (c) Open Enclave SDK contributors.
// Licensed under the MIT License.

#ifndef OE_SAMPLES_ATTESTATION_ENC_LOG_H
#define OE_SAMPLES_ATTESTATION_ENC_LOG_H

#include <stdio.h>

extern const char* enclave_name;

#define TRACE_ENCLAVE(fmt, ...)     \
                                    \
    printf(                         \
        "%s: ***%s(%d): " fmt "\n", \
        enclave_name,               \
        __FILE__,                   \
        __LINE__,                   \
        ##__VA_ARGS__)

//#define TRACE_ENCLAVE(fmt, ...) \
    printf("Enclave: ***%s(%d): " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)

#endif // OE_SAMPLES_ATTESTATION_ENC_LOG_H
