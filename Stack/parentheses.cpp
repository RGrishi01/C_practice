#include<bits/stdc++.h>
using namespace std;

//check unbalanced parantheses
int main() {
    char arr[] = "[{ab{c9()}}]";
    bool check = true;
    stack<char> S;

    for(int i = 0; i < strlen(arr); i++) {
        if(arr[i] == '[' || arr[i] == '{' || arr[i] == '(' || arr[i] == ')' || arr[i] == '}' || arr[i] == ']') {
            if(arr[i] == ']') {
                if(S.top() == '[') {
                    S.pop();
                    continue;
                } else {
                    cout << "Not balanced" << "\n";
                    check = false;
                    break;
                }
            }

            else if(arr[i] == '}') {
                if(S.top() == '{') {
                    S.pop();
                    continue;
                } else {
                    cout << "Not balanced" << "\n";
                    check = false;
                    break;
                }
            }

            else if(arr[i] == ')') {
                if(S.top() == '(') {
                    S.pop();
                    continue;
                } else {
                    cout << "Not balanced" << "\n";
                    check = false;
                    break;
                }
            }
            S.push(arr[i]);
            // cout << S.top() << "\n";
        }
    }

    if(check == true) {
        cout << "Balanced" << "\n";
    }
    // cout << S.size();
    return 0;
}