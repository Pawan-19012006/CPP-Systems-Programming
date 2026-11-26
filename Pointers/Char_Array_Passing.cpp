#include <iostream>

using namespace std;

void print(char* c){
    int i = 0;
    while(c[i]!='\0'){ // until it reaches the null pointer print the values one by one for me
        cout << c[i] << endl;
        i++;
    }
}

int main(){
    char c[6] = {'H','E','L','L','O','\0'};
    print(c);
    return 0;
}