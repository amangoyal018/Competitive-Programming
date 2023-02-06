#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num1;
    int k;
    cin>>num1>>k;
    int arr[num1];
    for(int i=0;i<num1;i++){
        cin>>arr[i];

    }
    int kelmnt=arr[k-1];
    // cout<<kelmnt<<endl;
    int count=0;
    for(int i=0;i<num1;i++){
        int a=arr[i];
        if(arr[i]>=kelmnt&&arr[i]>0){
            count++;
        }else{
            break;
        }


    }
    cout<<count;

    












    
    return 0;
    

}            