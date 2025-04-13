#pragma once
#include "Expedition.h"
class NorthPoleExpedition : public Expedition
{
public:
	explicit NorthPoleExpedition(const string& name, int year, float temperature);

	void Display() override;

	void WriteToFile(std::ofstream& fout) override;

	virtual ~NorthPoleExpedition();
};

