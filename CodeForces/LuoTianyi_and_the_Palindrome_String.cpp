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
        bool status=false;
        for(int i=1;i<len;i++){
            if(s[i-1]!=s[i]){
                status=true;
            }

        }
        if(status){
            cout<<len-1<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
    
    

    
    
    



}