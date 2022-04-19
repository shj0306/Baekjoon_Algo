/*
#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> preorder;
vector<int> inorder;
pair<int, int> tree[1001];

void make_tree(int x, int idx, int idx1, int idx2) {
    int idx3 = 0;
    for (int i = idx1; i <= idx2; i++)
        if (inorder[i] == x) { idx3 = i; break; }

    if (idx3 != idx1) {
        tree[x].first = preorder[idx + 1];
        make_tree(tree[x].first, idx + 1, idx1, idx3 - 1);
    }
    if (idx3 != idx2) {
        tree[x].second = preorder[idx + 1 + (idx3 - idx1)];
        make_tree(tree[x].second, idx + 1 + idx3 - idx1, idx3 + 1, idx2);
    }
}

void postorder(int x) {
    if (tree[x].first != 0)
        postorder(tree[x].first);
    if (tree[x].second != 0)
        postorder(tree[x].second);
    cout << x << ' ';
}

int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);

    int T; cin >> T;

    while (T--) {
        cin >> N;
        for (int i = 0; i < N; i++) {
            int c; cin >> c;
            preorder.push_back(c);
        }
        for (int i = 0; i < N; i++) {
            int c; cin >> c;
            inorder.push_back(c);
        }
        int root = preorder[0];
        make_tree(root, 0, 0, N - 1);

        postorder(root);
        cout << '\n';
        preorder.clear(); inorder.clear();
        fill_n(tree, 1001, make_pair(0, 0));
    }
    return 0;
}*/
