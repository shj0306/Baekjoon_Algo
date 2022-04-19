/*
#include <iostream>
#include <map>
using namespace std;
int hash_map[200001];
//map 용량 엄청 크다.
//왜 map을 쓴게 더 오래걸릴까?
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, node_num, k, ans;
    cin >> n >> m >> node_num;
    for (int i = 1; i <= n; i++) cin >> hash_map[i];
    int cycle = n - node_num + 1;
    for (int i = 0; i < m; i++) {
        cin >> k;
        if ((node_num == n) && (k + 1 > n)) {
            cout << hash_map[n] << '\n';
            continue;
        }
        if (k + 1 > n) {
            ans = (k-node_num+1) % cycle + node_num;
        }else ans = k+1;
        cout << hash_map[ans] << '\n';
    }
}*/
