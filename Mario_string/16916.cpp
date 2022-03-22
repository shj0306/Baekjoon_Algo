//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
////https://ansohxxn.github.io/algorithm/kmp/ ����
////kmp �˰���
////�κ� ���ڿ� �˻�
////�ؽ�Ʈ �ȿ� �˻��ϰ��� �ϴ� �˻�� �ϳ��� �� ���
//
////O(M)
//vector<int> Fail(string pattern) {
//    int m = (int)pattern.length();
//    vector<int> pi(m); //��� ���Ұ� 0���� �ʱ�ȭ�� ���¿��� ����
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
//    int m = (int)pattern.length(); //�˻����� ����
//    int n = (int)text.length(); //�ؽ�Ʈ�� ����
//    vector<int> pos; //�˻��� ������ ��ġ�� ����
//    vector<int> pi = Fail(pattern); //��ó�� ����
//
//    /*
//    i : text pointer(index)
//    j : �˻��� ���������� �������� ��ġ�� ����
//     ������ �ϳ��� ��ġ�ϴ� �� �־���,
//     ���� ��ġ���� �ʴ´ٸ�(text[i] != search[j])
//          �������� ��ġ�ߴ� �Ϳ��� �ִ������ (���λ�=���̻�)�� ��ġ�� �۾��� ���ش�.
//          ���� �˻����� pi[j-1](=������ ��ġ�� ����) ��ġ���� �˻��� �� �ֵ��� ���ش�.
//     ���� ��ġ�Ѵٸ�
//          �˻��� ������ ���
//              �������� �̹� m-1���� ��ġ�� �� ���¿��� ���� ���ڰ� ��ġ�ϰ� �� ���̹Ƿ� �˻�� ã�µ� ����
//              ������ �����ߵ���, �� �ִ� ������ (���λ�=���̻�)�� ��ġ�� �ٽ� �񱳸� �����ϸ� �ȴ�. ��������
//              �˻����� pi[m-1] ��ġ�������� �˻� ����
//          ���� �������� ���� ���
//              �˻����� ���� ���ڸ� �˻��ϸ� �ȴ�. text[i+1], search[j+1]
//
//     while
//        ���� : ������ ��ġ�Ѱ� 1�� �̻��̾�� �ϰ� ���� �� ���ڰ� ��ġ���� ����.
//        ���� : ��ġ�� �۾�
//            �� �̻� ������ ��ġ�ϴ� �� �ϳ��� ���� ��ĥ�� ���ų� ���� ���ڰ� ��ġ�� ������ ��ġ�� �۾��� �����Ѵ�.
//            �� �۾��� �� �� i�� �����̴�.
//
//     if
//        ���� : ���� �� ���� ��ġ�� ��
//        ���� : �˻��� �����ߴٸ� ��ġ�� �۾�
//              ���� �ƴ϶�� �˻��� ���� ���� �񱳱�
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