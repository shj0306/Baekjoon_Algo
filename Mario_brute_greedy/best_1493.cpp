/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
ll m[25][2]; //큐브 정보

int main() {
    m[0][0]=1;
    for(int i=1 ; i<20 ; i++) m[i][0]=m[i-1][0]*2;
    ll x, y, z; int n;
    cin >> x >> y >> z;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        int a, b; cin >> a >> b;
        m[a][1]=b;
    }
    ll tot=0, ans=0;
    for (int i = 5; i >= 0; i--) {
        tot<<=3; //길이 1차이에 부피는 8배 차이
        ll tmp = min(m[i][1], (x/m[i][0]) * (y/m[i][0]) * (z/m[i][0]) - tot);
        ans += tmp; tot += tmp;
    }
    printf("%lld\n", tot==x*y*z ? ans : -1);
    return 0;
}
*/
