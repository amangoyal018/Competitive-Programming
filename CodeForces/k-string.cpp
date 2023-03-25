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
    int k;
    string s;
    cin>>k>>s;

    set<char> set1;

    for(auto x:s){
        set1.insert(x);
    }
    int var=1;
    string result;
    
    for(auto x:set1){
        
        int count=0;

        for(auto y:s){
            if(x==y){
                count++;
            }

        }
        if(count%k==0){
            int alpha=count/k;
            for(int i=0;i<alpha;i++){
                result+=x;
            }
            
            continue;
        }else{
            var=0;
        }
    }

    if(var==1){
        for(int i=0;i<k;i++){
            cout<<result;
        }
    }else{
        cout<<-1;
    }


}