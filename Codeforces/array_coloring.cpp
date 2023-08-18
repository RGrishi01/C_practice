#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    long long int size;
    cin >> size;
    long long int arr[size];
    long long int sum{};
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
      sum += arr[i];
    }

    if (sum % 2 == 0) {
      cout << "YES"
           << "\n";
    }

    else {
      cout << "NO"
           << "\n";
    }
  }
  return 0;
}