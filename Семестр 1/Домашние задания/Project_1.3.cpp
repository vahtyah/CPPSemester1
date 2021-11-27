#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Input a= "); scanf("%d",&a);
    printf("Input b= "); scanf("%d",&b);
    if(a==0)
    {
        if(b!=0)
         printf("Non roots");
        else
         printf("Innumerable roots");
    }
    else
    {
        printf("x= %.2f",(float)-b/a);
    }
    return 0;
}
