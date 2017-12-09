#include <iostream>
#include <vector>
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"

void draw(std::vector<Character*> characters)
{
	for (auto& character : characters) {
		std::cout << "---" << std::endl;
		character->render();
	}
	std::cout << "---" << std::endl;
}

int main()
{
	std::vector<Character*> characters;

	Character* orc = new Farmer(new Orc());
	characters.push_back(orc);
	Character* elf = new Soldier(new Elf());
	characters.push_back(elf);

	draw(characters);
	delete orc;
	delete elf;

	char c;
	std::cin >> c;
	return 0;
}