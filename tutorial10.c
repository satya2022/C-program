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

    return 0;
}
