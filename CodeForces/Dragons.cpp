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

    int strength, numdrag;
    cin >> strength >> numdrag;

    pair<int,int> pairarr[numdrag];
    for(int i=0;i<numdrag;i++){
        int a,b;
        cin>>a>>b;
        pairarr[i]={a,b};
    }
    sort(pairarr,pairarr + numdrag);


    for(int i=0;i<numdrag;i++){
        int power = pairarr[i].first;
        int bonus = pairarr[i].second;
        if(strength>power){
            strength+=bonus;

        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}