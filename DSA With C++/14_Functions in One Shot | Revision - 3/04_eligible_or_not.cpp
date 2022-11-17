#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

bool checkEligibile(int age, int limit) {
    if(age >= limit) {
        return true;
    }
    else{
        return false;
    }
}

void solve()
{
    int votingLimit = 18;
    int  isEligibleForVoting = checkEligibile(15,votingLimit);
    if (isEligibleForVoting)
    {
        cout << "Yes, the current person is eligible to vote";
    }
    else
    {
        cout << "No, the current person is not eligible to vote";
    }
    
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