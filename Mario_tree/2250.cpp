/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

struct NODE {
    int left;
    int right;
    int height;
    int col;
};

int N, p, ch1, ch2, col = 1;
vector<NODE> tree;
vector<int> parent;

int find_root() {
    int root = 1;
    while(parent.at(root) != -1) {
        root = parent.at(root);
    }
    return root;
}

//각 높이 별로 열 값을 오름차순 정렬
int sort_node(const NODE& node1, const NODE& node2) {
    if (node1.height < node2.height)
        return true;
    else if (node1.height == node2.height)
        return node1.col < node2.col;
    return false;
}

//중위순회를 통해서 col 값을 갱신
void inorder(int node_idx) {
    NODE *node = &tree[node_idx];
    if (node->left != -1) inorder(node->left);
    node->col = col++;
    if (node->right != -1) inorder(node->right);
}

//각 레벨 높이 갱신
void bfs(int root) {
    queue<int> q;
    q.push(root);
    tree[root].height = 1;
    while(!q.empty()) {
        auto cur_node = q.front();
        q.pop();
        int c1 = tree[cur_node].left;
        int c2 = tree[cur_node].right;
        if (c1 != -1) {
            tree[c1].height = tree[cur_node].height + 1;
            q.push(c1);
        }
        if (c2 != -1) {
            tree[c2].height = tree[cur_node].height + 1;
            q.push(c2);
        }
    }
}

int main() {
    fast_io;
    cin >> N;
    tree = vector<NODE>(N+1);
    parent = vector<int>(N+1, -1);
    for (int i = 1; i <= N; i++) {
        cin >> p >> ch1 >> ch2;
        tree[p].left = ch1;
        tree[p].right = ch2;
        tree[p].height = tree[p].col = -1;
        if (ch1 != -1) parent[ch1] = p;
        if (ch2 != -1) parent[ch2] = p;
    }

    int root = find_root();

    //중위순회로 열 값 갱신
    inorder(root);

    //bfs로 각각의 높이를 갱신한다.
    bfs(root);

    //각각의 높이에 해당하는 원소들의 col 위치를 통해서 최대 넓이를 구한다.
    sort(begin(tree)+1, end(tree), sort_node);

    int height = 1;
    int min_col = -1; //해당 레벨에서 가장 왼쪽에 있는 열
    int max_width = 1;
    int max_height = 1;
    for (int i = 2; i <= N; i++) {
        if (height < tree[i].height) {
            height++;
            min_col = tree[i].col;
        }
        else if (height == tree[i].height) {
            if (max_width < tree[i].col - min_col + 1) {
                max_width = tree[i].col - min_col + 1;
                max_height = height;
            }
        }
    }

    cout << max_height << ' ' << max_width << '\n';
    return 0;
}
// http://melonicedlatte.com/algorithm/2018/08/26/193359.html
// 참고 코드
*/
