//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//vector<int> tree;
//
//ll calc_length(int h) {
//    ll height = 0; //얻을 수 있는 나무의 길이
//    for (int i = 0; i < N; i++) {
//        height += (tree[i] - h >= 0 ? tree[i] - h : 0);
//    }
//    return height;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    tree = vector<int>(N);
//
//    for (int i = 0; i < N; i++) cin >> tree[i];
//
//    //설정할 수 있는 절단기 높이 하한, 상한
//    int low = 0, high = 1e9, mid;
//    int ans = 0;
//    while (low <= high) {
//        //내가 만약에 절단기의 높이를 mid라고 잡는다면?
//        mid = (low + high) / 2;
//        //이 때 내가 얻을 수 있는 나무의 길이는?
//        if (calc_length(mid) >= M) {
//            //정답 후보로 가능
//            ans = mid;
//            low = mid + 1;
//        }else high = mid - 1;
//    }
//    cout << ans;
//}