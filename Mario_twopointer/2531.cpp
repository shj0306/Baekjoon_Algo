/*
#include <bits/stdc++.h>
#include <unordered_map>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, d, k, c; //접시 수, 초밥 수, 연속으로 먹는 수, 쿠폰번호
vector<int> sushi;
unordered_map<int, int> memory;
int main() {
    fast_io;
    cin >> n >> d >> k >> c;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        sushi.push_back(num);
        if (memory[num] == 0) memory[num] = 1;
    }

    if (n == k) {
        (memory[c] == 0) ? cout << memory.size() + 1 << '\n' : cout << memory.size() << '\n';
        return 0;
    }
    memory.clear();
    for (int i = 0; i < k-1; i++) sushi.push_back(sushi[i]);

    int left = 0, right = 0, val = 0, max_kinds = 0, kinds = 0;
    while(true) {
        if (val < k) {
            val++; //먹은 초밥 수
            if (right == n + k - 1) break;
            if (memory[sushi[right]] == 0) {
                memory[sushi[right]] = 1;
                kinds++;
            }else memory[sushi[right]]++;
            right++;
        }else {
            if (val == k) {
                if (memory[c] == 0) {
                    max_kinds = max(max_kinds, kinds+1);
                }else {
                    max_kinds = max(max_kinds, kinds);
                }
            }
            memory[sushi[left]]--; val--;
            if (memory[sushi[left]] == 0) kinds--;
            left++;
        }
    }
    cout << max_kinds << '\n';
}*/
