//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N,l, r, res;
//
//int main() {
//    fast_io;
//    cin >> N;
//    vector<pii> time;
//    vector<int> index;
//
//    for (int i = 0; i < N; i++) {
//        int te, tx; cin >> te >> tx;
//        time.emplace_back(te,tx);
//        index.push_back(te); index.push_back(tx);
//    }
//
//    //��ǥ ����
//    //�ߺ��� �� ���� �� ����
//    //lower_bound�� Ȱ���ؼ� ��ǥ ����
//    index.erase(unique(all(index)), end(index));
//    sort(all(index));
//    for (auto& [st, en] : time) {
//        st = lower_bound(all(index), st) - begin(index);
//        en = lower_bound(all(index), en) - begin(index);
//    }
//
//    vector<int> pSum(index.size()+1);
//    for (auto [st, en] : time) {
//        pSum[st]++;
//        pSum[en]--;
//    }
//    for (int i = 1; i < pSum.size(); i++) pSum[i] += pSum[i-1];
//
//    res = *max_element(all(pSum));
//    l = find(all(pSum), res) - begin(pSum);
//    cout << res << '\n';
//    for (int i = l; i <= pSum.size(); i++) {
//        if (pSum[i] != res || i == pSum.size()) {
//            cout << index[l] << ' ' << index[i];
//            break;
//        }
//    }
//}