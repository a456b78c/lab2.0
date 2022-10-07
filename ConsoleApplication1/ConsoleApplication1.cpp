
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double a;
	double z1;
	double z2;
	//cout << "ââåäiòü à = ";
	cin >> a;

	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * sin(2 * a) * sin(2 * a));
	z2 = 2 * sin(a);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	return 0;
}

