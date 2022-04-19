//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
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
//    vector<T> v; F f;
//    static void Swap(T& a, T& b) {auto t = a; a = b; b = t;}
//public:
//    PriorityQueue() : PriorityQueue(F{}) {}
//    explicit PriorityQueue(const F& f) : v(1), f(f) {}
//    void push(const T& val) {
//        int cur = v.size(); v.push_back(val);
//        while (cur > 1 && f(v[cur >> 1], v[cur])) {
//            Swap(v[cur >> 1], v[cur]),
//            cur >>= 1;
//        }
//    }
//
//    void pop() {
//        int cur = 1, nxt = 2; swap(v[1], v[v.size()-1]);
//        v.pop_back();
//        while(nxt < v.size()) {
//            if (nxt + 1 < v.size() && f(v[nxt], v[nxt+1])) nxt++;
//            if (f(v[cur], v[nxt])) Swap(v[cur], v[nxt]), cur = nxt, nxt = cur <<= 1;
//            else break;
//        }
//    }
//    void clear() {v.clear(), v.push_back(T{});}
//    const T& top() const {return v[1];}
//    int size() const {return v.size() - 1;}
//    bool empty() const {return !size();}
//
//};
//
//int main() {
//    fast_io;
//    cin >> N;
//}