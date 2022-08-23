#include "Vannila1.h"

VanillaOptions::VanillaOptions(PayOff& ThePayOff_, double Expiry_)
	: ThePayOff(ThePayOff_), Expiry(Expiry_)
{

}
double VanillaOptions::GetExpiry() const
{
	return Expiry;
}
double VanillaOptions::OptionPayOff(double Spot) const
{
	return ThePayOff(Spot);

}