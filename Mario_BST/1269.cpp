/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> arr;

bool bin_search(int start, int end, int num) {
    if (start > end) return false;
    int mid = (start + end) / 2;
    if (arr[mid] == num) return true;
    else if (arr[mid] < num) return bin_search(mid+1, end, num);
    else return bin_search(start, mid-1, num);
}

int main() {
    fast_io;
    int n, m, del = 0;
    cin >> n >> m;
    arr = vector<int>(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(begin(arr), end(arr));

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (bin_search(0, n-1, num)) del++;
    }

    cout << n + m - del * 2 << '\n';
    return 0;
}*/
