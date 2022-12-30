/* Q4- Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.
(Medium)

Sample Input : Enter an integer: -6
Sample Output : The number is negative and skipped */

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if(num>0){
        cout << num << endl;
    }else{
        cout <<"The number is negative and skipped";
    }
}