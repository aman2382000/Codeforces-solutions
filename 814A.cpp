/*GOD     IS    GREAT,
  SO    AM    I*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define op(z) cout<<z<<endl
#define ops(z) cout<<z<<" "
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<" "<<x<<endl
int main()
{
 	string s;
	 cin>>s;
	 ll i,c=0,sm=0;
	 	for(i=0;i<s.length();i++)
	 	{
	 		if(s[i]<96)c++;
	 		else sm++;
		 }
		 if(c>sm)
		 {
		 	for(i=0;i<s.length();i++)
		 	{
		 		if(s[i]>96)
		 		{
		 			s[i]=s[i]-32;
				 }
			 }
		 }
		 else if(c<=sm)
		 {
		 	for(i=0;i<s.length();i++)
		 	{
		 		if(s[i]<97)
		 		{
		 			s[i]=s[i]+32;
				 }
			 }
		 }
		 op(s);
}
