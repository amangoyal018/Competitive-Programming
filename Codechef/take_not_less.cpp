#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int max;
        for(int i=0;i<n;i++){
            if(i==0){
                max=arr[i];
            }else{
                if(arr[i]>max){
                    max=arr[i];
                }
            }

            
        }
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(arr[i]==max){
                maxcount++;
            }
        }
        if(maxcount%2==0){
            cout<<"zenyk";
        }else{
            cout<<"marichka";
        }
        cout<<"\n";

        
        

    }

}
