#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;
    string x; cin >> x;
    string s; cin >> s;

    bool check = false;
    int it = 0;
    int temp = 0;

    for (int i = 0; i < n; i++) {
      int j = 0;
      if (x[i] == s[j]) {
        while (j < m) {
          if (i == n) {
            i = 0;
            it++;
          }
          if (x[i] == s[j]) {
            i++;
            j++;
          }
        }
        if (j == m) {
          temp = j;
          break;
        }
      } else
        continue;
    }

    if (temp < m) {
      cout << "-1"
           << "\n";
      check = true;
    }

    if (!check) {
      int ans{};
      if (it > 0) {
        while (it > 1) {
          it = it / 2;
          ans++;
        }
        cout << ans << "\n";
      } else {
        cout << it << "\n";
      }
    }
  }
  return 0;
}