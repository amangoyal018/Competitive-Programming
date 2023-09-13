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
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
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


        ll l,r;
        cin>>l>>r;
        if(r<=3 or (r-l==0 and isPrime(r))) {
            cout<<-1<<"\n";
        }else if( (abs(l - r) >= 1) or (r%2==0)){
            // cout<<"hello";
            ll a=4;
            for(ll i=max(a,l);i<=r;i++){
                if(i%2==0){
                    cout<<2<<" "<<i-2<<"\n";
                    break;
                }
            }
        }else{
            for(ll i = 2; i*i<=r;i++){
                if(r%i==0){
                    ll temp = r/i;
                    cout<<temp<<" "<<temp*(i-1)<<"\n";
                    break;
                }
            }

        }

        
        

        
        
        
    }
    
    
    
	
	
    
    

    
    
    



}