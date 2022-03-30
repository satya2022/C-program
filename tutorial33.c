//ARRAYS
#include <stdio.h>
int main()
{
    /*   int a=34;
    int*ptra=&a;
    printf("%d\n",ptra+2);
    ptra++;
printf("%d\n", ptra++);
printf("%d",ptra+2);*/

    int arr[] = {311, 2, 3, 4, 5, 6, 67};
    int *arrayptr = arr;
    printf("value  at position 3 of the array is%d\n", arr[3]);
    printf("the addrese of first element of the array is%d\n", &arr[0]);
    printf("the addrese of first element of the array is%d\n", arr);
    printf("the addrese of second  element of the array is%d\n", &arr[1]);
    printf("the addrese of second  element of the array is%d\n", arr + 1);
    printf("the addrese of  third  element of the array is%d\n", &arr[3]);
    arrayptr++;
//arr; this line show will error becose shows zero


    printf("the value  addrese of first element of the array is%d\n", *(&arr[0]));
    printf("the value  addrese of first element of the array is%d\n", arr[0]);
    printf("the value  addrese of first element of the array is%d\n", *(arr));
    printf("the value  addrese of second  element of the array is%d\n", *(&arr[1]));
    printf("the value  addrese of second  element of the array is%d\n", *(arr + 1));

    return 0;
}
