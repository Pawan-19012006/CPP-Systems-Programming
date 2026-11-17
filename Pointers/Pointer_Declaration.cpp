#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << "Variable Memory Address (via direct): " << &a << endl;
    cout << "Variable Memory Address (via pointer): " << p << endl;
    cout << "Variable Value(direct): " << a << endl;
    cout << "Variable Value(via pointer): " << *p << endl;
    cout << "Address of the pointer itself: " << &p << endl;
}