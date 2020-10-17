#include <stdint.h>

// common
struct global_t
{	
	world_t* worlds;
	uint32_t num_worlds;

	chunk_t* chunks;
	uint32_t num_chunks;

	uint32_t size_chunk;
};

// entity component system

struct world_t
{
	archetype_t** archetypes;
	uint32_t num_archetypes;
};

struct archetype_t
{
	chunk_t** chunks;	
	uint32_t num_chunks;
};

typedef void* chunk_t;


struct entity_t
{
	uint32_t index;
};



