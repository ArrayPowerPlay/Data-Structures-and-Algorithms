#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
// sinh xau nhi phan do dai n
int a[MAX_SIZE];

int check_last(int n) {
    // check if this is the last form or not. Return 1 if last form and vice versa
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) return 0;
        }
        return 1;
}

void Generate(int n) {
    // next Generate algorithm
    for (int i = 0; i < n; i++) a[i] = 0;   
    int t = 1;
    while(1) {
        printf("Cau hinh %d: ", t++);
        for (int i = 0; i < n; i++) printf("%d", a[i]);
        printf("\n");
        if (!check_last(n)) {
            int v = n - 1;
            while (v >= 0) {
                if (a[v] == 0) break;
                v--;
            }
            a[v] = 1;
            for (int j = v + 1; j < n; j++) a[j] = 0;
        }
        else break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Generate(n);
}
