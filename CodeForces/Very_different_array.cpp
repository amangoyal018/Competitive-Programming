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

    ll n,m;
    cin>>n>>m;
    vll v1(n);
    vll v2(m);
    f(i,0,n){
        cin>>v1[i];
    }
    f(i,0,m){
        cin>>v2[i];
    }
    sort(all(v1));
    sort(all(v2));

    ll a = 0;
    ll b = m - 1;

    ll diff = 0;
    // reverse(all(v1));

    for(auto x:v1){
        ll diff1 = abs(v2[a]-x);
        ll diff2 = abs(v2[b]-x);
        // cout<<diff1<<" "<<diff2<<"\n";

        if(diff2<diff1){
            a++;
            diff+=diff1;
        }else{
            b--;
            diff+=diff2;
        }

    }
    a = 0;
    b = m-1;
    ll diff_2 = 0;
    reverse(all(v1));

    for(auto x:v1){
        ll diff1 = abs(v2[a]-x);
        ll diff2 = abs(v2[b]-x);
        // cout<<diff1<<" "<<diff2<<"\n";

        if(diff2<diff1){
            a++;
            diff_2+=diff1;
        }else{
            b--;
            diff_2+=diff2;
        }

    }
    cout<<max(diff,diff_2)<<'\n';
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