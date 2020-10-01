/*GOD     IS    GREAT,
  SO    AM    I*/
 /* HI! STALKER*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define op(z) cout<<z<<endl
#define ops(z) cout<<z<<" "
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<" "<<x<<endl
int main()
{
	fastIO
    ll n,k,i,j,ans=0,candy=0;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		
		if(a[i]>8)
		{
			candy+=8;
			a[i]-=8;
			a[i+1]+=a[i];	
		}
		else candy+=a[i];
		if(candy>=k)
		{
			op(i+1);
			return 0;		
		}
	}
	op("-1");
}
