//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//vector<pii> time_table;
//bool cmp(pii p1, pii p2) {
//    if (p1.first < p2.first) return true;
//    else if (p1.first == p2.first) return p1.second < p2.second;
//    return false;
//}
//int room = 1; //필요한 강의실 최솟값
//priority_queue<int, vector<int>, greater<>> pq;
//int main() {
//    fast_io;
//    int N; cin >> N;
//    time_table = vector<pii>(N);
//    for (int i = 0; i < N; i++) cin >> time_table[i].first >> time_table[i].second;
//    sort(all(time_table), cmp);
//    pq.push(time_table[0].second);
//    for (int i = 1; i < N; i++) {
//        if (time_table[i].first < pq.top()) room++;
//        else pq.pop();
//        pq.push(time_table[i].second);
//    }
//    cout << room << '\n';
//}
////시작 시간을 기준으로 정렬 후 우선순위 큐(최소힙)에 종료시간을 넣어주면서
////가장 빨리 끝나는 시간보다 작으면 강의실 추가 후 push
////같거나 크면 pop 후 push