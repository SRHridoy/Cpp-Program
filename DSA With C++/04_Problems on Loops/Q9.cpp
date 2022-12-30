/* Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Eg. Sample Input - Enter a +ve Integer : 14
Sample Output –
14 = 3 + 11
14 = 7 + 7 */

#include<iostream>
using namespace std;
int main(){
    int posNum;
    cout << "Enter a +ve Integer : ";
    cin >> posNum;
    for (int i = 2; i <= posNum; i++)
    {
        for(int j = 2; j <=posNum; j++){
            if(i + j == posNum && i)
        }
    }
    
}