#include "ExpeditionHandler.h"

Expedition*  ExpeditionHandler::_expedition = nullptr;

SuperVector<Expedition*> ExpeditionHandler::_expeditions = SuperVector<Expedition*>(0);

Expedition* ExpeditionHandler::GetValidExpedition()
{
	Expedition* expedition;

	do
	{
		expedition = NewExpedition();

	} while (!expedition);

	return expedition;
}

Expedition* ExpeditionHandler::NewExpedition()
{
	string name = UI::InputName();
	name = name.GetLen() ? name : "Unknown";
	short year = UI::InputYear();
	float temperature = UI::InputTemperature();

	switch (UI::InputExpType())
	{
	case NORTH:
		return new NorthPoleExpedition(name, year, temperature);
		break;
	case SOUTH:
		return new SouthPoleExpedition(name, year, temperature);
		break;
	default:
		UI::PrintErrorMsg();
		break;
	}

	return nullptr;
}

void ExpeditionHandler::Launch()
{
	while (true)
	{
		switch (UI::InputMainMenu())
		{
		case UI::NEW_EXPEDITION:
		{
			_expedition = GetValidExpedition();
			UI::PrintMsg(successMsg);
			FileHandler::WriteToFile(_expedition);
			break;
		}
			
		case UI::DISPLAY_EXPEDITIONS:
		{
			FileHandler::ReadFromFile(_expeditions);
			UI::PrintExpeditions(_expeditions);
			break;
		}
		case UI::EXIT:
		{
			return;
		}
		default:
			UI::PrintErrorMsg();
			break;
		}
	}
}

ExpeditionHandler::~ExpeditionHandler()
{
	delete _expedition;

	for (size_t i = 0; i < _expeditions.Size(); i++)
		delete _expeditions[i];
}


