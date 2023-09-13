#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const int mod = 1e9 + 1;
#define vi vector < int >
#define vll vector<long long int>
#define f(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
ll gcd(ll x, ll y) {return y == 0 ? x : gcd(y, x % y);}

bool isValid(int x, int y, int n, int m){
	if(x < 0 or x >= n)return false;
	if(y < 0 or y >= m)return false;
	return true;
}
int factorial(unsigned int n)
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

//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    int t;
    cin>>t;
    // t=1;
    while(t--){

        ll n,x,y;
        cin>>n>>x>>y;

        ll ans = 0;
        ll max1 = n;
        ll min1 = 1;


        ll lcm = x*y/gcd(x,y);
        // cout<<lcm;

        ll b = n/x;
        ll a = n/y;
        ll c = n/lcm;
        a-=c;
        b-=c;
        // cout<<b;

        ll sum1 = a*(a+1)/2;

        ll sum2 = (b + 2*b*n - b*b)/2;

        cout<<(sum2-sum1)<<"\n";




        
        
        
    }
    
    
    
	
	
    
    

    
    
    



}