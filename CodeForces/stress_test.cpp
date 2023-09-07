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

bool  FindSecondLargestElement(int n,vector<int> v){
        int max1=INT_MIN;
        f(i,0,n){
            int a=v[i];
            max1=max(max1,a);
        }
        if(max1==n){
            return true;
        }else{
            return false;
        }

}

bool Brute_solution(int n,vector<int> a)
{
    
    vector<ll> v;
    if(a[0]!=n)
    return false;
    else
    {
        vector<ll> x(n+1,0);
        for(ll i=0;i<n;i++)
        {
            x[0]++;
            x[a[i]]--;
        }
        for(ll i=0;i<n-1;i++)
        x[i+1]=x[i+1]+x[i];
        ll i;
        for(i=0;i<n;i++)
        {
            if(x[i]!=a[i])
            break;
        }
        if(i==n)
        return true;
        else
        return false;
    }
    
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

        int n = rand() %10 +1;
        // int k = rand() % 10+1;
        // int d = rand() % 10+1;
        // int w = rand() % 10+1;
        vector<int> v;
        f(i,0,n){
            int a=rand()%10 +1;
            v.pb(a);
        }
        sort(all(v),greater<int>());
        // sort(all(v));
        // vector<int> myans = FindSecondLargestElement( n,k,v);
        // vector<int> correctans = Brute_solution(n,k,v);
        if (Brute_solution(n,v) != FindSecondLargestElement( n,v))
        {
            cout<<n<<endl;
            for(auto x:v){
                cout<<x<<" ";
            }
            cout<<endl;

            // cout<<correctans<<" "<<myans;

            break;
        }
        count++;
    }
}