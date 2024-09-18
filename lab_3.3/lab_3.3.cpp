#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x < -R)
		y = x - R;
	else
		if (x >= -R && x <= 0)
			y = sqrt(R * R - x * x);
		else
			if (x > 0 && x < 6)
				y = (x * R) / 6 + R;
			else
				if (x > 6)
					y = x - 6;


	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
