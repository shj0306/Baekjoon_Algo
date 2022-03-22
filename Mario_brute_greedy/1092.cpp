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
////하중이 가장 큰 크레인이 가장 무거운 물건을 옮기게 한다.
////옮겨진 박스의 무게를 0으로 바꿔 중복 계산을 피해 준다.
////한번에 가동 되는 크레인 수를 최대화 해야 한다.
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
//    while(cnt != m) { //모든 박스가 옮겨질 때까지
//        t++;
//        cr_idx = n-1;//가장 좋은 크레인부터
//        for (int i = m-1; i >= 0; i--) { //가장 무거운 박스부터
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