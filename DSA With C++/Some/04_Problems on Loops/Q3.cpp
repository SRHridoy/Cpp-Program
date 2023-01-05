/* Q3 - Write a program to find the sum of n natural numbers.

Sample Input : 5
Sample Output : 15 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }cout << sum << endl;
    
}