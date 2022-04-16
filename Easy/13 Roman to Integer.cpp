class Solution {
public:
    int romanToInt(string s) {
        int size = s.size() , num =0;
        std::map<char , int> m ;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        for(int i=0 ; i<size ; ++i)
        {
            if(i+1 <size && m[s[i]] < m[s[i+1]] )
                num -= m[s[i]];
            else
                num +=m[s[i]];
            
        }
        return num;
        
    }
};