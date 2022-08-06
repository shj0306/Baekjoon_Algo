#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.first > b.first;
}
vector<pair<int,int>> cube;
ll l,w,h;
ll calc_func(int i) {
    ll side = 1 << cube[i].first;
    return (l/side)* (w/side) * (h/side);
}
int main() {
    ll n,side,cnt,tmp,cur = 0;
    ll answer = 0, total_v;
    cin >> l >> w >> h >> n;
    cube = vector<pair<int,int>>(n);
    total_v = l * w * h; //전체 박스 볼륨
    for (int i = 0; i < n; i++) cin >> cube[i].first >> cube[i].second;
    sort(begin(cube), end(cube), cmp);

    for (int i = 0; i < n; i++) {
        side = pow(2, cube[i].first); //한 변의 길이
        cnt = calc_func(i); //해당 큐브가 박스에 들어갈 수 있는 최대 개수
        tmp = cnt; //다음 값에 넘겨 주기 위해 저장
        if (i) { //1000
            ll diff = cube[i-1].first - cube[i].first; //이전 순서 때 채웠던 큐브의 한 변의 길이와 차이
            cnt -= cur * pow(1<<diff,3); //겹치는 부분의 개수 제거
        }
        if (cube[i].second < cnt) { //최종적으로 넣을 수 있는 최대 갯수보다 가지고 있는 개수가 적은 경우
            total_v -= pow(side,3) * cube[i].second;
            answer += cube[i].second;
            cur = (tmp - (cnt - cube[i].second)); //cur : 현재 박스에 쌓여 있는 상태
        }else { //넣을 수 있는 최대 갯수 이상을 가지고 있는 경우
            total_v -= pow(side,3) * cnt;
            answer += cnt;
            cur = tmp;
        }
    }

    if (total_v == 0) cout << answer << '\n';
    else cout << -1 << '\n';
}
