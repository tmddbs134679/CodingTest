using System;
using System.Collections.Generic;

class Solution 
{
    public class Pos
 {
     public int Y, X;
     public Pos(int y, int x)
     {
         Y = y;
         X = x;
     }
 }
    
    public int solution(int[,] maps) 
    {
        int answer = 0;
        
        int n = maps.GetLength(0);
        int m = maps.GetLength(1);
        
        int[] deltaY = new int[] { -1,  0, 1, 0 };
        int[] deltaX = new int[] { 0 , -1 ,0, 1 };
        
        bool[,] visited = new bool[n, m];
        int[,] distance = new int[n, m];
    
        Queue<Pos> q = new Queue<Pos>();
        q.Enqueue(new Pos(0, 0));
        visited[0,0] = true;
        distance[0,0] = 1;
        
        while(q.Count > 0)
        {
            Pos current = q.Dequeue();
            int nowY = current.Y;
            int nowX = current.X;
            
            for(int i = 0; i < 4; i++)
            {
                int nextY = nowY + deltaY[i];
                int nextX = nowX + deltaX[i];
                
                if(nextY < 0 || nextY >= n || nextX < 0 || nextX >= m)
                    continue;
                
                if(maps[nextY, nextX] == 0 || visited[nextY, nextX])
                    continue;
                
                q.Enqueue(new Pos(nextY, nextX));
                visited[nextY, nextX] = true;
                distance[nextY, nextX] = distance[nowY, nowX] + 1;
                
            }
        }
        
        
        return visited[n-1, m-1] ? distance[n-1, m-1] : -1;
    }
    
}