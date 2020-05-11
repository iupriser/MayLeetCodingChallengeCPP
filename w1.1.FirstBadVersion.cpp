// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


class Solution 
{
public:
    int firstBadVersion(int n) {
        long int low = 1, high = n;
        while(low <= high) {
            long int mid = (low+high)/2;
            if(isBadVersion(mid) == false) {
                low = mid + 1;
            }
            else {
                if(isBadVersion(mid-1) == false){
                    return mid;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
