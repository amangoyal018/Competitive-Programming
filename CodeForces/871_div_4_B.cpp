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
        vector<int> v;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int max=0;
        int count=0;

        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
                
            }else{
                count=0;
            }
            if(count>=max){
                max=count;
            }
        }
        cout<<max<<"\n";
    }
    

    
    
    



}