#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // pair<int,string> p;
    // p = make_pair(2, "abc");
    // p{2, "abcd"};
    // pair<int,string> &p1 = p;
    // p1.first = 3;
    // cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int,int> pArray[3];
    pArray[0] = {1,2};
    pArray[1] = {2,3};
    pArray[2] = {3,4};

    swap(pArray[0], pArray[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << pArray[i].first << " " << pArray[i].second << endl;
    }
    


    return 0;
}