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
    int n;
    cin>>n;

    int cnt1=0;
    int cnt2=0;
    int cnt3=0;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>=1){
            cnt1+=a;

        }else if(a==-1 and cnt1<=0){
            cnt2++;

        }else{
            cnt1--;
        }
        
        // cout<<cnt2<<cnt1<<endl;

        
    }
    cout<<cnt2;
	
    
    

    
    
    



}