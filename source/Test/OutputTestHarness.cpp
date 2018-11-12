#include "HormoneDose.h"
#include "LaptopOutput.h"

int main(void)
{
	HormoneDose * h = new HormoneDose(GLUCAGON, 15.0);

	LaptopOutput * lo = new LaptopOutput("127.0.0.1", 3307);
	lo->sendInstruction(h);

	h->setHormoneType(BASAL_INSULIN);
	h->setHormoneAmount(9.0);
	
	delete(h);
	delete(lo);
}
