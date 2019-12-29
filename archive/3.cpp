#include <bits/stdc++.h>

typedef long long ll;

ll w1,w2;
ll years=0;
int main() {
    scanf("%lld %lld", &w1, &w2);
    while (!(w1 > w2)) {
        years++;
        w1*=3;
        w2*=2;
    }
    printf("%lld", years);
}