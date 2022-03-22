/*
#include <bits/stdc++.h>
using namespace std;

map<int, int> memory;
vector<int> ans;
string num;
int max_val;

void back_tracking(int idx) {
    if (idx == num.length()) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << ' ';
        }
        exit(0);
    }
    for (int i = 1; i <= 2; i++) {
        int ii = stoi(num.substr(idx, i));
        if (ii >= 1 && ii <= max_val && memory[ii] == 0) {
            memory[ii] = 1;
            ans.push_back(ii);
            back_tracking(idx + i);
            ans.pop_back();
            memory[ii] = 0;
        }
    }
}

int main() {
    cin >> num;
    if (num.length() >= 10) max_val = (num.length()-9) / 2 + 9;
    else max_val = num.length();
    back_tracking(0);
    return 0;
}*/
