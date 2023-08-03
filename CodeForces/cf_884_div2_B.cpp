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
    // int n;
    // n=200000;

    // vi v(n+1,1);

    // v[1]=0;

    // for(int i=1;i*i<=n;i++){
    //     if(v[i]==1){
    //         for(int j=i*i;j<=n;j+=i){
    //             v[j]=0;

    //         }
    //     }
    // }

    // for(int i=1;i<=n;i++){
    //     if(v[i]==1){
    //         cout<<i<<" ";
    //     }
    // }
    // t=1;
    while(t--){
        ll n;
        cin>>n;
        vll v(n);
        v[0]=2;
        v[n-1]=3;
        v[n/2]=1;
        ll temp=4;

        f(i,1,n-1){
            if(i==n/2){
                continue;
            }
            v[i]=temp++;
        }
        f(i,0,n){
            cout<<v[i]<<" ";
        }
        cout<<"\n";

        
    }
    
    
    
	
	
    
    

    
    
    



}