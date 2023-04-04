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
        int n;//lines
        int m;//parabolas
        cin>>n>>m;

        vector<int> v;

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }

        while(m--){
            int a,b,c;
            cin>>a>>b>>c;
            int flag=0;
            int ans;



            if(c<0){
                cout<<"NO"<<"\n";
                continue;
            }else{
                for(auto x:v){
                    if(x>b-2*(sqrt(a*c)) and x<b+2*(sqrt(a*c))){
                        flag=1;
                        ans=x;
                        break;
                    }
                }
            }
            

        if(flag){
            cout<<"YES\n";
            cout<<ans<<"\n";
        }else{
            cout<<"NO\n";
        }
        }
    }

    



}
