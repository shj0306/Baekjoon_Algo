/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> arr, ans;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
    }
    int cur = 1;
    while(arr.size() != 1) {
        cout << cur << ' ';
        arr.erase(begin(arr));
        if (v[cur] > 0) {
            for (int i = 0; i < v[cur] - 1; i++) {
                arr.push_back(arr.front());
                arr.pop_front();
            }
        }else {
           for (int i = 0; i < abs(v[cur]); i++) {
               arr.push_front(arr.back());
               arr.pop_back();
           }
        }
        cur = arr.front();
    }
    cout << arr.front();
    return 0;
}*/
