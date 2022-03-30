//pointer
#include <stdio.h>
int main()
{
    printf("lets lern about pointer\n");
    int a = 76;
    int *ptra = &a;
    printf("the addrace of pointer  to a is%p\n", &ptra);
    printf("the value of a is%p\n", &a);
    printf("the value of a is%p\n", ptra);
    printf("the value of a is%d\n", *ptra);
    printf("the value of a is%d\n", a);
    return 0;
}
