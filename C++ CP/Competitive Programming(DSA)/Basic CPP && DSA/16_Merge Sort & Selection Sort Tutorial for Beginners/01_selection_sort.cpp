#include<bits/stdc++.h>
using namespace std;
//O(n*n)
int main(){
    int n; cin >> n;
    int a[n];
/* ----------TAKING INPUT OF ARRAY---------- */
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
/* ----------MINIMUM ELEMENT INDEX FIND---------- */
    for(int i = 0; i<n; i++){
        int miniIndex = i;
        for(int j = i+1; j<n; j++){
            if(a[j]<a[miniIndex]){
                miniIndex = j;
            }
        }swap(a[i],a[miniIndex]);
    }

/* ----------PRINTING SORTED ARRAY---------- */
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
}