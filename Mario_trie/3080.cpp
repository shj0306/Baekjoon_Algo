#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n;
int main() {
    cin >> n;
    string name;
    for (int i = 0; i < n; i++) {
        cin >> name;
    }
}
/*
 * 같은 단어로 시작하는 애들끼리 인접해야 함.
 * 5
 * MATO 1
 * MARICA 2
 * MARTA 3
 * MARTINA 4
 * MARA 5
 *
 * MARA MATO MARICA MARTA MARTINA
 *
 */