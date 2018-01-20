#include <iostream>
#include <vector>
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"

void draw(std::vector<Character*> characters)
{
	//render all characters in the list
	for (auto& character : characters) {
		std::cout << "---" << std::endl;
		character->render();
	}
	std::cout << "---" << std::endl;
}

int main()
{
	//create the list of characters to be rendered on the screen
	std::vector<Character*> characters;
	Character* orc0 = Character::createCharacter("Orc","Shaman");
	characters.push_back(orc0);
	//construct orc with farmer decorator
	Character* orc = Character::createCharacter("Orc", "Soldier");
	//add to list
	characters.push_back(orc);
	//construst elf with soldier decorator
	Character* elf = Character::createCharacter("Elf", "Farmer");
	//add to list
	characters.push_back(elf);
	Character* elf2 = Character::createCharacter("Elf", "Shaman");
	//add to list
	characters.push_back(elf2);
	//draw list
	draw(characters);
	//clean up
	delete orc;
	delete elf;
	delete elf2;
	//to keep the console open
	char c;
	std::cin >> c;
	return 0;
}