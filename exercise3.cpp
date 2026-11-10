#include <iostream>
#include <string>
using namespace std;

int main(){

    char str = 'B';
    string arr[] ={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    for(int i = 0; i < 8; i++){
        if(arr[i][0] == str){
            cout << arr[i] << endl;
        }
       // else{
          //  cout << "Not matcching" << endl;
        //}
    }
    return 0;
}