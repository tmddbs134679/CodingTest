#include <string>
#include <vector>

using namespace std;



int solution(vector<vector<string>> board, int h, int w) 
{
    int answer = 0;
    
    int maxsize = board.size();
    int dx[4] = {-1 ,1 ,0, 0};
    int dy[4] = {0 ,0 ,-1 ,1};

    string checkColor = board[h][w];
    
    for(int i =0; i < 4; i++)
    {
        if(h + dx[i] < 0 || w + dy[i] < 0 || h + dx[i] >= maxsize || w + dy[i] >= maxsize)
            continue;
        
        if(board[h + dx[i]][w + dy[i]] == checkColor)
        {
            answer++;
        }
            
    }
    

    
    return answer;
}