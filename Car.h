#pragma once
class Car
{
public:
	enum Color {
		RED,
		YELLOW
	};
public:
	Car(Color aColor);
	~Car();
	Color GetColor();
private:
	Color color;
};

