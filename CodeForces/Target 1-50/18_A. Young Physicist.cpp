#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[300];
    int sum = 0;

    
    if (n != 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i];
            }

            sum += arr[i];
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        
    }
    
    if (sum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}