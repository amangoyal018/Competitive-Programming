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
    string s;
    cin>>s;
    bool status=true;

    for(int i=0;i<s.length();i++){

        if(s[i]=='0' and status){
            status=false;
            continue;
        }
        if(status and i==s.length()-1){
            continue;
        }
        cout<<s[i];
        
    }
    
    
    

    
    
    



}