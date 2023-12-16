#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if (arr[0] == arr[1]) {
      if (arr[2] == arr[1] || arr[2] == arr[1] * 2 || arr[2] == arr[1] * 3 ||
          arr[2] == arr[1] * 4) {
        cout << "YES"
             << "\n";
      } else {
        cout << "NO"
             << "\n";
      }
    } else if (arr[1] == arr[0] * 2) {
      if (arr[2] == arr[1] || arr[2] == arr[0] * 3) {
        cout << "YES"
             << "\n";
      } else
        cout << "NO"
             << "\n";
    } else
      cout << "NO"
           << "\n";
  }
  return 0;
}