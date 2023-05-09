#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

ARA_ARA

int n;
cin>>n;
int cnt1=0, cnt2=0;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(a==100){
        cnt1++;
    }else{
        cnt2++;
    }
}
// cout<<cnt1;
if(cnt1%2!=0){
    cout<<"NO";
    return 0;
}
if(cnt2%2!=0 and (cnt1%2!=0 or cnt1==0)){
    cout<<"NO";
}else{
    cout<<"YES";
}



    
    
    



}