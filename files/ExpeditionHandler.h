#pragma once
#include "UI.h"
#include "FileHandler.h"
#define successMsg "Expedition Successfully created\n"
class ExpeditionHandler
{
	enum ExpeditionType
	{
		NORTH = 1,
		SOUTH
	};

	static Expedition* _expedition;

	static SuperVector<Expedition*> _expeditions;

	static Expedition* NewExpedition();

	static Expedition* GetValidExpedition();

public:
	static void Launch();

	~ExpeditionHandler();
};

