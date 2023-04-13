#include <stdio.h>

long long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int i;
    for (i = 30; i <= 33; i++) {
        printf("%d! = %lld\n", i, fatorial(i));
    }
    return 0;
}
