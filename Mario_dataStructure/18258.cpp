//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//class Queue{
//    int sz;
//    deque<int> dq;
//
//    public: Queue() {
//        sz = 0;
//        dq = {};
//    }
//
//    void push(int x) {
//        dq.push_back(x);
//        sz++;
//    }
//    int pop() {
//        if (sz == 0) return -1;
//        int num = dq[0];
//        dq.pop_front();
//        sz--;
//        return num;
//    }
//
//    int size() const{
//        return sz;
//    }
//
//    int empty() {
//        return sz == 0;
//    }
//
//    int front() {
//        if (sz == 0) return -1;
//        return dq[0];
//    }
//
//    int back() {
//        if (sz == 0) return -1;
//        return dq[sz-1];
//    }
//};
//
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    cin.ignore();
//
//    Queue que;
//    for (int i = 1; i <= N; i++) {
//        string cmd; cin >> cmd;
//        if (cmd == "push") {
//            int x; cin >> x;
//            que.push(x);
//        }else if (cmd == "pop") {
//            cout << que.pop() << '\n';
//        }else if (cmd == "size") {
//            cout << que.size() << '\n';
//        }else if (cmd == "empty") {
//            cout << que.empty() << '\n';
//        }else if (cmd == "front") {
//            cout << que.front() << '\n';
//        }else if (cmd == "back") {
//            cout << que.back() << '\n';
//        }
//    }
//}