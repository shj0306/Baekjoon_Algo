#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;

template <class T> class Queue {
public:
    explicit Queue(int x);
    ~Queue() {
        delete []values;
    }
    bool push(T);
    bool isFull();
    bool empty();
    T pop();
    T front();

private:
    int sz;
    T *values;
    int head;
    int back;
};

template <class T> Queue<T>::Queue(int x) : sz(x), values(new T[sz]), head(0), back(0) {

}

template <class T> bool Queue<T>::isFull() {
    if ((back+1) % sz == head) return true;
    else return false;
}

template <class T> bool Queue<T>::push(T x) {
    bool b = false;
    if (!Queue<T>::isFull()) {
        values[back] = x;
        back = (back + 1) % sz;
        b = true;
    }
    return b;
}

template <class T> bool Queue<T>::empty() {
    if (back == head) return true;
    else return false;
}

template <class T> T Queue<T>::pop() {
    T val = NULL;
    if (!Queue<T>::empty()) {
        val = values[head];
        head = (head + 1) % sz;
    }else cerr << "Queue is Empty" << '\n';
    return val;
}

template <class T> T Queue<T>::front() {
    T val = NULL;
    if (!Queue<T>::empty()) {
        val = values[head];
    }else cerr << "Queue is Empty" << '\n';
    return val;
}


int main() {
    fast_io;

    Queue<int> q(10);
    q.push(1);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.pop();

}