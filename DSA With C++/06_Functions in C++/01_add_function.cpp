#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

// int add(int num1,int num2);
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int add(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}

double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 5;
    int b = 4;

    cout << add(a, b) << nl;
    cout << add(a, b, 5) << nl;
    cout << add(2.5, 3.545) << nl;

    return 0;
}
// int add(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }