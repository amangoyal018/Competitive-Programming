#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    int n;
    cin>>n;
    vector<int> v;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt6=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a==1){
            cnt1++;
        }
        if(a==2){
            cnt2++;
        }
        if(a==3){
            cnt3++;
        }
        if(a==4){
            cnt4++;
        }
        if(a==6){
            cnt6++;
        }

    }
    if(cnt1!=n/3){
        cout<<-1<<"\n";
        return 0;
    }
    if(cnt2+cnt3!=n/3){
        cout<<-1<<"\n";
        return 0;
    }
    if(cnt4+cnt6!=n/3){
        cout<<-1<<"\n";
        return 0;
    }
    if(cnt2==0 and cnt6==0){
        cout<<-1;
        return 0;
    }
    if(cnt3>cnt6){
        cout<<-1;
        return 0;
    }
    

    while(cnt3){
        

        cout<<1<<" ";
        if(cnt3){
            cout<<3<<" ";
            cnt3--;
        }
        if(cnt6){
            cout<<6<<" ";
            cnt6--;
            cout<<"\n";
            continue;
        }
        if(cnt4){
            cout<<4<<" ";
            cnt4--;
            cout<<"\n";
        }
    }
    while(cnt2){
        cout<<1<<" ";
        
        if(cnt2){
            cout<<2<<" ";
            cnt2--;
        }
        if(cnt4){
            cout<<4<<" ";
            cnt4--;
            cout<<"\n";
            continue;
        }
        if(cnt6){
            cout<<6<<" ";
            cnt6--;
            cout<<"\n";
        }
    }
    


    

    
    
    



}