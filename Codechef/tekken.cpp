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
        int a,b,c;
        cin>>a>>b>>c;
        int x=min(b,c);
        b-=x;
        c-=x;
        int y=min(a,b);
        a-=y;
        b-=y;
        int z=min(a,c);
        a-=z;
        c-=z;
        if(a>0){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
    
    

}            