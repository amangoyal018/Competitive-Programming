#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// // using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

//MARK:- MACROS================================================================
#define ln                      '\n'
#define F                       first
#define S                       second
#define yes                     cout<<"YES"<<ln;
#define no                      cout<<"NO"<<ln;
#define ll                      long long
#define pb                      push_back
#define vi                      vector<int>
#define vll                     vector<ll>
#define all(a)                  a.begin(), a.end()
#define Max(x)                  *max_element(all(x))
#define Min(x)                  *min_element(all(x))
#define Sum(x)                  accumulate(all(x), 0LL)
#define Find(x, y)              binary_search(all(x), y)
#define lb                      lower_bound
#define ub                      upper_bound
#define IOS                     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rall(x)                 (x).rbegin(), (x).rend()

//MARK:- DEBUGGER==============================================================
// #ifndef ONLINE_JUDGE
// #include "rky_cse/debug.h"
// #else
// #define dbg(... )
// #endif

//MARK:- CONSTANTS=============================================================
const ll N = 1e5+7;
const ll mod=1e9+7;
const ll inf = 4e18+7;

//MARK:- PREDEFINED DP SEQUENCES=============================================
vector<ll> fact_dp;

//MARK:- FUNCTIONS DEFINITIONS=================================================
void rky_cse();

//MARK:- BASIC FUNCTIONS=======================================================
bool ispow2(ll x){return (x ? !(x & (x - 1LL)) : 0LL);}
bool dbe( double a, double b){ if (abs(a-b) < 1e-9) return true; return false;}
ll cl(ll a,ll b){if(a%b)return a/b+1LL;return a/b;}
void testcases(bool isTc){int TC=1;if(isTc)cin>>TC;while(TC--){rky_cse();}}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll setKthBit(ll &n,ll k){ return n|=(1LL<<k);}
ll flipKthBit(ll &n,ll k){ return n^=(1LL<<k);}
ll clearKthBit(ll &n,ll k){ return n&=(~(1LL<<k));}
bool isKthBitset(ll n, ll k) {return (n >> k) & 1LL;}
ll countSetBits(ll n){int ct=0;while (n){n=n&(n-1LL);ct++;}return ct;}
ll power( ll x, ll y, ll p){ ll res = 1; x = x % p; while (y > 0) { if (y & 1) res = (res * x) % p; y = y >> 1; x = (x * x) % p; } return res; }
ll modInverse(ll n,ll p){ return power(n, p - 2, p); }
ll factorial( ll num, ll mod){ if( ::fact_dp.size() == 0){ ::fact_dp.push_back( 1); } for( int i = ::fact_dp.size(); i <= num; i++){ ::fact_dp.push_back( ( ::fact_dp[ i - 1] * ( i % mod)) % mod); } return ::fact_dp[ num]; }
ll combinate(ll n, ll r, ll p){ if (n < r)  return 0LL; if (r == 0LL) return 1LL;return (factorial(n,p) * modInverse(factorial(r,p), p) % p *modInverse(factorial(n-r,p), p) % p) % p; }
ll permutate(ll n, ll r, ll p){ if (r == 0) return 1LL; return (factorial(n,p) * modInverse( factorial(n - r, p), p)) % p; }

//MARK:- SNIPPETS =============================================================
//fl-for loop||flj,flk for loop j,k||flr rev for loop lc-lower case,uc-upper case 
//tc-test case || pf-prime function O(sqrt(n) || bns-binary search
//sv-sieve || sqb-square root using binary search || sbc sort by condition
//bnp binpow || bnpm binpow mod || exgcd gcdExtended ||kmp KMP algo for string prefix
// rbnk rabin korp string matching || cmp comparator|| mpd max prime divisor using seive || sgtS segment tree for sum|| sgtMx segment tree for Max
//||nck nCk in O(n^2) dp ||cntd counting divisor logn||pmf prime factors

//MARK:- Supplimentary Functions===============================================
void dfs(vll adj[],ll src,vll &sz,vll &vis,ll mid,ll &k){
    vis[src]=1;
    for(auto it:adj[src]){
        if(!vis[it]){
                     
            dfs(adj,it,sz,vis,mid,k);
             sz[src]+=sz[it];
        }
    }
    if(sz[src]>=mid){
k--;
sz[src]=0;
    }

}


//MARK:- TESTCASES=============================================================
int32_t main() {IOS 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
bool isTc=false;                 isTc=true;
testcases(isTc);return 0;}

//MARK:- Solution==============================================================
void rky_cse(){
//Checklist
// Have you read the EXPLANATION part of the question
// Haven't you PRESUMED anything
// Have you solved this question on PAPER
// Have your solution worked on atleast 3 testcases
// Now you can implement , DO FAST>>> DON'T worry about the  ACCURACY

ll n,k;cin>>n>>k;
vector<vector<ll>> adj(n+1);
for(int i=0;i<n-1;i++){
    ll x,y;cin>>x>>y;
    adj[x].pb(y);
    adj[y].pb(x);
 
}
for(auto x:adj){
    for(auto y:x){
        cout << y << " ";
    }
}



}
// Have you checked it for the edge cases 
// Now you can submit