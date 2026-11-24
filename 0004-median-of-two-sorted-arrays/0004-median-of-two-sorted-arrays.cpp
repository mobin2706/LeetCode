class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int i=0,j=0;
        vector<double> v;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            v.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            v.push_back(nums2[j]);
            j++;
        }

        int l = v.size()-1;

        double x = l/2;
        double y = x+1;
        if(l%2==0){

        return v[x];
        }
        double ans = (v[x]+v[y])/2;
        return ans;
    }
};