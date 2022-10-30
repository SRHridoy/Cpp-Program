#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin>>n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int max = p[0],min = p[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i]>max)
        {
            max = p[i];
            count++;
        }
        if (p[i]<min)
        {
            min = p[i];
            count++;
        }
    }
    cout << count;
    return 0;
}