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

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count=0;

    for(int i=0;i<n;i++){
        
            int sum=0;
            for(int k=i;k<n;k++){
                sum+=arr[k];

            if(sum%2==0){
                count++;
            }
            }

        
    }
    // count/=2;
    // for(int i=1;i<n;i++){
    //     if(arr[i]%2==0){
    //         count++;
    //     }

    // }
    cout<<count;
    






    
}