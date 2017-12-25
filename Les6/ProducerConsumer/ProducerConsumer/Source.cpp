#include <queue>
#include <thread>
#include <iostream>
#include <condition_variable>

std::condition_variable cv;
std::mutex cvMutex;
int c = 0;
bool done = false;
std::queue<int> goods;

void producer() {
	for (int i = 0; i < 500; ++i) {
		goods.push(i);
		c++;
	}
	done = true;
	if (done)
	{
		cv.notify_one();
	}
}

void consumer() {
	std::unique_lock<std::mutex> lock(cvMutex);
	cv.wait(lock);
	while (!goods.empty()) {
		goods.pop();
		c--;
	}
	std::cout << "Net: " << c << std::endl;
}

int main() {
	std::thread producerThread(producer);
	std::thread consumerThread(consumer);
	producerThread.join();
	consumerThread.join();

	char c;
	std::cin >> c;
	return 0;
}