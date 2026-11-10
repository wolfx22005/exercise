#include <iostream>
#include <string>
#define PI 3.1419
using namespace std;

int main(){

    int choice;
    double area, radius, length, width, base, height;

    cout << "=========AREEA CALCULATOR=========" << endl;
    cout << "1. area of the circle " << endl;
    cout << "2. area of the rectangle " << endl;
    cout << "3. area of the triangle"  << endl;
    cout << "4. area of the square" << endl;
    cout << "5. exit " << endl;

    cout << "Enter a number between 1 - 4: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Enter a radius of the circle: ";
            cin >> radius;
            area = PI * radius;
            cout << "Area of the circle of radius " << radius << " = " << area << endl;
            break;

        case 2:
            cout << "Enter the width ";
            cin >> width;
            //cout << "" << endl;
            cout << "Enter the length: ";
            cin >> length;
            area = length * width;
            cout << "Area of the rectanlge of width " << width << " and length " << length << " = " << area << endl;
            break;

        case 3:
            cout << "Enter the height: ";
            cin >> height;
            //cout << "" << endl;
            cout << "Enter the base ";
            cin >> base;
            area = 0.5 * base * height;
            cout << "Area of the triangle of base " << base <<" and height" << height << " = " << area << endl;
            break;

        case 4:
            cout <<" Enter the length: ";
            cin >> length;
            area = length * length;
            cout << " Area of the square of length " << length << " = " << area << endl;
            break;

        case 5:
            cout << "exit. THANK YOU FOR USING THE AREA CALCULATOR" << endl;
            break;

        default:
            cout << "you entered an invalid input. please enter a valid number betwwen 1 - 4" << endl;
    }
 }