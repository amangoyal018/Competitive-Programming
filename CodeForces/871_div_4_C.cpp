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
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            pair<int,int> p={a,b};
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        bool status=false;
        int time=0;
        
        for(auto x:v){
            if(x.second==11){
                time+=x.first;
                // cout<<x.first;
                status=true;
                break;
            }

        }
        int time1=0;
        for(auto x:v){
            if(x.second==1){
                time1+=x.first;
                break;
            }

        }
        int time2=0;
        for(auto x:v){
            if(x.second==10){
                time2+=x.first;
                break;
            }

        }
        // cout<<time;
        
        
        

        
            
        if((time1==0 or time2==0) and time==0){
            cout<<-1<<"\n";
        }else{
            if(status){
                if(time1==0 or time2==0){
                    cout<<time<<"\n";
                    continue;
                }

                cout<<min(time1+time2,time)<<"\n";
            }else{
                cout<<(time1+time2)<<"\n";

            }
        }

        

        }
}
    

    
    
    



