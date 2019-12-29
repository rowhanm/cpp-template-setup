#include <bits/stdc++.h>

typedef long long ll;

int main() {
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    int c = 0, r=0;
    for (int i = 1; i < 6; i++)
    {
        scanf("%d %d %d %d %d\n", &c1, &c2, &c3, &c4, &c5);
        if (c1 == 1)
        {
            r = i, c = 1;
        }
        if (c2 == 1) {
            r = i, c = 2;
        }
        if (c3 == 1) {
            r = i, c = 3;
        }
        if (c4 == 1) {
            r = i, c = 4;
        }
        if (c5 == 1) {
            r = i, c = 5;
        }
    }
    int res = abs(3 - r) + abs(3 - c);
    printf("%d\n", res);
}