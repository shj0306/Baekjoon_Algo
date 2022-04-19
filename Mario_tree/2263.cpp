//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int N;
//vector<int> inorder;
//vector<int> Index;
//vector<int> postorder;
///*
// * 후위 순회 인덱스를 이용해 각 구간의 루트 지정 가능
// * 전위 순회 데이터로 탐색한다.
// * 전위순회 요소에 대한 인덱스를 저장해서 효율을 높인다.
// * Index 배열 사용 : 28ms
// * Index 배열 사용 X: 1116ms
// */
//void solve(int inS, int inE, int poS, int poE) {
//    if (inS > inE || poS > poE) return;
//    int root_idx = Index[postorder[poE]];
//    int left = root_idx - inS;
//    cout << inorder[root_idx] << ' ';
//
//    solve(inS, root_idx-1, poS, poS+left-1);
//    solve(root_idx+1, inE, poS+left, poE-1);
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    inorder = postorder = Index = vector<int>(N+1);
//    for (int i = 1; i <= N; i++) {
//        cin >> inorder[i];
//        Index[inorder[i]] = i;
//    }
//    for (int i = 1; i <= N; i++) cin >> postorder[i];
//    solve(1, N, 1, N);
//}
//
////https://donggoolosori.github.io/2020/10/15/boj-2263/