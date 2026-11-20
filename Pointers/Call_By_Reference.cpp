#include <iostream>

using namespace std;

void Increment(int *a){
    *a = *a + 1;
}

int main(){

    int x = 10;
    cout << "Value of x before function call: " << x << endl;
    Increment(&x);
    cout << "Value of x after function call: "  << x << endl;

}