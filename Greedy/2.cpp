class LongestDistance {
public:
    int getDis(vector<int> A, int n) {
        // write code here
        int Dis = 0;
        int this_dis = 0;
        int Min = A[0];
        for(int i = 0 ; i<n ; i++)
        {
            this_dis = A[i] - Min;
            if(this_dis > Dis)
                Dis = this_dis;
            if(A[i] < Min)
                Min = A[i];
        }
        return Dis;
    }
};
