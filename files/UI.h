#pragma once
#include <iostream>
#include "Vector.h"
#include "NorthPoleExpedition.h"
#include "SouthPoleExpedition.h"
#define north "North"
#define south "South"
#define nameLen 30
#define typeLen 10

class UI
{
public:
	enum MenuOptions
	{
		NEW_EXPEDITION = 1,
		DISPLAY_EXPEDITIONS,
		EXIT
	};

	static void PrintExpeditions(const SuperVector<Expedition*>& expeditions);

	static void PrintErrorMsg();

	static void PrintMsg(const char* msg);

	static string InputName();

	static short InputYear();

	static float InputTemperature();

	static short InputExpType();

	static short InputMainMenu();
};

