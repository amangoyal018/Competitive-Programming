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

    int t;
    cin>>t;
    

    while(t--){
        
    long long int n,q;
    cin>>n>>q;
    // cout<<n<<q;



    vector<int> v;
    int arr[n];



    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);

        if(i!=0){
            arr[i]=arr[i-1];
            arr[i]+=a;
        }else{
            arr[i]=a;
        }
        // cout<<v[i];
    }



    for(int i=0;i<q;i++){
        long long int l,r,k;
        cin>>l>>r>>k;
        long long int sum=0;

        
        sum+=k*(r-l+1);
        if(l==1){

        }else{

            sum+=arr[l-2];
        }
        sum+=arr[n-1]-arr[r-1];

        if(sum%2!=0){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }

    }
    }

}