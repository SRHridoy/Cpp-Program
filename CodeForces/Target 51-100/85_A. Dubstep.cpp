#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string s;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        if (s[i] =='W' && s[i+1] == 'U'&& s[i+2] == 'B')
        {
            cout << " ";
            i+=3;
        }
        else
        {
            cout << s[i];
            i++;
        }
        
    }

    return 0;
}