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


    int arr[100];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr[a]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}