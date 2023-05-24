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
        int n;
        cin>>n;
        vi v1;
        int cntodd=0,cnteven=0;
        f(i,0,n){
            int a;
            cin>>a;
            v1.push_back(a);
            if(a%2==0){
                cnteven++;
            }else{
                cntodd++;
            }

        }
        sort(all(v1));
        int a=v1[0];
        if(cnteven==n or cntodd==n){
            cout<<"YES\n";
            continue;
        }
        if(a%2==0 and cnteven!=n){
            cout<<"NO\n";
            continue;
        }else{
            cout<<"YES\n";
        }

    }
	
	
    
    

    
    
    



}