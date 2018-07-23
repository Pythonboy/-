/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

Above is a 3 x 7 grid. How many possible unique paths are there?

Note: m and n will be at most 100.
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,1));
        int i,j;
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];  //自底至顶进行递推
            }
        }
        return dp[m-1][n-1];
    }
};

//他山之玉

public class Solution {
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m][n];
        for (int i = 0; i < m; i ++)
            dp[i][0] = 1;
        for (int i = 0; i < n; i ++)
            dp[0][i] = 1;
        for (int i = 1; i < m; i ++)
            for (int j = 1; j < n; j ++)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        return dp[m - 1][n - 1];
    }
}



int uniquePaths(int m, int n) {
    long x = m+n-2;  //不用long会溢出，阶乘求出来太大了
    long y = min(m,n)-1;
    long up = 1,down =1;   //最后求组合数的分子/分母
    if(m==1||n==1) return 1;
    for(int i = 0;i<y ;i++){
        up *= x--;
    }
    for(int i = y;i>0 ;i--){
        down *= i;
    }
    return int(up/down);
}


//经典dp问题
class Solution {
public:
    int uniquePaths(int m, int n) {
         
        vector<vector<int > >dp(m,vector<int >(n,1));
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        return dp[m-1][n-1];
    }
};



public int uniquePaths(int m, int n) {
        if(m<1||n<1) return 0;
        int[][] dp = new int[m+1][n+1];
        //基础状态
        for(int i=1;i<n+1;i++) {
            dp[1][i]=1;
        }
        for(int i=1;i<m+1;i++) {
            dp[i][1]=1;
        }
        //自底向上动态规划
        for(int i=2;i<m+1;i++) {
            for(int j=2;j<n+1;j++) {
                dp[i][j] = dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[m][n];
    }






