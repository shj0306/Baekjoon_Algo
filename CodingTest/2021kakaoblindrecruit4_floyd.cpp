/*
#include <vector>
#define INF 2e8
using namespace std;
typedef pair<int,int> pii;

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = INF;
    vector<vector<int>> d(n+1, vector<int>(n+1, INF));

    for (auto & fare : fares) {
        d[fare[0]][fare[1]]=fare[2];
        d[fare[1]][fare[0]]=fare[2];
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j) d[i][j] = 0;

    for (int k = 1; k <= n; k++) { //거치는 곳
        for (int i = 1; i <= n; i++) { //출발
            for (int j = 1; j <= n; j++) { //도착
                if (d[i][k] + d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    for (int k = 1; k <= n; k++) {
        answer = min(answer, d[s][k] + d[k][a] + d[k][b]);
    }
    return answer;
}
int main() {
    solution(7,3,4,1,{{5, 7, 9}, {4, 6, 4}, {3, 6, 1}, {3, 2, 3}, {2, 1, 6}});
}*/
