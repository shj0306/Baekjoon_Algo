//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, ans;
//bool checked[8]; //��� ���� ����
//vector<pii> egg;
//
//void break_eggs(int idx, int cnt) {//���� �տ� ��� �ִ� ��� ��ġ, ���ݱ��� ���� ��� ��
//    if ((idx == N-1 && cnt == N-1) || (idx == N)) {
//        ans = max(ans, cnt);
//        return;
//    }
//    int tmp_cnt = cnt;
//    if (checked[idx]) break_eggs(idx+1, cnt);
//    else {
//        int health1 = egg[idx].first; //�տ� ��� �ִ� ��� ������
//        for (int i = 0; i < N; i++) {
//            int health2 = egg[i].first; //���� ġ���� �ϴ� ��� ������
//            if (idx == i || checked[i]) //�ڱ� �ڽ� Ȥ�� �̹� ���� ����� �ǳʶ�
//                continue;
//            if (egg[idx].first <= egg[i].second) {
//                tmp_cnt++;
//                checked[idx] = true;
//            }else egg[idx].first -= egg[i].second;
//
//            if (egg[i].first <= egg[idx].second) {
//                tmp_cnt++;
//                checked[i] = true;
//            }else egg[i].first -= egg[idx].second;
//
//            break_eggs(idx+1, tmp_cnt);
//            tmp_cnt = cnt;
//            checked[idx] = checked[i] = false;
//            if (egg[idx].first < health1) egg[idx].first += egg[i].second;
//            if (egg[i].first < health2) egg[i].first += egg[idx].second;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    egg = vector<pii>(N); //{������,����}
//
//    for (int i = 0; i < N; i++) cin >> egg[i].f >> egg[i].s;
//
//    break_eggs(0, 0);
//    cout << ans;
//}