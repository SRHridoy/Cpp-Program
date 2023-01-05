/* Q6 - Write a C++ program to swap two numbers with the help of a third variable. (Hard)
Sample Input : 2, 3
Sample Output : 3, 2 */

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num2 << num1;
}