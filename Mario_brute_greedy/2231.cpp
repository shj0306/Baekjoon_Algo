/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n;
    cin >> n;
    int answer = n;
    for (int i = n-1; i >= 1; i--) {
        string num = to_string(i);
        int digit_sum = 0;
        for (char c : num) {
            digit_sum += c -'0';
        }
        if (i + digit_sum == n)
            answer = min(answer, i);
    }
    if (answer == n) cout << 0 << '\n';
    else cout << answer << '\n';
}*/
