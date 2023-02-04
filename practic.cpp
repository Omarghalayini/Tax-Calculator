#include <iostream>
using namespace std;


int main (){ // maths function


    const double sales = 9500;
    cout << "salary:  " << sales << endl;

    const double National_Insurance_Rate = .04;
    double National_Insurance = sales * National_Insurance_Rate;
    cout << "National_Insurance:  "<< National_Insurance << endl;

    const double county_tax_rate = .02;
    double county_tax = sales * county_tax_rate;
    cout <<"county_tax: " << county_tax << endl;

    const double Total_tax_owed = county_tax + National_Insurance;
    cout <<"Total Tax Owed:  " << Total_tax_owed << endl;
    
    
    
       return 0;       
}
