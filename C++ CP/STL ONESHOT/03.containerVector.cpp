#include<bits/stdc++.h>
using namespace std;
void printVec(auto v){
    for (auto it = v.begin(); v != v.end();it++ )
    {
        cout << *(it)  << " " << endl;
    }
    
}
void explainVector() {
    //Initialization-->
    vector<int> v;
    v.push_back(1);
    v.emplace_back(4);

    vector<pair<int,int>> vec;

    vec.emplace_back(8,9);
    vec.push_back({4,6});
    
    vector<int>v5(5,100);

    vector<int>v6(5);

    vector<int>v1(5,20);
    vector<int>v2(v1);
    //Iteration-->
    vector<int>::iterator its = v.begin();

    its++;
    cout <<*(its) << " ";

    its += 2;
    cout << *(its) << " ";


    vector<int>::iterator it = v.end();

    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin();

    //Printing-->
    cout << v[0] << " " << v.at(0);
    cout << v.back()<<" ";

    // for (vector<int>::iterator it =v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    
    //SHORTCUT-->
    for (auto it = v.begin(); it != v.end() ; it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)     
    {       
        cout << it << " ";
    }

    //{10, 20, 12, 23}
    vector<int>v33 = {10, 20, 12, 23};
    v33.erase(v33.begin()+1);

    for (auto pr = v33.begin(); pr != v33.end(); pr++)
    {
        cout << endl << *(pr) << " ";
    }
    vector<int>v34 = {10, 20, 12, 23, 35};
    v34.erase(v34.begin() + 2,v34.begin()+4);//{10, 20, 35} [start,end)
    for (auto pri = v34.begin(); pri != v34.end(); pri++)
    {
        cout << endl << *(pri) << " ";
    }


    //Insert Function-->
    cout <<"************Insertion************";
    vector<int> vInsert(2,100);
    vInsert.insert(vInsert.begin(), 300);
    vInsert.insert(vInsert.begin() + 1, 2, 10);

    for (auto prii = vInsert.begin(); prii != vInsert.end(); prii++)
    {
        cout << endl << *(prii) << " ";
    }

    //Copy-->
    cout << "COPY-->";
    vector<int> copy(2, 50);
    vInsert.insert(vInsert.begin(),copy.begin(),copy.end());
    // printVec(copy);

    //Size in a vector-->
    cout << v34.size();

    //Last element-->
    v34.pop_back();


    //Swapping two vector-->
    v33.swap(v34);

    //Erage everything-->
    v.clear();

    cout << v.empty();
}

int main(){
    explainVector();
    return 0;
}