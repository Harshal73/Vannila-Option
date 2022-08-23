#ifndef VANILLA_1_H
#define VANILLA_1_H

#include "Payoff2.h"

class VanillaOptions
{

public :
	VanillaOptions(PayOff& ThePayOff_, double Expiry_);
	double GetExpiry() const;
	double OptionPayOff(double Spot) const;

private:
	double Expiry;
	PayOff& ThePayOff;



};

#endif 
