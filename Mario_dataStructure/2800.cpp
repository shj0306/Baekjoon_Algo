//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
////가장 최근에 들어간 괄호부터 삭제
//set<string> ans;
//vector<int> open, close;
//string str;
//bool check[200];
//
//void dfs(int idx, int cnt) {
//    if (idx == open.size()) {
//        if (cnt > 0) {
//            string tmp;
//            for (int i = 0; i < str.length(); i++) {
//                if (!check[i]) tmp += str[i];
//            }
//            ans.insert(tmp);
//        }
//        return;
//    }
//    dfs(idx+1, cnt); //삭제 x
//    check[open[idx]] = true;
//    check[close[idx]] = true;
//    dfs(idx+1, cnt+1); //삭제
//    check[open[idx]] = false;
//    check[close[idx]] = false;
//}
//
//int main() {
//    fast_io;
//    cin >> str;
//    stack<int> stk;
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == '(') {
//            stk.push(i);
//        }else if (str[i] == ')') {
//            int oidx = stk.top();
//            stk.pop();
//            open.push_back(oidx);
//            close.push_back(i);
//        }
//    }
//    dfs(0,0);
//    for (auto it = ans.begin(); it != ans.end(); it++) cout << *it << '\n';
//}