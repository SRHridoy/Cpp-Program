#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    scanf("%d %d", &n, &m);

    int flag = 0;
    int prime_count = 0;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }

    for (int i = n + 1; i < m; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j != 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            prime_count++;
        }
    }
    if (prime_count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}