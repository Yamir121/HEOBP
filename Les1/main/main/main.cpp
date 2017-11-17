
#include "stdafx.h"
#include<iostream>
#include "Park.h"

using namespace std;

int main()
{
	//constructor, creating the park
	Park jurassicPark = Park();
	//Add the dinosaurs to the park
	jurassicPark.add(Dinosaur("Megalodon"));
	jurassicPark.add(Dinosaur("Velociraptor"));
	jurassicPark.add(Dinosaur("Stegosaurus"));
	//draw the array of dinosaurs on the console
	jurassicPark.list();
	//opens the gate releasing 1 dinosaur.
	jurassicPark.openGate();
	//again draws the array of dinosaurs without the escaped dino
	jurassicPark.list();

	char c;
	std::cin >> c;
	return 0;
}
