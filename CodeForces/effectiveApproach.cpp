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
    int N=int(1e5+3);
    int arr[N];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[a]=i+1;
    }

    int m;
    cin>>m;

    long long int vasya=0,petya=0;
    for(int i=1;i<=m;i++){
        int b;
        cin>>b;
        vasya+=arr[b];
        petya+=n-arr[b]+1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]!=b){
        //         vasya++;
        //     }else{
        //         vasya++;
        //         break;
        //     }
        // }
        // for(int i=(n-1);i>=0;i--){

        //     if(arr[i]!=b){
        //         petya++;
        //     }else{
        //         petya++;
        //         break;
        //     }
        // }


    }
    cout<<vasya<<" "<<petya;



    
}