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
        int n;
        cin>>n;

        vector<int> v1;
        vector<int> v2;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v2.push_back(a);
        }

        for(int i=0;i<n;i++){
            if(v1[i]<=v2[i]){
                continue;

            }else{
                int c=v1[i];
                v1[i]=v2[i];
                v2[i]=c;
            }
        }

        int max1=v1[0],max2=v2[0];

        for(auto x:v1){
            if(x>max1){
                max1=x;
            }
        }
        for(auto x:v2){
            if(x>max2){
                max2=x;
            }
        }

        if(max1==v1[n-1] and max2==v2[n-1]){
            cout<<"yes"<<endl;

        }else{
            cout<<"no"<<endl;
        }



    }

    
    
}