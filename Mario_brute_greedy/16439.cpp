//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//struct Chic{
//    int c1, c2, c3;
//};
//
//int N, M;
//vector<int> tmp;
//vector<vector<int>> combi; //������ ġŲ ����
//bool used[31];
//
//void select_chic(int idx) {
//    if (tmp.size() == 3) {
//        combi.push_back(tmp);
//        return;
//    }
//
//    for (int i = idx; i < M; i++) {
//        if (!used[i]) {
//            used[i] = true;
//            tmp.push_back(i);
//            select_chic(i);
//            tmp.pop_back();
//            used[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    vector<vector<int>> preference(N+1);
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < M; j++) {
//            int c; cin >> c;
//            preference[i].push_back(c);
//        }
//    }
//
//    select_chic(0);
//
//    int ans = 0;
//    for (auto & comb : combi) {
//        int res = 0;
//        for (int i = 1; i <= N; i++) {
//            int temp = 0;
//            for (auto &chic : comb) temp = max(temp, preference[i][chic]);
//            res += temp;
//        }
//        ans = max(ans, res);
//    }
//    cout << ans;
//}
///*
// * data: N���� ��� M���� ������ ġŲ
// * ����1 : �ִ� 3���� ������ ġŲ�� ��Ų��.
// * ����2 : ��ȣ���� ��Ų ġŲ �� ���� ū ������
// * ���Ϸ��� �� : �������� ���� �ִ�
// */