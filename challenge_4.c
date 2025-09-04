#include <stdio.h>
int main(){
    int n,inverse,rev=0;
    printf("donner mois un nombre de 3 ou plus chiffre:\n");
    scanf("%d",&n);

    while (n>0)
    {
        inverse = n % 10;
        rev = rev * 10 + inverse;
        n = n / 10;
         /* code */
    }
    printf("i'inverse est : %d",rev);

    









    return 0;
}