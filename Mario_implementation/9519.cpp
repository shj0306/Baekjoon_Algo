/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x, cnt = 0;
    vector<string> v; string word, temp, left, right;
    cin >> x >> word;
    int len = (word.size()-1) / 2 + 1;
    temp = word;
    v.push_back(word);
    do {
        left = temp.substr(0, len);
        right = temp.substr(len, word.size()-len);
        int idx = 1;
        for (int i = right.size()-1; i >= 0; i--) {
            left.insert(idx, 1, right[i]);
            idx+=2;
        }
        v.push_back(left);
        temp = left;
        cnt++;
    }while(word != left);
    if (cnt >= x) cout << v[cnt-x] << '\n';
    else cout << v[cnt - x % cnt] << '\n';
}*/
