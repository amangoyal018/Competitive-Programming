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

string  FindSecondLargestElement(int n,int k,vector<int> v){

    vi v2 = v;
    sort(all(v2));

    unordered_map<int,int> m;

    f(i,0,n){
        m[v2[i]]=i+1;
    }
    int cnt = 0;
    f(i,0,n-1){
        int diff = m[v[i+1]]-m[v[i]];
        if(diff == 1){
            continue;
        }else{
            cnt++;
        }
    }
    // cout<<cnt<<"\n";
    if(cnt<=k){
        return "YES";
    }else{
        return "NO";
    }

}

string Brute_solution(int n,int k,vector<int> v1)
{
    
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			v[i].first = v1[i];
			v[i].second = i;
		}
		sort(v.begin(), v.end());
		int ans = 1;
		for (int i = 1; i < n; i++)
			if (v[i - 1].second + 1 != v[i].second)
				ans++;
		return  (ans <= k ? "YES" : "NO");
    
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

        int n = rand() %11 +1;
        int k = 3;
        // int d = rand() % 10+1;
        // int w = rand() % 10+1;

        // unordered_set<int> s;
        vector<int> v;
        while(true){
            int a = rand()%n +1;
            if()
            s.insert(a);
            if(v.size()==n){
                break;
            }
        }
        v.assign(s.begin(),s.end());
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

            // cout<<correctans<<" "<<myans;

            break;
        }
        count++;
    }
}