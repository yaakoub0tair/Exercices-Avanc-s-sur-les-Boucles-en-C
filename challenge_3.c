#include <stdio.h>
#include <math.h>  

int main() {
    int n;
    printf("Saisir votre nombre :\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int Flag = 1; 

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                Flag = 0; 
                break;
            }
        }

        if (Flag) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
