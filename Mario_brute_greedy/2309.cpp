/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    vector<int> dwarf(9);
    for (int i = 1; i <= 9; i++) {
        cin >> dwarf[i-1];
    }
    sort(begin(dwarf), end(dwarf));
    vector<int> temp;
    for (int i = 1; i <= 7; i++) temp.push_back(1);
    for (int i = 1; i <= 2; i++) temp.push_back(0);
    sort(begin(temp), end(temp));

    do {
        int sum = 0; vector<int> tmp;
        for (int i = 0; i < 9; i++) {
            if (temp[i]) {
                sum += dwarf[i]; tmp.push_back(dwarf[i]);
            }
        }
        if (sum == 100) {
            for (auto &val : tmp) {
                cout << val << '\n';
            }
            break;
        }
    }while(next_permutation(begin(temp), end(temp)));
    return 0;
}
*/
