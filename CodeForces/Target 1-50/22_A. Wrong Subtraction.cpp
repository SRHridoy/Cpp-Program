#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int last;
    for (int i = 0; i < k; i++)
    {
        last = n % 10;
        if (last != 0)
        {
            n--;
        }
        else if (last == 0)
        {
            n/=10;
        }
    }
    cout << n;

    return 0;
}