#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, string> m;
    m[1] = "Allah";
    //O(log(n))
    m[5] = "Greatest";
    m[3] = "Is";
    m[7] = "King";
    m.insert({4, "The"});


// FIND-->
    auto it = m.find(7);//O(log(n))
    // if(it == m.end())
    //     cout << "NO VALUE";
    // else   
    //     cout << (*it).first << " " << (*it).second << endl;

// ERASE-->
    if(it!=m.end())
        m.erase(it);
    printMap(m);
    m.clear();
    printMap(m);


    // map<int,string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     // cout << (*it).first << " " << (*it).second << endl;

    //     cout << it->first << " " << it->second << endl;
    // }

    // SHORTCUT-->
    //  for(auto &value : m)
    //  {
    //      cout << value.first << " " << value.second << endl;
    //  }

    return 0;
}