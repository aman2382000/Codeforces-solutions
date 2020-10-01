/*GOD     IS    GREAT,
  SO    AM    I*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ford(i,a,n) for(long long int i=a;i<n;++i)
#define fore(i,a,n) for(long long int i=a;i<=n;i++)
#define test ll t;cin>>t;while(t--)
#define op(z) cout<<z<<endl
#define ops(z) cout<<z<<" "
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<" "<<x<<endl
#define pp pair<ll,ll>
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}
void solve()
{
    ll f=0,g;
    string s;
    cin>>s;
    ford(i,0,s.length())
    {
        if(s[i]=='h')
            {
                f=1;
                g=i;
                break;
            }
    }
    if(f==0){op("NO");return;}
    f=0;
    ford(i,g,s.length())
    {
        if(s[i]=='e')
            {
                f=1;
                g=i;
                break;
            }
    }
    if(f==0){op("NO");return;}
    f=0;
    ll c=0;
    ford(i,g,s.length())
    {
        if(s[i]=='l')
            {
                f=1;
                g=i;
                s[i]='0';
                c++;
                break;
            }
    }
    if(f==0){op("NO");return;}
    f=0;
    ford(i,g,s.length())
    {
        if(s[i]=='l')
            {
                f=1;
                g=i;
                s[i]='0';
                c++;
                break;
            }
    }
    if(f==0){op("NO");return;}
    f=0;
    ford(i,g,s.length())
    {
        if(s[i]=='o')
            {
                f=1;
                g=i;
                break;
            }
    }
    if(f==1&&c>=2)op("YES");
    if(f==0)op("NO");
}
int main()
{
    fastIO;
    file();
    //test 
    {
        solve();
    }
    return 0;
}