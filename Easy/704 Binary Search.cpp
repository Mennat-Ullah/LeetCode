class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int mid=(size+1)/2 , left=0 , right=size-1;
        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                right = mid -1;
            else
                left = mid + 1;
        }
        
        return -1;
    }
};