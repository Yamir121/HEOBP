#include "Decorator.h"

Decorator::Decorator(Character* c) {
	theCharacter = c;
}

void Decorator::render() {
	//call render function from character in decorator
	theCharacter->render();
}