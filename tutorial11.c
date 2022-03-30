#include <stdio.h>
int main()
{
    int age;

    printf("enter your age\n");
    scanf("%d", &age);
    printf("you have entered\n%d as your age\n", age);

    if (age > 17)
    {
        printf("you can voit!");
    }
    else if (age > 10)
    {
        printf("you are between 10 to 15 and you can for kinds! ");
    }
    else
    {
        printf("you can not voit!");
    }

    return 0;
}
