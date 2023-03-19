#include <bits/stdc++.h>
using namespace std;


bool is_int(float n){
    int m=n;
    if(m==n){
        return 1;
    }else{
        return 0;
    }
}

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
    vector <float> v1;   //size n
    vector <float> v2;   //size m
    for(int i=0;i<n;i++){
        float a;
        cin>>a;
        v1.push_back(a);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        float a;
        cin>>a;
        v2.push_back(a);
    }

    
    int max_int=0;
    for(auto x:v1){
        for(auto y:v2){
            // cout<<x<<endl;

            float z=y/x;
            // cout<<z<<endl;
            if(is_int(z)){
                if(max_int<z){
                    max_int=z;
                }
            }
            


        }
    }
    int count=0;
    for(auto x:v1){
        for(auto y:v2){
            float z=y/x;
            if(z==max_int){
                count++;
            }
            


        }
    }
    cout<<count;




}