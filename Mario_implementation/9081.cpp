/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

string word;
bool cmp(pii p1, pii p2) {
    if (p1.second > p2.second) return true;
    else if (p1.second == p2.second) return word[p1.first] < word[p2.first];
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<pii> v;
        cin >> word;
        for (int i = word.size()-1; i >= 1; i--) {
            for (int j = i - 1; j >= 0; j--) {
                if (word[i] > word[j]) {
                    v.emplace_back(i,j);
                    break;
                }
            }
        }
        if (v.size() == 0) {
            cout << word << '\n';
            continue;
        }
        sort(begin(v), end(v), cmp);
        swap(word[v[0].first], word[v[0].second]);
        sort(word.begin()+v[0].second+1, word.end());
        cout << word << '\n';
    }
}*/
