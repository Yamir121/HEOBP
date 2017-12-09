#include "Decorator.h"

Decorator::Decorator(Character* c) {
	theCharacter = c;
}

void Decorator::render() {
	theCharacter->render();
}