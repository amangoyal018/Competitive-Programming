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

        int a,b;
        cin>>a>>b;
        int count=0;
        if(a%b==0){
            cout<<count<<"\n";
            
        }else{

            cout<<b-(a%b)<<"\n";
        }
        


    }

    













    return 0;
    

}            