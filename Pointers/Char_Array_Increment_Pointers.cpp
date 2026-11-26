#include <iostream>

using namespace std;

void print(char* c){
    int i = 0;
    while(*c!='\0'){ // now we are using the pointer to directly access the element, we know that, c is the pointer, by writing *c we can directly access the element present in the memory location which pointer is storing, now we can easily use that element to check the condition and print it
        cout << *c << endl; //printing the value present in the mem loc stored in ptr
        c++; // we are incrementing the memory address, so that it will give us the next element
    }
}

int main(){
    char c[6] = {'H','E','L','L','O','\0'};
    print(c);
    return 0;
}