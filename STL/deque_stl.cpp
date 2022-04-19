//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//template <typename T>
//class Deque{
//private:
//    static constexpr int DEFAULT_CAP = 64;
//    T* v; int l, r, sz, cap;
//    int incr(int i) const { return i + 1 < cap ? i + 1: 0;}
//    int decr(int i) const { return i ? i - 1 : cap - 1;}
//    void expand() {
//        T* t = new T[cap << 1];
//        for (int i = l, j = 0; j < sz; i = incr(i), j++) t[j] = v[i];
//        delete[] v; l = 0, r = sz, cap <<= 1, v = t;
//    }
//
//public:
//    Deque(int n = 0, T val = T{}) {
//        l = 0, r = n, sz = n, cap = n + 1 > DEFAULT_CAP ? n + 1 : DEFAULT_CAP,
//        v = new T[cap];
//        for (int i = 0; i < n; i++) v[i] = val;
//    }
//
//    Deque(const Deque& w) {
//        l = w.l, r = w.r, sz = w.sz, cap = w.cap, v = new T[cap];
//        for (int i = l, j = 0; j < sz; i = incr(i), j++) v[i] = w[i];
//    }
//
//    ~Deque() {delete[] v;}
//
//    void push_front(const T& val) {
//        if (sz == cap) expand();
//        v[l = decr(l)] = val, sz++;
//    }
//
//    void push_back(const T& val) {
//        if (sz == cap) expand();
//        v[r] = val, r = incr(r), sz++;
//    }
//
//    void pop_front() {l = incr(l), sz--;}
//    void pop_back() {r = decr(r), sz--;}
//    void clear() {
//        delete[] v;
//        l = r = sz = 0, cap = DEFAULT_CAP, v = new T[cap];
//    }
//
//    int size() const {return sz;}
//    bool empty() const {return sz==0;}
//    T& front() {return v[l];}
//    T& back() {return v[decr(r)];}
//    T& operator[] (int i) {return l + i < cap ? v[l+i] : v[l+i-cap];}
//    Deque& operator= (const Deque& w) {
//        delete[] v;
//        l = w.l, r = w.r, sz = w.sz, cap = w.cap, v = new T[cap];
//        for (int i = l, j = 0; j < sz; i = incr(i), j++) v[i] = w[i];
//        return *this;
//    }
//};
//
//int main() {
//    fast_io;
//    Deque<int> dq;
//
//    cin >> N;
//    int x;
//    for (int i = 1; i <= N; i++) {
//        string cmd; cin >> cmd;
//        if (cmd == "push_front") {
//            cin >> x;
//            dq.push_front(x);
//        }else if (cmd == "push_back") {
//            cin >> x;
//            dq.push_back(x);
//        }else if (cmd == "pop_front") {
//            if (dq.empty()) cout << -1 << '\n';
//            else {
//                cout << dq.front() << '\n';
//                dq.pop_front();
//            }
//        }else if (cmd == "pop_back") {
//            if (dq.empty()) cout << -1 << '\n';
//            else {
//                cout << dq.back() << '\n';
//                dq.pop_back();
//            }
//        }else if (cmd == "size") {
//            cout << dq.size() << '\n';
//        }else if (cmd == "empty") {
//            cout << dq.empty() << '\n';
//        }else if (cmd == "front") {
//            cout << dq.front() << '\n';
//        }else if (cmd == "back") {
//            cout << dq.back() << '\n';
//        }
//    }
//}
//
