#include<bits/stdc++.h>
using namespace std;
int main()
{
//N<100000
//a[i]<100000
    int n;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
//O(1)+O(N)+O(N)+O(N)+O(N)-->O(N)
    return 0;
}