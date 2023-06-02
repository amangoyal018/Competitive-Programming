#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
const int mod = 1e9 + 1;
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
        string s;
        cin>>s;
        ll maxcnt1=-1;

        ll cnt1=1;
        ll cnt0=0;
        ll cntx=0;
        for(auto x:s){
            if(x=='0'){
                cnt0++;
            }else{
                cntx++;
            }
        }
        if(cnt0==s.length()){
            cout<<0<<"\n";
            continue;
        }
        if(cntx==s.length()){
            cout<<cntx*cntx<<"\n";
            continue;
        }

        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='1'){
                if(s[i+1]=='1'){
                    cnt1++;
                    // cout<<"hello";
                }
            }else{
                cnt1=1;
            }
            if(cnt1>maxcnt1){
                maxcnt1=cnt1;

            }
            // cout<<i<<cnt1<<endl;


        }
        // cout<<maxcnt1;
        ll x=1,y=1;    
        if(s[0]==s[s.length()-1] and s[0]=='1'){
            for(int i=0;i<s.length();i++){
                if(s[i]==s[i+1]){
                    x++;
                }else{
                    break;
                }

            }
            for(int i=s.length()-1;i>=0;i--){
                if(s[i]==s[i-1]){
                    y++;
                }else{
                    break;
                }

            }

            if(x+y>maxcnt1){
                maxcnt1=x+y;
            }
        }
        if(maxcnt1>s.length()){
            maxcnt1=s.length();
        }
        // cout<<maxcnt1;
        vector<ll> vec;
        ll j=1;
        for(ll i=maxcnt1;i>=1;i--){
            vec.pb(j*i);
            j++;
        }
        sort(all(vec));
        cout<<vec[vec.size()-1]<<"\n";
        
    }
    
    
    
	
	
    
    

    
    
    



}