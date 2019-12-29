#include <bits/stdc++.h>
#include <string>

typedef long long ll;

int main() {
    char s1[101];
    char s2[101];
    if (fgets(s1, sizeof s1, stdin)) {}
    if (fgets(s2, sizeof s2, stdin)) {}

    for (size_t i = 0; i < strlen(s2); i++)
    {
        char c1 = tolower(s1[i]), c2 = tolower(s2[i]);
        if (!(c1 >= 65 && c1 <= 122)) {
            puts("0");
            exit(0);
        }
        if (!(c2 >= 65 && c2 <= 122)) {
            puts("0");
            exit(0);
        }
        if (!(c1 >= 65 && c1 <= 122)) {
            puts("0");
            exit(0);
        }
        if (c1 > c2) {
            puts("1");
            exit(0);
        }
        if (c1 < c2) {
            puts("-1");
            exit(0);
        }

    }
    puts("0");

}