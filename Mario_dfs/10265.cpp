/*
#include <bits/stdc++.h>
using namespace std;
vector<int> visited, scc_label, scc_indegree, scc_size;
vector<vector<int>> person;
vector<pair<int,int>> component_min_max;
int scc_order = 0, order = 0, component_order = 0;
int dp[1001][1001], n, k, p; stack<int> st;

int findSCC(int idx) {
    int min_order = visited[idx] = order++;
    st.push(idx);

    int next_idx;
    for (int i = 0; i < person[idx].size(); i++) {
        next_idx = person[idx][i];

        if (visited[next_idx] == -1) {
            min_order = min(min_order, findSCC(next_idx));

            if (scc_label[next_idx] != -1)
                min_order = min(min_order, findSCC(next_idx));
        }else if (scc_label[next_idx] == -1)
            min_order = min(min_order, visited[next_idx]);
        else
            scc_indegree[scc_label[next_idx]]++;
    }
    if (min_order == visited[idx]) {
        int temp, size = 0;
        while(true) {
            temp = st.top();
            st.pop();
            scc_label[temp] = scc_order;
            size++;
            if (temp == idx)
                break;
        }
        scc_size[scc_order] = size;
        ++scc_order;
    }
    return min_order;
}

void TarjanSCC() {
    visited = vector<int>(n+1, -1);
    scc_label = vector<int>(n+1, -1);
    scc_indegree = vector<int>(n+1, 0);
    scc_size = vector<int>(n+1, 0);

    for (int i = 1; i <= n; i++) {
        if (visited[i] == -1) findSCC(i);
    }
}

int MakeMaxMinOfComponent(int idx, bool is_root, int parent_scc) {
    visited[idx] = true;
    int ret = 0;
    if (is_root) //root node의 scc크기가 최소
        ret = component_min_max[component_order].first = scc_size[scc_label[idx]];
    if (parent_scc != scc_label[idx]) //부모 노드와 다른 scc라면 사이클에 없는 노드
        ret = scc_size[scc_label[idx]];
    int next_idx;
    for (int i = 0; i < person[idx].size(); i++) {
        next_idx = person[idx][i];
        if (!visited[next_idx])
            ret += MakeMaxMinOfComponent(next_idx, false, scc_label[idx]);
    }
    if (is_root)
        component_min_max[component_order].second = ret;
    return ret;
}

int KnapsackDFS(int component_idx, int remain_cap) {
    if (component_idx >= component_order) return 0;
    int &ret = dp[component_idx][remain_cap];
    if (ret != -1) return ret;
    ret = KnapsackDFS(component_idx+1,remain_cap);
    for (int i = component_min_max[component_idx].first; i <= component_min_max[component_idx].second; i++) {
        if (i > remain_cap) break;
        ret = max(ret, KnapsackDFS(component_idx+1, remain_cap - i) + i);
    }
    return ret;
}

int main() {
    cin >> n >> k;
    person = vector<vector<int>>(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> p;
        person[p].push_back(i);
    }

    TarjanSCC();

    component_min_max = vector<pair<int,int>>(scc_order);
    visited = vector<int>(n+1, false);
    for (int i = 1; i <= n; i++) {
        if (scc_indegree[scc_label[i]] == 0 && !visited[i]) {
            MakeMaxMinOfComponent(i, true, scc_label[i]);
            ++component_order;
        }
    }
    memset(dp, -1, sizeof(dp));
    cout << KnapsackDFS(0, k) << '\n';
    return 0;
}
*/
