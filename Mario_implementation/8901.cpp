/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

vector<int> price(3);
int ans;

int main() {
    int t;
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    while(t--) {
        int a,b,c, val = 0;
        ans = 0;
        cin >> a >> b >> c;
        cin >> price[0] >> price[1] >> price[2]; //ab/bc/ca

        for (int i = 0; i <= min(a,b); i++) {
            int bc, ca = 0;
            if (price[1] >= price[2]) {//bc >= ca
                bc = min(b-i,c);
                ca = min(a-i,c-bc);
            }else {//bc < ca
                ca = min(a-i,c);
                bc = min(b-i,c-ca);
            }
            ans = max(ans, i * price[0] + bc * price[1] + ca * price[2]);
        }
        cout << ans << '\n';
    }
}*/
