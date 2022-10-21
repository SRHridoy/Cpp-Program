#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p[n],q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }

    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if ((q[j] - p[j]) >= 2)
        {
            count++;
        }
        
    }
    cout << count;
    
    return 0;
}