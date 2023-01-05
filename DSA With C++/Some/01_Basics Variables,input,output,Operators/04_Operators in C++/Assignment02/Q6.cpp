/* Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%) (Easy)
Sample Input : 8 10
Sample Output :
Sum = 18
Difference = -2
Product = 80
Division = 0.8 */
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << "Sum = " << num1+num2 << endl;
    cout << "Differnce = " << num1-num2 << endl;
    cout << "Product = " << num1*num2 << endl;
    cout << "Division = " << num1*1.0/num2 << endl;
}