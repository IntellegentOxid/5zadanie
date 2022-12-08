#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double x, y, q;
	cout << "Введіть значення x=";
	cin >> x;
	if (x <= -2){
		cout << "вираз не можете бути менше -2;(";
		return 0;}
	cout << "Введіть значення y=";
	cin >> y;
	q = sqrt(sqrt((x + 2) / (3*y + 1)) + (8*x * x + 3) / (1 - 9*y * y));
	cout << "Значення q=" << q << endl;
	system("pause>>void");
	return 0;
}