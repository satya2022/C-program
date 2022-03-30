//if u whant next case will be print then (dont take {break} symbol)
#include <stdio.h>
int main()
{
    int age;

    printf("enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf(" the age is 3\n");
        //  break;
    case 13:
        printf(" the age is 13\n");
        break;

    case 23:
        printf(" the age is 23\n");
        break;

    default:
        printf("age not 3,13 and 23");
        break;
    }
    return 0;
}
