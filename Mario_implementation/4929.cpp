/*
#include <bits/stdc++.h>
using namespace std;
vector<int> v1,v2;
map<int, int> m1;

int compare_val(int start1, int end1, int start2, int end2) {
    int sum1 = 0; int sum2 = 0;
    for (int i = start1; i < end1; i++) sum1 += v1[i];
    for (int j = start2; j < end2; j++) sum2 += v2[j];
    if (sum1 > sum2) return sum1;
    else return sum2;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    while(true) {
        int start1 = 0, ans = 0,start2 = 0;
        cin >> n;
        v1 = vector<int>(n+1);
        m1.clear();
        if (n == 0) break;
        for (int i = 1; i <= n; i++) {
            cin >> v1[i];
            m1[v1[i]] = i;
        }
        cin >> m;
        v2 = vector<int>(m+1);
        for (int i = 1; i <= m; i++) {
            cin >> v2[i];
            if (m1[v2[i]]) {
                ans += compare_val(start1, m1[v2[i]], start2, i);
                start1 = m1[v2[i]]; start2 = i;
            }
        }
        ans += compare_val(start1, n+1, start2, m+1);
        cout << ans << '\n';
    }
}*/
