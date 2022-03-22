//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        priority_queue<int, vector<int>, less<>> max_heap;
//        priority_queue<int, vector<int>, greater<>> min_heap;
//
//        unordered_map<int, int> um; //각 숫자 개수 저장
//
//        int k; cin >> k;
//        for (int i = 0; i < k; i++) {
//            char c; int x;
//            cin >> c >> x;
//            if (c == 'I') {
//                max_heap.push(x);
//                min_heap.push(x);
//                um[x]++;
//            }else { //D
//                if (x == -1) { //최솟값 삭제
//                    while(!min_heap.empty()) {
//                        if (um[min_heap.top()] > 0) {
//                            um[min_heap.top()]--;
//                            min_heap.pop();
//                            break;
//                        }else min_heap.pop();
//                    }
//                }else {//x == 1 최댓값 삭제
//                    while(!max_heap.empty()) {
//                        if (um[max_heap.top()] > 0) {
//                            um[max_heap.top()]--;
//                            max_heap.pop();
//                            break;
//                        }else max_heap.pop();
//                    }
//                }
//            }
//        }
//        ///////////이 부분 안해서 틀림////////////
//        while(!max_heap.empty()) {
//            if (um[max_heap.top()] == 0) max_heap.pop();
//            else break;
//        }
//
//        while(!min_heap.empty()) {
//            if (um[min_heap.top()] == 0) min_heap.pop();
//            else break;
//        }
//        ///////////////////////////////////////
//
//        if (max_heap.empty() || min_heap.empty()) cout << "EMPTY" << '\n';
//        else {
//            cout << max_heap.top() << ' ' << min_heap.top() << '\n';
//        }
//    }
//}