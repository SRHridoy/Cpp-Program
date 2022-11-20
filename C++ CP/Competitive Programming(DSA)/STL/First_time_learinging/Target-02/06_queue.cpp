#include<bits/stdc++.h>
using namespace std;

int main()
{
//queue-->fifo operation
    //push
    //front
    //pop
    //size
    //empty

    queue<int>q;
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6);

    cout << q.front() << endl;//prints 1
    q.pop();
    cout << q.front() << endl;//prints 5

//deleting entire-->linear time
    while (!q.empty())
    {
        q.pop();
    }

    
}