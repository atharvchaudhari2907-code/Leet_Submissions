class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> arr;
    for (int i=0;i<nums1.size();i++) {
    arr.push_back(nums1[i]);
    }
    for (int i=0;i<nums2.size();i++) {
        arr.push_back(nums2[i]);
    }
    sort(arr.begin(),arr.end());
    int n= arr.size();

    if(n%2 ==0){
        return (arr[n/2-1]+arr[n/2])/2.0;
    }
    else{
        return arr[n/2];
        }   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna