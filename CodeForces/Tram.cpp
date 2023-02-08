#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int capacity=0;
    int mcapacity;

    for(int i=0;i<n;i++){
        int in;
        int out;
        cin>>out>>in;
        capacity+=(in-out);
        if(i==0){
            mcapacity=capacity;
        }else{
            if(capacity>mcapacity){
                mcapacity=capacity;
            }
        }
    }
    cout<<mcapacity;
    













    return 0;
    

}            