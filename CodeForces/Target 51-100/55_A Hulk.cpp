#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    char hulk[1200] = "I hate";
    char love[] = "I love";
    char hate[] = "I hate";
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            strcat(hulk, " that ");
            strcat(hulk, love);
        }
        else
        {
            strcat(hulk, " that ");
            strcat(hulk, hate);
        }
    }
    strcat(hulk, " it");
    cout << hulk;

    return 0;
}