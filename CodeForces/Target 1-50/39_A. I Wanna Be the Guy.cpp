// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int level;
//     cin >> level;

//     int x;
//     cin >> x;
//     int strX[x];
//     for (int i = 0; i < x; i++)
//     {
//         cin >> strX[i];
//     }

//     int y;
//     cin >> y;
//     int strY[y];
//     for (int i = 0; i < y; i++)
//     {
//         cin >> strY[i];
//     }

//     int noti = 0;
//     for (int i = 0; i < x; i++)
//     {
//         if (strX[i] == level)
//         {
//             cout << "I become the guy.";
//             return 0;
//         }
//         else if ((i == x - 1))
//         {
//             noti = 1;
//         }
//     }
//     for (int i = 0; i < y; i++)
//     {
//         if (strY[i] == level)
//         {
//             cout << "I become the guy.";
//             return 0;
//         }
//         else if ((i == y - 1))
//         {
//             noti = 1;
//         }
//     }

//     if (noti == 1)
//     {
//         cout << "Oh, my keyboard!";
//     }

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,p,q,c=0,c1=0;
    cin>>f>>p;
    int arr[250];
    for(int i=0; i<p; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p; i<p+q; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));
    for(int i=0; i<p+q; i++)
    {
       if(arr[i]!= arr[i+1])
       {
           c1++;
       }
    }
    if(c1==f)
    cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}
