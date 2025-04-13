#include "SouthPoleExpedition.h"

SouthPoleExpedition::SouthPoleExpedition( const string& name, int year, float temperature) : Expedition(name, year, temperature) {}

void SouthPoleExpedition::Display()
{
	std::cout << "South\n" << _name << '\n' << _year << '\n' << _temperature << "\n\n";

}

void SouthPoleExpedition::WriteToFile(std::ofstream& fout)
{
	fout << "South\n" << _name << '\n' << _year << '\n' << _temperature << "\n\n";
}

SouthPoleExpedition::~SouthPoleExpedition() = default;
