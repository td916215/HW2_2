#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 15, b = 99;
    int x;
    printf("a = %d b = %d\n",a,b);

    x = a;
    a = b;
    b = x;
    printf("After swapping: a = %d and b = %d",a,b);

    return 0;
}
