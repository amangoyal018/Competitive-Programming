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
        int len;
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        // for(int i=0;i<len;i++){
        //     cout<<arr[i];
        // }
        int max;
        for(int i=0;i<len;i++){
            if(i==0){
                max=arr[i];
            }else{
                if(arr[i]>max){
                    max=arr[i];

                }
                
            }
            
        }
        int min;
        for(int i=0;i<len;i++){
            if(i==0){
                min=arr[i];
            }else{
                if(arr[i]<min){
                    min=arr[i];

                }
                
            }
            
        }
        cout<<max-min<<"\n";
        
    }

    













    return 0;
    

}            