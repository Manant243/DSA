// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int l = 1;
        int r = n;
        
        while(l <= r){
            
            int mid = l + (r-l)/2;
            
            bool status = isBadVersion(mid);
            
            if(status)
                r = mid - 1;
            
            else
                l = mid + 1;
        }
        
        return l;
    }
};