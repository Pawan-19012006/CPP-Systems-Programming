#include <iostream>

using namespace std;

void SumOfElements(int* arr, int size, int& sum){ // we use pass by reference for the sum variable, so that it gets direct access to the variable itself in the memory
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
}

// arr always gets passed into an external function only as a pointer to the memory location of the first element in the array

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    SumOfElements(arr, size, sum);
    cout << "Sum: " << sum << endl;
    return 0;
}