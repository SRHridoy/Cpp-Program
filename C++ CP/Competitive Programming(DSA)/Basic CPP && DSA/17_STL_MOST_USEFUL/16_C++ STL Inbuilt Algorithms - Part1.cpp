#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    /* {SRH}----------O(N)----------{SRH} */

/* {SRH}----------MIN , MAX----------{SRH} */
    cout << *min_element(v.begin(),v.end()) << endl;
    cout << *max_element(v.begin(),v.end()) << endl;
/* {SRH}----------SUM----------{SRH} */
    cout << accumulate(v.begin(),v.end(),0) << endl;
/* {SRH}----------COUNT----------{SRH} */
    cout << count(v.begin(),v.end(),5) << endl;
/* {SRH}----------FIND----------{SRH} */
    cout << *find(v.begin(),v.end(),2) << endl;
/* {SRH}----------REVERSE----------{SRH} */
    reverse(v.begin(),v.end());
    for(auto it:v){
        cout << it << " ";
    }cout << endl;
}