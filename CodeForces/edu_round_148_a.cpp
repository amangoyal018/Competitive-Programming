#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
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
        string s;
        cin>>s;
        int len=s.length();
        int index=len/2;

        string s1="",s2="";

        for(int i=0;i<index;i++){
            s1+=s[i];
        }
        unordered_set<char> set1;

        for(auto x:s1){
            set1.insert(x);
        }


        if(set1.size()>=2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        
    }
    

    
    
    



}