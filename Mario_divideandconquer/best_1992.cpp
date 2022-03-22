/*
#include <bits/stdc++.h>
using namespace std;
string v[64];
int check(int n, int x, int y) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (v[x][y] != v[x+i][y+j]) return 0;
        }
    return 1;
}
string Sol(int n, int x, int y) {
    if (check(n,x,y)) return string(1, v[x][y]);
    string ret = "("; n >>= 1;
    ret += Sol(n,x,y);
    ret += Sol(n,x,y+n);
    ret += Sol(n,x+n,y);
    ret += Sol(n,x+n,y+n);
    return ret + ")";
}
int main() {
    int n; cin >> n;
    for (int i = 0; i <n; i++) cin >> v[i];
    cout << Sol(n,0,0) << '\n';
    return 0;
}*/
