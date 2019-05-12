#include "lru.h"

LRUCache::LRUCache(int n)
{
	CacheSize = n;
}

// Refers key x within the LRU cache
void LRUCache::refer(int x)
{
	// Not present in cache
	if(ma.find(x) == ma.end()) {
		cout << "Access \'" << x << "\' is missed." << endl;
		// Cache is full
		if(dq.size() == CacheSize) {
			//Delete least recently used element
			int least = dq.back();
			dq.pop_back();
			ma.erase(least);
		}
	}
	else { // Present in cache
		dq.erase(ma[x]);
		cout << "Access \'" << x << "\' is hit." << endl;
	}

	// Upate reference
	dq.push_front(x);
	ma[x] = dq.begin();
}

void LRUCache::display()
{
	for(auto it = dq.begin(); it != dq.end(); it++)
		cout << (*it) << " ";
	cout << endl;
}
