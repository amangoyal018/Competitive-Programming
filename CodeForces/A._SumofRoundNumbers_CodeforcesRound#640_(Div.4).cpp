#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int ab;
    cin>>ab;
    for(int l=1;l<=ab;l++){
        int i;
        cin>>i; 
        int count=0;
        int w=(i/1000)*1000;
        int x=((i%1000)/100)*100;
        int y=((i%100)/10)*10;
        int z=i%10;
        if (w>0){
            count+=1;
        }
        if (x>0){
            count+=1;
        }
        if (y>0){
            count+=1;
        }
        if (z>0){
            count+=1;
        }
        cout<<count<<endl;
        if (w>0){
            cout<<w<<" ";
        }
        if (x>0){
            cout<<x<<" ";
        }
        if (y>0){
            cout<<y<<" ";
        }
        if (z>0){
            cout<<z<<" ";
        }
        cout<<endl;
 
    }
}