#include <bits/stdc++.h>
using namespace std;

double rt(int a, int b) { return ((a * a) + (b * b)); }

int main() {
  int t{};
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    int xk1, xk2, xk3, xk4;
    int yk1, yk2, yk3, yk4;
    xk1 = xk + a;
    xk2 = xk + b;
    xk3 = xk - a;
    xk4 = xk - b;
    yk1 = yk + a;
    yk2 = yk + b;
    yk3 = yk - a;
    yk4 = yk - b;
    double dist = rt(a, b);
    int count = 0;

    if (rt(xk1 - xq, yk2 - yq) == dist) {
      count++;
    }
    if (rt(xk1 - xq, yk4 - yq) == dist) {
      count++;
    }
    if (rt(xk3 - xq, yk2 - yq) == dist) {
      count++;
    }
    if (rt(xk3 - xq, yk4 - yq) == dist) {
      count++;
    }
    if (a != b) {
      if (rt(xk2 - xq, yk1 - yq) == dist) {
        count++;
      }
      if (rt(xk4 - xq, yk1 - yq) == dist) {
        count++;
      }
      if (rt(xk2 - xq, yk3 - yq) == dist) {
        count++;
      }
      if (rt(xk4 - xq, yk3 - yq) == dist) {
        count++;
      }
    }

    cout << count << "\n";
  }
  return 0;
}