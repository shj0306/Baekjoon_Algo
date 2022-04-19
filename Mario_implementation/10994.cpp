/*
#include <bits/stdc++.h>
using namespace std;
char star[1000][1000];
void make_star(int row, int n) {
    if (n == 0) return;
    for (int i = row; i <= row + 4 * (n-1); i++) {
        for (int j = row; j <= row + 4 * (n-1); j++) {
            if (i != row && i != row + 4 * (n-1) && j != row && j != row + 4 * (n-1)){
                star[i][j] = ' ';
                continue;
            }
            star[i][j] = '*';
        }
    }
    make_star(row+2,n-1);
}
int main() {
    int n;
    cin >> n;
    make_star(0,n);
    for (int i = 0; i < 1 + 4 * (n-1); i++) {
        for (int j = 0; j < 1 + 4 * (n-1); j++)
            cout << star[i][j];
        cout << '\n';
    }
}*/
