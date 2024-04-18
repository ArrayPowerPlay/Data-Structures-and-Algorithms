#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
// Let X = = {1, 2, ... , n}. List the m-element subsets of X
int a[MAX_SIZE];

int check_last(int m, int n) {
    // check if this is the last form or not. Return 1 if last form and vice versa
        for (int i = 1; i <= m; i++) {
            if (a[i] != n - m + i) return 0;
        }
        return 1;
}

void Generate(int m, int n) {
    // next Generate algorithm
    for (int i = 1; i <= m; i++) a[i] = i;   
    int count = 1;
    while(1) {
        printf("Cau hinh %d: ", count++);
        for (int i = 1; i <= m; i++) printf("%d", a[i]);
        printf("\n");
        if (!check_last(m, n)) {
            int v = m;
            while (v >= 1) {
                if (a[v] != n - m + v) break;
                v--;
            }
            a[v] = a[v] + 1;
            for (int j = v + 1; j <= m; j++) a[j] = a[v] + j - v;
        }
        else break;
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    Generate(m, n);
}
