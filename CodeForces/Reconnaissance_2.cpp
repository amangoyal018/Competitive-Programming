#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==2){
        cout<<1<<" "<<2;
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=abs(arr[0]-arr[1]);
    // cout<<min<<endl;


    for(int i=1;i<n;i++){

        if(i==(n-1)){
            if(abs(arr[i]-arr[0])<min){
                min=abs(arr[i]-arr[0]);
                break;
                // cout<<min<<endl;
                
                

                
            }
        }
        if(abs(arr[i]-arr[i+1])<min){
            min=abs(arr[i]-arr[i+1]);
            
            // cout<<min<<endl;
            

            
        }

    }
    // cout<<min<<endl;
    for(int i=0;i<n;i++){

        if(i==n-1){
            if(abs(arr[i]-arr[0]==min)){
                cout<<n<<" "<<1;
                break;
                

                
            }
        }
        if(abs(arr[i]-arr[i+1])==min){
            cout<<i+1<<" "<<i+2;
            break; 
            
        }

    }


}