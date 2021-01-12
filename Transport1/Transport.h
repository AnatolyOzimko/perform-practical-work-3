#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Transport
{
protected:
	int ID;
	std::string destination;
	int number;
	std::string departureTime;
public:
	Transport();
	Transport(int aID);
	void setDestination(std::string aDest);
	void setNumber(int aNumber);
	void setDepartureTime(std::string aDepTime);
	std::string getDestination();
	int getNumber();
	std::string getDepartureTime();
	~Transport();
};