/*
#include <iostream>
#include <string>
#include <cmath>

#define ll long long

using namespace std;

int t;
ll x, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> n; //초기 위치, 점프 횟수
        int mod = n % 4;
        if (abs(x) % 2 == 0) {
            for (int j = mod; j > 0; j--) {
                switch (j) {
                    case 1:
                        x -= n;
                        n--;
                        break;
                    case 2:
                        x += n;
                        n--;
                        break;
                    case 3:
                        x += n;
                        n--;
                        break;
                }
            }
        } else {
            for (int j = mod; j > 0; j--) {
                switch (j) {
                    case 1:
                        x += n;
                        n--;
                        break;
                    case 2:
                        x -= n;
                        n--;
                        break;
                    case 3:
                        x -= n;
                        n--;
                        break;
                }
            }
        }
        cout << x <<'\n';
    }
}*/