/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct RULE {
    int start;
    int end;
    int interval;
};
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k, d; //상자 개수, 규칙 개수, 도토리 개수
    cin >> n >> k >> d;
    ll start = 1, end = n, mid;
    vector<RULE> rules(k);
    for (int i=0; i < k; i++) {
        cin >> rules[i].start >> rules[i].end >> rules[i].interval;
    }
    while(start <= end) {
        mid = (start + end) / 2; ll cnt = 0, tmp;
        for (int i = 0; i < k; i++) {
            tmp = (mid <= rules[i].end) ? mid : rules[i].end;
            if (tmp >= rules[i].start) cnt += (tmp - rules[i].start) / rules[i].interval + 1;
        }
        if (cnt < d) start = mid + 1;
        else end = mid - 1;
    }
    cout << start << '\n';
}
*/
/*
 * mid값으로 계산할 때 end보다크면 end로 조정해야 한다는 것을 놓쳤다.
 */
