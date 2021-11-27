#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b,y,x;
    printf("Input x,y,b:\n"); scanf("%f%f%f",&x,&y,&b);
    if(b==y || b<x)
    {
        printf("Does not exist the value z");
    }
    else
    {
        printf("z= %.2f",log(b-y)*sqrt(b-x));
    }
    return 0;
}
