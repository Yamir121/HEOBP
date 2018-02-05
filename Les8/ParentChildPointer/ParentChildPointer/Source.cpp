#include <iostream>
#include "Parent.h"

using namespace std;

int main() {

	shared_ptr<Parent*>* p1 = new shared_ptr<Parent*>("Parent1");
	cout << "P1:" << *p1 << endl;

	shared_ptr<Parent*>* p2 = new shared_ptr<Parent*>(*p1); // roept de copy constructor aan
	cout << "P2:" << *p2 << endl;

	shared_ptr<Parent*>* p3 = new shared_ptr<Parent*>("Parent3");
	cout << "P3:" << *p3 << endl;

	*p3 = *p1; // roept de assignment operator aan
	cout << "P3:" << *p3 << endl;

	char c;
	std::cin >> c;

	return 0;
}