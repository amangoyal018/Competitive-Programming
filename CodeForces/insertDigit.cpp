#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int len;
        int d;
        cin>>len>>d;
        string s;
        cin>>s;

        string ans="";
        int flag=-1;

        for(int i=0;i<len;i++){
            if(s[i]-48<d){
                flag=i;
                break;
            }
            
            
            
            
            
        }
        if(flag==-1){
            cout<<s<<d<<"\n";
        }else{
            s.insert(flag,to_string(d));
            cout<<s<<endl;
        }
        

    }
    

    
}