#include<bits/stdc++.h>
using namespace std;

int main(){
    string word,s;
    cin >> word;

    transform(word.begin(), word.end(),word.begin(), :: tolower);

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y')
        {
            // word.erase(word.begin() + i);
            continue;
        }
        
        else
        {
            s+='.';
            s+=word[i];
        }
        // cout << '.' << word[i];
        
    }
    
    cout << s;
    
    return 0;
}