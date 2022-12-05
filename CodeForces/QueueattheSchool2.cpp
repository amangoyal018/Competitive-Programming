#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);   
    // #endif
    int number_of_students;
    int time;
    string order;
    cin>>number_of_students>>time;
    cin>>order;

    for(int j=0;j<time;j++){
        // for(int i=1;i<n;i++){
        //     if i-1
        // }
        for(int i=0;i<number_of_students;i++){
            if(order[i]=='B' && order[i+1]=='G'){
                order[i]='G';
                order[i+1]='B';
                i++;
            }
        }
    }
    cout<<order;


}