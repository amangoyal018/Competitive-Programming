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


        vector<int> v;

        for(int i=1;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        

        vector<int> ans(n);
        ans[0]=v[0];
        ans[n-1]=v[n-2];

        for(int i=0;i<n-2;i++){
            int min1=min(v[i],v[i+1]);
            ans[i+1]=min1;
        }

        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";
    }



    
}