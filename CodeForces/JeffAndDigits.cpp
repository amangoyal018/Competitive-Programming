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
    
    int cnt5=0;
    int cnt0=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==5){
            cnt5++;
        }else{
            cnt0++;
        }

        
    }
    if(cnt0==0){
        cout<<-1;
        return 0;
    }
    int b=cnt5/9;
    int c=cnt0/9;
    if(b==0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<9*b;i++){
        cout<<5;
    }

    for(int i=0;i<cnt0;i++){
        cout<<0;
    }
}