/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int dx[] = {1,0,-1,0}; //동->남->서->북 방향
int dy[] = {0,1,0,-1};

int main() {
    int n, m, r;
    cin >> n >> m >> r;

    vector<vi> arr(n+1,vi(m+1));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    //이 규칙에서 항상 시작점은 x,y값이 같은 값에서 시작
    int group_val = min(n,m) / 2;

    for (int i = 0; i < r; i++) {
        for (int j = 1; j <= group_val; j++) {
            int row = j; int col = j;
            int value = arr[row][col]; //값이 수정되기 전에 미리 저장함.
            int idx = 0;
            while(idx < 4) {
                int nr = row + dy[idx];
                int nc = col + dx[idx];

                if (nc >= j && nr >= j && nc <= m-j+1 && nr <= n-j+1) {
                    arr[row][col] = arr[nr][nc];
                    col = nc;
                    row = nr;
                }else idx++; //범위를 벗어나면 방향 전환
            }
            arr[j+1][j] = value; //마지막 값을 제대로 넣어준다.
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << arr[i][j] << ' ';
        cout << '\n';
    }
}
//https://yongku.tistory.com/코드 참조*/
