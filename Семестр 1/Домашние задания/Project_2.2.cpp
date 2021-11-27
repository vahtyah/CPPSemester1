#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,a;
    printf("Input x,a:\n"); scanf("%f%f",&x,&a);
    if(x==0)
    {
        printf("Does not exist the value w");
    }
    else
    {
        if(abs(x)<1)
        {
            printf("w= %.2f",a*log(abs(x)));
        }
        else
        {
            if(a>=x*x)
            {
                printf("w= %.2f",sqrt(a-x*x));
            }
            else
            {
            printf("Does not exist the value w");
            }

        }
    }

    return 0;
}
