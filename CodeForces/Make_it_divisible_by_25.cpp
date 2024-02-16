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

    string s;
    cin>>s;
    //check 00 25 50 75
    int n = s.length();
    reverse(s.begin(),s.end());
    // cout<<s<<"\n";

    int ans = INT_MAX;
    
    //to check 00
    int index1 = -1;
    int index2 = -1;
    bool status1 = true;
    bool status2 = true;
    f(i,0,n){
        if(s[i]=='0' and status1){
            index1=i;
            status1 = false;
            continue;
        }
        if(s[i]=='0' and status2){
            if(status1){
                continue;
            }
            index2=i;
            status2 = false;
        }
    }
    if(index2!=-1 and index1!=-1){
        ans = min(index2-1,ans);
    }
    //to check 75
    index1 = -1;
    index2 = -1;
    status1 = true;
    status2 = true;
    f(i,0,n){
        if(s[i]=='5' and status1){
            index1=i;
            status1 = false;
            continue;
        }
        if(s[i]=='7' and status2){
            if(status1){
                continue;
            }
            index2=i;
            status2 = false;
        }
    }
    if(index2!=-1 and index1!=-1){
        ans = min(index2-1,ans);     
    }
    //to check 50 
    index1 = -1;
    index2 = -1;
    status1 = true;
    status2 = true;
    f(i,0,n){
        if(s[i]=='0' and status1){
            index1=i;
            status1 = false;
            continue;
        }
        if(s[i]=='5' and status2){
            if(status1){
                continue;
            }
            index2=i;
            status2 = false;
        }
    }
    if(index2!=-1 and index1!=-1){
        ans = min(index2-1,ans);     
    }
    //to check 25 
    index1 = -1;
    index2 = -1;
    status1 = true;
    status2 = true;
    f(i,0,n){
        if(s[i]=='5' and status1){
            index1=i;
            status1 = false;
            continue;
        }
        if(s[i]=='2' and status2){
            if(status1){
                continue;
            }
            index2=i;
            status2 = false;
        }
    }
    if(index2!=-1 and index1!=-1){
        ans = min(index2-1,ans);     
    }

    cout<<ans<<"\n";
    
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