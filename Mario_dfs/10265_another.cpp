/*
#include <bits/stdc++.h>
using namespace std;
// 입력
int N, K, arr[1010], unionList[1010];
// 정방향 그래프
int graph[1010];
// 역방향 그래프
deque<int> invertedGraph[1010];
// SCC를 구하기 위한 스택
stack<int> stk;
int visited[1010];
// 선행 과제의 수
int countList[1010];
// SCC의 크기
int sccSizeList[1010];
// SCC가 처리할 수 있는 최대 인원
int maxSCCSizeList[1010];
// 총 인원
int totalSum;
// 0-1 냅색 때 사용할 아이템 (내림차순 정렬될거임)
// std::pair<인원, 루트>
vector<std::pair<int, int>> itemList;
pair<int, int> p;
int max_num;

*/
/**
 * SCC를 만들기 위해 정방향 그래프에 대해 DFS
 * @param n 방문할 노드 번호
 *//*

void dfs(int n) {
    if (visited[n]) return;
    visited[n] = 1;
    dfs(graph[n]);
    // 하위노드를 다 탐색한 뒤 해당 노드는 stack에 추가함
    // 이 스택에서 하나씩 빼면서 SCC로 만들어내기 때문에 윗쪽에 있는 노드일수록 먼저 SCC로 묶이게 됨
    stk.push(n);
}
*/
/**
 * 그래프를 SCC 단위로 만드는 함수, 역방향 그래프를 DFS
 *
 * @param n 방문할 노드, stack에서 하나 씩 pop 된 순서대로 n으로 들어옴
 * @param root 루트 노드 번호
 * @param count 현재 SCC 크기
 * @return SCC 크기
 *//*

 int makeScc(int n, int root, int count) {
     if (visited[n]) return count - 1;
     visited[n] = 1;
     unionList[n] = root;

     if (count > 1) {
         //SCC로 묶인 노드들은 선행 과제들이 없다.
         countList[n] = 0;
         countList[root] = 0;
     }

     //역방향 그래프를 기반으로 dfs 탐색하여 하나의 scc로 묶어냄
     for (int t : invertedGraph[n]) {
         count = makeScc(t, root, count + 1);
     }

     return count;
 }

*/
/**
* 위상 정렬
* SCC에서 처리할 수 있는 최대, 최소 인원을 알아내는 함수
*
* @param n 방문할 SCC 번호. 최초로 호출된 topologicalSort()의 n은 countList[n] == 0 인 노드만이 입력으로 들어옴 (즉 선행 과제가 없음)
* @param size SCC가 처리한 노드의 수
* @param root 루트 SCC 번호
* @return SCC가 처리할 수 있는 최대 노드의 수
*//*

int topologicalSort(int n, int size, int root) {
    if (visited[n]) return size;
    visited[n] = 1;
    size += sccSizeList[n];
    if (sccSizeList[n] > 0) {
        p = {size, root};
        itemList.push_back(p);
    }

    //역방향 그래프로의 dfs는 본인이 버스에 탐으로써 버스를 탈 수 있게된 학생들을 모두 탐색한다.
    for (int t : invertedGraph[n]) {
        size = topologicalSort(t, size, root);
    }
    return size;
}

*/
/**
 * 0-1 냅색을 하는 함수
 *
 * @param n n 번째 아이템으로, itemList[n]을 의미
 * @param sum 현재 상태공간트리 노드까지의 결과값의 합
 * @param bound 현재 상태공간트리 노드에서 최대로 다다를 수 있는 이상적인 한계치 bound
 *//*


void search(int n, int sum, int bound) {
    //현재까지 구한 max값보다 bound가 작거나 같으면 유망하지 않음
    //모든 itemList를 방문한 경우 끝
    if (min(bound, K) <= max_num || n == itemList.size()) return;
    //이미 방문한 루트는 다시 방문하지 않는다.
    if (visited[itemList[n].second]) {
        search(n+1, sum, bound);
        return;
    }
    // sum과 현재 노드의 value를 더한 값이 K보다 크면 해당 노드는 건너뜀
    // 유망하지 않은것이 아님.
    // 내림차순 정렬이기에 이후에 K보다 작거나 같은 노드가 등장할 여지가 충분함
    if (sum + itemList[n].first > K) {
        visited[itemList[n].second] = 0;
        // 이제 더는 상태공간트리에 root SCC의 노드가 등장하지 않을 것이기에
        // root가 처리하는 인원들은 bound 계산에서 완전히 제외
        if (itemList[n].first == sccSizeList[itemList[n].second]) {
            search(n+1, sum, bound - itemList[n].first);
        }
        //아직 상태공간 트리에 루트 scc의 노드가 등장 할 수 있기에 아직은 bound 계산에 포함
        else search(n+1, sum, bound);
        return;
    }
    // 현재까지 sum과 value 의 합이 지금까지 구한 max보다 크다면 max를 교체
    max_num = max(max_num, sum + itemList[n].first);

    visited[itemList[n].second] = 1;
    search(n+1, sum + itemList[n].first, bound - maxSCCSizeList[itemList[n].second]
    + itemList[n].first);
    visited[itemList[n].second] = 0;
    // 이제 더는 상태공간트리에 root SCC의 노드가 등장하지 않을 것이기에
    // root가 처리하는 인원들은 bound 계산에서 완전히 제외
    if (itemList[n].first == sccSizeList[itemList[n].second])
        search(n + 1, sum, bound - itemList[n].first);
        // 아직 상태공간 트리에 root SCC의 노드가 등장할 수 있기에 아직은 bound 계산에 포함
    else search(n + 1, sum, bound);

}
int main() {
    cin >> N >> K;
    for (int n = 1; n <= N; n++) {
        cin >> arr[n];
        graph[n] = arr[n];
        invertedGraph[arr[n]].push_back(n);

        if (n != arr[n]) countList[n] = 1;
    }

    //scc 구하기 위한 dfs
    for (int n = 1; n <= N; n++) {
        dfs(n);
    }

    memset(visited, 0, sizeof(visited));

    while(!stk.empty()) {
        int t = stk.top();
        stk.pop();
        sccSizeList[t] = makeScc(t,t,1);
    }

    // 각 SCC에서 처리할 수 있는 최대, 최소 인원을 구함
    memset(visited, 0, sizeof(visited));
    for (int n = 1; n <= N; n++) {
        if (countList[n] == 0) {
            maxSCCSizeList[n] = topologicalSort(n, 0, n);
            totalSum += maxSCCSizeList[n];
        }
    }
    // SCC에서 처리할 수 있는 인원들을 내림차순으로 정렬
    sort(begin(itemList), end(itemList), greater<pair<int,int>>());

    memset(visited, 0, sizeof(visited));

    //0-1 knapsack
    search(0,0,totalSum);

    //최대 인원 출력
    cout << max_num << '\n';
    return 0;
}*/
