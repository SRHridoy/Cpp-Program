#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    transform(name.begin(), name.end(), name.begin(), ::tolower);
    sort(name.begin(), name.end());
    // cout << name;

    int count = 0;
    for (int i = 0; i < size(name); i++)
    {
        if (name[i] != name[i + 1])
        {
            count++;
        }
    }
    // cout << count;
    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}