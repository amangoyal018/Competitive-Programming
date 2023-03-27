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
        int n;
        cin>>n;


    
        int c=1;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int s;
            cin>>s;
            for(int j=0;j<s;j++){
                int a;
                cin>>a;
                m[a]=c;
            }
            c++;

        }
        vector<int> v(n,0);
        for(auto i:m){
            if(i.second<=n){
                v[i.second-1]= i.first;
            }
        }
        int b=1;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                b=0;
            }
        }
        if(b==0){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}