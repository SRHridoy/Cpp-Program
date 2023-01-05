/* Q1 - Write a program to calculate the factorial of a number.
Explanation : Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n.(Easy)
E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
Also,
1! = 1
0! = 0 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }cout << n << "! = " << factorial << endl;
}