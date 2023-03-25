#include <bits/stdc++.h>
using namespace std;


int maxfun(vector<int> seats,int num){
    int max=0;

    for(int i=1;i<=num;i++){
        sort(seats.begin(),seats.end(),greater<int>());
        max+=seats[0];
        seats[0]--;


    }
    return max;


}
int minfun(vector<int> seats,int num,int planes){
    int min=0;

    for(int i=0;i<num;i++){
        sort(seats.begin(),seats.end());
        int a;
        int b;


        for(int j=0;j<planes;j++){
            a=seats[j];
            if(a<=0){
                continue;

            }else{
                min+=a;
                seats[j]--;
                break;
            }
        }

    }


        
        

    return min;


}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num,planes;
    cin>>num>>planes;

    vector<int> seats;

    for(int i=0;i<planes;i++){
        int a;
        cin>>a;
        seats.push_back(a);

    }

    int maxvalue=maxfun(seats,num);
    // for(auto x:seats){
    //     cout<<x<<endl;
    // }
    int minvalue=minfun(seats,num,planes);

    cout<<maxvalue<<" "<<minvalue<<endl;



    
    
}