#include <bits/stdc++.h>
using namespace std;

/*

int main() {
  vector<int> array = {1, 2, 3, 4, 5};

  cout << *(array.begin()) << "\n";
  cout << array.size() << " " << array.max_size() << "\n";

  array.resize(4);
  cout << *(array.rbegin()) << "\n";

  cout << array[2] << " " << array.at(2) << "\n";

  cout << array.front() << " " << array.back() << "\n";

  cout << *array.data() << "\n";

  // inserts 10 five times
  array.assign(5, 10);
  cout << array.front() << " " << array.back() << "\n";

  array.assign({1, 2, 3, 4});
  cout << array.front() << " " << array.back() << "\n";

  array.push_back(5);
  cout << *(array.rbegin()) << "\n";

  array.pop_back();

  array.insert(array.begin() + 2, 0);
  for (int i = 0; i < array.size(); i++) {
    cout << array[i] << " ";
  }
  cout << "\n";

  array.erase(array.begin() + 2);
  for (int i = 0; i < array.size(); i++) {
    cout << array[i] << " ";
  }
  cout << "\n";

  vector<int> brray = {4, 3, 2, 1};
  array.swap(brray);
  for (int i = 0; i < array.size(); i++) {
    cout << array[i] << " ";
  }
  return 0;
}

*/

// 2D vectors
int main() {
  vector<vector<int>> vector = {{1, 2, 3, 4}, {4, 5, 6}, {7, 8, 9}};
  cout << &vector << " " << &vector[0] << " " << &vector[1] << " " << &vector[2] << " " << &vector[3] << "\n";
  cout << vector[0].size() << "\n";
  return 0;
}