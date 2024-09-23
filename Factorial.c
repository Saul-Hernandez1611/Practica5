#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Introduce un número: ");
    scanf("%d", &n);
    
    if (n < 0)
        printf("El factorial no está definido para números negativos.\n");
    else
        printf("El factorial de %d es %lld\n", n, factorial(n));

    return 0;
}
