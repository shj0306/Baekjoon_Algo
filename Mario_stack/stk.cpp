/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

class UnderflowException{};

template<typename T> class ListNode {
public:
    T value;
    ListNode<T> *next;

    ListNode<T>():next(nullptr){}
    ListNode<T>(T value, ListNode<T> *next) : value(value), next(next) {}
};

template <typename T>
class Stack {
public:
    int size;
    ListNode<T> *tail;

    Stack<T>():size(0), tail(nullptr){}

    ~Stack<T>() {
        ListNode<T> *t1 = tail, *t2;
        while (t1 != nullptr) {
            t2 = t1->next;
            delete t1;
            t1 = t2;
        }
    }

    void push(T value) {
        tail = new ListNode<T>(value, tail);
        size++;
    }

    T top() {
        try {
            if (size == 0) throw UnderflowException();
            return tail->value;
        }catch(UnderflowException e) {
            cout << "스택이 비어 있습니다." << '\n';
            exit(1);
        }
    }

    void pop() {
        try {
            if (size == 0) throw UnderflowException();
            ListNode<T> *temp = tail->next;
            delete tail;
            tail = temp;
            size--;
        }catch(UnderflowException e) {
            cout << "스택이 비어 있습니다." << '\n';
            exit(1);
        }
    }
};

template <typename T>
ostream& operator <<(ostream &out, const Stack<T> &LL) {
    ListNode<T> *temp = LL.tail;
    out << "top [";
    for (int i = 0; i < LL.size; i++) {
        out << temp->value;
        temp = temp->next;
        if (i < LL.size-1) out << ",";
    }
    out << "] bottom";
    return out;
}

int main() {
    Stack<int> S;
    S.pop();
}
*/
