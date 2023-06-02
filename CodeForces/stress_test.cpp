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

int  FindSecondLargestElement(int n,int k,int d,int w,vector<int> v){
    int dosecnt=0;
    int cnt=0;
    int a=v[0];
    if(n==1){
        return 1;
        
    }
    f(i,0,n){
        if(v[i]<=a+d+w){
            cnt++;
            if(cnt%k==0){
                dosecnt++;
                cnt=0;
                a=v[min(i+1,n-1)];
            }
        }else{
            if(cnt>0){
                
                dosecnt++;
                cnt=0;
            }
            // dosecnt++;                
            a=v[i];
            cnt=1;
            if(cnt%k==0){
                dosecnt++;
                cnt=0;
            }
        }
        // cout<<cnt<<dosecnt<<" "<<a<<endl;

    }
    if(cnt){
        dosecnt++;
    }
    return dosecnt;

}

int Brute_solution(int n,int k,int d,int w,vector<int> a)
{
        a.pb(a[n-1]);
        int cnt=1;
        int prev=a[0];
        for(int i=1;i<n;i++)
        {

        int t=k-1;
        while(prev+w+d>=a[i]&&t--)
        {
        i++;
        }
        prev=a[i];
        if(i<n)
        cnt++;

        }
        return cnt;
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
        int m = rand() % 10+1;
        int d = rand() % 10+1;
        int w = rand() % 10+1;
        vector<int> v;
        f(i,0,n){
            int a=rand()%10 +1;
            v.pb(a);
        }
        sort(all(v));
        int myans = FindSecondLargestElement( n,m,d,w,v);
        int correctans = Brute_solution(n,m,d,w,v);
        if (correctans != myans)
        {
            cout<<n<<" "<<m<<" "<<d<<" "<<w<<endl;
            for(auto x:v){
                cout<<x<<" ";
            }
            cout<<endl;

            cout<<correctans<<" "<<myans;

            break;
        }
        count++;
    }
}