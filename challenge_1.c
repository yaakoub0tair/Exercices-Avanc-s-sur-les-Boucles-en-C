#include <stdio.h>
int main(){
    int nb,i ;
    printf("saisir un nombre:\n");
    scanf("%d",&nb);
    for ( i = 10; i>0 ; i--)
    {
        printf("%d X %d = %d \n",nb,i,nb*i);
    }
    





    return 0;
}