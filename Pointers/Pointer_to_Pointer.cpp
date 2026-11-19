#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    int **p1 = &p;
    int ***p2 = &p1;
    cout<< "p mem add: " << p << endl;
    cout<< "p value: " << *p << endl;
    cout<< "p1 mem add: " << p1 << endl;
    **p1 = 12;
    cout<< "p1 value: " << *(*p1) << endl;
    cout<< "p2 mem add: " << p2 << endl;
    ***p2 = **p1 + 10;
    cout<< "p2 value: " << *(*(*p2)) << endl;
    cout<< "p1 value: " << **p1 << endl;
    cout<< "p value: " << *p <<endl;
    cout << "Original Value a: " << a << endl;
}