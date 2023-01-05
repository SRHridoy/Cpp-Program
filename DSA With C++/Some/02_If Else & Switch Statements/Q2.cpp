/* Q2 - Write a program to print absolute value of a number entered by the user. (Easy)
Sample Input: -1
Sample Output: 1 */

#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num>0){
        cout << num << endl;
    }else{
        cout << num*(-1) << endl;
    }
}