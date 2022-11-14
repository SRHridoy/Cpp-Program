//Sort an Array consisting of only 0s and 1s.

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void sortZerosAndOnes(vector<int>&v)
{
    int cnt_zeros = 0;
    //counting zeros-->
    for(auto ele:v)
        if(ele==0)
            cnt_zeros++;
    //inserting zeros and ones-->
    for(int i = 0; i < v.size();i++)
        if(i<cnt_zeros)
            v[i] = 0;
        else
            v[i] = 1;
}

void solve()
{
    int n;
    cin >> n;

    vector<int>v;
    for(int i = 0; i<n;i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortZerosAndOnes(v);

    for(auto it:v)
        cout << it << " ";
    cout << endl;
}

int main()
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