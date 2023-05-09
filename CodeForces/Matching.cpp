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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ARA_ARA

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;

        if(s[0]=='0'){
            cout<<0<<"\n";
            continue;
        }
        int ans=1;
        int cnt=0;
        for(auto x:s){
            if(x=='?'){
                cnt++;
            }
        }
        if(s[0]=='?'){
            ans*=9;
            cnt--;
        }
        if(cnt){
            ans*=round(pow(10,cnt));
        }
        cout<<ans<<"\n";
    }



}