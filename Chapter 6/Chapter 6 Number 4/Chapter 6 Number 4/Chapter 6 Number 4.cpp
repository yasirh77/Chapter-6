#include <isostream>
#include <iomanip>
#include <cmath>

/* Down Payment Problem*/

using namespace std; 
using std::stw; 
using std::ios;
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main() {

	double
		loan, car, downpayment; 
	    months = loan * 12,
		annualRate = (loan * 1.5) / 1.25,
		interestRate = (annualRate / 12),
		month = principle * interestRate;

		const float
			pow = (1 + interestRate, months),
			monthly = (month) / (pow);



	cout << "\n Cost of car";
	cin >> car; 

	cout << "\n What is your downpayment?";
	cin >> downpayment; 

	const int
		principle = car - downpayment; 

	cout << "\n How long will the loan be out for?";
	cin >> loan;

	cout << "\n The monthly payemnts are $: " << monthly << " and for the next " << loan << "years." << endl; 

	return 0;


 }