#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    float x,y;
    cin >> x >> y;

    if(x==0&&y==0)
        cout << "Origem" << nl;
    else if(x==0&&y!=0)
        cout << "Eixo Y" << nl;
    else if(y==0&&x!=0)
        cout << "Eixo X" << nl;
    else if(x>0&&y>0)
        cout << "Q1" << nl;
    else if(x>0 && y<0)
        cout << "Q4" << nl;
    else if(x<0 && y>0)
        cout << "Q2" << nl;
    else if(x<0 && y <0)
        cout << "Q3" << nl;
    


    return 0;
}