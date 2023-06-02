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
    int n;
    cin>>n;
    int topface;
    cin>>topface;
    vi v;
    v.pb(topface);
    v.pb(7-topface);
    f(i,0,n){
        int a,b;
        cin>>a>>b;
        if(i==0){
            continue;
        }
        for(int j=1;j<=6;j++){
            if(j==a or j==b or j==7-a or j==7-b){

            }else{
                v.pb(j);
            }
        }

    }
    // for(auto x:v){
    //     cout<<x;
    // }
    if(n==1){
        cout<<"YES";
        return 0;
    }
    for(int i=2;i<=v.size()-4;i+=2){
        if((v[i]!=v[i-1] and v[i]!=v[i+2]) and (v[i+1]!=v[i-1] and v[i+1]!=v[i+2])){
            cout<<"NO";
            return 0;
        }else{
            if(v[i]==v[i-1]){
                swap(v[i],v[i+1]);
            }
        }
    }
    int a=v[2*n-2];
    int b=v[2*n-1];

    if(a!=v[2*n-3] and b!=v[2*n-3]){
        cout<<"NO";
        return 0;
    }else{
        cout<<"YES";
    }
    
    
	
	
    
    

    
    
    



}