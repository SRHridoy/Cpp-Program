#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cnt++;
        }
        
    }
    //O(N^2)

    return 0;
}