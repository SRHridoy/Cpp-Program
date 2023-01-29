#include<iostream>
using namespace std;
/* ARRAYS ARE PASSED BY REFERENCE */
void printArray(int *arr, int n){//or int arr[]
    cout <<"In Function "<<sizeof(arr) <<endl;
    /* UPDATE */
    arr[0] = 100;

    for(int i=0; i<n; i++){
        cout << arr[i] <<endl;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr)/sizeof(int);

    cout <<"In Main "<<sizeof(arr) <<endl;

    printArray(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<endl;
    }
    

    return 0;
}