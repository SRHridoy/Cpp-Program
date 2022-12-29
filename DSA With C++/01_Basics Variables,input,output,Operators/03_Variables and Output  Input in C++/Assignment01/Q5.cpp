/* Q5 - Write a C++ program to find size of basic data types. (Medium)
Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
to accomplish this. Give it a try to know the data types in depth) */
#include<iostream>
using namespace std;
int main(){
    cout << "Size of fundamental data types: "<< endl;
    cout << "The sizeof(char): " << sizeof(char) << "bytes" << endl;
    cout << "The sizeof(short): " << sizeof(short) << "bytes" << endl;
    cout << "The sizeof(int): " << sizeof(int) << "bytes" << endl;
    cout << "The sizeof(long): " << sizeof(long) << "bytes" << endl;
    cout << "The sizeof(long long):" << sizeof(long long) << "bytes" << endl;
    cout << "The sizeof(float): " << sizeof(float) << "bytes" << endl;
    cout << "The sizeof(double): " << sizeof(double) << "bytes" << endl;
    cout << "The sizeof(long double): " << sizeof(long double) << "bytes" << endl;
    cout << "The sizeof(bool): " << sizeof(bool) << "bytes" << endl;
}
