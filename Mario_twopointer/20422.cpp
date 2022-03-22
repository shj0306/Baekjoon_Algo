//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//int main() {
//    fast_io;
//    string str; cin >> str;
//    int sz = (int)str.length();
//    vector<int> r_v;
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == 'R') r_v.push_back(i);
//    }
//
//    int l = 0, r = (int)r_v.size()-1, res = 0;
//    int cnt_l = 0, cnt_r = 0; //정확한 k개수를 구하기 위해 n개수를 제외시킨다.
//    while(l <= r) {
//        int l_k = r_v[l] - cnt_l; //왼쪽 k수
//        int r_k = sz - r_v[r] - cnt_r - 1; //오른쪽 k수
//
//        res = max(res, r-l+1 + min(l_k, r_k) * 2);
//        if (l_k < r_k) {
//            l++; cnt_l++;
//        }
//        else {
//            r--; cnt_r++;
//        }
//    }
//    cout << res;
//}