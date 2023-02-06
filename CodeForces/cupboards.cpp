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

    int arrl[n];
    int arrr[n];
    for(int i=0;i<n;i++){
        cin>>arrl[i];
        cin>>arrr[i];
    }
    int countl=0,countr=0;
    for(int i=0;i<n;i++){
        if(arrr[i]==1){
            countr++;


        }if(arrl[i]==1){
            countl++;
        }
    }
    int l,r;
    if(countr==0||countr==n){
        r=0;
    }else{
        r=countr<n-countr?countr:n-countr;
    }
    if(countl==0||countl==n){
        l=0;
    }else{
        l=countl<n-countl?countl:n-countl;
    }
    
    

    int x=l+r;
    cout<<x;
    
    













    return 0;
    

}            