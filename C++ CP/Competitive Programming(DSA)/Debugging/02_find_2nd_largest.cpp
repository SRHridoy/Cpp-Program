#include<bits/stdc++.h>
#define fo(i, n)          for(int i = 0; i <n; i++)
using namespace std;

int findSecondLargestNumber(int arr[], int n)
{
    if(n <= 1) return -1;
    sort(arr,arr+n);
    return(arr[n-2]);
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        fo(i , n) cin >> a[i];
        cout << findSecondLargestNumber(a,n) << endl;
    }
    
    return 0;
}