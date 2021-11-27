#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Input a= "); scanf("%d",&a);
    printf("Input b= "); scanf("%d",&b);
    printf("Input c= "); scanf("%d",&c);
    if(a==0)
    {
        if(b==0&&c==0)
        {
            printf("Innumerable roots");
        }
        else if(b==0)
        {
            printf("Non roots");
        }
        else
        {
            printf("x= %g",(float)-c/b);
        }
    }
    else
    {
        float delta = b*b-4*a*c;
        float x1 = (-b - sqrt(delta))/(2*a);
        float x2 = (-b + sqrt(delta))/(2*a);
        if(delta > 0)
        {
            printf("x1= %g, x2= %g",x1,x2);
        }
        else if(delta == 0)
        {
            printf("x= %g",x1);
        }
        else
        {
            printf("Non roots");
        }
    }
    return 0;
}
