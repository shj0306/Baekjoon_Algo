/*
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
vector<vi> arr;
vi op;
int n,m,r;

void change_arr(int num, int row, int col) {
    int temp;
    vector<vi> rot_arr, arr1(row/2+1,vi(col/2+1));
    switch (num) {
        case 1:
            for (int i = 1; i <= row/2; i++)
                for (int j = 1; j <= col; j++)
                    swap(arr[i][j], arr[row-i+1][j]);
            break;
        case 2:
            for (int i = 1; i <= row; i++)
                for (int j = 1; j <= col/2; j++)
                    swap(arr[i][j], arr[i][col-j+1]);
            break;
        case 3:
            rot_arr = vector<vi>(col+1, vi(row+1));
            for (int i = row; i >= 1; i--)
                for (int j = 1; j <= col; j++)
                    rot_arr[j][row-i+1] = arr[i][j];
            arr.clear();
            arr = rot_arr;
            swap(n,m);
            break;
        case 4:
            rot_arr = vector<vi>(col+1, vi(row+1));
            for (int i = 1; i <= row; i++)
                for (int j = col; j >= 1; j--)
                    rot_arr[col-j+1][i] = arr[i][j];
            arr.clear();
            arr = rot_arr;
            swap(n,m);
            break;
        case 5:
            for (int i = 1; i <= row/2; i++)
                for (int j = 1; j <= col/2; j++)
                    arr1[i][j] = arr[i][j];
            //top
            for (int i = row/2+1; i <= row; i++)
                for (int j = 1; j <= col/2; j++)
                    swap(arr[i][j], arr[i-row/2][j]);
            //left
            for (int i = row/2+1; i <= row; i++)
                for (int j = col/2+1; j <= col; j++)
                    swap(arr[i][j-col/2], arr[i][j]);
            //bottom
            for (int i = 1; i <= row/2; i++)
                for (int j = col/2+1; j <= col; j++)
                    swap(arr[i][j], arr[i+row/2][j]);
            //right
            for (int i = 1; i <= row/2; i++)
                for (int j = 1; j <= col/2; j++)
                    swap(arr1[i][j],arr[i][j+col/2]);
            break;
        case 6:
            for (int i = 1; i <= row/2; i++)
                for (int j = 1; j <= col/2; j++)
                    arr1[i][j] = arr[i][j];
            //left
            for (int i = 1; i <= row/2; i++)
                for (int j = 1; j <= col/2; j++)
                    swap(arr[i][j], arr[i][j+col/2]);
            //top
            for (int i = 1; i <= row/2; i++)
                for (int j = col/2+1; j <= col; j++)
                    swap(arr[i][j], arr[i+row/2][j]);
            //right
            for (int i = row/2+1; i <= row; i++)
                for (int j = col/2+1; j <= col; j++)
                    swap(arr[i][j], arr[i][j-col/2]);
            //bottom
            for (int i = 1; i <= row/2; i++)
                for (int j = 1; j <= col/2; j++)
                    swap(arr1[i][j],arr[i+row/2][j]);
            break;
        default:
            break;
    }
}

void print(int r, int c) {
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << arr[i][j] <<' ';
        }
        cout << '\n';
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> r;
    arr = vector<vi>(n+1, vi(m+1));
    op = vi(r);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    for (int i = 0; i < r; i++) cin >> op[i];
    for (int i = 0; i < r; i++)
        change_arr(op[i], n, m);
    print(n,m);
}*/
