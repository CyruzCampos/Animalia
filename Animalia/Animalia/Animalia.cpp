#include "Animalia.h"
#include<iostream>

int Mammal::Speek()
{
	std::cout << "...melifluous noise...";
	return 0;
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}

int Human::think()
{
	cout << "Human is thinking about..." << endl;
}
