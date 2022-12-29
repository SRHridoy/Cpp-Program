/* Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
both the conditions 'a < 50' and 'a < b' are true. (Easy)

Sample Input 1 : 1, 2
Sample Output 1: 0
Sample Input 2: 2, 2
Sample Output 2: 1 */

#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a < 50 and a < b){
        cout << true << endl;
    }else{
        cout << false << endl;
    }
}