#pragma once
#include "string.h"
#include <fstream>
class Expedition
{
protected:
	string _name;
	int _year;
	float _temperature;
public:
	explicit Expedition(const string& name,  int year, float temperature);
	
#pragma region Accessors
	string getName() const;
	int getYear() const;
	float getTemperature() const;
#pragma endregion

	virtual void Display() = 0;

	virtual void WriteToFile(std::ofstream& fout) = 0;

	virtual ~Expedition();
};  

