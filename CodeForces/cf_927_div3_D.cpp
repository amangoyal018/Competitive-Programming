#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
#define ll long long int 
// const int mod = 1e9 + 7;
#define vi vector < int >
#define vll vector<long long int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long int>>
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin() , x.end()
#define pb push_back
int gcd(int x, int y) {return y == 0 ? x : gcd(y, x % y);}
int lcm(int x, int y) {return x / gcd(x, y) * y;}

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
bool isPrime(int n) 
{   
    if (n < 2)
        return false;
    if (n <= 3) 
        return true; 
    if (!(n % 2) or !(n % 3)) 
        return false; 
    for (int i = 5; i * i <= n; i += 6) 
        if (!(n % i) or !(n % (i + 2))) 
            return false;
    return true; 
} 


void solve(){

    int n;
    cin>>n;

    char s;cin>>s;

    string cards = "CDHS";
    string curr = "";

    f(i,0,4){
        if(cards[i] != s){
            curr+=cards[i];
        }
    }
    curr+=s;

    // cout<<curr<<"\n";
    vi v;
    vi trump;
    f(i,0,2*n){
        string temp;
        cin>>temp;

        int a = (temp[0] - '0');
        int index = curr.find(temp[1]);
        // index++;
        int e = a*round(pow(10,index));
        // cout<<e<<"\n";
        if(e>1000){
            trump.pb(e);
        }else{
            v.pb(e);
        }

    }
    sort(all(v));
    sort(all(trump));
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    // for(auto x:trump){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    int p1 = 0;
    int p2 = 0;
    vector<string> ans;
    vector<int> rem;

    while(p1<int(v.size()) - 1){
        // cout<<p1;
        string s1 = to_string(v[p1]);
        string s2 = to_string(v[p1+1]);
        if(s1.size() == s2.size()){
            ans.pb(s1);
            ans.pb(s2);
            p1+=2;
        }else{
            rem.pb(v[p1]);
            p1++;
            continue;
        }
    }
    if(p1 == int(v.size()) - 1){
        rem.pb(v[p1]);
    }
    // cout<<"\n";
    // cout<<p1<<"\n";
    // for(auto x:rem){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    v = rem;
    p1 = 0;
    while(p1<v.size() and p2 < trump.size()){
         string s1 = to_string(v[p1]);
         string s2 = to_string(trump[p2]);
         ans.pb(s1);
         ans.pb(s2);
         p1++;
         p2++;
    }

    // cout<<(trump.size());
    // cout<<(p2<(trump.size()-1));
    while(p2<(int(trump.size())-1)){
        string s1 = to_string(trump[p2]);
        string s2 = to_string(trump[p2+1]);
        ans.pb(s1);
        ans.pb(s2);
        p2+=2;
    }
    if(p2==trump.size() and ans.size() != 2*n){
        cout<<"IMPOSSIBLE\n";
        return;
    }
    
    for(int i=0;i<ans.size();i+=2){
        // cout<<ans[i]<<" "<< ans[i+1]<<"\n";

        int num1 = stoi(ans[i]);
        int num2 = stoi(ans[i+1]);
        int pow1 = 0;
        int pow2 = 0;
        while(num1%10 == 0){
            pow1++;
            num1/=10;
        }
        while(num2%10 == 0){
            pow2++;
            num2/=10;
        }
        string res1 = to_string(num1); 
        res1 += curr[pow1];
        string res2 = to_string(num2); 
        res2 += curr[pow2];
        cout<<res1<<" "<<res2<<"\n";
    }



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