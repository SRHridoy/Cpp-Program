#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n>0)
    {
        n = n/2;
        cnt++;
    }
// O(1) + O(1) + O(1) + O(log(N)) = O(log(N)) 

    return 0;
}