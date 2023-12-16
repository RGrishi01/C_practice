#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{0};
  cin >> t;
  while (t--) {
    int n{};
    cin >> n;
    int arr[n]{0};

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    bool check = false;

    if (n / 2 == 0) {
      cout << "YES"
           << "\n";
    } else if (n / 2 >= 1 && n / 2 < 2) {
      if (arr[2] <= arr[3])
        cout << "YES"
             << "\n";
      else
        cout << "NO"
             << "\n";
    } else if (n / 2 >= 2 && n / 2 < 4) {
      if (arr[2] > arr[3])
        cout << "NO"
             << "\n";
      else {
        for (int i = 4; i < n - 1; i++) {
          if (arr[i] > arr[i + 1]) {
            cout << "NO"
                 << "\n";
            check = true;
            break;
          }
        }
        if (check == false)
          cout << "YES"
               << "\n";
      }
    } else if (n / 2 >= 4 && n / 2 < 8) {
      if (arr[2] > arr[3])
        cout << "NO"
             << "\n";
      else {
        for (int i = 4; i < 7; i++) {
          if (arr[i] > arr[i + 1]) {
            cout << "NO"
                 << "\n";
            check = true;
            break;
          }
        }
        if (check == false) {
          for (int i = 8; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
              cout << "NO"
                   << "\n";
              check = true;
              break;
            }
          }
          if (check == false)
            cout << "YES"
                 << "\n";
        }
      }
    } else if (n / 2 >= 8) {
      if (arr[2] > arr[3])
        cout << "NO"
             << "\n";
      else {
        for (int i = 4; i < 7; i++) {
          if (arr[i] > arr[i + 1]) {
            cout << "NO"
                 << "\n";
            check = true;
            break;
          }
        }
        if (check == false) {
          for (int i = 8; i < 15; i++) {
            if (arr[i] > arr[i + 1]) {
              cout << "NO"
                   << "\n";
              check = true;
              break;
            }
          }
          if (check == false) {
            for (int i = 15; i < n - 1; i++) {
              if (arr[i] > arr[i + 1]) {
                cout << "NO"
                     << "\n";
                check = true;
                break;
              }
            }
            if (check == false) {
              cout << "YES"
                   << "\n";
            }
          }
        }
      }
    }
  }
  return 0;
}