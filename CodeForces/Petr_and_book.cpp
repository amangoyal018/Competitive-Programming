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
    cin >> n;

    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        // cout<<arr[i]<<endl;
    }
    while (n > 0)
    {
        for (int i = 0; i < 7; i++)
        {
            int a = arr[i];
            n -= a;
            // cout<<n<<" "<<i<<endl;
            if(n<=0){
                cout<<i+1;
                return 0;
            }
        }
    }
}