#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1<<" ";
        return 0;
    }
    

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i+1<<" ";
        }else{
            cout<<i-1<<" ";
        }

    }
    
    
    












    
    return 0;
    

}            