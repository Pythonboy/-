class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max_sum= A[0] ;
        int this_sum = 0;
        for(int i = 0 ; i<n ; i++)
        {
            this_sum+=A[i];
            if(this_sum>max_sum)
                max_sum = this_sum;
            if(this_sum < 0)
                this_sum = 0;
        }
        return max_sum;
    }
};
