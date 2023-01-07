#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
    /* vector<int> v = {2, 3, 5, 6, 7};
    vector<int>::iterator it = v.begin();
    //cout << (*(it+1)) << endl;
    for(it = v.begin(); it != v.end(); ++it){//it + 1 next location e niye jai ....it++ next iterator e ... map ar set continus na tai it++ always use korte hobe
        cout << (*it) << endl;
    } */

    vector<pair<int,int> > v_p = {{1,2}, {2,3}, {3,4}};
    vector<pair<int,int> > :: iterator it;
    // for(it = v_p.begin(); it != v_p.end(); it++){
    //     cout <<(*it).first << " " << (*it).second << endl;
    // }
/* ----------(*it).first <==> (it->first)---------- */
    for(it = v_p.begin(); it != v_p.end(); it++){
        cout <<it->first << " " << it->second << endl;
    }
}