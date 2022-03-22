//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
////bit_masking, DFS, brute_force, back_tracking
////알파벳은 26자가 최대이므로 비트마스킹 활용 가능
////https://nanyoungkim.tistory.com/173 참고
//// 알파벳 26자를 k-5개 살펴보면서 각 단어들의 학습 여부 파악

//int n,k,ans;
//vector<int> anta;
//
//
//void solve(int start, int cnt, int checked) {
//    if (cnt == 0) { //더 학습할 수 있는 글자가 없는 경우
//        int res = 0;
//        for (int i = 0; i < n; i++) {
//            if ((anta[i] & checked) == anta[i]) res++;
//        }
//        ans = max(ans, res);
//        return;
//    }
//
//    for (int i = start; i < 26; i++) {
//        if ((checked & (1 << i)) == 0) { //i번째 알파벳을 선택하지 않았다면
//            checked |= (1 << i);
//            solve(i, cnt-1, checked);
//            checked &= ~(1 << i);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    int checked = 0;
//    for (int i = 0; i < n; i++) {
//        string word; cin >> word;
//        int num = 0;
//        for (char j : word) {
//            num |= (1 << (j - 'a'));
//        }
//        anta.push_back(num);
//    }
//    if (k < 5) cout << 0;
//    else if (k == 26) cout << n;
//    else {
//        checked |= 1 << ('a'-'a');
//        checked |= 1 << ('c'-'a');
//        checked |= 1 << ('t'-'a');
//        checked |= 1 << ('i'-'a');
//        checked |= 1 << ('n'-'a');
//        solve(0, k-5, checked);
//        cout << ans;
//    }
//}