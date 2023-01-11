#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    for(int i;i<=n;i++){
        cout<<i<<" ";
        for(int j=i+1;j<=(n*n+n)/2;j++){

        }
    }
}
// output should be 
// 1
// 2  7
// 3  8 12
// 4  9 13 16
// 5 10 14 17 19
// 6 11 15 18 20 21