//#include <iostream>
//#include <vector>
//#include <utility>
//#include <map>
//#include <set>
//
//#define MAX_N 100000
//
//using namespace std;
//
//// 변수 선언
//int n, l, r;
//vector<pair<int, int> > edges[MAX_N + 1];
//int depth[MAX_N + 1];
//map<int, int> latest_node;
//map<int, int> node_to_num;
//set<int> selected_nodes;
//
//// num이 써져있는 노드를 삭제합니다.
//int Pop(int num) {
//    if(!latest_node[num])
//        return 0;
//
//    int node = latest_node[num];
//    selected_nodes.erase(node);
//    latest_node[num] = 0;
//    node_to_num[node] = 0;
//    return node;
//}
//
//// num이 써져있는 가장 최근의 노드 번호를 node로 설정합니다.
//void Push(int node, int num) {
//    if(!node)
//        return;
//
//    latest_node[num] = node;
//    node_to_num[node] = num;
//    selected_nodes.insert(node);
//}
//
//// 정점 u의 서브 트리 에서
//// 서로 다른 숫자가 limit 이하인 최고의 나무 막대 수를 계산하여 반환합니다.
//long long DFS(int u, int limit) {
//    // 서로 다른 숫자의 개수가 limit + 2가 된다면
//    // 가장 예전에 선택된 숫자 하나를 제거하여
//    // 서로 다른 숫자의 개수를 limit + 1개로 관리합니다.
//    int prev_node = 0, num = 0;
//    //two pointer (k+1)개를 유지한다.
//    if((int) selected_nodes.size() == limit + 2) {
//        prev_node = *selected_nodes.begin();
//        num = node_to_num[prev_node];
//        Pop(num);
//    }
//
//    // u를 시작으로 하는 최고의 나무 막대 수를 계산합니다.
//    long long stick_cnt = depth[u];
//    if((int) selected_nodes.size() == limit + 1)
//        stick_cnt -= depth[*selected_nodes.begin()];
//
//    // u 자식들을 순회합니다.
//    for(int i = 0; i < (int) edges[u].size(); i++) {
//        int v, num;
//        tie(v, num) = edges[u][i];
//        depth[v] = depth[u] + 1;
//
//        // 간선에 적혀있는 숫자 num에 해당하는 최신 정보를 제거합니다.
//        int prev_node = Pop(num);
//        Push(v, num);
//
//        // 자식 v로 이동하여 최고의 나무 수를 재귀적으로 계산합니다.
//        stick_cnt += DFS(v, limit);
//
//        // 퇴각하면서 이전 값을 복구해줍니다.
//        Pop(num);
//        Push(prev_node, num);
//    }
//
//    // 이전 값을 복구해줍니다.
//    Push(prev_node, num);
//
//    return stick_cnt;
//}
//
//int main() {
//    // 입력:
//    cin >> n >> l >> r;
//    for(int i = 0; i < n - 1; i++) {
//        int u, v, num;
//        cin >> u >> v >> num;
//        edges[u].emplace_back(v, num);
//    }
//
//    // 서로 다른 숫자의 개수가 l이상 r이하인 경우를 계산합니다.
//    cout << DFS(1, r) - DFS(1, l - 1);
//    return 0;
//}