#include <bits/stdc++.h>

typedef long long ll;

ll ant_c = 0,dan_c=0; 
ll n,i;
const char* ant = "Anton";
const char *dan = "Danik";
const char *tie = "Friendship";

int main() {
    scanf("%lld\n", &n);
    char c;
    for (i = 0; i < n; i++)
    {
        scanf("%c", &c);
        if (c == 'A') {
            ant_c++;
        } else if (c == 'D'){
            dan_c++;
        }
    }
    if (ant_c > dan_c) {
        printf("%s\n", ant);
    } else if (ant_c < dan_c) {
        printf("%s\n", dan);
    } else {
        printf("%s\n", tie);
    }
}