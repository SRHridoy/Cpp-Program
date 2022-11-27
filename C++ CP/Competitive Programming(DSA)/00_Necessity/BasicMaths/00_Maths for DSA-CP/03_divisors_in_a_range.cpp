#include<bits/stdc++.h>

int cnt_div(int n){
    int cnt = 0;
    for (int i = 1; i * i <= n; i++){
        if(n%i==0){
            cnt++;// i is a factor;

            if(i!=n/i)
                cnt++;//(n/i) is also a factor...
        }
    }
    return cnt;
}

using namespace std;
int main()
{
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        cout << cnt_div(i) << endl;
    }
    return 0;
}