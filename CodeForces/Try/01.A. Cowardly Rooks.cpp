// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     int n, m, x[8], y[8];
//     // int possible = (n+1)/2;
//     while (t--)
//     {
//         cin >> n >> m;
//         int possible = (n + 1) / 2;
//         for (int i = 0; i < m; i++)
//         {
//             cin >> x[i] >> y[i];
//             if (possible < m)
//             {
//                 cout << "NO";
//                 break;
//             }
//             else
//             {
//                 if(((m == 1) && (x[i] == 1) && (y[i] == 1)) ||((m == 2) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)) ||((m == 3) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)&& (x[i+2] == 5)&&(y[i+2]==5)) ||((m == 4) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)&& (x[i+2] == 5)&&(y[i+2]==5)&& (x[i+3] == 7)&&(y[i+3]==7)) ||((m == 5) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)&& (x[i+2] == 5)&&(y[i+2]==5)&& (x[i+3] == 7)&&(y[i+3]==7)&& (x[i+4] == 9)&&(y[i+4]==9)) ||((m == 6) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)&& (x[i+2] == 5)&&(y[i+2]==5)&& (x[i+3] == 7)&&(y[i+3]==7)&& (x[i+4] == 9)&&(y[i+4]==9)&& (x[i+5] == 11)&&(y[i+5]==11)) ||((m == 7) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)&& (x[i+2] == 5)&&(y[i+2]==5)&& (x[i+3] == 7)&&(y[i+3]==7)&& (x[i+4] == 9)&&(y[i+4]==9)&& (x[i+5] == 11)&&(y[i+5]==11)&& (x[i+6] == 13)&&(y[i+6]==13))||((m == 8) && (x[i] == 1) && (y[i] == 1) && (x[i+1] == 3)&&(y[i+1]==3)&& (x[i+2] == 5)&&(y[i+2]==5)&& (x[i+3] == 7)&&(y[i+3]==7)&& (x[i+4] == 9)&&(y[i+4]==9)&& (x[i+5] == 11)&&(y[i+5]==11)&& (x[i+6] == 13)&&(y[i+6]==13)&& (x[i+7] == 15)&&(y[i+7]==15))){
//                     cout << "YES";
//                     break;
//                 }
//             }
//         }
        
        
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
	faster
    int n,q;
    cin>>n>>q;
    map<int,int>r,c;
    ordered_set row,col;

    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int l1,r1;
            cin>>l1>>r1;
            row.insert(l1);
            col.insert(r1);

            r[l1]++;
            c[r1]++;
        }
        else if(t==2)
        {
            int l1,r1;
            cin>>l1>>r1;
            r[l1]--;
            c[r1]--;
            if(r[l1]==0)row.erase(l1);
            if(c[r1]==0)col.erase(r1);
        }
        else
        {
            int l1,r1,l2,r2;
            cin>>l1>>r1>>l2>>r2;
            int x = row.order_of_key(l2+1)-row.order_of_key(l1);
            int y = col.order_of_key(r2+1)-col.order_of_key(r1);

            if(x==((l2-l1)+1) || y==((r2-r1)+1))cout<<"Yes"<<nl;
            else cout<<"No"<<nl;
        }
    }
}
