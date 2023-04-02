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

    vector<int> v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a); 
    }

    unordered_set<int> set1;
    int valid=0;

    for(auto x:v){
        set1.insert(x);
    }
    vector<int> dup;
    for(auto x:set1){
        dup.push_back(x);
    }
    sort(dup.begin(),dup.end());
    vector<int> ans;


    for(auto x:dup){
        int stat=1;
        
        vector<int> vec;
        for(int i=0;i<n;i++){
            if(x==v[i]){
                vec.push_back(i+1);
            }
        }
        if(vec.size()==1){
            valid++;
            ans.push_back(x);
            ans.push_back(0);
            continue;

        }
        int cd;

        cd=vec[1]-vec[0];
        for(int i=1;i<vec.size()-1;i++){
            if(2*vec[i]==vec[i-1] + vec[i+1]){
                continue;
            }else{
                stat=0;

            }

        }
        if(stat==0){
            continue;
        }else{
            valid++;
            ans.push_back(x);
            ans.push_back(cd);
        }

        
        
    }
    cout<<valid<<endl;

    
    for(int i=0;i<valid*2;i+=2){
        cout<<ans[i]<<" "<<ans[i+1]<<endl;

    }

}