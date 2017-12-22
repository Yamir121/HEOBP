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
	concurrent_vector(){}
	
	concurrent_vector(std::vector<T> v)
	{
		this->internalVector = v;
	}

	void push_back(T element)
	{
		this->internalVector.push_back(element);
	}

	std::vector<T> returnVector()
	{
		return this->internalVector;
	}

private:
	std::vector<T> internalVector;
};

