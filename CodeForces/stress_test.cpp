#include<bits/stdc++.h>
using namespace std;
int FindSecondLargestElement(int arr[],int n){
        if(n<=1){
            return -1;
        }
        sort(arr,arr+n);
        return arr[n-2];
    }
int Brute_solution(int arr[],int n){
    if(n<=-1){
        return -1;

    }
    int first=arr[0];
    for(int i=0;i<n;i++){
        first=max(first,arr[i]);
    }
    int second = -1;
    for(int i=0;i<n;i++){
        if(first!=arr[i]){
            second =max(second,arr[i]);
        }
    }
    return second;
}
int main(){

    srand(time(NULL));
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    
    int count=1;
    while(count <=1000){

        int n=rand()%5 + 1;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=rand()  %10+1;
        }
        int myans=FindSecondLargestElement(arr,n);
        int correctans=Brute_solution(arr,n);
        if(correctans!=myans){
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
            break;  
        }
        count++;
    }
    

    
    

}            