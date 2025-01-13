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

ll  FindSecondLargestElement(ll n,vector<ll> v){

    vll even;
    vll odd;

    f(i,0,n){
        ll a;
        a = v[i];

        if(a%2==0){
            even.pb(a);
        }else{
            odd.pb(a);
        }
    }

    if(even.size() == n or odd.size() == n){
        return 0;
    }
    sort(all(even));
    sort(all(odd));

    ll curr_omax = odd[odd.size() - 1];

    ll res = 0;

    for(auto x:even){
        if( x < curr_omax){
            curr_omax += x;
            res++;
        }else{
            curr_omax +=x;
            curr_omax +=x;
            res++;
            res++;
        }
        if(curr_omax %2 == 0){
            cout << (curr_omax%2 == 0) << "\n";
        }
        // cout << (curr_omax%2 == 0) << "\n";
    }
    return res;

}

ll Brute_solution(ll n,vector<ll> v)
{   

    ll res = 0;
    while(true){
        int odd = 0;
        int even = 0;
        f(i,0,n){
            if(v[i] %2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        if(odd == n or even == n){
            return res;
        }
        ll omax = LLONG_MIN;
        ll emin = LLONG_MAX;
        ll index1 = -1;
        ll index2 = -1;

        f(i,0,n){
            if(v[i] %2 == 0){
                // emin = min(emin , v[i]);
                if(v[i] < emin){
                    emin = v[i];
                    index1 = i;
                }

            }else{
                // omax = max(omax,v[i]);
                if(v[i] > omax){
                    omax = v[i];
                    index2 = i;
                }
            }
        }
        if(emin < omax){
            v[index1] = emin + omax;
        }else{
            v[index2] = emin + omax;
        }
        res++;
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

        ll n = rand() %10 +1;
        // ll k = rand() % 20 + 1;
        // int d = rand() % 10+1;
        // int w = rand() % 10+1;

        // unordered_set<int> s;
        vector<ll> v;
        f(i,0,n){
            ll a = rand()%1000 +1;
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
        if (Brute_solution(n,v) != FindSecondLargestElement( n,v))
        {
            cout<<n<<endl;
            // cout<<k<<endl;
            for(auto x:v){
                cout<<x<<" ";
            }
            cout<<endl;
            // cout<<FindSecondLargestElement( n,v)<<"\n";
            // cout << Brute_solution(n,v)<<"\n";

            // cout<<correctans<<" "<<myans;

            break;
        }
        count++;
    }
}