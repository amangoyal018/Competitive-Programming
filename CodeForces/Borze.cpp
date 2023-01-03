#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string code;
    string n;
    cin>>code;

    for(int i=0;i<code.length();i++){
        if(code[i]=='.'){
            n+='0';
        
        }else if(code[i]=='-'){
            if (code[i+1]=='.'){
                n+='1';
                i++;
            }else{
                n+='2';
                i++;
            }
        }

        
    }
    cout<<n<<endl;
    
    
}            