//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K, trie, ans, alpha;
//vector<string> words;
//char c[5] = {'a','n','t','i','c'};
//
////bit masking 활용
////입력받은 단어 전부를 숫자로 변환해서 비트 연산을 활용해 푼 코드도 있다.
//void back_tracking(int idx, int state, int k) {
//    if (k == 0) {
//        int cnt = 0;
//        for (const auto& word : words) {
//            bool is_suc = true;
//            for (auto w : word) {
//                if (!(state & (1 << (w-'a')))) {
//                    is_suc = false;
//                    break;
//                }
//            }
//            if (is_suc) cnt++;
//        }
//        ans = max(ans, cnt);
//        return;
//    }
//
//    for (int i = idx; i < 26; i++) {
//        if (!(state & (1 << i))) {
//            back_tracking(i, state | (1 << i), k-1);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//
//
//    words.resize(N);
//    for (int i = 0; i < N; i++) cin >> words[i];
//
//    if (K < 5) {
//        puts("0");
//        return 0;
//    }
//    K -= 5;
//    for (auto val : c) alpha |= (1 << (val-'a'));
//    back_tracking(0, alpha, K);
//    cout << ans << '\n';
//}