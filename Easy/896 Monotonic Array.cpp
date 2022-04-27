class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true , dec = true;
        int size=nums.size()-1;
        for (int i=0; i<size ; ++i)
        {
            if(nums[i] > nums[i+1]) inc = false;
            else if(nums[i] < nums[i+1]) dec =false;
        }
        return inc || dec ;
    }
};
