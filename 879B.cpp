/*GOD     IS    GREAT,
  SO    AM    I*/
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
#define ll long long int
#define ford(i,a,n) for(long long int i=a;i<n;++i)
#define fore(i,a,n) for(long long int i=a;i<=n;i++)
#define foru(i,a,n) for(long long int i=a;i>=n;i--)
#define test ll t;cin>>t;while(t--)
#define op(z) cout<<z<<endl
#define ops(z) cout<<z<<" "
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<" "<<x<<endl
#define pp pair<ll,ll>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define maxe 1000000
#define MOD 1000000007
ll prime[maxe] = {0};
// TO COUNT THE DIGIT IN A NUMBER => floor(log(n)/log10+1)
void file()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll sumofdigits(ll n) {
	ll sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
void sieve()
{
	prime[0] = 0;
	prime[1] = 0;
	prime[2] = 1;
	ll i, j, k;
	for (i = 3; i <= maxe; i += 2)
	{
		prime[i] = 1;
	}
	for (i = 3; i <= maxe; i++)
	{
		if (prime[i])
		{
			for (j = i * i; j <= maxe; j += 2 * i)prime[j] = 0;
		}
	}
}
bool cmp(pp &a, pp &b)
{
	if (a.first != b.first)
	{
		return b.first > a.first;
	}
	else
	{
		return b.second > a.second;
	}
}
void solve()
{
	ll n, k;
	cin >> n >> k;
	if (k >= n)
	{
		op(n);
		return;
	}
	ll x, p, j = 0;
	cin >> x;
	ford(i, 1, n)
	{
		cin >> p;
		if (j == k)break;
		if (x > p)j++;
		else
			j = 1, x = p;
	}
	op(x);
}
int main()
{
	fastIO
	//sieve();
	//file();
	//test
	{
		solve();
	}
	return 0;
}