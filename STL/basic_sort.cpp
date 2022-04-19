//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//int arr[] = {3,2,7,116,62,235,1,23,55,77};
//int sorted[10];
//void bubble_sort() {
//    bool is_done = false;
//    while (!is_done) {
//        is_done = true;
//        for (int i = 0; i < 9; i++) {
//            if (arr[i] > arr[i + 1]) {
//                is_done = false;
//                swap(arr[i], arr[i + 1]);
//            }
//        }
//    }
//}
//
//void insertion_sort() {
//    for (int i = 1; i < 10; i++) {
//        int j, key = arr[i];
//        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
//            arr[j+1] = arr[j]; //right
//        }
//        arr[j+1] = key;
//    }
//}
//
//void selection_sort() {
//    for (int i = 0; i < 10; i++) {
//        int min_idx = i;
//        for (int j = i; j < 10; j++) {
//            if (arr[min_idx] > arr[j]) min_idx = j;
//        }
//        swap(arr[i], arr[min_idx]);
//    }
//}
//
////���ĵ� 2���� �κ� �迭�� �պ��ϴ� �Լ�
//void merge(int list[], int left, int right) {
//
//    int mid = (left+right) / 2;
//    int i = left, j = mid + 1, k = left, l;
//    while(i <= mid && j <= right) {
//        if (list[i] <= list[j])
//            sorted[k++] = list[i++];
//        else
//            sorted[k++] = list[j++];
//    }
//
//    if (i > mid) {
//        for (l = j; l <= right; l++)
//            sorted[k++] = list[l];
//    }else {
//        for (l = i; l <= mid; l++)
//            sorted[k++] = list[l];
//    }
//
//    //���� �迭�� �纹��
//    for (l = left; l <= right; l++)
//        list[l] = sorted[l];
//}
//
//void merge_sort(int list[], int left, int right) {
//    int mid;
//    if (left < right) {
//        mid = (left+right) / 2;
//        merge_sort(list, left, mid);
//        merge_sort(list, mid+1, right);
//        merge(list, left, right);
//    }
//}
//
//
//// 1. �ǹ��� �������� 2���� �κ� ����Ʈ�� ������.
//// 2. �ǹ����� ���� ���� ��� ���� �κ� ����Ʈ��, ū ���� ������ �κ� ����Ʈ�� �ű��.
///* 2���� ��յ� �迭 list[left...pivot-1]�� list[pivot+1...right]�� �պ� ���� */
///* (������ ���ڵ��� ���ĵǴ� ����) */
//int partition(int list[], int l, int r) {
//    int low, high;
//    low = l;
//    high = r + 1;
//    int &pivot = list[l];
//
//    do{
//        do{
//            low++;
//        }while(low <= r && list[low] < pivot);
//
//        do {
//            high--;
//        }while(high >= l && list[high] > pivot);
//
//        if (low < high) swap(list[low], list[high]);
//    }while(low < high);
//
//    swap(pivot, list[high]);
//
//    return high;
//}
//
//void quick_sort(int list[], int l, int r) {
//    if (l < r) {
//        int q = partition(list, l, r);
//
//        quick_sort(list, l, q-1);
//        quick_sort(list, q+1, r);
//    }
//}
//
//int main() {
//    fast_io;
//
//    quick_sort(arr, 0, 9);
//    for (auto val : arr) cout << val << ' ';
//}