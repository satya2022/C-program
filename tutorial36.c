//ARRAYS   AS FUNCTION  ARGUMENTS
#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d of %d\n", i, array[i]);
    }

    return 0;
    array[0] =234;//VERY IMPORTANT POINT  THAT  IF YOU CHANGE ANY VALUE HERE, IT GETS REFLACTED IN  main();
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("the value of index 0 is %d\n", arr[0]);

    func1(arr);
    printf("the value of index 0 is %d\n", arr[0]);

    return 0;
}
