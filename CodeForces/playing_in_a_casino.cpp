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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
    
        vector<vector<int>> vec;
        
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<m;j++){
                int a;
                cin>>a;
                v.push_back(a);
            }
            vec.push_back(v);
        }
        
        
        
        int chips=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                vector<int> v1=vec[i];
                vector<int> v2=vec[j];
                
                for(int i=0;i<m;i++){
                    // cout<<v1[i]<<v2[i]<<endl;
                    chips+=abs(v1[i]-v2[i]);
                }
                // cout<<chips<<endl;
                v1.clear();
                v2.clear();
                
        
            }
        }
        cout<<chips<<"\n";
    }
        
    
    
    
    
    return 0;

    


}