#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int count=0;
    for(int i=1;i<=e;i++){
        if(i%a==0||i%b==0||i%c==0||i%d==0){
            count++;
        }
    }
    cout<<count;
    
    













    return 0;
    

}            