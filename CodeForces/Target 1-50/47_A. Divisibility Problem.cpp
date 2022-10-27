// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;

//     long long a, b;
//     while (t--)
//     {
//         cin >> a >> b;
//         int c = a;
//         while ((a % b) != 0)
//         {
//             a++;
//         }
//         cout <<a-c<< endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    long long a, b;
    while (t--)
    {
        cin >> a >> b;
        if (a%b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - a%b << endl;
        }
        

    }
    

    return 0;
}