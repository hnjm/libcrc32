#ifndef __CRC32_H__
#define __CRC32_H__

#include <stdint.h>

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif

DLL_EXPORT uint32_t crc32(uint32_t prev, const void *data, size_t length);

#ifdef __cplusplus
}
#endif

#endif // __CRC32_H__
