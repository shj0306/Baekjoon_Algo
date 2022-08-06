/*
#include <vector>
using namespace std;
int solution(vector<int> stones, int k) {
    int answer, mid, start = 1, end = 2e8;
    while (start <= end) {
        mid = (start + end) / 2;
        int cnt = 0;
        for (int stone : stones) {
            if (mid > stone) cnt++;
            else cnt = 0;
            if (cnt >= k) {
                end = mid - 1;
                break;
            }
        }
        if (cnt < k) {
            answer = mid;
            start = mid + 1;
        }
    }
    return answer;
}
*/
/*
 * stones 배열 각 원소의 최솟값은 1 최댓값은 2e8이므로
 * 이를 이용해서 이분 탐색을 하는 동안 건널 수 있는(cnt < k)경우의 mid값을 저장해준다.
 */