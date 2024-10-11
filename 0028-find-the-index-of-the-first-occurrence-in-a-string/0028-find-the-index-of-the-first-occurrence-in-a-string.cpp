class Solution {
public:
    int strStr(string haystack, string needle) {
        
        size_t pos=haystack.find(needle);
        //size_t is used for finding the valid index value that is the data type.size_t can only hold non-negative values.
        
        if(pos!=string::npos)
            return pos;
        else
            return -1;
    }
};