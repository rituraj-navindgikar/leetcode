class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        sort(nums1.begin(), nums1.end());
        int mid;
        double ans;
        if(nums1.size() % 2 == 0) {
            mid = nums1.size() / 2;
            ans = double( nums1[mid] + nums1[mid-1] ) / 2 ;
        }
        else {
            mid = ( nums1.size() ) / 2;   
            ans = nums1[mid];
        }
        
        return ans;

    }
};