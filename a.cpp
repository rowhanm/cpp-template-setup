#include <bits/stdc++.h>

typedef long long ll;

ll i,n,h,sum; 
const ll MAX_N = 1e6+5;
ll a[MAX_N];

int main() {
    scanf("%lld %lld", &n, &h);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] <= h) {
            sum++;
        } else {
            sum+=2;
        }
    }
    printf("%lld\n", sum);
}