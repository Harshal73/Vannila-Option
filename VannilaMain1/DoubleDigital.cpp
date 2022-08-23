#include "DoubleDigital.h"


PayOffDoubleDigital::PayOffDoubleDigital(double LowerLevel_, double UpperLevel_)
	:LowerLevel(LowerLevel_), UpperLevel(UpperLevel_)
{

}
double PayOffDoubleDigital::operator()(double Spot) const
{

	if (Spot <= PayOffDoubleDigital::LowerLevel)
		return 0;
	if (Spot >= PayOffDoubleDigital::UpperLevel)
		return 0;
	return 1;
}

