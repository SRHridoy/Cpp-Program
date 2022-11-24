#include<bits/stdc++.h>
using namespace std;
int main()
{
/*Stress testing-->
    understand how to generate test cases
*/
//The following code generate same testcases all time to escape this we can use-->
    srand(time(NULL));
// rand() % 10 generates-->{0, 1, 2, 3, 4, ... 8, 9}
    int t = rand() % 2 + 1;
    cout << t << endl;
    while (t--)
    {
        int n = rand() % 5 + 1;
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << rand() % 6 + 1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}