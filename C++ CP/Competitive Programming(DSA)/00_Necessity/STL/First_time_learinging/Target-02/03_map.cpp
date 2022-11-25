#include<bits/stdc++.h>
using namespace std;

int main()
{
    //key value
    //tara --> 50;
    //hri-->40;
    //fiza -->30;

//log n is the tc of map...
    map<string,int>mp;
    mp["tara"] = 50;
    mp["hri"] = 40;
    mp["fiza"] = 33;
    mp["tara"] = 33;//-->tara will be 33 ..overwrite this...
    //-->sorted accordingly keys..and store only unique keys...
    mp.emplace("tara",45);


    // mp.erase("tara");//-->mp.erase(key)
    // mp.clear();//-->entire mp erased
    // mp.erase(mp.begin());//-->mp.erase(iterator)

//find-->
    auto it = mp.find("tara");//-->points to where tara lies...    

    if(mp.empty())
        cout << "Yes it is empty";

    mp.count("tara");//always returns 1 as it store only 1 

//pair-->
    pair<int,int>pr;
    pr.first = 1;
    pr.second = 10;


//Printing map-->

    for(auto it:mp)
    {
        cout << it.first << " " << it.second << endl;
    }

//does not store in any order...
//unordered_map-->
//pair of it impossible
//all the stuff is repeated
//O(1) in almost all cases
//O(n) in the worst case,where n is the size of the container size


//multimap-->

    multimap<string,int>mpp;
    mpp.emplace("hri",2);
    mpp.emplace("doy",6);


}