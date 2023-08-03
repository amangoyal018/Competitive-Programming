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
        ll n,m,h;
        cin>>n>>m>>h;
        vi vec;
        vi prefix1(m);
        f(i,0,m){
            int a;
            cin>>a;
            vec.pb(a);
        }
        sort(all(vec));
        prefix1[0]=vec[0];
        f(i,1,m){
            prefix1[i]=prefix1[i-1]+vec[i];
            // cout<<prefix1[i]<<endl;
        }
        ll sum1=0;
        ll cnt1=0;
        ll penalty1=0;
        f(i,0,m){
            // cout<<sum1
            if((sum1+vec[i])<=h){
                sum1+=vec[i];
                cnt1++;
                penalty1+=prefix1[i];
                // cout<<sum1<<" ";
            }else{
                break;
            }
        }
        // cout<<cnt1<<endl;
        // cout<<penalty1<<endl;
        ll pos=1;
        f(i,0,n-1){
            vi v1;
            vi prefix(m);
            f(j,0,m){
                int a;
                cin>>a;
                v1.pb(a);
            }
            sort(all(v1));
            prefix[0]=v1[0];
            f(i,1,m){
                prefix[i]=prefix[i-1]+v1[i];
                // cout<<prefix[i]<<endl;
            }
            ll sum=0;
            ll cnt=0;
            ll penalty=0;
            f(i,0,m){
                if(sum+v1[i]<=h){
                    sum+=v1[i];
                    cnt++;
                    penalty+=prefix[i];
                }else{
                    break;
                }
            }
            // cout<<penalty<<endl;
            if(cnt>cnt1){
                pos++;
            }
            if(cnt==cnt1){
                if(penalty<penalty1){
                    pos++;
                }
            }
        }
        cout<<pos<<"\n";
        
    }
    
    
    
	
	
    
    

    
    
    



}