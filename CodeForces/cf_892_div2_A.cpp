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
        ll n;
        cin>>n;

        vll a(n);
        f(i,0,n){
            cin>>a[i];

        }
        sort(all(a));
        vll b,c;
        if(n==1){
            cout<<-1<<"\n";
            continue;
        }else{
            if(a[0]==a[n-1]){
                cout<<-1<<"\n";
                continue;

            }else{
                bool status=true;
                b.pb(a[0]);
                // int temp=0;
                f(i,1,n){
                    if(status and a[i]==a[i-1]){
                        b.pb(a[i]);
                    }else{
                        status=false;
                        c.pb(a[i]);
                    }
                }
                cout<<b.size()<<" "<<c.size()<<"\n";
                for(auto x:b){
                    cout<<x<<" ";
                }
                cout<<"\n";
                for(auto x:c){
                    cout<<x<<" ";
                }
                cout<<"\n";

            }

        }
            
        



        
        
        
    }
    
    
    
	
	
    
    

    
    
    



}