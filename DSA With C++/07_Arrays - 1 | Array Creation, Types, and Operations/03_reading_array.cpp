#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    char vowels[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> vowels[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << vowels[i] << " ";
    // }


//For each loop-->
    for(char &element:vowels)
    {
        cin >> element;
    }
    
    for(char &element:vowels)
    {
        cout << element << " ";
    }
    
    


    return 0;
}