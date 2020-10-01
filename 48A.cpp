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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[0]=='p'&&s2[0]=='r'&&s3[0]=='r'||s1[0]=='s'&&s2[0]=='p'&&s3[0]=='p'||s1[0]=='r'&&s2[0]=='s'&&s3[0]=='s')
    {
    	op("F");
	}
	else if(s2[0]=='p'&&s1[0]=='r'&&s3[0]=='r'||s2[0]=='s'&&s1[0]=='p'&&s3[0]=='p'||s2[0]=='r'&&s1[0]=='s'&&s3[0]=='s')
    {
    	op("M");
	}
	else if(s3[0]=='p'&&s2[0]=='r'&&s1[0]=='r'||s3[0]=='s'&&s2[0]=='p'&&s1[0]=='p'||s3[0]=='r'&&s2[0]=='s'&&s1[0]=='s')
    {
    	op("S");
	}
	else op("?");

}
