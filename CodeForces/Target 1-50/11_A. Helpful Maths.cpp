#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s1;

    if(s == "1")
        cout << 1;
    else if(s == "2")
        cout << 2;
    else if(s == "3")
        cout << 3;

    sort(s.begin(), s.end());
    int i;
    for (i = 0; s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        s1[i] = s[i];
        cout << s[i];
        
    }
    
    cout << s1 << '+';
    
    return 0;
}