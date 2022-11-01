#include<bits/stdc++.h>
using namespace std;

//Pair
void explainPair() {
    pair<int, double> id = {1, 00.7};
    cout << id.first << " " << id.second << endl;

    //Nested pair-->
    pair<int, pair<int , int >> nii = {1,{5, 6}};
    cout << nii.first << " " << nii.second.first << " " << nii.second.second<< endl;

    //pair as array-->
    pair <int, int> arr[] = {{1,2}, {3,4}, {6,7}};
    cout << arr[1].second<< endl;
    cout << arr[2].first<< endl;

}

int main(){
    explainPair();
    return 0;
}