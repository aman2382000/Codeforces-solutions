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
#define maxe 1000000
#define MOD 1000000007
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ford(i, 1, n - 1)
    {
        if (s[i] == 'x')
        {
            if (s[i - 1] == 'x')
            {
                if (s[i + 1] == 'x')ans++;
            }
        }
    }

    op(ans);
}
int main()
{
    fastIO
    file();
    //test
    {
        solve();
    }
    return 0;
}