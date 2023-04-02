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
        int n,m;
        cin>>n>>m;
    
        vector<vector<int>> vec;
        
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<m;j++){
                int a;
                cin>>a;
                v.push_back(a);
            }
            vec.push_back(v);
        }
        
        
        
        int chips=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                vector<int> v1=vec[i];
                vector<int> v2=vec[j];
                
                for(int i=0;i<m;i++){
                    // cout<<v1[i]<<v2[i]<<endl;
                    chips+=abs(v1[i]-v2[i]);
                }
                // cout<<chips<<endl;
                v1.clear();
                v2.clear();
                
        
            }
        }
        cout<<chips<<"\n";
    }
        
    
    
    
    
    return 0;

    


}