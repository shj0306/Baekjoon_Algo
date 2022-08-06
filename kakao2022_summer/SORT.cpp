#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int arr[] = {1,7,2,10,4,5,3};
int tmp[7];

/*
 * 인접한 두 원소를 순차적으로 비교하여 정렬하는 알고리즘
 * O(N^2)
 */
void bubble_sort(int tmp[], int sz) {
    for (int i = 0; i < sz - 1; i++) {
        for (int j = 0; j < sz - 1 - i; j++) {
            if (tmp[j] > tmp[j+1]) {
                int temp = tmp[j];
                tmp[j] = tmp[j+1];
                tmp[j+1] = temp;
            }
        }
    }
}

/*
 * 해당 인덱스에 들어올 원소를 탐색하여 위치를 교환하는 알고리즘
 * O(N^2)
 */
void selection_sort(int tmp[], int sz) {
    for (int i = 0; i < sz; i++) {
        int idx = i;
        int val = tmp[idx];
        for (int j = i; j < sz; j++) {
            if (val > tmp[j]) {
                idx = j;
                val = tmp[j];
            }
        }
        int temp = tmp[i];
        tmp[i] = val;
        tmp[idx] = temp;
    }
}

/*
 * 원소가 어떤 위치에 들어가야 하는 지 탐색하고, 위치를 교환하는 알고리즘
 * O(N^2)
 */
void insertion_sort(int tmp[], int sz) {
    for (int i = 1; i < sz; i++) {
        for (int j = i-1; j >= 0 && tmp[j+1] < tmp[j]; j--) {
            int temp = tmp[j+1];
            tmp[j+1] = tmp[j];
            tmp[j] = temp;
        }
    }
}

/*
 * 분할, 정복 방식을 사용한 정렬 방법. 배열을 더 이상 나눌 수 없을 때 까지 분할하고,
 * merge하는 과정에서 정렬이 진행됩니다.
 * 데이터의 분포에 영향을 받지않는 정렬 방식으로서 최선, 최악, 평균 시간 복잡도는 nlogn입니다
 * (재귀 호출 logn * 병합 n)
 * merge sort는 데이터의 분포에 상관없이 안정적인 성능을 보여주지만,
 */
 ///단점
 ///배열을 사용하면 임시공간이 필요하고 레코드의 크기가 커질수록
 ///임시배열에서 데이터 이동이 많아져 성능이 떨어집니다.

void mergeSort(int tmp[], int src[], int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(tmp, src, mid + 1, e);
    mergeSort(tmp, src, s, mid);

    int p = s;
    int q = mid + 1;
    int idx = s;
    while(p <= mid || q <= e) {
        if (q > e || (p <= mid && src[p] < src[q])) {
            tmp[idx++] = src[p++];
        }else {
            tmp[idx++] = src[q++];
        }
    }

    for (int i = s; i <= e; i++)
        src[i] = tmp[i];
}

/*
 * merge sort와 달리 배열을 비균등하게 분할합니다.
 * 배열 중 하나를 피벗으로 설정하고 피벗을 기준으로 작은 원소는 왼쪽 큰 원소는 오른쪽으로 옮긴다.
 * 옮겨진 각각의 원소들에 대해서 다시 피벗을 잡고 정렬하는 과정을 재귀적으로 호출합니다
 *
 * 평균 시간 복잡도는 nlogn(재귀 호출 깊이 logN * 각 단계별 배열의 비교 수 N)입니다.
 *
 * 배열이 미리 정렬되어있는 상태에서 피벗을 최솟 값 혹은 최대 값으로 선정하는 경우
 * 데이터의 이동이 발생하지 않습니다. 최악의 경우 시간 복잡도는 n^2입니다.
 *
 *
 * locality의 관점에서 본 퀵 정렬이 빠른 이유
 *
 * quick sort는
 * 재귀 호출을 기반으로 분할하고 데이터 탐색 위치가 크게 변하지 않기 때문에 locality를 활용할 수 있습니다.
 *
 *
 */

void quickSort(int arr[], int left, int right) {
    if (left >= right) return;

    int l = left;
    int r = right;
    int pivot = arr[left];

    while(l <= r) {
        while (arr[l] < pivot) {
            l++;
        }
        while(arr[r] > pivot) {
            r--;
        }

        if (r >= l) {
            int tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            l++; r--;
        }
    }

    quickSort(arr, left, r);
    quickSort(arr, l, right);
}

int main() {
    mergeSort(tmp, arr, 0, 6);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << ' ';
}