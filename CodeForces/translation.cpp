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

    string s,t;
    cin>>s>>t;
    string a="";
    for(int i=0;i<s.length();i++){
        a=s[i]+a;
    }
    if(a==t){
        cout<<"YES";

    }else{
        cout<<"NO";
    }
    

}