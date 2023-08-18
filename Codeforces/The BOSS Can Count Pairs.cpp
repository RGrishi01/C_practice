#include <bits/stdc++.h>
using namespace std;

// int main() {
//   int t{};
//   cin >> t;
//   while (t--) {
//     int size{};
//     cin >> size;
//     int a[size];
//     int b[size];
//     for (int i = 0; i < size; i++) {
//       cin >> a[i];
//     }
//     for (int i = 0; i < size; i++) {
//       cin >> b[i];
//     }

//     int count{};
//     // int t1[size];
//     // int t2[size];
//     for (int i = 0; i < size; i++) {
//       for (int j = 0; j > i && j < size; j++) {
//         if (a[i] * a[j] == b[i] + b[j]) {
//           count++;
//         }
//       }
//     }

//     cout << count << "\n";
//   }
//   return 0;
// }


int main() {
  int t{};
  cin >> t;
  while (t--) {
    int size{};
    cin >> size;
    vector<pair<int, int>> a;
    int b[size];
    for (int i = 0; i < size; i++) {
      int x;
      cin >> x;
      a.push_back(make_pair(x, i));
    }
    for (int i = 0; i < size; i++) {
      cin >> b[i];
    }
    sort(a.begin(), a.end());
    int count{};

    for (int i = 0; i < size; i++) {
      if (a[i].first <= sqrt(2 * size)) {
        for (int j = i+1; j < size; j++) {
          if (a[j].first >= a[i].first) {
            int x = a[i].second;
            int y = a[j].second;
            if (a[i].first * a[j].first == b[x] + b[y] && x != y) {
              count++;
              continue;
            }
          } else
            continue;
        }
        continue;
      } else
        continue;
    }

    cout << count << "\n";
    return 0;
  }
}