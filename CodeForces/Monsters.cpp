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
bool customCompare(pair<int,int> pair1, pair<int, int> pair2) {
    if (pair1.first == pair2.first)
    {
        return pair1.second < pair2.second;
    }

    return pair1.first > pair2.first;
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
        int n,k;
        cin>>n>>k;
        vll v;
        vector<pair<int,int>> vp;
        f(i,0,n){
            ll a;
            cin>>a;
            if(a>k){
                if(a%k==0){
                    v.pb(k);
                    continue;
                }
                v.pb(a%k);
            }else{
                v.pb(a);
            }
        }
        // for(auto x:v){
        //     cout<<x;
        // }
        // cout<<"\n";
        f(i,0,n){
            pair<int,int> p;
            p={v[i],i+1};
            vp.pb(p);
        }
        sort(vp.begin(),vp.end(),customCompare);
        // sort(vp.rbegin(),vp.rend());
        // for(auto x:vp){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        f(i,0,n){
            cout<<vp[i].second<<" ";
        }
        cout<<"\n";
        
    }
    
    
    
	
	
    
    

    
    
    



}