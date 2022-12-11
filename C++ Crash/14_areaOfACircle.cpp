#include<iostream>
#include <cmath>
using namespace std;

int main(){
    const float pi = 3.1416;
    double radius;
    cout << "Enter the value of Radius: ";
    cin >> radius;
    double area = pi * pow(radius, 2);
    cout << "The area of the Circle is : " << area;
}