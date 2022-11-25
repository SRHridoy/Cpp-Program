#include<bits/stdc++.h>
using namespace std;

int main()
{
//Priority_queue-->
    //push
    //size
    //top pop empty

    priority_queue<int>pq;//-->in descending order...(max in the top)

    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    cout << pq.top(); //print 6
    pq.pop();
    cout << pq.top(); //print 5

    // priority_queue<pair<int,int>>pqp;
    // pqp.push(1,5);
    // pqp.push(1,6);
    // pqp.push(1,7);-->error ace

//min in top technique-->
    priority_queue<int>minpq;

    minpq.push(-1);
    minpq.push(-5);
    minpq.push(-2);
    minpq.push(-6);

    cout << -1 * minpq.top() << endl;//prints 1

//or-->
    priority_queue<int,vector<int>,greater<int>> minpqA;
    
    minpqA.push(1);
    minpqA.push(5);
    minpqA.push(2);
    minpqA.push(6);

    cout << minpqA.top() << endl; //prints 1


}