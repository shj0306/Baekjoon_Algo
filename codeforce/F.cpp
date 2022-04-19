/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> dir(n);
        for (int i = 0; i < n; i++)
            cin >> dir[i];

        vector<vi> res(n, vi(m, 0));
        int opt = 0, optr = 0, optc = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                if (res[r][c] > 0) //방문 여부
                    continue;

                int nr = r, nc = c;
                int depth = 0;
                vector<pii> path;

                auto ok = [&n, &m](int row, int col) {
                    return row > -1 && row < n && col > -1 && col < m;
                };

                do {
                    res[nr][nc] = --depth;
                    path.emplace_back(nr, nc); //경로에 넣어준다.
                    if (dir[nr][nc] == 'L')
                        nc--;
                    else if (dir[nr][nc] == 'R')
                        nc++;
                    else if (dir[nr][nc] == 'U')
                        nr--;
                    else
                        nr++;
                } while (ok(nr, nc) && res[nr][nc] == 0);

                int start = 1;
                if (ok(nr, nc)) { //범위 안에 있는 지
                    if (res[nr][nc] < 0) { //distance 업데이트는 아직 안했다.
                        int cycle = res[nr][nc] - depth + 1;
                        for (int i = 0; i < cycle; i++) {
                            auto p = path.back();
                            path.pop_back();
                            res[p.first][p.second] = cycle;
                        }
                    }
                    start = res[nr][nc] + 1;
                }
                while (!path.empty()) {
                    auto p = path.back();
                    path.pop_back();
                    res[p.first][p.second] = start++;
                }

                if (res[r][c] > opt) {
                    opt = res[r][c];
                    optr = r;
                    optc = c;
                }
            }
        }

        cout << optr + 1 << ' ' << optc + 1 << ' ' << opt << '\n';
    }
}
*/
