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
//    vector<int> dest(n+1); //�ش� ������ �����ϴ� �ڽ� ��
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
//        int max_truck = 0; //���� �ù谡 �������� �� truck �迭���� ���� ū ��
//
//        for (int j = from; j < to; j++) max_truck = max(max_truck, dest[j]);
//
//        int cap = min(box_cnt, t - max_truck); //������ �� �ִ� �ù� ��
//
//        //��ߺ��� ���������� ������ �ù�� �Ҵ�
//        for (int j = from; j < to; j++) dest[j] += cap;
//        res += cap;
//    }
//    cout << res;
//}

////https://lu-coding.tistory.com/42
////�������� �������� �������� �����ؾ� �Ѵ�.
