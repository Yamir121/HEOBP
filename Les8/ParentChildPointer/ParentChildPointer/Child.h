#pragma once

#include <string>
#include <ostream>
#include <memory>

using namespace std;

class Child {
public:
	Child(string name);
	Child(const unique_ptr<Child>& other);

private:
	string name;

public:
	friend ostream& operator<<(ostream& os, const unique_ptr<Child>& child);
};