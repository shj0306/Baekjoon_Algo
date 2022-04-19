//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//template<typename T>
//class List{
//private:
//    struct Node{
//        T val; Node *prv, *nxt;
//        Node(T val = T{}) : Node(val, nullptr, nullptr) {}
//        explicit Node(T val, Node* prv, Node* nxt) : val(val), prv(prv), nxt(nxt) {}
//    };
//    Node* head, *tail; int sz;
//
//public:
//    List() : head(new Node()), tail(new Node()), sz(0) {
//        head->nxt = tail, tail->prv = head;
//    }
//    ~List() {
//        while(head != tail) {
//            auto nxt = head->nxt;
//            delete head;
//            head = nxt;
//        }
//        delete tail;
//    }
//    Node *insert(Node* x, const T& val) {
//        auto y = new Node(val);
//        x->prv->nxt = y;
//        y->prv = x->prv;
//        x->prv = y, y->nxt = x;
//        return sz++, y;
//    }
//
//    Node *erase(Node* x) {
//        auto ret = x->nxt;
//        x->prv->nxt = x->nxt;
//        x->nxt->prv = x->prv;
//        delete x;
//        return sz--, ret;
//    }
//
//    void clear() {
//        for (auto it = begin(); it != end();) {
//            auto nxt = it->nxt;
//            delete it;
//            it = nxt;
//        }
//        head->nxt = tail, tail->prev = head, sz = 0;
//    }
//
//    int size() const {return sz;}
//    bool empty() const {return sz == 0;}
//    Node* begin() {return head->nxt;}
//    Node* end() {return tail;}
//};
//int main() {
//    fast_io;
//    string word; int m;
//    cin >> word >> m;
//
//    List<char> list;
//
//    for (auto &c : word) list.insert(list.end(), c);
//
//    auto it = list.end(); //현재 커서 위치
//
//    for (int i = 0; i < m; i++) {
//        char cmd; cin >> cmd;
//        if (cmd == 'P') {
//            char c; cin >> c;
//            list.insert(it, c);
//        }else if (cmd == 'L') { //커서를 왼쪽으로 한칸 옮김
//            if (it != list.begin()) it = it->prv;
//        }else if (cmd == 'D') {//커서를 오른쪽으로 한칸 옮김
//            if (it != list.end()) it = it->nxt;
//        }else if (cmd == 'B') {
//            if (it != list.begin()) list.erase(it->prv);
//        }
//    }
//
//    for (it = list.begin(); it != list.end(); it = it->nxt)
//        cout << it->val;
//
//}