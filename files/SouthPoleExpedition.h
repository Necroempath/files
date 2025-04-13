#pragma once
#include "Expedition.h"
class SouthPoleExpedition : public Expedition
{
public:
	explicit SouthPoleExpedition(const string& name, int year, float temperature);
	
	void Display() override;

	void WriteToFile(std::ofstream& fout) override;

	virtual ~SouthPoleExpedition();
};

