#include <bits/stdc++.h>
using namespace std;

int returnXOR(int x,int y){
    return (x|y) & (~x|~y);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        // cout<<x<<endl;
        int arr[n];
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a!=-1){
                arr[i]=a;
            }else{
                arr[i]=x;
            }
            
        }
        // int a=arr[0];
        int result=arr[0];

        for(int i=1;i<n;i++){
            int b=arr[i];
            // b=arr[i];
            result=returnXOR(result,b);

            
        }
        cout<<result<<endl;

        
    }






    
}