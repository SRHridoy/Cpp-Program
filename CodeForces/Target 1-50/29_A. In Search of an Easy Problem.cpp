#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int oneOrZero[n], flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> oneOrZero[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (oneOrZero[i] == 1)
        {
            cout << "HARD";
            return 0;
        }
        else
            flag = 0;
    }
    if(flag == 0)
        cout << "EASY";

    return 0;
}