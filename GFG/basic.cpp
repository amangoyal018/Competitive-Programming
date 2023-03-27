#include <bits/stdc++.h>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n=5;
    int arr[5]={1,2,4,8,16};

    for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum+=arr[j];
            }
            if(arr[i]>sum){
                continue;
            }else{
                cout<< 0;
                return 1;
            }
        }
        cout<<1;

    
}
