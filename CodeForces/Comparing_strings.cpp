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

    string s1,s2;
    cin>>s1>>s2;

    int len1=s1.length();
    int len2=s2.length();
    int count=0;
    if(len1!=len2){
        cout<<"NO";
        return 0;
    }else{
        vector<int> v;

        for(int i=0;i<len1;i++){
            if(s1[i]!=s2[i]){
                v.push_back(i);
                count++;
            }

        }
        if(count==2){
            int a=v[0];
            int b=v[1];
            // cout<<s1[a];
            // cout<<s2[b];
            // cout<<s1[b];
            // cout<<s2[a];
            
            if(s1[a]==s2[b] and s1[b]==s2[a]){
                cout<<"YES";
                return 0;
            }
            cout<<"NO";
            return 0;
        }else{
            cout<<"NO";
        }
    }
    

    
    
    



}