#include<bits/stdc++.h>
using namespace std;

int main()
{
    // if local array-->size max = 10^6 
    // if global array-->size max = 10^7 
    vector<int>v;//-->{}
    //cout << v.size() << endl; //-->prints 0
    v.push_back(2);//{2}
    v.push_back(5);//{2,5}
    //cout << v.size() << endl; //-->prints 2
    v.pop_back();//-->{2}
    //cout << v.size() << endl; //-->prints 1
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);

//clear() Erase all elements at once and {}...
    v.clear();

    vector<int>vec1(4,5);//-->{5,5,5,5}
    vector<int>vec2(4,10);//-->{10,10,10,10}

//copy the entire vec2 into vec3
    vector<int>vec3(vec2.begin(),vec2.end());//-->[)
    vector<int>vec4(vec2);
//emplace_back() is faster than push_back...
    vector<int>hri;
    hri.push_back(1);
    hri.push_back(3);
    hri.push_back(2);
    hri.push_back(5);//-->{1,3,2,5}

    vector<int>doy(hri.begin(),hri.begin()+2);//-->{1,3} because of [ );

//swap();
//begin(),end(),rbegin(),rend()

//2D vector-->
    vector<vector<int>> vv;

    vector<int>h;
    h.push_back(5);
    h.push_back(9);

    vector<int>n;
    n.push_back(3);
    n.push_back(7);

    vector<int>o;
    o.push_back(4);
    o.push_back(6);
    o.push_back(1);

    vv.push_back(h);
    vv.push_back(n);
    vv.push_back(o);
//vctr is vector itself
    for(auto vctr:vv)
    {
        for(auto it:vctr)
            cout << it << " ";
        cout << endl;
    }


//Define 10 x 20
    vector<vector<int>>v2d(10,vector<int>(20,0));
    v2d.push_back(vector<int>(20,0));
    cout << v2d.size() << endl;//-->prints 11

    vector<int>arr[2];//size fized but indices are not fixed
    arr[1].push_back(0);

//10 x 20 x 30
    vector<vector<vector<int>>>v3d(10,vector<vector<int>>(20,vector<int>(30,0)));
}