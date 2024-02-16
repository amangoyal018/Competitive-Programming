#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const ll mod = 998244353;
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
int factorial(ll n)
{
	if (n == 0)
		return 1;
	return (n * factorial(n - 1)) % mod;
}
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
#define ull unsigned long long
#define MODULO 998244353

ull PowMod(ull n)
{
    ull ret = 1;
    ull a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % MODULO;
        a = a * a % MODULO;
        n >>= 1;
    }
    return ret;
}



void solve(){

    ull k,n;
    cin>>k>>n;

    // k slots
    // n numbers

    n = PowMod(n);
    
    // cout<<n<<"\n";
    ull ans = (factorial(n)/factorial(n-k+1))%998244353;
    ans *= (k*(k-1)/2)%998244353;
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