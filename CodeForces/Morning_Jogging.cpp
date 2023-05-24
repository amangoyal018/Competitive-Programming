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
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> v;
        f(i,0,n){
            f(j,0,m){
                int a;
                cin>>a;
                pair<int,int> p={a,i};
                v.pb(p);    
            }
        }

        sort(all(v));

        vector<vector<int>> vec(n,vector<int>(m,-1));
        f(i,0,m){
            vec[v[i].second][i]=v[i].first;
        }
        int index=m;
        sort(v.begin()+m,v.end(),sortbysec);

        f(i,0,n){
            f(j,0,m){
                if(vec[i][j]!=-1){
                    continue;

                }else{
                    vec[i][j]=v[index].first;
                    index++;

                }
            }
        }
        for(auto x:vec){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<"\n";
        }



        
    }
	
	
    
    

    
    
    



}