#include <isostream>
#include <iomanip>

using namespace std;
using std::setw; 
using std::setprecision; 
using std::ios;
using std::endl;

const float costPerUnit1 = 75.99; 
const float costPerUnit2 = 8.90; 
const float costPerUnit3 = 4.95; 
const float costPerUnit4 = 12.95;
const float costPerUnit5 = 22.00;

int main() {

	   double totalCost1;
		double totalCost2;
	   double totalCost3;
	   double totalCost4;
	   double totalCost5;
		double overallCost; 

		int quantity1 = 25; 
		int quantity2 = 100; 
		int quantity3 = 25; 
		int quantity4 = 20; 
		int quantity5 = 100; 

		cout << "Description- \t -Cost Per Unit in $- \t -Quantity Needed- \t -Total Cost- \n";
		totalCost1 = quantity1 * costPerUnit1; 

		cout << "Joists" << setw(18) << costPerUnit1 << setw(25) << quantity1 << setw(25) << totalCost1 << '\n';
		totalCost2 = quantity2 * costPerUnit2;

		cout << "2x6" << setw(20) << costPerUnit2 << setw(26) << quantity2 << setw(22) << totalCost2 << "'\n";
		totalCost3 = quantity3 * costPerUnit3;

		cout << "2x4" << setw(21) << costPerUnit3 << setw(25) << quantity3 << setw(25) << totalCost3 << '\n';
		totalCost4 = quantity4 * costPerUnit4;

		cout << "4x4" << setw(21) << costPerUnit4 << setw(25) << quantity4 << setw(22) << totalCost4 << '\n';
		totalCost5 = quantity5 * costPerUnit5;

		cout << "4x8 Sheet Plywood" << setw(4) << costPerUnit5 << setw(28) << quantity5 << setw(22) << totalCost5 << '\n';

		overallCost = totalCost1 + totalCost2 + totalCost3 + totalCost4 + totalCost5;

		cout << "This is the overall cost of the supplies: \n";

		cout << overallCost << endl;

		return 0;


}