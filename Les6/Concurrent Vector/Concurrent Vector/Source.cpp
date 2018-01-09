#include "concurrent_vector.h"

int main()
{
	concurrent_vector<int>* vector = new concurrent_vector<int>();

	std::thread thread(&concurrent_vector<int>::push_back, vector, 1,10);
	std::thread thread2(&concurrent_vector<int>::push_back, vector, 2,10);
	thread.join();
	thread2.join();

	for (auto i : vector->returnVector())
	{
		std::cout << i << std::endl;
	}

	delete vector;

	char c;
	std::cin >> c;
	return 0;
}