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
    long long int n;
    cin >> n;
    // vector<int> vec;
    // for (int i = 1; i <= n; i++)
    // {
    //     if ((i) % 2 != 0)
    //     {
    //         vec.push_back(i);
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if ((i) % 2 == 0)
    //     {
    //         vec.push_back(i);
    //     }
    // }
    // int k;
    // cin>>k;
    // cout<<vec[k-1];

    long long int k;
    cin>>k;
    if(k>n-n/2){
        k-=(n-n/2);
        cout<<2*k;
    }else{
        cout<<2*k-1;
    }
    
}
