#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;

struct Queue {
    stack<int> stk1, stk2;

    void push(int val) {
        stk1.push(val);
    }

    void pop() {
        while(!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk2.pop();
        while(!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }

    int front() {
        while(!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        int val = stk2.top();
        while(!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return val;
    }

    int empty() {
        return stk1.empty();
    }

    int size() {
        return stk1.size();
    }

    void print() {
        if (stk1.empty()) {
            cout << "empty" << '\n';
            return;
        }
        while(!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        while(!stk2.empty()) {
            stk1.push(stk2.top());
            cout << stk2.top() << ' ';
            stk2.pop();
        }
        cout << '\n';
    }
};

int main() {
    fast_io;

    cout << "¾È³çÇÏ¼¼¿ä" << '\n';
}