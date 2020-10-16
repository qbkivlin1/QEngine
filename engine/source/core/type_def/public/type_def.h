#include <stdint.h>

struct global_t
{	
	world_t* worlds;

	chunk_t* new_chunks;
	chunk_t* use_chunks;
	chunk_t* free_chunks;

	int32_t n_worlds;
	int32_t n_new_chunks;
	int32_t n_use_chunks;
	int32_t n_free_chunks;

	int32_t size_chunk;
};

struct world_t
{
	archetype_t** archetypes;

	int32_t n_archetypes;
};

struct archetype_t
{
	int64_t type_category;
	int64_t type_mask;
	chunk_t** chunks;
	
	int32_t n_chunks;
};

typedef void* chunk_t;

struct entity_t
{
	int32_t Index;
};



