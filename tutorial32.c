//ARRAYS
#include<stdio.h>
int main()
{
    int a=34;
    int*ptra=&a;
    printf("%d\n",ptra+2);
    ptra++;
printf("%d\n", ptra++);
printf("%d",ptra+2);
    return 0;
}
