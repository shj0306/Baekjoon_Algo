/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
int cmp(pll, pll);
int main() {
    int n; //질문의 총 수
    cin >> n;
    vector<int> hw(n), ans;
    for (int i = 0; i < n; i++) cin >> hw[i];
    ll sum = hw[n-1]; ll m = hw[n-1];

    pair<ll,ll> max_val = {0,1}; //sum, cnt

    for (int k = n-2; k >= 1; k--) {
        sum += hw[k];
        (m > hw[k]) ? m = hw[k] : m = m;
        pair<ll,ll> temp = {(sum-m), (n-k-1)};
        if (0 <= cmp(max_val, temp)) {
            if (0 < cmp(max_val, temp)) ans.clear();
            ans.push_back(k);
            max_val = temp;
        }
    }
    sort(begin(ans), end(ans));
    for (auto &val : ans) cout << val << '\n';
}
int cmp(pll a, pll b) {
    if (a.first / a.second != b.first / b.second)
        return b.first / b.second - a.first / a.second;
    return b.first * a.second - a.first * b.second;
}
*/
/*
 * 참고한 코드
 https://m.blog.naver.com/hongjg3229/221826576310
 평균으로만 대소 비교할 때 발생할 수 있는 예외를 생각하지 못함
 출력초과가 왜 일어났는지 모르겠음
 *
 */
