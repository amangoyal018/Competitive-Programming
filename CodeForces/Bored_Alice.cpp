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

    while(t--){
        ll n,x,m;
        cin>>n>>x>>m;
        vll v;
        f(i,0,n){
            ll a;
            cin>>a;
            v.pb(a);
        }
        vll prefix_sum(n,0);
        prefix_sum[0]=v[0];
        f(i,1,n){
            prefix_sum[i]=prefix_sum[i-1]+v[i];
        }
        vll suffix_sum(n,0);
        suffix_sum[0]=v[n-1];
        f(i,1,n){
            suffix_sum[i]=suffix_sum[i-1]+v[n-i-1];
        }
        vll prefix_max(n,0);
        prefix_max[0]=v[0];
        f(i,1,n){
            if(v[i]>prefix_max[i-1]){
                prefix_max[i]=v[i];
            }else{
                prefix_max[i]=prefix_max[i-1];
            }
        }
        vll suffix_max(n,0);
        suffix_max[0]=v[n-1];
        f(i,1,n){
            if(v[n-i-1]>suffix_max[i-1]){
                suffix_max[i]=v[n-i-1];
            }else{
                suffix_max[i]=suffix_max[i-1];
            }
        }
        ll score=-1;
        for(int i=m;i>=0;i--){
            ll a=i;
            ll b=m-i;
            ll c;
            if(a==0){
                c=suffix_sum[b-1];
            }else if(b==0){
                c=prefix_sum[a-1];
            }else{
                c=prefix_sum[a-1]+suffix_sum[b-1];
            }
            ll d;
            if(a==0){
                d=suffix_max[b-1];
            }else if(b==0){
                d=prefix_max[a-1];
            }else{
                d=max(prefix_max[a-1],suffix_max[b-1]);
            }
            ll ans=c*d;
            // cout<<ans<<endl;
            if(ans>score){
                score=ans;
            }
            
            
        }
        if(score>=x){
            cout<<"Alice"<<"\n";
        }else{
            cout<<"Bob"<<"\n";
        }
        
    }
    
    
    
	
	
    
    

    
    
    



}