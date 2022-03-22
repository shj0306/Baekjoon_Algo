/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;

bool cmp(pii a, pii b) {
    return a.second > b.second;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll answer = 0, pos = 0;
    int l,n,r1,r2; //l : 움직이는 거리, n : 휴게소 수
    cin >> l >> n >> r1 >> r2;
    vector<pii> rest(n);

    int dif_time = r1-r2; //1meter당 여유 시간

    for (int i = 0; i < n; i++)
        cin >> rest[i].first >> rest[i].second;

    sort(begin(rest), end(rest), cmp);

    for (int i = 0; i < n; i++) {
        if (rest[i].first > pos) {
            answer += rest[i].second * (rest[i].first - pos) * dif_time;
            pos = rest[i].first;
        }
    }
    cout << answer << '\n';
}
//hint
*/
/*
 * 1순위 c값
 * 2순위 위치
 * (dif_time)값은 일정
 * n개의 휴식처가 있다.
 * (xi - pos)  * dif_pos * ci
 * meter당 dif_time만큼의 여유시간
 *
 * 존과 베시 등산간다
 * 존은 쉬지 않고 1미터당 r1초 걸린다.
 *
 * 베시(소?)는 쉬면서 간다
 * 속도는 존보다 빠른 1미터당 r2초
 * 쉴 때마다 풀을 먹을 수 있다.
 *
 *
 * 답 : 존에게 뒤처지지 않으면서 얻을 수 있는 풀의 최댓값
*/
