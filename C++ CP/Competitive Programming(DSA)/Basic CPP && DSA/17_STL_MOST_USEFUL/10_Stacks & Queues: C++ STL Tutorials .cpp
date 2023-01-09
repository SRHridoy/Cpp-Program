#include<bits/stdc++.h>
#define int   long long
using namespace std;

signed main(){
/* ----------STACK---------- */
    /* stack----> LIFO(Last in first Out)
        we can access size , top element
        1.push
        2.pop
        3.top
 */
/*     stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    } */


/* ----------QUEUE---------- */
    /* queue-----> FIFO(First in First out)
        1.push
        2.pop
        3.front
 */

    queue<string> q;
    q.push("asdf");
    q.push("as");
    q.push("df");
    q.push("a");
    q.push("f");
    q.push("ghi");
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
        //cout << q.front() << endl;
    }

}