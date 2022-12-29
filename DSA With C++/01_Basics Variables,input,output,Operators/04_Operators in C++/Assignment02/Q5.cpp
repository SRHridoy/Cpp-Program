/* Q5 - Write a program to calculate the sum of digits of a 3 digit number. (Hard)

Sample Input : 123
Sample Output : 6 */

#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int lastDigit = num%10;
    num/=10;
    int secondDigit = num%10;
    num/=10;
    int firstDigit = num%10;
    cout << firstDigit + secondDigit + lastDigit << endl;
}