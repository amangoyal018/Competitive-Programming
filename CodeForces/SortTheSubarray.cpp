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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ARA_ARA

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
        int ind1=-1;
        int ind2=-1;

        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                ind1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v1[i]!=v2[i]){
                ind2=i;
                break;
            }
        }
        vector<int> v3;
        for(int i=ind1;i<=ind2;i++){
            v3.push_back(v1[i]);
        }
        int max=*max_element(v3.begin(),v3.end());
        int min=*min_element(v3.begin(),v3.end());

        if(ind1!=-1){
            for(int i=ind1-1;i>=0;i--){
                if(v1[i]<=min){
                    ind1--;
                    min=v1[i];

                }
            }
        }
        if(ind2!=-1){
            for(int i=ind2+1;i<n;i++){
                if(v1[i]>=max){
                    ind2++;
                    max=v1[i];
                }
            }
        }
        cout<<ind1+1<<" "<<ind2+1<<"\n";
    }
    



}