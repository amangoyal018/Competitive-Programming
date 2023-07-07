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

        int n,k;cin>>n>>k;
        int a;
        int cnt1=0;
        int cnt2=0;
        int ans=0;
        vi v(n+1);

        f(i,1,n+1){
            if(i%k==0){
                a=i/k;
            }else{
                a=i/k+1;
            }
            if(v[i]==1){
                cnt1++;
            }
            if(cnt1<a){
                cnt1++;
                v[i]=1;
                if(n-i+1>i){
                    v[n-i+1]=1;
                }
            }
            // cout<<i<<cnt1<<endl;


            
        }
        cout<<cnt1<<"\n";
        
        
    }
    
    
    
	
	
    
    

    
    
    



}