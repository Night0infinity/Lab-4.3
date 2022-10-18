#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a;
	double c;
	double x;
	double xp;
	double xk;
	double dx;
	double F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "-----------------------" << endl;
	cout << setw(10) << "x" << "|"
		 << setw(10) << "F" << "|" << endl;
	cout << "-----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && a != 0)
			F = -a * x * x;
		else
			if (c > 0 && a == 0)
				F = (a - x) / (c * x);
			else
				F = x / c;
		cout << "|" << setw(10) << setprecision(4) << x
			<< "|" << setw(10) << setprecision(5) << F
			<< "|" << endl;
		x += dx;
	}
	cout << "-----------------------" << endl;
	return 0;
}
