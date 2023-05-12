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

    ARA_ARA
    int t;
    cin>>t;



    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i]
        }


        vector<int> v;

        int a=v1[0];
        v.push_back(a);

        for(int i=1;i<n;i++){
            if(v1[i]==a){
                continue;
            }else{
                a=v1[i];
                v.push_back(a);
            }

        }


        n=v.size();
        
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        
        int ans=1;


        for(int i=1;i<n;i++){
            if(v[i]>v[i-1] and v[i]>v[min(i+1,n-1)]){
                
                ans++;
            }
            if(v[i]<v[i-1] and v[i]<v[min(i+1,n-1)]){
                
                ans++;

            }
            
            


        }
        cout<<ans+1<<"\n";



    }
    
    
    

    
    
    



}