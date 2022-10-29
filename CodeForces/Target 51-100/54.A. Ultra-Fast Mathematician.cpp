#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char a[101], b[101];
    cin >> a >> b;
    for (int i = 0; i < strlen(a); i++)
    {
        cout << (a[i]^b[i]);
    }
    

    return 0;
}