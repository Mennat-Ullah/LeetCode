class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1 , s=points.size() , min=100000000 , diff;
        for (int i= 0 ; i<s ; ++i)
        {
            if(x == points[i][0] || y==points[i][1] )
            {
                
                diff = abs(x-points[i][0]) + abs(y-points[i][1]);
                if(min> diff)
                {
                    ans=i;
                    min=diff;
                }
            }
        }
        return ans;
    }
};
