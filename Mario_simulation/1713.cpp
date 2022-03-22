//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, m;
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//
//    map<int, pii> candi;
//
//    for (int i = 1; i <= m; i++) {
//        int num; cin >> num;
//        if (candi.find(num) != candi.end()) candi[num].first++;
//        else if (candi.size() < n) candi[num] = {1,i};
//        else {
//            int remove_num = 0; //추천횟수가 가장 적거나 가장 오래 있었던 사람
//            int min_cnt = m+1;
//            for (auto it = candi.begin(); it != candi.end(); it++) {
//                if (min_cnt > it->second.first) {
//                    remove_num = it->first;
//                    min_cnt = it->second.first;
//                }else if (min_cnt == it->second.first) {
//                    if (candi[remove_num].second > candi[it->first].second)
//                        remove_num = it->first;
//                }
//            }
//            candi.erase(remove_num);
//            candi[num] = {1, i};
//        }
//    }
//    for (auto it = candi.begin(); it != candi.end(); it++)
//        cout << it->first << ' ';
//}