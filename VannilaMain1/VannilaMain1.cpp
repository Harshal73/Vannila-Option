#include "SimpleMC3.h"
#include "DoubleDigital.h"
#include <iostream>
using namespace std;

int main()

{


	double Expiry;
	double Low,Up;
	double Spot = 0.0;
	double Vol;
	double r = 0.0;
	unsigned long NumberOfPaths;

	cout << "\nEnter expiry\n";
	cin >> Expiry;

	cout << "\nEnter low barrier \n";
	cin >> Low;

	cout << "\nEnter up barrier\n";
	cin >> Up;

	cout << "\nEnter vol\n";
	cin >> Vol;

	cout << "\nNumber of paths\n";

	cin >> NumberOfPaths;

	PayOffDoubleDigital thePayOff(Low, Up);
	VanillaOptions theOption(thePayOff, Expiry);
	double result = SimpleMonteCarlo3(theOption,
		Spot,
		Vol,
		r,
		NumberOfPaths);
	cout << "\nthe price is " << result << "\n";
	double tmp;
	cin >> tmp;
	return 0;

}