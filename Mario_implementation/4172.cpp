/*
#include <bits/stdc++.h>
using namespace std;
int cache[1000001] = {1,};
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    for (int i = 1; i <= 1000000; i++) {
        int i1 = (int)(i - sqrt(i));
        int i2 = (int)(log(i));
        int i3 = (int)(i*sin(i)*sin(i));
        cache[i] = (cache[i1] + cache[i2] + cache[i3]) % 1000000;
    }
    while(true) {
        cin >> n;
        if (n == -1) break;
        cout << cache[n] << '\n';
    }
}*/
