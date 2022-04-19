//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
////xor(^) : 둘 중 하나만 1인 경우 1이된다.
////비트 연산자들의 우선순위는 비교 연산자보다 낮다.
////오버플로우 문제 주의
//
////// 집합의 크기 구하기
//int bitCount(int A) {
//    if (A == 0) return 0;
//    return A % 2 + bitCount(A / 2);
//}
//
//int main() {
//    int num = 0; //공집합
//    num = (1 << 10) - 1; //꽉찬 집합
//    num |= (1 << 2); //원소 추가
//    num &= ~(1 << 2); //원소 삭제
//    if (num & (1 << 2)) cout << "Include" << '\n';
//    else cout << "Not include" << '\n';
//    num ^= (1 << 2); //원소 토클(0->1->0..)
//    //// 두 집합에 대한 연산
//    ////    A | B     → A와 B의 합집합
//    ////    A & B     → A와 B의 교집합
//    ////    A & (~B)  → A에서 B를 뺀 차집합
//    ////    A ^ B     → A와 B중 하나에만 포함된 원소들의 집합
//
//
//    //// 최소 원소 찾기
//    //// 원래 1이었던 비트 중 가장 앞에 있는 비트만 1이 된다.
//    //// 펜윅트리에서도 사용되는 기법
//    int first = num & (-num);
//
//    //// 최소 원소 지우기
//    num &= (num - 1);
//
//    //// 모든 부분집합 순회하기
//    for (int subset = num; subset != 0; subset = ((subset - 1) & num)) {
//        cout << subset << ' ';
//    }
//    //// https://rebro.kr/63 참고
//}