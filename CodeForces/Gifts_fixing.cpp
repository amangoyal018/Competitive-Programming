#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const int mod = 1e9 + 1;
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
        ll n;
        cin>>n;
        vll v1;
        vll v2;

        f(i,0,n){
            ll a;
            cin>>a;
            v1.pb(a);
        }
        f(i,0,n){
            ll a;
            cin>>a;
            v2.pb(a);
        }
        
        int min1=v1[0];
        int min2=v2[0];
        for(auto x:v1){
            if(x<min1){
                min1=x;
            }
        }
        for(auto x:v2){
            if(x<min2){
                min2=x;
            }
        }
        f(i,0,n){
            v1[i]-=min1;
            v2[i]-=min2;
        }
        ll moves=0;
        f(i,0,n){
            ll a=max(v1[i],v2[i]);
            ll b=min(v1[i],v2[i]);
            moves+=b;
            moves+=(a-b);
        }
        cout<<moves<<"\n";
    }
    
    
    
	
	
    
    

    
    
    



}