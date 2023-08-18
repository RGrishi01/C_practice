#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    string input{};
    cin >> input;
    int a = 10;
    size_t size = input.size();
    int intSize = static_cast<int>(size);
    if (input[0] >= '5') {
      cout << pow(a, intSize) << "\n";
    } else {
      for (int i = intSize - 1; i > 0; i--) {
        if (input[i] >= '5') {
          input[i - 1] += 1;
          for (; i < intSize; i++) {
            input[i] = '0';
          }
        } else {
          continue;
        }
      }
      cout << input << "\n";
    }
  }
  return 0;
}