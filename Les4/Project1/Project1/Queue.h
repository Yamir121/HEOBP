#pragma once

#include <vector>
#include <iostream>

template<typename T>
class Queue {
public:

	Queue(std::vector<T> q) {
		elements = q;
	}

	void put(T element) {
		elements.push_back(element);
	}

	T get() {
		return *elements.begin();
	}

	int size() {
		int size = 0;
		for (auto& i : elements)
		{size++;}
		return size;
	}

	std::vector<T> returnQueue()
	{
		return this->elements;
	}

private:
	std::vector<T> elements;
};
