//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//class Stack {
//    int sz;
//    vector<int> vec;
//
//    public: Stack() {
//        sz = 0;
//        vec = {};
//    }
//
//    void push(int val) {
//        vec.push_back(val);
//        sz++;
//    }
//
//    int pop() {
//        if (sz == 0) return -1;
//        int num = vec[sz-1];
//        vec.pop_back();
//        sz--;
//        return num;
//    }
//
//    int size() const {
//        return sz;
//    }
//
//    int empty() {
//        return sz == 0;
//    }
//
//    int top() {
//        if (sz == 0) return -1;
//        return vec[sz-1];
//    }
//};
//
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    Stack stack1;
//    cin.ignore();
//    for (int i = 0; i < N; i++) {
//        string cmd, tmp[2];
//        getline(cin, cmd);
//        istringstream iss(cmd);
//        int idx = 0;
//        while(getline(iss, tmp[idx++], ' ')) {}
//
//        if (tmp[0] == "push") {
//            stack1.push(stoi(tmp[1]));
//        }else if (tmp[0] == "top") {
//            cout << stack1.top() << '\n';
//        }else if (tmp[0] == "pop") {
//            cout << stack1.pop() << '\n';
//        }else if (tmp[0] == "size") {
//            cout << stack1.size() << '\n';
//        }else if (tmp[0] == "empty") {
//            cout << stack1.empty() << '\n';
//        }
//    }
//}