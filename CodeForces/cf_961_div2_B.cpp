#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
#define ll long long int 
const int mod = 1e9 + 7;
#define vi vector < int >
#define vll vector<long long int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long int>>
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define FIND(x, y) binary_search(all(x), y)
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}
int lcm(int x, int y) {return x / gcd(x, y) * y;}

bool isValid(int x, int y, int n, int m){
    if(x < 0 or x >= n)return false;
    if(y < 0 or y >= m)return false;
    return true;
}
int factorial(int n)
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
bool isPrime(int n) 
{   
    if (n < 2)
        return false;
    if (n <= 3) 
        return true; 
    if (!(n % 2) or !(n % 3)) 
        return false; 
    for (int i = 5; i * i <= n; i += 6) 
        if (!(n % i) or !(n % (i + 2))) 
            return false;
    return true; 
}
bool ispow2(int x){return (x ? !(x & (x - 1)) : 0);} 

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
struct VectorHasher {
    int operator()(const vector<int> &V) const {
        int hash = V.size();
        for(auto &i : V) {
            hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
}; 



void solve(){
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>> vec;
    f(i,0,n){
        vector<ll> v;
        ll a;
        cin>>a;
        v.pb(a);
        vec.pb(v);
    }
    f(i,0,n){
        ll a;
        cin>>a;
        vec[i].pb(a);
    }
    sort(all(vec));
   
    ll res = 0;
    n = vec.size();
    f(i,0,n-1){
        if(vec[i+1][0] - vec[i][0] > 1){
            ll  a = vec[i][0] * 1;
            ll b = vec[i][0] * vec[i][1];
            if(m >= b){
                res = max(res,b);
            }else if(m>=a and m<b){
                ll temp = m/a;
                temp*=a;
                res = max(res,temp);
            }
        }else{
            ll a = vec[i][0] * 1;
            ll b = vec[i][0] * vec[i][1];
            ll c = vec[i+1][0] + b;
            ll d = vec[i+1][0] * vec[i+1][1] + b;
            // cout << c <<"\n";
            if(m >= d){
                res = max(res,d);
            }else if(m>=c and m<d){
                ll temp = m - b;
                temp /= vec[i+1][0];
                ll q = temp;
                ll rem = vec[i+1][1] - q;
                ll rem2 = vec[i][1];
                rem2 = min(rem,rem2);
                temp *= vec[i+1][0];
                ll minus = m - temp - b;
                // ll ans  = 0;
                // if(minus > 0){
                //     ans  = min(minus,rem2);
                // }
                res = max(res , temp + b + min(minus,rem2));
            }else if(m>=b and m<c){
                ll extra  = min(vec[i+1][1] , vec[i][1]);
                ll cost = min(extra , m - b);
                
                res = max(res,b + cost);

            }else if(m>=a and m<b){
                ll temp = m/a;
                ll q = temp;
                ll extra = min(q,vec[i+1][1]);
                temp*=a;
                ll cost  = min(extra , m - temp);
                res = max(res,temp + cost);
            }
        }
    }
    ll  a = vec[n-1][0] * 1;
    ll b = vec[n-1][0] * vec[n-1][1];
    if(m >= b){
        res = max(res,b);
    }else if(m>=a and m<b){
        ll temp = m/a;
        // ll q = temp;
        // ll extra = min(q,vec[i+1][1]);
        temp*=a;
        // ll cost  = min(extra , m - temp);
        res = max(res,temp);
    }
    cout << res << "\n";
    
}
//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    auto start = high_resolution_clock::now();
    ll t;
    cin>>t;
    // t=1;
    while(t--){

        solve();
    }
    auto time =  duration_cast<microseconds>(high_resolution_clock::now() - start).count() / 1000;
    cerr << "Time: " << time << " ms!" << endl;
    
}