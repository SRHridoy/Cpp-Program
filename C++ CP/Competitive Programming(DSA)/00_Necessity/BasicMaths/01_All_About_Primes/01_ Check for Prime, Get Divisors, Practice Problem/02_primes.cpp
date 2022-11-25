#include<bits/stdc++.h>
using namespace std;
int main()
{
//Prime defination-->
            //the number which is divisibe by 1 and itself and have 2 factors...

    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(n%i==0)
            cnt++;
    if(cnt == 2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}