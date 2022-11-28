#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    vector<int>div(n+1);

    for (int i = 1; i <= n; i++){//-->O(NlogN)
        for(int j = i; j<= n; j+=i){
            div[j]++;//i is a divisor of j...
            cout << i << " " << j << endl;
        }
    }
    
    for(auto it:div)
        cout << it << endl;
    return 0;
}