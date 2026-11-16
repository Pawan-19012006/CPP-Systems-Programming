#include <iostream>

using namespace std;
int main(){
    int salary = 95000;
    int state_tax = 4;
    int country_tax = 2;
    double state_tax_amount = (state_tax/100.0) * 95000;
    double country_tax_amount = (country_tax/100.0) * 95000;
    cout << "State Tax Amount: " << state_tax_amount<<endl;
    cout << "Country Tax Amount: " << country_tax_amount<<endl;
    cout << "Total Tax Amount: " << state_tax_amount + country_tax_amount << endl;
}