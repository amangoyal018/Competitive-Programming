#include<bits/stdc++.h>
using namespace std;




int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,min,count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            max=arr[0];
            
        }else{
            if(arr[i]>max){
                max=arr[i];

            }else{continue;}
        }
    }
    for(int i=0;i<n;i++){
        if(i==0){
            min=arr[0];
            
        }else{
            if(arr[i]<min){
                min=arr[i];

            }else{continue;}
        }
    }
    while(arr[0]!=max){
        count++;
        for(int i=1;i<n;i++){
            int backup;
            if(arr[i]==max){
                backup=arr[i-1];
                arr[i-1]=max;
                arr[i]=backup;
                break;
            }
        }
    }
    while(arr[n-1]!=min){
        count++;
        for(int i=n-1;i>=0;i--){
            int backup;
            if(arr[i]==min){
                backup=arr[i+1];
                arr[i+1]=min;
                arr[i]=backup;
                break;
            }
        }
    }
    
    cout<<count;
    
    













    
    return 0;
    

}            