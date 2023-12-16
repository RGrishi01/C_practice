#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int no;
    cin >> no;
    int arr[no - 1];
    int arr2[no - 1];
    for (int i = 0; i < no - 1; i++) {
      cin >> arr[i] >> arr2[i];
    }
    int count = 0;
    bool check = true;

    for (int i = 0; i < no - 1; i++) {
      check = true;
      for (int j = 0; j < no - 1; j++) {
        if (arr2[i] == arr[j]) {
          check = false;
          break;
        }
      }
      if (check == true) count++;
    }

    int ans = (count / 2) + (count % 2);

    cout << ans << "\n";
  }
  return 0;
}