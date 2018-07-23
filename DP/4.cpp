/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

class Solution {
public:
    int climbStairs(int n) {
        int f = 1;
        int g = 0;
        while(n--){
            f += g;
            g = f -g;           
        }
        return f;
    }
};




//他山之玉
（一）
//动态规划   空间和时间复杂度都为O(n)，
    public int climbStairs(int n) {
        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }

（二）
//常规时间复杂度O(n)算法
    public int climbStairs(int n) {
    	if(n == 2)
            return 2;
        if(n == 1)
            return 1;
        int tmp = 0;
        int pre = 1; 
        int res = 2;
        for(int i = 3; i <= n; i++){
      		  tmp = res;
            res = res + pre;
            pre = tmp;
        }
        return res;
    }

（三）
  public class Solution {
    /*  暴力递归  此题超时
    public int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        return climbStairs(n - 1) + climbStairs(n -2);
    }
    */


（四）
public int climbStairs(int n) {
    if (n < 3)
        return n;
    int one_step_before = 2;
    int two_steps_before = 1;
    int all_ways = 0;
    for (int i = 2; i < n; i++) {
        all_ways = one_step_before + two_steps_before;
        two_steps_before = one_step_before;
        one_step_before = all_ways;
    }
    return all_ways;
}




