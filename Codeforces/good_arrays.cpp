#include <bits/stdc++.h>
using namespace std;

int main() {
    int t{};
    cin >> t;
    while (t--) {
      long long int size;
      cin >> size;
      long long int arr[size];
      for (int i = 0; i < size; i++) {
        cin >> arr[i];
      }
    // sort(arr, arr + size);
    // int counter[100];
    // fill_n(counter, 100, 0);
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] != arr[i + 1])
    //     {
    //         continue;
    //     }
    //     if (arr[i] == arr[i + 1])
    //     {
    //         counter[0]++;
    //         counter[1] = arr[i];
    //         continue;
    //     }
    //     if (arr[i] != counter[1] && arr[i] == arr[i + 1])
    //     {
    //         counter[2]++;
    //         counter[3] = arr[i];
    //         continue;
    //     }
    //     if (arr[i] != counter[3] && arr[i] == arr[i + 1])
    //     {
    //         counter[4]++;
    //         counter[5] = arr[i];
    //         continue;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // int max{};
    // for (int i = 2; i < 100; i += 2)
    // {
    //     if (counter[i] >= counter[i - 2])
    //     {
    //         max = counter[i];
    //         continue;
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }
    int max{};
    for (int i = 0; i < size; i++) {
      if (arr[i] == 1) {
        max++;
      }
    }
    if (max == 0) {
      cout << "YES"
           << "\n";
    } else {
      if (size % 2 == 0) {
        if (size == max + 2) {
          cout << "YES"
               << "\n";
        } else {
          cout << "NO"
               << "\n";
        }
      } else {
        if (size == max + 3) {
          cout << "YES"
               << "\n";
        } else {
          cout << "NO"
               << "\n";
        }
      }
    }
  }
  return 0;
}