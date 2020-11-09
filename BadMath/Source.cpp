#include <iostream>
#include <iomanip>
using namespace std;

double average(double i1, double i2, double i3)
{
	double sum, average;

	sum = i1 + i2 + i3;

	average = sum / 3;

	return average;
}

int main()
{
	double n1 =0.0 , n2 = 0.0, n3 = 0.0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;

	double a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}