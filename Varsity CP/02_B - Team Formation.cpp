#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        int E, N;
        cin >> E >> N;
        if (E == 0 || N == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        if ((N == 1 && E < 2) || (E == 1 && N < 2))
        {
            cout << 0 << endl;
            cout << "Pass-05" << endl;
            return 0;
        }
        while ((E >= 1 && N>=1))
        {
            if (E > N)
            {
                E -= 2;
                N -= 1;
                cnt++;
                cout << "Pass-01" << endl;
            }
            else if (N > E)
            {
                N -= 2;
                E -= 1;
                cnt++;
                cout << "Pass-02" << endl;
            }
            else if ((N >= 1 && E >= 2))
            {
                N--;
                E -= 2;
                cnt++;
                cout << "Pass-3" << endl;
            }
            else if ((N >= 2 && E >= 1))
            {
                E--;
                N -= 2;
                cnt++;
                cout << "Pass-04" << endl;
            }
            else if(E==1&& N==1)
                break;
        }
        cout << cnt << endl;
    }

    return 0;
}