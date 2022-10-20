// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string player;
//     cin >> player;

//     // int countArr[size(player)];
//     int count = 0, flag = 0;
//     if (size(player) >= 7)
//     {
//         for (int i = 0; i < size(player); i++)

//         {
//             for (int j = 1; j < size(player); j++)
//             {
//                 if (player[i] == player[j])
//                 {
//                     count ++;
//                     // cout << count;
//                 }
//                 if (count == 7)
//                 {
//                     flag = 1;
//                     break;
//                 }

//             }
//             count = 0;
//         }

//         if (flag == 1)
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }
//     }

//     else
//     {
//         cout << "NO";
//     }

//     // cout << count;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string zo;
    cin >> zo;

    int count = 1;
    int flag = 0;
    for (int i = 0; i < size(zo); i++)
    {
        if (zo[i] == zo[i + 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else 
        count = 1;
    }
    // cout << count;
    // if (flag == 1)
    // {
    //     cout << "YES";
    // }
    
    cout << "NO";

    return 0;
}