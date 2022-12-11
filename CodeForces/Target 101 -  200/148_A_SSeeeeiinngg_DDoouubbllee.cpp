//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define fo(i, n)          for(int i = 0; i <n; i++)
using namespace std;

string getPalindrome(string str)
{

    // Store counts of characters
    unordered_map<char, int> hmap;
    for (int i = 0; i < str.length(); i++)
        hmap[str[i]]++;

    /* find the number of odd elements.
       Takes O(n) */
    int oddCount = 0;
    char oddChar;
    for (auto x : hmap) {
        if (x.second % 2 != 0) {
            oddCount++;
            oddChar = x.first;
        }
    }

    /* odd_cnt = 1 only if the length of
       str is odd */
    if (oddCount > 1
        || oddCount == 1 && str.length() % 2 == 0)
        return "NO PALINDROME";

    /* Generate first half of palindrome */
    string firstHalf = "", secondHalf = "";
    for (auto x : hmap) {

        // Build a string of floor(count/2)
        // occurrences of current character
        string s(x.second / 2, x.first);

        // Attach the built string to end of
        // and begin of second half
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }

    // Insert odd character if there
    // is any
    return (oddCount == 1)
                ? (firstHalf + oddChar + secondHalf)
                : (firstHalf + secondHalf);
}

void solve()
{
    string s; cin >> s;
    string s1;
    fo(i,s.size())
    {
        s1.pb(s[i]);
        s1.pb(s[i]);
    }
    cout << s1 << endl;
    cout << getPalindrome(s1) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    //int cs = 1;
    cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}