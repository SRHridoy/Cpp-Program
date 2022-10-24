#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin >> word;

    int s = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            s++;
        }
        
    }
    if (s==word.size())
    {
        for (int t = 0; t < word.size(); t++)
        {
            word[t] = tolower(word[t]);
        }
        cout << word;
        return 0;
    }
    
    

    int same = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (((word[0] >= 'A' && word[0] <= 'Z' ) && (word[i+1] >= 'a' && word[i+1] <= 'z')))
        {
            same = 1;
        }
        if((word[0] >='a' && word[0] <= 'z') &&( word[i+1] >= 'A' && word[i+1] <= 'Z'))
        {
            same = 0;
        }
        
    }
    int c = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if ((word[0] >= 'a' && word[0] <='z') &&( word[i+1]>='a' && word[i+1] <='z'))
        {
            c++;
        }
        
    }
    if (c!=0)
    {
        cout << word;
        return 0;
    }
    
    
    if (same == 1)
    {
        cout << word;
        return 0;
    }

    if (same == 0)
    {
        for (int i = 0; i < word.size(); i++)
        {
            word[0] = toupper(word[0]);
            word[i+1] = tolower(word[i+1]);
        }
        cout << word;
        return 0;
    }
    
    
    
    
    
    return 0;
}