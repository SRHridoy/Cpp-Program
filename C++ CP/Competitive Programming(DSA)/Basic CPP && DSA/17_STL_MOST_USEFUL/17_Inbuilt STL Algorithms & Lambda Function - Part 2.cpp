#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){

/* {SRH}----------LAMBDA FUNCTION----------{SRH} */
    //[](var){return value;}
    // auto sum = [](int x,int y){return x+y;};

    // cout << sum(2,5) << endl;

/* {SRH}----------ALL/NONE/ANY OF FUNCTION----------{SRH} */
    vector<int> v = {2, 4, 6};
    cout << all_of(v.begin(),v.end(),[](int x){return x %2== 0;}) << endl;
    cout << any_of(v.begin(),v.end(),[](int x){return x %2== 0;}) << endl;
    cout << none_of(v.begin(),v.end(),[](int x){return x %2== 0;}) << endl;

}