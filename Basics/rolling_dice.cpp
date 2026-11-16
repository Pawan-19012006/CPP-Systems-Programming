#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    srand(time(0));
    int maxValue = 6;
    int minValue = 1;
    int dice = (rand() % (maxValue - minValue)) + minValue;
    cout << "Random Dice Value: " << dice << endl;
    return 0;
}