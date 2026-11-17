#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << "Value before Dereferencing: " << *p << endl;
    *p = 20;
    cout << "Value after Dereferencing: " << *p << endl;
}