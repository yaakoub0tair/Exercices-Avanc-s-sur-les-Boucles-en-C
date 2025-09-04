#include <stdio.h>
#include <math.h>  

int main() {
    int n;
    printf("Saisir votre nombre :\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1; 

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
