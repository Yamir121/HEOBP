#include "Character.h"
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"

Character* Character::createCharacter(std::string type, std::string job) {
	Character* character;
	try {
		if (type == "Elf" && job == "Farmer") {
			character = new Farmer(new Elf());
			return character;
		}
		else if (type == "Elf" && job == "Shaman") {
			character = new Shaman(new Elf());
			return character;
		}
		else if (type == "Elf" && job == "Soldier") {
			character = new Soldier(new Elf());
			return character;
		}
		else if (type == "Orc" && job == "Farmer") {
			throw;
		}
		else if (type == "Orc" && job == "Shaman") {
			character = new Shaman(new Orc());
			return character;
		}
		else if (type == "Orc" && job == "Soldier") {
			character = new Soldier(new Orc());
			return character;
		}
	}	catch(...) {
			throw;
		}
	
}
