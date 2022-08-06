#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool is_prime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; i++) if (num % i == 0) return false;
    return true;
}

string &decimal_to_K(int n, int k, string &trans_n) {
    while(n > 0) {
        char c = n % k + '0';
        trans_n.push_back(c);
        n /= k;
    }

    //결과가 거꾸로 나오기 때문에 뒤집어줘야 함.
    reverse(begin(trans_n), end(trans_n));
    return trans_n;
}

long long ret_val(string num) {
    long long val = 0;
    for (int i = 0; i < num.length(); i++) {
        val += (num[i]-'0') * (long long)pow(10, num.length() - i - 1);
    }
    return val;
}

int solution(int n, int k) {
    int answer = 0, start = 0;
    string trans_n;

    if (k != 10) decimal_to_K(n, k, trans_n);
    else trans_n = to_string(n);

    while(start < trans_n.length()) {
        int idx = (int)trans_n.find('0', start);
        if (idx == string::npos) {
            long long num = ret_val(trans_n.substr(start));
            if (is_prime(num)) answer++;
            break;
        } else {
            long long num = ret_val(trans_n.substr(start, idx - start));
            if (idx != start && is_prime(num)) answer++;
            start = idx + 1;
        }
    }
    return answer;
}