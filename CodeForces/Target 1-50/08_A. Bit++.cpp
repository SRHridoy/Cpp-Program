#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0;
    string str;
    while (n--)
    {
        cin >> str;
        if (str == "X++" || str == "++X")
        {
            x++;
        }
        if(str == "--X" || str == "X--")
        {
            x--;
        }
        
    }
    cout << x;
    
    
    
    return 0;
}