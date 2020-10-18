#include <stdint.h>
#define qstruct(...)

// common
struct global_t
{	
	world_t* worlds;
	uint32_t num_world;

	chunk_t* chunks;
	uint32_t num_chunk;

	uint32_t size_chunk;
};

// entity component system

struct world_t
{
	archetype_t** archetypes;
	uint32_t num_archetype;
};

struct archetype_t
{
	chunk_t** chunks;	
	uint32_t num_chunk;
};

typedef void* chunk_t;


qstruct()
struct entity_t
{
	uint32_t index;
};