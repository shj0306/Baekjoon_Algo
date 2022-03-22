//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, t, m;
//
//struct Info {
//    int src, des, cnt;
//};
//
//bool cmp(Info p, Info q) {
//    if (p.des == q.des) return p.src < q.src;
//    else return p.des < q.des;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> t;
//    vector<Info> town;
//    vector<int> dest(n+1); //해당 마을에 가야하는 박스 수
//    cin >> m;
//    for (int i = 1; i <= m; i++) {
//        int src, des, cnt;
//        cin >> src >> des >> cnt;
//        town.push_back({src, des, cnt});
//    }
//    sort(all(town), cmp);
//
//    int res = 0;
//    for (int i = 0; i < m; i++) {
//        auto[from, to, box_cnt] = town[i];
//        int max_truck = 0; //현재 택배가 지나가야 할 truck 배열값중 가장 큰 값
//
//        for (int j = from; j < to; j++) max_truck = max(max_truck, dest[j]);
//
//        int cap = min(box_cnt, t - max_truck); //가져갈 수 있는 택배 수
//
//        //출발부터 도착전까지 가능한 택배수 할당
//        for (int j = from; j < to; j++) dest[j] += cap;
//        res += cap;
//    }
//    cout << res;
//}

////https://lu-coding.tistory.com/42
////목적지를 기준으로 오름차순 정렬해야 한다.
