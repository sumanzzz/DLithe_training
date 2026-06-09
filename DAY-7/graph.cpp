/*
    1 0 0 0 0 0 0 0 
    0 0 0 1 0 0 0 0 
    0 0 0 1 1 0 0 0 
    1 1 1 0 0 0 0 0
    0 0 1 0 0 0 0 0
    0 0 1 0 0 0 0 0 
    0 0 0 0 0 0 0 0
*/
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const vector<int> dr = {-1 , 1 , 0 , 0};
const vector<int> dc = {0 , 0 , -1 , 1};

int main(){
    vector<vector<int>> grid = {
        
        
        {1, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0 ,0, 1, 0, 0, 0, 0, 0},
        {0 ,0 ,1 ,0 ,0 ,0 ,0 ,0},
        {0 ,0, 0, 0, 0 ,0 ,0 ,0}
    };
    int n = grid[0].size();
    int m = grid.size();

    vector<vector<int>> visited(n , vector<int>(m ,0));
    queue<pair<int ,int>> q;
    int count;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ;j++){
            if(grid[i][j] == 1 && !visited[i][j]){
                q.push({i , j});
                visited[i][j] = 1;
            }
             count = 1;
            while(!q.empty()){
                auto start = q.front();
                q.pop();

                int row  = start.first;
                int col  = start.second;

                for(int i = 0 ; i < 4 ; i++){
                    for(int j = 0 ; j < 4 ;j++){
                        int nr = row + dr[i];
                        int nc = col + dc[i];

                        if(nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
                        
                        if(grid[nr][nc] == 1 && !visited[nr][nc]){
                            count++;
                            visited[nr][nc] = 1;
                        }
                    }
                }
            }
        }
        return count;
    }

}