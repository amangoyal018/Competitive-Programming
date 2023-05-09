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
        string s2="codeforces";
        int count=0;
        
        for(int i=0;i<10;i++){
            if(s[i]!=s2[i]){
                count++;
            }
            
        }
        cout<<count<<"\n";
    }
    

    
    
    



}