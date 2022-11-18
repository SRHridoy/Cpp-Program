#include<bits/stdc++.h>
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
using namespace std;

void solve()
{
     int n,m;
	   cin>>n>>m;
	   int arr[n];
	   set<int>st;
	   int maxi=INT_MIN;
	   for(int i=0; i<n; i++){
	       cin>>arr[i];
	       st.insert(arr[i]);
	   }
	   for(int i=0; i<n; i++){
	       if(maxi<arr[i])
	       maxi=arr[i];
	   }
	   int num=1;
	   int sum=0;
	   while(num){
	       if(st.find(num)!=st.end()){
	           num++;
	           continue;
	       }
	       sum+=num;
	       if(sum>m){
	           cout<<"NO"<<endl;
	           break;
	       }
	       st.insert(num);
	       if(sum==m){
	           int temp=0;
	           for(int k=1; k<=maxi; k++){
	               if(st.find(k)!=st.end())
	               continue;
	               temp=1;
	               break;
	           }
	           if(!temp) cout<<"YES"<<endl;
	           else cout<<"NO"<<endl;
	           break;
	       }
	       num++;
	   }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // t = 1;
    //int cs = 1;
    cin >> t;
    while (t--)
    {
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}