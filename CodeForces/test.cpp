#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,int n,int m)
{
    cout << x << ' ' << y << "\n";
    if(x<0 or x>=n){
        return 0;
    }
    if(y<0 or y>=m){
        return 0;
    }
    return 1;

}
int counter = 0;

// x row
// y coloumn
bool isAns(int x,int y,int cnt ,vector<vector<char>>& board, string word){
    if(cnt == word.size()){
        cout << "hello";
        return true;
    }

    if(counter >1){
        return true;
    }

    if(isSafe(x,y,board.size(),board[0].size()) and board[x][y] == word[cnt]){

        char temp = board[x][y];
        // cout << temp << "\n";
        

        board[x][y] = '1';
        if(isAns(x,y + 1,cnt + 1,board,word) or isAns(x,y-1,cnt + 1,board,word)
        or isAns(x + 1,y,cnt + 1,board,word) or isAns(x - 1,y,cnt + 1,board,word)){
            return true;
        }
        board[x][y] = temp;
    }
    return false;
}


bool exist(vector<vector<char>>& board, string word) {
    int n = board.size();
    int m = board[0].size();

    int cnt = 0;

    for(int i = 0 ; i < n;i++){
        for(int j=0;j<m;j++){
            if(isAns(i,j,0,board,word)){
                return true;
            }
            // break;
            // cout << board[i][j] << " ";
            
        }
        // cout << "\n";
    }
    return false;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};

    cout<< exist(board,"SEE");


    
}