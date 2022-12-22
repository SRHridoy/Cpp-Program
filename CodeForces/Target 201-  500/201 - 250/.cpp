#include <bits/stdc++.h>

using namespace std ;

const int MAX = 1e5 + 10 ;

int a[MAX] , b[MAX] ;
int n ;

int main()
{
	ios_base::sync_with_stdio(0) ;
	cin.tie(0) ;
	int t ;
	cin>>t ;
	while(t--)
	{
		cin>>n ;
		for(int i = 0 ; i < n ; ++i)
			cin>>a[i] ;
		for(int i = 0 ; i < n ; ++i)
			cin>>b[i] ;
		int x = *min_element(a , a + n) ;
		int y = *min_element(b , b + n) ;
		long long ans = 0 ;
		for(int i = 0 ; i < n ; ++i)
		{
			ans += min(a[i] - x , b[i] - y) ;
			ans += max(a[i] - x , b[i] - y) - min(a[i] - x , b[i] - y) ;
		}
		cout<<ans<<"\n" ;
	}
	return 0 ;
}		