#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    int size = 0;
    cin >> size;
    int arr[size];
    int count1{0}, count2{0};
    int a{0}, b{0};
    int temp{0};
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
      if (arr[i] != arr[0]) b = arr[i];
    }
    a = arr[0];
    for (int i = 0; i < size; i++) {
      if (arr[i] == a)
        count1++;
      else if (arr[i] == b)
        count2++;
      else {
        temp++;
      }
    }
    if (temp)
      cout << "NO"
           << "\n";
    else {
      if (size % 2 == 0)

      {
        if (count1 == count2 || count2 == 0) {
          cout << "YES"
               << "\n";
        } else
          cout << "NO"
               << "\n";
      } else {
        if (count1 == count2 + 1 || count2 == count1 + 1 || count2 == 0) {
          cout << "YES"
               << "\n";
        } else
          cout << "NO"
               << "\n";
      }
    }
  }
  return 0;
}
