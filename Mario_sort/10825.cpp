//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//struct Info{
//    string name;
//    int kor, eng, math;
//};
//vector<Info> grade;
//
//bool cmp(Info &i1, Info &i2) {
//    if (i1.kor > i2.kor) return true;
//    if (i1.kor < i2.kor) return false;
//    else {
//        if (i1.eng < i2.eng) return true;
//        if (i1.eng > i2.eng) return false;
//        else {
//            if (i1.math > i2.math) return true;
//            if (i1.math < i2.math) return false;
//            else return i1.name < i2.name;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    grade.resize(N);
//    for (int i = 0; i < N; i++)
//        cin >> grade[i].name >> grade[i].kor >> grade[i].eng >> grade[i].math;
//
//    sort(all(grade), cmp);
//
//    for (int i = 0; i < N; i++) {
//        cout << grade[i].name << '\n';
//    }
//}