//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int N; //질문의 개수
//vector<int> result;
//vector<int> possible_set;
////504가지 3자리 숫자(123~987)
////조건에 맞는 숫자인지 판단한다.
//bool check(int num) {
//    set<char> res;
//    for (auto c : to_string(num)) {
//        if (c == '0') return false;
//        res.insert(c);
//    }
//    return (res.size() == 3);
//}
//
////해당 숫자에 해당 스트라이크, 볼이 가능한 모든 숫자를 set에 저장(중복)
//void ret_possible(int strike, int ball, const string& val) {
//    for (int num : result) {
//        string s_num = to_string(num);
//        int s = 0, b = 0;
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                if (val[i] == s_num[j]) {
//                    if (i == j) s++;
//                    else b++;
//                }
//            }
//        }
//        if (s == strike && b == ball) possible_set.push_back(num);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    int num, strike, ball;
//
//    for (int i = 123; i <= 987; i++) {
//        if (check(i)) result.push_back(i);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        cin >> num >> strike >> ball;
//        ret_possible(strike, ball, to_string(num));
//        result = possible_set;
//        possible_set.clear();
//    }
//    cout << result.size() << '\n';
//}