#include <stdio.h>
#include <stdlib.h>

void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

int partition(int arr[], int low, int high) {
    // choose pivot as the last element of the list
    int pivot = arr[high];
    // all the elements whose index > i is larger or equal to pivot
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = partition(arr, low, high);
        quick_sort(arr, low, mid - 1);
        quick_sort(arr, mid + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    quick_sort(a, 0, n - 1);
    printf("List after being sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
