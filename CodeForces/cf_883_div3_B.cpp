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
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int cntx=0;
        int cnto=0;
        int cntp=0;
        f(i,0,3){
            if(s1[i]==s2[i] and s2[i]==s3[i]){
                if(s1[i]=='X'){
                    cntx++;
                    
                }else if(s1[i]=='O'){
                    cnto++;
                }else if(s1[i]=='+'){
                    cntp++;
                }
                
            }
        }
        if(s1[0]==s1[1] and s1[1]==s1[2]){
            if(s1[0]=='X'){
                    cntx++;
                    
                }else if(s1[0]=='O'){
                    cnto++;
                }else if(s1[0]=='+'){
                    cntp++;
                }
            
        }
        if(s2[0]==s2[1] and s2[1]==s2[2]){
            if(s2[0]=='X'){
                    cntx++;
                    
                }else if(s2[0]=='O'){
                    cnto++;
                }else if(s2[0]=='+'){
                    cntp++;
                }
            
            
        }
        if(s3[0]==s3[1] and s3[1]==s3[2]){
            if(s3[0]=='X'){
                    cntx++;
                    
                }else if(s3[0]=='O'){
                    cnto++;
                }else if(s3[0]=='+'){
                    cntp++;
                }
            
            
        }
        if(s1[0]==s2[1] and s2[1]==s3[2]){
            if(s1[0]=='X'){
                    cntx++;
                    
                }else if(s1[0]=='O'){
                    cnto++;
                }else if(s1[0]=='+'){
                    cntp++;
                }
            
            
        }
        if(s1[2]==s2[1] and s2[1]==s3[0]){
            if(s1[2]=='X'){
                    cntx++;
                    
                }else if(s1[2]=='O'){
                    cnto++;
                }else if(s1[2]=='+'){
                    cntp++;
                }
            
            
        }
        if(cntx){
            cout<<"X"<<"\n";
        }else if(cnto){
            cout<<"O"<<"\n";
        }else if(cntp){
            cout<<"+"<<"\n";

        }else{
            cout<<"DRAW"<<"\n";
        }
                
    }
    
    
    
	
	
    
    

    
    
    



}