#include <stdio.h>
int main(){
    int n,som=0,i;
    printf("saisir votre nombre :\n");
    scanf("%d",&n);
    for ( i = 1; i < 10; i++)
    {
       printf("%d X %d = %d \n",n,i,n*i);
       som=som+(n*i);
    }
    printf("somme total est :%d",som);

    








    return 0;

}