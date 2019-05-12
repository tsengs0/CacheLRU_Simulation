#include "lru.h"

int access_stream[6] = {1, 2, 3, 1, 4, 5};

int main(int argc, char **argv)
{
	LRUCache cache_mem(4);

	for(int i = 0; i < 6; i++)
		cache_mem.refer(access_stream[i]);
	cache_mem.display();

	return 0;
}
