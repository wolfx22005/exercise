#include <iostream>
using namespace std;

int main(){

    int numberOfElements = 0;
    int* dynamicArray = nullptr;

    cout <<"How numbers would you like to tyepe in? ";
    cin >> numberOfElements;

    dynamicArray = new int[numberOfElements];

    if(dynamicArray == nullptr){
        cout << "Error: Memory could not be allocated." << endl;
    }else{
        for(int i =0; i < numberOfElements; i++){
            cout << "Enter number ";
            cin >> dynamicArray[i];
    }
        cout << "You entered: " << endl;
        for(int j=0; j < numberOfElements; j++){
            cout << dynamicArray[j] << ", ";
        }

    delete[] dynamicArray;
}
    return 0;
}