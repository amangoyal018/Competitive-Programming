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

    int groups;
    cin>>groups;

    vector<int> v;

    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;

    for(int i=0;i<groups;i++){

        int a;
        cin>>a;
        if(a==4){
            count4++;
        }
        if(a==3){
            count3++;
        }
        if(a==2){
            count2++;
        }
        if(a==1){
            count1++;
        }
        v.push_back(a);
    }
    int num=count4+count3;
    if(count1==0 and count2==0){
        cout<<num;
        return 0;
    }
    if(count1){

        count1=max(0,count1-count3);
    }
    int count22=count2/2;
    count2=count2%2;
    if(count2){
        count1-=min(2,count1);
    }
    num+=count22+count2;
    int count11=count1/4;
    count1=count1%4;
    num+=count11+min(count1,1);

    cout<<num;

    return 0;
}