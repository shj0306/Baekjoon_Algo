/*
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;
struct Trie {
    Trie* go[10]{}; //다음 노드를 가리키는 포인터 배열
    bool output; //이 노드에서 끝나는 전화번호가 있는가?
    bool goexist; //이 노드의 자식이 있는가?

    Trie() {
        fill(go, go+10, nullptr);
        output = goexist = false;
    }
    ~Trie() {
        for (auto & i : go) delete i;
    }

    //문자열 key를 현재 노드부터 삽입
    bool insert(const char* key) {
        //문자열의 끝
        if (*key == '\0') {
            output = true;
            return !goexist;
        }
        else {
            int next = *key -'0';
            if (!go[next]) go[next] = new Trie;
            goexist = true;
            /// 여기까지 온 시점에서 자식이 분명히 있는데, 여기서 끝나는 전화번호가 있다면 일관성이 없다
            return !output && go[next]->insert(key+1);
        }
    }
//    //이 노드가 일관성이 있는가?
//    bool consistent() {
//        //자식도 있으면서 여기서 끝나는 전화번호가 있다면 일관성 없음
//        if (goexist && output) return false;
//        //자식들 중 하나라도 일관성이 없으면 이 노드도 일관성이 없다.
//        for (auto & node : go) {
//            if (node && !node->consistent()) return false;
//        }
//        return true;
//    }
};


int main() {
    fast_io;
    int T;
    cin >> T;
    while(T--) {
        cin >> n;
        Trie *root = new Trie;
        bool res = true;
        for (int i = 0; i < n; i++) {
            char phone[11];
            scanf("%s", phone);
            if (res && !root->insert(phone)) res = false;
        }
        puts(res ? "YES" : "NO");
        // 소멸자를 호출하여 동적 할당 해제를 하지 않으면 힙 메모리가 부족할 수 있음
        delete root;
    }
}*/
