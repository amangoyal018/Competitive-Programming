#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector <int> vec(n);
        int count1=0,count2=0;

        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]==2){
                count2++;
            }
        }
        int k=0;
        for(int i=0;i<n;i++){
            k++;
            if(vec[i]==2){
                count2--;
                count1++;
            }
            if(count1==count2){
                cout<<k<<"\n";
                break;
            }else if(i==n-1){
                cout<<-1<<"\n";
            }
            
        }
    }
    

}            