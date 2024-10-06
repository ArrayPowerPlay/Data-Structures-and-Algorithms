#include <stdio.h>
#include <stdlib.h>

void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = (r + l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        // merge two subarrays into one
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], R[n2];
        for (int i = 0; i < n1; i++) L[i] = arr[l + i];
        for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] > R[j]) {
                arr[k] = R[j];
                j++;
            }
            else {
                arr[k] = L[i];
                i++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    merge_sort(a, 0, n - 1);
    printf("List after being sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
