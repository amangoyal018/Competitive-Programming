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

    int n;
    cin>>n;

    string s;
    cin>>s;

    vi v(n);
    int cntr = 0;
    int cntb = 0;
    int index = INT_MAX;
    f(i,0,n){
        if(s[i]=='R'){
            v[i] = 1;
            cntr++;
            index = min(index,i);
        }else if(s[i]=='B'){
            v[i] = 2;
            cntb++;
            index = min(index,i);
        }
    }
    if(cntr==0 and cntb==0){
        int ans = 0;
        f(i,0,n){
            if(ans){
                cout<<'B';
            }else{
                cout<<'R';
            }
            ans = 1 - ans;
        }
        cout<<"\n";
        return;
    }

    if(index > 0){
        int pos = v[index];
        for(int i = index - 1 ; i >= 0 ; i--){
            pos = 3 - pos;
            v[i] = pos;
        }
    }
    int temp = v[index];
    for(int i = index+1;i<n;i++){
        if(v[i]>0){
            temp = v[i];
            continue;
        }
        temp = 3 - temp;
        v[i] = temp;
    }
    for(auto x:v){
        if(x==1){
            cout<<'R';
        }else{
            cout<<'B';
        }
    }
    cout<<"\n";
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