#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, b;
    cin >> l >> b;

    int count = 0;
    if (l == b)
    {
        cout << 1;
    }
    else
    {
        while(l <= b)
        {   
            count++;
            if(l == b)
            break;
            l = l * 3;
            b = b * 2;
        }
    cout << count;
    }
    
    return 0;
}