/*
#include <bits/stdc++.h>
using namespace std;
int arr[1024][1024];
int dx[] = {1,0,1};
int dy[] = {0,1,1};
int n,temp,tried;
bool cmp(int a, int b) {
    return a > b;
}
void dfs(int len) {
    vector<int> v;
    if (len < 2) return;
    for (int i = 0; i < len; i+=2) {
        for (int j = 0; j < len; j+=2) {
            v.push_back(arr[i][j]);
            for (int k = 0; k < 3; k++) {
                int nx = j + dx[k];
                int ny = i + dy[k];
                v.push_back(arr[ny][nx]);
            }
            sort(begin(v), end(v), cmp);
            arr[i/2][j/2] = v[1];
            v.clear();
        }
    }
    dfs(len/2);
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    temp = n;
    while (temp != 1) {
        temp /= 2;
        tried++;
    }
    dfs(n);
    cout << arr[0][0] << '\n';
}
*/
