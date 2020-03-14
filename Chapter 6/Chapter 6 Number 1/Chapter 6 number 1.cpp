#include <iostream>
#include <iomanip>

using namespace std;
using std::ios;
using std::setprecision;
using std::setw;
const float PI = 3.14;

int main() {
	//units of measurement
	double diameter;
	double height;
	double volume; 
	double radius; 
	double gallon; 
	double unit;
	double cubicInch; 
	double total; 

	cout << "Enter the diameter and than the height of the in ft: ";
	
	cin >> diameter >> height;
	
	//vaules for the units
	radius = diameter / 2; 
	volume = height * PI * (radius * radius);
	cubicInch = volume * 1728;
	gallon = cubicInch / 231; 
	unit = gallon / 748; 
	total = unit * 1.80;

	cout << "This is how much it will cost to fill up the pool: ";
	<< setw(8) << "$";
	<< setprecision(4);
	<< total; 

	return 0;
	

}