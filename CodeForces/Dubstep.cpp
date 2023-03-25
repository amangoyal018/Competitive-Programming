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

    string s;
    cin>>s;

    bool istrue = true;

    for(int i=0;i<s.length();i++){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i+=2;
            if(!istrue){
                cout<<" ";
            }
            continue;
        }else{
            istrue=false;
            cout<<s[i];
            
        }
    }
    
    
    
}