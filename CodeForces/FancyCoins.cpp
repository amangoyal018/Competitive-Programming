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

        int n;
        cin>>n;
        int k;
        cin>>k;

        int a,b;
        cin>>a>>b;
        ll ans=0;
        
        int k_needed=n/k;
        int one_needed=n%k;

        int one_regular = min (one_needed,a);
        int one_fancy = one_needed-one_regular;

        int k_regular=min(k_needed,b);
        int k_fancy=k_needed-k_regular;

        int one_remain=max(0,a-one_needed);
        // cout<<one_remain;

        if(one_remain>=k and k_fancy>0){
            int temp=one_remain/k;
            // cout<<k_fancy;
            k_fancy=max(0,k_fancy-temp);
        }

        cout<<k_fancy+one_fancy<<"\n";;


        

        
        
        
    }
    
    
    
	
	
    
    

    
    
    



}