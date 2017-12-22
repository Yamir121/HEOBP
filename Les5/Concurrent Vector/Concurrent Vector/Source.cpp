#include "concurrent_vector.h"

std::mutex mutex;

void pushBack(concurrent_vector<int> &vector)
{
	mutex.lock();
	for (int i = 0; i < 20; i++)
	{
		vector.push_back(i);
		if (i == 19)
		{
			for (auto i : vector.returnVector())
			{
				std::cout << i << std::endl;
			}
		}
	}
	mutex.unlock();
}



int main()
{
	concurrent_vector<int> vector;

	//std::thread thread(&concurrent_vector<int>::push_back, 5);
	std::thread thread2(&pushBack, vector);
	//thread.join();
	thread2.join();

	char c;
	std::cin >> c;
	return 0;
}