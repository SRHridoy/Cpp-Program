#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int nC;
        cin >> nC;
        int wC[nC];
        int sumWc = 0, cnt1 = 0;
        for (int i = 0; i < nC; i++)
        {
            cin >> wC[i];
            sumWc += wC[i];
            if (wC[i] == 1)
                cnt1++;
        }
        sort(wC, wC + nC);
        for (int i = 0; i < nC; i++)
        {
            if (sumWc % 2 != 0)
            {
                cout << "NO" << endl;
                break;
            }
            else if ((sumWc % 2 == 0 && cnt1 >= 2))
            {
                cout << "YES" << endl;
                break;
            }
            else if (nC % 2 == 0 && sumWc % 2 == 0 && cnt1 == 0)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }

    return 0;
}