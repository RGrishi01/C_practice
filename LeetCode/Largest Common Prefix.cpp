#include <bits/stdc++.h>
using namespace std;

int main() {
  class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
      // int j = 0;
      // if(strs.size() > 1) {
      //     for(int i = 0; i < strs.size(); i++) {
      //         if(i == strs.size() - 1) {
      //             j++; i = -1;
      //             continue;
      //         }
      //         if(strs[i][j] == strs[i+1][j] && j < strs[i].size() && j <
      //         strs[i+1].size()) {
      //             if(strs[i].size() == 0) return "";
      //             continue;
      //         } else break;
      //     }

      //     string str = "";
      //     int k = 0;
      //     while(k < j) {
      //         str = str + strs[0][k];
      //         k++;
      //     }
      //     return str;

      // } else {
      //     return strs[0];
      // }

      int i = 0;
      sort(strs.begin(), strs.end());
      int size = strs.size();
      for (; i < strs[0].size() && i < strs[size - 1].size(); i++) {
        if (strs[0][i] == strs[size - 1][i]) {
          continue;
        } else {
          break;
        }
      }

      string str = "";
      int k = 0;
      while (k < i) {
        str = str + strs[0][k];
        k++;
      }
      return str;
    }
  };
  return 0;
}