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
    while(t--){
        int n;
        cin>>n;
        string s1;
        cin>>s1;
    
        string s2;
        cin>>s2;
        vi index;
        int cnt1=0;
        int cnt0=0;
        // cout<<s1[i];
        for(int i=0;i<n;i++){
            if(s1[i]=='0'){
                cnt0++;

            }else{
                cnt1++;
            }
            if(cnt0==cnt1){
                index.pb(i+1);
            }
            // cout<<cnt1<<cnt0<<endl;

        }
        bool status=true;
        bool carryon=false;

        for(int i=n-1;i>=0;i--){
            if(s1[i]!=s2[i] and status){
                int a=i+1;
                bool ans=false;

                for(auto x:index){
                    if(a==x){
                        ans=true;

                    }
                }
                if(!ans){
                    cout<<"NO"<<"\n";
                    carryon=true;
                    break;

                }else{
                    status=false;
                }

                
            }
            if(!status){
                if(s1[i]==s2[i]){
                    int b=i+1;
                    bool ans=false;

                    for(auto x:index){
                        if(b==x){
                            ans=true;

                        }
                    }
                    if(!ans){
                        cout<<"NO"<<"\n";
                        carryon=true;
                        break;

                    }else{
                        status=true;
                    }

                    }
            }
        }
        if(carryon){
            continue;
        }
        cout<<"YES"<<"\n";
    }
    
    
    
	
	
    
    

    
    
    



}