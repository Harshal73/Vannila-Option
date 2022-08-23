#ifndef SIMPLEMC3_H
#define SIMPLEMC3_H
#include "Vannila1.h"

double SimpleMonteCarlo3(const VanillaOptions& TheOption,
	double Spot,
	double vol,
	double r,
	unsigned long NumberOfPaths);
#endif


















