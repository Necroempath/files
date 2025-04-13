#include "UI.h"

#pragma region Output
void UI::PrintExpeditions(const SuperVector<Expedition*>& expeditions)
{
	for (size_t i = 0; i < expeditions.Size(); i++)
	{
		expeditions[i]->Display();
	}
}
void UI::PrintErrorMsg()
{
	std::cout << "\nInvalid input data\n\n";
}
void UI::PrintMsg(const char* msg)
{
	std::cout << msg;
}
#pragma endregion

#pragma region Input
string UI::InputName()
{
	std::cout << "Enter the name of expedition:\t";
	char name[nameLen];
	std::cin.getline(name, nameLen);

	return name;
}

short UI::InputYear()
{
	std::cout << "Enter year:\t";
	short year;
	std::cin >> year;
	std::cin.ignore();

	return year;
}

float UI::InputTemperature()
{
	std::cout << "Enter temperature:\t";
	float temperature;
	std::cin >> temperature;
	std::cin.ignore();

	return temperature;
}

short UI::InputExpType()
{
	std::cout << "\nChoose Expedition:\n1.North\n2.South\n";
	short option;
	std::cin >> option;
	std::cin.ignore();

	return option;
}

short UI::InputMainMenu()
{
	std::cout << "Type option:\n"
		<< "\n1.Create new expedition\n"
		<< "\n2.Display expedition list\n"
		<< "\n3.Exit\n";

	short option;
	std::cin >> option;
	std::cin.ignore();

	return option;
}
#pragma endregion

