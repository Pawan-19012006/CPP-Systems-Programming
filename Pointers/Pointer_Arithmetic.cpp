#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << "Address of Variable A: " << p << endl;
    cout << "Address of Variable stored next to A: " << p+1 <<endl; // prints previous mem add + 4 since each int takes 4 bytes
    cout << "Value of A: " << *p <<endl;
    cout << "Value of variable next to A: " << *(p+1) << endl; // prints some garbage value since there is no element currently next to a
}