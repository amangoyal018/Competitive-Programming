#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(n) for(int i=0;i<n;i++);
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
        // cout<<s<<endl;
        

        int len=s.length();
        int ans=0;
        if(len==1 and s[0]=='^'){
            ans++;
        }
        if(s[0]=='_'){
            ans++;
        }

        for(int i=1;i<len;i++){
            if(s[i-1]=='_' and s[i]=='_'){
                ans++;
            }

        }
        if(s[len-1]=='_'){
            ans++;
        }
        cout<<ans<<"\n";
    }
    
    
}