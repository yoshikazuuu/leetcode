class Solution {
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    sort(nums1.begin(), nums1.end());

    int n = nums1.size();

    for (auto i : nums1)
      cout << i << " ";

    if (n % 2 == 0)
      return (float)(nums1[n / 2 - 1] + nums1[n / 2]) / 2;
    else
      return nums1[n / 2];
  }
};