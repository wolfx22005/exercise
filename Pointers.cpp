#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int* pPointer = nullptr;
    pPointer = &firstValue;
    *pPointer = 10;

    pPointer = &secondValue;
    *pPointer = 20;

    cout << "first value is " << firstValue << endl;
    cout << "second value is " << secondValue << endl;

    return 0;
}