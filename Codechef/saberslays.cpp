#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;


    while(t--){
        int dungeons,queries;
        cin>>dungeons>>queries;

        vector<int> v1;

        for(int i=0;i<dungeons;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }

        for(int i=0;i<queries;i++){
            int l,r;
            cin>>l>>r;
            vector<int> v2;
            for(int i=max(l-1,0);i<r;i++){
                v2.push_back(v1[i]);
            }
            int max=*max_element(v2.begin(),v2.end());

            

            int d=max;
            int ans=max;
            for(auto x:v2){
                
                if(d>x){
                    continue;
                }else if(d==x){
                    d-=1;
                }else{
                    ans+=(x-d);
                    d+=(x-d);
                    d--;

                }
                
            }
            cout<<ans<<"\n";

        }


    }

}
