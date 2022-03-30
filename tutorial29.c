#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 54, 4, 6},
                       {3, 2, 3, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */

            printf("enter the value of %d,%d element of the array is%d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}
