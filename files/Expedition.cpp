#include "Expedition.h"

Expedition::Expedition(const string& name, int year, float temperature) : _name(name), _year(year), _temperature(temperature) {}

#pragma region Accessors
string Expedition::getName() const
{
	return _name;
}
int Expedition::getYear() const
{
	return _year;
}
float Expedition::getTemperature() const
{
	return _temperature;
}
#pragma endregion

Expedition::~Expedition() = default;
