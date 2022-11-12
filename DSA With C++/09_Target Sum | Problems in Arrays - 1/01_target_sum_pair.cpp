//Find the number of pairs in the Arrayy whose sum is equal to the given value x...

#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];

    int targetSum;
    cin >> targetSum;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = array[i]+array[j];
            if (targetSum == sum)
                cnt++;
        }
        
    }
    cout << cnt;

    return 0;
}