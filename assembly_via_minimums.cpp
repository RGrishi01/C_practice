#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    long int size;
    cin >> size;
    long int newS = (size * (size - 1)) / 2;

    // input array
    long long int B[newS];
    for (int i = 0; i < newS; i++) {
      cin >> B[i];
    }

    sort(B, B + newS);

    // original array
    long long int A[size];
    long int k{size - 2};
    for (int j = 0; j < size; j++) {
      if (j == size - 1) {
        A[j] = B[newS - 1];
      } else {
        A[j] = B[k];
        k += size - 2 - j;
      }
      cout << A[j] << " ";

      if (j == size - 1) {
        cout << "\n";
      }
    }
  }
  return 0;
}