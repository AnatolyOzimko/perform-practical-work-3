#include "Train.h"

Train::Train()
{
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

Train::Train(int aID)
{
	ID = aID;
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

void Train::setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux)
{
	NOP_common = aNOP_common;
	NOP_compartment = aNOP_compartment;
	NOP_reservedSeat = aNOP_reservedSeat;
	NOP_lux = aNOP_lux;
}

void Train::getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux)
{
	aNOP_common = NOP_common;
	aNOP_compartment = NOP_compartment;
	aNOP_reservedSeat = NOP_reservedSeat;
	aNOP_lux = NOP_lux;
}

Train::~Train()
{

}
