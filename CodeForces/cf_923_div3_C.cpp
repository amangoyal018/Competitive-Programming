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
    ll n,m,k;
    cin>>n>>m>>k;

    vll v(k+1,0);

    f(i,0,n){
        ll a;
        cin>>a;

        if(a<=k){
            v[a] = 1;
            // cout<<"hello"<<a<<"\n";
        }
    }
    
     
    f(i,0,m){
        ll a;
        cin>>a;
        // cout<<a<<" ";

        if(a<=k){
            if(v[a]==1 or v[a]==3){
                // cout<<a<<"\n";
                v[a]=3;
                continue;
            }
            v[a] = 2;
        }
    }
    ll cnt1 = 0;
    ll cnt2 = 0;
    ll cnt3 = 0;
    f(i,1,k+1){
        if(v[i] == 0){
            cout<<"NO\n";
            return;
        }
        if(v[i] == 1){
            cnt1++;
        }
        if(v[i] == 2){
            cnt2++;
        }
        if(v[i] == 3){
            cnt3++;
        }
    }
    // cout<<cnt3<<"\n";
    ll ans1 = min(cnt1,k/2);
    ll ans2 = min(cnt2,k/2);
    if(ans1 + ans2 + cnt3 == k){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
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