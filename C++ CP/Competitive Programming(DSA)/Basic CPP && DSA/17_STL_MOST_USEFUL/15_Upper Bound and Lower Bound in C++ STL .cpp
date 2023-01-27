#include<bits/stdc++.h>
#define int   long long
using namespace std;

int32_t main(){

/* {SRH}----------UPPER AND LOWER BOUND IN ARRAY----------{SRH} */


//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
// //To use upper or lower then must be sorted...
//     sort(a,a+n);
// /* {SRH}----------LOWER BOUND----------{SRH} */
// // ----> present thakle oita noile oiter cheye boro ta...jodi boro tao na thale then end() return korbe...

// /* {SRH}----------UPPER BOUND----------{SRH} */
// //----->Present thakleo oitar boro ta...

//     for(int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }cout << endl;

//    // int *ptr = lower_bound(a, a+n,5);
//     int *ptr = upper_bound(a, a+n,5);
//     if(ptr == (a+n)){
//         cout << "NOT FOUND!";
//         return 0;
//     }
//     cout << (*ptr) << endl;

/* {SRH}----------UPPER AND LOWER BOUND IN VECTOR----------{SRH} */
    // int n; cin >> n;
    // vector<int>v(n);
    // for(int i = 0; i < n; i++) cin >> v[i];
    // sort(v.begin(),v.end());
    // auto it = upper_bound(v.begin(),v.end(),5);
    // if(it == v.end()){
    //     cout << "NOT FOUND!";
    //     return 0;
    // }cout << *it << endl;

/* {SRH}----------UPPER AND LOWER BOUND IN SET and MAP----------{SRH} */
        /* {SRH}----------SET----------{SRH} */
    // int n; cin >> n;
    // set<int>s;
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     s.insert(x);
    // }
    // //auto it = lower_bound(s.begin(),s.end(),5);//O(n) eta
    // //sejonne O(logN) er jonne evabe use kora lagbe---->
    // auto it = s.lower_bound(5);
    // cout << *it << endl;


        /* {SRH}----------MAP----------{SRH} */
    //Sudhu key er opor upper and lower khatbe...
}