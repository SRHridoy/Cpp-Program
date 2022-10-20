#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin >> word;

    int countS = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            countS++;
        }
        
    }

    int countC = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            countC++;
        }
        
    }

    if (countS > countC)
    {
        transform(word.begin(),word.end(),word.begin(),:: tolower);
        cout << word;
    }
    else if (countC > countS)
    {
        transform(word.begin(),word.end(),word.begin(),:: toupper);
        cout << word;
    }
    else
    {
        transform(word.begin(),word.end(),word.begin(),:: tolower);
        cout << word;
    }
    
    

    
    return 0;
}