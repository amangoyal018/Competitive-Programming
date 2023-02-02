#include<bits/stdc++.h>
using namespace std;


bool is_valid_pos(int i,int j){
    if(i>=0&&j>=0&&i<3&&j<3){
        return 1;

    }else{
        return 0;
    }
}
void fun(vector<vector<int>> &start,int i,int j){

    if(is_valid_pos(i,j)){
        if(start[i][j]==0){
            start[i][j]=1;
        }else{
            start[i][j]=0;
        }  
    }
    if(is_valid_pos(i-1,j)){
        if(start[i-1][j]==0){
            start[i-1][j]=1;
        }else{
            start[i-1][j]=0;
        }
    }
    if(is_valid_pos(i,j-1)){
        if(start[i][j-1]==0){
            start[i][j-1]=1;
        }else{
            start[i][j-1]=0;
        }
    }
    if(is_valid_pos(i+1,j)){
        if(start[i+1][j]==0){
            start[i+1][j]=1;
        }else{
            start[i+1][j]=0;
        }
    }
    if(is_valid_pos(i,j+1)){
        if(start[i][j+1]==0){
            start[i][j+1]=1;
        }else{
            start[i][j+1]=0;
        }
    }
}

int main(){

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> mat1(3,vector<int>(3));
    vector<vector<int>> start(3,vector<int>(3,1));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int input1;
            cin>>input1;
            mat1[i][j]=(input1%2);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int x;
            x=mat1[i][j];
            if(x==1){
                fun(start,i,j);
            }else{
                continue;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<start[i][j]<<"";
        }
        cout<<"\n";
    }
    return 0;
}            