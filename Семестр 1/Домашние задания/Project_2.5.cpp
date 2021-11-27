#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y;
    printf("\tx\t|\ty\n");
    printf("=================================\n");
    for(float i=-4;i<=4;i=i+0.5)
    {
        if(i!=1)
        {
            y = (i*i - 2*i + 2)/(i-1);
            printf("\t%g\t|\t%g\n",i,y);
        }
        else
        {
            printf("\t%g\t|\terror\n",i);
        }
    }
    printf("=================================\n");
    return 0;
}
