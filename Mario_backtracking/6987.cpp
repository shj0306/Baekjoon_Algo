//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int answer[4];
//
//void back_tracking(int scores[6][3], int tc, int p, int q) {
//
//    //��� ��⸦ ����ٸ�
//    if (p == 6) {
//        answer[tc] = 1;
//        return;
//    }
//    if (q == 6) {
//        back_tracking(scores, tc, p+1, p+2);
//        return;
//    }
//
//    for (int i = 0; i < 3; i++) {
//        scores[p][i]--;
//        scores[q][2-i]--;
//        if (scores[p][i] >= 0 && scores[q][2-i] >= 0)
//            back_tracking(scores, tc, p, q+1);
//        scores[p][i]++;
//        scores[q][2-i]++;
//    }
//}
//
//int main() {
//    fast_io;
//    // 6�� ������ ����ϴ� ����� ���� ���Ѵ�.
//    // �� ���� ������ 5�� �ƴϰų� ��ü �� ������ 30�� �ƴ� ���� ������ �Ұ����� ���
//
//    for (int i = 0; i < 4; i++) {
//        int match[6][3];
//        int total = 0;
//        for (int j = 0; j < 6; j++) {
//            int sum = 0;
//            for (int k = 0; k < 3; k++) {
//                cin >> match[j][k];
//                sum += match[j][k];
//                total += match[j][k];
//            }
//            if (sum != 5) answer[i] = -1;
//        }
//        if (total != 30) answer[i] = -1;
//        if (answer[i] == -1) {
//            answer[i] = 0;
//            continue;
//        }
//        //��⿡�� ���� �� �ִ� ��� ��츦 ����ؼ� �����ش�.
//        back_tracking(match, i, 0, 1);
//    }
//    for (int i = 0; i < 4; i ++)
//        cout << answer[i] << ' ';
//}
////pch6789�� �ڵ� ����