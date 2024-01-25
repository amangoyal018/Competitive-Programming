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
    ll n,k,x;
    cin>>n>>k>>x;

    vll v(n);

    f(i,0,n){
        cin>>v[i];
    }
    sort(all(v));
    vll prefix(n);
    prefix[0] = v[0];
    f(i,1,n){
        prefix[i] = v[i] + prefix[i-1];
    }
    // for(auto y:prefix){
    //     cout<<y<<' ';
    // }
    // cout<<"\n";
    ll res = INT_MIN;
    f(i,0,k+1){
        ll index = n - 1 - i;
        ll sum;
        if(index - x < 0){
            sum = 0;
        }else{
            sum  = prefix[index-x];
        }
        // cout<<index<<"\n";
        ll temp;
        if(index<0){
            temp = 0;
        }else{
            temp = (prefix[index] - sum)*-1;
        }
        sum+=temp;
        // cout<<<<'\n';
        res = max(res,sum);
        // cout<<sum<<"\n";
        // break;
    }
    cout<<res<<"\n";
    
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