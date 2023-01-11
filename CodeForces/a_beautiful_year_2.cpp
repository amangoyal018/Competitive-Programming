#include<bits/stdc++.h>

using namespace std;
int main(){
    
    
    int year;
    cin>>year;
    
    while(true){
        year+=1;
        
        int a,b,c,d;
        a=(year-year%1000)/1000;//1st digit
        b=(year%1000-year%100)/100;//2nd digit
        c=(year%100-year%10)/10;//3rd digit
        d=year%10;//4th digit
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            cout<<year;
            break;

        }else{
            continue;
        }
    }
        
    
}
