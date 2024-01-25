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

    ll n;
    cin>>n;

    ll start = 0;
    ll end = INT_MAX;

    ll res = 0;
    // cout<<end<<"\n";
    vll v;
    f(i,0,n){
        ll a,x;
        cin>>a>>x;
        if(a==1){
            start = max (start ,x);
        }else if(a==2){
            end = min(end ,x);
        }else{
            v.pb(x);
        }
    }
    if(end<start){
        cout<<0<<"\n";
        return;
    }
    // cout<<end<<"\n";
    res = end - start + 1;
    // cout<<v.size()<<"\n";
    for(auto y:v){
        // cout<<y<<"\n";
        if(y >= start and y<= end ){
            res--;
        }
    }
    cout<<res<<"\n";

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