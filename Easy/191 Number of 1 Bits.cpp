class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        // unsigned mask = 1;
        // short counter = 0;
        // for(int i=0;i<32;++i){
        //     if(mask & n) ++counter; 
        //     mask = mask << 1;
        // }
        // return counter;
        
        // This answer faster than 100.00% of C++
        std::bitset<32> tmp (n);
        return tmp.count();
    }
};
