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
        string s;

        cin>>s;

        string result="";

        set<char> set1;

        for(auto x:s){
            set1.insert(x);

        }
        for(auto x:set1){
            cout<<x;
            int count=0;
            for(auto y:s){
                if(x==y){
                    count++;
                }
            }
            if(count%2!=0){
                result+=x;
            }else{
                result+=x;
                result+=x;

            }
        }
        cout<<result<<"\n";
    }

    
    
    

}            