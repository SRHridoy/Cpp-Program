/* Q1 - Write a program to check whether two numbers (entered by user) are equal or not. (Easy)
Sample Input 1: 1, 2
Sample Output 1: 0
Sample Input 2: 2, 2
Sample Output 2: 1 */

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    if(num1==num2){
        cout << num1 << " = " << num2 << endl;
    }else{
        cout << num1 << " != " << num2 << endl;
    }
}