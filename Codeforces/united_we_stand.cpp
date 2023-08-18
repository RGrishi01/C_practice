#include <bits/stdc++.h>
using namespace std;

int main() {
  int t{};
  cin >> t;
  while (t--) {
    int length{};
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++) {
      cin >> arr[i];
    }

    vector<int> b{};
    vector<int> c{};

    sort(arr, arr + length);

    int min{arr[0]};
    int counter{};

    for (int i = 0; i < length; i++) {
      if (arr[i] == min)
        counter++;
      else
        break;
    }

    for (int i = 0; i < counter; i++) {
      b.push_back(min);
    }

    for (int i = counter; i < length; i++) {
      c.push_back(arr[i]);
    }

    if ((int)b.size() == 0 || (int)c.size() == 0) {
      cout << -1 << "\n";
    } else {
      cout << b.size() << " " << c.size() << "\n";
      for (int i = 0; i < counter; i++) {
        cout << b[i] << " ";
      }
      cout << "\n";
      for (int i = 0; i < length - counter; i++) {
        cout << c[i] << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}