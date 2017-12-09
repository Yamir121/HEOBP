#include <iostream>
#include <vector>
#include <string>
#include "Queue.h"

template <typename T>
std::vector<T> sortArray(std::vector<T> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if ((i+1) != a.size() && a[i] > a[i+1])
		{
			a.push_back(a[i]);
			a.erase(a.begin() + i);
			i = 0;
		}
	}
	return a;
}

int main()
{
	//Assignment 1)
	//Test with strings
	//std::vector<std::string> a = { "a","b","g","c" };
	//Test with floats
	std::vector<float> a = { 1.4f,6.4f,8.9f,3.3f,5.8f,1.9f };

	for (auto& i: sortArray(a))
	{
		std::cout << i << std::endl;
	}

	//Assignment 2)
	//Test with integers
	Queue<int> queue = Queue<int>({ 4,1,2,4,8 });
	//Test with strings
	//Queue<std::string> queue = Queue<std::string>({ "w","p","k","r","d" });
	//Get element from begin of queue
	std::cout << queue.get() << std::endl;
	//Get the total size of the queue
	std::cout << queue.size() << std::endl;
	//add element to end of the queue
	queue.put(6);
	std::cout << queue.size() << std::endl;
	//Print queue
	for (int i = 0; i < queue.size(); i++)
	{
		std::cout << queue.returnQueue()[i] << std::endl;
	}

	char c;
	std::cin >> c;
	return 0;
}