/*
                                        ***বিসমিল্লাহির রাহমানির রাহীম***
                                            "وَقُل رَّبِّ زِدْنِي عِلْمًا"
                                        Md.Shonaur Rahman Hridoy
                                Department of Computer Scinence & Engineering
                                Hajee Mohammad Danesh Science & Technology,Dinajpur...
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string word,input;
    cin >> word >> input;
    

    string revW;
    revW =  (string(word.rbegin(), word.rend()));
    // cout << word;
    // cout << revW;

    int flag = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (input[i] == revW[i])
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
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}