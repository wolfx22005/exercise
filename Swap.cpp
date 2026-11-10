#include <iostream>
using namespace std;

int main(){
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    SwapNumbers(varA, varB);
    cout << "varA after wap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}
void SwapNumbers(int &y, int &x){
    int temp =  y;
    y = x;
    x = temp;

}
