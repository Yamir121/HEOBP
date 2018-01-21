#include "Character.h"
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"

Character* Character::createCharacter(std::string type, std::string job) {
	Character* character = NULL;
	try {
		if (type == "Elf" && job == "Farmer") {
			character = new Farmer(new Elf());
		}
		else if (type == "Elf" && job == "Shaman") {
			character = new Shaman(new Elf());
		}
		else if (type == "Elf" && job == "Soldier") {
			character = new Soldier(new Elf());
		}
		else if (type == "Orc" && job == "Farmer") {
			throw;
		}
		else if (type == "Orc" && job == "Shaman") {
			character = new Shaman(new Orc());
		}
		else if (type == "Orc" && job == "Soldier") {
			character = new Soldier(new Orc());
		}
	}	catch(...) {
			throw "There are no Farmer Orcs, have you ever seen an Orc with a shovel?";
		}

	if (character != NULL)
	{
		return character;
	}
	else
	{
		return NULL;
	}
}
