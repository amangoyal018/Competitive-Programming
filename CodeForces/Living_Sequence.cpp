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

        long long int k;
        cin>>k;

        string ans="";

        if(k==0){
            ans="0";
        }else{
            while(k!=0){
                int remainder=k%9;
                ans=to_string(remainder) +ans;
                k/=9;

            }

        }

        int len=ans.length();

        for(int i=0;i<len;i++){
            if(ans[i]-48>3){
                cout<<ans[i]-47;
            }else{
                cout<<ans[i];
            }
        }
        cout<<"\n";

    }

}