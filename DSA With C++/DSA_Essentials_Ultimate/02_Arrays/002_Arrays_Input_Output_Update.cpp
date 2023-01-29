#include<iostream>
using namespace std;

int main(){

    int marks[100] = {-1};

    int n;
    cout<<"Enter the no of students ";
    cin>>n;

    /* ASSINGING A VALUE */
    //marks[0] = -1;

    /* INPUT */
    for(int i=1; i<=n; i++){
        cin>> marks[i];
        /* UPDATE */
        marks[i] = marks[i] * 2;
    }

    /* OUTPUT */
    for(int i=0; i<100; i++){
        cout<< marks[i] <<" ,";
    }
    
    cout<<endl;
}

