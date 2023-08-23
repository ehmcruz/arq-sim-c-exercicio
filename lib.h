#ifndef __HEADER_LIB_H__
#define __HEADER_LIB_H__

#include <stdint.h>

void load_binary_to_memory (char *fname, void *memory, uint32_t mem_size);

inline uint16_t extract_bits (uint16_t v, uint8_t bstart, uint8_t blength)
{
	uint16_t mask;

	mask = (1 << blength) - 1;

	return ((v >> bstart) & mask);
}

#endif