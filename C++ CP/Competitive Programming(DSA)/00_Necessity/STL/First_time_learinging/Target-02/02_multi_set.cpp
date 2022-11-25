#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>mulS;//-->log n in size
    mulS.insert(1);
    mulS.insert(6);
    mulS.insert(3);
    mulS.insert(2);
    mulS.insert(2);//-->{1,1,2,2,3}

    mulS.erase(2);//--> all the instances will be erased
    auto it = mulS.find(2);//-->returns an iterator
    mulS.clear();//deleted the entire set
    mulS.erase(mulS.begin(),mulS.end());//deleted the entire set

    mulS.erase(mulS.find(2));
}