#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
// const int mod = 1e9 + 7;
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
// int factorial(unsigned int n)
// {
// 	if (n == 0)
// 		return 1;
// 	return (n * factorial(n - 1)) % mod;
// }
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
bool prime(int n)
{
if (n <= 1)
return false;
for (int i = 2; i <= sqrt(n); i++){

        if (n % i == 0)
        return false;
}
    return true;
}



void solve(){

    ll a,b,c;
    cin>>a>>b>>c;


    if( (c - b) == (b - a) ){
        cout<<"YES\n";
        return;
    }
    if(a==0 or b==0 or c==0){
        cout<<"NO\n";
        return;
    }

    ll d1 = c - b;
    ll new_a = b - d1;
    if(new_a%a == 0 and new_a/a > 0 ){
        cout<<"YES\n";
        return;
    }
    
    ll d2 = (c-a)/2;
    double d2b = static_cast<double>(c-a)/2;
    ll new_b = c - d2;
    if(new_b%b == 0 and new_b/b > 0 ){
        if(d2b == d2){
            cout<<"YES\n";
            return;
        }
    }

    ll d3 = b - a;
    ll new_c = b + d3;
    if(new_c%c == 0 and new_c/c > 0 ){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}        

//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    ll t;
    cin>>t;
    // t=1;
    while(t--){

        solve();
    }
    
}