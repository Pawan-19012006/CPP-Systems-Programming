#include <iostream>

using namespace std;

void Increment(int a){
    a = a + 1;
}

int main(){
    int x = 10;
    Increment(x);
    cout<< "Value of X: "<< x <<endl; //here the answer would not be 11, instead we will get 10, since here a is a local variable which could be used only within its function, so the value of a will be changed only within the increment function
}

//therefore only option is to use the Pointer call by reference method