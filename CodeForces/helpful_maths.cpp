#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string ans="";

    for(int i=0;i<s.length();i+=2){
        if(s[i]=='1'){
            ans+="1+";
            
        }
    }
    for(int i=0;i<s.length();i+=2){
        if(s[i]=='2'){
            ans+="2+";
            
        }
    }
    for(int i=0;i<s.length();i+=2){
        if(s[i]=='3'){
            ans+="3+";
        }
    }
    if(ans[ans.length()-1]=='+'){
        ans=ans.substr(0,ans.length()-1);
    }
    cout<<ans;
    

    

    
    













    return 0;
    

}            