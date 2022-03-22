//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//struct Trie{
//    Trie *go[26]{};
//    bool is_exist;
//    bool finish;
//
//    Trie() {
//        fill(go, go+26, nullptr);
//        is_exist = finish = false;
//    }
//
//    ~Trie() {
//        for (int i = 0; i < 26; i++) {
//            if (!go[i]) delete go[i];
//        }
//    }
//
//    void insert(const char *key) {
//        if (*key == '\0') {//문자열의 끝
//            finish = true;
//        }else {
//            if (!go[*key-'a']) {
//                go[*key-'a'] = new Trie;
//            }
//            is_exist = true;
//            go[*key-'a']->insert(key+1);
//        }
//    }
//
//    /*
//     * 글자가 포함되어 있지 않다면 false
//     * 단어의 끝에 도달했을 때 finish가 true여야 한다.
//     */
//    bool find(const char *key) {
//        if (*key == '\0') return finish;
//        int pos = *key -'a';
//        if (!go[pos]) return false;
//        return go[pos]->find(key+1);
//    }
//};
//
//int main() {
//    fast_io;
//    int N, M, cnt = 0; cin >> N >> M;
//    Trie *root = new Trie;
//    string w;
//    for (int i = 0; i < N+M; i++) {
//        cin >> w;
//        if (i < N) root->insert(w.c_str());
//        else if (root->find(w.c_str())) cnt++;
//    }
//    cout << cnt;
//}