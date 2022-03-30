#include <stdio.h>

void arrayRev(int arr[])
{
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};

    for (int i = 0; i < 7; i++)
    {
        printf("the value of %d is %d\n", i, arr[i]);
    }

    arrayRev(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("the value of %d is %d\n", i, arr[i]);
    }

    return 0;
}
