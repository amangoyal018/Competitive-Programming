#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int a,b;
    int x,y;
    cin>>a>>b>>x>>y;

    string s;
    cin>>s;

    int cntup=0;
    int cntdown=0;
    int cntleft=0;
    int cntright=0;

    if(x-a>0){
        cntright+=x-a;
    }else{
        cntleft-=x-a;
    }
    if(y-b>0){
        cntup+=y-b;
    }else{
        cntdown-=y-b;
    }
    int time=0;

    for(auto x:s){


        if(cntup==0 and cntleft==0 and cntright==0 and cntdown==0){
            break;
        }
        time++;
        if(x=='N'){
            if(cntup){
                cntup--;
            }
            
        }
        if(x=='S'){
            if(cntdown){
                cntdown--;
            }

        }
        if(x=='E'){
            if(cntright){
                cntright--;
            }

        }
        if(x=='W'){
            if(cntleft){
                cntleft--;
            }

        }
    }

    if(time<t){
        cout<<time;
        return 0;
    }

    if(cntup==0 and cntleft==0 and cntright==0 and cntdown==0){
        cout<<time;
        return 0;
    }

    cout<<-1;

    

    
}