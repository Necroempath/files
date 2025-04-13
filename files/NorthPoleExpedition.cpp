#include "NorthPoleExpedition.h"

NorthPoleExpedition::NorthPoleExpedition(const string& name, int year, float temperature) : Expedition(name, year, temperature) {}

void NorthPoleExpedition::Display()
{
	std::cout << "North\n" << _name << '\n' << _year << '\n' << _temperature << "\n\n";
}

void NorthPoleExpedition::WriteToFile(std::ofstream& fout)
{
	fout << "North\n" << _name << '\n' << _year << '\n' << _temperature << "\n\n";
}

NorthPoleExpedition::~NorthPoleExpedition() = default;
