#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i];
    }

    int sum[n];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > h)
        {
            sum[j] = 2;
        }
        else
            sum[j] = 1;
        // cout << sum[j] << endl;
    }

    int store = 0;
    for (int i = 0; i < n; i++)
    {
        store+= sum[i];
    }
    
    cout << store;
    
    return 0;
}