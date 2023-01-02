#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}
/* ----------TIME - COMPLEXITY OF RECURSION---------- */

/*  01. Number of function calls-----> O(n)
    02. What is complexity of each function----> O(1)
    Final Time - Complexity 1*2 = O(n)*O(1) = O(n) */
int main(){
    int n; cin >> n;
    cout << factorial(n);
}