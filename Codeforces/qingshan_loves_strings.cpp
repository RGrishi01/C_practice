#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    int n{0}, m{0};
    cin >> n >> m;
    string s;
    string t;
    cin >> s >> t;

    bool check = false;
    for (int i = 0; i < m - 1; i++) {
      if (t[i] == t[i + 1]) {
        check = true;
        break;
      }
    }

    bool check2 = false;
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == s[i + 1]) {
        check2 = true;
        break;
      }
    }

    if (!check2) {
      cout << "YES"
           << "\n";
      continue;
    }

    if (!check) {
      for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
          if (s[i] == t[0] || s[i + 1] == t[m - 1]) {
            check = true;
            break;
          }
        }
      }
    }

    if (check)
      cout << "NO"
           << "\n";
    else
      cout << "YES"
           << "\n";
  }
  return 0;
}