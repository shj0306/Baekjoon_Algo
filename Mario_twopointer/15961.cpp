#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, d, k, c;
vector<int> sushi;
int sushi_cnt[3001];

int main() {
    fast_io;
    //Á¢½Ã ¼ö, ÃÊ¹ä °¡Áþ¼ö, ¿¬¼ÓÇØ¼­ ¸Ô´Â Á¢½Ã ¼ö, Äíº» ¹øÈ£
    cin >> N >> d >> k >> c;
    sushi.resize(N);

    for (int i = 0; i < N; i++) cin >> sushi[i];
    for (int i = 0; i < k-1; i++) sushi.push_back(sushi[i]);

    int l = 0, r = 0, tot_cnt = 0, cnt = 0, ans = 1;
    while(r < N+k-1) {
        if (tot_cnt < k) {
            tot_cnt++;
            if (sushi_cnt[sushi[r]] == 0) cnt++;
            sushi_cnt[sushi[r]]++;
            r++;
        }else {
            if (sushi_cnt[c] == 0) ans = max(ans, cnt+1);
            else ans = max(ans, cnt);
            sushi_cnt[sushi[l]]--;
            tot_cnt--;
            if (sushi_cnt[sushi[l]] == 0) {
                cnt--;
            }
            l++;
        }
    }
    cout << ans;
}