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
//// ���� ����
//int n, l, r;
//vector<pair<int, int> > edges[MAX_N + 1];
//int depth[MAX_N + 1];
//map<int, int> latest_node;
//map<int, int> node_to_num;
//set<int> selected_nodes;
//
//// num�� �����ִ� ��带 �����մϴ�.
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
//// num�� �����ִ� ���� �ֱ��� ��� ��ȣ�� node�� �����մϴ�.
//void Push(int node, int num) {
//    if(!node)
//        return;
//
//    latest_node[num] = node;
//    node_to_num[node] = num;
//    selected_nodes.insert(node);
//}
//
//// ���� u�� ���� Ʈ�� ����
//// ���� �ٸ� ���ڰ� limit ������ �ְ��� ���� ���� ���� ����Ͽ� ��ȯ�մϴ�.
//long long DFS(int u, int limit) {
//    // ���� �ٸ� ������ ������ limit + 2�� �ȴٸ�
//    // ���� ������ ���õ� ���� �ϳ��� �����Ͽ�
//    // ���� �ٸ� ������ ������ limit + 1���� �����մϴ�.
//    int prev_node = 0, num = 0;
//    //two pointer (k+1)���� �����Ѵ�.
//    if((int) selected_nodes.size() == limit + 2) {
//        prev_node = *selected_nodes.begin();
//        num = node_to_num[prev_node];
//        Pop(num);
//    }
//
//    // u�� �������� �ϴ� �ְ��� ���� ���� ���� ����մϴ�.
//    long long stick_cnt = depth[u];
//    if((int) selected_nodes.size() == limit + 1)
//        stick_cnt -= depth[*selected_nodes.begin()];
//
//    // u �ڽĵ��� ��ȸ�մϴ�.
//    for(int i = 0; i < (int) edges[u].size(); i++) {
//        int v, num;
//        tie(v, num) = edges[u][i];
//        depth[v] = depth[u] + 1;
//
//        // ������ �����ִ� ���� num�� �ش��ϴ� �ֽ� ������ �����մϴ�.
//        int prev_node = Pop(num);
//        Push(v, num);
//
//        // �ڽ� v�� �̵��Ͽ� �ְ��� ���� ���� ��������� ����մϴ�.
//        stick_cnt += DFS(v, limit);
//
//        // ���ϸ鼭 ���� ���� �������ݴϴ�.
//        Pop(num);
//        Push(prev_node, num);
//    }
//
//    // ���� ���� �������ݴϴ�.
//    Push(prev_node, num);
//
//    return stick_cnt;
//}
//
//int main() {
//    // �Է�:
//    cin >> n >> l >> r;
//    for(int i = 0; i < n - 1; i++) {
//        int u, v, num;
//        cin >> u >> v >> num;
//        edges[u].emplace_back(v, num);
//    }
//
//    // ���� �ٸ� ������ ������ l�̻� r������ ��츦 ����մϴ�.
//    cout << DFS(1, r) - DFS(1, l - 1);
//    return 0;
//}