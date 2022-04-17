class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int size=accounts.size() , sum=-1 , max=-111 , size2;
        for (int i= 0; i< size ; ++i)
        {
            sum=0;
            size2=accounts[i].size();
            for(int j=0 ; j<size2; ++j) sum+=accounts[i][j];
            if(max<sum) max=sum;
        }
        return max;
    }
};