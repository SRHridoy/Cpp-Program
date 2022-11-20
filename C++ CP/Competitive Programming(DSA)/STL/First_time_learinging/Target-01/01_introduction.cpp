#include<bits/stdc++.h> //--> saves a lot of time for cp...but not preferrable for interview...
using namespace std;

namespace hri {//-->something inside that(scope)
    int val = 50;
    int getVal() {
        return val * 10;
    }
}
int main(){
    double val = 10.0;
    cout << val << endl;//-->prints 10.0
    cout << hri::val << endl;//-->prints 50

    cout << hri::getVal() << endl;//--<prints 500
}