/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    while(t--) {
        string typing;
        cin >> typing;
        list<char> ans;
        auto it = ans.begin();
        for (char &i : typing) {
            if (i == '<' && it != ans.begin()) it--;
            else if (i == '>' && it != ans.end()) it++;
            else if (i == '-' && it != ans.begin()) it = ans.erase(--it);
            else if (i != '<' && i != '>' && i != '-') ans.insert(it, i);
        }
        for (auto &val : ans) cout << val;
        cout << '\n';
    }
}*/
