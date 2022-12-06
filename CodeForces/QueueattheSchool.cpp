#include<iostream>
#include<cmath>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number_of_students;
    int time;
    string order;
    cin>>number_of_students>>time;
    cin>>order;
    string new1="";
    int a,b;
    a=new1.length();
    for(int j=0;j<time;j++){
        for(int i=1;i<order.length();i++){
            if(b-a==2){
                a=new1.length();
                continue;
            }else{
                a=new1.length();
            }
            if (order[i]=='B'){
                if (order[i+1]=='G'){
                    new1=new1+"GB";
                }else if (order[i+1]=='B'){
                    new1=new1+"BB";
                }else{
                    new1=new1+"B";
                }
            }else{
                new1=new1+"G";
            }
            b=new1.length();

        }
        order=new1;
        new1="";

    }
    cout<<order;

// failing in test case 6 dont know the reason



        







}