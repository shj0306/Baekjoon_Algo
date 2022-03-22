//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//int alpha[26] = {3,2,1,2,3,3,3,3,1,1,3,1,
//                 3,3,1,2,2,2,1,2,1,1,2,2,2,1};
//
//int main() {
//    fast_io;
//    queue<int> q;
//    string str; cin >> str;
//    for (char i : str) q.push(alpha[i-'A']);
//
//    while(q.size() > 1) {
//        int sz = (int)q.size();
//        for (int i = 1; i <= sz; i+=2) {
//            if (i == sz) {
//                q.push(q.front());
//                q.pop();
//            }else {
//                int num1 = q.front();
//                q.pop();
//                int num2 = q.front();
//                q.pop();
//                q.push((num1+num2) % 10);
//            }
//        }
//    }
//    q.front() % 2 ? cout << "I'm a winner!" : cout << "You're the winner?";
//}