#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const int mod = 1e9 + 1;
#define vi vector < int >
#define f(i,a,b) for(ll i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}

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

//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    ll c;
    cin>>c;
    ll n=1e6;

    vector<ll> v(n+1,1);

    v[1]=0;

    for(ll i=1;i<=n;i++){
        if(v[i]==1){
            for(ll j=i*i;j<=n;j+=i){
                v[j]=0;

            }
        }
    }
    set<ll> v2;
    for(ll i=1;i<=n;i++){
        if(v[i]==1){
            v2.insert(i*i);
        }
    }
    // for(auto x:v2){
    //     cout<<x;
    // }
    

    

    f(i,0,c){
        ll a;
        cin>>a;
        // a=sqrt(a);
        // cout<<a;
        if (v2.find(a) != v2.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // f(j,0,v2.size()){
        //     // cout<<v2[j];
        //     if(v2[j]*v2[j]==a){
        //         cout<<"YES\n";
        //         status=false;
        //         break;
        //     }

        // }
        
        
        
    }
	
    
    

    
    
    



}