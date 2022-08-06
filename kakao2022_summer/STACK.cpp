#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;

template <class T> class Stack {
public:
    explicit Stack(int x);
    ~Stack() {
        delete [] values;
    }
    bool push(T);
    T pop();
    T top();
    bool isEmpty();
    bool isFull();
    int size();

private:
    int total;
    T *values;
    int index;
};

template<class T> Stack<T>::Stack(int x): total(x), values(new T[total]), index(-1) {}

template<class T> bool Stack<T>::isFull()
{
    if ((index+1) == total) return true;
    else return false;
}

template<class T> int Stack<T>::size() {
    return index+1;
}

template<class T> bool Stack<T>::push(T x) {
    bool b = false;
    if (!Stack<T>::isFull()) {
        values[++index] = x;
        b = true;
    }
    return b;
}

template<class T> bool Stack<T>::isEmpty() {
    if (index == -1) return true;
    else return false;
}

template <class T> T Stack<T>::pop() {
    T val = NULL;
    if (!Stack<T>::isEmpty()) {
        val = values[index--];
    }else cerr << "Stack is Empty" << '\n';
    return val;
}

template<class T> T Stack<T>::top() {
    T val = NULL;
    if (!Stack<T>::isEmpty()) {
        val = values[index];
    }else cerr << "Stack is Empty" << '\n';
    return val;
}


int main() {
    fast_io;

    Stack<int> stk(10);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.pop();
    cout << stk.top() << '\n';
}