#include "FileHandler.h"

void FileHandler::WriteToFile(Expedition* expedition)
{
	try
	{
		std::ofstream fout(fileName, std::ios::app);
	
		if (!fout) throw std::ios_base::failure(errorMsg);

		expedition->WriteToFile(fout);
	}
	catch (const std::ios_base::failure& e)
	{
		UI::PrintMsg(e.what());
	}
	
}

void FileHandler::ReadFromFile(SuperVector<Expedition*>& expeditions)
{
	try
	{
		std::ifstream fin(fileName);

		if (!fin) throw std::ios_base::failure(errorMsg);

		char type[typeLen];
		char name[nameLen];
		int year;
		float temperature;

		for (size_t i = 0; fin.getline(type, typeLen); i++)
		{
			fin.getline(name, nameLen);
			fin >> year >> temperature;
			fin.ignore();
			fin.ignore();
			
			if (string(type) == north)
			{
				expeditions.PushBack(new NorthPoleExpedition(name, year, temperature));
			}
			else if(string(type) == south)
			{
				expeditions.PushBack(new SouthPoleExpedition(name, year, temperature));
			}
		}
	}
	catch (const std::ios_base::failure& e)
	{
		UI::PrintMsg(e.what());
	}
}
