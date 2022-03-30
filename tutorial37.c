//ARRAYS   AS FUNCTION  ARGUMENTS
#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d  is %d\n", i, array[i]);
    }

    return 0;
    //  array[0] = 234; //VERY IMPORTANT POINT  THAT  IF YOU CHANGE ANY VALUE HERE, IT GETS REFLACTED IN  main();
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is  %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;

    return 0;
}

//MULTIDIMANTIONAL ARRAYS
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 2; i++)
        {
            printf("the value of %d ,%d is %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}

int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};

    /* 
   printf("the value of index 0 is %d\n", arr[0]);

    func1(arr);
    printf("the value of index 0 is %d\n", arr[0]);
    */
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}
