#ifndef __LRU_H_
#define __LRU_H_
#pragma once

#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class LRUCache {
	private:
	// Store keys of cache
	list<int> dq;

	// Store references of key in cache
	unordered_map<int, list<int>::iterator> ma;
	int CacheSize; //maximum capcity of cache

	public:
	LRUCache(int);
	void refer(int);
	void display();
};


#endif // __LRU_H_
