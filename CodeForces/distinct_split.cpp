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
        string s;
        cin>>s;

        vi v1(26,0);
        vi v2(26,0);

        for(auto x:s){
            v1[x-'a']++;
        }
        int max=-1;

        for(auto x:s){
            v1[x-'a']--;
            v2[x-'a']++;
            int cnt=0;

            for(int i=0;i<26;i++){
                cnt+=min(1,v1[i]);
                cnt+=min(1,v2[i]);
            // cout<<v1[i]<<endl;
            }
            if(cnt>max){
                max=cnt;
            }
        }
        cout<<max<<"\n";
    }
	
    
    

    
    
    



}