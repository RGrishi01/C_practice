#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> m;
    m["rishi"] = 0;
    cout << m.count("rishi") << "\n";
    cout << m["rishi"] << " " << m["unknownkey"] << "\n";
    cout << m.count("unknownkey") << " " << m.count("rishi") << "\n";
    cout << m.size() << "\n";
    return 0;
}