//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define fo(i, n)          for(int i = 0; i <n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v;
    fo(i,n){
        int x;cin >> x;
        v.pb(x);
    }

    int sumSereja = 0;
    int sumDima = 0;

        int left_ptr = 0;
        int right_ptr = n-1;
        int entry = 0;
        while(left_ptr<=right_ptr)
        {
            if(entry%2==0)
            {
                if(v[left_ptr]>v[right_ptr])
                {
                    sumSereja+=v[left_ptr];
                    //cout <<"1st condi-->" <<  sumSereja << endl;
                    left_ptr++;
                }
                else
                {
                    sumSereja+=v[right_ptr];
                    //cout <<"2nd condi-->" <<  sumSereja << endl;
                    right_ptr--;
                }
            }
            else
            {
                if(v[left_ptr]>v[right_ptr])
                {
                    sumDima+=v[left_ptr];
                    //cout <<"3rd condi-->" <<  sumDima << endl;
                    left_ptr++;
                }
                else
                {
                    sumDima+=v[right_ptr];
                    //cout <<"4th condi-->" <<  sumDima << endl;
                    right_ptr--;
                }
            }
            entry++;
        }
    cout << sumSereja << " " << sumDima << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}