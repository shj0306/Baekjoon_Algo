//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//vector<string> dna;
//
//int main() {
//    fast_io;
//    int N, M, res = 0; cin >> N >> M;
//
//    for (int i = 0; i < N; i++) {
//        string str; cin >> str;
//        dna.push_back(str);
//    }
//
//    for (int i = 0; i < M; i++) {
//        vector<int> cnt(4);
//        for (int j = 0; j < N; j++) {
//            if (dna[j][i] == 'A') cnt[0]++;
//            else if (dna[j][i] == 'T') cnt[1]++;
//            else if (dna[j][i] == 'G') cnt[2]++;
//            else if (dna[j][i] == 'C') cnt[3]++;
//        }
//        int max_dna = cnt[0];
//        char alpha = 'A';
//        if (max_dna < cnt[3]) {
//            max_dna = cnt[3];
//            alpha = 'C';
//        }
//        if (max_dna < cnt[2]) {
//            max_dna = cnt[2];
//            alpha = 'G';
//        }
//        if (max_dna < cnt[1]) {
//            max_dna = cnt[1];
//            alpha = 'T';
//        }
//        cout << alpha;
//        res+=N-max_dna;
//    }
//    cout << '\n' << res;
//}
