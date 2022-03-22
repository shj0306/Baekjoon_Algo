/*
#include <bits/stdc++.h>
using namespace std;
vector<string> word;
vector<pair<int,char>> alpha;
int num[10];
int a[26];

int main() {
    //data
    int n, max_val = 0;
    cin >> n;
    word = vector<string>(n);
    for (int i = 0; i < n; i++) cin >> word[i];
    memset(num, 0, sizeof(num));
    alpha = vector<pair<int,char>>(26, {0,' '});
    //process
    for (auto & i : word) {
        int len = i.length()-1;
        for (int j = 0; j < i.length(); j++, len--) {
            alpha[i[j]-'A'].first += pow(10,len);
            alpha[i[j]-'A'].second = i[j];
        }
    }
    sort(begin(alpha), end(alpha), greater<>());
    for (auto & i : alpha) {
        if (i.first == 0) break;
        for (int j = 9; j >= 1; j--) {
            if (!num[j]) {
                a[i.second-'A'] = j;
                num[j] = 1;
                break;
            }
        }
    }
    //print
    for (auto &w : word) {
        int len = w.length() - 1;
        for (auto &c : w) {
            max_val += a[c-'A'] * pow(10,len--);
        }
    }
    cout << max_val << '\n';
    return 0;
}
*/
