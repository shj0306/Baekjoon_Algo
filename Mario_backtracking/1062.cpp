//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K, trie, ans, alphabet[26];
//vector<string> words;
//
///*
// * ��� ���ĺ��� ǥ���ϱ� ���� alphabet[26] �迭 ����
// * antic�� �ݵ�� �˰� �־��� �Ѵ�.
// * a�� ����ٸ� alphabet['a'-'a']=1
// * K-5����ŭ �н��ߴٸ� �󸶳� ���� �ܾ ���� �� �ִ� �� üŷ
// */
//void back_tracking(int idx, int k) {
//    if (k == 0) {
//        int cnt = 0;
//        for (const auto& word : words) {
//            bool is_suc = true;
//            for (auto c : word) {
//                if (!alphabet[c-'a']) {
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
//        if (!alphabet[i]) {
//            alphabet[i] = 1;
//            back_tracking(i, k-1);
//            alphabet[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    alphabet['a'-'a'] = 1; alphabet['n'-'a'] = 1;
//    alphabet['t'-'a'] = 1; alphabet['i'-'a'] = 1;
//    alphabet['c'-'a'] = 1;
//
//    words.resize(N);
//    for (int i = 0; i < N; i++) cin >> words[i];
//
//    if (K < 5) {
//        puts("0");
//        return 0;
//    }
//    K -= 5;
//
//    back_tracking(0, K);
//    cout << ans << '\n';
//}