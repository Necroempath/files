#pragma once
#include "NorthPoleExpedition.h"
#include "SouthPoleExpedition.h"
#include "Vector.h"
#include "UI.h"
#include <fstream>
#define fileName "expeditions.txt"
#define errorMsg "Error. Given file has not found"
class FileHandler
{
public:
	static void WriteToFile(Expedition* expedition);

	static void ReadFromFile(SuperVector<Expedition*>& expeditions);
};

