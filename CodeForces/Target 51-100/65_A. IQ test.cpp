#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int x, ans_odd, ans_even;
    int odd_c = 0, even_c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            even_c++;
            ans_odd = i + 1;
        }
        else
        {
            odd_c++;
            ans_even = i + 1;
        }
    }

    if (odd_c >= 2)
        cout << ans_odd;
    else
        cout << ans_even;
}