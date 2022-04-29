class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        // Time limit Exceeded;
        // for(int i=0 ; i<size ; ++i)
        //     for(int j=i+1 ; j<size ; ++j)
        //     {
        //         if(numbers[i]+numbers[j] == target){
        //             return {i+1,j+1};
        //         }      
        //     }
        
        int left=0 , right =size-1;
        while(left < right)
        {
            if (numbers[left] + numbers[right] == target)
                return {left+1 , right+1};
            else if( numbers[left] + numbers[right] > target)
                --right;
            else
                ++left;
        }
        return {-1,-1}; 
    }
};
