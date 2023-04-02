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
    vector<int> coins;

    // taking input
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum+=a;
        coins.push_back(a);
    }
    //sorting from largest to smallest
    sort(coins.begin(), coins.end(), greater<int>());

    int value=0;
    int count=0;



    for(auto x:coins){
        count++;
        value+=x;
        sum-=x;
        if(value>sum){
            break;
        }

    }
    cout<<count;



    return 0;
}