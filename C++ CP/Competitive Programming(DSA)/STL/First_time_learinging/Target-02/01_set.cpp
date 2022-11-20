#include<bits/stdc++.h>
using namespace std;

int main() 
{
 //given n elements ,tell me the number of unique elements
    //arr[] = {2,5,2,1,5}// 3 unique elements -->{1,2,5}

    set<int>st;//ascending order and unique elements...Can't use st[index]...
    int n;
    cin >> n;
//taking input-->
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);//logN-->N = size of set...
    }
//printing-->
    for(auto it:st)
        cout << it << " ";//-->prints : 1 2 5
    cout << endl;

//erase functionality-->
    //st.erase(st.begin());//-->st.erase(iterator)//st -->{2,5};

    st.erase(5);//st.erase(key)//-->delete the 5

//Initialization-->
    set<int> st1 = {1,5,7,8};
    auto it = st1.find(7);// log n //--> it will be iterator to 7

    auto its = st1.find(9);//its = st.end();

//emplace is faster than insert-->
    st1.emplace(6);//-->st.insert(6);

//size()

//erase all-->
    st1.erase(st1.begin(),st1.end());
    st1.clear();
//count()-->finds how many times 2 occures
    st.count(2);

//Unordered set-->
    unordered_set<int>us;

    us.insert(2);
    us.insert(3);
    us.insert(1);

//average time complexity is O(1)
//but the worst case is linear in nature, O(set size)
//tle-->switch to set...

}