#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Saturday" << endl;
        break;
    case 2:
        cout << "Sunday" << endl;
        break;
    case 3:
        cout << "Monday" << endl;
        break;
    case 4:
        cout << "Tuesday" << endl;
        break;
    case 5:
        cout << "Wednesday" << endl;
        break;
    case 6:
        cout << "Thrusday" << endl;
        break;
    case 7:
        cout << "Friday" << endl;
        break;
    
    default:
        cout << "Out Of 7" << endl;
        break;
    }


    return 0;
}