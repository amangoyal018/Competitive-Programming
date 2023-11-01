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
    ll n,q;
    cin>>n>>q;
    // cout<<n<<" "<<q<<"\n";

    vll a(n);
    vll x(q);
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,q){
        cin>>x[i];
    }

    f(i,1,q){
        if(x[i]>x[i-1]){
            x[i]=x[i-1];
        }
    }

    vi v1(31);
    f(i,0,q){
        v1[x[i]]=1;
    }
    vi v2(31);
    f(i,0,31){
        if(v1[i]==0){
            if(i!=0){
            v2[i]+=v2[i-1];
            }
            continue;
        }
        v2[i]= round(pow(2,v1[i]*(i-1)));
        if(i!=0){
            v2[i]+=v2[i-1];
        }
    }
    // for(auto x:v1){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    // for(auto x:v2){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    
    
    f(i,0,n){
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
            continue;
        }
        ll temp = a[i];
        ll cnt = 0;
        while(temp%2==0){
            temp/=2;
            cnt++;
        }
        while(v1[cnt]!=1){
            cnt--;
            if(cnt==-1){
                break;
            }
        }
        // cout<<cnt<<"\n";
        if(cnt==-1){
            cout<<a[i]<<" ";
            continue;
        }
        // cout<<cnt<<"\n";
        cout<<a[i]+v2[cnt]<<" ";
    }
    cout<<"\n";

    



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

        solve();
    }
    
}