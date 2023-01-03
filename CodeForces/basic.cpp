#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // string a="aman";
    // cout<<a<<endl;
    // int b=a.find("amn");
    // cout<<b;
    int x=1234,a,b,c,d;
    d=(x-x%1000)/1000;//1st digit
    a=(x%1000-x%100)/100;//2nd digit
    b=(x%100-x%10)/10;//3rd digit
    c=x%10;//4th digit
    cout<<d<<" "<<a<<" "<<b<<" "<<c;




    
    
}            