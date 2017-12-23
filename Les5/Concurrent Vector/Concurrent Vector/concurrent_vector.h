#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <mutex>


template<typename T>
class concurrent_vector
{
public:
	std::mutex mutex;

	concurrent_vector(){}
	
	concurrent_vector(std::vector<T> v)
	{
		this->internalVector = v;
	}

	void push_back(T element, int amount)
	{
		for (int i = 0; i < amount; i++)
		{
			mutex.lock();
			this->internalVector.push_back(element);
			mutex.unlock();
		}
	}

	std::vector<T> returnVector()
	{
		return this->internalVector;
	}

private:
	std::vector<T> internalVector;
};

