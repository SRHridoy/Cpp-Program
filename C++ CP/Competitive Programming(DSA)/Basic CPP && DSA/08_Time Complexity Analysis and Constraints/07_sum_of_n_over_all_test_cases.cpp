#include<bits/stdc++.h>
//Given T test cases and an array of size N. Print the sum of array in each test case.
//Constraints:
//1 <= T <= 100000
//1 <= N <= 100000
//1 <= a[i] <= 1000
//sum of N over all  Test cases is < 10^7-->eta bolle O(N), na bolle -->O(T*N)-->O(N^2)
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum+=x;
            cnt++;
        }
        cout << sum <<endl;
    }
    

    return 0;
}
