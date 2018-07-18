/*
题目描述
对于一个有正有负的整数数组，请找出总和最大的连续数列。
给定一个int数组A和数组大小n，请返回最大的连续数列的和。保证n的大小小于等于3000。
测试样例：
[1,2,3,-6,1]
返回：6
*/


class MaxSum {
public:
    int getMaxSum(vector<int> A, int n) {
        int Max_sum = A[0] , this_sum = 0 ;
        for(int i=0 ; i<n ; i++)
        {
            this_sum += A[i];
            if(this_sum > Max_sum)
                Max_sum = this_sum;
            if(this_sum < 0)
                this_sum = 0;
        }
        return Max_sum;
    }
};
