#ifndef GPRO_TYPES_H
#define GPRO_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef uint32_t UInt32;
typedef  int32_t SInt32;
typedef  int16_t UInt16;
typedef  int16_t SInt16;
typedef  uint8_t UInt8;
typedef   int8_t SInt8;

typedef struct
{
    int x;
    int y;
    int w;
    int h;
} Rect;

typedef struct
{
    int x;
    int y;
} Point;

typedef char Str255[256];
typedef char Str32[33];
typedef char Str31[32];
typedef char Str15[16];

#ifdef __cplusplus
}
#endif

#endif // GPRO_TYPES_H
