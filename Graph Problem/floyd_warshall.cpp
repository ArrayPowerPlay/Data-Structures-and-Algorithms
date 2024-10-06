#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define MAX 999
// find shortest path of all pairs of nodes in a given graph

int bar[10003][10003];

int main()
{
    
    int n, m;
    int a, b, c;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) bar[i][j] = 0;
            else bar[i][j] = MAX;
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        bar[a][b] = c;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <=n; i++) {
            for (int j = 1; j <= n; j++) {
                bar[i][j] = min (bar[i][j], bar[i][k] + bar[k][j]);
            }
        }
    }   
    //print result
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << bar[i][j] << " ";
        }
        cout << "\n";
    }
}
