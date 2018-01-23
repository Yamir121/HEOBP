#include "Child.h"

Child::Child(string name) {
	this->name = name;
}

Child::Child(const unique_ptr<Child>& other) {
	this->name = other.get()->name;
}

ostream& operator<<(ostream& os, const unique_ptr<Child>& child) {
	os << "name: " << child.get()->name;
	return os;
}