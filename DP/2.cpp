/*
题目描述
有一个XxY的网格，一个机器人只能走格点且只能向右或向下走，要从左上角走到右下角。请设计一个算法，计算机器人有多少种走法。

给定两个正整数int x,int y，请返回机器人的走法数目。保证x＋y小于等于12。

测试样例：
2,2
返回：2
*/

class Robot {
public:
    int countWays(int x, int y) {
        if(x==0 || y==0)
            return 0;
        if(x==1 && y==1)        //当达到这个条件就只剩下一种走法了
            return 1;
        return countWays(x-1,y)+countWays(x,y-1);           
    }
};




//他山之玉
/*
由于题目中x+y<=12，所以不必担心递归超时问题，对于每一步，只要没有走到
边缘（x==1||y==1）就会有两种选择：向下走（x-1）or 向右走（y-1），终
止条件即走到边缘，只能一直走下去，即此时只有一种走法。
*/
class Robot {
public:
    int countWays(int x, int y) {
        // write code here
        if(x<=0||y<=0) return 0;
        if(x==1||y==1) return 1;
        return countWays(x-1,y)+countWays(x,y-1);
    }
};




/*
机器人只能右走，或者下走。那么它经过的道路就自然分为水平和竖直，为了到达y点它经过的水平和竖直道路数是恒定的，水平=x-1, 竖直=y-1，将机器人经过的道路
依次排列出来，无非是水平竖直的组合。那么机器人从x点走到y点的所有走法就显而易见了
*/
class Robot {
public:
    int countWays(int x, int y) {
        // write code here
        return factorial(y,x+y-2)/factorial(1,x-1);
    }
     
    int factorial(int f,int t){
        int res=1;
        for(int i=f;i<=t;i++){
            res = res*i;
        }
        return res;
    }
};
