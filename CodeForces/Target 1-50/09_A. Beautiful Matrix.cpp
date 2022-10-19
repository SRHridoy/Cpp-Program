#include<bits/stdc++.h>
using namespace std;

int main(){
    int Arr[5][5],r, c;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> Arr[i][j];
            if (Arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
            
        }
        
    }


    int ans = abs(2 - r) + abs(2 - c);
    cout << ans;
    
    
    return 0;
}