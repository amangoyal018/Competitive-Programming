#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
 
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int n,a,b;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>n;
            if(n==1){
                a=i;
                b=j;
                
            }
        }
    }
    int c,d;
    c=3-a;
    if(c<0){
        c=c*-1;
    }
    d=3-b;
    if(d<0){
        d=d*-1;
    }
    cout<<c+d;
 
 
 
}       