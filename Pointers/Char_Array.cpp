#include <iostream>

using namespace std;

int main(){
    char c[6] = {'H','E','L','L','O','\0'}; // always a char array needs to end with a null value
    char* c1; 
    c1 = c; // here the array's starting position memory address is passed to the pointer so that it can directly access it
    cout << c1[0] << endl;
    cout << c1[1] << endl;
    cout << c1[2] << endl;
    cout << c1[3] << endl;
    cout << c1[4] << endl;
    cout << c1[5] << endl;
}