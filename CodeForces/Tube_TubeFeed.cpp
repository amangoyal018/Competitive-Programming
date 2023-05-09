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
    int q;
    cin>>q;
    while(q--){
        int n,t;
        cin>>n>>t;
        vector<int> v1;//duration
        vector<int> v2;//entertainment
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v1.push_back(a+i);
            // cout<<a+i<<" ";
            

        }
        
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v2.push_back(a);
        }
        int max=-1;
        int index=-1;

        for(int i=0;i<n;i++){
            if(v1[i]<=t){
                if(v2[i]>max){
                    max=v2[i];
                    index=i;
                }

            }
            

        }
        if(index==-1){
            cout<<-1<<"\n";
            continue;
        }
        cout<<index+1<<"\n";

    }



    
    
    



}