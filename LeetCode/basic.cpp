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
int numDecodings(string s) {
        if(s.find('0')!=string::npos){
            if(s.find("00")!=string::npos){
                return 0;
            }
            if(s.find("30")!=string::npos){
                return 0;
            }
            if(s.find("40")!=string::npos){
                return 0;
            }
            if(s.find("50")!=string::npos){
                return 0;
            }
            if(s.find("60")!=string::npos){
                return 0;
            }
            if(s.find("70")!=string::npos){
                return 0;
            }
            if(s.find("80")!=string::npos){
                return 0;
            }
            if(s.find("90")!=string::npos){
                return 0;
            }
            if(s[0]=='0'){
                return 0;
            }
        }
        int ans = 1;
        for(int i=1;i<s.size();i++){
            if(s[i]=='0'){
                if(i>1){
                    if(s[i-2]=='1' or s[i-1]=='2'){
                        ans--;
                    }
                }
                continue;
            }
            if(s[i-1]!='1' and s[i-1]!='2'){
                continue;
            }
            if(s[i-1]=='1'){
                if(i-2>=0){ 
                    if(s[i-2]==s[i]){
                        ans++;
                    }
                }
                ans++;
            }else{

                if(s[i]-'0'<=6){
                    if(i-2>=0){
                        if(s[i-2]==s[i]){
                            ans++;
                        }
                    }
                    ans++;
                }else{
                    continue;
                }
            }
        }
        return ans;

    }
//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    
    // cout<<x<<" ";
    string s = "222";
    cout<<numDecodings(s);
    
    
    
	
	
    
    

    
    
    



}