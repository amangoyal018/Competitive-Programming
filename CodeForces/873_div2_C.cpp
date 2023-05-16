#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const int mod = 1e9 + 7;
#define vi vector < int >
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
    while(t--){
        ll n;
        cin>>n;

        vi v1;
        vi v2;

        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v1.pb(a);
        }
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v2.pb(a);
        }
        

        sort(all(v1),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        ll ans=1;


        ll count=0,p1=0,p2=0;




        while(true and p2<n){
            if(v1[p1]<=v2[p2] or p1==n){
                ans=(ans*(count-p2))%mod;
                p2++;
                continue;
            }
            if(v1[p1]>v2[p2]){
                count++;
                p1++; 
                continue;
            }
            



        }
        cout<<ans%mod<<"\n";
        
    }

}