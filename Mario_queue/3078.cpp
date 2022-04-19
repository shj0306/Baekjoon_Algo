/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    queue<int> q[21]; //이름 2~20
    string name; long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> name;
        while(!q[name.length()].empty() && (i - q[name.length()].front()) > k) q[name.length()].pop();
        ans += q[name.length()].size();
        q[name.length()].push(i);
    }
    cout << ans << '\n';
    return 0;
}*/
//hint
/*
 * 이름 글자에 대응되는 큐를 전부 만들어주는 것이 핵심
 * 그리고 입력을 받을 때마다 현재 인덱스와 큐에 가장 먼저 들어간 값의 인덱스 차이가 k를 넘어서면 pop 시켜준다.
 */