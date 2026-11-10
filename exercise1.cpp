#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){

    //generate random numbers between 1 and 11
        srand(time(0));

    //assign the random value denerated to an int variable number
    int DaysUntilExpiration = rand() % 11 + 1;


    if(DaysUntilExpiration <= 10){
        cout << "your subscription will expire soon.Renew now and save 10%!" << endl;  
    } 
    else if(DaysUntilExpiration <= 5){
        cout << "your subscription will expire in " <<DaysUntilExpiration<<" days. Renew now and save 10%" << endl; 
    }
    else if(DaysUntilExpiration <= 1){
        cout << "Your subscription will expire in a day. Renew now and save 20%" << endl;
    }
    else if(DaysUntilExpiration = 0){
        cout << "Your subscription has expired!" << endl;
    }else{
        cout << " Your subscription is active" << endl;
    }

    return 0;
}