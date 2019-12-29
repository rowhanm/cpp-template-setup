#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;

int main() {
    int n;
    scanf("%d\n", &n);
    int c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }

    std::sort(c, c+n);
    for (int &i: c){
        printf("%d ", i);
    }
    puts("");
}