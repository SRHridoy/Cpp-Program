/* Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not. (Easy)
Sample Input :
Enter length: 5
Enter breadth: 4
Sample Output : It is a rectangle */

#include<iostream>
using namespace std;
int main(){
    int len,bred;
    cout << "Enter length: "; 
    cin >> len;
    cout << "Enter breadth: ";
    cin >> bred;
    if(len==bred){
        cout <<"It is a Square" << endl;
    }else{
        cout << "It is a rectangle" << endl;
    }
}