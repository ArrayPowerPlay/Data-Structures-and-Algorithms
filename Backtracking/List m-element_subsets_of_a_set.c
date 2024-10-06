#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
// List m-element subsets of set N = {1, 2, ..., n}

int a[MAX_SIZE];
int m, n;
int count = 1;

void Try(int k) {
    for (int v = a[k - 1] + 1; v <= n; v++) {
        a[k] = v;
        if (k == m) {
            printf("Cau hinh %d: ", count++);
            for (int i = 1; i <= m; i++) printf("%d", a[i]);
            printf("\n");
        }
        else Try(k + 1);
    }
}


int main() {
    scanf("%d %d", &m, &n);
    Try(1);
}
