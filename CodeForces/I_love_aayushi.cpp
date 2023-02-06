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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,min,count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            max=arr[0];
            min=arr[0];
        }else{
            if(arr[i]>max){
                count++;
                max=arr[i];
            }else if(arr[i]<min){
                count++;
                min=arr[i];
            }
        }
    }
    cout<<count;
    
    













    return 0;
    

}            