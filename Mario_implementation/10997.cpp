/*
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define endl '\n'

// Set up : Global Variables
int N;
char B[4*100-1][4*100-3];
int my, mx;
int dy[4] = {0, +1, 0, -1};
int dx[4] = {+1, 0, -1, 0};

// Set up : Functions Declaration
void f(int n);


int main()
{
    // Set up : I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Set up : Input
    cin >> N;

    // Control : Output
    if (N == 1) { */
/* N=1 은 특이케이스로 간주 *//*

        cout << "*" << endl;
        exit(0);
    }

    // Process
    memset(B, ' ', sizeof(B)); */
/* 빈칸으로 초기화 *//*

    my = 2*N-1; */
/* 그림 한 가운데 점의 y 좌표 *//*

    mx = 2*N-2; */
/* 그림 한 가운데 점의 x 좌표 *//*

    B[my+1][mx] = B[my][mx] = B[my-1][mx] = '*'; */
/* N=1 일 때 그려지는 부분 그리기 *//*

    f(2); */
/* 나머지 부분 그리기 *//*


    // Control : Output
    int H = 4*N-1, W = 4*N-3; */
/* 전체 그림의 세로 길이와 가로 길이 *//*

    for (int i=0; i<H; i++) {
        */
/* 줄의 공백 제거 <= 출력 형식이 잘못되었습니다의 원인 *//*

        string line;
        for (int j=0; j<W; j++) {
            line.push_back(B[i][j]);
        } while (line.back() == ' ') line.pop_back();
        cout << line << endl;
    }
}

// Helper Functions
void f(int n)
*/
/* N=n 일 때 그려지는 부분 그리기 *//*

{
    int sy = my - (2*n-1); */
/* 시작점(맨 왼쪽 위)의 y 좌표 *//*

    int sx = mx - (2*n-2); */
/* 시작점(맨 왼쪽 위)의 x 좌표 *//*

    */
/* 4*n-3 은 현재 그려지는 부분의 세로 길이, 4*n-1 은 현재 그려지는 부분의 가로 길이 *//*

    */
/* 오른쪽, 아래쪽, 왼쪽, 위쪽 순서로 점을 이동시키며 별표를 찍음 *//*

    int count[4] = {4*n-3, 4*n-1, 4*n-3, 4*n-1};
    for (int i=0; i<4; i++) {
        int cnt = count[i];
        while (cnt--) {
            B[sy][sx] = '*';
            if (cnt > 0) { sy += dy[i], sx += dx[i]; }
        }
    }

    */
/* 마무리
     * *****    *****
     * *   *    *
     * *   *    *  **
     * *   * => *   *
     * *   *    *   *
     * *   *    *   *
     * *****    *****
     *//*

    swap(B[my-(2*n-2)][mx+(2*n-2)], B[my-(2*n-3)][mx+(2*n-3)]);

    */
/* 전체 그림을 모두 그렸다면 종료 *//*

    if (n == N) return;
    f(n+1); */
/* 다음 부분 그리기 *//*

}*/
