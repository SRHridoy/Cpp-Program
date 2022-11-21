#include<bits/stdc++.h>
using namespace std;

int main()
{
//bitset is mostly used in segment tree  
//bitset-->1 bit
    //alll
    //any
    //count
    //flip
    //none
    //set
    //reset
    //size
    //test
//contains only one or zero...
    bitset<5>bt;
    cin>>bt;//11111
    cout << bt << endl;

//all()--> returns a true if all the bits are set or a flase...
    cout << bt.all() << endl;

//any()-->if any of one bit is set return true
    cout << bt.any() << endl;

//count()-->counts the number of set bits-->
    cout << bt.count() << endl;

//flip(index)-->compliment-->
    cout << bt.flip(2) << endl;

//flip()-->flip all
    cout << bt.flip() << endl;
    
//none()-->if there is none set bit return true
    cout << bt.none() << endl;

//set()-->set bt all set
    cout << bt.set() << endl;

//set(index)-->set bt set bit in particular index
    cout << bt.set(2) << endl;

//set(index,any_bit)-->
    cout << bt.set(2,0) << endl;

//reset()-->turn all indices to 0
    cout << bt.reset() << endl;

//reset(index)-->turn target index to 0
    cout << bt.reset(2) << endl;

//size()-->size of bt
    cout << bt.size() << endl;

//test(index)--> check if the bit is set or not at target index...
    cout << bt.test(1) << endl;


}