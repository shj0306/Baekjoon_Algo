/*
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> p1, pair<string,int> p2) {
    return p1.second < p2.second;
}
void solve() {
    int n;
    cin >> n;
    map<string, int> key1;
    vector<int> key2(n);
    vector<pair<string,int>>decoded(n);
    string word;
    for (int i = 0; i < n; i++) {
        cin >> word;
        key1[word] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> word;
        key2[i] = key1[word];
    }
    for (int i = 0; i < n; i++) {
        cin >> decoded[i].first;
        decoded[i].second = key2[i];
    }
    sort(begin(decoded), end(decoded), cmp);
    for (int i = 0; i < n; i++)
        cout << decoded[i].first << " ";
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}*/
