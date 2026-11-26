#include <iostream>

using namespace std;

int main(){

    int a[2][3] = {{1,2,3},{4,5,6}};

    //Different ways to print the address of the first element in the first row
    cout << a << endl;
    cout << *a << endl;
    cout << &a[0] << endl;
    cout << &a[0][0] << endl;
    cout << a[0] << endl;

    
    // //Different ways to print the address of the first element in second row
    cout << a+1 << endl;
    cout << *(a+1) << endl;
    cout << &a[1] << endl;
    cout << &a[1][0] << endl;
    cout << a[1] << endl;

    //printing values
    cout << *(*a) << endl;//prints the first element of the array
    cout << *(*a+1) << endl; // prints the second element of the first array
    cout << *(a[1]+2) << endl; // prints the 3rd element(+2) of the second array(a[1]), ie, a[1] is 4, a[1]+2 is 6
    cout << *(*(a+1)+1)<<endl;
}