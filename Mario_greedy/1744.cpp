//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//vector<int> vec;
//
//int main() {
//    fast_io;
//    int N;
//    cin >> N;
//    bool is_zero = false;
//    int minus = 0, plus = 0, total = 0;
//    for (int i = 0; i < N; i++) {
//        int num;
//        cin >> num;
//        if (num == 0) is_zero = true;
//        if (num < 0) minus++;
//        vec.push_back(num);
//    }
//    sort(all(vec));
//    int sz = (int) vec.size();
//    plus = sz - minus;
//
//    if (minus % 2 == 0) {
//        for (int i = 0; i < minus-1; i+=2)
//            total += (vec[i] * vec[i+1]);
//    }else if (is_zero){
//        for (int i = 0; i < minus; i+=2)
//            total += (vec[i] * vec[i+1]);
//        plus--;
//        minus++;
//    }else {
//        for (int i = 0; i < minus-2; i+=2)
//            total += (vec[i] * vec[i+1]);
//        total += vec[minus-1];
//    }
//
//    if (plus % 2 == 0) {
//        for (int i = sz-1; i >= minus+1; i-=2) {
//            if (vec[i] == 1 || vec[i] == 0 || vec[i-1] == 1 || vec[i-1] == 0)
//                total += vec[i] + vec[i-1];
//            else total += vec[i] * vec[i-1];
//        }
//    }else  {
//        for (int i = sz-1; i >= minus+2; i-=2) {
//            if (vec[i] == 1 || vec[i] == 0 || vec[i-1] == 1 || vec[i-1] == 0)
//                total += vec[i] + vec[i-1];
//            else total += vec[i] * vec[i-1];
//        }
//        total += vec[minus];
//    }
//    cout << total << '\n';
//}