#include <iostream>

using namespace std;

int main(){
    double farenheit;
    cout<< "Enter a Farenheit Value: ";
    cin>>farenheit;
    double celsius = ((farenheit - 32) * 5.0)/9.0;
    cout<<"Celsius value is: "<<celsius<<endl;
    return 0;
}