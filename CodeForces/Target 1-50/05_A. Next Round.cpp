#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }


// int count = 0;
//     for (int i = k; i < n; i++)
//     {
//         if (arr[k - 1] != 0 && arr[k - 1] == arr[i])
//         {
//             count++;
//         }
        
//     }
//     int count01 = 0 , m = k;
//     if(arr[k - 1] == 0)
//     {
//         for (int i = 0; i <= (k - 2); i++)
//         {
//             if(arr[i] != 0)
//             {
//                 count01++;
//             }
 
//         }
//         if (count01 == 0)
//         {
//             cout << 0;
//         }
//         else
//         cout << count01;
        
//     }
//     else
//     cout << (k + count);

//SHORTCUT-->
    int count = 0 ;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= arr[k] && arr[i] > 0)
        {
            count++;
        }
        
    }
    cout << count;
    

    return 0;
}
