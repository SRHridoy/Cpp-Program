/* Q4 - Write a program to reverse a given integer number.

Sample Input : 538
Sample Output : 835 */

#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    while (num > 0)
    {
        int lastDigit = num%10;
        num /= 10;
        cout << lastDigit;
    }   
}