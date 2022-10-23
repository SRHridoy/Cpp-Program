#include <bits/stdc++.h>
using namespace std;

int main()
{
    string chat;
    cin >> chat;

    for (int i = 0; i < chat.size(); i++)
    {
        if (chat[i] == 'h')
            for (int j = i + 1; j < chat.size(); j++)
            {
                if (chat[j] == 'e')
                    for (int k = j + 1; k < chat.size(); k++)
                    {
                        if (chat[k] == 'l')
                            for (int l = k + 1; l < chat.size(); l++)
                            {
                                if (chat[l] == 'l')
                                    for (int m = l + 1; m < chat.size(); m++)
                                    {
                                        if (chat[m] == 'o'){
                                            cout << "YES";
                                        return 0;
                                        }
                                    }
                            }
                    }
            }
    }
    cout << "NO";
    return 0;
}