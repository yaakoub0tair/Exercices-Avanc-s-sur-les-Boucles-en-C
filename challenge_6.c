#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("saisir un nombre :");
    scanf("%d",&n);
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
           printf("%d ",i);
        }
        
    }
    printf("\n");
    for (int i = 1; i <=n ; i++)
    {
        if (n%i==0)
        {
           printf("%d ",i);
        }
        
    }
    






    return 0;
}