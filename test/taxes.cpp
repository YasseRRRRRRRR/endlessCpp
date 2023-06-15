#include <iostream>

using namespace std;


int main() {
    double sales = 95000;

    const double stateTaxRate = .04;
    const double countyTaxRate = .02;

    double stateTax = sales * stateTaxRate;    
    double countyTax = sales * countyTaxRate;

    int TotalTax = stateTax + countyTax;

    cout << "Your salary is = " << sales << " $" << endl
         << "so you owe the state: " << stateTax << " $" << endl
         << "and you owe the county: " << countyTax << " $" << endl
         << "so your total tax return: " << TotalTax << " $";
    return 0;
}   