//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
////���Դ� ���ڰ� �ٸ� ���� ���ķ� �ٽ� ������ �׷� �ܾ� x
////ex) aabac
//// �׷�ܾ� => aaabc
//
//bool alpha[26];
//bool is_group;
//
//int main() {
//    int N; cin >> N;
//    int cnt = 0;
//    for (int i = 0; i < N; i++) {
//        string word; cin >> word;
//        memset(alpha, false, sizeof(alpha));
//        is_group = true;
//        char prev = word[0];
//        alpha[prev-'a'] = true;
//        for (int j = 1; j < word.length(); j++) {
//            if (prev != word[j] && alpha[word[j]-'a']) {
//                is_group = false;
//                break;
//            }else {
//                alpha[word[j]-'a'] = true;
//                prev = word[j];
//            }
//        }
//        if (is_group) cnt++;
//    }
//    cout << cnt;
//}