#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0));
    int DaysUntilExpiration = rand() % 11 +1;

    switch(DaysUntilExpiration){
        case 10:
        cout << "Your subscription will expire soon!. Renew now!" << endl;
        break;

        case 5:
        cout << "Your subscription will expire in " <<DaysUntilExpiration << " days. Renew now and save 10%" << endl;
        break;

        case 1:
        cout << "Your subscription will expire within a day. Renew and save 20%!" << endl;
        break;

        case 0:
        cout << "Your subscription has expired" << endl;
        break;

        default:
        cout << "you have an active subscription" << endl;
    }
    return 0;
}