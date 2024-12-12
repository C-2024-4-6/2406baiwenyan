#include<iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
	double celcius,f;
	cin >> celcius;
	double fah = celciusToFahrenheit(celcius);
	cout << "Celcius to fahrenheit is:"<<fah<<endl;
	cout << "Enter fahrenheit!";
	cin >> f;
	cout << "Fahrenheit to celcius is:"<< fahrenheit_to_cels(f)<<endl;
	return 0;
}