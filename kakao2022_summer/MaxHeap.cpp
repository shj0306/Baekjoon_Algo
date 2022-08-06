#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 100000;

template <typename T>
class HEAP {
private:
    int max(int a, int b) {
        return a > b;
    }

//   k번째 노드의 자식이 k*2, k*2+1
    void push_swap(int cur) {
        if (cur == 1) return;
        int par = cur / 2;
        if (heapArr[par] < heapArr[cur]) {
            T tmp = heapArr[par];
            heapArr[par] = heapArr[cur];
            heapArr[cur] = tmp;
            push_swap(cur / 2);
        }
    }

    /*
     * 왼쪽 자식이 존재한다면 cur*2가 힙의 크기보다 작거나 같아야 한다 == 자식 존재 여부 판단
     * left와 right를 위와 같은 방식으로 구하고 자식이 없다면 -1이라는 값으로 set
     * 힙이 완전 이진 트리 기반이기 때문에 왼쪽 자식이 없으면 당연히 오른쪽 자식은 없다.
     */

    void pop_swap(int cur) {
        int left, right, ch;
        left = (cur * 2 <= _sz ? cur * 2 : -1);
        right = (cur * 2 + 1 <= _sz ? cur * 2 + 1 : -1);

        if (left == -1 && right == -1) {
            ch = -1;
        }else if (left != -1 && right == -1) {
            ch = left;
        }else { //자식이 둘다 존재하면
            ch = (heapArr[left] > heapArr[right] ? left : right);
        }

        if (ch == -1) return;
        //자신보다 자식이 더 큰 값을 가졌을 때 swap
        if (heapArr[ch] > heapArr[cur]) {
            T tmp = heapArr[ch];
            heapArr[ch] = heapArr[cur];
            heapArr[cur] = tmp;
            pop_swap(ch);
        }
    }

public:

    int _sz;
    T *heapArr;
    HEAP(int n) {
        _sz = 0;
        heapArr = new int[n+1];
    }
    ~HEAP() {
        delete [] heapArr;
    }

    int empty() {
        return !_sz;
    }

    int size() {
        return _sz;
    }

    T top() {
        return !_sz ? -1 : heapArr[1];
    }

    // heap의 마지막 부분에 삽입 (_sz = 힙의 크기)
    void push(int val) {
        heapArr[++_sz] = val;
        push_swap(_sz);
    }

    /*
     * _sz == 0이면 pop할 것이 없으니 return
     * 힙의 root를 우선 삭제해주고 힙의 마지막에 위치한 값을 root에 넣어준다
     * == heapArr[1] = heapArr[_sz--]
     */
    void pop() {
        if (!_sz) {
            return;
        }
        heapArr[1] = heapArr[_sz--];
        pop_swap(1);
    }


};

int main() {
    int size;
    cin >> size;
    HEAP<int> pq(size);

    int arr[] = {2, 4, 11, 12, 8, 10, 14, 12, 20};
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
        pq.push(arr[i]);

    pq.push(30);
    pq.push(15);

//    pq.pop();
//    pq.pop();

    cout << pq.top() << endl;
    return 0;
}