#include <iostream>

using namespace std;

int main(){
    int A[] = {10,20,30,40,50};
    int *p = A; // we need not use & when assigining mem address of an array to a pointer, we can directly give the Array name, it will automatically assign the mem address of the first element in the array
    cout << "Memory address of A[0]: " << &p << endl;
    cout << "Value at A[0]: " << *p << endl;
    cout << "Value at A[1]: " << *(p+1) << endl;

    for(int i = 0; i<5; i++){
        cout << "Value in Array: " << *(p+i) << endl;
    }
}