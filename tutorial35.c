//CALL THE VALUE  AND CALL THE REFERENCE
#include <stdio.h>

void changevalue(int *address)
{
    *address = 37565;
}
int main()
{
    int a = 34, b = 56;
    printf("the value a now is %d\n", a);
    changevalue(&a);
    printf("the v alue of a now is %d\n", a);
    return 0;
}
