#include <bits/stdc++.h>
using namespace std;

bool isgood(vector<int> &v1){




}

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
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int good=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int count=0;
                for(int k=i;k<=j;k++){
                    count++;

                    // vector<int> v1;

                    if(v[k]==count){
                        good=1;
                        break;
                    }
                }
                if(good==1){
                    break;
                }
            if(good==1){
                break;
            }
            
            }
        }

        if(good){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }


    }

    return 0;
}