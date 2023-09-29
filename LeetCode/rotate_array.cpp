#include <bits/stdc++.h>
using namespace std;

int main() {
  class Solution {
   public:
    void rotate(vector<int> &nums, int k) {
      /*
                  int n = (int)nums.size();

                  vector<int> ans(n);
                  for(int i = 0; i<n; i++) {
                      int newIndex = (i+k)%(n);
                      ans[newIndex] = nums[i];
                  }
                  nums = ans;
      */

      /*
                  queue<int> Q;
                  int n = (int)nums.size();
                  k = k % n;
                  for(int i = k; i > 0; i--) {
                      Q.push(nums[n - i]);
                  }
                  vector<int> nums2(n);
                  while(!Q.empty()) {
                      nums2.push_back(Q.front());
                  }
                  for(int i = 0; i < n - k; i++) {
                      nums2.push_back(nums[i]);
                  }
                  nums = nums2;
      */

      /*
                  rotate2(nums, k%nums.size(), 0);

                  void rotate2(vector<int>& nums, int k, int start) {
                      if (start == nums.size()-1)
                          return;
                      k = k%(nums.size()-start);
                      if (not k)
                          return;
                      for (int i = start, j = nums.size()-k; j < nums.size();
         ++i, ++j) swap(nums[i], nums[j]); rotate2(nums, k, start+k);
                  }
      */

      /*
                  k = k % nums.size();
                  if(k!=0) {
                      reverse(nums.end() - k, nums.end());
                      reverse(nums.begin(), nums.end() - k);
                      reverse(nums.begin(), nums.end());
                  }
      */
    }
  };
  return 0;
}