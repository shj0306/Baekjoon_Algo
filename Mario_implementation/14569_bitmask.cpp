/*#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
ll a[1010];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        int k; cin >> k;
        while(k--){
            int b; cin >> b;
            a[i] |= 1ll << b;
        }
    }

    cin >> m;
    for(int i=1;i<=m;i++){
        int b; cin >> b;

        ll k = 0;
        while(b--){
            int c; cin >> c;
            k |= 1ll << c;
        }

        int ans = 0;
        for(int j=1;j<=n;j++) if((a[j] & k) == a[j]) ans++;
        cout << ans << "\n";
    }
}*/
//kyo20111 코드
/*
 * bit mask를 활용해서 각 과목 수업시간을 하나의 정수 값으로 저장한다
 * 마찬가지로 각 학생의 비어있는 교시 역시 하나의 정수 값으로 만든 뒤
 * 두 값을 &연산을 통해 수업시간으로 만든 정수값이 그대로 나온다면 ++1
 */
