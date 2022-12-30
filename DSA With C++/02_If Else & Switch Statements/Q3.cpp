/* Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss. (Medium)

Explanation :
Formula for profit and loss
Profit = S.P - C.P
Loss = C.P - S.P
(S.P is Selling Price and C.P is Cost Price)
Sample Input :
Enter cost price: 4000
Enter selling price: 9560
Sample Output :
Profit = 5560 */

#include<iostream>
using namespace std;
int main(){
    int costPrice,sellingPrice;
    cout << "Enter cost price: ";
    cin >> costPrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;
    if(costPrice>sellingPrice){
        cout << "Loss = " << costPrice - sellingPrice << endl; 
    }else{
        cout << "Profit = " << sellingPrice - costPrice << endl;
    }
}