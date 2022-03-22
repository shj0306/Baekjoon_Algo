//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
////https://ansohxxn.github.io/algorithm/kmp/ 참고
////kmp 알고리즘
////부분 문자열 검색
////텍스트 안에 검색하고자 하는 검색어가 하나일 때 사용
//
////O(M)
//vector<int> Fail(string pattern) {
//    int m = (int)pattern.length();
//    vector<int> pi(m); //모든 원소가 0으로 초기화된 상태에서 시작
//
//    pi[0] = 0;
//    for (int i = 1, j = 0; i < m; i++) {
//        while (j > 0 && pattern[i] != pattern[j]) {
//            j = pi[j-1];
//        }
//        if (pattern[i] == pattern[j]) pi[i] = ++j;
//    }
//    return pi;
//}
//
////O(N)
//bool kmp(const string& pattern, const string& text) {
//    int m = (int)pattern.length(); //검색어의 길이
//    int n = (int)text.length(); //텍스트의 길이
//    vector<int> pos; //검색에 성공한 위치를 저장
//    vector<int> pi = Fail(pattern); //전처리 과정
//
//    /*
//    i : text pointer(index)
//    j : 검색어 포인터이자 이전까지 일치한 개수
//     이전에 하나라도 일치하는 게 있었고,
//     현재 일치하지 않는다면(text[i] != search[j])
//          이전까지 일치했던 것에서 최대길이인 (접두사=접미사)로 걸치는 작업을 해준다.
//          이제 검색어의 pi[j-1](=이전에 일치한 개수) 위치부터 검색할 수 있도록 해준다.
//     현재 일치한다면
//          검색에 성공한 경우
//              이전에도 이미 m-1개가 일치가 된 상태에서 현재 글자가 일치하게 된 것이므로 검색어를 찾는데 성공
//              위에서 설명했듯이, 또 최대 길이인 (접두사=접미사)로 걸치고 다시 비교를 시작하면 된다. 다음부터
//              검색어의 pi[m-1] 위치에서부터 검사 시작
//          아직 성공하지 않은 경우
//              검색어의 다음 글자를 검사하면 된다. text[i+1], search[j+1]
//
//     while
//        조건 : 이전에 일치한게 1개 이상이어야 하고 현재 비교 문자가 일치하지 않음.
//        목적 : 걸치기 작업
//            더 이상 이전에 일치하는 게 하나도 없어 걸칠게 없거나 현재 문자가 일치할 때까지 걸치기 작업을 실행한다.
//            이 작업을 할 때 i는 고정이다.
//
//     if
//        조건 : 현재 비교 문자 일치할 때
//        목적 : 검색에 성공했다면 걸치기 작업
//              아직 아니라면 검색어 다음 글자 비교교
//    */
//    for (int i = 0, j = 0; i < n; i++) {
//        while(j > 0 && text[i] != pattern[j]) {
//            j = pi[j-1];
//        }
//        if (text[i] == pattern[j]) {
//            if (j == m-1) {
//                pos.push_back(i-(m-1));
//                j = pi[m-1];
//            }else j++;
//        }
//    }
//    return !pos.empty();
//}
//
//int main() {
//    fast_io;
//    string text, search;
//    cin >> text >> search;
//    kmp(search, text) ? puts("1") : puts("0");
//}