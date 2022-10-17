// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     char str[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str;
//         if (strlen(str) > 10)
//         {
//             cout << str[0] << (strlen(str) - 2) << str[strlen(str) - 1] << endl;
//         }
//         else
//         {
//             cout << str << endl;
//         }
        
//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string word;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word.length() > 10) 
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        cout << word << endl;
        
    }
    
    return 0;
}
