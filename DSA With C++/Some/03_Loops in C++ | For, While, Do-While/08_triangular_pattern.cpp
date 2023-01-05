#include<iostream>
using namespace std;
int main(){
/* ----------TO PRINT TRIANGULAR PATTERN WE NEED TO GO J <= I IN INNER LOOP ----------*/
    int row;
    cin >> row;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }cout << endl;
    }
}