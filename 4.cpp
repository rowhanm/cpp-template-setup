#include <bits/stdc++.h>

typedef long long ll;

int main() {
    ll n;
    scanf("%lld\n", &n);
    ll res=0;
    for (ll i = 0; i < n; i++)
    {   
        int count=0;
        for (size_t j = 0; j < 3; j++)
        {
            ll s;
            scanf("%lld", &s);
            if (s > 0) count++;
        }
        if (count > 1) res++;
    }
    
    printf("%lld\n", res);
}