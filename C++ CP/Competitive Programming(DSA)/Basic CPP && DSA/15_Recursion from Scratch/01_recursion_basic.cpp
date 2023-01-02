#include<bits/stdc++.h>
using namespace std;

void func(int n){
    cout << "age call ,deep then print" << endl;
    if(n == 0) return;
    func(n-1);
    cout << n << endl;
}
void func1(int n){
    cout <<"age print then call and print" << endl;
    if(n == 0) return;
    cout << n << endl;
    func1(n-1);
}

int main(){
    func(5);
    func1(5);
}