#include <iostream>
#include <string>
using namespace std;

int main(){

    int number = 5;
    cout << "Enter a number between 5 and 10 ";
    cin >> number;

    while(number <= 10){
        
        if (number >= 5 && number <= 10){
            cout << "Your input value of (" << number << ") has been accepted" << endl;
            break;
        }
        else if(cin.fail()){
            cout << "You entered an invalid input. Please try again" << endl;
            cin.clear();
            cin.ignore(100,'\n');
            break;
        }else{
            cout << "you entered (" << number<< ") please provide a valid input" << endl;
            cin >> number;
        }
    }
    return 0;
}