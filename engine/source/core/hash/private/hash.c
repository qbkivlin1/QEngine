#include <stdint.h>

const uint64_t fnv64_prime = UINT64_C(1099511628211);
const uint64_t fnv64_offset = UINT64_C(14695981039346656037);

uint64_t fnv1a64(void *buffer, size_t length)
{
	uint8_t *pointer = (uint8_t*)buffer;
	uint8_t *buf_end = pointer + length;
	uint64_t hash = fnv64_offset;

	while (pointer < buf_end) {
		hash ^= (uint64_t)*pointer++;
		hash *= fnv64_prime;
	}

	return hash;
}