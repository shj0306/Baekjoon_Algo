/*
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

vector<int> solution(int, int, vector<vector<int>>);
vector<int> dx(4), dy(4);
int visited[100][100];
int cnt;

int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>> picture(m, vector<int>(n,0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> picture[i][j];
        }
    }
    vector<int> ans(2);
    ans = solution(m,n,picture);

    cout << ans[0] << ' ' << ans[1] <<'\n';
}

void dfs(int y, int x,int n,int m, vector<vector<int>> picture) {

    visited[y][x] = 1;
    cnt++;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (visited[ny][nx]) continue;
        if (picture[y][x] != picture[ny][nx]) continue;
        dfs(ny,nx,n,m,picture);
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {

    int number_of_area = 0;
    int max_size_of_one_area = 0;
    dx = {1,-1,0,0}; dy = {0,0,1,-1};
    memset(visited, 0, sizeof(visited));

    vector<int> answer(2);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!picture[i][j]) continue;
            if (!visited[i][j]) {
                number_of_area++;
                dfs(i,j,n,m, picture);
            }
            if (max_size_of_one_area < cnt) max_size_of_one_area = cnt;
            cnt = 0;
        }
    }
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;

    return answer;
}
*/
/*
6 4
1 1 1 0
1 2 2 0
1 0 0 1
0 0 0 1
0 0 0 3
0 0 0 3
 */

