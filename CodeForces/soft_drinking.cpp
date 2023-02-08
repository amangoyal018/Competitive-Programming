#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max1=max(d,max(max(a,c),b));
    if(max1==d){
        cout<<d-a<<" ";
        cout<<d-b<<" ";
        cout<<d-c<<" ";
    }else if(max1==c){
        cout<<c-a<<" ";
        cout<<c-b<<" ";
        cout<<c-d<<" ";
    }else if(max1==b){
        cout<<b-a<<" ";
        cout<<b-c<<" ";
        cout<<b-d<<" ";
    }else if(max1==a){
        cout<<a-b<<" ";
        cout<<a-c<<" ";
        cout<<a-d<<" ";
    }
    
    
    













    return 0;
    

}            