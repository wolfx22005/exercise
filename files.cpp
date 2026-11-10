#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
     
     int totalletters= 0;
     int count = 0;
     char letters;
     char ch;
     string word;
     int words = 0;
     string textcontents;
     string content;
     string statement;
     string capital;
     string name;

     ifstream fileData("myfile.txt");
     if(!fileData){
          cout << "Error in handling the file" << endl;

     return 1;
     }  
     while(getline(fileData, name)){
          cout << name << endl;
     }
     fileData.clear();
     fileData.seekg(0);

     while(fileData >> capital){
          capital[0] = tolower(capital[0]);
          cout << capital << " ";
     }


     while(getline(fileData, textcontents)){
          cout << textcontents << endl;
     } 
     fileData.clear();
     fileData.seekg(0);

     while(getline(fileData, statement)){
          content += statement + "\n";
     }

     fileData.clear();
     fileData.seekg(0);

     while(fileData.get(letters)){
          totalletters++;
     }

     fileData.clear();
     fileData.seekg(0);

     while(fileData.get(ch)){
          if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
               count ++;
          }
     }

     fileData.clear();
     fileData.seekg(0);

     while(fileData >> word){
          words ++;
     }
   
          cout << "Total number of words is " << totalletters << endl;
          cout << "Total number of vowels is " << count << endl;
          cout << "Total number of words is " << words << endl;
          reverse((content.begin()), content.end());
          cout << "Ststement in reverse" ;
          cout << content << endl;


     fileData.close();
     return 0;
}