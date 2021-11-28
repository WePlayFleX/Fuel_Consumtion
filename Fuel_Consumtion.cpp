#include <iostream>

using namespace std;

int main()
{
	double km, h;
	const double Fuel_sity = 10;
	const double Fuel_highway = 5.5;
	const double Fuel_traffic = 4;
	cout << "Range sity" << endl;
	cin >> km;
	cout << "Fuel consumption - " << (Fuel_sity * km) / 100 << endl;
	cout << "Range highway" << endl;
	cin >> km;
	cout << "Fuel consumption - " << (Fuel_highway * km) / 100 << endl;
	cout << "Time traffic" << endl;
	cin >> h;
	cout << "Fuel consumption - " << (Fuel_traffic * h) / 60 << endl;
	
	system("pause");
	return 0;
}