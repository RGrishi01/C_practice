#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    int n{};
    cin >> n;
    string s;
    cin >> s;
    int i{0}, j{n - 1};
    string r = "01";
    int op = 0;

    int count1{0}, count2{0};

    for (int e = 0; e < n; e++) {
      if (s[e] == '0')
        count1++;
      else
        count2++;
    }

    if (count1 != count2)
      cout << -1 << "\n";
    else {
      vector<int> v;
      for (; i < j;) {
        if (s[i] == s[j]) {
          if (s[i] == '0') {
            s.insert(j + 1, "01");
            v.push_back(j + 1);
          } else {
            s.insert(i, "01");
            v.push_back(i);
          }
          op++;
          j += 2;
        }
        i++;
        j--;
      }

      cout << op << "\n";
      for (int e = 0; e < v.size(); e++) {
        cout << v[e] << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}