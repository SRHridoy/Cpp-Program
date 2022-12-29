/* Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number. (Hard) */
/* Sample Input : 12345
Sample Output : 1+4=5 */

#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int firstDigit = num/10000;
    int lastDigit = num%10;
    // cout << firstDigit << " " << lastDigit << endl;
    cout << firstDigit <<  " + " << lastDigit << " = " << firstDigit + lastDigit  << endl;
}