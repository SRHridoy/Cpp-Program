#include<bits/stdc++.h>
#define fo(i, n)          for(int i = 0; i <n; i++)
using namespace std;

//my solution -->
int findSecondLargestNumber(int arr[], int n)
{
    if(n <= 1) return -1;
    sort(arr,arr+n);
    return(arr[n-2]);
}

//This solution can be either be a brute or someone's accpted solution->
int writingCorrectSolution(int arr[], int n)
{
    if(n<=1) return -1;
    int firstMax = INT_MIN;
    fo(i,n)
        firstMax = max(firstMax,arr[i]);
    int secondMax = INT_MIN;
    fo(i,n)
        if(firstMax!=arr[i])
            secondMax = max(secondMax,arr[i]);
    return secondMax;
}

int main()
{
/*    pr:01-->
        write a proogram to find the second largest number in the array-->
            CONSTRAINS:
                    1<= T <=10
                    1 <= N <= 100000
                    1 <= a[i] <= 1000000
            if there doesn't exists a second largest number, print -1...
*/

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     int a[n];
    //     fo(i , n) cin >> a[i];
    //     cout << findSecondLargestNumber(a,n) << endl;
    // }

//Generating test cases-->
    srand(time(NULL));

    int cnt = 1;
    while (cnt<=1000)
    {
        int n = rand() % 5 +1;
        int arr[n];
        fo(i,n)
            arr[i] = rand() % 7 + 1;
        int correctAns =writingCorrectSolution(arr,n);
        int myAns =findSecondLargestNumber(arr,n);

        if(correctAns!=myAns)
        {
            cout << n << endl;
            fo(i,n)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

    }
//if there are multiple lines of outputs then use struct...   
//To debug recursion we need to use cnt...
//to debug anything we can use cout everytime...   
    
    return 0;
}