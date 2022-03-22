//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int N;
//bool checked[1010];
//vector<int> shuf_card;
//vector<int> res, card;
//
//bool check(vector<int> &card1, vector<int> &card2) {
//    for (int i = 0; i < N; i++) {
//        if (card1[i] != card2[i]) return false;
//    }
//    return true;
//}
//
//void init() {
//    card.clear();
//    for (int i = 1; i <= N; i++) card.push_back(i);
//}
//
//void process(int level, int k, int s, int e) {
//    if (level == k+2) {
//        shuf_card.push_back(card[s]);
//        checked[s] = true;
//        return;
//    }else {
//        process(level+1, k, e - (int)pow(2, k-level+1) + 1, e);
//    }
//    for (int i = s; i <= e; i++) {
//        if (!checked[i]) {
//            checked[i] = true;
//            shuf_card.push_back(card[i]);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    vector<int> ans;
//    for (int i = 0; i < N; i++) {
//        int num; cin >> num;
//        ans.push_back(num);
//    }
//    int max_k = (int)log2(N);
//    for (int k2 = 1; k2 <= max_k; k2++) {
//        for (int k1 = 1; k1 <= max_k; k1++) {
//            init();
//            process(1, k1, 0, N-1);
//            memset(checked, false, sizeof(checked));
//            card = shuf_card;
//            shuf_card.clear();
//            process(1, k2, 0, N-1);
//            memset(checked, false, sizeof(checked));
//            if (check(shuf_card, ans)) {
//                cout << k1 << ' ' << k2;
//                return 0;
//            }
//            shuf_card.clear();
//        }
//    }
//}