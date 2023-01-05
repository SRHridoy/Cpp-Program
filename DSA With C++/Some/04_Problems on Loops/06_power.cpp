#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a,b;
    cin >>a >> b;

    int power = 1;
    for(int i = 1; i<=b;i++)
    {
        power*=a;
    }
    cout << power;


    return 0;
}