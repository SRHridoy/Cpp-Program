#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}

int main(){
    int N; cin >> N;
    vector<int>v[N];//Created N vectors
    /* ----------TAKING INPUT---------- */

    for(int i = 0; i< N; i++){
        int n; cin >> n;
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }

    /* ----------PRINTING---------- */
    for(int i = 0; i < N; i++){
        printVec(v[i]);
    }
}