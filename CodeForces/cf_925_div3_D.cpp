#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
// const int mod = 1e9 + 7;
#define vi vector < int >
#define vll vector<long long int>
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}

bool isValid(int x, int y, int n, int m){
	if(x < 0 or x >= n)return false;
	if(y < 0 or y >= m)return false;
	return true;
}
// int factorial(unsigned int n)
// {
// 	if (n == 0)
// 		return 1;
// 	return (n * factorial(n - 1)) % mod;
// }
int diffelements(string s){
    int len=s.length();
    unordered_set<char> set1;
    for(int i=0;i<len;i++){
        set1.insert(s[i]);
    }
    return set1.size();
}
bool sortbysec(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool prime(int n)
{
if (n <= 1)
return false;
for (int i = 2; i <= sqrt(n); i++){

        if (n % i == 0)
        return false;
}
    return true;
}



void solve(){

    ll n,x,y;
    cin>>n>>x>>y;

    vll v(n);

    f(i,0,n){
        cin>>v[i];
    }

    map<pair<ll,ll>,ll> m;

    ll rem1 = v[0]%x;
    ll rem2 = v[0]%y;

    pair<ll,ll> p = {rem1,rem2};
    m[p]++;

    ll ans = 0;

    f(i,1,n){
        ll currRemX = v[i] % x;
        
        ll needX = x - currRemX;
        if(needX == x){
            needX = 0;
        }
        ll currRemY = v[i] % y;
        pair<ll,ll> tp ={needX,currRemY};
        ans += m[tp];

        p = {currRemX,currRemY};
        m[p]++;

    }
    cout<<ans<<"\n";







}

//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    ll t;
    cin>>t;
    // t=1;
    while(t--){

        solve();
    }
    
}