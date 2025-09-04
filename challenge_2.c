#include <stdio.h>
int main(){
    int nb,i,j; 
    printf("saisire un nembre entier positif :\n");
    scanf("%d",&nb);
    for ( i = 0; i <= nb; i++)
    {
        for ( j = 1; j <= nb-i; j++)
        {
            /* code */
            printf(" ");
        }
        for ( j = 1; j <= 2*i-1; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
        
    }
    








    return 0;
}
