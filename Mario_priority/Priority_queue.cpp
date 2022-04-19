//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//template<typename T>
//class Vector{
//private:
//    static constexpr int DEFAULT_CAP = 64;
//    T* v; int sz, cap;
//
//public:
//    using iterator = T*;
//    Vector(int n = 0, T val = T{}) {
//        sz = n, cap = n > DEFAULT_CAP ? n : DEFAULT_CAP,
//        v = new T[cap];
//        for (int i = 0; i < n; i++) v[i] = val;
//    }
//    Vector(const Vector& w) {
//        sz = w.sz, cap = w.cap, v = new T[cap];
//        for (int i = 0; i < sz; i++) v[i] = w[i];
//    }
//    ~Vector() {delete[] v;}
//
//    void push_back(const T& val) {
//        if (sz == cap) {
//            T *t = new T[cap <<= 1];
//            for (int i = 0; i < sz; i++) t[i] = v[i];
//            delete[] v; v = t;
//        }
//        v[sz++] = val;
//    }
//
//    void pop_back() {sz--;}
//
//    void clear() {
//        delete[] v;
//        sz = 0, cap = DEFAULT_CAP, v = new T[cap];
//    }
//
//    int size() const {return sz;}
//    bool empty() const {return sz == 0;}
//    iterator begin() {return v;}
//    iterator end() { return v+sz;}
//    T& operator[] (int i) { return v[i];}
//    const T& operator[] (int i) const {return v[i];}
//    Vector& operator= (const Vector& w) {
//        delete[] v;
//        sz = w.sz, cap = w.cap, v = new T[cap];
//        for (int i = 0; i < sz; i++) v[i] = w[i];
//        return *this;
//    }
//};
//
//template<typename T> struct Less {
//    constexpr bool operator() (const T& a, const T& b) const {
//        return a < b;
//    }
//};
//
//template<typename T, typename F = Less<T>>
//class PriorityQueue{
//private:
//    Vector<T> v; F f;
//    static void Swap(T& a, T& b) {auto t = a; a = b; b = t;}
//public:
//    PriorityQueue() : PriorityQueue(F{}) {}
//    explicit PriorityQueue(const F& f) : v(1), f(f) {}
//
//    void push(const T& val) {
//        int cur = v.size();
//        v.push_back(val);
//        while(cur > 1 && f(v[cur >> 1], v[cur])) Swap(v[cur >> 1], v[cur]), cur >>= 1;
//    }
//
//    void pop() {
//        int cur = 1, nxt = 2;
//        swap(v[1], v[v.size()-1]); v.pop_back();
//        while(nxt < v.size()) {
//            if (nxt + 1 < v.size() && f(v[nxt], v[nxt+1])) nxt++;
//            if (f(v[cur], v[nxt])) Swap(v[cur], v[nxt]), cur = nxt, nxt = cur << 1;
//            else break;
//        }
//    }
//
//    void clear() {
//        v.clear();
//        v.push_back(T{});
//    }
//
//    const T& top() {
//        return v[1];
//    }
//
//    int size() const {return v.size() - 1;}
//    bool empty() const {return size() == 0;}
//};
//
//int main() {
//    fast_io;
//
//    PriorityQueue<string> pq; //최대힙 구현
//    pq.push("aa");
//    pq.push("ab");
//    pq.push("ac");
//    pq.push("ad");
//    pq.push("ae");
//
//    while(!pq.empty()) {
//        cout << pq.top() << '\n';
//        pq.pop();
//    }
//}