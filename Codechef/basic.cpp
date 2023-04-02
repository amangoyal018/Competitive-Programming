#include<bits/stdc++.h>
using namespace std;
int xorfind(int x, int y)
{
    return (x | y) & (~x | ~y);
}





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
        bool temp=false;

        for(int i=1;i<=10;i++){
            if(xorfind(a,i)<xorfind(b,i) and xorfind(b,i)<xorfind(c,i)){
                cout<<i<<"\n";
                temp=true;
                break;
            }else{
                continue;
            }
        }
        if(!temp){

            cout<<-1<<"\n";
        }

        // cout<<xorfind(3,0);
        
    }

    
    
    
    

}            