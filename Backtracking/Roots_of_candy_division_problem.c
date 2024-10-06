#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// k people and n candies, each person can have 0 candy and up to n candies
int k, n;
int num = 0;

int count(int a, int b) {
    if (a == 0 || a == b) return 1;
    if (a == 1) return b;
    return count(a - 1, b - 1) + count(a, b - 1);
}

int count_roots(int k, int n) {
    return count(k - 1, n + k - 1);
}

void Try(int h, int sum, int arr[]) {
    if (h > k) {
        if (sum == n) {
            printf("Set %d: ", ++num);
            for (int i = 1; i <= k; i++) printf("%d ", arr[i]);
            printf("\n");
        }
        return;
    }
    for (int v = 0; v <= n - sum; v++) {
        arr[h] = v;
        Try(h + 1, sum + v, arr);
    }
}


int main() {
    scanf("%d %d", &k, &n);
    int num_roots = count_roots(k, n);
    printf("Numbers of roots: %d\n", num_roots);
    int *a = (int *) malloc ((k+1) * sizeof(int));
    Try(1, 0, a);
}
