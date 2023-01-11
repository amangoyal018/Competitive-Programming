#include<iostream>
#include<string>
using namespace std;
bool to_check_all_distinct(int x){
    int a,b,c,d;
    a=(x-x%1000)/1000;//1st digit
    b=(x%1000-x%100)/100;//2nd digit
    c=(x%100-x%10)/10;//3rd digit
    d=x%10;//4th digit
    if(a==b||a==c||a==d||b==c||b==d||c==d){
        return false;

        
    }else{
        return true;
    }
}
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string year1,year2;
    cin>>year1;
    int year11=stoi(year1);

    for(int i=(year11+1);i<=9000;i++){
        if(to_check_all_distinct(i)==true){
            cout<<i;
            break;
        }else{
            continue;
        }

        // year2=to_string(i);
        // for(int j=0;j<4;j++){

        // }
    

    }

}            