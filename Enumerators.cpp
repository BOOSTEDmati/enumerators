#include <iostream>
#include "Car.h"

int main()
{
	std::cout << "Hello World!\n";
	Car car(Car::Color::RED);
	Car anotherCar(Car::Color::YELLOW);

	if (car.GetColor() == anotherCar.GetColor()) {
		std::cout << "De kleuren zijn hetzelfde!" << std::endl;
	}
	if (car.GetColor() == Car::Color::RED) {
		std::cout << "De kleur is rood" << std::endl;
	}
	else {
		std::cout << "De kleuren zijn niet hetzelfde!" << std::endl;
	}

}