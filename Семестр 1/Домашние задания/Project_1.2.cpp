#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Input a= "); scanf("%d",&a);
    printf("Input b= "); scanf("%d",&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    if(b!=0)
    {
        printf("%d / %d = %.2f\n",a,b,(float)a/b);
    }
    else
    {
        printf("%d / %d, Impossible to divide by 0",a,b);
    }
    return 0;
}
