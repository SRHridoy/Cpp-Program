#include<bits/stdc++.h>
using namespace std;

const int N = 1000001;
bool seive[N];//--> at max 10^8
void createSeive()
{
    for(int i = 2; i <= N; i++)
        seive[i] = true;
        
    for(int i = 2; i*i <= N; i++)
        if(seive[i] == true)
            for (int j = i*i; j <=N ; j++)
                seive[j] = false;
}

int main()
{
    createSeive();//-->O(Nlog(longN))
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if(seive[n]==true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}