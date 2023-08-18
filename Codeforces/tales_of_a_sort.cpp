#include <bits/stdc++.h>
using namespace std;

int main() {
  long int t = 0;
  cin >> t;
  while (t--) {
    long long int size;
    cin >> size;
    long long int arr[size];
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
    }
    int counter{};
    for (int i = 0; i < size - 1; i++) {
      if (arr[size - i - 1] >= arr[size - i - 2]) {
        counter++;
        continue;
      } else {
        break;
      }
    }
    if (counter == size - 1) {
      cout << 0 << "\n";
    }

    else {
      sort(arr, arr + size - counter - 1);
      cout << arr[size - counter - 2] << "\n";
    }
  }
  return 0;
}