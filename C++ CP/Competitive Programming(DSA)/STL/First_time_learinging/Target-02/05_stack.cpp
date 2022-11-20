#include<bits/stdc++.h>
using namespace std;

int main()
{
    //pop
    //top
    //size
    //empty
    //push and emplace

//last in first out-->
    stack<int>st;
    
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);

    cout << st.top() << endl;//prints 1
    st.pop();//deletes the last entered element
    cout << st.top() << endl;//prints 3
    st.pop();
    cout << st.top();

//returns true if stack is empty, or flase
    bool flag = st.empty();

//deleting the entire stack-->
    while (!st.empty())
    {
        st.pop();
    }
//size()-->size of stack
    st.size();

//without initializing stk.pop() will throw an error...so, we need to check it before use pop()...

    stack<int>stk;
    if (!st.empty())
    {
        cout << st.top() << endl;
    }
    

}