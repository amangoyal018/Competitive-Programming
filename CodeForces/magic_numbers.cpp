#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string  s;
    cin>>s;

    int len=s.length();

    for(auto x:s){
        if(x!='1' and x!='4'){
            // cout<<x;
            
            cout<<"NO";
            return 0;
        }

    }

    for(int i=0;i<len;i++){
        // cout<<i<<endl;
        if(s[0]!='1'){
            cout<<"NO";
            return 0;

        }
        if(i+2>=len){
            break;
        }
        if(s[i]=='4' and s[i+1]=='4' and s[i+2]=='4'){
            cout<<"NO";
            return 0;

        }

    }
    cout<<"YES";


    
    

}