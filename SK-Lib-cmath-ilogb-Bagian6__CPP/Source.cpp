#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	int result, x = 19;

	result = ilogb(x);
	double significand = x / pow(FLT_RADIX, result);

	cout << "ilogb (" << x << ") = " << result << endl;
	cout << x << " = " << significand << " * " << FLT_RADIX << "^" << result << endl << endl;

	_getch();
	return 0;
}