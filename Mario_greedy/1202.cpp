//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//int N,K;
//
//priority_queue<int> pq;
//vector<int> backpack;
//vector<pii> jew;
//long long total; //보석 가격의 합의 최댓값
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    for (int i = 0; i < N; i++) {
//        int weight, cost;
//        cin >> weight >> cost;
//        jew.emplace_back(weight, cost);
//    }
//
//    for (int i = 0; i < K; i++) {
//        int weight; cin >> weight;
//        backpack.push_back(weight);
//    }
//
//    sort(all(jew)); sort(all(backpack));
//    int idx = 0;
//    for (int i = 0; i < K; i++) {
//        int weight = backpack[i];
//        while(idx < N && jew[idx].first <= weight) {
//            pq.push(jew[idx++].second);
//        }
//        if(!pq.empty()) {
//            total += pq.top();
//            pq.pop();
//        }
//    }
//    cout << total << '\n';
//}
////jaimemin.tistory.com/760 참고
///*
// * 1. 가방과 보석을 무게 기준 오름차순 정렬
// * 2. 각 가방에 대해서 담을 수 있는 보석들을 우선순위 큐에 담아 준다.
// * 3. top에 있는 원소를 total에 더한다. (없다면 패스)
// * 4. 모든 가방을 다 돌면 정답 출력
// *
// * 시간복잡도 = O(K*(loga+logb+logc+...)) (a+b+c+d... = N)
// */