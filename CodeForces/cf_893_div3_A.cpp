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
        ll n,m;
        cin>>n>>m;

        vector<int> V(21);
        vector<int> I(21);
        vector<int> K(21);
        vector<int> A(21);

        

        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                char c;
                cin>>c;

                if(c=='v'){
                    V[j+1]++;
                }
                if(c=='i'){
                    I[j+1]++;
                }
                if(c=='k'){
                    K[j+1]++;
                }
                if(c=='a'){
                    A[j+1]++;
                }
                
            }
            
        }
        bool status =true;
        bool status1 = false;
        bool status2 = false;
        bool status3 = false;
        bool status4 = false;

        for(int i=1;i<=m;i++){
            if(V[i]>0 and status){
                status1=true;
                // cout<<i;
                status=false;
                continue;
            }
            if(status1 and I[i]>0){
                status2=true;
                status1=false;
                continue;
            }
            if(status2 and K[i]){
                status3=true;
                status2=false;
                continue;
            }
            if(status3 and A[i]){
                status4=true;
                break;
            }
        }
        if(status4){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        
        
        
    }
    
    
    
	
	
    
    

    
    
    



}