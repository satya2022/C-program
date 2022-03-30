#include <stdio.h>
int main()
{
    int marks[4] = {45, 54, 4, 6};
    /*for (int i = 0; i <4; i++)
{
    printf("enter the value of %d element of the array\n",marks[i]);
    scanf("%d", &marks[i]);
}*/
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d element of the array is%d\n", i, marks[i]);
    }

    return 0;
}
