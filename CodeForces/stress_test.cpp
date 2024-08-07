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
bool customCompare(pair<int,int> pair1, pair<int, int> pair2) {
    if (pair1.first == pair2.first)
    {
        return pair1.second < pair2.second;
    }

    return pair1.first > pair2.first;
}

//code start  JAI SHREE RAM

ll  FindSecondLargestElement(ll n,ll m,vector<ll> v){

    vector<vector<ll>> vec;
    map<ll, ll> freqMap;

    f(i,0,n){
        freqMap[v[i]]++;
    }
    for(auto& p : freqMap){
        vec.pb({p.first, p.second});
    }
    sort(all(vec));
   
    ll res = 0;
    n = vec.size();
    f(i,0,n-1){
        if(vec[i+1][0] - vec[i][0] > 1){
            ll  a = vec[i][0] * 1;
            ll b = vec[i][0] * vec[i][1];
            if(m >= b){
                res = max(res,b);
            }else if(m>=a and m<b){
                ll temp = m/a;
                temp*=a;
                res = max(res,temp);
            }
        }else{
            ll a = vec[i][0] * 1;
            ll b = vec[i][0] * vec[i][1];
            ll c = vec[i+1][0] + b;
            ll d = vec[i+1][0] * vec[i+1][1] + b;

            if(m >= d){
                res = max(res,d);
            }else if(m>=c and m<d){
                ll temp = m - b;
                temp /= vec[i+1][0];
                ll q = temp;
                ll rem = vec[i+1][1] - q;
                ll rem2 = vec[i][1];
                rem2 = min(rem,rem2);
                temp *= vec[i+1][0];
                ll minus = m - temp - b;
                // ll ans  = 0;
                // if(minus > 0){
                //     ans  = min(minus,rem2);
                // }
                res = max(res , temp + b + min(minus,rem2));
            }else if(m>=b and m<c){
                ll extra  = min(vec[i+1][1] , vec[i][1]);
                ll cost = min(extra , m - b);
                
                res = max(res,b + cost);
                // res = max(res,b);
            }else if(m>=a and m<b){
                ll temp = m/a;
                ll q = temp;
                ll extra = min(q,vec[i+1][1]);
                temp*=a;
                ll cost  = min(extra , m - temp);
                res = max(res,temp + cost);
            }
        }
    }
    ll  a = vec[n-1][0] * 1;
    ll b = vec[n-1][0] * vec[n-1][1];
    if(m >= b){
        res = max(res,b);
    }else if(m>=a and m<b){
        ll temp = m/a;
        temp*=a;
        res = max(res,temp);
    }
    return res;

}

ll Brute_solution(ll n,ll m,vector<ll> v)
{
    
    sort(all(v));

    ll i = 0;
    ll j = 0;
    ll sum  = 0;
    ll res = 0;
    while( j < n){
        if(v[j] - v[i] > 1){
            sum-=v[i];
            i++;
            continue;
        }
        sum += v[j];
        if(sum > m){
            while( sum > m and i<=j){
                sum-=v[i];
                i++;
            }
        }
        // cout << sum << "\n";
        res = max(res,sum);
        j++;
    }
    return res;
    
}

    
    
    

int main()
{

    srand(time(NULL));
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;
    while (count <= 10000)
    {

        ll n = rand() %5 +1;
        ll k = rand() % 20 + 1;
        // int d = rand() % 10+1;
        // int w = rand() % 10+1;

        // unordered_set<int> s;
        vector<ll> v;
        f(i,0,n){
            ll a = rand()%10 +1;
            v.pb(a);
            // if()
            // s.insert(a);
            // if(v.size()==n){
            //     break;
            // }
        }
        // v.assign(s.begin(),s.end());
        // sort(all(v),greater<int>());
        // sort(all(v));
        // vector<int> myans = FindSecondLargestElement( n,k,v);
        // vector<int> correctans = Brute_solution(n,k,v);
        if (Brute_solution(n,k,v) != FindSecondLargestElement( n,k,v))
        {
            cout<<n<<endl;
            cout<<k<<endl;
            for(auto x:v){
                cout<<x<<" ";
            }
            cout<<endl;
            cout<<FindSecondLargestElement( n,k,v)<<"\n";
            cout << Brute_solution(n,k,v)<<"\n";

            // cout<<correctans<<" "<<myans;

            break;
        }
        count++;
    }
}