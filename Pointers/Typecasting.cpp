#include <iostream>

using namespace std;

int main(){
    int a = 1025;
    int *p = &a;
    cout << "Memory Address of a via Pointer P: " << p << endl;
    cout << "Value of a via Pointer P: " << *p << endl;
    cout << "Value of Mem address +1 via pointer P: " << p+1 << endl;
    cout << "Value + 1 via Pointer P: " << *(p+1) << endl;
    char *p0;
    p0 = (char*)p; // we do typecasting to convert the pointer datatype from int to char
    cout << "Memory Address of a via pointer P0: " << (void*)p0 << endl;
    cout << "Value of a via pointer P0: " << (int)*p0 << endl;
    cout << "Mem address +1 via pointer P0: " << (void*)(p0+1) << endl;
    cout << "Value + 1 via Pointer P0: " << (int)*(p0+1) << endl;
}