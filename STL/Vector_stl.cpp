//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//template <typename T>
//class Vector{
//private:
//    static constexpr int DEFAULT_CAP = 64;
//    T* v; int sz, cap;
//
//public:
//    using iterator = T*;
//    Vector(int n = 0, T val = T{}) {
//        sz = n, cap = n > DEFAULT_CAP ? n : DEFAULT_CAP, v = new T[cap];
//        for (int i = 0; i < n; i++) v[i] = val;
//    }
//    Vector(const Vector& w) {
//        sz = w.sz, cap = w.cap, v = new T[cap];
//        for (int i = 0; i < sz; i++) v[i] = w[i];
//    }
//    ~Vector() {delete[] v;}
//    void push_back(const T& val) {
//        if (sz == cap) {
//            T *t = new T[cap <<= 1];
//            for (int i = 0; i < sz; i++) t[i] = v[i];
//            delete[] v; v = t;
//        }
//        v[sz++] = val;
//    }
//
//    void pop_back() {
//        sz--;
//    }
//
//    void clear() {
//        delete[] v;
//        sz = 0, cap = DEFAULT_CAP, v = new T[cap];
//    }
//
//    int size() const {return sz;}
//    bool empty() const {return sz==0;}
//    iterator begin() {return v;}
//    iterator end() {return v+sz;}
//    T& operator[] (int i) {return v[i];}
//    const T& operator[] (int i) const {return v[i];}
//    Vector& operator= (const Vector& w) {
//        delete[] v;
//        sz = w.sz, cap = w.cap, v = new T[cap];
//        for (int i = 0; i < sz; i++) v[i] = w[i];
//        return *this;
//    }
//};
//
//int main() {
//    fast_io;
//
//    Vector<int> v;
//
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.push_back(5);
//
//    for (auto val : v) cout << val << '\n';
//}