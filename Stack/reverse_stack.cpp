#include <iostream>
#include <stack> //stack from STL
using namespace std;

//reverse stack while destroying the original one(saves memory)
stack<char> Reverse(stack<char>& S) {
    stack<char> temp;
    while(S.size()) {
        temp.push(S.top());
        S.pop();
    }
    return temp;
}

//printing stack at the expense of memory by creating a copy of stack
void printStack(stack<char> stack) {
    while(stack.size()) {
        cout << stack.top() << "\n";
        stack.pop();
    }
}

int main() {
    stack<char> S;
    S.push('a');
    S.push('b');
    S.push('c');
    S.push('d');

    printStack(S);

    //saving reversed stack in a new stack
    stack<char> newS = Reverse( S );
    printStack(newS);
    return 0;
}