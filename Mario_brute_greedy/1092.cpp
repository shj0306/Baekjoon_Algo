//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define all2(x) begin(x), end(x)
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, m;
//int cr[50];
//int box[10000];
//
////https://excited-hyun.tistory.com/74
////������ ���� ū ũ������ ���� ���ſ� ������ �ű�� �Ѵ�.
////�Ű��� �ڽ��� ���Ը� 0���� �ٲ� �ߺ� ����� ���� �ش�.
////�ѹ��� ���� �Ǵ� ũ���� ���� �ִ�ȭ �ؾ� �Ѵ�.
//
//int main() {
//    fast_io;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) cin >> cr[i];
//
//    cin >> m;
//    for (int i = 0; i < m; i++) cin >> box[i];
//
//    sort(cr,cr+n);
//    sort(box, box+m);
//
//    if (box[m-1] > cr[n-1]) {
//        cout << -1;
//        return 0;
//    }
//
//    int cnt = 0, t = 0, cr_idx;
//    while(cnt != m) { //��� �ڽ��� �Ű��� ������
//        t++;
//        cr_idx = n-1;//���� ���� ũ���κ���
//        for (int i = m-1; i >= 0; i--) { //���� ���ſ� �ڽ�����
//            if (box[i] == 0) continue;
//            if (cr_idx == -1) break;
//            if (box[i] <= cr[cr_idx]) {
//                cr_idx--;
//                cnt++;
//                box[i] = 0;
//            }
//        }
//    }
//    cout << t;
//}