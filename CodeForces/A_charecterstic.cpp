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
        int n,k;
        cin>>n>>k;
        // int c=n*(n-1)/2;
        unordered_set<int> v;
        int z;
        bool a=true;
        for(int i=n;i>=n/2;i--){
            int cnt1=i;
            int cntm1=n-i;
            z=cnt1*(cnt1-1)/2;
            
            z+=cntm1*(cntm1-1)/2;
            v.insert(z);
            if(k==z and a){
                cout<<"YES\n";

                for(int j=0;j<cnt1;j++){
                    cout<<1<<" ";
                }
                for(int j=0;j<cntm1;j++){
                    cout<<-1<<" ";
                }
                a=false;

            }
        }
        if(a){

        cout<<"NO";
        }

        cout<<"\n";


        
    }

    
    
    



}