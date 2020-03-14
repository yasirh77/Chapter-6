#include <iostream>
#include <cmath>
#include <iomanip>

/* Mike's BBQ Burger Problem. Lets figure out how many burgers we can fit on his grill*/

using namespace std;
using std::cout
using std::cin
using std::endl;
using std::ios;
using std::setprecision;
using std::setw;

int main() {

	int
		widthOfGrill, depthOfGrill, diameterOfBurger;

	double
		widthOfBurger, depthOfBurger,burgers, grillSize;
	
	grillSize = widthOfGrill * depthOfGrill;
	

	burgerSizeWidth = widthOfGrill % diameterOfBurger;
	burgerSizeDepth = depthOfGrill % diameterOfBurger;
	
	burgers = widthOfBurger * depthOfBurger;


	cout << "How wide is the grill? (in) \n";
	cin >> widthOfGrill;

	cout << "\n What is the depth of the grill? (in)";
	cin >> depthOfGrill;

	
	cout << "\n Diameter of Burger Patties being used: \t"
	cin >> diameterOfBurger; 

	cout << "\t\n You are able to fit " << burgers << "on the grill at a time" << endl; 

	return 0;


}
